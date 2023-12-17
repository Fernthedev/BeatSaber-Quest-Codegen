#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(VROverlayIntersectionResults_t)
namespace OVR::OpenVR {
struct HmdVector3_t;
}
namespace OVR::OpenVR {
struct HmdVector2_t;
}
// Forward declare root types
namespace OVR::OpenVR {
struct VROverlayIntersectionResults_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VROverlayIntersectionResults_t);
// Type: OVR.OpenVR::VROverlayIntersectionResults_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8707))
// CS Name: ::OVR.OpenVR::VROverlayIntersectionResults_t
struct CORDL_TYPE VROverlayIntersectionResults_t : public ::bs_hook::ValueTypeWrapper<0x24> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x24};

/// @brief Field vPoint offset 0x0
 __declspec(property(get=__get_vPoint, put=__set_vPoint)) ::OVR::OpenVR::HmdVector3_t  vPoint;

/// @brief Field vNormal offset 0xc
 __declspec(property(get=__get_vNormal, put=__set_vNormal)) ::OVR::OpenVR::HmdVector3_t  vNormal;

/// @brief Field vUVs offset 0x18
 __declspec(property(get=__get_vUVs, put=__set_vUVs)) ::OVR::OpenVR::HmdVector2_t  vUVs;

/// @brief Field fDistance offset 0x20
 __declspec(property(get=__get_fDistance, put=__set_fDistance)) float_t  fDistance;

constexpr void __set_vPoint(::OVR::OpenVR::HmdVector3_t  value) ;

constexpr ::OVR::OpenVR::HmdVector3_t& __get_vPoint() ;

constexpr ::OVR::OpenVR::HmdVector3_t const& __get_vPoint() const;

constexpr void __set_vNormal(::OVR::OpenVR::HmdVector3_t  value) ;

constexpr ::OVR::OpenVR::HmdVector3_t& __get_vNormal() ;

constexpr ::OVR::OpenVR::HmdVector3_t const& __get_vNormal() const;

constexpr void __set_vUVs(::OVR::OpenVR::HmdVector2_t  value) ;

constexpr ::OVR::OpenVR::HmdVector2_t& __get_vUVs() ;

constexpr ::OVR::OpenVR::HmdVector2_t const& __get_vUVs() const;

constexpr void __set_fDistance(float_t  value) ;

constexpr float_t& __get_fDistance() ;

constexpr float_t const& __get_fDistance() const;

// Ctor Parameters [CppParam { name: "vPoint", ty: "::OVR::OpenVR::HmdVector3_t", modifiers: "", def_value: None }, CppParam { name: "vNormal", ty: "::OVR::OpenVR::HmdVector3_t", modifiers: "", def_value: None }, CppParam { name: "vUVs", ty: "::OVR::OpenVR::HmdVector2_t", modifiers: "", def_value: None }, CppParam { name: "fDistance", ty: "float_t", modifiers: "", def_value: None }]
constexpr VROverlayIntersectionResults_t(::OVR::OpenVR::HmdVector3_t  vPoint, ::OVR::OpenVR::HmdVector3_t  vNormal, ::OVR::OpenVR::HmdVector2_t  vUVs, float_t  fDistance) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit VROverlayIntersectionResults_t(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x24>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 VROverlayIntersectionResults_t()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VROverlayIntersectionResults_t, 0x24>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VROverlayIntersectionResults_t, "OVR.OpenVR", "VROverlayIntersectionResults_t");
