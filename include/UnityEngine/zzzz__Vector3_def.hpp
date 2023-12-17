#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Vector3)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace System {
class IFormatProvider;
}
namespace System {
class IFormattable;
}
// Forward declare root types
namespace UnityEngine {
struct Vector3;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Vector3);
// Type: UnityEngine::Vector3
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10249))
// CS Name: ::UnityEngine::Vector3
struct CORDL_TYPE Vector3 : public ::bs_hook::ValueTypeWrapper<0xc> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field kEpsilon offset 0x0
static constexpr float_t  kEpsilon{0.00001};

/// @brief Field kEpsilonNormalSqrt offset 0x0
static constexpr float_t  kEpsilonNormalSqrt{0.000000000000001};

/// @brief Field x offset 0x0
 __declspec(property(get=__get_x, put=__set_x)) float_t  x;

/// @brief Field y offset 0x4
 __declspec(property(get=__get_y, put=__set_y)) float_t  y;

/// @brief Field z offset 0x8
 __declspec(property(get=__get_z, put=__set_z)) float_t  z;

 __declspec(property(get=get_Item, put=set_Item)) float_t  Item[];

 __declspec(property(get=get_normalized)) ::UnityEngine::Vector3  normalized;

 __declspec(property(get=get_magnitude)) float_t  magnitude;

 __declspec(property(get=get_sqrMagnitude)) float_t  sqrMagnitude;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Vector3>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::Vector3>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

constexpr void __set_x(float_t  value) ;

constexpr float_t& __get_x() ;

constexpr float_t const& __get_x() const;

constexpr void __set_y(float_t  value) ;

constexpr float_t& __get_y() ;

constexpr float_t const& __get_y() const;

constexpr void __set_z(float_t  value) ;

constexpr float_t& __get_z() ;

constexpr float_t const& __get_z() const;

static inline void setStaticF_zeroVector(::UnityEngine::Vector3  value) ;

static inline ::UnityEngine::Vector3 getStaticF_zeroVector() ;

static inline void setStaticF_oneVector(::UnityEngine::Vector3  value) ;

static inline ::UnityEngine::Vector3 getStaticF_oneVector() ;

static inline void setStaticF_upVector(::UnityEngine::Vector3  value) ;

static inline ::UnityEngine::Vector3 getStaticF_upVector() ;

static inline void setStaticF_downVector(::UnityEngine::Vector3  value) ;

static inline ::UnityEngine::Vector3 getStaticF_downVector() ;

static inline void setStaticF_leftVector(::UnityEngine::Vector3  value) ;

static inline ::UnityEngine::Vector3 getStaticF_leftVector() ;

static inline void setStaticF_rightVector(::UnityEngine::Vector3  value) ;

static inline ::UnityEngine::Vector3 getStaticF_rightVector() ;

static inline void setStaticF_forwardVector(::UnityEngine::Vector3  value) ;

static inline ::UnityEngine::Vector3 getStaticF_forwardVector() ;

static inline void setStaticF_backVector(::UnityEngine::Vector3  value) ;

static inline ::UnityEngine::Vector3 getStaticF_backVector() ;

static inline void setStaticF_positiveInfinityVector(::UnityEngine::Vector3  value) ;

static inline ::UnityEngine::Vector3 getStaticF_positiveInfinityVector() ;

static inline void setStaticF_negativeInfinityVector(::UnityEngine::Vector3  value) ;

static inline ::UnityEngine::Vector3 getStaticF_negativeInfinityVector() ;

/// @brief Method Lerp addr 0x2cd8a04 size 0x3c virtual false final false
static inline ::UnityEngine::Vector3 Lerp(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, float_t  t) ;

/// @brief Method LerpUnclamped addr 0x2cd8a40 size 0x28 virtual false final false
static inline ::UnityEngine::Vector3 LerpUnclamped(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, float_t  t) ;

/// @brief Method SmoothDamp addr 0x2cd8a68 size 0x8c virtual false final false
static inline ::UnityEngine::Vector3 SmoothDamp(::UnityEngine::Vector3  current, ::UnityEngine::Vector3  target, ByRef<::UnityEngine::Vector3>  currentVelocity, float_t  smoothTime) ;

/// @brief Method SmoothDamp addr 0x2cd8af4 size 0x23c virtual false final false
static inline ::UnityEngine::Vector3 SmoothDamp(::UnityEngine::Vector3  current, ::UnityEngine::Vector3  target, ByRef<::UnityEngine::Vector3>  currentVelocity, float_t  smoothTime, float_t  maxSpeed, float_t  deltaTime) ;

/// @brief Method get_Item addr 0x2cd8d30 size 0x7c virtual false final false
inline float_t get_Item(int32_t  index) ;

/// @brief Method set_Item addr 0x2cd8dac size 0x7c virtual false final false
inline void set_Item(int32_t  index, float_t  value) ;

