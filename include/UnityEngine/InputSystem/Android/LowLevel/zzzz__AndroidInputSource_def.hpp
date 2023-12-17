#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AndroidInputSource)
// Forward declare root types
namespace UnityEngine::InputSystem::Android::LowLevel {
struct AndroidInputSource;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource);
// Type: UnityEngine.InputSystem.Android.LowLevel::AndroidInputSource
namespace UnityEngine::InputSystem::Android::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6450))
// CS Name: ::UnityEngine.InputSystem.Android.LowLevel::AndroidInputSource
struct CORDL_TYPE AndroidInputSource : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AndroidInputSource_Unwrapped
enum struct __AndroidInputSource_Unwrapped : int32_t {
__E_Keyboard = static_cast<int32_t>(0x101),
__E_Dpad = static_cast<int32_t>(0x201),
__E_Gamepad = static_cast<int32_t>(0x401),
__E_Touchscreen = static_cast<int32_t>(0x1002),
__E_Mouse = static_cast<int32_t>(0x2002),
__E_Stylus = static_cast<int32_t>(0x4002),
__E_Trackball = static_cast<int32_t>(0x10004),
__E_Touchpad = static_cast<int32_t>(0x100008),
__E_Joystick = static_cast<int32_t>(0x1000010),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Keyboard value: static_cast<int32_t>(0x101)
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource const Keyboard;

/// @brief Field Dpad value: static_cast<int32_t>(0x201)
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource const Dpad;

/// @brief Field Gamepad value: static_cast<int32_t>(0x401)
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource const Gamepad;

/// @brief Field Touchscreen value: static_cast<int32_t>(0x1002)
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource const Touchscreen;

/// @brief Field Mouse value: static_cast<int32_t>(0x2002)
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource const Mouse;

/// @brief Field Stylus value: static_cast<int32_t>(0x4002)
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource const Stylus;

/// @brief Field Trackball value: static_cast<int32_t>(0x10004)
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource const Trackball;

/// @brief Field Touchpad value: static_cast<int32_t>(0x100008)
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource const Touchpad;

/// @brief Field Joystick value: static_cast<int32_t>(0x1000010)
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource const Joystick;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __AndroidInputSource_Unwrapped () const noexcept {
return std::bit_cast<__AndroidInputSource_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AndroidInputSource(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AndroidInputSource(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AndroidInputSource()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Android::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource, "UnityEngine.InputSystem.Android.LowLevel", "AndroidInputSource");
