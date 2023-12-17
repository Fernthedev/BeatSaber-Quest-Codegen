#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputDeviceCharacteristics)
// Forward declare root types
namespace UnityEngine::XR {
struct InputDeviceCharacteristics;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::InputDeviceCharacteristics);
// Type: UnityEngine.XR::InputDeviceCharacteristics
namespace UnityEngine::XR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15617))
// CS Name: ::UnityEngine.XR::InputDeviceCharacteristics
struct CORDL_TYPE InputDeviceCharacteristics : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __InputDeviceCharacteristics_Unwrapped
enum struct __InputDeviceCharacteristics_Unwrapped : uint32_t {
__E_None = static_cast<uint32_t>(0x4020100u),
__E_HeadMounted = static_cast<uint32_t>(0x8040201u),
__E_Camera = static_cast<uint32_t>(0x10080402u),
__E_HeldInHand = static_cast<uint32_t>(0x20100804u),
__E_HandTracking = static_cast<uint32_t>(0x40201008u),
__E_EyeTracking = static_cast<uint32_t>(0x80402010u),
__E_TrackedDevice = static_cast<uint32_t>(0x80804020u),
__E_Controller = static_cast<uint32_t>(0x81808040u),
__E_TrackingReference = static_cast<uint32_t>(0x818080u),
__E_Left = static_cast<uint32_t>(0x820081u),
__E_Right = static_cast<uint32_t>(0x840082u),
__E_Simulated6DOF = static_cast<uint32_t>(0x1000084u),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<uint32_t>(0x4020100u)
static ::UnityEngine::XR::InputDeviceCharacteristics const None;

/// @brief Field HeadMounted value: static_cast<uint32_t>(0x8040201u)
static ::UnityEngine::XR::InputDeviceCharacteristics const HeadMounted;

/// @brief Field Camera value: static_cast<uint32_t>(0x10080402u)
static ::UnityEngine::XR::InputDeviceCharacteristics const Camera;

/// @brief Field HeldInHand value: static_cast<uint32_t>(0x20100804u)
static ::UnityEngine::XR::InputDeviceCharacteristics const HeldInHand;

/// @brief Field HandTracking value: static_cast<uint32_t>(0x40201008u)
static ::UnityEngine::XR::InputDeviceCharacteristics const HandTracking;

/// @brief Field EyeTracking value: static_cast<uint32_t>(0x80402010u)
static ::UnityEngine::XR::InputDeviceCharacteristics const EyeTracking;

/// @brief Field TrackedDevice value: static_cast<uint32_t>(0x80804020u)
static ::UnityEngine::XR::InputDeviceCharacteristics const TrackedDevice;

/// @brief Field Controller value: static_cast<uint32_t>(0x81808040u)
static ::UnityEngine::XR::InputDeviceCharacteristics const Controller;

/// @brief Field TrackingReference value: static_cast<uint32_t>(0x818080u)
static ::UnityEngine::XR::InputDeviceCharacteristics const TrackingReference;

/// @brief Field Left value: static_cast<uint32_t>(0x820081u)
static ::UnityEngine::XR::InputDeviceCharacteristics const Left;

/// @brief Field Right value: static_cast<uint32_t>(0x840082u)
static ::UnityEngine::XR::InputDeviceCharacteristics const Right;

/// @brief Field Simulated6DOF value: static_cast<uint32_t>(0x1000084u)
static ::UnityEngine::XR::InputDeviceCharacteristics const Simulated6DOF;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) uint32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __InputDeviceCharacteristics_Unwrapped () const noexcept {
return std::bit_cast<__InputDeviceCharacteristics_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(uint32_t  value) ;

constexpr uint32_t& __get_value__() ;

constexpr uint32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr InputDeviceCharacteristics(uint32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit InputDeviceCharacteristics(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 InputDeviceCharacteristics()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::InputDeviceCharacteristics, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::XR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::InputDeviceCharacteristics, "UnityEngine.XR", "InputDeviceCharacteristics");