/// @brief Method .ctor addr 0x2cd8e28 size 0xc virtual false final false
inline void _ctor(float_t  x, float_t  y, float_t  z) ;

/// @brief Method .ctor addr 0x2cd8e34 size 0xc virtual false final false
inline void _ctor(float_t  x, float_t  y) ;

/// @brief Method Scale addr 0x2cd8e40 size 0x10 virtual false final false
static inline ::UnityEngine::Vector3 Scale(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b) ;

/// @brief Method Scale addr 0x2cd8e50 size 0x20 virtual false final false
inline void Scale(::UnityEngine::Vector3  scale) ;

/// @brief Method Cross addr 0x2cd8e70 size 0x28 virtual false final false
static inline ::UnityEngine::Vector3 Cross(::UnityEngine::Vector3  lhs, ::UnityEngine::Vector3  rhs) ;

/// @brief Method GetHashCode addr 0x2cd8e98 size 0x48 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method Equals addr 0x2cd8ee0 size 0x98 virtual true final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method Equals addr 0x2cd8f78 size 0x30 virtual true final true
inline bool Equals(::UnityEngine::Vector3  other) ;

/// @brief Method Reflect addr 0x2cd8fa8 size 0x38 virtual false final false
static inline ::UnityEngine::Vector3 Reflect(::UnityEngine::Vector3  inDirection, ::UnityEngine::Vector3  inNormal) ;

/// @brief Method Normalize addr 0x2cd8fe0 size 0xd0 virtual false final false
static inline ::UnityEngine::Vector3 Normalize(::UnityEngine::Vector3  value) ;

/// @brief Method Normalize addr 0x2cd90b0 size 0xe8 virtual false final false
inline void Normalize() ;

/// @brief Method get_normalized addr 0x2cd9198 size 0xcc virtual false final false
inline ::UnityEngine::Vector3 get_normalized() ;

/// @brief Method Dot addr 0x2cd9264 size 0x18 virtual false final false
static inline float_t Dot(::UnityEngine::Vector3  lhs, ::UnityEngine::Vector3  rhs) ;

/// @brief Method Project addr 0x2cd927c size 0xfc virtual false final false
static inline ::UnityEngine::Vector3 Project(::UnityEngine::Vector3  vector, ::UnityEngine::Vector3  onNormal) ;

/// @brief Method ProjectOnPlane addr 0x2cd9378 size 0xd8 virtual false final false
static inline ::UnityEngine::Vector3 ProjectOnPlane(::UnityEngine::Vector3  vector, ::UnityEngine::Vector3  planeNormal) ;

/// @brief Method Angle addr 0x2cd9450 size 0x11c virtual false final false
static inline float_t Angle(::UnityEngine::Vector3  from, ::UnityEngine::Vector3  to) ;

/// @brief Method Distance addr 0x2cd956c size 0xa0 virtual false final false
static inline float_t Distance(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b) ;

/// @brief Method ClampMagnitude addr 0x2cd960c size 0xb4 virtual false final false
static inline ::UnityEngine::Vector3 ClampMagnitude(::UnityEngine::Vector3  vector, float_t  maxLength) ;

/// @brief Method Magnitude addr 0x2cd96c0 size 0x80 virtual false final false
static inline float_t Magnitude(::UnityEngine::Vector3  vector) ;

/// @brief Method get_magnitude addr 0x2cd9740 size 0x80 virtual false final false
inline float_t get_magnitude() ;

/// @brief Method SqrMagnitude addr 0x2cd97c0 size 0x18 virtual false final false
static inline float_t SqrMagnitude(::UnityEngine::Vector3  vector) ;

/// @brief Method get_sqrMagnitude addr 0x2cd97d8 size 0x20 virtual false final false
inline float_t get_sqrMagnitude() ;

/// @brief Method Min addr 0x2cd97f8 size 0x1c virtual false final false
static inline ::UnityEngine::Vector3 Min(::UnityEngine::Vector3  lhs, ::UnityEngine::Vector3  rhs) ;

/// @brief Method Max addr 0x2cd9814 size 0x1c virtual false final false
static inline ::UnityEngine::Vector3 Max(::UnityEngine::Vector3  lhs, ::UnityEngine::Vector3  rhs) ;

/// @brief Method get_zero addr 0x2cd9830 size 0x4c virtual false final false
static inline ::UnityEngine::Vector3 get_zero() ;

/// @brief Method get_one addr 0x2cd987c size 0x4c virtual false final false
static inline ::UnityEngine::Vector3 get_one() ;

/// @brief Method get_forward addr 0x2cd98c8 size 0x4c virtual false final false
static inline ::UnityEngine::Vector3 get_forward() ;

/// @brief Method get_back addr 0x2cd9914 size 0x4c virtual false final false
static inline ::UnityEngine::Vector3 get_back() ;

/// @brief Method get_up addr 0x2cd9960 size 0x4c virtual false final false
static inline ::UnityEngine::Vector3 get_up() ;

