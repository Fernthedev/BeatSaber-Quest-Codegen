#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(HmdColor_t)
// Forward declare root types
namespace OVR::OpenVR {
struct HmdColor_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::HmdColor_t);
// Type: OVR.OpenVR::HmdColor_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8653))
// CS Name: ::OVR.OpenVR::HmdColor_t
struct CORDL_TYPE HmdColor_t : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field r offset 0x0
 __declspec(property(get=__get_r, put=__set_r)) float_t  r;

/// @brief Field g offset 0x4
 __declspec(property(get=__get_g, put=__set_g)) float_t  g;

/// @brief Field b offset 0x8
 __declspec(property(get=__get_b, put=__set_b)) float_t  b;

/// @brief Field a offset 0xc
 __declspec(property(get=__get_a, put=__set_a)) float_t  a;

constexpr void __set_r(float_t  value) ;

constexpr float_t& __get_r() ;

constexpr float_t const& __get_r() const;

constexpr void __set_g(float_t  value) ;

constexpr float_t& __get_g() ;

constexpr float_t const& __get_g() const;

constexpr void __set_b(float_t  value) ;

constexpr float_t& __get_b() ;

constexpr float_t const& __get_b() const;

constexpr void __set_a(float_t  value) ;

constexpr float_t& __get_a() ;

constexpr float_t const& __get_a() const;

// Ctor Parameters [CppParam { name: "r", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "g", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "b", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "a", ty: "float_t", modifiers: "", def_value: None }]
constexpr HmdColor_t(float_t  r, float_t  g, float_t  b, float_t  a) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit HmdColor_t(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 HmdColor_t()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::HmdColor_t, 0x10>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::HmdColor_t, "OVR.OpenVR", "HmdColor_t");
