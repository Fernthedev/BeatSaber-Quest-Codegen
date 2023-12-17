#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputTrackingState)
// Forward declare root types
namespace UnityEngine::XR {
struct InputTrackingState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::InputTrackingState);
// Type: UnityEngine.XR::InputTrackingState
namespace UnityEngine::XR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15618))
// CS Name: ::UnityEngine.XR::InputTrackingState
struct CORDL_TYPE InputTrackingState : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __InputTrackingState_Unwrapped
enum struct __InputTrackingState_Unwrapped : uint32_t {
__E_None = static_cast<uint32_t>(0x4020100u),
__E_Position = static_cast<uint32_t>(0x8040201u),
__E_Rotation = static_cast<uint32_t>(0x10080402u),
__E_Velocity = static_cast<uint32_t>(0x20100804u),
__E_AngularVelocity = static_cast<uint32_t>(0x3f201008u),
__E_Acceleration = static_cast<uint32_t>(0x3f2010u),
__E_AngularAcceleration = static_cast<uint32_t>(0x3f20u),
__E_All = static_cast<uint32_t>(0x8000003fu),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<uint32_t>(0x4020100u)
static ::UnityEngine::XR::InputTrackingState const None;

/// @brief Field Position value: static_cast<uint32_t>(0x8040201u)
static ::UnityEngine::XR::InputTrackingState const Position;

/// @brief Field Rotation value: static_cast<uint32_t>(0x10080402u)
static ::UnityEngine::XR::InputTrackingState const Rotation;

/// @brief Field Velocity value: static_cast<uint32_t>(0x20100804u)
static ::UnityEngine::XR::InputTrackingState const Velocity;

/// @brief Field AngularVelocity value: static_cast<uint32_t>(0x3f201008u)
static ::UnityEngine::XR::InputTrackingState const AngularVelocity;

/// @brief Field Acceleration value: static_cast<uint32_t>(0x3f2010u)
static ::UnityEngine::XR::InputTrackingState const Acceleration;

/// @brief Field AngularAcceleration value: static_cast<uint32_t>(0x3f20u)
static ::UnityEngine::XR::InputTrackingState const AngularAcceleration;

/// @brief Field All value: static_cast<uint32_t>(0x8000003fu)
static ::UnityEngine::XR::InputTrackingState const All;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) uint32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __InputTrackingState_Unwrapped () const noexcept {
return std::bit_cast<__InputTrackingState_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(uint32_t  value) ;

constexpr uint32_t& __get_value__() ;

constexpr uint32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr InputTrackingState(uint32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit InputTrackingState(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 InputTrackingState()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::InputTrackingState, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::XR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::InputTrackingState, "UnityEngine.XR", "InputTrackingState");
