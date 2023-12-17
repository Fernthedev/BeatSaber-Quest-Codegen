#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CameraVideoStreamFrameHeader_t)
namespace OVR::OpenVR {
struct EVRTrackedCameraFrameType;
}
namespace OVR::OpenVR {
struct TrackedDevicePose_t;
}
// Forward declare root types
namespace OVR::OpenVR {
struct CameraVideoStreamFrameHeader_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::CameraVideoStreamFrameHeader_t);
// Type: OVR.OpenVR::CameraVideoStreamFrameHeader_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8700))
// CS Name: ::OVR.OpenVR::CameraVideoStreamFrameHeader_t
struct CORDL_TYPE CameraVideoStreamFrameHeader_t : public ::bs_hook::ValueTypeWrapper<0x64> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x64};

/// @brief Field eFrameType offset 0x0
 __declspec(property(get=__get_eFrameType, put=__set_eFrameType)) ::OVR::OpenVR::EVRTrackedCameraFrameType  eFrameType;

/// @brief Field nWidth offset 0x4
 __declspec(property(get=__get_nWidth, put=__set_nWidth)) uint32_t  nWidth;

/// @brief Field nHeight offset 0x8
 __declspec(property(get=__get_nHeight, put=__set_nHeight)) uint32_t  nHeight;

/// @brief Field nBytesPerPixel offset 0xc
 __declspec(property(get=__get_nBytesPerPixel, put=__set_nBytesPerPixel)) uint32_t  nBytesPerPixel;

/// @brief Field nFrameSequence offset 0x10
 __declspec(property(get=__get_nFrameSequence, put=__set_nFrameSequence)) uint32_t  nFrameSequence;

/// @brief Field standingTrackedDevicePose offset 0x14
 __declspec(property(get=__get_standingTrackedDevicePose, put=__set_standingTrackedDevicePose)) ::OVR::OpenVR::TrackedDevicePose_t  standingTrackedDevicePose;

constexpr void __set_eFrameType(::OVR::OpenVR::EVRTrackedCameraFrameType  value) ;

constexpr ::OVR::OpenVR::EVRTrackedCameraFrameType& __get_eFrameType() ;

constexpr ::OVR::OpenVR::EVRTrackedCameraFrameType const& __get_eFrameType() const;

constexpr void __set_nWidth(uint32_t  value) ;

constexpr uint32_t& __get_nWidth() ;

constexpr uint32_t const& __get_nWidth() const;

constexpr void __set_nHeight(uint32_t  value) ;

constexpr uint32_t& __get_nHeight() ;

constexpr uint32_t const& __get_nHeight() const;

constexpr void __set_nBytesPerPixel(uint32_t  value) ;

constexpr uint32_t& __get_nBytesPerPixel() ;

constexpr uint32_t const& __get_nBytesPerPixel() const;

constexpr void __set_nFrameSequence(uint32_t  value) ;

constexpr uint32_t& __get_nFrameSequence() ;

constexpr uint32_t const& __get_nFrameSequence() const;

constexpr void __set_standingTrackedDevicePose(::OVR::OpenVR::TrackedDevicePose_t  value) ;

constexpr ::OVR::OpenVR::TrackedDevicePose_t& __get_standingTrackedDevicePose() ;

constexpr ::OVR::OpenVR::TrackedDevicePose_t const& __get_standingTrackedDevicePose() const;

// Ctor Parameters [CppParam { name: "eFrameType", ty: "::OVR::OpenVR::EVRTrackedCameraFrameType", modifiers: "", def_value: None }, CppParam { name: "nWidth", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "nHeight", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "nBytesPerPixel", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "nFrameSequence", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "standingTrackedDevicePose", ty: "::OVR::OpenVR::TrackedDevicePose_t", modifiers: "", def_value: None }]
constexpr CameraVideoStreamFrameHeader_t(::OVR::OpenVR::EVRTrackedCameraFrameType  eFrameType, uint32_t  nWidth, uint32_t  nHeight, uint32_t  nBytesPerPixel, uint32_t  nFrameSequence, ::OVR::OpenVR::TrackedDevicePose_t  standingTrackedDevicePose) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit CameraVideoStreamFrameHeader_t(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x64>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 CameraVideoStreamFrameHeader_t()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::CameraVideoStreamFrameHeader_t, 0x64>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::CameraVideoStreamFrameHeader_t, "OVR.OpenVR", "CameraVideoStreamFrameHeader_t");
