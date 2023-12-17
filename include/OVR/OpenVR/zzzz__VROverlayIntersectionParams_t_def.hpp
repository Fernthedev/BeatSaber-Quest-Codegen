#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(VROverlayIntersectionParams_t)
namespace OVR::OpenVR {
struct ETrackingUniverseOrigin;
}
namespace OVR::OpenVR {
struct HmdVector3_t;
}
// Forward declare root types
namespace OVR::OpenVR {
struct VROverlayIntersectionParams_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VROverlayIntersectionParams_t);
// Type: OVR.OpenVR::VROverlayIntersectionParams_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8706))
// CS Name: ::OVR.OpenVR::VROverlayIntersectionParams_t
struct CORDL_TYPE VROverlayIntersectionParams_t : public ::bs_hook::ValueTypeWrapper<0x1c> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1c};

/// @brief Field vSource offset 0x0
 __declspec(property(get=__get_vSource, put=__set_vSource)) ::OVR::OpenVR::HmdVector3_t  vSource;

/// @brief Field vDirection offset 0xc
 __declspec(property(get=__get_vDirection, put=__set_vDirection)) ::OVR::OpenVR::HmdVector3_t  vDirection;

/// @brief Field eOrigin offset 0x18
 __declspec(property(get=__get_eOrigin, put=__set_eOrigin)) ::OVR::OpenVR::ETrackingUniverseOrigin  eOrigin;

constexpr void __set_vSource(::OVR::OpenVR::HmdVector3_t  value) ;

constexpr ::OVR::OpenVR::HmdVector3_t& __get_vSource() ;

constexpr ::OVR::OpenVR::HmdVector3_t const& __get_vSource() const;

constexpr void __set_vDirection(::OVR::OpenVR::HmdVector3_t  value) ;

constexpr ::OVR::OpenVR::HmdVector3_t& __get_vDirection() ;

constexpr ::OVR::OpenVR::HmdVector3_t const& __get_vDirection() const;

constexpr void __set_eOrigin(::OVR::OpenVR::ETrackingUniverseOrigin  value) ;

constexpr ::OVR::OpenVR::ETrackingUniverseOrigin& __get_eOrigin() ;

constexpr ::OVR::OpenVR::ETrackingUniverseOrigin const& __get_eOrigin() const;

// Ctor Parameters [CppParam { name: "vSource", ty: "::OVR::OpenVR::HmdVector3_t", modifiers: "", def_value: None }, CppParam { name: "vDirection", ty: "::OVR::OpenVR::HmdVector3_t", modifiers: "", def_value: None }, CppParam { name: "eOrigin", ty: "::OVR::OpenVR::ETrackingUniverseOrigin", modifiers: "", def_value: None }]
constexpr VROverlayIntersectionParams_t(::OVR::OpenVR::HmdVector3_t  vSource, ::OVR::OpenVR::HmdVector3_t  vDirection, ::OVR::OpenVR::ETrackingUniverseOrigin  eOrigin) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit VROverlayIntersectionParams_t(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1c>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 VROverlayIntersectionParams_t()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VROverlayIntersectionParams_t, 0x1c>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VROverlayIntersectionParams_t, "OVR.OpenVR", "VROverlayIntersectionParams_t");
