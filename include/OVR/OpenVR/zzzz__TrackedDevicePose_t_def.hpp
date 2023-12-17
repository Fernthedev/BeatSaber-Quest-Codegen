#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(TrackedDevicePose_t)
namespace OVR::OpenVR {
struct ETrackingResult;
}
namespace OVR::OpenVR {
struct HmdMatrix34_t;
}
namespace OVR::OpenVR {
struct HmdVector3_t;
}
// Forward declare root types
namespace OVR::OpenVR {
struct TrackedDevicePose_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::TrackedDevicePose_t);
// Type: OVR.OpenVR::TrackedDevicePose_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8658))
// CS Name: ::OVR.OpenVR::TrackedDevicePose_t
struct CORDL_TYPE TrackedDevicePose_t : public ::bs_hook::ValueTypeWrapper<0x50> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field mDeviceToAbsoluteTracking offset 0x0
 __declspec(property(get=__get_mDeviceToAbsoluteTracking, put=__set_mDeviceToAbsoluteTracking)) ::OVR::OpenVR::HmdMatrix34_t  mDeviceToAbsoluteTracking;

/// @brief Field vVelocity offset 0x30
 __declspec(property(get=__get_vVelocity, put=__set_vVelocity)) ::OVR::OpenVR::HmdVector3_t  vVelocity;

/// @brief Field vAngularVelocity offset 0x3c
 __declspec(property(get=__get_vAngularVelocity, put=__set_vAngularVelocity)) ::OVR::OpenVR::HmdVector3_t  vAngularVelocity;

/// @brief Field eTrackingResult offset 0x48
 __declspec(property(get=__get_eTrackingResult, put=__set_eTrackingResult)) ::OVR::OpenVR::ETrackingResult  eTrackingResult;

/// @brief Field bPoseIsValid offset 0x4c
 __declspec(property(get=__get_bPoseIsValid, put=__set_bPoseIsValid)) bool  bPoseIsValid;

/// @brief Field bDeviceIsConnected offset 0x4d
 __declspec(property(get=__get_bDeviceIsConnected, put=__set_bDeviceIsConnected)) bool  bDeviceIsConnected;

constexpr void __set_mDeviceToAbsoluteTracking(::OVR::OpenVR::HmdMatrix34_t  value) ;

constexpr ::OVR::OpenVR::HmdMatrix34_t& __get_mDeviceToAbsoluteTracking() ;

constexpr ::OVR::OpenVR::HmdMatrix34_t const& __get_mDeviceToAbsoluteTracking() const;

constexpr void __set_vVelocity(::OVR::OpenVR::HmdVector3_t  value) ;

constexpr ::OVR::OpenVR::HmdVector3_t& __get_vVelocity() ;

constexpr ::OVR::OpenVR::HmdVector3_t const& __get_vVelocity() const;

constexpr void __set_vAngularVelocity(::OVR::OpenVR::HmdVector3_t  value) ;

constexpr ::OVR::OpenVR::HmdVector3_t& __get_vAngularVelocity() ;

constexpr ::OVR::OpenVR::HmdVector3_t const& __get_vAngularVelocity() const;

constexpr void __set_eTrackingResult(::OVR::OpenVR::ETrackingResult  value) ;

constexpr ::OVR::OpenVR::ETrackingResult& __get_eTrackingResult() ;

constexpr ::OVR::OpenVR::ETrackingResult const& __get_eTrackingResult() const;

constexpr void __set_bPoseIsValid(bool  value) ;

constexpr bool& __get_bPoseIsValid() ;

constexpr bool const& __get_bPoseIsValid() const;

constexpr void __set_bDeviceIsConnected(bool  value) ;

constexpr bool& __get_bDeviceIsConnected() ;

constexpr bool const& __get_bDeviceIsConnected() const;

// Ctor Parameters [CppParam { name: "mDeviceToAbsoluteTracking", ty: "::OVR::OpenVR::HmdMatrix34_t", modifiers: "", def_value: None }, CppParam { name: "vVelocity", ty: "::OVR::OpenVR::HmdVector3_t", modifiers: "", def_value: None }, CppParam { name: "vAngularVelocity", ty: "::OVR::OpenVR::HmdVector3_t", modifiers: "", def_value: None }, CppParam { name: "eTrackingResult", ty: "::OVR::OpenVR::ETrackingResult", modifiers: "", def_value: None }, CppParam { name: "bPoseIsValid", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "bDeviceIsConnected", ty: "bool", modifiers: "", def_value: None }]
constexpr TrackedDevicePose_t(::OVR::OpenVR::HmdMatrix34_t  mDeviceToAbsoluteTracking, ::OVR::OpenVR::HmdVector3_t  vVelocity, ::OVR::OpenVR::HmdVector3_t  vAngularVelocity, ::OVR::OpenVR::ETrackingResult  eTrackingResult, bool  bPoseIsValid, bool  bDeviceIsConnected) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TrackedDevicePose_t(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x50>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TrackedDevicePose_t()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::TrackedDevicePose_t, 0x50>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::TrackedDevicePose_t, "OVR.OpenVR", "TrackedDevicePose_t");
