#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(VRTextureBounds_t)
// Forward declare root types
namespace OVR::OpenVR {
struct VRTextureBounds_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VRTextureBounds_t);
// Type: OVR.OpenVR::VRTextureBounds_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8659))
// CS Name: ::OVR.OpenVR::VRTextureBounds_t
struct CORDL_TYPE VRTextureBounds_t : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field uMin offset 0x0
 __declspec(property(get=__get_uMin, put=__set_uMin)) float_t  uMin;

/// @brief Field vMin offset 0x4
 __declspec(property(get=__get_vMin, put=__set_vMin)) float_t  vMin;

/// @brief Field uMax offset 0x8
 __declspec(property(get=__get_uMax, put=__set_uMax)) float_t  uMax;

/// @brief Field vMax offset 0xc
 __declspec(property(get=__get_vMax, put=__set_vMax)) float_t  vMax;

constexpr void __set_uMin(float_t  value) ;

constexpr float_t& __get_uMin() ;

constexpr float_t const& __get_uMin() const;

constexpr void __set_vMin(float_t  value) ;

constexpr float_t& __get_vMin() ;

constexpr float_t const& __get_vMin() const;

constexpr void __set_uMax(float_t  value) ;

constexpr float_t& __get_uMax() ;

constexpr float_t const& __get_uMax() const;

constexpr void __set_vMax(float_t  value) ;

constexpr float_t& __get_vMax() ;

constexpr float_t const& __get_vMax() const;

// Ctor Parameters [CppParam { name: "uMin", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "vMin", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "uMax", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "vMax", ty: "float_t", modifiers: "", def_value: None }]
constexpr VRTextureBounds_t(float_t  uMin, float_t  vMin, float_t  uMax, float_t  vMax) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit VRTextureBounds_t(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 VRTextureBounds_t()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VRTextureBounds_t, 0x10>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VRTextureBounds_t, "OVR.OpenVR", "VRTextureBounds_t");
