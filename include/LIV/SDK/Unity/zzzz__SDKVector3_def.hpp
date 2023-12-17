#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(SDKVector3)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace LIV::SDK::Unity {
struct SDKVector3;
}
// Write type traits
MARK_VAL_T(::LIV::SDK::Unity::SDKVector3);
// Type: LIV.SDK.Unity::SDKVector3
namespace LIV::SDK::Unity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15109))
// CS Name: ::LIV.SDK.Unity::SDKVector3
struct CORDL_TYPE SDKVector3 : public ::bs_hook::ValueTypeWrapper<0xc> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field x offset 0x0
 __declspec(property(get=__get_x, put=__set_x)) float_t  x;

/// @brief Field y offset 0x4
 __declspec(property(get=__get_y, put=__set_y)) float_t  y;

/// @brief Field z offset 0x8
 __declspec(property(get=__get_z, put=__set_z)) float_t  z;

constexpr void __set_x(float_t  value) ;

constexpr float_t& __get_x() ;

constexpr float_t const& __get_x() const;

constexpr void __set_y(float_t  value) ;

constexpr float_t& __get_y() ;

constexpr float_t const& __get_y() const;

constexpr void __set_z(float_t  value) ;

constexpr float_t& __get_z() ;

constexpr float_t const& __get_z() const;

/// @brief Method get_zero addr 0x2213e94 size 0x10 virtual false final false
static inline ::LIV::SDK::Unity::SDKVector3 get_zero() ;

/// @brief Method get_one addr 0x2213ea4 size 0x10 virtual false final false
static inline ::LIV::SDK::Unity::SDKVector3 get_one() ;

/// @brief Method get_forward addr 0x2213eb4 size 0x10 virtual false final false
static inline ::LIV::SDK::Unity::SDKVector3 get_forward() ;

/// @brief Method get_up addr 0x2213ec4 size 0x10 virtual false final false
static inline ::LIV::SDK::Unity::SDKVector3 get_up() ;

/// @brief Method get_right addr 0x2213ed4 size 0x10 virtual false final false
static inline ::LIV::SDK::Unity::SDKVector3 get_right() ;

/// @brief Method op_Implicit addr 0x2213ee4 size 0x4 virtual false final false
static inline ::UnityEngine::Vector3 op_Implicit___UnityEngine__Vector3(::LIV::SDK::Unity::SDKVector3  v) ;

/// @brief Method op_Implicit addr 0x2213460 size 0x4 virtual false final false
static inline ::LIV::SDK::Unity::SDKVector3 op_Implicit___LIV__SDK__Unity__SDKVector3(::UnityEngine::Vector3  v) ;

/// @brief Method op_Addition addr 0x2213ee8 size 0x10 virtual false final false
static inline ::LIV::SDK::Unity::SDKVector3 op_Addition(::LIV::SDK::Unity::SDKVector3  lhs, ::LIV::SDK::Unity::SDKVector3  rhs) ;

/// @brief Method op_Subtraction addr 0x2213ef8 size 0x10 virtual false final false
static inline ::LIV::SDK::Unity::SDKVector3 op_Subtraction(::LIV::SDK::Unity::SDKVector3  lhs, ::LIV::SDK::Unity::SDKVector3  rhs) ;

/// @brief Method op_Multiply addr 0x2213f08 size 0x10 virtual false final false
static inline ::LIV::SDK::Unity::SDKVector3 op_Multiply(::LIV::SDK::Unity::SDKVector3  lhs, ::LIV::SDK::Unity::SDKVector3  rhs) ;

/// @brief Method op_Multiply addr 0x2213f18 size 0x10 virtual false final false
static inline ::LIV::SDK::Unity::SDKVector3 op_Multiply(::LIV::SDK::Unity::SDKVector3  lhs, float_t  rhs) ;

/// @brief Method ToString addr 0x2213f28 size 0xc4 virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "z", ty: "float_t", modifiers: "", def_value: None }]
constexpr SDKVector3(float_t  x, float_t  y, float_t  z) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit SDKVector3(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0xc>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 SDKVector3()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LIV::SDK::Unity::SDKVector3, 0xc>, "Size mismatch!");

} // namespace end def LIV::SDK::Unity
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::SDKVector3, "LIV.SDK.Unity", "SDKVector3");
