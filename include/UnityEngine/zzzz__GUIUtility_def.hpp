#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GUIUtility)
namespace UnityEngine {
class ObjectGUIState;
}
namespace System {
class Action;
}
namespace System {
class Exception;
}
namespace UnityEngine {
struct IMECompositionMode;
}
namespace UnityEngine {
struct FocusType;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace UnityEngine {
class ScriptableObject;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class Event;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
class GUISkin;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine {
class GUIUtility;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::GUIUtility);
// Type: UnityEngine::GUIUtility
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14609))
// CS Name: ::UnityEngine::GUIUtility*
class CORDL_TYPE GUIUtility : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_s_ControlCount(int32_t  value) ;

static inline int32_t getStaticF_s_ControlCount() ;

static inline void setStaticF_s_SkinMode(int32_t  value) ;

static inline int32_t getStaticF_s_SkinMode() ;

static inline void setStaticF_s_OriginalID(int32_t  value) ;

static inline int32_t getStaticF_s_OriginalID() ;

static inline void setStaticF_takeCapture(::System::Action*  value) ;

static inline ::System::Action* getStaticF_takeCapture() ;

static inline void setStaticF_releaseCapture(::System::Action*  value) ;

static inline ::System::Action* getStaticF_releaseCapture() ;

static inline void setStaticF_processEvent(::System::Func_3<int32_t,::cordl_internals::intptr_t,bool>*  value) ;

static inline ::System::Func_3<int32_t,::cordl_internals::intptr_t,bool>* getStaticF_processEvent() ;

static inline void setStaticF_cleanupRoots(::System::Action*  value) ;

static inline ::System::Action* getStaticF_cleanupRoots() ;

static inline void setStaticF_endContainerGUIFromException(::System::Func_2<::System::Exception*,bool>*  value) ;

static inline ::System::Func_2<::System::Exception*,bool>* getStaticF_endContainerGUIFromException() ;

static inline void setStaticF_guiChanged(::System::Action*  value) ;

static inline ::System::Action* getStaticF_guiChanged() ;

static inline void setStaticF__guiIsExiting_k__BackingField(bool  value) ;

static inline bool getStaticF__guiIsExiting_k__BackingField() ;

static inline void setStaticF_s_HasCurrentWindowKeyFocusFunc(::System::Func_1<bool>*  value) ;

static inline ::System::Func_1<bool>* getStaticF_s_HasCurrentWindowKeyFocusFunc() ;

/// @brief Method get_pixelsPerPoint addr 0x2d0226c size 0x28 virtual false final false
static inline float_t get_pixelsPerPoint() ;

/// @brief Method get_guiDepth addr 0x2d03578 size 0x28 virtual false final false
static inline int32_t get_guiDepth() ;

/// @brief Method get_textFieldInput addr 0x2cfe614 size 0x28 virtual false final false
static inline bool get_textFieldInput() ;

/// @brief Method get_systemCopyBuffer addr 0x2d035a0 size 0x28 virtual false final false
static inline ::StringW get_systemCopyBuffer() ;

/// @brief Method set_systemCopyBuffer addr 0x2d035c8 size 0x3c virtual false final false
static inline void set_systemCopyBuffer(::StringW  value) ;

/// @brief Method Internal_GetControlID addr 0x2d03604 size 0x5c virtual false final false
static inline int32_t Internal_GetControlID(int32_t  hint, ::UnityEngine::FocusType  focusType, ::UnityEngine::Rect  rect) ;

/// @brief Method GetControlID addr 0x2d036b4 size 0x98 virtual false final false
static inline int32_t GetControlID(int32_t  hint, ::UnityEngine::FocusType  focusType, ::UnityEngine::Rect  rect) ;

/// @brief Method BeginContainerFromOwner addr 0x2d0374c size 0x3c virtual false final false
static inline void BeginContainerFromOwner(::UnityEngine::ScriptableObject*  owner) ;

