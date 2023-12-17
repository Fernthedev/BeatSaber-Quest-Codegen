#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FocusController)
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
struct __FocusController__FocusedElement;
}
namespace UnityEngine::UIElements {
class FocusChangeDirection;
}
namespace UnityEngine::UIElements {
struct DispatchMode;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements {
class IFocusRing;
}
namespace UnityEngine::UIElements {
class Focusable;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class FocusController;
}
namespace UnityEngine::UIElements {
struct __FocusController__FocusedElement;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::FocusController);
MARK_VAL_T(::UnityEngine::UIElements::__FocusController__FocusedElement);
// Type: ::FocusedElement
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6883))
// CS Name: ::FocusController::FocusedElement
struct CORDL_TYPE __FocusController__FocusedElement : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_SubTreeRoot offset 0x0
 __declspec(property(get=__get_m_SubTreeRoot, put=__set_m_SubTreeRoot)) ::UnityEngine::UIElements::VisualElement*  m_SubTreeRoot;

/// @brief Field m_FocusedElement offset 0x8
 __declspec(property(get=__get_m_FocusedElement, put=__set_m_FocusedElement)) ::UnityEngine::UIElements::Focusable*  m_FocusedElement;

constexpr void __set_m_SubTreeRoot(::UnityEngine::UIElements::VisualElement*  value) ;

constexpr ::UnityEngine::UIElements::VisualElement* __get_m_SubTreeRoot() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> __get_m_SubTreeRoot() const;

constexpr void __set_m_FocusedElement(::UnityEngine::UIElements::Focusable*  value) ;

constexpr ::UnityEngine::UIElements::Focusable* __get_m_FocusedElement() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Focusable*> __get_m_FocusedElement() const;

// Ctor Parameters [CppParam { name: "m_SubTreeRoot", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: None }, CppParam { name: "m_FocusedElement", ty: "::UnityEngine::UIElements::Focusable*", modifiers: "", def_value: None }]
constexpr __FocusController__FocusedElement(::UnityEngine::UIElements::VisualElement*  m_SubTreeRoot, ::UnityEngine::UIElements::Focusable*  m_FocusedElement) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __FocusController__FocusedElement(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __FocusController__FocusedElement()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__FocusController__FocusedElement, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::FocusController
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6884))
// CS Name: ::UnityEngine.UIElements::FocusController*
class CORDL_TYPE FocusController : public ::System::Object {
public:
// Declarations
using FocusedElement = ::UnityEngine::UIElements::__FocusController__FocusedElement;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Object)]{};

/// @brief Field <focusRing>k__BackingField offset 0x10
 __declspec(property(get=__get__focusRing_k__BackingField, put=__set__focusRing_k__BackingField)) ::UnityEngine::UIElements::IFocusRing*  _focusRing_k__BackingField;

