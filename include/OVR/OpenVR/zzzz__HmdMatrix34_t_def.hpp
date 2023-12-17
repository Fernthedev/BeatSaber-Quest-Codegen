#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(HmdMatrix34_t)
// Forward declare root types
namespace OVR::OpenVR {
struct HmdMatrix34_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::HmdMatrix34_t);
// Type: OVR.OpenVR::HmdMatrix34_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8644))
// CS Name: ::OVR.OpenVR::HmdMatrix34_t
struct CORDL_TYPE HmdMatrix34_t : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field m0 offset 0x0
 __declspec(property(get=__get_m0, put=__set_m0)) float_t  m0;

/// @brief Field m1 offset 0x4
 __declspec(property(get=__get_m1, put=__set_m1)) float_t  m1;

/// @brief Field m2 offset 0x8
 __declspec(property(get=__get_m2, put=__set_m2)) float_t  m2;

/// @brief Field m3 offset 0xc
 __declspec(property(get=__get_m3, put=__set_m3)) float_t  m3;

/// @brief Field m4 offset 0x10
 __declspec(property(get=__get_m4, put=__set_m4)) float_t  m4;

/// @brief Field m5 offset 0x14
 __declspec(property(get=__get_m5, put=__set_m5)) float_t  m5;

/// @brief Field m6 offset 0x18
 __declspec(property(get=__get_m6, put=__set_m6)) float_t  m6;

/// @brief Field m7 offset 0x1c
 __declspec(property(get=__get_m7, put=__set_m7)) float_t  m7;

/// @brief Field m8 offset 0x20
 __declspec(property(get=__get_m8, put=__set_m8)) float_t  m8;

/// @brief Field m9 offset 0x24
 __declspec(property(get=__get_m9, put=__set_m9)) float_t  m9;

/// @brief Field m10 offset 0x28
 __declspec(property(get=__get_m10, put=__set_m10)) float_t  m10;

/// @brief Field m11 offset 0x2c
 __declspec(property(get=__get_m11, put=__set_m11)) float_t  m11;

constexpr void __set_m0(float_t  value) ;

constexpr float_t& __get_m0() ;

constexpr float_t const& __get_m0() const;

constexpr void __set_m1(float_t  value) ;

constexpr float_t& __get_m1() ;

constexpr float_t const& __get_m1() const;

constexpr void __set_m2(float_t  value) ;

constexpr float_t& __get_m2() ;

constexpr float_t const& __get_m2() const;

constexpr void __set_m3(float_t  value) ;

constexpr float_t& __get_m3() ;

constexpr float_t const& __get_m3() const;

constexpr void __set_m4(float_t  value) ;

constexpr float_t& __get_m4() ;

constexpr float_t const& __get_m4() const;

constexpr void __set_m5(float_t  value) ;

constexpr float_t& __get_m5() ;

constexpr float_t const& __get_m5() const;

constexpr void __set_m6(float_t  value) ;

constexpr float_t& __get_m6() ;

constexpr float_t const& __get_m6() const;

constexpr void __set_m7(float_t  value) ;

constexpr float_t& __get_m7() ;

constexpr float_t const& __get_m7() const;

constexpr void __set_m8(float_t  value) ;

constexpr float_t& __get_m8() ;

constexpr float_t const& __get_m8() const;

constexpr void __set_m9(float_t  value) ;

constexpr float_t& __get_m9() ;

constexpr float_t const& __get_m9() const;

constexpr void __set_m10(float_t  value) ;

constexpr float_t& __get_m10() ;

constexpr float_t const& __get_m10() const;

constexpr void __set_m11(float_t  value) ;

constexpr float_t& __get_m11() ;

constexpr float_t const& __get_m11() const;

// Ctor Parameters [CppParam { name: "m0", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m1", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m2", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m3", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m4", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m5", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m6", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m7", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m8", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m9", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m10", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m11", ty: "float_t", modifiers: "", def_value: None }]
constexpr HmdMatrix34_t(float_t  m0, float_t  m1, float_t  m2, float_t  m3, float_t  m4, float_t  m5, float_t  m6, float_t  m7, float_t  m8, float_t  m9, float_t  m10, float_t  m11) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit HmdMatrix34_t(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 HmdMatrix34_t()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::HmdMatrix34_t, 0x30>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::HmdMatrix34_t, "OVR.OpenVR", "HmdMatrix34_t");
