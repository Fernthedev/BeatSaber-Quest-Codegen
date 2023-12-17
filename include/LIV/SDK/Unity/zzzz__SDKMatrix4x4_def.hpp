#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(SDKMatrix4x4)
namespace UnityEngine {
struct Matrix4x4;
}
namespace LIV::SDK::Unity {
struct SDKVector3;
}
namespace LIV::SDK::Unity {
struct SDKQuaternion;
}
// Forward declare root types
namespace LIV::SDK::Unity {
struct SDKMatrix4x4;
}
// Write type traits
MARK_VAL_T(::LIV::SDK::Unity::SDKMatrix4x4);
// Type: LIV.SDK.Unity::SDKMatrix4x4
namespace LIV::SDK::Unity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15111))
// CS Name: ::LIV.SDK.Unity::SDKMatrix4x4
struct CORDL_TYPE SDKMatrix4x4 : public ::bs_hook::ValueTypeWrapper<0x40> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field m00 offset 0x0
 __declspec(property(get=__get_m00, put=__set_m00)) float_t  m00;

/// @brief Field m01 offset 0x4
 __declspec(property(get=__get_m01, put=__set_m01)) float_t  m01;

/// @brief Field m02 offset 0x8
 __declspec(property(get=__get_m02, put=__set_m02)) float_t  m02;

/// @brief Field m03 offset 0xc
 __declspec(property(get=__get_m03, put=__set_m03)) float_t  m03;

/// @brief Field m10 offset 0x10
 __declspec(property(get=__get_m10, put=__set_m10)) float_t  m10;

/// @brief Field m11 offset 0x14
 __declspec(property(get=__get_m11, put=__set_m11)) float_t  m11;

/// @brief Field m12 offset 0x18
 __declspec(property(get=__get_m12, put=__set_m12)) float_t  m12;

/// @brief Field m13 offset 0x1c
 __declspec(property(get=__get_m13, put=__set_m13)) float_t  m13;

/// @brief Field m20 offset 0x20
 __declspec(property(get=__get_m20, put=__set_m20)) float_t  m20;

/// @brief Field m21 offset 0x24
 __declspec(property(get=__get_m21, put=__set_m21)) float_t  m21;

/// @brief Field m22 offset 0x28
 __declspec(property(get=__get_m22, put=__set_m22)) float_t  m22;

/// @brief Field m23 offset 0x2c
 __declspec(property(get=__get_m23, put=__set_m23)) float_t  m23;

/// @brief Field m30 offset 0x30
 __declspec(property(get=__get_m30, put=__set_m30)) float_t  m30;

/// @brief Field m31 offset 0x34
 __declspec(property(get=__get_m31, put=__set_m31)) float_t  m31;

/// @brief Field m32 offset 0x38
 __declspec(property(get=__get_m32, put=__set_m32)) float_t  m32;

/// @brief Field m33 offset 0x3c
 __declspec(property(get=__get_m33, put=__set_m33)) float_t  m33;

constexpr void __set_m00(float_t  value) ;

constexpr float_t& __get_m00() ;

constexpr float_t const& __get_m00() const;

constexpr void __set_m01(float_t  value) ;

constexpr float_t& __get_m01() ;

constexpr float_t const& __get_m01() const;

constexpr void __set_m02(float_t  value) ;

constexpr float_t& __get_m02() ;

constexpr float_t const& __get_m02() const;

constexpr void __set_m03(float_t  value) ;

constexpr float_t& __get_m03() ;

constexpr float_t const& __get_m03() const;

constexpr void __set_m10(float_t  value) ;

constexpr float_t& __get_m10() ;

constexpr float_t const& __get_m10() const;

constexpr void __set_m11(float_t  value) ;

constexpr float_t& __get_m11() ;

constexpr float_t const& __get_m11() const;

constexpr void __set_m12(float_t  value) ;

constexpr float_t& __get_m12() ;

constexpr float_t const& __get_m12() const;

constexpr void __set_m13(float_t  value) ;

constexpr float_t& __get_m13() ;

constexpr float_t const& __get_m13() const;

constexpr void __set_m20(float_t  value) ;

constexpr float_t& __get_m20() ;

constexpr float_t const& __get_m20() const;

constexpr void __set_m21(float_t  value) ;

constexpr float_t& __get_m21() ;

constexpr float_t const& __get_m21() const;

constexpr void __set_m22(float_t  value) ;

