#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ToggleWithCallbacks)
namespace HMUI {
struct __ToggleWithCallbacks__SelectionState;
}
namespace UnityEngine::UI {
struct __Selectable__SelectionState;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace HMUI {
struct __ToggleWithCallbacks__SelectionState;
}
namespace HMUI {
class ToggleWithCallbacks;
}
// Write type traits
MARK_VAL_T(::HMUI::__ToggleWithCallbacks__SelectionState);
MARK_REF_PTR_T(::HMUI::ToggleWithCallbacks);
// Type: ::SelectionState
namespace HMUI {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13671))
// CS Name: ::ToggleWithCallbacks::SelectionState
struct CORDL_TYPE __ToggleWithCallbacks__SelectionState : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____ToggleWithCallbacks__SelectionState_Unwrapped
enum struct ____ToggleWithCallbacks__SelectionState_Unwrapped : int32_t {
__E_Normal = static_cast<int32_t>(0x0),
__E_Highlighted = static_cast<int32_t>(0x1),
__E_Pressed = static_cast<int32_t>(0x2),
__E_Selected = static_cast<int32_t>(0x3),
__E_Disabled = static_cast<int32_t>(0x4),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Normal value: static_cast<int32_t>(0x0)
static ::HMUI::__ToggleWithCallbacks__SelectionState const Normal;

/// @brief Field Highlighted value: static_cast<int32_t>(0x1)
static ::HMUI::__ToggleWithCallbacks__SelectionState const Highlighted;

/// @brief Field Pressed value: static_cast<int32_t>(0x2)
static ::HMUI::__ToggleWithCallbacks__SelectionState const Pressed;

/// @brief Field Selected value: static_cast<int32_t>(0x3)
static ::HMUI::__ToggleWithCallbacks__SelectionState const Selected;

/// @brief Field Disabled value: static_cast<int32_t>(0x4)
static ::HMUI::__ToggleWithCallbacks__SelectionState const Disabled;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____ToggleWithCallbacks__SelectionState_Unwrapped () const noexcept {
return std::bit_cast<____ToggleWithCallbacks__SelectionState_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __ToggleWithCallbacks__SelectionState(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ToggleWithCallbacks__SelectionState(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ToggleWithCallbacks__SelectionState()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__ToggleWithCallbacks__SelectionState, 0x4>, "Size mismatch!");

} // namespace end def HMUI
// Type: HMUI::ToggleWithCallbacks
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13131))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13672))
// CS Name: ::HMUI::ToggleWithCallbacks*
class CORDL_TYPE ToggleWithCallbacks : public ::UnityEngine::UI::Toggle {
public:
// Declarations
using SelectionState = ::HMUI::__ToggleWithCallbacks__SelectionState;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x128};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x128 - sizeof(::UnityEngine::UI::Toggle)]{};

/// @brief Field stateDidChangeEvent offset 0x120
 __declspec(property(get=__get_stateDidChangeEvent, put=__set_stateDidChangeEvent)) ::System::Action_1<::HMUI::__ToggleWithCallbacks__SelectionState>*  stateDidChangeEvent;

 __declspec(property(get=get_selectionState)) ::HMUI::__ToggleWithCallbacks__SelectionState  selectionState;

constexpr void __set_stateDidChangeEvent(::System::Action_1<::HMUI::__ToggleWithCallbacks__SelectionState>*  value) ;

constexpr ::System::Action_1<::HMUI::__ToggleWithCallbacks__SelectionState>* __get_stateDidChangeEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::HMUI::__ToggleWithCallbacks__SelectionState>*> __get_stateDidChangeEvent() const;

/// @brief Method add_stateDidChangeEvent addr 0x2146be0 size 0xb4 virtual false final false
inline void add_stateDidChangeEvent(::System::Action_1<::HMUI::__ToggleWithCallbacks__SelectionState>*  value) ;

/// @brief Method remove_stateDidChangeEvent addr 0x2146ec4 size 0xb4 virtual false final false
inline void remove_stateDidChangeEvent(::System::Action_1<::HMUI::__ToggleWithCallbacks__SelectionState>*  value) ;

/// @brief Method get_selectionState addr 0x2146f80 size 0x54 virtual false final false
inline ::HMUI::__ToggleWithCallbacks__SelectionState get_selectionState() ;

/// @brief Method DoStateTransition addr 0x214aac4 size 0x4c virtual true final false
inline void DoStateTransition(::UnityEngine::UI::__Selectable__SelectionState  state, bool  instant) ;

static inline ::HMUI::ToggleWithCallbacks* New_ctor() ;

/// @brief Method .ctor addr 0x214ab10 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ToggleWithCallbacks", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ToggleWithCallbacks(ToggleWithCallbacks && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ToggleWithCallbacks", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ToggleWithCallbacks(ToggleWithCallbacks const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ToggleWithCallbacks()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::ToggleWithCallbacks, 0x128>, "Size mismatch!");

} // namespace end def HMUI
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__ToggleWithCallbacks__SelectionState, "HMUI", "ToggleWithCallbacks/SelectionState");
NEED_NO_BOX(::HMUI::ToggleWithCallbacks);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ToggleWithCallbacks*, "HMUI", "ToggleWithCallbacks");
