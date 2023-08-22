package main

import "C"
import (
	"fmt"
	"os"
	"strings"

	"github.com/kpango/glg"
)

// returnTypeType represents an arbitrary type of return value of the function.
// for example Known reffers to returnTypeWrappersMap (see below)
type returnTypeType byte

const (
	// default value - will cause the function to be skipped and an error will be printed to stdout
	returnTypeUnknown returnTypeType = iota
	// return type is void (in go - the function returns nothing)
	returnTypeVoid
	// METHOD returns nothing, but it has receiver (called self)
	returnTypeStructSetter
	// Known - reffers to getReturnTypeWrapperFunc
	returnTypeKnown
	// return type is a pointer to ImGui struct
	returnTypeStructPtr
	// returns ImGui struct
	returnTypeStruct
	// the method is a constructor
	returnTypeConstructor
	// function with first arugment as pointer of return value
	returnTypeNonUDT
)

// generateGoFuncs generates given list of functions and writes them to file
func generateGoFuncs(prefix string, validFuncs []FuncDef, enumNames []string, structNames []string) error {
	generator := &goFuncsGenerator{
		prefix:      prefix,
		structNames: make(map[string]bool),
		enumNames:   make(map[string]bool),
	}

	for _, v := range structNames {
		generator.structNames[v] = true
	}

	for _, v := range enumNames {
		generator.enumNames[v] = true
	}

	generator.writeFuncsFileHeader()

	for _, f := range validFuncs {
		// check whether the function shouldn't be skipped
		if skippedFuncs[f.FuncName] {
			continue
		}

		args, argWrappers := generator.generateFuncArgs(f)

		if len(f.ArgsT) == 0 {
			generator.shouldGenerate = true
		}

		// stop, when the function should not be generated
		if !generator.shouldGenerate {
			if flags.showNotGenerated {
				glg.Failf("not generated: %s%s", f.FuncName, f.Args)
			}
			continue
		} else {
			if flags.showGenerated {
				glg.Successf("generated: %s%s", f.FuncName, f.Args)
			}
		}

		if noErrors := generator.GenerateFunction(f, args, argWrappers); !noErrors {
			continue
		}
	}

	glg.Infof("Convert progress: %d/%d (%.2f%%)",
		generator.convertedFuncCount,
		len(validFuncs),
		100*float32(generator.convertedFuncCount)/float32(len(validFuncs)),
	)

	goFile, err := os.Create(fmt.Sprintf("%s_funcs.go", prefix))
	if err != nil {
		panic(err.Error())
	}

	defer goFile.Close()

	_, err = goFile.WriteString(generator.sb.String())
	if err != nil {
		return fmt.Errorf("failed to write content of GO file: %w", err)
	}

	return nil
}

// goFuncsGenerator is an internal state of GO funcs' generator
type goFuncsGenerator struct {
	prefix                 string
	structNames, enumNames map[string]bool

	sb                 strings.Builder
	convertedFuncCount int

	shouldGenerate bool
}

// writeFuncsFileHeader writes a header of the generated file
func (g *goFuncsGenerator) writeFuncsFileHeader() {
	g.sb.WriteString(goPackageHeader)

	g.sb.WriteString(fmt.Sprintf(
		`// #include "extra_types.h"
// #include "%[1]s_structs_accessor.h"
// #include "%[1]s_wrapper.h"
import "C"
import "unsafe"

`, g.prefix))
}

