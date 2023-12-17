#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TouchFlags)
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct TouchFlags;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::TouchFlags);
// Type: UnityEngine.InputSystem.LowLevel::TouchFlags
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6513))
// CS Name: ::UnityEngine.InputSystem.LowLevel::TouchFlags
struct CORDL_TYPE TouchFlags : public ::bs_hook::EnumTypeWrapper<0x1> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __TouchFlags_Unwrapped
enum struct __TouchFlags_Unwrapped : uint8_t {
__E_IndirectTouch = static_cast<uint8_t>(0x1u),
__E_PrimaryTouch = static_cast<uint8_t>(0x8u),
__E_TapPress = static_cast<uint8_t>(0x10u),
__E_TapRelease = static_cast<uint8_t>(0x20u),
__E_OrphanedPrimaryTouch = static_cast<uint8_t>(0x40u),
__E_BeganInSameFrame = static_cast<uint8_t>(0x80u),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field IndirectTouch value: static_cast<uint8_t>(0x1u)
static ::UnityEngine::InputSystem::LowLevel::TouchFlags const IndirectTouch;

/// @brief Field PrimaryTouch value: static_cast<uint8_t>(0x8u)
static ::UnityEngine::InputSystem::LowLevel::TouchFlags const PrimaryTouch;

/// @brief Field TapPress value: static_cast<uint8_t>(0x10u)
static ::UnityEngine::InputSystem::LowLevel::TouchFlags const TapPress;

/// @brief Field TapRelease value: static_cast<uint8_t>(0x20u)
static ::UnityEngine::InputSystem::LowLevel::TouchFlags const TapRelease;

/// @brief Field OrphanedPrimaryTouch value: static_cast<uint8_t>(0x40u)
static ::UnityEngine::InputSystem::LowLevel::TouchFlags const OrphanedPrimaryTouch;

/// @brief Field BeganInSameFrame value: static_cast<uint8_t>(0x80u)
static ::UnityEngine::InputSystem::LowLevel::TouchFlags const BeganInSameFrame;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) uint8_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __TouchFlags_Unwrapped () const noexcept {
return std::bit_cast<__TouchFlags_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x1>::instance);
}

constexpr void __set_value__(uint8_t  value) ;

constexpr uint8_t& __get_value__() ;

constexpr uint8_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr TouchFlags(uint8_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TouchFlags(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TouchFlags()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::TouchFlags, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::TouchFlags, "UnityEngine.InputSystem.LowLevel", "TouchFlags");
