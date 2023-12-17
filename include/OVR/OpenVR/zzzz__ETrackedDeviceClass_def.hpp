#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ETrackedDeviceClass)
// Forward declare root types
namespace OVR::OpenVR {
struct ETrackedDeviceClass;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::ETrackedDeviceClass);
// Type: OVR.OpenVR::ETrackedDeviceClass
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8584))
// CS Name: ::OVR.OpenVR::ETrackedDeviceClass
struct CORDL_TYPE ETrackedDeviceClass : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ETrackedDeviceClass_Unwrapped
enum struct __ETrackedDeviceClass_Unwrapped : int32_t {
__E_Invalid = static_cast<int32_t>(0x0),
__E_HMD = static_cast<int32_t>(0x1),
__E_Controller = static_cast<int32_t>(0x2),
__E_GenericTracker = static_cast<int32_t>(0x3),
__E_TrackingReference = static_cast<int32_t>(0x4),
__E_DisplayRedirect = static_cast<int32_t>(0x5),
__E_Max = static_cast<int32_t>(0x6),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Invalid value: static_cast<int32_t>(0x0)
static ::OVR::OpenVR::ETrackedDeviceClass const Invalid;

/// @brief Field HMD value: static_cast<int32_t>(0x1)
static ::OVR::OpenVR::ETrackedDeviceClass const HMD;

/// @brief Field Controller value: static_cast<int32_t>(0x2)
static ::OVR::OpenVR::ETrackedDeviceClass const Controller;

/// @brief Field GenericTracker value: static_cast<int32_t>(0x3)
static ::OVR::OpenVR::ETrackedDeviceClass const GenericTracker;

/// @brief Field TrackingReference value: static_cast<int32_t>(0x4)
static ::OVR::OpenVR::ETrackedDeviceClass const TrackingReference;

/// @brief Field DisplayRedirect value: static_cast<int32_t>(0x5)
static ::OVR::OpenVR::ETrackedDeviceClass const DisplayRedirect;

/// @brief Field Max value: static_cast<int32_t>(0x6)
static ::OVR::OpenVR::ETrackedDeviceClass const Max;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __ETrackedDeviceClass_Unwrapped () const noexcept {
return std::bit_cast<__ETrackedDeviceClass_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ETrackedDeviceClass(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ETrackedDeviceClass(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ETrackedDeviceClass()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::ETrackedDeviceClass, 0x4>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::ETrackedDeviceClass, "OVR.OpenVR", "ETrackedDeviceClass");
