#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NoTransitionsButton)
namespace UnityEngine::UI {
struct __Selectable__SelectionState;
}
namespace System {
template<typename T>
class Action_1;
}
namespace HMUI {
struct __NoTransitionsButton__SelectionState;
}
// Forward declare root types
namespace HMUI {
struct __NoTransitionsButton__SelectionState;
}
namespace HMUI {
class NoTransitionsButton;
}
// Write type traits
MARK_VAL_T(::HMUI::__NoTransitionsButton__SelectionState);
MARK_REF_PTR_T(::HMUI::NoTransitionsButton);
// Type: ::SelectionState
namespace HMUI {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13622))
// CS Name: ::NoTransitionsButton::SelectionState
struct CORDL_TYPE __NoTransitionsButton__SelectionState : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____NoTransitionsButton__SelectionState_Unwrapped
enum struct ____NoTransitionsButton__SelectionState_Unwrapped : int32_t {
__E_Normal = static_cast<int32_t>(0x0),
__E_Highlighted = static_cast<int32_t>(0x1),
__E_Pressed = static_cast<int32_t>(0x2),
__E_Disabled = static_cast<int32_t>(0x3),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Normal value: static_cast<int32_t>(0x0)
static ::HMUI::__NoTransitionsButton__SelectionState const Normal;

/// @brief Field Highlighted value: static_cast<int32_t>(0x1)
static ::HMUI::__NoTransitionsButton__SelectionState const Highlighted;

/// @brief Field Pressed value: static_cast<int32_t>(0x2)
static ::HMUI::__NoTransitionsButton__SelectionState const Pressed;

/// @brief Field Disabled value: static_cast<int32_t>(0x3)
static ::HMUI::__NoTransitionsButton__SelectionState const Disabled;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____NoTransitionsButton__SelectionState_Unwrapped () const noexcept {
return std::bit_cast<____NoTransitionsButton__SelectionState_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __NoTransitionsButton__SelectionState(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __NoTransitionsButton__SelectionState(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __NoTransitionsButton__SelectionState()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__NoTransitionsButton__SelectionState, 0x4>, "Size mismatch!");

} // namespace end def HMUI
// Type: HMUI::NoTransitionsButton
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13019))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13623))
// CS Name: ::HMUI::NoTransitionsButton*
class CORDL_TYPE NoTransitionsButton : public ::UnityEngine::UI::Button {
public:
// Declarations
using SelectionState = ::HMUI::__NoTransitionsButton__SelectionState;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x110};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x110 - sizeof(::UnityEngine::UI::Button)]{};

/// @brief Field selectionStateDidChangeEvent offset 0x100
 __declspec(property(get=__get_selectionStateDidChangeEvent, put=__set_selectionStateDidChangeEvent)) ::System::Action_1<::HMUI::__NoTransitionsButton__SelectionState>*  selectionStateDidChangeEvent;

/// @brief Field _selectionState offset 0x108
 __declspec(property(get=__get__selectionState, put=__set__selectionState)) ::HMUI::__NoTransitionsButton__SelectionState  _selectionState;

 __declspec(property(get=get_selectionState)) ::HMUI::__NoTransitionsButton__SelectionState  selectionState;

constexpr void __set_selectionStateDidChangeEvent(::System::Action_1<::HMUI::__NoTransitionsButton__SelectionState>*  value) ;

constexpr ::System::Action_1<::HMUI::__NoTransitionsButton__SelectionState>* __get_selectionStateDidChangeEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::HMUI::__NoTransitionsButton__SelectionState>*> __get_selectionStateDidChangeEvent() const;

constexpr void __set__selectionState(::HMUI::__NoTransitionsButton__SelectionState  value) ;

constexpr ::HMUI::__NoTransitionsButton__SelectionState& __get__selectionState() ;

constexpr ::HMUI::__NoTransitionsButton__SelectionState const& __get__selectionState() const;

/// @brief Method get_selectionState addr 0x2130ae0 size 0x8 virtual false final false
inline ::HMUI::__NoTransitionsButton__SelectionState get_selectionState() ;

/// @brief Method add_selectionStateDidChangeEvent addr 0x2130304 size 0xb4 virtual false final false
inline void add_selectionStateDidChangeEvent(::System::Action_1<::HMUI::__NoTransitionsButton__SelectionState>*  value) ;

/// @brief Method remove_selectionStateDidChangeEvent addr 0x21304ec size 0xb4 virtual false final false
inline void remove_selectionStateDidChangeEvent(::System::Action_1<::HMUI::__NoTransitionsButton__SelectionState>*  value) ;

/// @brief Method DoStateTransition addr 0x2130ae8 size 0x40 virtual true final false
inline void DoStateTransition(::UnityEngine::UI::__Selectable__SelectionState  state, bool  instant) ;

static inline ::HMUI::NoTransitionsButton* New_ctor() ;

/// @brief Method .ctor addr 0x2130b28 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "NoTransitionsButton", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NoTransitionsButton(NoTransitionsButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NoTransitionsButton", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NoTransitionsButton(NoTransitionsButton const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NoTransitionsButton()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::NoTransitionsButton, 0x110>, "Size mismatch!");

} // namespace end def HMUI
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__NoTransitionsButton__SelectionState, "HMUI", "NoTransitionsButton/SelectionState");
NEED_NO_BOX(::HMUI::NoTransitionsButton);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::NoTransitionsButton*, "HMUI", "NoTransitionsButton");
