#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(jvalue)
// Forward declare root types
namespace UnityEngine {
struct jvalue;
}
// Write type traits
MARK_VAL_T(::UnityEngine::jvalue);
// Type: UnityEngine::jvalue
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14917))
// CS Name: ::UnityEngine::jvalue
struct CORDL_TYPE jvalue : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field z offset 0x0
 __declspec(property(get=__get_z, put=__set_z)) bool  z;

/// @brief Field b offset 0x0
 __declspec(property(get=__get_b, put=__set_b)) int8_t  b;

/// @brief Field c offset 0x0
 __declspec(property(get=__get_c, put=__set_c)) char16_t  c;

/// @brief Field s offset 0x0
 __declspec(property(get=__get_s, put=__set_s)) int16_t  s;

/// @brief Field i offset 0x0
 __declspec(property(get=__get_i, put=__set_i)) int32_t  i;

/// @brief Field j offset 0x0
 __declspec(property(get=__get_j, put=__set_j)) int64_t  j;

/// @brief Field f offset 0x0
 __declspec(property(get=__get_f, put=__set_f)) float_t  f;

/// @brief Field d offset 0x0
 __declspec(property(get=__get_d, put=__set_d)) double_t  d;

/// @brief Field l offset 0x0
 __declspec(property(get=__get_l, put=__set_l)) ::cordl_internals::intptr_t  l;

constexpr void __set_z(bool  value) ;

constexpr bool& __get_z() ;

constexpr bool const& __get_z() const;

constexpr void __set_b(int8_t  value) ;

constexpr int8_t& __get_b() ;

constexpr int8_t const& __get_b() const;

constexpr void __set_c(char16_t  value) ;

constexpr char16_t& __get_c() ;

constexpr char16_t const& __get_c() const;

constexpr void __set_s(int16_t  value) ;

constexpr int16_t& __get_s() ;

constexpr int16_t const& __get_s() const;

constexpr void __set_i(int32_t  value) ;

constexpr int32_t& __get_i() ;

constexpr int32_t const& __get_i() const;

constexpr void __set_j(int64_t  value) ;

constexpr int64_t& __get_j() ;

constexpr int64_t const& __get_j() const;

constexpr void __set_f(float_t  value) ;

constexpr float_t& __get_f() ;

constexpr float_t const& __get_f() const;

constexpr void __set_d(double_t  value) ;

constexpr double_t& __get_d() ;

constexpr double_t const& __get_d() const;

constexpr void __set_l(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_l() ;

constexpr ::cordl_internals::intptr_t const& __get_l() const;

// Ctor Parameters [CppParam { name: "z", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "b", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "c", ty: "char16_t", modifiers: "", def_value: None }, CppParam { name: "s", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "i", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "j", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "f", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "d", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "l", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr jvalue(bool  z, int8_t  b, char16_t  c, int16_t  s, int32_t  i, int64_t  j, float_t  f, double_t  d, ::cordl_internals::intptr_t  l) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit jvalue(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 jvalue()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::jvalue, 0x8>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::jvalue, "UnityEngine", "jvalue");