func (g *goFuncsGenerator) GenerateFunction(f FuncDef, args []string, argWrappers []ArgumentWrapperData) (noErrors bool) {
	var returnType, cfuncCall, receiver string
	funcName := f.FuncName
	shouldDefer := false

	// determine kind of function:
	returnTypeType := returnTypeUnknown
	_, err := getReturnWrapper(f.Ret, g.structNames, g.enumNames) // TODO: we call this twice now
	if err == nil {
		returnTypeType = returnTypeKnown
	}

	// attention! order is _probably_ important here so consider that
	// before changing anything here
	if f.NonUDT == 1 {
		returnTypeType = returnTypeNonUDT
	} else if f.Ret == "void" {
		if f.StructSetter {
			returnTypeType = returnTypeStructSetter
		} else {
			returnTypeType = returnTypeVoid
		}
	} else if strings.HasSuffix(f.Ret, "*") && (g.structNames[strings.TrimSuffix(f.Ret, "*")] || g.structNames[strings.TrimSuffix(strings.TrimPrefix(f.Ret, "const "), "*")]) {
		returnTypeType = returnTypeStructPtr
	} else if f.StructGetter && g.structNames[f.Ret] {
		returnTypeType = returnTypeStruct
	} else if f.Constructor {
		returnTypeType = returnTypeConstructor
	}

	// determine function name, return type (and return statement)
	switch returnTypeType {
	case returnTypeVoid:
		// noop
	case returnTypeNonUDT:
		outArg := argWrappers[0]
		returnType = strings.TrimPrefix(outArg.ArgType, "*")

		cfuncCall = fmt.Sprintf("*%s", f.ArgsT[0].Name)

		argWrappers[0].ArgDef = fmt.Sprintf(`%s := new(%s)
%s
		`, f.ArgsT[0].Name, returnType, outArg.ArgDef)
		args = args[1:]
	case returnTypeStructSetter:
		funcParts := strings.Split(f.FuncName, "_")
		funcName = strings.TrimPrefix(f.FuncName, funcParts[0]+"_")
		if len(funcName) == 0 || !strings.HasPrefix(funcName, "Set") || skippedStructs[funcParts[0]] {
			return false
		}

		receiver = funcParts[0]
	case returnTypeKnown:
		shouldDefer = true
		returnType = f.Ret
	case returnTypeStructPtr:
		// return Im struct ptr
		shouldDefer = true
		returnType = strings.TrimPrefix(f.Ret, "const ")
	case returnTypeStruct:
		shouldDefer = true
		returnType = f.Ret
	case returnTypeConstructor:
		shouldDefer = true
		parts := strings.Split(f.FuncName, "_")
		returnType = parts[0] + "*"

		suffix := ""
		if len(parts) > 2 {
			suffix = strings.Join(parts[2:], "")
		}

		funcName = "New" + parts[0] + suffix
	default:
		glg.Debugf("Unknown return type \"%s\" in function %s", f.Ret, f.FuncName)
		return false
	}

	rw, err := getReturnWrapper(returnType, g.structNames, g.enumNames)
	if err != nil {
		switch returnTypeType {
		case returnTypeKnown, returnTypeStructPtr, returnTypeConstructor, returnTypeStruct:
			return false
		}
	}

	if rw.returnType != "" {
		returnType = rw.returnType
	}

	g.sb.WriteString(g.generateFuncDeclarationStmt(receiver, funcName, args, returnType, f))
	argInvokeStmt, declarations, finishers := g.generateFuncBody(argWrappers)
	g.sb.WriteString(strings.Join(declarations, "\n"))
	if len(declarations) > 0 {
		g.sb.WriteString("\n")
	}

	if shouldDefer {
		g.writeFinishers(shouldDefer, finishers)
	}

	// write non-return function calls (finalizers called normally)
	switch returnTypeType {
	case returnTypeVoid, returnTypeNonUDT:
		g.sb.WriteString(fmt.Sprintf("C.%s(%s)\n", f.CWrapperFuncName, argInvokeStmt))
	case returnTypeStructSetter:
		g.sb.WriteString(fmt.Sprintf(`
selfArg, selfFin := self.handle()
defer selfFin()
C.%s(selfArg, %s)
`, f.CWrapperFuncName, argInvokeStmt))
	}

	if !shouldDefer {
		g.writeFinishers(shouldDefer, finishers)
	}

	switch returnTypeType {
	case returnTypeStruct:
		g.sb.WriteString(fmt.Sprintf(`
result := C.%s(%s)
`,
			f.CWrapperFuncName,
			argInvokeStmt,
		))
		cfuncCall = "result"
	case returnTypeKnown, returnTypeConstructor, returnTypeStructPtr:
		cfuncCall = fmt.Sprintf("C.%s(%s)", f.CWrapperFuncName, argInvokeStmt)
	}

	switch returnTypeType {
	case returnTypeNonUDT:
		g.sb.WriteString(fmt.Sprintf("return %s", cfuncCall))
	case returnTypeKnown, returnTypeStructPtr, returnTypeConstructor, returnTypeStruct:
		g.sb.WriteString("return " + fmt.Sprintf(rw.returnStmt, cfuncCall))
	}

	g.sb.WriteString("}\n\n")
	g.convertedFuncCount += 1

	return true
}

