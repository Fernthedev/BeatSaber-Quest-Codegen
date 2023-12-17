#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(HmdQuad_t)
namespace OVR::OpenVR {
struct HmdVector3_t;
}
// Forward declare root types
namespace OVR::OpenVR {
struct HmdQuad_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::HmdQuad_t);
// Type: OVR.OpenVR::HmdQuad_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8654))
// CS Name: ::OVR.OpenVR::HmdQuad_t
struct CORDL_TYPE HmdQuad_t : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field vCorners0 offset 0x0
 __declspec(property(get=__get_vCorners0, put=__set_vCorners0)) ::OVR::OpenVR::HmdVector3_t  vCorners0;

/// @brief Field vCorners1 offset 0xc
 __declspec(property(get=__get_vCorners1, put=__set_vCorners1)) ::OVR::OpenVR::HmdVector3_t  vCorners1;

/// @brief Field vCorners2 offset 0x18
 __declspec(property(get=__get_vCorners2, put=__set_vCorners2)) ::OVR::OpenVR::HmdVector3_t  vCorners2;

/// @brief Field vCorners3 offset 0x24
 __declspec(property(get=__get_vCorners3, put=__set_vCorners3)) ::OVR::OpenVR::HmdVector3_t  vCorners3;

constexpr void __set_vCorners0(::OVR::OpenVR::HmdVector3_t  value) ;

constexpr ::OVR::OpenVR::HmdVector3_t& __get_vCorners0() ;

constexpr ::OVR::OpenVR::HmdVector3_t const& __get_vCorners0() const;

constexpr void __set_vCorners1(::OVR::OpenVR::HmdVector3_t  value) ;

constexpr ::OVR::OpenVR::HmdVector3_t& __get_vCorners1() ;

constexpr ::OVR::OpenVR::HmdVector3_t const& __get_vCorners1() const;

constexpr void __set_vCorners2(::OVR::OpenVR::HmdVector3_t  value) ;

constexpr ::OVR::OpenVR::HmdVector3_t& __get_vCorners2() ;

constexpr ::OVR::OpenVR::HmdVector3_t const& __get_vCorners2() const;

constexpr void __set_vCorners3(::OVR::OpenVR::HmdVector3_t  value) ;

constexpr ::OVR::OpenVR::HmdVector3_t& __get_vCorners3() ;

constexpr ::OVR::OpenVR::HmdVector3_t const& __get_vCorners3() const;

// Ctor Parameters [CppParam { name: "vCorners0", ty: "::OVR::OpenVR::HmdVector3_t", modifiers: "", def_value: None }, CppParam { name: "vCorners1", ty: "::OVR::OpenVR::HmdVector3_t", modifiers: "", def_value: None }, CppParam { name: "vCorners2", ty: "::OVR::OpenVR::HmdVector3_t", modifiers: "", def_value: None }, CppParam { name: "vCorners3", ty: "::OVR::OpenVR::HmdVector3_t", modifiers: "", def_value: None }]
constexpr HmdQuad_t(::OVR::OpenVR::HmdVector3_t  vCorners0, ::OVR::OpenVR::HmdVector3_t  vCorners1, ::OVR::OpenVR::HmdVector3_t  vCorners2, ::OVR::OpenVR::HmdVector3_t  vCorners3) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit HmdQuad_t(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 HmdQuad_t()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::HmdQuad_t, 0x30>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::HmdQuad_t, "OVR.OpenVR", "HmdQuad_t");