/// @brief Method BeginContainer addr 0x2d03788 size 0x3c virtual false final false
static inline void BeginContainer(::UnityEngine::ObjectGUIState*  objectGUIState) ;

/// @brief Method Internal_EndContainer addr 0x2d037c4 size 0x28 virtual false final false
static inline void Internal_EndContainer() ;

/// @brief Method CheckForTabEvent addr 0x2d037ec size 0x3c virtual false final false
static inline int32_t CheckForTabEvent(::UnityEngine::Event*  evt) ;

/// @brief Method SetKeyboardControlToFirstControlId addr 0x2d03828 size 0x28 virtual false final false
static inline void SetKeyboardControlToFirstControlId() ;

/// @brief Method SetKeyboardControlToLastControlId addr 0x2d03850 size 0x28 virtual false final false
static inline void SetKeyboardControlToLastControlId() ;

/// @brief Method HasFocusableControls addr 0x2d03878 size 0x28 virtual false final false
static inline bool HasFocusableControls() ;

/// @brief Method OwnsId addr 0x2d038a0 size 0x3c virtual false final false
static inline bool OwnsId(int32_t  id) ;

/// @brief Method get_compositionString addr 0x2d038dc size 0x28 virtual false final false
static inline ::StringW get_compositionString() ;

/// @brief Method set_imeCompositionMode addr 0x2d03904 size 0x3c virtual false final false
static inline void set_imeCompositionMode(::UnityEngine::IMECompositionMode  value) ;

/// @brief Method set_compositionCursorPos addr 0x2d03940 size 0x40 virtual false final false
static inline void set_compositionCursorPos(::UnityEngine::Vector2  value) ;

/// @brief Method Internal_GetHotControl addr 0x2d039bc size 0x28 virtual false final false
static inline int32_t Internal_GetHotControl() ;

/// @brief Method Internal_GetKeyboardControl addr 0x2d039e4 size 0x28 virtual false final false
static inline int32_t Internal_GetKeyboardControl() ;

/// @brief Method Internal_SetHotControl addr 0x2d03a0c size 0x3c virtual false final false
static inline void Internal_SetHotControl(int32_t  value) ;

/// @brief Method Internal_SetKeyboardControl addr 0x2d03a48 size 0x3c virtual false final false
static inline void Internal_SetKeyboardControl(int32_t  value) ;

/// @brief Method Internal_GetDefaultSkin addr 0x2d03a84 size 0x3c virtual false final false
static inline ::System::Object* Internal_GetDefaultSkin(int32_t  skinMode) ;

/// @brief Method Internal_ExitGUI addr 0x2d03ac0 size 0x28 virtual false final false
static inline void Internal_ExitGUI() ;

/// @brief Method MarkGUIChanged addr 0x2d03ae8 size 0x64 virtual false final false
static inline void MarkGUIChanged() ;

/// @brief Method GetControlID addr 0x2cfd098 size 0x2c virtual false final false
static inline int32_t GetControlID(int32_t  hint, ::UnityEngine::FocusType  focus) ;

/// @brief Method set_guiIsExiting addr 0x2d03b4c size 0x4c virtual false final false
static inline void set_guiIsExiting(bool  value) ;

/// @brief Method get_hotControl addr 0x2d03b98 size 0x28 virtual false final false
static inline int32_t get_hotControl() ;

/// @brief Method set_hotControl addr 0x2d03bc0 size 0x3c virtual false final false
static inline void set_hotControl(int32_t  value) ;

/// @brief Method TakeCapture addr 0x2d03bfc size 0x64 virtual false final false
static inline void TakeCapture() ;

/// @brief Method RemoveCapture addr 0x2d03c60 size 0x64 virtual false final false
static inline void RemoveCapture() ;

/// @brief Method get_keyboardControl addr 0x2d03cc4 size 0x28 virtual false final false
static inline int32_t get_keyboardControl() ;

/// @brief Method set_keyboardControl addr 0x2d03cec size 0x3c virtual false final false
static inline void set_keyboardControl(int32_t  value) ;