// this method is responsible for createing a function declaration statement.
// it takes function name, list of arguments and return type and returns go statement.
// e.g.: func (self *ImGuiType) FuncName(arg1 type1, arg2 type2) returnType {
func (g *goFuncsGenerator) generateFuncDeclarationStmt(receiver string, funcName string, args []string, returnType string, f FuncDef) (functionDeclaration string) {
	funcParts := strings.Split(funcName, "_")
	typeName := funcParts[0]

	// Generate default param value hint
	var commentSb strings.Builder
	comments := strings.Split(f.Comment, "\n")
	for i, comment := range comments {
		if !strings.HasPrefix(comment, "//") {
			comments[i] = "// " + comments[i]
		}
	}

	commentSb.WriteString(fmt.Sprintf("%s\n", strings.Join(comments, "\n")))
	if len(f.Defaults) > 0 {
		commentSb.WriteString("// %s parameter default value hint:\n")

		type defaultParam struct {
			name  string
			value string
		}
		defaults := make([]defaultParam, 0, len(f.Defaults))
		// sort according to the order of the arguments
		for _, arg := range args {
			if idx := strings.Index(arg, " "); idx != -1 {
				arg = arg[:idx]
			}
			d, ok := f.Defaults[arg]
			if !ok {
				continue
			}
			defaults = append(defaults, defaultParam{name: arg, value: d})
		}

		for _, p := range defaults {
			commentSb.WriteString(fmt.Sprintf("// %s: %s\n", p.name, p.value))
		}
	}

	// convert func(self *receiverType) into a method
	if len(funcParts) > 1 &&
		len(args) > 0 &&
		strings.Contains(args[0], "self ") {

		funcName = strings.TrimPrefix(funcName, typeName+"_")
		receiver = strings.TrimPrefix(args[0], "self ")
		args = args[1:]
	}

	if len(receiver) > 0 {
		receiver = fmt.Sprintf("(self %s)", renameGoIdentifier(receiver))
	}

	funcName = renameGoIdentifier(funcName)

	// if file comes from imgui_internal.h,prefix Internal is added.
	// ref: https://github.com/AllenDang/cimgui-go/pull/118
	if strings.Contains(f.Location, "imgui_internal") {
		funcName = "Internal" + funcName
	}

	return fmt.Sprintf("%sfunc %s %s(%s) %s {\n",
		strings.Replace(commentSb.String(), "%s", renameGoIdentifier(funcName), 1),
		renameGoIdentifier(receiver),
		funcName,
		strings.Join(args, ","),
		renameGoIdentifier(returnType))
}

func (g *goFuncsGenerator) generateFuncArgs(f FuncDef) (args []string, argWrappers []ArgumentWrapperData) {
	for i, a := range f.ArgsT {
		g.shouldGenerate = false

		decl, wrapper, err := getArgWrapper(
			&a,
			i == 0 && f.StructSetter,
			f.StructGetter && g.structNames[a.Type],
			g.structNames,
			g.enumNames,
		)

		if err != nil {
			glg.Debugf("Unknown argument type \"%s\" in function %s", a.Type, f.FuncName)
			break
		}

		g.shouldGenerate = true
		if len(decl) > 0 {
			args = append(args, decl)
			argWrappers = append(argWrappers, wrapper)
		}
	}

	return args, argWrappers
}