/// @brief Field m_FocusedElements offset 0x18
 __declspec(property(get=__get_m_FocusedElements, put=__set_m_FocusedElements)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__FocusController__FocusedElement>*  m_FocusedElements;

/// @brief Field m_LastFocusedElement offset 0x20
 __declspec(property(get=__get_m_LastFocusedElement, put=__set_m_LastFocusedElement)) ::UnityEngine::UIElements::Focusable*  m_LastFocusedElement;

/// @brief Field m_LastPendingFocusedElement offset 0x28
 __declspec(property(get=__get_m_LastPendingFocusedElement, put=__set_m_LastPendingFocusedElement)) ::UnityEngine::UIElements::Focusable*  m_LastPendingFocusedElement;

/// @brief Field m_PendingFocusCount offset 0x30
 __declspec(property(get=__get_m_PendingFocusCount, put=__set_m_PendingFocusCount)) int32_t  m_PendingFocusCount;

/// @brief Field <imguiKeyboardControl>k__BackingField offset 0x34
 __declspec(property(get=__get__imguiKeyboardControl_k__BackingField, put=__set__imguiKeyboardControl_k__BackingField)) int32_t  _imguiKeyboardControl_k__BackingField;

 __declspec(property(get=get_focusRing)) ::UnityEngine::UIElements::IFocusRing*  focusRing;

 __declspec(property(get=get_focusedElement)) ::UnityEngine::UIElements::Focusable*  focusedElement;

 __declspec(property(get=get_imguiKeyboardControl, put=set_imguiKeyboardControl)) int32_t  imguiKeyboardControl;

constexpr void __set__focusRing_k__BackingField(::UnityEngine::UIElements::IFocusRing*  value) ;

constexpr ::UnityEngine::UIElements::IFocusRing* __get__focusRing_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::IFocusRing*> __get__focusRing_k__BackingField() const;

constexpr void __set_m_FocusedElements(::System::Collections::Generic::List_1<::UnityEngine::UIElements::__FocusController__FocusedElement>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__FocusController__FocusedElement>* __get_m_FocusedElements() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__FocusController__FocusedElement>*> __get_m_FocusedElements() const;

constexpr void __set_m_LastFocusedElement(::UnityEngine::UIElements::Focusable*  value) ;

constexpr ::UnityEngine::UIElements::Focusable* __get_m_LastFocusedElement() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Focusable*> __get_m_LastFocusedElement() const;

constexpr void __set_m_LastPendingFocusedElement(::UnityEngine::UIElements::Focusable*  value) ;

constexpr ::UnityEngine::UIElements::Focusable* __get_m_LastPendingFocusedElement() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Focusable*> __get_m_LastPendingFocusedElement() const;

constexpr void __set_m_PendingFocusCount(int32_t  value) ;

constexpr int32_t& __get_m_PendingFocusCount() ;

constexpr int32_t const& __get_m_PendingFocusCount() const;

constexpr void __set__imguiKeyboardControl_k__BackingField(int32_t  value) ;

constexpr int32_t& __get__imguiKeyboardControl_k__BackingField() ;

constexpr int32_t const& __get__imguiKeyboardControl_k__BackingField() const;

static inline ::UnityEngine::UIElements::FocusController* New_ctor(::UnityEngine::UIElements::IFocusRing*  focusRing) ;

/// @brief Method .ctor addr 0x2dfa8e4 size 0x98 virtual false final false
inline void _ctor(::UnityEngine::UIElements::IFocusRing*  focusRing) ;

/// @brief Method get_focusRing addr 0x2dfa97c size 0x8 virtual false final false
inline ::UnityEngine::UIElements::IFocusRing* get_focusRing() ;

/// @brief Method get_focusedElement addr 0x2dfa984 size 0x44 virtual false final false
inline ::UnityEngine::UIElements::Focusable* get_focusedElement() ;

/// @brief Method IsFocused addr 0x2dfac08 size 0x174 virtual false final false
inline bool IsFocused(::UnityEngine::UIElements::Focusable*  f) ;

/// @brief Method GetRetargetedFocusedElement addr 0x2dfa9c8 size 0x204 virtual false final false
inline ::UnityEngine::UIElements::Focusable* GetRetargetedFocusedElement(::UnityEngine::UIElements::VisualElement*  retargetAgainst) ;

/// @brief Method GetLeafFocusedElement addr 0x2dfad7c size 0xa4 virtual false final false
inline ::UnityEngine::UIElements::Focusable* GetLeafFocusedElement() ;

/// @brief Method IsLocalElement addr 0x2dfabcc size 0x3c virtual false final false
inline bool IsLocalElement(::UnityEngine::UIElements::Focusable*  f) ;

/// @brief Method IsPendingFocus addr 0x2dfae20 size 0xb0 virtual false final false
inline bool IsPendingFocus(::UnityEngine::UIElements::Focusable*  f) ;

/// @brief Method SetFocusToLastFocusedElement addr 0x2dfaed0 size 0x88 virtual false final false
inline void SetFocusToLastFocusedElement() ;

/// @brief Method BlurLastFocusedElement addr 0x2dfaf58 size 0x88 virtual false final false
inline void BlurLastFocusedElement() ;

/// @brief Method DoFocusChange addr 0x2dfafe0 size 0x190 virtual false final false
inline void DoFocusChange(::UnityEngine::UIElements::Focusable*  f) ;

/// @brief Method FocusNextInDirection addr 0x2dfb170 size 0xec virtual false final false
inline ::UnityEngine::UIElements::Focusable* FocusNextInDirection(::UnityEngine::UIElements::FocusChangeDirection*  direction) ;

/// @brief Method AboutToReleaseFocus addr 0x2dfb25c size 0x1c4 virtual false final false
inline void AboutToReleaseFocus(::UnityEngine::UIElements::Focusable*  focusable, ::UnityEngine::UIElements::Focusable*  willGiveFocusTo, ::UnityEngine::UIElements::FocusChangeDirection*  direction, ::UnityEngine::UIElements::DispatchMode  dispatchMode) ;

/// @brief Method ReleaseFocus addr 0x2dfb420 size 0x1c4 virtual false final false
inline void ReleaseFocus(::UnityEngine::UIElements::Focusable*  focusable, ::UnityEngine::UIElements::Focusable*  willGiveFocusTo, ::UnityEngine::UIElements::FocusChangeDirection*  direction, ::UnityEngine::UIElements::DispatchMode  dispatchMode) ;

/// @brief Method AboutToGrabFocus addr 0x2dfb5e4 size 0x1c4 virtual false final false
inline void AboutToGrabFocus(::UnityEngine::UIElements::Focusable*  focusable, ::UnityEngine::UIElements::Focusable*  willTakeFocusFrom, ::UnityEngine::UIElements::FocusChangeDirection*  direction, ::UnityEngine::UIElements::DispatchMode  dispatchMode) ;

/// @brief Method GrabFocus addr 0x2dfb7a8 size 0x1d0 virtual false final false
inline void GrabFocus(::UnityEngine::UIElements::Focusable*  focusable, ::UnityEngine::UIElements::Focusable*  willTakeFocusFrom, ::UnityEngine::UIElements::FocusChangeDirection*  direction, bool  bIsFocusDelegated, ::UnityEngine::UIElements::DispatchMode  dispatchMode) ;

/// @brief Method Blur addr 0x2df9eb8 size 0x58 virtual false final false
inline void Blur(::UnityEngine::UIElements::Focusable*  focusable, bool  bIsFocusDelegated, ::UnityEngine::UIElements::DispatchMode  dispatchMode) ;

/// @brief Method SwitchFocus addr 0x2df9dc8 size 0xb8 virtual false final false
inline void SwitchFocus(::UnityEngine::UIElements::Focusable*  newFocusedElement, bool  bIsFocusDelegated, ::UnityEngine::UIElements::DispatchMode  dispatchMode) ;

/// @brief Method SwitchFocus addr 0x2dfa580 size 0x294 virtual false final false
inline void SwitchFocus(::UnityEngine::UIElements::Focusable*  newFocusedElement, ::UnityEngine::UIElements::FocusChangeDirection*  direction, bool  bIsFocusDelegated, ::UnityEngine::UIElements::DispatchMode  dispatchMode) ;

/// @brief Method SwitchFocusOnEvent addr 0x2dfa120 size 0x2ec virtual false final false
inline ::UnityEngine::UIElements::Focusable* SwitchFocusOnEvent(::UnityEngine::UIElements::EventBase*  e) ;

/// @brief Method ReevaluateFocus addr 0x2dfb978 size 0xc0 virtual false final false
inline void ReevaluateFocus() ;

/// @brief Method GetFocusableParentForPointerEvent addr 0x2dfba38 size 0x104 virtual false final false
inline bool GetFocusableParentForPointerEvent(::UnityEngine::UIElements::Focusable*  target, ByRef<::UnityEngine::UIElements::Focusable*>  effectiveTarget) ;

/// @brief Method get_imguiKeyboardControl addr 0x2dfbb3c size 0x8 virtual false final false
inline int32_t get_imguiKeyboardControl() ;

/// @brief Method set_imguiKeyboardControl addr 0x2dfbb44 size 0x8 virtual false final false
inline void set_imguiKeyboardControl(int32_t  value) ;

/// @brief Method SyncIMGUIFocus addr 0x2dfbb4c size 0xcc virtual false final false
inline void SyncIMGUIFocus(int32_t  imguiKeyboardControlID, ::UnityEngine::UIElements::Focusable*  imguiContainerHavingKeyboardControl, bool  forceSwitch) ;

// Ctor Parameters [CppParam { name: "", ty: "FocusController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FocusController(FocusController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FocusController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FocusController(FocusController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FocusController()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::FocusController, 0x38>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::FocusController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::FocusController*, "UnityEngine.UIElements", "FocusController");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__FocusController__FocusedElement, "UnityEngine.UIElements", "FocusController/FocusedElement");