/// @brief Method HasKeyFocus addr 0x2d03d28 size 0xa0 virtual false final false
static inline bool HasKeyFocus(int32_t  controlID) ;

/// @brief Method ExitGUI addr 0x2d03dc8 size 0x40 virtual false final false
static inline void ExitGUI() ;

/// @brief Method GetDefaultSkin addr 0x2cfc72c size 0x98 virtual false final false
static inline ::UnityEngine::GUISkin* GetDefaultSkin() ;

/// @brief Method ProcessEvent addr 0x2d03e08 size 0x84 virtual false final false
static inline void ProcessEvent(int32_t  instanceID, ::cordl_internals::intptr_t  nativeEventPtr, ByRef<bool>  result) ;

/// @brief Method EndContainer addr 0x2d03e8c size 0x48 virtual false final false
static inline void EndContainer() ;

/// @brief Method BeginGUI addr 0x2d03ed4 size 0x9c virtual false final false
static inline void BeginGUI(int32_t  skinMode, int32_t  instanceID, int32_t  useGUILayout) ;

/// @brief Method EndGUI addr 0x2d04070 size 0x1f0 virtual false final false
static inline void EndGUI(int32_t  layoutType) ;

/// @brief Method EndGUIFromException addr 0x2d04300 size 0x40 virtual false final false
static inline bool EndGUIFromException(::System::Exception*  exception) ;

/// @brief Method EndContainerGUIFromException addr 0x2d04344 size 0x70 virtual false final false
static inline bool EndContainerGUIFromException(::System::Exception*  exception) ;

/// @brief Method ResetGlobalState addr 0x2d03f70 size 0x100 virtual false final false
static inline void ResetGlobalState() ;

/// @brief Method IsExitGUIException addr 0x2d043b4 size 0x84 virtual false final false
static inline bool IsExitGUIException(::System::Exception*  exception) ;

/// @brief Method ShouldRethrowException addr 0x2d04340 size 0x4 virtual false final false
static inline bool ShouldRethrowException(::System::Exception*  exception) ;

/// @brief Method CheckOnGUI addr 0x2cfc5a8 size 0x84 virtual false final false
static inline void CheckOnGUI() ;

/// @brief Method RoundToPixelGrid addr 0x2d04438 size 0x6c virtual false final false
static inline float_t RoundToPixelGrid(float_t  v) ;

/// @brief Method HitTest addr 0x2d044a4 size 0xa4 virtual false final false
static inline bool HitTest(::UnityEngine::Rect  rect, ::UnityEngine::Vector2  point, int32_t  offset) ;

/// @brief Method HitTest addr 0x2d04548 size 0x8 virtual false final false
static inline bool HitTest(::UnityEngine::Rect  rect, ::UnityEngine::Vector2  point, bool  isDirectManipulationDevice) ;

/// @brief Method Internal_GetControlID_Injected addr 0x2d03660 size 0x54 virtual false final false
static inline int32_t Internal_GetControlID_Injected(int32_t  hint, ::UnityEngine::FocusType  focusType, ByRef<::UnityEngine::Rect>  rect) ;

/// @brief Method set_compositionCursorPos_Injected addr 0x2d03980 size 0x3c virtual false final false
static inline void set_compositionCursorPos_Injected(ByRef<::UnityEngine::Vector2>  value) ;

// Ctor Parameters [CppParam { name: "", ty: "GUIUtility", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GUIUtility(GUIUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GUIUtility", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GUIUtility(GUIUtility const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GUIUtility()  = default;
public:


// Fields

// Static field s_ControlCount

// Static field s_SkinMode

// Static field s_OriginalID

// Static field takeCapture

// Static field releaseCapture

// Static field processEvent

// Static field cleanupRoots

// Static field endContainerGUIFromException

// Static field guiChanged

// Static field <guiIsExiting>k__BackingField

// Static field s_HasCurrentWindowKeyFocusFunc


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::GUIUtility, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::GUIUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GUIUtility*, "UnityEngine", "GUIUtility");
