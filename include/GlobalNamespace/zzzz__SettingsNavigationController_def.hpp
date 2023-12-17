#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__NavigationController_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SettingsNavigationController)
namespace GlobalNamespace {
struct __SettingsNavigationController__FinishAction;
}
namespace UnityEngine::UI {
class Button;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct __SettingsNavigationController__FinishAction;
}
namespace GlobalNamespace {
class SettingsNavigationController;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__SettingsNavigationController__FinishAction);
MARK_REF_PTR_T(::GlobalNamespace::SettingsNavigationController);
// Type: ::FinishAction
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5760))
// CS Name: ::SettingsNavigationController::FinishAction
struct CORDL_TYPE __SettingsNavigationController__FinishAction : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____SettingsNavigationController__FinishAction_Unwrapped
enum struct ____SettingsNavigationController__FinishAction_Unwrapped : int32_t {
__E_Ok = static_cast<int32_t>(0x0),
__E_Cancel = static_cast<int32_t>(0x1),
__E_Apply = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Ok value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__SettingsNavigationController__FinishAction const Ok;

/// @brief Field Cancel value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__SettingsNavigationController__FinishAction const Cancel;

/// @brief Field Apply value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::__SettingsNavigationController__FinishAction const Apply;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____SettingsNavigationController__FinishAction_Unwrapped () const noexcept {
return std::bit_cast<____SettingsNavigationController__FinishAction_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __SettingsNavigationController__FinishAction(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __SettingsNavigationController__FinishAction(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __SettingsNavigationController__FinishAction()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SettingsNavigationController__FinishAction, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::SettingsNavigationController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13588))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5761))
// CS Name: ::SettingsNavigationController*
class CORDL_TYPE SettingsNavigationController : public ::HMUI::NavigationController {
public:
// Declarations
using FinishAction = ::GlobalNamespace::__SettingsNavigationController__FinishAction;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xb8};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xb8 - sizeof(::HMUI::NavigationController)]{};

/// @brief Field _okButton offset 0x98
 __declspec(property(get=__get__okButton, put=__set__okButton)) ::UnityEngine::UI::Button*  _okButton;

/// @brief Field _applyButton offset 0xa0
 __declspec(property(get=__get__applyButton, put=__set__applyButton)) ::UnityEngine::UI::Button*  _applyButton;

/// @brief Field _cancelButton offset 0xa8
 __declspec(property(get=__get__cancelButton, put=__set__cancelButton)) ::UnityEngine::UI::Button*  _cancelButton;

/// @brief Field didFinishEvent offset 0xb0
 __declspec(property(get=__get_didFinishEvent, put=__set_didFinishEvent)) ::System::Action_1<::GlobalNamespace::__SettingsNavigationController__FinishAction>*  didFinishEvent;

constexpr void __set__okButton(::UnityEngine::UI::Button*  value) ;

constexpr ::UnityEngine::UI::Button* __get__okButton() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> __get__okButton() const;

constexpr void __set__applyButton(::UnityEngine::UI::Button*  value) ;

constexpr ::UnityEngine::UI::Button* __get__applyButton() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> __get__applyButton() const;

constexpr void __set__cancelButton(::UnityEngine::UI::Button*  value) ;

constexpr ::UnityEngine::UI::Button* __get__cancelButton() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> __get__cancelButton() const;

constexpr void __set_didFinishEvent(::System::Action_1<::GlobalNamespace::__SettingsNavigationController__FinishAction>*  value) ;

constexpr ::System::Action_1<::GlobalNamespace::__SettingsNavigationController__FinishAction>* __get_didFinishEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::__SettingsNavigationController__FinishAction>*> __get_didFinishEvent() const;

/// @brief Method add_didFinishEvent addr 0x22db590 size 0xb0 virtual false final false
inline void add_didFinishEvent(::System::Action_1<::GlobalNamespace::__SettingsNavigationController__FinishAction>*  value) ;

/// @brief Method remove_didFinishEvent addr 0x22db640 size 0xb0 virtual false final false
inline void remove_didFinishEvent(::System::Action_1<::GlobalNamespace::__SettingsNavigationController__FinishAction>*  value) ;

/// @brief Method DidActivate addr 0x22db6f0 size 0x15c virtual true final false
inline void DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling) ;

/// @brief Method HandleFinishButton addr 0x22db84c size 0x1c virtual false final false
inline void HandleFinishButton(::GlobalNamespace::__SettingsNavigationController__FinishAction  finishAction) ;

static inline ::GlobalNamespace::SettingsNavigationController* New_ctor() ;

/// @brief Method .ctor addr 0x22db868 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <DidActivate>b__7_0 addr 0x22db870 size 0x20 virtual false final false
inline void _DidActivate_b__7_0() ;

/// @brief Method <DidActivate>b__7_1 addr 0x22db890 size 0x20 virtual false final false
inline void _DidActivate_b__7_1() ;

/// @brief Method <DidActivate>b__7_2 addr 0x22db8b0 size 0x20 virtual false final false
inline void _DidActivate_b__7_2() ;

// Ctor Parameters [CppParam { name: "", ty: "SettingsNavigationController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SettingsNavigationController(SettingsNavigationController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SettingsNavigationController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SettingsNavigationController(SettingsNavigationController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SettingsNavigationController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SettingsNavigationController, 0xb8>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SettingsNavigationController__FinishAction, "", "SettingsNavigationController/FinishAction");
NEED_NO_BOX(::GlobalNamespace::SettingsNavigationController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SettingsNavigationController*, "", "SettingsNavigationController");
