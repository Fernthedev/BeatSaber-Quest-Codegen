#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(HmdQuaternionf_t)
// Forward declare root types
namespace OVR::OpenVR {
struct HmdQuaternionf_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::HmdQuaternionf_t);
// Type: OVR.OpenVR::HmdQuaternionf_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8652))
// CS Name: ::OVR.OpenVR::HmdQuaternionf_t
struct CORDL_TYPE HmdQuaternionf_t : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field w offset 0x0
 __declspec(property(get=__get_w, put=__set_w)) float_t  w;

/// @brief Field x offset 0x4
 __declspec(property(get=__get_x, put=__set_x)) float_t  x;

/// @brief Field y offset 0x8
 __declspec(property(get=__get_y, put=__set_y)) float_t  y;

/// @brief Field z offset 0xc
 __declspec(property(get=__get_z, put=__set_z)) float_t  z;

constexpr void __set_w(float_t  value) ;

constexpr float_t& __get_w() ;

constexpr float_t const& __get_w() const;

constexpr void __set_x(float_t  value) ;

constexpr float_t& __get_x() ;

constexpr float_t const& __get_x() const;

constexpr void __set_y(float_t  value) ;

constexpr float_t& __get_y() ;

constexpr float_t const& __get_y() const;

constexpr void __set_z(float_t  value) ;

constexpr float_t& __get_z() ;

constexpr float_t const& __get_z() const;

// Ctor Parameters [CppParam { name: "w", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "z", ty: "float_t", modifiers: "", def_value: None }]
constexpr HmdQuaternionf_t(float_t  w, float_t  x, float_t  y, float_t  z) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit HmdQuaternionf_t(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 HmdQuaternionf_t()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::HmdQuaternionf_t, 0x10>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::HmdQuaternionf_t, "OVR.OpenVR", "HmdQuaternionf_t");
