#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AvailableTrackingData)
// Forward declare root types
namespace UnityEngine::XR {
struct AvailableTrackingData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::AvailableTrackingData);
// Type: UnityEngine.XR::AvailableTrackingData
namespace UnityEngine::XR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15628))
// CS Name: ::UnityEngine.XR::AvailableTrackingData
struct CORDL_TYPE AvailableTrackingData : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AvailableTrackingData_Unwrapped
enum struct __AvailableTrackingData_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_PositionAvailable = static_cast<int32_t>(0x1),
__E_RotationAvailable = static_cast<int32_t>(0x2),
__E_VelocityAvailable = static_cast<int32_t>(0x4),
__E_AngularVelocityAvailable = static_cast<int32_t>(0x8),
__E_AccelerationAvailable = static_cast<int32_t>(0x10),
__E_AngularAccelerationAvailable = static_cast<int32_t>(0x20),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::UnityEngine::XR::AvailableTrackingData const None;

/// @brief Field PositionAvailable value: static_cast<int32_t>(0x1)
static ::UnityEngine::XR::AvailableTrackingData const PositionAvailable;

/// @brief Field RotationAvailable value: static_cast<int32_t>(0x2)
static ::UnityEngine::XR::AvailableTrackingData const RotationAvailable;

/// @brief Field VelocityAvailable value: static_cast<int32_t>(0x4)
static ::UnityEngine::XR::AvailableTrackingData const VelocityAvailable;

/// @brief Field AngularVelocityAvailable value: static_cast<int32_t>(0x8)
static ::UnityEngine::XR::AvailableTrackingData const AngularVelocityAvailable;

/// @brief Field AccelerationAvailable value: static_cast<int32_t>(0x10)
static ::UnityEngine::XR::AvailableTrackingData const AccelerationAvailable;

/// @brief Field AngularAccelerationAvailable value: static_cast<int32_t>(0x20)
static ::UnityEngine::XR::AvailableTrackingData const AngularAccelerationAvailable;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __AvailableTrackingData_Unwrapped () const noexcept {
return std::bit_cast<__AvailableTrackingData_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AvailableTrackingData(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AvailableTrackingData(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AvailableTrackingData()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::AvailableTrackingData, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::XR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::AvailableTrackingData, "UnityEngine.XR", "AvailableTrackingData");