func getArgWrapper(a *ArgDef, makeFirstArgReceiver, isGetter bool, structNames, enumNames map[string]bool) (argDeclaration string, data ArgumentWrapperData, err error) {
	if a.Name == "type" || a.Name == "range" {
		a.Name += "Arg"
	}

	if makeFirstArgReceiver {
		return "", ArgumentWrapperData{}, nil
	}

	if isGetter {
		argDeclaration = fmt.Sprintf("%s %s", a.Name, renameGoIdentifier(a.Type))
		data = ArgumentWrapperData{
			ArgDef:    fmt.Sprintf("%[1]sArg, %[1]sFin := %[1]s.handle()", a.Name),
			VarName:   fmt.Sprintf("%sArg", a.Name),
			Finalizer: fmt.Sprintf("%sFin()", a.Name),
		}

		return
	}

	if v, err := argWrapper(a.Type); err == nil {
		arg := v(*a)
		data = arg

		argDeclaration = fmt.Sprintf("%s %s", a.Name, renameGoIdentifier(arg.ArgType))

		return argDeclaration, data, nil
	}

	if goEnumName := a.Type; isEnum(goEnumName, enumNames) {
		argDeclaration = fmt.Sprintf("%s %s", a.Name, renameGoIdentifier(goEnumName))
		data = ArgumentWrapperData{
			ArgType: renameEnum(a.Type),
			VarName: fmt.Sprintf("C.%s(%s)", a.Type, a.Name),
		}

		return
	}

	if strings.HasPrefix(a.Type, "ImVector_") &&
		!(strings.HasSuffix(a.Type, "*") || strings.HasSuffix(a.Type, "]")) {
		pureType := strings.TrimPrefix(a.Type, "ImVector_") + "*"
		dataName := a.Name + "Data"
		_, w, err := getArgWrapper(&ArgDef{
			Name: dataName,
			Type: pureType,
		}, false, false, structNames, enumNames)

		if err != nil {
			return "", ArgumentWrapperData{}, fmt.Errorf("creating vector wrapper %w", err)
		}

		data = ArgumentWrapperData{
			VarName: "*" + a.Name + "VecArg",
			ArgType: fmt.Sprintf("Vector[%s]", w.ArgType),
			// TODO: we lose pointer here \/
			ArgDef: fmt.Sprintf(`%[5]s := %[2]s.Data
%[1]s
%[2]sVecArg := new(C.%[3]s)
%[2]sVecArg.Size = C.int(%[2]s.Size)
%[2]sVecArg.Capacity = C.int(%[2]s.Capacity)
%[2]sVecArg.Data = %[4]s
`, w.ArgDef, a.Name, a.Type, w.VarName, dataName),
			Finalizer: w.Finalizer,
		}

		argDeclaration = fmt.Sprintf("%s %s", a.Name, data.ArgType)

		return argDeclaration, data, nil
	}

	pureType := strings.TrimPrefix(a.Type, "const ")
	isPointer := false
	if strings.HasSuffix(a.Type, "*") {
		pureType = strings.TrimSuffix(pureType, "*")
		isPointer = true
	}

	if structNames[pureType] {
		argDeclaration = fmt.Sprintf("%s %s", a.Name, renameGoIdentifier(pureType))
		w := ArgumentWrapperData{
			ArgType:   renameGoIdentifier(pureType),
			VarName:   fmt.Sprintf("%sArg", a.Name),
			Finalizer: fmt.Sprintf("%sFin()", a.Name),
		}

		fn := ""
		if isPointer {
			w.ArgType = "*" + w.ArgType
			fn = "handle"
		} else {
			fn = "c"
		}

		w.ArgDef = fmt.Sprintf("%[1]sArg, %[1]sFin := %[1]s.%[2]s()", a.Name, fn)

		data = w

		return
	}

	return "", ArgumentWrapperData{}, fmt.Errorf("unknown argument type \"%s\"", a.Type)
}

// Generate function body
// and returns function call arguments
// e.g.:
// it will write the following into the buffer:
func (g *goFuncsGenerator) generateFuncBody(argWrappers []ArgumentWrapperData) (invokeStatement string, declarations, finishers []string) {
	var invokeStmt []string
	declarations, finishers = make([]string, 0, len(argWrappers)), make([]string, 0, len(argWrappers))

	for _, aw := range argWrappers {
		invokeStmt = append(invokeStmt, aw.VarName)
		if len(aw.ArgDef) > 0 {
			declarations = append(declarations, aw.ArgDef)
			if aw.Finalizer != "" {
				finishers = append(finishers, aw.Finalizer)
			}
		}
	}

	return strings.Join(invokeStmt, ","), declarations, finishers
}

func (g *goFuncsGenerator) writeFinishers(shouldDefer bool, finishers []string) {
	if len(finishers) == 0 {
		return
	}

	g.sb.WriteString("\n")

	if shouldDefer {
		g.sb.WriteString("defer func() {\n")
		defer g.sb.WriteString("\n}()\n")
	}

	g.sb.WriteString(strings.Join(finishers, "\n"))
	g.sb.WriteString("\n\n")
}

// isEnum returns true when given string is a valid enum type.
func isEnum(argType string, enumNames map[string]bool) bool {
	for en := range enumNames {
		if renameEnum(argType) == en {
			return true
		}
	}

	return false
}
