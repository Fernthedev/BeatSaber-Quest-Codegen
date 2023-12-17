#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Color32)
namespace System {
class IFormattable;
}
namespace System {
class IFormatProvider;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine {
struct Color32;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Color32);
// Type: UnityEngine::Color32
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10250))
// CS Name: ::UnityEngine::Color32
struct CORDL_TYPE Color32 : public ::bs_hook::ValueTypeWrapper<0x4> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field rgba offset 0x0
 __declspec(property(get=__get_rgba, put=__set_rgba)) int32_t  rgba;

/// @brief Field r offset 0x0
 __declspec(property(get=__get_r, put=__set_r)) uint8_t  r;

/// @brief Field g offset 0x1
 __declspec(property(get=__get_g, put=__set_g)) uint8_t  g;

/// @brief Field b offset 0x2
 __declspec(property(get=__get_b, put=__set_b)) uint8_t  b;

/// @brief Field a offset 0x3
 __declspec(property(get=__get_a, put=__set_a)) uint8_t  a;

 __declspec(property(get=get_Item)) uint8_t  Item[];

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

constexpr void __set_rgba(int32_t  value) ;

constexpr int32_t& __get_rgba() ;

constexpr int32_t const& __get_rgba() const;

constexpr void __set_r(uint8_t  value) ;

constexpr uint8_t& __get_r() ;

constexpr uint8_t const& __get_r() const;

constexpr void __set_g(uint8_t  value) ;

constexpr uint8_t& __get_g() ;

constexpr uint8_t const& __get_g() const;

constexpr void __set_b(uint8_t  value) ;

constexpr uint8_t& __get_b() ;

constexpr uint8_t const& __get_b() const;

constexpr void __set_a(uint8_t  value) ;

constexpr uint8_t& __get_a() ;

constexpr uint8_t const& __get_a() const;

/// @brief Method .ctor addr 0x2cda0c8 size 0x14 virtual false final false
inline void _ctor(uint8_t  r, uint8_t  g, uint8_t  b, uint8_t  a) ;

/// @brief Method op_Implicit addr 0x2cda0dc size 0x2c4 virtual false final false
static inline ::UnityEngine::Color32 op_Implicit___UnityEngine__Color32(::UnityEngine::Color  c) ;

/// @brief Method op_Implicit addr 0x2cda3a0 size 0x3c virtual false final false
static inline ::UnityEngine::Color op_Implicit___UnityEngine__Color(::UnityEngine::Color32  c) ;

/// @brief Method Lerp addr 0x2cda3dc size 0xdc virtual false final false
static inline ::UnityEngine::Color32 Lerp(::UnityEngine::Color32  a, ::UnityEngine::Color32  b, float_t  t) ;

/// @brief Method get_Item addr 0x2cda4b8 size 0xd8 virtual false final false
inline uint8_t get_Item(int32_t  index) ;

/// @brief Method ToString addr 0x2cda590 size 0xc virtual true final false
inline ::StringW ToString() ;

/// @brief Method ToString addr 0x2cda59c size 0x1dc virtual true final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

// Ctor Parameters [CppParam { name: "rgba", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "r", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "g", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "b", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "a", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr Color32(int32_t  rgba, uint8_t  r, uint8_t  g, uint8_t  b, uint8_t  a) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Color32(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Color32()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Color32, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Color32, "UnityEngine", "Color32");
