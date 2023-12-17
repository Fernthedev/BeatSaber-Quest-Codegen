#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ImuSample_t)
namespace OVR::OpenVR {
struct HmdVector3d_t;
}
// Forward declare root types
namespace OVR::OpenVR {
struct ImuSample_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::ImuSample_t);
// Type: OVR.OpenVR::ImuSample_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8702))
// CS Name: ::OVR.OpenVR::ImuSample_t
struct CORDL_TYPE ImuSample_t : public ::bs_hook::ValueTypeWrapper<0x40> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field fSampleTime offset 0x0
 __declspec(property(get=__get_fSampleTime, put=__set_fSampleTime)) double_t  fSampleTime;

/// @brief Field vAccel offset 0x8
 __declspec(property(get=__get_vAccel, put=__set_vAccel)) ::OVR::OpenVR::HmdVector3d_t  vAccel;

/// @brief Field vGyro offset 0x20
 __declspec(property(get=__get_vGyro, put=__set_vGyro)) ::OVR::OpenVR::HmdVector3d_t  vGyro;

/// @brief Field unOffScaleFlags offset 0x38
 __declspec(property(get=__get_unOffScaleFlags, put=__set_unOffScaleFlags)) uint32_t  unOffScaleFlags;

constexpr void __set_fSampleTime(double_t  value) ;

constexpr double_t& __get_fSampleTime() ;

constexpr double_t const& __get_fSampleTime() const;

constexpr void __set_vAccel(::OVR::OpenVR::HmdVector3d_t  value) ;

constexpr ::OVR::OpenVR::HmdVector3d_t& __get_vAccel() ;

constexpr ::OVR::OpenVR::HmdVector3d_t const& __get_vAccel() const;

constexpr void __set_vGyro(::OVR::OpenVR::HmdVector3d_t  value) ;

constexpr ::OVR::OpenVR::HmdVector3d_t& __get_vGyro() ;

constexpr ::OVR::OpenVR::HmdVector3d_t const& __get_vGyro() const;

constexpr void __set_unOffScaleFlags(uint32_t  value) ;

constexpr uint32_t& __get_unOffScaleFlags() ;

constexpr uint32_t const& __get_unOffScaleFlags() const;

// Ctor Parameters [CppParam { name: "fSampleTime", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "vAccel", ty: "::OVR::OpenVR::HmdVector3d_t", modifiers: "", def_value: None }, CppParam { name: "vGyro", ty: "::OVR::OpenVR::HmdVector3d_t", modifiers: "", def_value: None }, CppParam { name: "unOffScaleFlags", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr ImuSample_t(double_t  fSampleTime, ::OVR::OpenVR::HmdVector3d_t  vAccel, ::OVR::OpenVR::HmdVector3d_t  vGyro, uint32_t  unOffScaleFlags) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ImuSample_t(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x40>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ImuSample_t()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::ImuSample_t, 0x40>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::ImuSample_t, "OVR.OpenVR", "ImuSample_t");
