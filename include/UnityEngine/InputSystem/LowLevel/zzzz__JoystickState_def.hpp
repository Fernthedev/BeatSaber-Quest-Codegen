#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JoystickState)
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateTypeInfo;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::InputSystem::LowLevel {
struct __JoystickState__Button;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct __JoystickState__Button;
}
namespace UnityEngine::InputSystem::LowLevel {
struct JoystickState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::__JoystickState__Button);
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::JoystickState);
// Type: ::Button
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6500))
// CS Name: ::JoystickState::Button
struct CORDL_TYPE __JoystickState__Button : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____JoystickState__Button_Unwrapped
enum struct ____JoystickState__Button_Unwrapped : int32_t {
__E_HatSwitchUp = static_cast<int32_t>(0x0),
__E_HatSwitchDown = static_cast<int32_t>(0x1),
__E_HatSwitchLeft = static_cast<int32_t>(0x2),
__E_HatSwitchRight = static_cast<int32_t>(0x3),
__E_Trigger = static_cast<int32_t>(0x4),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field HatSwitchUp value: static_cast<int32_t>(0x0)
static ::UnityEngine::InputSystem::LowLevel::__JoystickState__Button const HatSwitchUp;

/// @brief Field HatSwitchDown value: static_cast<int32_t>(0x1)
static ::UnityEngine::InputSystem::LowLevel::__JoystickState__Button const HatSwitchDown;

/// @brief Field HatSwitchLeft value: static_cast<int32_t>(0x2)
static ::UnityEngine::InputSystem::LowLevel::__JoystickState__Button const HatSwitchLeft;

/// @brief Field HatSwitchRight value: static_cast<int32_t>(0x3)
static ::UnityEngine::InputSystem::LowLevel::__JoystickState__Button const HatSwitchRight;

/// @brief Field Trigger value: static_cast<int32_t>(0x4)
static ::UnityEngine::InputSystem::LowLevel::__JoystickState__Button const Trigger;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____JoystickState__Button_Unwrapped () const noexcept {
return std::bit_cast<____JoystickState__Button_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __JoystickState__Button(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __JoystickState__Button(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __JoystickState__Button()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::__JoystickState__Button, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::LowLevel
// Type: UnityEngine.InputSystem.LowLevel::JoystickState
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6501))
// CS Name: ::UnityEngine.InputSystem.LowLevel::JoystickState
struct CORDL_TYPE JoystickState : public ::bs_hook::ValueTypeWrapper<0xc> {
public:
// Declarations
using Button = ::UnityEngine::InputSystem::LowLevel::__JoystickState__Button;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field buttons offset 0x0
 __declspec(property(get=__get_buttons, put=__set_buttons)) int32_t  buttons;

/// @brief Field stick offset 0x4
 __declspec(property(get=__get_stick, put=__set_stick)) ::UnityEngine::Vector2  stick;

 __declspec(property(get=get_format)) ::UnityEngine::InputSystem::Utilities::FourCC  format;

/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
constexpr operator  ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*() ;

constexpr void __set_buttons(int32_t  value) ;

constexpr int32_t& __get_buttons() ;

constexpr int32_t const& __get_buttons() const;

constexpr void __set_stick(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get_stick() ;

constexpr ::UnityEngine::Vector2 const& __get_stick() const;

/// @brief Method get_kFormat addr 0x2ae8850 size 0x30 virtual false final false
static inline ::UnityEngine::InputSystem::Utilities::FourCC get_kFormat() ;

/// @brief Method get_format addr 0x2ae8880 size 0x30 virtual true final true
inline ::UnityEngine::InputSystem::Utilities::FourCC get_format() ;

// Ctor Parameters [CppParam { name: "buttons", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "stick", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }]
constexpr JoystickState(int32_t  buttons, ::UnityEngine::Vector2  stick) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit JoystickState(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0xc>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 JoystickState()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::JoystickState, 0xc>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::__JoystickState__Button, "UnityEngine.InputSystem.LowLevel", "JoystickState/Button");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::JoystickState, "UnityEngine.InputSystem.LowLevel", "JoystickState");