/// @brief Method get_down addr 0x2cd99ac size 0x4c virtual false final false
static inline ::UnityEngine::Vector3 get_down() ;

/// @brief Method get_left addr 0x2cd99f8 size 0x4c virtual false final false
static inline ::UnityEngine::Vector3 get_left() ;

/// @brief Method get_right addr 0x2cd9a44 size 0x4c virtual false final false
static inline ::UnityEngine::Vector3 get_right() ;

/// @brief Method get_positiveInfinity addr 0x2cd9a90 size 0x4c virtual false final false
static inline ::UnityEngine::Vector3 get_positiveInfinity() ;

/// @brief Method op_Addition addr 0x2cd9adc size 0x10 virtual false final false
static inline ::UnityEngine::Vector3 op_Addition(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b) ;

/// @brief Method op_Subtraction addr 0x2cd9aec size 0x10 virtual false final false
static inline ::UnityEngine::Vector3 op_Subtraction(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b) ;

/// @brief Method op_UnaryNegation addr 0x2cd9afc size 0x10 virtual false final false
static inline ::UnityEngine::Vector3 op_UnaryNegation(::UnityEngine::Vector3  a) ;

/// @brief Method op_Multiply addr 0x2cd9b0c size 0x10 virtual false final false
static inline ::UnityEngine::Vector3 op_Multiply(::UnityEngine::Vector3  a, float_t  d) ;

/// @brief Method op_Multiply addr 0x2cd9b1c size 0x14 virtual false final false
static inline ::UnityEngine::Vector3 op_Multiply(float_t  d, ::UnityEngine::Vector3  a) ;

/// @brief Method op_Division addr 0x2cd9b30 size 0x10 virtual false final false
static inline ::UnityEngine::Vector3 op_Division(::UnityEngine::Vector3  a, float_t  d) ;

/// @brief Method op_Equality addr 0x2cd9b40 size 0x34 virtual false final false
static inline bool op_Equality(::UnityEngine::Vector3  lhs, ::UnityEngine::Vector3  rhs) ;

/// @brief Method op_Inequality addr 0x2cd9b74 size 0x34 virtual false final false
static inline bool op_Inequality(::UnityEngine::Vector3  lhs, ::UnityEngine::Vector3  rhs) ;

/// @brief Method ToString addr 0x2cd9ba8 size 0xc virtual true final false
inline ::StringW ToString() ;

/// @brief Method ToString addr 0x2cd9d7c size 0x8 virtual false final false
inline ::StringW ToString(::StringW  format) ;

/// @brief Method ToString addr 0x2cd9bb4 size 0x1c8 virtual true final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method Slerp addr 0x2cd9d84 size 0x74 virtual false final false
static inline ::UnityEngine::Vector3 Slerp(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, float_t  t) ;

/// @brief Method OrthoNormalize2 addr 0x2cd9e5c size 0x44 virtual false final false
static inline void OrthoNormalize2(ByRef<::UnityEngine::Vector3>  a, ByRef<::UnityEngine::Vector3>  b) ;

/// @brief Method OrthoNormalize addr 0x2cd9ea0 size 0x44 virtual false final false
static inline void OrthoNormalize(ByRef<::UnityEngine::Vector3>  normal, ByRef<::UnityEngine::Vector3>  tangent) ;

/// @brief Method RotateTowards addr 0x2cd9ee4 size 0x7c virtual false final false
static inline ::UnityEngine::Vector3 RotateTowards(::UnityEngine::Vector3  current, ::UnityEngine::Vector3  target, float_t  maxRadiansDelta, float_t  maxMagnitudeDelta) ;

/// @brief Method Slerp_Injected addr 0x2cd9df8 size 0x64 virtual false final false
static inline void Slerp_Injected(ByRef<::UnityEngine::Vector3>  a, ByRef<::UnityEngine::Vector3>  b, float_t  t, ByRef<::UnityEngine::Vector3>  ret) ;

/// @brief Method RotateTowards_Injected addr 0x2cd9f60 size 0x6c virtual false final false
static inline void RotateTowards_Injected(ByRef<::UnityEngine::Vector3>  current, ByRef<::UnityEngine::Vector3>  target, float_t  maxRadiansDelta, float_t  maxMagnitudeDelta, ByRef<::UnityEngine::Vector3>  ret) ;

// Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "z", ty: "float_t", modifiers: "", def_value: None }]
constexpr Vector3(float_t  x, float_t  y, float_t  z) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Vector3(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0xc>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Vector3()  = default;


// Fields

// Static field zeroVector

// Static field oneVector

// Static field upVector

// Static field downVector

// Static field leftVector

// Static field rightVector

// Static field forwardVector

// Static field backVector

// Static field positiveInfinityVector

// Static field negativeInfinityVector


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Vector3, 0xc>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Vector3, "UnityEngine", "Vector3");
