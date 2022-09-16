#include "cimgui_wrapper.h"
#include "cimgui/cimgui.h"

bool InputTextV(const char* label,char* buf,size_t buf_size,ImGuiInputTextFlags flags,ImGuiInputTextCallback callback,void* user_data) { return igInputText(label,buf,buf_size,flags,callback,user_data); }
const ImFontGlyph* Font_FindGlyphNoFallback(ImFont* self,ImWchar c) { return ImFont_FindGlyphNoFallback(self,c); }
ImGuiStyle* GetStyle() { return igGetStyle(); }
bool IsKeyDown(ImGuiKey key) { return igIsKeyDown(key); }
bool IsMouseReleased(ImGuiMouseButton button) { return igIsMouseReleased(button); }
void PopID() { igPopID(); }
void UnindentV(float indent_w) { igUnindent(indent_w); }
ImGuiID DockSpaceV(ImGuiID id,const ImVec2 size,ImGuiDockNodeFlags flags,const ImGuiWindowClass* window_class) { return igDockSpace(id,size,flags,window_class); }
void GetDrawCursorStartPos(ImVec2 *pOut) { igGetCursorStartPos(pOut); }
void PushStyleColor_U32(ImGuiCol idx,ImU32 col) { igPushStyleColor_U32(idx,col); }
void PushStyleColor_Vec4(ImGuiCol idx,const ImVec4 col) { igPushStyleColor_Vec4(idx,col); }
void DrawList_AddImageV(ImDrawList* self,ImTextureID user_texture_id,const ImVec2 p_min,const ImVec2 p_max,const ImVec2 uv_min,const ImVec2 uv_max,ImU32 col) { ImDrawList_AddImage(self,user_texture_id,p_min,p_max,uv_min,uv_max,col); }
ImFontConfig* FontConfig_ImFontConfig() { return ImFontConfig_ImFontConfig(); }
bool TabItemButtonV(const char* label,ImGuiTabItemFlags flags) { return igTabItemButton(label,flags); }
void SetNextWindowSizeV(const ImVec2 size,ImGuiCond cond) { igSetNextWindowSize(size,cond); }
void SetKeyboardFocusHereV(int offset) { igSetKeyboardFocusHere(offset); }
void SetNextWindowPosV(const ImVec2 pos,ImGuiCond cond,const ImVec2 pivot) { igSetNextWindowPos(pos,cond,pivot); }
void SetNextWindowViewport(ImGuiID viewport_id) { igSetNextWindowViewport(viewport_id); }
void LogText(const char* fmt) { igLogText(fmt); }
void Font_CalcTextSizeAV(ImVec2 *pOut,ImFont* self,float size,float max_width,float wrap_width,const char* text_begin,const char** remaining) { ImFont_CalcTextSizeA(pOut,self,size,max_width,wrap_width,text_begin,0,remaining); }
bool IsItemFocused() { return igIsItemFocused(); }
void ShowDebugLogWindowV(bool* p_open) { igShowDebugLogWindow(p_open); }
void EndFrame() { igEndFrame(); }
void OpenPopupOnItemClickV(const char* str_id,ImGuiPopupFlags popup_flags) { igOpenPopupOnItemClick(str_id,popup_flags); }
void PushID_Str(const char* str_id) { igPushID_Str(str_id); }
void PushID_StrStr(const char* str_id_begin,const char* str_id_end) { igPushID_StrStr(str_id_begin,str_id_end); }
void PushID_Ptr(const void* ptr_id) { igPushID_Ptr(ptr_id); }
void PushID_Int(int int_id) { igPushID_Int(int_id); }
int GetKeyPressedAmount(ImGuiKey key,float repeat_delay,float rate) { return igGetKeyPressedAmount(key,repeat_delay,rate); }
bool Selectable_BoolV(const char* label,bool selected,ImGuiSelectableFlags flags,const ImVec2 size) { return igSelectable_Bool(label,selected,flags,size); }
bool Selectable_BoolPtrV(const char* label,bool* p_selected,ImGuiSelectableFlags flags,const ImVec2 size) { return igSelectable_BoolPtr(label,p_selected,flags,size); }
bool SliderInt2V(const char* label,int v[2],int v_min,int v_max,const char* format,ImGuiSliderFlags flags) { return igSliderInt2(label,v,v_min,v_max,format,flags); }
void PopClipRect() { igPopClipRect(); }
bool BeginPopupContextItemV(const char* str_id,ImGuiPopupFlags popup_flags) { return igBeginPopupContextItem(str_id,popup_flags); }
bool DragScalarNV(const char* label,ImGuiDataType data_type,void* p_data,int components,float v_speed,const void* p_min,const void* p_max,const char* format,ImGuiSliderFlags flags) { return igDragScalarN(label,data_type,p_data,components,v_speed,p_min,p_max,format,flags); }
void Rect_Destroy(ImRect* self) { ImRect_destroy(self); }
void ColorConvertU32ToFloat4(ImVec4 *pOut,ImU32 in) { igColorConvertU32ToFloat4(pOut,in); }
void DrawList_PrimQuadUV(ImDrawList* self,const ImVec2 a,const ImVec2 b,const ImVec2 c,const ImVec2 d,const ImVec2 uv_a,const ImVec2 uv_b,const ImVec2 uv_c,const ImVec2 uv_d,ImU32 col) { ImDrawList_PrimQuadUV(self,a,b,c,d,uv_a,uv_b,uv_c,uv_d,col); }
void FontAtlas_ClearFonts(ImFontAtlas* self) { ImFontAtlas_ClearFonts(self); }
void Color_SetHSVV(ImColor* self,float h,float s,float v,float a) { ImColor_SetHSV(self,h,s,v,a); }
ImDrawListSplitter* DrawListSplitter_ImDrawListSplitter() { return ImDrawListSplitter_ImDrawListSplitter(); }
bool IsWindowAppearing() { return igIsWindowAppearing(); }
ImFont* FontAtlas_AddFontDefaultV(ImFontAtlas* self,const ImFontConfig* font_cfg) { return ImFontAtlas_AddFontDefault(self,font_cfg); }
void InputTextCallbackData_DeleteChars(ImGuiInputTextCallbackData* self,int pos,int bytes_count) { ImGuiInputTextCallbackData_DeleteChars(self,pos,bytes_count); }
bool TextFilter_IsActive(ImGuiTextFilter* self) { return ImGuiTextFilter_IsActive(self); }
void ShowFontSelector(const char* label) { igShowFontSelector(label); }
void PopFont() { igPopFont(); }
void ProgressBarV(float fraction,const ImVec2 size_arg,const char* overlay) { igProgressBar(fraction,size_arg,overlay); }
float GetFontSize() { return igGetFontSize(); }
int GetFrameCount() { return igGetFrameCount(); }
float GetScrollY() { return igGetScrollY(); }
void PushClipRect(const ImVec2 clip_rect_min,const ImVec2 clip_rect_max,bool intersect_with_current_clip_rect) { igPushClipRect(clip_rect_min,clip_rect_max,intersect_with_current_clip_rect); }
void DrawList_AddDrawCmd(ImDrawList* self) { ImDrawList_AddDrawCmd(self); }
void FontGlyphRangesBuilder_Destroy(ImFontGlyphRangesBuilder* self) { ImFontGlyphRangesBuilder_destroy(self); }
void ListClipper_BeginV(ImGuiListClipper* self,int items_count,float items_height) { ImGuiListClipper_Begin(self,items_count,items_height); }
bool InputScalarNV(const char* label,ImGuiDataType data_type,void* p_data,int components,const void* p_step,const void* p_step_fast,const char* format,ImGuiInputTextFlags flags) { return igInputScalarN(label,data_type,p_data,components,p_step,p_step_fast,format,flags); }
void PlatformMonitor_Destroy(ImGuiPlatformMonitor* self) { ImGuiPlatformMonitor_destroy(self); }
void WindowClass_Destroy(ImGuiWindowClass* self) { ImGuiWindowClass_destroy(self); }
ImGuiViewport* FindViewportByID(ImGuiID id) { return igFindViewportByID(id); }
bool Font_IsLoaded(ImFont* self) { return ImFont_IsLoaded(self); }
bool BeginMainMenuBar() { return igBeginMainMenuBar(); }
void Text(const char* fmt) { igText(fmt); }
void DrawListSplitter_Destroy(ImDrawListSplitter* self) { ImDrawListSplitter_destroy(self); }
void DrawList_PrimRect(ImDrawList* self,const ImVec2 a,const ImVec2 b,ImU32 col) { ImDrawList_PrimRect(self,a,b,col); }
float GetDrawCursorPosX() { return igGetCursorPosX(); }
bool IsAnyItemFocused() { return igIsAnyItemFocused(); }
bool IsItemActivated() { return igIsItemActivated(); }
void InputTextCallbackData_SelectAll(ImGuiInputTextCallbackData* self) { ImGuiInputTextCallbackData_SelectAll(self); }
bool BeginPopupContextWindowV(const char* str_id,ImGuiPopupFlags popup_flags) { return igBeginPopupContextWindow(str_id,popup_flags); }
void DrawList_AddBezierCubicV(ImDrawList* self,const ImVec2 p1,const ImVec2 p2,const ImVec2 p3,const ImVec2 p4,ImU32 col,float thickness,int num_segments) { ImDrawList_AddBezierCubic(self,p1,p2,p3,p4,col,thickness,num_segments); }
ImDrawList* DrawList_CloneOutput(ImDrawList* self) { return ImDrawList_CloneOutput(self); }
bool TextBuffer_Empty(ImGuiTextBuffer* self) { return ImGuiTextBuffer_empty(self); }
const char* TableGetColumnName_IntV(int column_n) { return igTableGetColumnName_Int(column_n); }
void ContextHook_Destroy(ImGuiContextHook* self) { ImGuiContextHook_destroy(self); }
void ListClipper_Destroy(ImGuiListClipper* self) { ImGuiListClipper_destroy(self); }
bool SliderInt4V(const char* label,int v[4],int v_min,int v_max,const char* format,ImGuiSliderFlags flags) { return igSliderInt4(label,v,v_min,v_max,format,flags); }
void DrawList_PushClipRectFullScreen(ImDrawList* self) { ImDrawList_PushClipRectFullScreen(self); }
bool FontAtlas_Build(ImFontAtlas* self) { return ImFontAtlas_Build(self); }
bool IsKeyPressedV(ImGuiKey key,bool repeat) { return igIsKeyPressed(key,repeat); }
void IO_Destroy(ImGuiIO* self) { ImGuiIO_destroy(self); }
void BeginDisabledV(bool disabled) { igBeginDisabled(disabled); }
void PopButtonRepeat() { igPopButtonRepeat(); }
void MetricsConfig_Destroy(ImGuiMetricsConfig* self) { ImGuiMetricsConfig_destroy(self); }
void GetContentRegionAvail(ImVec2 *pOut) { igGetContentRegionAvail(pOut); }
void EndTabItem() { igEndTabItem(); }
int GetColumnIndex() { return igGetColumnIndex(); }
void NewFrame() { igNewFrame(); }
void EndGroup() { igEndGroup(); }
void DrawList_AddPolyline(ImDrawList* self,const ImVec2* points,int num_points,ImU32 col,ImDrawFlags flags,float thickness) { ImDrawList_AddPolyline(self,points,num_points,col,flags,thickness); }
bool Payload_IsDataType(ImGuiPayload* self,const char* type) { return ImGuiPayload_IsDataType(self,type); }
bool IsWindowHoveredV(ImGuiHoveredFlags flags) { return igIsWindowHovered(flags); }
void SetWindowCollapsed_BoolV(bool collapsed,ImGuiCond cond) { igSetWindowCollapsed_Bool(collapsed,cond); }
void SetWindowCollapsed_StrV(const char* name,bool collapsed,ImGuiCond cond) { igSetWindowCollapsed_Str(name,collapsed,cond); }
bool InvisibleButtonV(const char* str_id,const ImVec2 size,ImGuiButtonFlags flags) { return igInvisibleButton(str_id,size,flags); }
bool IsPopupOpen_StrV(const char* str_id,ImGuiPopupFlags flags) { return igIsPopupOpen_Str(str_id,flags); }
void SetScrollX_Float(float scroll_x) { igSetScrollX_Float(scroll_x); }
void Font_RenderTextV(ImFont* self,ImDrawList* draw_list,float size,const ImVec2 pos,ImU32 col,const ImVec4 clip_rect,const char* text_begin,float wrap_width,bool cpu_fine_clip) { ImFont_RenderText(self,draw_list,size,pos,col,clip_rect,text_begin,0,wrap_width,cpu_fine_clip); }
void IO_ClearInputCharacters(ImGuiIO* self) { ImGuiIO_ClearInputCharacters(self); }
bool DragInt4V(const char* label,int v[4],float v_speed,int v_min,int v_max,const char* format,ImGuiSliderFlags flags) { return igDragInt4(label,v,v_speed,v_min,v_max,format,flags); }
void GetWindowContentRegionMax(ImVec2 *pOut) { igGetWindowContentRegionMax(pOut); }
void FontAtlas_Clear(ImFontAtlas* self) { ImFontAtlas_Clear(self); }
bool ColorPicker3V(const char* label,float col[3],ImGuiColorEditFlags flags) { return igColorPicker3(label,col,flags); }
bool DragFloat2V(const char* label,float v[2],float v_speed,float v_min,float v_max,const char* format,ImGuiSliderFlags flags) { return igDragFloat2(label,v,v_speed,v_min,v_max,format,flags); }
void PushTextWrapPosV(float wrap_local_pos_x) { igPushTextWrapPos(wrap_local_pos_x); }
void SetNextItemWidth(float item_width) { igSetNextItemWidth(item_width); }
void Separator() { igSeparator(); }
void LoadIniSettingsFromMemoryV(const char* ini_data,size_t ini_size) { igLoadIniSettingsFromMemory(ini_data,ini_size); }
ImDrawCmd* DrawCmd_ImDrawCmd() { return ImDrawCmd_ImDrawCmd(); }
void* MemAlloc(size_t size) { return igMemAlloc(size); }
void Dummy(const ImVec2 size) { igDummy(size); }
void DrawList_PrimVtx(ImDrawList* self,const ImVec2 pos,const ImVec2 uv,ImU32 col) { ImDrawList_PrimVtx(self,pos,uv,col); }
void TableHeadersRow() { igTableHeadersRow(); }
bool FontAtlasCustomRect_IsPacked(ImFontAtlasCustomRect* self) { return ImFontAtlasCustomRect_IsPacked(self); }
const ImWchar* FontAtlas_GetGlyphRangesChineseSimplifiedCommon(ImFontAtlas* self) { return ImFontAtlas_GetGlyphRangesChineseSimplifiedCommon(self); }
void SetScrollY_Float(float scroll_y) { igSetScrollY_Float(scroll_y); }
void DrawList_AddCircleV(ImDrawList* self,const ImVec2 center,float radius,ImU32 col,int num_segments,float thickness) { ImDrawList_AddCircle(self,center,radius,col,num_segments,thickness); }
bool FontAtlas_GetMouseCursorTexData(ImFontAtlas* self,ImGuiMouseCursor cursor,ImVec2* out_offset,ImVec2* out_size,ImVec2 out_uv_border[2],ImVec2 out_uv_fill[2]) { return ImFontAtlas_GetMouseCursorTexData(self,cursor,out_offset,out_size,out_uv_border,out_uv_fill); }
void IO_AddInputCharactersUTF8(ImGuiIO* self,const char* str) { ImGuiIO_AddInputCharactersUTF8(self,str); }
bool DragFloat3V(const char* label,float v[3],float v_speed,float v_min,float v_max,const char* format,ImGuiSliderFlags flags) { return igDragFloat3(label,v,v_speed,v_min,v_max,format,flags); }
void DrawList_AddConvexPolyFilled(ImDrawList* self,const ImVec2* points,int num_points,ImU32 col) { ImDrawList_AddConvexPolyFilled(self,points,num_points,col); }
void Font_RenderChar(ImFont* self,ImDrawList* draw_list,float size,const ImVec2 pos,ImU32 col,ImWchar c) { ImFont_RenderChar(self,draw_list,size,pos,col,c); }
void ColorConvertRGBtoHSV(float r,float g,float b,float* out_h,float* out_s,float* out_v) { igColorConvertRGBtoHSV(r,g,b,out_h,out_s,out_v); }
void SetDrawCursorScreenPos(const ImVec2 pos) { igSetCursorScreenPos(pos); }
void FontGlyphRangesBuilder_SetBit(ImFontGlyphRangesBuilder* self,size_t n) { ImFontGlyphRangesBuilder_SetBit(self,n); }
void ListClipper_End(ImGuiListClipper* self) { ImGuiListClipper_End(self); }
bool TextFilter_PassFilterV(ImGuiTextFilter* self,const char* text) { return ImGuiTextFilter_PassFilter(self,text,0); }
ImGuiViewport* GetMainViewport() { return igGetMainViewport(); }
ImFontGlyphRangesBuilder* FontGlyphRangesBuilder_ImFontGlyphRangesBuilder() { return ImFontGlyphRangesBuilder_ImFontGlyphRangesBuilder(); }
void SetScrollHereXV(float center_x_ratio) { igSetScrollHereX(center_x_ratio); }
void PopAllowKeyboardFocus() { igPopAllowKeyboardFocus(); }
void DrawList_AddBezierQuadraticV(ImDrawList* self,const ImVec2 p1,const ImVec2 p2,const ImVec2 p3,ImU32 col,float thickness,int num_segments) { ImDrawList_AddBezierQuadratic(self,p1,p2,p3,col,thickness,num_segments); }
ImDrawList* DrawList_ImDrawList(const ImDrawListSharedData* shared_data) { return ImDrawList_ImDrawList(shared_data); }
const char* Font_GetDebugName(ImFont* self) { return ImFont_GetDebugName(self); }
bool ListBox_Str_arrV(const char* label,int* current_item,const char* const items[],int items_count,int height_in_items) { return igListBox_Str_arr(label,current_item,items,items_count,height_in_items); }
bool ListBox_FnBoolPtr(const char* label,int* current_item,bool(*items_getter)(void* data,int idx,const char** out_text),void* data,int items_count,int height_in_items) { return igListBox_FnBoolPtr(label,current_item,items_getter,data,items_count,height_in_items); }
void SetNextFrameWantCaptureMouse(bool want_capture_mouse) { igSetNextFrameWantCaptureMouse(want_capture_mouse); }
bool CheckboxFlags_IntPtr(const char* label,int* flags,int flags_value) { return igCheckboxFlags_IntPtr(label,flags,flags_value); }
bool CheckboxFlags_UintPtr(const char* label,unsigned int* flags,unsigned int flags_value) { return igCheckboxFlags_UintPtr(label,flags,flags_value); }
void EndMenu() { igEndMenu(); }
void DrawList_PrimRectUV(ImDrawList* self,const ImVec2 a,const ImVec2 b,const ImVec2 uv_a,const ImVec2 uv_b,ImU32 col) { ImDrawList_PrimRectUV(self,a,b,uv_a,uv_b,col); }
void PushAllowKeyboardFocus(bool allow_keyboard_focus) { igPushAllowKeyboardFocus(allow_keyboard_focus); }
void PushButtonRepeat(bool repeat) { igPushButtonRepeat(repeat); }
void DrawList_AddImageQuadV(ImDrawList* self,ImTextureID user_texture_id,const ImVec2 p1,const ImVec2 p2,const ImVec2 p3,const ImVec2 p4,const ImVec2 uv1,const ImVec2 uv2,const ImVec2 uv3,const ImVec2 uv4,ImU32 col) { ImDrawList_AddImageQuad(self,user_texture_id,p1,p2,p3,p4,uv1,uv2,uv3,uv4,col); }
void DrawList_PopClipRect(ImDrawList* self) { ImDrawList_PopClipRect(self); }
bool InputTextMultilineV(const char* label,char* buf,size_t buf_size,const ImVec2 size,ImGuiInputTextFlags flags,ImGuiInputTextCallback callback,void* user_data) { return igInputTextMultiline(label,buf,buf_size,size,flags,callback,user_data); }
void PopStyleVarV(int count) { igPopStyleVar(count); }
void DrawList_AddImageRoundedV(ImDrawList* self,ImTextureID user_texture_id,const ImVec2 p_min,const ImVec2 p_max,const ImVec2 uv_min,const ImVec2 uv_max,ImU32 col,float rounding,ImDrawFlags flags) { ImDrawList_AddImageRounded(self,user_texture_id,p_min,p_max,uv_min,uv_max,col,rounding,flags); }
void DrawList_PathBezierCubicCurveToV(ImDrawList* self,const ImVec2 p2,const ImVec2 p3,const ImVec2 p4,int num_segments) { ImDrawList_PathBezierCubicCurveTo(self,p2,p3,p4,num_segments); }
bool IsWindowFocusedV(ImGuiFocusedFlags flags) { return igIsWindowFocused(flags); }
bool DebugCheckVersionAndDataLayout(const char* version_str,size_t sz_io,size_t sz_style,size_t sz_vec2,size_t sz_vec4,size_t sz_drawvert,size_t sz_drawidx) { return igDebugCheckVersionAndDataLayout(version_str,sz_io,sz_style,sz_vec2,sz_vec4,sz_drawvert,sz_drawidx); }
void Vec1_Destroy(ImVec1* self) { ImVec1_destroy(self); }
void IndentV(float indent_w) { igIndent(indent_w); }
void OnceUponAFrame_Destroy(ImGuiOnceUponAFrame* self) { ImGuiOnceUponAFrame_destroy(self); }
int TextBuffer_Size(ImGuiTextBuffer* self) { return ImGuiTextBuffer_size(self); }
float GetScrollMaxY() { return igGetScrollMaxY(); }
void Color_HSVV(ImColor *pOut,float h,float s,float v,float a) { ImColor_HSV(pOut,h,s,v,a); }
bool DragIntV(const char* label,int* v,float v_speed,int v_min,int v_max,const char* format,ImGuiSliderFlags flags) { return igDragInt(label,v,v_speed,v_min,v_max,format,flags); }
bool SliderScalarNV(const char* label,ImGuiDataType data_type,void* p_data,int components,const void* p_min,const void* p_max,const char* format,ImGuiSliderFlags flags) { return igSliderScalarN(label,data_type,p_data,components,p_min,p_max,format,flags); }
ImFont* FontAtlas_AddFont(ImFontAtlas* self,const ImFontConfig* font_cfg) { return ImFontAtlas_AddFont(self,font_cfg); }
void TableTempData_Destroy(ImGuiTableTempData* self) { ImGuiTableTempData_destroy(self); }
void DrawList_PathLineToMergeDuplicate(ImDrawList* self,const ImVec2 pos) { ImDrawList_PathLineToMergeDuplicate(self,pos); }
bool BeginTabBarV(const char* str_id,ImGuiTabBarFlags flags) { return igBeginTabBar(str_id,flags); }
bool InputFloatV(const char* label,float* v,float step,float step_fast,const char* format,ImGuiInputTextFlags flags) { return igInputFloat(label,v,step,step_fast,format,flags); }
void SetNextWindowSizeConstraintsV(const ImVec2 size_min,const ImVec2 size_max,ImGuiSizeCallback custom_callback,void* custom_callback_data) { igSetNextWindowSizeConstraints(size_min,size_max,custom_callback,custom_callback_data); }
bool InputFloat4V(const char* label,float v[4],const char* format,ImGuiInputTextFlags flags) { return igInputFloat4(label,v,format,flags); }
double GetTime() { return igGetTime(); }
void SetWindowPos_Vec2V(const ImVec2 pos,ImGuiCond cond) { igSetWindowPos_Vec2(pos,cond); }
void SetWindowPos_StrV(const char* name,const ImVec2 pos,ImGuiCond cond) { igSetWindowPos_Str(name,pos,cond); }
int TableGetRowIndex() { return igTableGetRowIndex(); }
void SetTabItemClosed(const char* tab_or_docked_window_label) { igSetTabItemClosed(tab_or_docked_window_label); }
bool ColorEdit4V(const char* label,float col[4],ImGuiColorEditFlags flags) { return igColorEdit4(label,col,flags); }
void IO_AddKeyEvent(ImGuiIO* self,ImGuiKey key,bool down) { ImGuiIO_AddKeyEvent(self,key,down); }
bool TextFilter_DrawV(ImGuiTextFilter* self,const char* label,float width) { return ImGuiTextFilter_Draw(self,label,width); }
void CloseCurrentPopup() { igCloseCurrentPopup(); }
ImGuiViewport* FindViewportByPlatformHandle(void* platform_handle) { return igFindViewportByPlatformHandle(platform_handle); }
ImGuiTableColumnFlags TableGetColumnFlagsV(int column_n) { return igTableGetColumnFlags(column_n); }
bool IsMouseDoubleClicked(ImGuiMouseButton button) { return igIsMouseDoubleClicked(button); }
int GetMouseClickedCount(ImGuiMouseButton button) { return igGetMouseClickedCount(button); }
void OldColumnData_Destroy(ImGuiOldColumnData* self) { ImGuiOldColumnData_destroy(self); }
ImGuiTextBuffer* TextBuffer_ImGuiTextBuffer() { return ImGuiTextBuffer_ImGuiTextBuffer(); }
void TextBuffer_AppendV(ImGuiTextBuffer* self,const char* str,const char* str_end) { ImGuiTextBuffer_append(self,str,str_end); }
bool SliderAngleV(const char* label,float* v_rad,float v_degrees_min,float v_degrees_max,const char* format,ImGuiSliderFlags flags) { return igSliderAngle(label,v_rad,v_degrees_min,v_degrees_max,format,flags); }
ImVec2* Vec2_ImVec2_Nil() { return ImVec2_ImVec2_Nil(); }
ImVec2* Vec2_ImVec2_Float(float _x,float _y) { return ImVec2_ImVec2_Float(_x,_y); }
void BeginTooltip() { igBeginTooltip(); }
bool InputFloat2V(const char* label,float v[2],const char* format,ImGuiInputTextFlags flags) { return igInputFloat2(label,v,format,flags); }
void SetNextWindowFocus() { igSetNextWindowFocus(); }
bool SmallButton(const char* label) { return igSmallButton(label); }
ImGuiPlatformIO* PlatformIO_ImGuiPlatformIO() { return ImGuiPlatformIO_ImGuiPlatformIO(); }
void TableInstanceData_Destroy(ImGuiTableInstanceData* self) { ImGuiTableInstanceData_destroy(self); }
bool IsItemClickedV(ImGuiMouseButton mouse_button) { return igIsItemClicked(mouse_button); }
void SetNextFrameWantCaptureKeyboard(bool want_capture_keyboard) { igSetNextFrameWantCaptureKeyboard(want_capture_keyboard); }
void GetWindowSize(ImVec2 *pOut) { igGetWindowSize(pOut); }
bool BeginTableV(const char* str_id,int column,ImGuiTableFlags flags,const ImVec2 outer_size,float inner_width) { return igBeginTable(str_id,column,flags,outer_size,inner_width); }
void SetWindowSize_Vec2V(const ImVec2 size,ImGuiCond cond) { igSetWindowSize_Vec2(size,cond); }
void SetWindowSize_StrV(const char* name,const ImVec2 size,ImGuiCond cond) { igSetWindowSize_Str(name,size,cond); }
void IO_AddMouseViewportEvent(ImGuiIO* self,ImGuiID id) { ImGuiIO_AddMouseViewportEvent(self,id); }
void TextBuffer_Appendf(ImGuiTextBuffer* self,const char* fmt) { ImGuiTextBuffer_appendf(self,fmt); }
void DrawList_PathArcToFast(ImDrawList* self,const ImVec2 center,float radius,int a_min_of_12,int a_max_of_12) { ImDrawList_PathArcToFast(self,center,radius,a_min_of_12,a_max_of_12); }
void LastItemData_Destroy(ImGuiLastItemData* self) { ImGuiLastItemData_destroy(self); }
ImGuiPlatformMonitor* PlatformMonitor_ImGuiPlatformMonitor() { return ImGuiPlatformMonitor_ImGuiPlatformMonitor(); }
void PopupData_Destroy(ImGuiPopupData* self) { ImGuiPopupData_destroy(self); }
bool ColorEdit3V(const char* label,float col[3],ImGuiColorEditFlags flags) { return igColorEdit3(label,col,flags); }
bool IsRectVisible_Nil(const ImVec2 size) { return igIsRectVisible_Nil(size); }
bool IsRectVisible_Vec2(const ImVec2 rect_min,const ImVec2 rect_max) { return igIsRectVisible_Vec2(rect_min,rect_max); }
void LogFinish() { igLogFinish(); }
void DrawList_AddCallback(ImDrawList* self,ImDrawCallback callback,void* callback_data) { ImDrawList_AddCallback(self,callback,callback_data); }
void InputTextCallbackData_ClearSelection(ImGuiInputTextCallbackData* self) { ImGuiInputTextCallbackData_ClearSelection(self); }
void NextColumn() { igNextColumn(); }
void FontGlyphRangesBuilder_Clear(ImFontGlyphRangesBuilder* self) { ImFontGlyphRangesBuilder_Clear(self); }
ImDrawList* GetBackgroundDrawList_Nil() { return igGetBackgroundDrawList_Nil(); }
ImDrawList* GetBackgroundDrawList_ViewportPtr(ImGuiViewport* viewport) { return igGetBackgroundDrawList_ViewportPtr(viewport); }
void DrawList_AddTriangleFilled(ImDrawList* self,const ImVec2 p1,const ImVec2 p2,const ImVec2 p3,ImU32 col) { ImDrawList_AddTriangleFilled(self,p1,p2,p3,col); }
void Vec4_Destroy(ImVec4* self) { ImVec4_destroy(self); }
void CalcTextSizeV(ImVec2 *pOut,const char* text,bool hide_text_after_double_hash,float wrap_width) { igCalcTextSize(pOut,text,0,hide_text_after_double_hash,wrap_width); }
const ImGuiPayload* AcceptDragDropPayloadV(const char* type,ImGuiDragDropFlags flags) { return igAcceptDragDropPayload(type,flags); }
bool SliderInt3V(const char* label,int v[3],int v_min,int v_max,const char* format,ImGuiSliderFlags flags) { return igSliderInt3(label,v,v_min,v_max,format,flags); }
const ImWchar* FontAtlas_GetGlyphRangesVietnamese(ImFontAtlas* self) { return ImFontAtlas_GetGlyphRangesVietnamese(self); }
ImColor* Color_ImColor_Nil() { return ImColor_ImColor_Nil(); }
ImColor* Color_ImColor_Float(float r,float g,float b,float a) { return ImColor_ImColor_Float(r,g,b,a); }
ImColor* Color_ImColor_Vec4(const ImVec4 col) { return ImColor_ImColor_Vec4(col); }
ImColor* Color_ImColor_Int(int r,int g,int b,int a) { return ImColor_ImColor_Int(r,g,b,a); }
ImColor* Color_ImColor_U32(ImU32 rgba) { return ImColor_ImColor_U32(rgba); }
void ImageV(ImTextureID user_texture_id,const ImVec2 size,const ImVec2 uv0,const ImVec2 uv1,const ImVec4 tint_col,const ImVec4 border_col) { igImage(user_texture_id,size,uv0,uv1,tint_col,border_col); }
void FontGlyphRangesBuilder_BuildRanges(ImFontGlyphRangesBuilder* self,ImVector_ImWchar* out_ranges) { ImFontGlyphRangesBuilder_BuildRanges(self,out_ranges); }
void IO_SetAppAcceptingEvents(ImGuiIO* self,bool accepting_events) { ImGuiIO_SetAppAcceptingEvents(self,accepting_events); }
void TabItem_Destroy(ImGuiTabItem* self) { ImGuiTabItem_destroy(self); }
bool IsAnyItemHovered() { return igIsAnyItemHovered(); }
void SetDrawCursorPos(const ImVec2 local_pos) { igSetCursorPos(local_pos); }
void SetItemAllowOverlap() { igSetItemAllowOverlap(); }
void GetItemRectSize(ImVec2 *pOut) { igGetItemRectSize(pOut); }
void LoadIniSettingsFromDisk(const char* ini_filename) { igLoadIniSettingsFromDisk(ini_filename); }
void SaveIniSettingsToDisk(const char* ini_filename) { igSaveIniSettingsToDisk(ini_filename); }
void TableSetupScrollFreeze(int cols,int rows) { igTableSetupScrollFreeze(cols,rows); }
bool DragInt3V(const char* label,int v[3],float v_speed,int v_min,int v_max,const char* format,ImGuiSliderFlags flags) { return igDragInt3(label,v,v_speed,v_min,v_max,format,flags); }
float GetScrollMaxX() { return igGetScrollMaxX(); }
bool SetDragDropPayloadV(const char* type,const void* data,size_t sz,ImGuiCond cond) { return igSetDragDropPayload(type,data,sz,cond); }
void DrawData_DeIndexAllBuffers(ImDrawData* self) { ImDrawData_DeIndexAllBuffers(self); }
bool VSliderScalarV(const char* label,const ImVec2 size,ImGuiDataType data_type,void* p_data,const void* p_min,const void* p_max,const char* format,ImGuiSliderFlags flags) { return igVSliderScalar(label,size,data_type,p_data,p_min,p_max,format,flags); }
bool CollapsingHeader_TreeNodeFlagsV(const char* label,ImGuiTreeNodeFlags flags) { return igCollapsingHeader_TreeNodeFlags(label,flags); }
bool CollapsingHeader_BoolPtrV(const char* label,bool* p_visible,ImGuiTreeNodeFlags flags) { return igCollapsingHeader_BoolPtr(label,p_visible,flags); }
ImDrawListSharedData* GetDrawListSharedData() { return igGetDrawListSharedData(); }
ImGuiID GetWindowDockID() { return igGetWindowDockID(); }
void DrawList_AddNgonFilled(ImDrawList* self,const ImVec2 center,float radius,ImU32 col,int num_segments) { ImDrawList_AddNgonFilled(self,center,radius,col,num_segments); }
void DrawList_PathClear(ImDrawList* self) { ImDrawList_PathClear(self); }
bool FontAtlas_IsBuilt(ImFontAtlas* self) { return ImFontAtlas_IsBuilt(self); }
void Viewport_Destroy(ImGuiViewport* self) { ImGuiViewport_destroy(self); }
void EndTooltip() { igEndTooltip(); }
void GetMousePos(ImVec2 *pOut) { igGetMousePos(pOut); }
void FontGlyphRangesBuilder_AddTextV(ImFontGlyphRangesBuilder* self,const char* text) { ImFontGlyphRangesBuilder_AddText(self,text,0); }
void SetNextWindowClass(const ImGuiWindowClass* window_class) { igSetNextWindowClass(window_class); }
ImGuiPlatformImeData* PlatformImeData_ImGuiPlatformImeData() { return ImGuiPlatformImeData_ImGuiPlatformImeData(); }
bool BeginDragDropSourceV(ImGuiDragDropFlags flags) { return igBeginDragDropSource(flags); }
bool IsItemDeactivated() { return igIsItemDeactivated(); }
int TableGetColumnCount() { return igTableGetColumnCount(); }
void EndTabBar() { igEndTabBar(); }
void GetWindowPos(ImVec2 *pOut) { igGetWindowPos(pOut); }
ImGuiPayload* Payload_ImGuiPayload() { return ImGuiPayload_ImGuiPayload(); }
ImFont* GetFont() { return igGetFont(); }
void TextWrapped(const char* fmt) { igTextWrapped(fmt); }
ImGuiPlatformIO* GetPlatformIO() { return igGetPlatformIO(); }
void TableColumnSortSpecs_Destroy(ImGuiTableColumnSortSpecs* self) { ImGuiTableColumnSortSpecs_destroy(self); }
void DrawData_Clear(ImDrawData* self) { ImDrawData_Clear(self); }
void IO_AddFocusEvent(ImGuiIO* self,bool focused) { ImGuiIO_AddFocusEvent(self,focused); }
void LogToClipboardV(int auto_open_depth) { igLogToClipboard(auto_open_depth); }
const ImWchar* FontAtlas_GetGlyphRangesKorean(ImFontAtlas* self) { return ImFontAtlas_GetGlyphRangesKorean(self); }
void FontAtlas_Destroy(ImFontAtlas* self) { ImFontAtlas_destroy(self); }
void EndCombo() { igEndCombo(); }
void DrawList_AddCircleFilledV(ImDrawList* self,const ImVec2 center,float radius,ImU32 col,int num_segments) { ImDrawList_AddCircleFilled(self,center,radius,col,num_segments); }
const ImWchar* FontAtlas_GetGlyphRangesChineseFull(ImFontAtlas* self) { return ImFontAtlas_GetGlyphRangesChineseFull(self); }
bool IsMouseDown(ImGuiMouseButton button) { return igIsMouseDown(button); }
bool Checkbox(const char* label,bool* v) { return igCheckbox(label,v); }
void SetNextItemOpenV(bool is_open,ImGuiCond cond) { igSetNextItemOpen(is_open,cond); }
bool ImageButtonV(const char* str_id,ImTextureID user_texture_id,const ImVec2 size,const ImVec2 uv0,const ImVec2 uv1,const ImVec4 bg_col,const ImVec4 tint_col) { return igImageButton(str_id,user_texture_id,size,uv0,uv1,bg_col,tint_col); }
float CalcItemWidth() { return igCalcItemWidth(); }
void DrawList_AddLineV(ImDrawList* self,const ImVec2 p1,const ImVec2 p2,ImU32 col,float thickness) { ImDrawList_AddLine(self,p1,p2,col,thickness); }
void StackTool_Destroy(ImGuiStackTool* self) { ImGuiStackTool_destroy(self); }
bool BeginListBoxV(const char* label,const ImVec2 size) { return igBeginListBox(label,size); }
bool BeginPopupModalV(const char* name,bool* p_open,ImGuiWindowFlags flags) { return igBeginPopupModal(name,p_open,flags); }
ImGuiID DockSpaceOverViewportV(const ImGuiViewport* viewport,ImGuiDockNodeFlags flags,const ImGuiWindowClass* window_class) { return igDockSpaceOverViewport(viewport,flags,window_class); }
void FontAtlas_ClearTexData(ImFontAtlas* self) { ImFontAtlas_ClearTexData(self); }
void IO_AddMousePosEvent(ImGuiIO* self,float x,float y) { ImGuiIO_AddMousePosEvent(self,x,y); }
void TableColumnSettings_Destroy(ImGuiTableColumnSettings* self) { ImGuiTableColumnSettings_destroy(self); }
bool SliderFloatV(const char* label,float* v,float v_min,float v_max,const char* format,ImGuiSliderFlags flags) { return igSliderFloat(label,v,v_min,v_max,format,flags); }
void FontGlyphRangesBuilder_AddChar(ImFontGlyphRangesBuilder* self,ImWchar c) { ImFontGlyphRangesBuilder_AddChar(self,c); }
bool SliderScalarV(const char* label,ImGuiDataType data_type,void* p_data,const void* p_min,const void* p_max,const char* format,ImGuiSliderFlags flags) { return igSliderScalar(label,data_type,p_data,p_min,p_max,format,flags); }
void ResetMouseDragDeltaV(ImGuiMouseButton button) { igResetMouseDragDelta(button); }
void DrawData_Destroy(ImDrawData* self) { ImDrawData_destroy(self); }
float GetColumnWidthV(int column_index) { return igGetColumnWidth(column_index); }
bool IsItemDeactivatedAfterEdit() { return igIsItemDeactivatedAfterEdit(); }
void DrawList_PrimUnreserve(ImDrawList* self,int idx_count,int vtx_count) { ImDrawList_PrimUnreserve(self,idx_count,vtx_count); }
void PushItemWidth(float item_width) { igPushItemWidth(item_width); }
void DrawList_PathArcToV(ImDrawList* self,const ImVec2 center,float radius,float a_min,float a_max,int num_segments) { ImDrawList_PathArcTo(self,center,radius,a_min,a_max,num_segments); }
void TextBuffer_Clear(ImGuiTextBuffer* self) { ImGuiTextBuffer_clear(self); }
void TextDisabled(const char* fmt) { igTextDisabled(fmt); }
const ImWchar* FontAtlas_GetGlyphRangesDefault(ImFontAtlas* self) { return ImFontAtlas_GetGlyphRangesDefault(self); }
float GetFrameHeightWithSpacing() { return igGetFrameHeightWithSpacing(); }
int GetKeyIndex(ImGuiKey key) { return igGetKeyIndex(key); }
void DrawList_PathFillConvex(ImDrawList* self,ImU32 col) { ImDrawList_PathFillConvex(self,col); }
bool IsAnyMouseDown() { return igIsAnyMouseDown(); }
ImGuiContext* CreateContextV(ImFontAtlas* shared_font_atlas) { return igCreateContext(shared_font_atlas); }
void ComboPreviewData_Destroy(ImGuiComboPreviewData* self) { ImGuiComboPreviewData_destroy(self); }
ImGuiInputTextCallbackData* InputTextCallbackData_ImGuiInputTextCallbackData() { return ImGuiInputTextCallbackData_ImGuiInputTextCallbackData(); }
ImGuiStyle* Style_ImGuiStyle() { return ImGuiStyle_ImGuiStyle(); }
ImGuiViewport* Viewport_ImGuiViewport() { return ImGuiViewport_ImGuiViewport(); }
bool BeginChild_StrV(const char* str_id,const ImVec2 size,bool border,ImGuiWindowFlags flags) { return igBeginChild_Str(str_id,size,border,flags); }
bool BeginChild_IDV(ImGuiID id,const ImVec2 size,bool border,ImGuiWindowFlags flags) { return igBeginChild_ID(id,size,border,flags); }
void DrawList_ChannelsMerge(ImDrawList* self) { ImDrawList_ChannelsMerge(self); }
bool FontGlyphRangesBuilder_GetBit(ImFontGlyphRangesBuilder* self,size_t n) { return ImFontGlyphRangesBuilder_GetBit(self,n); }
void IO_AddInputCharacter(ImGuiIO* self,unsigned int c) { ImGuiIO_AddInputCharacter(self,c); }
bool ListClipper_Step(ImGuiListClipper* self) { return ImGuiListClipper_Step(self); }
void DebugTextEncoding(const char* text) { igDebugTextEncoding(text); }
void GetDrawCursorPos(ImVec2 *pOut) { igGetCursorPos(pOut); }
const ImFontGlyph* Font_FindGlyph(ImFont* self,ImWchar c) { return ImFont_FindGlyph(self,c); }
void GetWindowContentRegionMin(ImVec2 *pOut) { igGetWindowContentRegionMin(pOut); }
bool IsItemHoveredV(ImGuiHoveredFlags flags) { return igIsItemHovered(flags); }
bool IsMouseHoveringRectV(const ImVec2 r_min,const ImVec2 r_max,bool clip) { return igIsMouseHoveringRect(r_min,r_max,clip); }
void Font_SetGlyphVisible(ImFont* self,ImWchar c,bool visible) { ImFont_SetGlyphVisible(self,c,visible); }
ImU32 ColorConvertFloat4ToU32(const ImVec4 in) { return igColorConvertFloat4ToU32(in); }
void ShowAboutWindowV(bool* p_open) { igShowAboutWindow(p_open); }
void ShowStyleEditorV(ImGuiStyle* ref) { igShowStyleEditor(ref); }
void PushFont(ImFont* font) { igPushFont(font); }
bool Font_IsGlyphRangeUnused(ImFont* self,unsigned int c_begin,unsigned int c_last) { return ImFont_IsGlyphRangeUnused(self,c_begin,c_last); }
void Style_Destroy(ImGuiStyle* self) { ImGuiStyle_destroy(self); }
bool BeginMenuV(const char* label,bool enabled) { return igBeginMenu(label,enabled); }
void SetScrollFromPosX_FloatV(float local_x,float center_x_ratio) { igSetScrollFromPosX_Float(local_x,center_x_ratio); }
float Font_GetCharAdvance(ImFont* self,ImWchar c) { return ImFont_GetCharAdvance(self,c); }
ImDrawList* GetForegroundDrawList_Nil() { return igGetForegroundDrawList_Nil(); }
ImDrawList* GetForegroundDrawList_ViewportPtr(ImGuiViewport* viewport) { return igGetForegroundDrawList_ViewportPtr(viewport); }
bool IsKeyReleased(ImGuiKey key) { return igIsKeyReleased(key); }
void AlignTextToFramePadding() { igAlignTextToFramePadding(); }
bool IsWindowDocked() { return igIsWindowDocked(); }
void PopItemWidth() { igPopItemWidth(); }
void FontAtlas_GetTexDataAsRGBA32V(ImFontAtlas* self,unsigned char** out_pixels,int* out_width,int* out_height,int* out_bytes_per_pixel) { ImFontAtlas_GetTexDataAsRGBA32(self,out_pixels,out_width,out_height,out_bytes_per_pixel); }
void Font_Destroy(ImFont* self) { ImFont_destroy(self); }
void TableHeader(const char* label) { igTableHeader(label); }
void DrawList_AddQuadV(ImDrawList* self,const ImVec2 p1,const ImVec2 p2,const ImVec2 p3,const ImVec2 p4,ImU32 col,float thickness) { ImDrawList_AddQuad(self,p1,p2,p3,p4,col,thickness); }
void IO_AddMouseButtonEvent(ImGuiIO* self,int button,bool down) { ImGuiIO_AddMouseButtonEvent(self,button,down); }
void TextFilter_Destroy(ImGuiTextFilter* self) { ImGuiTextFilter_destroy(self); }
void SetClipboardText(const char* text) { igSetClipboardText(text); }
ImGuiWindowClass* WindowClass_ImGuiWindowClass() { return ImGuiWindowClass_ImGuiWindowClass(); }
ImGuiTableColumnSortSpecs* TableColumnSortSpecs_ImGuiTableColumnSortSpecs() { return ImGuiTableColumnSortSpecs_ImGuiTableColumnSortSpecs(); }
void Vec2ih_Destroy(ImVec2ih* self) { ImVec2ih_destroy(self); }
void End() { igEnd(); }
void DrawList_Destroy(ImDrawList* self) { ImDrawList_destroy(self); }
void TableColumn_Destroy(ImGuiTableColumn* self) { ImGuiTableColumn_destroy(self); }
void StyleColorsClassicV(ImGuiStyle* dst) { igStyleColorsClassic(dst); }
bool InputInt3V(const char* label,int v[3],ImGuiInputTextFlags flags) { return igInputInt3(label,v,flags); }
void UpdatePlatformWindows() { igUpdatePlatformWindows(); }
ImDrawData* DrawData_ImDrawData() { return ImDrawData_ImDrawData(); }
ImGuiListClipper* ListClipper_ImGuiListClipper() { return ImGuiListClipper_ImGuiListClipper(); }
void TableSettings_Destroy(ImGuiTableSettings* self) { ImGuiTableSettings_destroy(self); }
bool IsItemActive() { return igIsItemActive(); }
void DrawList_PrimWriteIdx(ImDrawList* self,ImDrawIdx idx) { ImDrawList_PrimWriteIdx(self,idx); }
ImGuiTextFilter* TextFilter_ImGuiTextFilter(const char* default_filter) { return ImGuiTextFilter_ImGuiTextFilter(default_filter); }
ImGuiMouseCursor GetMouseCursor() { return igGetMouseCursor(); }
void SetColumnOffset(int column_index,float offset_x) { igSetColumnOffset(column_index,offset_x); }
void DestroyContextV(ImGuiContext* ctx) { igDestroyContext(ctx); }
bool InputInt4V(const char* label,int v[4],ImGuiInputTextFlags flags) { return igInputInt4(label,v,flags); }
void LogToTTYV(int auto_open_depth) { igLogToTTY(auto_open_depth); }
void Value_Bool(const char* prefix,bool b) { igValue_Bool(prefix,b); }
void Value_Int(const char* prefix,int v) { igValue_Int(prefix,v); }
void Value_Uint(const char* prefix,unsigned int v) { igValue_Uint(prefix,v); }
void Value_FloatV(const char* prefix,float v,const char* float_format) { igValue_Float(prefix,v,float_format); }
int GetColumnsCount() { return igGetColumnsCount(); }
void ListClipper_ForceDisplayRangeByIndices(ImGuiListClipper* self,int item_min,int item_max) { ImGuiListClipper_ForceDisplayRangeByIndices(self,item_min,item_max); }
void PtrOrIndex_Destroy(ImGuiPtrOrIndex* self) { ImGuiPtrOrIndex_destroy(self); }
bool ButtonV(const char* label,const ImVec2 size) { return igButton(label,size); }
const ImVec4* GetStyleColorVec4(ImGuiCol idx) { return igGetStyleColorVec4(idx); }
void FontAtlasCustomRect_Destroy(ImFontAtlasCustomRect* self) { ImFontAtlasCustomRect_destroy(self); }
void Bullet() { igBullet(); }
void GetItemRectMin(ImVec2 *pOut) { igGetItemRectMin(pOut); }
void SetMouseCursor(ImGuiMouseCursor cursor_type) { igSetMouseCursor(cursor_type); }
void DrawList_PrimReserve(ImDrawList* self,int idx_count,int vtx_count) { ImDrawList_PrimReserve(self,idx_count,vtx_count); }
ImGuiIO* IO_ImGuiIO() { return ImGuiIO_ImGuiIO(); }
void ShowUserGuide() { igShowUserGuide(); }
void EndChildFrame() { igEndChildFrame(); }
bool ShowStyleSelector(const char* label) { return igShowStyleSelector(label); }
bool BeginDragDropTarget() { return igBeginDragDropTarget(); }
void GetDrawCursorScreenPos(ImVec2 *pOut) { igGetCursorScreenPos(pOut); }
float GetTextLineHeight() { return igGetTextLineHeight(); }
float GetTreeNodeToLabelSpacing() { return igGetTreeNodeToLabelSpacing(); }
bool InputFloat3V(const char* label,float v[3],const char* format,ImGuiInputTextFlags flags) { return igInputFloat3(label,v,format,flags); }
const char* SaveIniSettingsToMemoryV(size_t* out_ini_size) { return igSaveIniSettingsToMemory(out_ini_size); }
void Font_AddGlyph(ImFont* self,const ImFontConfig* src_cfg,ImWchar c,float x0,float y0,float x1,float y1,float u0,float v0,float u1,float v1,float advance_x) { ImFont_AddGlyph(self,src_cfg,c,x0,y0,x1,y1,u0,v0,u1,v1,advance_x); }
bool BeginMenuBar() { return igBeginMenuBar(); }
void GetFontTexUvWhitePixel(ImVec2 *pOut) { igGetFontTexUvWhitePixel(pOut); }
void TextUnformattedV(const char* text) { igTextUnformatted(text,0); }
void PlotHistogram_FloatPtrV(const char* label,const float* values,int values_count,int values_offset,const char* overlay_text,float scale_min,float scale_max,ImVec2 graph_size,int stride) { igPlotHistogram_FloatPtr(label,values,values_count,values_offset,overlay_text,scale_min,scale_max,graph_size,stride); }
void PlotHistogram_FnFloatPtr(const char* label,float(*values_getter)(void* data,int idx),void* data,int values_count,int values_offset,const char* overlay_text,float scale_min,float scale_max,ImVec2 graph_size) { igPlotHistogram_FnFloatPtr(label,values_getter,data,values_count,values_offset,overlay_text,scale_min,scale_max,graph_size); }
void Viewport_GetWorkCenter(ImVec2 *pOut,ImGuiViewport* self) { ImGuiViewport_GetWorkCenter(pOut,self); }
void DrawList_AddNgonV(ImDrawList* self,const ImVec2 center,float radius,ImU32 col,int num_segments,float thickness) { ImDrawList_AddNgon(self,center,radius,col,num_segments,thickness); }
bool IsMouseClickedV(ImGuiMouseButton button,bool repeat) { return igIsMouseClicked(button,repeat); }
void SetWindowFontScale(float scale) { igSetWindowFontScale(scale); }
void DockContext_Destroy(ImGuiDockContext* self) { ImGuiDockContext_destroy(self); }
const char* TextBuffer_Begin(ImGuiTextBuffer* self) { return ImGuiTextBuffer_begin(self); }
bool IsAnyItemActive() { return igIsAnyItemActive(); }
const ImWchar* FontAtlas_GetGlyphRangesThai(ImFontAtlas* self) { return ImFontAtlas_GetGlyphRangesThai(self); }
void SettingsHandler_Destroy(ImGuiSettingsHandler* self) { ImGuiSettingsHandler_destroy(self); }
void DrawCmd_Destroy(ImDrawCmd* self) { ImDrawCmd_destroy(self); }
ImDrawData* GetDrawData() { return igGetDrawData(); }
bool TableNextColumn() { return igTableNextColumn(); }
void TableSetBgColorV(ImGuiTableBgTarget target,ImU32 color,int column_n) { igTableSetBgColor(target,color,column_n); }
void InputTextCallbackData_InsertCharsV(ImGuiInputTextCallbackData* self,int pos,const char* text) { ImGuiInputTextCallbackData_InsertChars(self,pos,text,0); }
ImGuiContext* GetCurrentContext() { return igGetCurrentContext(); }
void TextBuffer_Destroy(ImGuiTextBuffer* self) { ImGuiTextBuffer_destroy(self); }
void TextFilter_Clear(ImGuiTextFilter* self) { ImGuiTextFilter_Clear(self); }
const char* GetStyleColorName(ImGuiCol idx) { return igGetStyleColorName(idx); }
bool InputIntV(const char* label,int* v,int step,int step_fast,ImGuiInputTextFlags flags) { return igInputInt(label,v,step,step_fast,flags); }
bool IsMouseDraggingV(ImGuiMouseButton button,float lock_threshold) { return igIsMouseDragging(button,lock_threshold); }
bool InputTextCallbackData_HasSelection(ImGuiInputTextCallbackData* self) { return ImGuiInputTextCallbackData_HasSelection(self); }
void EndMenuBar() { igEndMenuBar(); }
bool IsMousePosValidV(const ImVec2* mouse_pos) { return igIsMousePosValid(mouse_pos); }
void SetDrawCursorPosY(float local_y) { igSetCursorPosY(local_y); }
void ShowMetricsWindowV(bool* p_open) { igShowMetricsWindow(p_open); }
ImFontAtlasCustomRect* FontAtlasCustomRect_ImFontAtlasCustomRect() { return ImFontAtlasCustomRect_ImFontAtlasCustomRect(); }
void FontAtlas_GetTexDataAsAlpha8V(ImFontAtlas* self,unsigned char** out_pixels,int* out_width,int* out_height,int* out_bytes_per_pixel) { ImFontAtlas_GetTexDataAsAlpha8(self,out_pixels,out_width,out_height,out_bytes_per_pixel); }
void TabBar_Destroy(ImGuiTabBar* self) { ImGuiTabBar_destroy(self); }
float GetDrawCursorPosY() { return igGetCursorPosY(); }
bool IsItemEdited() { return igIsItemEdited(); }
void DrawList_AddTriangleV(ImDrawList* self,const ImVec2 p1,const ImVec2 p2,const ImVec2 p3,ImU32 col,float thickness) { ImDrawList_AddTriangle(self,p1,p2,p3,col,thickness); }
void DrawList_PopTextureID(ImDrawList* self) { ImDrawList_PopTextureID(self); }
ImGuiTableSortSpecs* TableGetSortSpecs() { return igTableGetSortSpecs(); }
ImGuiTableSortSpecs* TableSortSpecs_ImGuiTableSortSpecs() { return ImGuiTableSortSpecs_ImGuiTableSortSpecs(); }
void EndDragDropTarget() { igEndDragDropTarget(); }
bool IsItemVisible() { return igIsItemVisible(); }
void DrawListSplitter_ClearFreeMemory(ImDrawListSplitter* self) { ImDrawListSplitter_ClearFreeMemory(self); }
void SetTooltip(const char* fmt) { igSetTooltip(fmt); }
void DrawList_AddRectFilledV(ImDrawList* self,const ImVec2 p_min,const ImVec2 p_max,ImU32 col,float rounding,ImDrawFlags flags) { ImDrawList_AddRectFilled(self,p_min,p_max,col,rounding,flags); }
void FontConfig_Destroy(ImFontConfig* self) { ImFontConfig_destroy(self); }
void EndMainMenuBar() { igEndMainMenuBar(); }
bool SliderFloat4V(const char* label,float v[4],float v_min,float v_max,const char* format,ImGuiSliderFlags flags) { return igSliderFloat4(label,v,v_min,v_max,format,flags); }
void DrawListSplitter_SetCurrentChannel(ImDrawListSplitter* self,ImDrawList* draw_list,int channel_idx) { ImDrawListSplitter_SetCurrentChannel(self,draw_list,channel_idx); }
bool TreeNode_Str(const char* label) { return igTreeNode_Str(label); }
bool TreeNode_StrStr(const char* str_id,const char* fmt) { return igTreeNode_StrStr(str_id,fmt); }
bool TreeNode_Ptr(const void* ptr_id,const char* fmt) { return igTreeNode_Ptr(ptr_id,fmt); }
void NextItemData_Destroy(ImGuiNextItemData* self) { ImGuiNextItemData_destroy(self); }
void EndChild() { igEndChild(); }
void PopTextWrapPos() { igPopTextWrapPos(); }
void DrawList_ChannelsSplit(ImDrawList* self,int count) { ImDrawList_ChannelsSplit(self,count); }
void FontAtlas_CalcCustomRectUV(ImFontAtlas* self,const ImFontAtlasCustomRect* rect,ImVec2* out_uv_min,ImVec2* out_uv_max) { ImFontAtlas_CalcCustomRectUV(self,rect,out_uv_min,out_uv_max); }
void MenuColumns_Destroy(ImGuiMenuColumns* self) { ImGuiMenuColumns_destroy(self); }
void NavItemData_Destroy(ImGuiNavItemData* self) { ImGuiNavItemData_destroy(self); }
void GetMousePosOnOpeningCurrentPopup(ImVec2 *pOut) { igGetMousePosOnOpeningCurrentPopup(pOut); }
void DrawList_AddQuadFilled(ImDrawList* self,const ImVec2 p1,const ImVec2 p2,const ImVec2 p3,const ImVec2 p4,ImU32 col) { ImDrawList_AddQuadFilled(self,p1,p2,p3,p4,col); }
void InputEvent_Destroy(ImGuiInputEvent* self) { ImGuiInputEvent_destroy(self); }
bool DragFloat4V(const char* label,float v[4],float v_speed,float v_min,float v_max,const char* format,ImGuiSliderFlags flags) { return igDragFloat4(label,v,v_speed,v_min,v_max,format,flags); }
bool DragScalarV(const char* label,ImGuiDataType data_type,void* p_data,float v_speed,const void* p_min,const void* p_max,const char* format,ImGuiSliderFlags flags) { return igDragScalar(label,data_type,p_data,v_speed,p_min,p_max,format,flags); }
void EndPopup() { igEndPopup(); }
void DrawList_GetClipRectMax(ImVec2 *pOut,ImDrawList* self) { ImDrawList_GetClipRectMax(pOut,self); }
const char* Font_CalcWordWrapPositionA(ImFont* self,float scale,const char* text,float wrap_width) { return ImFont_CalcWordWrapPositionA(self,scale,text,0,wrap_width); }
float GetFrameHeight() { return igGetFrameHeight(); }
void StyleColorsLightV(ImGuiStyle* dst) { igStyleColorsLight(dst); }
ImGuiIO* GetIO() { return igGetIO(); }
bool BeginPopupContextVoidV(const char* str_id,ImGuiPopupFlags popup_flags) { return igBeginPopupContextVoid(str_id,popup_flags); }
void LabelText(const char* label,const char* fmt) { igLabelText(label,fmt); }
void DrawListSplitter_Clear(ImDrawListSplitter* self) { ImDrawListSplitter_Clear(self); }
void DrawListSplitter_Split(ImDrawListSplitter* self,ImDrawList* draw_list,int count) { ImDrawListSplitter_Split(self,draw_list,count); }
ImFont* FontAtlas_AddFontFromMemoryCompressedTTFV(ImFontAtlas* self,const void* compressed_font_data,int compressed_font_size,float size_pixels,const ImFontConfig* font_cfg,const ImWchar* glyph_ranges) { return ImFontAtlas_AddFontFromMemoryCompressedTTF(self,compressed_font_data,compressed_font_size,size_pixels,font_cfg,glyph_ranges); }
void DrawListSplitter_Merge(ImDrawListSplitter* self,ImDrawList* draw_list) { ImDrawListSplitter_Merge(self,draw_list); }
void DrawList_ChannelsSetCurrent(ImDrawList* self,int n) { ImDrawList_ChannelsSetCurrent(self,n); }
const char* GetClipboardText() { return igGetClipboardText(); }
ImDrawList* GetWindowDrawList() { return igGetWindowDrawList(); }
void TableNextRowV(ImGuiTableRowFlags row_flags,float min_row_height) { igTableNextRow(row_flags,min_row_height); }
void DrawList_PathStrokeV(ImDrawList* self,ImU32 col,ImDrawFlags flags,float thickness) { ImDrawList_PathStroke(self,col,flags,thickness); }
void PlatformImeData_Destroy(ImGuiPlatformImeData* self) { ImGuiPlatformImeData_destroy(self); }
bool DragFloatV(const char* label,float* v,float v_speed,float v_min,float v_max,const char* format,ImGuiSliderFlags flags) { return igDragFloat(label,v,v_speed,v_min,v_max,format,flags); }
const char* GetKeyName(ImGuiKey key) { return igGetKeyName(key); }
ImGuiViewport* GetWindowViewport() { return igGetWindowViewport(); }
bool MenuItem_BoolV(const char* label,const char* shortcut,bool selected,bool enabled) { return igMenuItem_Bool(label,shortcut,selected,enabled); }
bool MenuItem_BoolPtrV(const char* label,const char* shortcut,bool* p_selected,bool enabled) { return igMenuItem_BoolPtr(label,shortcut,p_selected,enabled); }
void PlotLines_FloatPtrV(const char* label,const float* values,int values_count,int values_offset,const char* overlay_text,float scale_min,float scale_max,ImVec2 graph_size,int stride) { igPlotLines_FloatPtr(label,values,values_count,values_offset,overlay_text,scale_min,scale_max,graph_size,stride); }
void PlotLines_FnFloatPtr(const char* label,float(*values_getter)(void* data,int idx),void* data,int values_count,int values_offset,const char* overlay_text,float scale_min,float scale_max,ImVec2 graph_size) { igPlotLines_FnFloatPtr(label,values_getter,data,values_count,values_offset,overlay_text,scale_min,scale_max,graph_size); }
void DrawList_AddRectFilledMultiColor(ImDrawList* self,const ImVec2 p_min,const ImVec2 p_max,ImU32 col_upr_left,ImU32 col_upr_right,ImU32 col_bot_right,ImU32 col_bot_left) { ImDrawList_AddRectFilledMultiColor(self,p_min,p_max,col_upr_left,col_upr_right,col_bot_right,col_bot_left); }
void GetItemRectMax(ImVec2 *pOut) { igGetItemRectMax(pOut); }
bool DragFloatRange2V(const char* label,float* v_current_min,float* v_current_max,float v_speed,float v_min,float v_max,const char* format,const char* format_max,ImGuiSliderFlags flags) { return igDragFloatRange2(label,v_current_min,v_current_max,v_speed,v_min,v_max,format,format_max,flags); }
void DrawList_PushClipRectV(ImDrawList* self,const ImVec2 clip_rect_min,const ImVec2 clip_rect_max,bool intersect_with_current_clip_rect) { ImDrawList_PushClipRect(self,clip_rect_min,clip_rect_max,intersect_with_current_clip_rect); }
void Context_Destroy(ImGuiContext* self) { ImGuiContext_destroy(self); }
const char* TextBuffer_End(ImGuiTextBuffer* self) { return ImGuiTextBuffer_end(self); }
void ColorConvertHSVtoRGB(float h,float s,float v,float* out_r,float* out_g,float* out_b) { igColorConvertHSVtoRGB(h,s,v,out_r,out_g,out_b); }
float GetWindowWidth() { return igGetWindowWidth(); }
void MemFree(void* ptr) { igMemFree(ptr); }
void SetScrollFromPosY_FloatV(float local_y,float center_y_ratio) { igSetScrollFromPosY_Float(local_y,center_y_ratio); }
void Spacing() { igSpacing(); }
void DrawList_AddText_Vec2V(ImDrawList* self,const ImVec2 pos,ImU32 col,const char* text_begin) { ImDrawList_AddText_Vec2(self,pos,col,text_begin,0); }
void DrawList_AddText_FontPtrV(ImDrawList* self,const ImFont* font,float font_size,const ImVec2 pos,ImU32 col,const char* text_begin,float wrap_width,const ImVec4* cpu_fine_clip_rect) { ImDrawList_AddText_FontPtr(self,font,font_size,pos,col,text_begin,0,wrap_width,cpu_fine_clip_rect); }
void Font_AddRemapCharV(ImFont* self,ImWchar dst,ImWchar src,bool overwrite_dst) { ImFont_AddRemapChar(self,dst,src,overwrite_dst); }
bool TreeNodeEx_StrV(const char* label,ImGuiTreeNodeFlags flags) { return igTreeNodeEx_Str(label,flags); }
bool TreeNodeEx_StrStr(const char* str_id,ImGuiTreeNodeFlags flags,const char* fmt) { return igTreeNodeEx_StrStr(str_id,flags,fmt); }
bool TreeNodeEx_Ptr(const void* ptr_id,ImGuiTreeNodeFlags flags,const char* fmt) { return igTreeNodeEx_Ptr(ptr_id,flags,fmt); }
void Style_ScaleAllSizes(ImGuiStyle* self,float scale_factor) { ImGuiStyle_ScaleAllSizes(self,scale_factor); }
void SetScrollHereYV(float center_y_ratio) { igSetScrollHereY(center_y_ratio); }
ImFont* FontAtlas_AddFontFromFileTTFV(ImFontAtlas* self,const char* filename,float size_pixels,const ImFontConfig* font_cfg,const ImWchar* glyph_ranges) { return ImFontAtlas_AddFontFromFileTTF(self,filename,size_pixels,font_cfg,glyph_ranges); }
void EndDragDropSource() { igEndDragDropSource(); }
void FontGlyphRangesBuilder_AddRanges(ImFontGlyphRangesBuilder* self,const ImWchar* ranges) { ImFontGlyphRangesBuilder_AddRanges(self,ranges); }
bool ColorPicker4V(const char* label,float col[4],ImGuiColorEditFlags flags,const float* ref_col) { return igColorPicker4(label,col,flags,ref_col); }
bool Payload_IsPreview(ImGuiPayload* self) { return ImGuiPayload_IsPreview(self); }
void TableSortSpecs_Destroy(ImGuiTableSortSpecs* self) { ImGuiTableSortSpecs_destroy(self); }
ImU32 GetColorU32_ColV(ImGuiCol idx,float alpha_mul) { return igGetColorU32_Col(idx,alpha_mul); }
ImU32 GetColorU32_Vec4(const ImVec4 col) { return igGetColorU32_Vec4(col); }
ImU32 GetColorU32_U32(ImU32 col) { return igGetColorU32_U32(col); }
float GetWindowHeight() { return igGetWindowHeight(); }
bool SliderFloat2V(const char* label,float v[2],float v_min,float v_max,const char* format,ImGuiSliderFlags flags) { return igSliderFloat2(label,v,v_min,v_max,format,flags); }
void TableSetupColumnV(const char* label,ImGuiTableColumnFlags flags,float init_width_or_weight,ImGuiID user_id) { igTableSetupColumn(label,flags,init_width_or_weight,user_id); }
ImGuiOnceUponAFrame* OnceUponAFrame_ImGuiOnceUponAFrame() { return ImGuiOnceUponAFrame_ImGuiOnceUponAFrame(); }
bool DragIntRange2V(const char* label,int* v_current_min,int* v_current_max,float v_speed,int v_min,int v_max,const char* format,const char* format_max,ImGuiSliderFlags flags) { return igDragIntRange2(label,v_current_min,v_current_max,v_speed,v_min,v_max,format,format_max,flags); }
int FontAtlas_AddCustomRectRegular(ImFontAtlas* self,int width,int height) { return ImFontAtlas_AddCustomRectRegular(self,width,height); }
void SetWindowFocus_Nil() { igSetWindowFocus_Nil(); }
void SetWindowFocus_Str(const char* name) { igSetWindowFocus_Str(name); }
void GetContentRegionMax(ImVec2 *pOut) { igGetContentRegionMax(pOut); }
void IO_AddMouseWheelEvent(ImGuiIO* self,float wh_x,float wh_y) { ImGuiIO_AddMouseWheelEvent(self,wh_x,wh_y); }
void TextFilter_Build(ImGuiTextFilter* self) { ImGuiTextFilter_Build(self); }
bool InputInt2V(const char* label,int v[2],ImGuiInputTextFlags flags) { return igInputInt2(label,v,flags); }
bool VSliderFloatV(const char* label,const ImVec2 size,float* v,float v_min,float v_max,const char* format,ImGuiSliderFlags flags) { return igVSliderFloat(label,size,v,v_min,v_max,format,flags); }
void DrawList_AddRectV(ImDrawList* self,const ImVec2 p_min,const ImVec2 p_max,ImU32 col,float rounding,ImDrawFlags flags,float thickness) { ImDrawList_AddRect(self,p_min,p_max,col,rounding,flags,thickness); }
void LogButtons() { igLogButtons(); }
void PushStyleVar_Float(ImGuiStyleVar idx,float val) { igPushStyleVar_Float(idx,val); }
void PushStyleVar_Vec2(ImGuiStyleVar idx,const ImVec2 val) { igPushStyleVar_Vec2(idx,val); }
void BeginGroup() { igBeginGroup(); }
void LogToFileV(int auto_open_depth,const char* filename) { igLogToFile(auto_open_depth,filename); }
void NewLine() { igNewLine(); }
int TableGetColumnIndex() { return igTableGetColumnIndex(); }
const char* TextBuffer_c_str(ImGuiTextBuffer* self) { return ImGuiTextBuffer_c_str(self); }
bool InputDoubleV(const char* label,double* v,double step,double step_fast,const char* format,ImGuiInputTextFlags flags) { return igInputDouble(label,v,step,step_fast,format,flags); }
bool SliderFloat3V(const char* label,float v[3],float v_min,float v_max,const char* format,ImGuiSliderFlags flags) { return igSliderFloat3(label,v,v_min,v_max,format,flags); }
void DrawList_PushTextureID(ImDrawList* self,ImTextureID texture_id) { ImDrawList_PushTextureID(self,texture_id); }
void DrawData_ScaleClipRects(ImDrawData* self,const ImVec2 fb_scale) { ImDrawData_ScaleClipRects(self,fb_scale); }
bool BeginChildFrameV(ImGuiID id,const ImVec2 size,ImGuiWindowFlags flags) { return igBeginChildFrame(id,size,flags); }
void SetItemDefaultFocus() { igSetItemDefaultFocus(); }
void DrawList_PathLineTo(ImDrawList* self,const ImVec2 pos) { ImDrawList_PathLineTo(self,pos); }
void IO_AddInputCharacterUTF16(ImGuiIO* self,ImWchar16 c) { ImGuiIO_AddInputCharacterUTF16(self,c); }
void TextBuffer_Reserve(ImGuiTextBuffer* self,int capacity) { ImGuiTextBuffer_reserve(self,capacity); }
void SetNextWindowCollapsedV(bool collapsed,ImGuiCond cond) { igSetNextWindowCollapsed(collapsed,cond); }
ImTextureID DrawCmd_GetTexID(ImDrawCmd* self) { return ImDrawCmd_GetTexID(self); }
void DrawList_PathRectV(ImDrawList* self,const ImVec2 rect_min,const ImVec2 rect_max,float rounding,ImDrawFlags flags) { ImDrawList_PathRect(self,rect_min,rect_max,rounding,flags); }
bool Combo_Str_arrV(const char* label,int* current_item,const char* const items[],int items_count,int popup_max_height_in_items) { return igCombo_Str_arr(label,current_item,items,items_count,popup_max_height_in_items); }
bool Combo_StrV(const char* label,int* current_item,const char* items_separated_by_zeros,int popup_max_height_in_items) { return igCombo_Str(label,current_item,items_separated_by_zeros,popup_max_height_in_items); }
bool Combo_FnBoolPtr(const char* label,int* current_item,bool(*items_getter)(void* data,int idx,const char** out_text),void* data,int items_count,int popup_max_height_in_items) { return igCombo_FnBoolPtr(label,current_item,items_getter,data,items_count,popup_max_height_in_items); }
int FontAtlas_AddCustomRectFontGlyphV(ImFontAtlas* self,ImFont* font,ImWchar id,int width,int height,float advance_x,const ImVec2 offset) { return ImFontAtlas_AddCustomRectFontGlyph(self,font,id,width,height,advance_x,offset); }
void BulletText(const char* fmt) { igBulletText(fmt); }
void TreePush_Str(const char* str_id) { igTreePush_Str(str_id); }
void TreePush_PtrV(const void* ptr_id) { igTreePush_Ptr(ptr_id); }
ImFontAtlasCustomRect* FontAtlas_GetCustomRectByIndex(ImFontAtlas* self,int index) { return ImFontAtlas_GetCustomRectByIndex(self,index); }
bool BeginComboV(const char* label,const char* preview_value,ImGuiComboFlags flags) { return igBeginCombo(label,preview_value,flags); }
void SetNextWindowContentSize(const ImVec2 size) { igSetNextWindowContentSize(size); }
void Viewport_GetCenter(ImVec2 *pOut,ImGuiViewport* self) { ImGuiViewport_GetCenter(pOut,self); }
bool IsWindowCollapsed() { return igIsWindowCollapsed(); }
void Render() { igRender(); }
void Font_GrowIndex(ImFont* self,int new_size) { ImFont_GrowIndex(self,new_size); }
void StyleMod_Destroy(ImGuiStyleMod* self) { ImGuiStyleMod_destroy(self); }
float GetTextLineHeightWithSpacing() { return igGetTextLineHeightWithSpacing(); }
void StackSizes_Destroy(ImGuiStackSizes* self) { ImGuiStackSizes_destroy(self); }
bool ArrowButton(const char* str_id,ImGuiDir dir) { return igArrowButton(str_id,dir); }
void SetDrawCursorPosX(float local_x) { igSetCursorPosX(local_x); }
ImGuiID GetID_Str(const char* str_id) { return igGetID_Str(str_id); }
ImGuiID GetID_StrStr(const char* str_id_begin,const char* str_id_end) { return igGetID_StrStr(str_id_begin,str_id_end); }
ImGuiID GetID_Ptr(const void* ptr_id) { return igGetID_Ptr(ptr_id); }
void DrawList_PrimWriteVtx(ImDrawList* self,const ImVec2 pos,const ImVec2 uv,ImU32 col) { ImDrawList_PrimWriteVtx(self,pos,uv,col); }
void IO_AddKeyAnalogEvent(ImGuiIO* self,ImGuiKey key,bool down,float v) { ImGuiIO_AddKeyAnalogEvent(self,key,down,v); }
void EndTable() { igEndTable(); }
void StackLevelInfo_Destroy(ImGuiStackLevelInfo* self) { ImGuiStackLevelInfo_destroy(self); }
void EndListBox() { igEndListBox(); }
const ImGuiPayload* GetDragDropPayload() { return igGetDragDropPayload(); }
void StyleColorsDarkV(ImGuiStyle* dst) { igStyleColorsDark(dst); }
void Font_ClearOutputData(ImFont* self) { ImFont_ClearOutputData(self); }
void IO_ClearInputKeys(ImGuiIO* self) { ImGuiIO_ClearInputKeys(self); }
void PlatformIO_Destroy(ImGuiPlatformIO* self) { ImGuiPlatformIO_destroy(self); }
void Vec2_Destroy(ImVec2* self) { ImVec2_destroy(self); }
bool RadioButton_Bool(const char* label,bool active) { return igRadioButton_Bool(label,active); }
bool RadioButton_IntPtr(const char* label,int* v,int v_button) { return igRadioButton_IntPtr(label,v,v_button); }
void TextColored(const ImVec4 col,const char* fmt) { igTextColored(col,fmt); }
void TreePop() { igTreePop(); }
void ShowStackToolWindowV(bool* p_open) { igShowStackToolWindow(p_open); }
bool TableSetColumnIndex(int column_n) { return igTableSetColumnIndex(column_n); }
void DrawList_GetClipRectMin(ImVec2 *pOut,ImDrawList* self) { ImDrawList_GetClipRectMin(pOut,self); }
void DrawList_PathBezierQuadraticCurveToV(ImDrawList* self,const ImVec2 p2,const ImVec2 p3,int num_segments) { ImDrawList_PathBezierQuadraticCurveTo(self,p2,p3,num_segments); }
ImFont* FontAtlas_AddFontFromMemoryCompressedBase85TTFV(ImFontAtlas* self,const char* compressed_font_data_base85,float size_pixels,const ImFontConfig* font_cfg,const ImWchar* glyph_ranges) { return ImFontAtlas_AddFontFromMemoryCompressedBase85TTF(self,compressed_font_data_base85,size_pixels,font_cfg,glyph_ranges); }
bool InputScalarV(const char* label,ImGuiDataType data_type,void* p_data,const void* p_step,const void* p_step_fast,const char* format,ImGuiInputTextFlags flags) { return igInputScalar(label,data_type,p_data,p_step,p_step_fast,format,flags); }
ImFont* FontAtlas_AddFontFromMemoryTTFV(ImFontAtlas* self,void* font_data,int font_size,float size_pixels,const ImFontConfig* font_cfg,const ImWchar* glyph_ranges) { return ImFontAtlas_AddFontFromMemoryTTF(self,font_data,font_size,size_pixels,font_cfg,glyph_ranges); }
void ColumnsV(int count,const char* id,bool border) { igColumns(count,id,border); }
void SetNextWindowDockIDV(ImGuiID dock_id,ImGuiCond cond) { igSetNextWindowDockID(dock_id,cond); }
void Font_BuildLookupTable(ImFont* self) { ImFont_BuildLookupTable(self); }
void WindowSettings_Destroy(ImGuiWindowSettings* self) { ImGuiWindowSettings_destroy(self); }
void GetMouseDragDeltaV(ImVec2 *pOut,ImGuiMouseButton button,float lock_threshold) { igGetMouseDragDelta(pOut,button,lock_threshold); }
float GetScrollX() { return igGetScrollX(); }
ImFontAtlas* FontAtlas_ImFontAtlas() { return ImFontAtlas_ImFontAtlas(); }
bool IsItemToggledOpen() { return igIsItemToggledOpen(); }
void SetCurrentContext(ImGuiContext* ctx) { igSetCurrentContext(ctx); }
ImFont* Font_ImFont() { return ImFont_ImFont(); }
bool BeginV(const char* name,bool* p_open,ImGuiWindowFlags flags) { return igBegin(name,p_open,flags); }
void DrawListSharedData_Destroy(ImDrawListSharedData* self) { ImDrawListSharedData_destroy(self); }
const ImWchar* FontAtlas_GetGlyphRangesCyrillic(ImFontAtlas* self) { return ImFontAtlas_GetGlyphRangesCyrillic(self); }
bool Payload_IsDelivery(ImGuiPayload* self) { return ImGuiPayload_IsDelivery(self); }
void DestroyPlatformWindows() { igDestroyPlatformWindows(); }
bool DragInt2V(const char* label,int v[2],float v_speed,int v_min,int v_max,const char* format,ImGuiSliderFlags flags) { return igDragInt2(label,v,v_speed,v_min,v_max,format,flags); }
bool VSliderIntV(const char* label,const ImVec2 size,int* v,int v_min,int v_max,const char* format,ImGuiSliderFlags flags) { return igVSliderInt(label,size,v,v_min,v_max,format,flags); }
void Payload_Destroy(ImGuiPayload* self) { ImGuiPayload_destroy(self); }
bool BeginTabItemV(const char* label,bool* p_open,ImGuiTabItemFlags flags) { return igBeginTabItem(label,p_open,flags); }
void PopStyleColorV(int count) { igPopStyleColor(count); }
bool ColorButtonV(const char* desc_id,const ImVec4 col,ImGuiColorEditFlags flags,const ImVec2 size) { return igColorButton(desc_id,col,flags,size); }
void InputTextCallbackData_Destroy(ImGuiInputTextCallbackData* self) { ImGuiInputTextCallbackData_destroy(self); }
bool SliderIntV(const char* label,int* v,int v_min,int v_max,const char* format,ImGuiSliderFlags flags) { return igSliderInt(label,v,v_min,v_max,format,flags); }
const ImWchar* FontAtlas_GetGlyphRangesJapanese(ImFontAtlas* self) { return ImFontAtlas_GetGlyphRangesJapanese(self); }
void InputTextState_Destroy(ImGuiInputTextState* self) { ImGuiInputTextState_destroy(self); }
void EndDisabled() { igEndDisabled(); }
void OldColumns_Destroy(ImGuiOldColumns* self) { ImGuiOldColumns_destroy(self); }
const char* GetVersion() { return igGetVersion(); }
void ListClipperData_Destroy(ImGuiListClipperData* self) { ImGuiListClipperData_destroy(self); }
void NextWindowData_Destroy(ImGuiNextWindowData* self) { ImGuiNextWindowData_destroy(self); }
void FontAtlas_SetTexID(ImFontAtlas* self,ImTextureID id) { ImFontAtlas_SetTexID(self,id); }
void SetColorEditOptions(ImGuiColorEditFlags flags) { igSetColorEditOptions(flags); }
bool BeginPopupV(const char* str_id,ImGuiWindowFlags flags) { return igBeginPopup(str_id,flags); }
bool InputTextWithHintV(const char* label,const char* hint,char* buf,size_t buf_size,ImGuiInputTextFlags flags,ImGuiInputTextCallback callback,void* user_data) { return igInputTextWithHint(label,hint,buf,buf_size,flags,callback,user_data); }
void SetNextWindowBgAlpha(float alpha) { igSetNextWindowBgAlpha(alpha); }
void IO_SetKeyEventNativeDataV(ImGuiIO* self,ImGuiKey key,int native_keycode,int native_scancode,int native_legacy_index) { ImGuiIO_SetKeyEventNativeData(self,key,native_keycode,native_scancode,native_legacy_index); }
void Payload_Clear(ImGuiPayload* self) { ImGuiPayload_Clear(self); }
float GetWindowDpiScale() { return igGetWindowDpiScale(); }
void ShowDemoWindowV(bool* p_open) { igShowDemoWindow(p_open); }
void Color_Destroy(ImColor* self) { ImColor_destroy(self); }
void TableSetColumnEnabled(int column_n,bool v) { igTableSetColumnEnabled(column_n,v); }
float GetColumnOffsetV(int column_index) { return igGetColumnOffset(column_index); }
void RenderPlatformWindowsDefaultV(void* platform_render_arg,void* renderer_render_arg) { igRenderPlatformWindowsDefault(platform_render_arg,renderer_render_arg); }
void SameLineV(float offset_from_start_x,float spacing) { igSameLine(offset_from_start_x,spacing); }
void SetColumnWidth(int column_index,float width) { igSetColumnWidth(column_index,width); }
void FontAtlas_ClearInputData(ImFontAtlas* self) { ImFontAtlas_ClearInputData(self); }
ImVec4* Vec4_ImVec4_Nil() { return ImVec4_ImVec4_Nil(); }
ImVec4* Vec4_ImVec4_Float(float _x,float _y,float _z,float _w) { return ImVec4_ImVec4_Float(_x,_y,_z,_w); }
void OpenPopup_StrV(const char* str_id,ImGuiPopupFlags popup_flags) { igOpenPopup_Str(str_id,popup_flags); }
void OpenPopup_IDV(ImGuiID id,ImGuiPopupFlags popup_flags) { igOpenPopup_ID(id,popup_flags); }
bool InputText(const char* label,char* buf,size_t buf_size) { return InputTextV(label,buf,buf_size,0,NULL,NULL); }
void Unindent() { UnindentV(0.0f); }
ImGuiID DockSpace(ImGuiID id) { return DockSpaceV(id,(ImVec2){.x=0, .y=0},0,NULL); }
void DrawList_AddImage(ImDrawList* self,ImTextureID user_texture_id,const ImVec2 p_min,const ImVec2 p_max) { DrawList_AddImageV(self,user_texture_id,p_min,p_max,(ImVec2){.x=0, .y=0},(ImVec2){.x=0, .y=0},4294967295); }
bool TabItemButton(const char* label) { return TabItemButtonV(label,0); }
void SetNextWindowSize(const ImVec2 size) { SetNextWindowSizeV(size,0); }
void SetKeyboardFocusHere() { SetKeyboardFocusHereV(0); }
void SetNextWindowPos(const ImVec2 pos) { SetNextWindowPosV(pos,0,(ImVec2){.x=0, .y=0}); }
void Font_CalcTextSizeA(ImVec2* pOut,ImFont* self,float size,float max_width,float wrap_width,const char* text_begin) { Font_CalcTextSizeAV(pOut,self,size,max_width,wrap_width,text_begin,NULL); }
void ShowDebugLogWindow() { ShowDebugLogWindowV(NULL); }
void OpenPopupOnItemClick() { OpenPopupOnItemClickV(NULL,1); }
bool Selectable_Bool(const char* label) { return Selectable_BoolV(label,false,0,(ImVec2){.x=0, .y=0}); }
bool Selectable_BoolPtr(const char* label,bool* p_selected) { return Selectable_BoolPtrV(label,p_selected,0,(ImVec2){.x=0, .y=0}); }
bool SliderInt2(const char* label,int v[2],int v_min,int v_max) { return SliderInt2V(label,v,v_min,v_max,"%d",0); }
bool BeginPopupContextItem() { return BeginPopupContextItemV(NULL,1); }
bool DragScalarN(const char* label,ImGuiDataType data_type,void* p_data,int components) { return DragScalarNV(label,data_type,p_data,components,1.0f,NULL,NULL,NULL,0); }
void Color_SetHSV(ImColor* self,float h,float s,float v) { Color_SetHSVV(self,h,s,v,1.0f); }
ImFont* FontAtlas_AddFontDefault(ImFontAtlas* self) { return FontAtlas_AddFontDefaultV(self,NULL); }
void ProgressBar(float fraction) { ProgressBarV(fraction,(ImVec2){.x=0, .y=0},NULL); }
void ListClipper_Begin(ImGuiListClipper* self,int items_count) { ListClipper_BeginV(self,items_count,-1.0f); }
bool InputScalarN(const char* label,ImGuiDataType data_type,void* p_data,int components) { return InputScalarNV(label,data_type,p_data,components,NULL,NULL,NULL,0); }
bool BeginPopupContextWindow() { return BeginPopupContextWindowV(NULL,1); }
void DrawList_AddBezierCubic(ImDrawList* self,const ImVec2 p1,const ImVec2 p2,const ImVec2 p3,const ImVec2 p4,ImU32 col,float thickness) { DrawList_AddBezierCubicV(self,p1,p2,p3,p4,col,thickness,0); }
const char* TableGetColumnName_Int() { return TableGetColumnName_IntV(-1); }
bool SliderInt4(const char* label,int v[4],int v_min,int v_max) { return SliderInt4V(label,v,v_min,v_max,"%d",0); }
bool IsKeyPressed(ImGuiKey key) { return IsKeyPressedV(key,true); }
void BeginDisabled() { BeginDisabledV(true); }
bool IsWindowHovered() { return IsWindowHoveredV(0); }
void SetWindowCollapsed_Bool(bool collapsed) { SetWindowCollapsed_BoolV(collapsed,0); }
void SetWindowCollapsed_Str(const char* name,bool collapsed) { SetWindowCollapsed_StrV(name,collapsed,0); }
bool InvisibleButton(const char* str_id,const ImVec2 size) { return InvisibleButtonV(str_id,size,0); }
bool IsPopupOpen_Str(const char* str_id) { return IsPopupOpen_StrV(str_id,0); }
void Font_RenderText(ImFont* self,ImDrawList* draw_list,float size,const ImVec2 pos,ImU32 col,const ImVec4 clip_rect,const char* text_begin) { Font_RenderTextV(self,draw_list,size,pos,col,clip_rect,text_begin,0.0f,false); }
bool DragInt4(const char* label,int v[4]) { return DragInt4V(label,v,1.0f,0,0,"%d",0); }
bool ColorPicker3(const char* label,float col[3]) { return ColorPicker3V(label,col,0); }
bool DragFloat2(const char* label,float v[2]) { return DragFloat2V(label,v,1.0f,0.0f,0.0f,"%.3f",0); }
void PushTextWrapPos() { PushTextWrapPosV(0.0f); }
void LoadIniSettingsFromMemory(const char* ini_data) { LoadIniSettingsFromMemoryV(ini_data,0); }
void DrawList_AddCircle(ImDrawList* self,const ImVec2 center,float radius,ImU32 col) { DrawList_AddCircleV(self,center,radius,col,0,1.0f); }
bool DragFloat3(const char* label,float v[3]) { return DragFloat3V(label,v,1.0f,0.0f,0.0f,"%.3f",0); }
bool TextFilter_PassFilter(ImGuiTextFilter* self,const char* text) { return TextFilter_PassFilterV(self,text); }
void SetScrollHereX() { SetScrollHereXV(0.5f); }
void DrawList_AddBezierQuadratic(ImDrawList* self,const ImVec2 p1,const ImVec2 p2,const ImVec2 p3,ImU32 col,float thickness) { DrawList_AddBezierQuadraticV(self,p1,p2,p3,col,thickness,0); }
bool ListBox_Str_arr(const char* label,int* current_item,const char* const items[],int items_count) { return ListBox_Str_arrV(label,current_item,items,items_count,-1); }
void DrawList_AddImageQuad(ImDrawList* self,ImTextureID user_texture_id,const ImVec2 p1,const ImVec2 p2,const ImVec2 p3,const ImVec2 p4) { DrawList_AddImageQuadV(self,user_texture_id,p1,p2,p3,p4,(ImVec2){.x=0, .y=0},(ImVec2){.x=0, .y=0},(ImVec2){.x=0, .y=0},(ImVec2){.x=0, .y=0},4294967295); }
bool InputTextMultiline(const char* label,char* buf,size_t buf_size) { return InputTextMultilineV(label,buf,buf_size,(ImVec2){.x=0, .y=0},0,NULL,NULL); }
void PopStyleVar() { PopStyleVarV(1); }
void DrawList_AddImageRounded(ImDrawList* self,ImTextureID user_texture_id,const ImVec2 p_min,const ImVec2 p_max,const ImVec2 uv_min,const ImVec2 uv_max,ImU32 col,float rounding) { DrawList_AddImageRoundedV(self,user_texture_id,p_min,p_max,uv_min,uv_max,col,rounding,0); }
void DrawList_PathBezierCubicCurveTo(ImDrawList* self,const ImVec2 p2,const ImVec2 p3,const ImVec2 p4) { DrawList_PathBezierCubicCurveToV(self,p2,p3,p4,0); }
bool IsWindowFocused() { return IsWindowFocusedV(0); }
void Indent() { IndentV(0.0f); }
void Color_HSV(ImColor* pOut,float h,float s,float v) { Color_HSVV(pOut,h,s,v,1.0f); }
bool DragInt(const char* label,int* v) { return DragIntV(label,v,1.0f,0,0,"%d",0); }
bool SliderScalarN(const char* label,ImGuiDataType data_type,void* p_data,int components,const void* p_min,const void* p_max) { return SliderScalarNV(label,data_type,p_data,components,p_min,p_max,NULL,0); }
bool BeginTabBar(const char* str_id) { return BeginTabBarV(str_id,0); }
bool InputFloat(const char* label,float* v) { return InputFloatV(label,v,0.0f,0.0f,"%.3f",0); }
void SetNextWindowSizeConstraints(const ImVec2 size_min,const ImVec2 size_max) { SetNextWindowSizeConstraintsV(size_min,size_max,NULL,NULL); }
bool InputFloat4(const char* label,float v[4]) { return InputFloat4V(label,v,"%.3f",0); }
void SetWindowPos_Vec2(const ImVec2 pos) { SetWindowPos_Vec2V(pos,0); }
void SetWindowPos_Str(const char* name,const ImVec2 pos) { SetWindowPos_StrV(name,pos,0); }
bool ColorEdit4(const char* label,float col[4]) { return ColorEdit4V(label,col,0); }
bool TextFilter_Draw(ImGuiTextFilter* self) { return TextFilter_DrawV(self,"Filter(inc,-exc)",0.0f); }
ImGuiTableColumnFlags TableGetColumnFlags() { return TableGetColumnFlagsV(-1); }
void TextBuffer_Append(ImGuiTextBuffer* self,const char* str) { TextBuffer_AppendV(self,str,NULL); }
bool SliderAngle(const char* label,float* v_rad) { return SliderAngleV(label,v_rad,-360.0f,+360.0f,"%.0f deg",0); }
bool InputFloat2(const char* label,float v[2]) { return InputFloat2V(label,v,"%.3f",0); }
bool IsItemClicked() { return IsItemClickedV(0); }
bool BeginTable(const char* str_id,int column) { return BeginTableV(str_id,column,0,(ImVec2){.x=0, .y=0},0.0f); }
void SetWindowSize_Vec2(const ImVec2 size) { SetWindowSize_Vec2V(size,0); }
void SetWindowSize_Str(const char* name,const ImVec2 size) { SetWindowSize_StrV(name,size,0); }
bool ColorEdit3(const char* label,float col[3]) { return ColorEdit3V(label,col,0); }
void CalcTextSize(ImVec2* pOut,const char* text) { CalcTextSizeV(pOut,text,false,-1.0f); }
const ImGuiPayload* AcceptDragDropPayload(const char* type) { return AcceptDragDropPayloadV(type,0); }
bool SliderInt3(const char* label,int v[3],int v_min,int v_max) { return SliderInt3V(label,v,v_min,v_max,"%d",0); }
bool DragInt3(const char* label,int v[3]) { return DragInt3V(label,v,1.0f,0,0,"%d",0); }
bool SetDragDropPayload(const char* type,const void* data,size_t sz) { return SetDragDropPayloadV(type,data,sz,0); }
bool VSliderScalar(const char* label,const ImVec2 size,ImGuiDataType data_type,void* p_data,const void* p_min,const void* p_max) { return VSliderScalarV(label,size,data_type,p_data,p_min,p_max,NULL,0); }
bool CollapsingHeader_TreeNodeFlags(const char* label) { return CollapsingHeader_TreeNodeFlagsV(label,0); }
bool CollapsingHeader_BoolPtr(const char* label,bool* p_visible) { return CollapsingHeader_BoolPtrV(label,p_visible,0); }
void FontGlyphRangesBuilder_AddText(ImFontGlyphRangesBuilder* self,const char* text) { FontGlyphRangesBuilder_AddTextV(self,text); }
bool BeginDragDropSource() { return BeginDragDropSourceV(0); }
void LogToClipboard() { LogToClipboardV(-1); }
void DrawList_AddCircleFilled(ImDrawList* self,const ImVec2 center,float radius,ImU32 col) { DrawList_AddCircleFilledV(self,center,radius,col,0); }
void SetNextItemOpen(bool is_open) { SetNextItemOpenV(is_open,0); }
void DrawList_AddLine(ImDrawList* self,const ImVec2 p1,const ImVec2 p2,ImU32 col) { DrawList_AddLineV(self,p1,p2,col,1.0f); }
bool BeginListBox(const char* label) { return BeginListBoxV(label,(ImVec2){.x=0, .y=0}); }
bool BeginPopupModal(const char* name) { return BeginPopupModalV(name,NULL,0); }
ImGuiID DockSpaceOverViewport() { return DockSpaceOverViewportV(NULL,0,NULL); }
bool SliderFloat(const char* label,float* v,float v_min,float v_max) { return SliderFloatV(label,v,v_min,v_max,"%.3f",0); }
bool SliderScalar(const char* label,ImGuiDataType data_type,void* p_data,const void* p_min,const void* p_max) { return SliderScalarV(label,data_type,p_data,p_min,p_max,NULL,0); }
void ResetMouseDragDelta() { ResetMouseDragDeltaV(0); }
float GetColumnWidth() { return GetColumnWidthV(-1); }
void DrawList_PathArcTo(ImDrawList* self,const ImVec2 center,float radius,float a_min,float a_max) { DrawList_PathArcToV(self,center,radius,a_min,a_max,0); }
ImGuiContext* CreateContext() { return CreateContextV(NULL); }
bool BeginChild_Str(const char* str_id) { return BeginChild_StrV(str_id,(ImVec2){.x=0, .y=0},false,0); }
bool BeginChild_ID(ImGuiID id) { return BeginChild_IDV(id,(ImVec2){.x=0, .y=0},false,0); }
bool IsItemHovered() { return IsItemHoveredV(0); }
bool IsMouseHoveringRect(const ImVec2 r_min,const ImVec2 r_max) { return IsMouseHoveringRectV(r_min,r_max,true); }
void ShowAboutWindow() { ShowAboutWindowV(NULL); }
void ShowStyleEditor() { ShowStyleEditorV(NULL); }
bool BeginMenu(const char* label) { return BeginMenuV(label,true); }
void SetScrollFromPosX_Float(float local_x) { SetScrollFromPosX_FloatV(local_x,0.5f); }
void FontAtlas_GetTexDataAsRGBA32(ImFontAtlas* self,unsigned char** out_pixels,int* out_width,int* out_height) { FontAtlas_GetTexDataAsRGBA32V(self,out_pixels,out_width,out_height,NULL); }
void DrawList_AddQuad(ImDrawList* self,const ImVec2 p1,const ImVec2 p2,const ImVec2 p3,const ImVec2 p4,ImU32 col) { DrawList_AddQuadV(self,p1,p2,p3,p4,col,1.0f); }
void StyleColorsClassic() { StyleColorsClassicV(NULL); }
bool InputInt3(const char* label,int v[3]) { return InputInt3V(label,v,0); }
void DestroyContext() { DestroyContextV(NULL); }
bool InputInt4(const char* label,int v[4]) { return InputInt4V(label,v,0); }
void LogToTTY() { LogToTTYV(-1); }
void Value_Float(const char* prefix,float v) { Value_FloatV(prefix,v,NULL); }
bool Button(const char* label) { return ButtonV(label,(ImVec2){.x=0, .y=0}); }
bool InputFloat3(const char* label,float v[3]) { return InputFloat3V(label,v,"%.3f",0); }
const char* SaveIniSettingsToMemory() { return SaveIniSettingsToMemoryV(NULL); }
void TextUnformatted(const char* text) { TextUnformattedV(text); }
void PlotHistogram_FloatPtr(const char* label,const float* values,int values_count) { PlotHistogram_FloatPtrV(label,values,values_count,0,NULL,igGET_FLT_MAX(),igGET_FLT_MAX(),(ImVec2){.x=0, .y=0},sizeof(float)); }
void DrawList_AddNgon(ImDrawList* self,const ImVec2 center,float radius,ImU32 col,int num_segments) { DrawList_AddNgonV(self,center,radius,col,num_segments,1.0f); }
bool IsMouseClicked(ImGuiMouseButton button) { return IsMouseClickedV(button,false); }
void TableSetBgColor(ImGuiTableBgTarget target,ImU32 color) { TableSetBgColorV(target,color,-1); }
void InputTextCallbackData_InsertChars(ImGuiInputTextCallbackData* self,int pos,const char* text) { InputTextCallbackData_InsertCharsV(self,pos,text); }
bool InputInt(const char* label,int* v) { return InputIntV(label,v,1,100,0); }
bool IsMouseDragging(ImGuiMouseButton button) { return IsMouseDraggingV(button,-1.0f); }
bool IsMousePosValid() { return IsMousePosValidV(NULL); }
void ShowMetricsWindow() { ShowMetricsWindowV(NULL); }
void FontAtlas_GetTexDataAsAlpha8(ImFontAtlas* self,unsigned char** out_pixels,int* out_width,int* out_height) { FontAtlas_GetTexDataAsAlpha8V(self,out_pixels,out_width,out_height,NULL); }
void DrawList_AddTriangle(ImDrawList* self,const ImVec2 p1,const ImVec2 p2,const ImVec2 p3,ImU32 col) { DrawList_AddTriangleV(self,p1,p2,p3,col,1.0f); }
void DrawList_AddRectFilled(ImDrawList* self,const ImVec2 p_min,const ImVec2 p_max,ImU32 col) { DrawList_AddRectFilledV(self,p_min,p_max,col,0.0f,0); }
bool SliderFloat4(const char* label,float v[4],float v_min,float v_max) { return SliderFloat4V(label,v,v_min,v_max,"%.3f",0); }
bool DragFloat4(const char* label,float v[4]) { return DragFloat4V(label,v,1.0f,0.0f,0.0f,"%.3f",0); }
bool DragScalar(const char* label,ImGuiDataType data_type,void* p_data) { return DragScalarV(label,data_type,p_data,1.0f,NULL,NULL,NULL,0); }
void StyleColorsLight() { StyleColorsLightV(NULL); }
bool BeginPopupContextVoid() { return BeginPopupContextVoidV(NULL,1); }
ImFont* FontAtlas_AddFontFromMemoryCompressedTTF(ImFontAtlas* self,const void* compressed_font_data,int compressed_font_size,float size_pixels) { return FontAtlas_AddFontFromMemoryCompressedTTFV(self,compressed_font_data,compressed_font_size,size_pixels,NULL,NULL); }
void TableNextRow() { TableNextRowV(0,0.0f); }
void DrawList_PathStroke(ImDrawList* self,ImU32 col) { DrawList_PathStrokeV(self,col,0,1.0f); }
bool DragFloat(const char* label,float* v) { return DragFloatV(label,v,1.0f,0.0f,0.0f,"%.3f",0); }
bool MenuItem_Bool(const char* label) { return MenuItem_BoolV(label,NULL,false,true); }
bool MenuItem_BoolPtr(const char* label,const char* shortcut,bool* p_selected) { return MenuItem_BoolPtrV(label,shortcut,p_selected,true); }
void PlotLines_FloatPtr(const char* label,const float* values,int values_count) { PlotLines_FloatPtrV(label,values,values_count,0,NULL,igGET_FLT_MAX(),igGET_FLT_MAX(),(ImVec2){.x=0, .y=0},sizeof(float)); }
bool DragFloatRange2(const char* label,float* v_current_min,float* v_current_max) { return DragFloatRange2V(label,v_current_min,v_current_max,1.0f,0.0f,0.0f,"%.3f",NULL,0); }
void DrawList_PushClipRect(ImDrawList* self,const ImVec2 clip_rect_min,const ImVec2 clip_rect_max) { DrawList_PushClipRectV(self,clip_rect_min,clip_rect_max,false); }
void SetScrollFromPosY_Float(float local_y) { SetScrollFromPosY_FloatV(local_y,0.5f); }
void DrawList_AddText_Vec2(ImDrawList* self,const ImVec2 pos,ImU32 col,const char* text_begin) { DrawList_AddText_Vec2V(self,pos,col,text_begin); }
void DrawList_AddText_FontPtr(ImDrawList* self,const ImFont* font,float font_size,const ImVec2 pos,ImU32 col,const char* text_begin) { DrawList_AddText_FontPtrV(self,font,font_size,pos,col,text_begin,0.0f,NULL); }
void Font_AddRemapChar(ImFont* self,ImWchar dst,ImWchar src) { Font_AddRemapCharV(self,dst,src,true); }
bool TreeNodeEx_Str(const char* label) { return TreeNodeEx_StrV(label,0); }
void SetScrollHereY() { SetScrollHereYV(0.5f); }
ImFont* FontAtlas_AddFontFromFileTTF(ImFontAtlas* self,const char* filename,float size_pixels) { return FontAtlas_AddFontFromFileTTFV(self,filename,size_pixels,NULL,NULL); }
bool ColorPicker4(const char* label,float col[4]) { return ColorPicker4V(label,col,0,NULL); }
ImU32 GetColorU32_Col(ImGuiCol idx) { return GetColorU32_ColV(idx,1.0f); }
bool SliderFloat2(const char* label,float v[2],float v_min,float v_max) { return SliderFloat2V(label,v,v_min,v_max,"%.3f",0); }
void TableSetupColumn(const char* label) { TableSetupColumnV(label,0,0.0f,0); }
bool DragIntRange2(const char* label,int* v_current_min,int* v_current_max) { return DragIntRange2V(label,v_current_min,v_current_max,1.0f,0,0,"%d",NULL,0); }
bool InputInt2(const char* label,int v[2]) { return InputInt2V(label,v,0); }
bool VSliderFloat(const char* label,const ImVec2 size,float* v,float v_min,float v_max) { return VSliderFloatV(label,size,v,v_min,v_max,"%.3f",0); }
void DrawList_AddRect(ImDrawList* self,const ImVec2 p_min,const ImVec2 p_max,ImU32 col) { DrawList_AddRectV(self,p_min,p_max,col,0.0f,0,1.0f); }
void LogToFile() { LogToFileV(-1,NULL); }
bool InputDouble(const char* label,double* v) { return InputDoubleV(label,v,0.0,0.0,"%.6f",0); }
bool SliderFloat3(const char* label,float v[3],float v_min,float v_max) { return SliderFloat3V(label,v,v_min,v_max,"%.3f",0); }
bool BeginChildFrame(ImGuiID id,const ImVec2 size) { return BeginChildFrameV(id,size,0); }
void SetNextWindowCollapsed(bool collapsed) { SetNextWindowCollapsedV(collapsed,0); }
void DrawList_PathRect(ImDrawList* self,const ImVec2 rect_min,const ImVec2 rect_max) { DrawList_PathRectV(self,rect_min,rect_max,0.0f,0); }
bool Combo_Str_arr(const char* label,int* current_item,const char* const items[],int items_count) { return Combo_Str_arrV(label,current_item,items,items_count,-1); }
bool Combo_Str(const char* label,int* current_item,const char* items_separated_by_zeros) { return Combo_StrV(label,current_item,items_separated_by_zeros,-1); }
int FontAtlas_AddCustomRectFontGlyph(ImFontAtlas* self,ImFont* font,ImWchar id,int width,int height,float advance_x) { return FontAtlas_AddCustomRectFontGlyphV(self,font,id,width,height,advance_x,(ImVec2){.x=0, .y=0}); }
void TreePush_Ptr() { TreePush_PtrV(NULL); }
bool BeginCombo(const char* label,const char* preview_value) { return BeginComboV(label,preview_value,0); }
void StyleColorsDark() { StyleColorsDarkV(NULL); }
void ShowStackToolWindow() { ShowStackToolWindowV(NULL); }
void DrawList_PathBezierQuadraticCurveTo(ImDrawList* self,const ImVec2 p2,const ImVec2 p3) { DrawList_PathBezierQuadraticCurveToV(self,p2,p3,0); }
ImFont* FontAtlas_AddFontFromMemoryCompressedBase85TTF(ImFontAtlas* self,const char* compressed_font_data_base85,float size_pixels) { return FontAtlas_AddFontFromMemoryCompressedBase85TTFV(self,compressed_font_data_base85,size_pixels,NULL,NULL); }
bool InputScalar(const char* label,ImGuiDataType data_type,void* p_data) { return InputScalarV(label,data_type,p_data,NULL,NULL,NULL,0); }
ImFont* FontAtlas_AddFontFromMemoryTTF(ImFontAtlas* self,void* font_data,int font_size,float size_pixels) { return FontAtlas_AddFontFromMemoryTTFV(self,font_data,font_size,size_pixels,NULL,NULL); }
void Columns() { ColumnsV(1,NULL,true); }
void SetNextWindowDockID(ImGuiID dock_id) { SetNextWindowDockIDV(dock_id,0); }
void GetMouseDragDelta(ImVec2* pOut) { GetMouseDragDeltaV(pOut,0,-1.0f); }
bool Begin(const char* name) { return BeginV(name,NULL,0); }
bool DragInt2(const char* label,int v[2]) { return DragInt2V(label,v,1.0f,0,0,"%d",0); }
bool VSliderInt(const char* label,const ImVec2 size,int* v,int v_min,int v_max) { return VSliderIntV(label,size,v,v_min,v_max,"%d",0); }
bool BeginTabItem(const char* label) { return BeginTabItemV(label,NULL,0); }
void PopStyleColor() { PopStyleColorV(1); }
bool ColorButton(const char* desc_id,const ImVec4 col) { return ColorButtonV(desc_id,col,0,(ImVec2){.x=0, .y=0}); }
bool SliderInt(const char* label,int* v,int v_min,int v_max) { return SliderIntV(label,v,v_min,v_max,"%d",0); }
bool BeginPopup(const char* str_id) { return BeginPopupV(str_id,0); }
bool InputTextWithHint(const char* label,const char* hint,char* buf,size_t buf_size) { return InputTextWithHintV(label,hint,buf,buf_size,0,NULL,NULL); }
void IO_SetKeyEventNativeData(ImGuiIO* self,ImGuiKey key,int native_keycode,int native_scancode) { IO_SetKeyEventNativeDataV(self,key,native_keycode,native_scancode,-1); }
void ShowDemoWindow() { ShowDemoWindowV(NULL); }
float GetColumnOffset() { return GetColumnOffsetV(-1); }
void RenderPlatformWindowsDefault() { RenderPlatformWindowsDefaultV(NULL,NULL); }
void SameLine() { SameLineV(0.0f,-1.0f); }
void OpenPopup_Str(const char* str_id) { OpenPopup_StrV(str_id,0); }
void OpenPopup_ID(ImGuiID id) { OpenPopup_IDV(id,0); }