constexpr float_t& __get_m22() ;

constexpr float_t const& __get_m22() const;

constexpr void __set_m23(float_t  value) ;

constexpr float_t& __get_m23() ;

constexpr float_t const& __get_m23() const;

constexpr void __set_m30(float_t  value) ;

constexpr float_t& __get_m30() ;

constexpr float_t const& __get_m30() const;

constexpr void __set_m31(float_t  value) ;

constexpr float_t& __get_m31() ;

constexpr float_t const& __get_m31() const;

constexpr void __set_m32(float_t  value) ;

constexpr float_t& __get_m32() ;

constexpr float_t const& __get_m32() const;

constexpr void __set_m33(float_t  value) ;

constexpr float_t& __get_m33() ;

constexpr float_t const& __get_m33() const;

/// @brief Method get_identity addr 0x221437c size 0x2c virtual false final false
static inline ::LIV::SDK::Unity::SDKMatrix4x4 get_identity() ;

/// @brief Method op_Implicit addr 0x221215c size 0x44 virtual false final false
static inline ::UnityEngine::Matrix4x4 op_Implicit___UnityEngine__Matrix4x4(::LIV::SDK::Unity::SDKMatrix4x4  v) ;

/// @brief Method op_Implicit addr 0x2213468 size 0x44 virtual false final false
static inline ::LIV::SDK::Unity::SDKMatrix4x4 op_Implicit___LIV__SDK__Unity__SDKMatrix4x4(::UnityEngine::Matrix4x4  v) ;

/// @brief Method Perspective addr 0x22143a8 size 0xac virtual false final false
static inline ::LIV::SDK::Unity::SDKMatrix4x4 Perspective(float_t  vFov, float_t  aspect, float_t  zNear, float_t  zFar) ;

/// @brief Method op_Multiply addr 0x2214454 size 0x10c virtual false final false
static inline ::LIV::SDK::Unity::SDKMatrix4x4 op_Multiply(::LIV::SDK::Unity::SDKMatrix4x4  lhs, ::LIV::SDK::Unity::SDKMatrix4x4  rhs) ;

/// @brief Method op_Multiply addr 0x2214560 size 0x58 virtual false final false
static inline ::LIV::SDK::Unity::SDKVector3 op_Multiply(::LIV::SDK::Unity::SDKMatrix4x4  lhs, ::LIV::SDK::Unity::SDKVector3  rhs) ;

/// @brief Method Translate addr 0x22145b8 size 0x3c virtual false final false
static inline ::LIV::SDK::Unity::SDKMatrix4x4 Translate(::LIV::SDK::Unity::SDKVector3  value) ;

/// @brief Method Rotate addr 0x22145f4 size 0x94 virtual false final false
static inline ::LIV::SDK::Unity::SDKMatrix4x4 Rotate(::LIV::SDK::Unity::SDKQuaternion  value) ;

/// @brief Method Scale addr 0x2214688 size 0x2c virtual false final false
static inline ::LIV::SDK::Unity::SDKMatrix4x4 Scale(::LIV::SDK::Unity::SDKVector3  value) ;

/// @brief Method TRS addr 0x22146b4 size 0xe4 virtual false final false
static inline ::LIV::SDK::Unity::SDKMatrix4x4 TRS(::LIV::SDK::Unity::SDKVector3  translation, ::LIV::SDK::Unity::SDKQuaternion  rotation, ::LIV::SDK::Unity::SDKVector3  scale) ;

/// @brief Method ToString addr 0x2214798 size 0x4ac virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "m00", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m01", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m02", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m03", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m10", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m11", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m12", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m13", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m20", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m21", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m22", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m23", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m30", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m31", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m32", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m33", ty: "float_t", modifiers: "", def_value: None }]
constexpr SDKMatrix4x4(float_t  m00, float_t  m01, float_t  m02, float_t  m03, float_t  m10, float_t  m11, float_t  m12, float_t  m13, float_t  m20, float_t  m21, float_t  m22, float_t  m23, float_t  m30, float_t  m31, float_t  m32, float_t  m33) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit SDKMatrix4x4(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x40>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 SDKMatrix4x4()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LIV::SDK::Unity::SDKMatrix4x4, 0x40>, "Size mismatch!");

} // namespace end def LIV::SDK::Unity
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::SDKMatrix4x4, "LIV.SDK.Unity", "SDKMatrix4x4");
