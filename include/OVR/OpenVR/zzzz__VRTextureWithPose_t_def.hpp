#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(VRTextureWithPose_t)
namespace OVR::OpenVR {
struct HmdMatrix34_t;
}
// Forward declare root types
namespace OVR::OpenVR {
struct VRTextureWithPose_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VRTextureWithPose_t);
// Type: OVR.OpenVR::VRTextureWithPose_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8660))
// CS Name: ::OVR.OpenVR::VRTextureWithPose_t
struct CORDL_TYPE VRTextureWithPose_t : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field mDeviceToAbsoluteTracking offset 0x0
 __declspec(property(get=__get_mDeviceToAbsoluteTracking, put=__set_mDeviceToAbsoluteTracking)) ::OVR::OpenVR::HmdMatrix34_t  mDeviceToAbsoluteTracking;

constexpr void __set_mDeviceToAbsoluteTracking(::OVR::OpenVR::HmdMatrix34_t  value) ;

constexpr ::OVR::OpenVR::HmdMatrix34_t& __get_mDeviceToAbsoluteTracking() ;

constexpr ::OVR::OpenVR::HmdMatrix34_t const& __get_mDeviceToAbsoluteTracking() const;

// Ctor Parameters [CppParam { name: "mDeviceToAbsoluteTracking", ty: "::OVR::OpenVR::HmdMatrix34_t", modifiers: "", def_value: None }]
constexpr VRTextureWithPose_t(::OVR::OpenVR::HmdMatrix34_t  mDeviceToAbsoluteTracking) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit VRTextureWithPose_t(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 VRTextureWithPose_t()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VRTextureWithPose_t, 0x30>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VRTextureWithPose_t, "OVR.OpenVR", "VRTextureWithPose_t");
