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
CORDL_MODULE_EXPORT(Quaternion)
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
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
struct Quaternion;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Quaternion);
// Type: UnityEngine::Quaternion
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10252))
// CS Name: ::UnityEngine::Quaternion
struct CORDL_TYPE Quaternion : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field kEpsilon offset 0x0
static constexpr float_t  kEpsilon{0.000001};

/// @brief Field x offset 0x0
 __declspec(property(get=__get_x, put=__set_x)) float_t  x;

/// @brief Field y offset 0x4
 __declspec(property(get=__get_y, put=__set_y)) float_t  y;

/// @brief Field z offset 0x8
 __declspec(property(get=__get_z, put=__set_z)) float_t  z;

/// @brief Field w offset 0xc
 __declspec(property(get=__get_w, put=__set_w)) float_t  w;

 __declspec(property(get=get_Item, put=set_Item)) float_t  Item[];

 __declspec(property(get=get_eulerAngles, put=set_eulerAngles)) ::UnityEngine::Vector3  eulerAngles;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Quaternion>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::Quaternion>*() ;

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

constexpr void __set_w(float_t  value) ;

constexpr float_t& __get_w() ;

constexpr float_t const& __get_w() const;

static inline void setStaticF_identityQuaternion(::UnityEngine::Quaternion  value) ;

static inline ::UnityEngine::Quaternion getStaticF_identityQuaternion() ;

/// @brief Method FromToRotation addr 0x2cdb3d8 size 0x60 virtual false final false
static inline ::UnityEngine::Quaternion FromToRotation(::UnityEngine::Vector3  fromDirection, ::UnityEngine::Vector3  toDirection) ;

/// @brief Method Inverse addr 0x2cdb48c size 0x54 virtual false final false
static inline ::UnityEngine::Quaternion Inverse(::UnityEngine::Quaternion  rotation) ;

/// @brief Method Slerp addr 0x2cdb524 size 0x70 virtual false final false
static inline ::UnityEngine::Quaternion Slerp(::UnityEngine::Quaternion  a, ::UnityEngine::Quaternion  b, float_t  t) ;

/// @brief Method SlerpUnclamped addr 0x2cdb5f8 size 0x70 virtual false final false
static inline ::UnityEngine::Quaternion SlerpUnclamped(::UnityEngine::Quaternion  a, ::UnityEngine::Quaternion  b, float_t  t) ;

/// @brief Method Lerp addr 0x2cdb6cc size 0x70 virtual false final false
static inline ::UnityEngine::Quaternion Lerp(::UnityEngine::Quaternion  a, ::UnityEngine::Quaternion  b, float_t  t) ;

/// @brief Method Internal_FromEulerRad addr 0x2cdb7a0 size 0x54 virtual false final false
static inline ::UnityEngine::Quaternion Internal_FromEulerRad(::UnityEngine::Vector3  euler) ;

/// @brief Method Internal_ToEulerRad addr 0x2cdb838 size 0x58 virtual false final false
static inline ::UnityEngine::Vector3 Internal_ToEulerRad(::UnityEngine::Quaternion  rotation) ;

/// @brief Method Internal_ToAxisAngleRad addr 0x2cdb8d4 size 0x5c virtual false final false
static inline void Internal_ToAxisAngleRad(::UnityEngine::Quaternion  q, ByRef<::UnityEngine::Vector3>  axis, ByRef<float_t>  angle) ;

/// @brief Method AngleAxis addr 0x2cdb984 size 0x64 virtual false final false
static inline ::UnityEngine::Quaternion AngleAxis(float_t  angle, ::UnityEngine::Vector3  axis) ;

/// @brief Method LookRotation addr 0x2cdba3c size 0x60 virtual false final false
static inline ::UnityEngine::Quaternion LookRotation(::UnityEngine::Vector3  forward, ::UnityEngine::Vector3  upwards) ;

/// @brief Method LookRotation addr 0x2cdbaf0 size 0x6c virtual false final false
static inline ::UnityEngine::Quaternion LookRotation(::UnityEngine::Vector3  forward) ;

/// @brief Method get_Item addr 0x2cdbb5c size 0x94 virtual false final false
inline float_t get_Item(int32_t  index) ;

/// @brief Method set_Item addr 0x2cdbbf0 size 0x94 virtual false final false
inline void set_Item(int32_t  index, float_t  value) ;

/// @brief Method .ctor addr 0x2cdbc84 size 0xc virtual false final false
inline void _ctor(float_t  x, float_t  y, float_t  z, float_t  w) ;

/// @brief Method get_identity addr 0x2cdbc90 size 0x4c virtual false final false
static inline ::UnityEngine::Quaternion get_identity() ;

/// @brief Method op_Multiply addr 0x2cdbcdc size 0x74 virtual false final false
static inline ::UnityEngine::Quaternion op_Multiply(::UnityEngine::Quaternion  lhs, ::UnityEngine::Quaternion  rhs) ;

/// @brief Method op_Multiply addr 0x2cdbd50 size 0xa4 virtual false final false
static inline ::UnityEngine::Vector3 op_Multiply(::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  point) ;

/// @brief Method IsEqualUsingDot addr 0x2cdbdf4 size 0x14 virtual false final false
static inline bool IsEqualUsingDot(float_t  dot) ;

/// @brief Method op_Equality addr 0x2cdbe08 size 0x30 virtual false final false
static inline bool op_Equality(::UnityEngine::Quaternion  lhs, ::UnityEngine::Quaternion  rhs) ;

/// @brief Method op_Inequality addr 0x2cdbe38 size 0x30 virtual false final false
static inline bool op_Inequality(::UnityEngine::Quaternion  lhs, ::UnityEngine::Quaternion  rhs) ;

/// @brief Method Dot addr 0x2cdbe68 size 0x20 virtual false final false
static inline float_t Dot(::UnityEngine::Quaternion  a, ::UnityEngine::Quaternion  b) ;

/// @brief Method SetLookRotation addr 0x2cdbe88 size 0x84 virtual false final false
inline void SetLookRotation(::UnityEngine::Vector3  view) ;

/// @brief Method SetLookRotation addr 0x2cdbf0c size 0x1c virtual false final false
inline void SetLookRotation(::UnityEngine::Vector3  view, ::UnityEngine::Vector3  up) ;

/// @brief Method Angle addr 0x2cdbf28 size 0x60 virtual false final false
static inline float_t Angle(::UnityEngine::Quaternion  a, ::UnityEngine::Quaternion  b) ;

/// @brief Method Internal_MakePositive addr 0x2cdbf88 size 0x88 virtual false final false
static inline ::UnityEngine::Vector3 Internal_MakePositive(::UnityEngine::Vector3  euler) ;

/// @brief Method get_eulerAngles addr 0x2cdc010 size 0x2c virtual false final false
inline ::UnityEngine::Vector3 get_eulerAngles() ;

/// @brief Method set_eulerAngles addr 0x2cdc03c size 0x30 virtual false final false
inline void set_eulerAngles(::UnityEngine::Vector3  value) ;

/// @brief Method Euler addr 0x2cdc06c size 0x18 virtual false final false
static inline ::UnityEngine::Quaternion Euler(float_t  x, float_t  y, float_t  z) ;

/// @brief Method Euler addr 0x2cdc084 size 0x18 virtual false final false
static inline ::UnityEngine::Quaternion Euler(::UnityEngine::Vector3  euler) ;

/// @brief Method ToAngleAxis addr 0x2cdc09c size 0x34 virtual false final false
inline void ToAngleAxis(ByRef<float_t>  angle, ByRef<::UnityEngine::Vector3>  axis) ;

/// @brief Method RotateTowards addr 0x2cdc0d0 size 0x100 virtual false final false
static inline ::UnityEngine::Quaternion RotateTowards(::UnityEngine::Quaternion  from, ::UnityEngine::Quaternion  to, float_t  maxDegreesDelta) ;

/// @brief Method Normalize addr 0x2cdc1d0 size 0xdc virtual false final false
static inline ::UnityEngine::Quaternion Normalize(::UnityEngine::Quaternion  q) ;

/// @brief Method Normalize addr 0x2cdc2ac size 0xc8 virtual false final false
inline void Normalize() ;

/// @brief Method GetHashCode addr 0x2cdc374 size 0x64 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method Equals addr 0x2cdc3d8 size 0xd4 virtual true final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method Equals addr 0x2cdc4ac size 0x80 virtual true final true
inline bool Equals(::UnityEngine::Quaternion  other) ;

/// @brief Method ToString addr 0x2cdc52c size 0xc virtual true final false
inline ::StringW ToString() ;

/// @brief Method ToString addr 0x2cdc538 size 0x208 virtual true final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method FromToRotation_Injected addr 0x2cdb438 size 0x54 virtual false final false
static inline void FromToRotation_Injected(ByRef<::UnityEngine::Vector3>  fromDirection, ByRef<::UnityEngine::Vector3>  toDirection, ByRef<::UnityEngine::Quaternion>  ret) ;

/// @brief Method Inverse_Injected addr 0x2cdb4e0 size 0x44 virtual false final false
static inline void Inverse_Injected(ByRef<::UnityEngine::Quaternion>  rotation, ByRef<::UnityEngine::Quaternion>  ret) ;

/// @brief Method Slerp_Injected addr 0x2cdb594 size 0x64 virtual false final false
static inline void Slerp_Injected(ByRef<::UnityEngine::Quaternion>  a, ByRef<::UnityEngine::Quaternion>  b, float_t  t, ByRef<::UnityEngine::Quaternion>  ret) ;

/// @brief Method SlerpUnclamped_Injected addr 0x2cdb668 size 0x64 virtual false final false
static inline void SlerpUnclamped_Injected(ByRef<::UnityEngine::Quaternion>  a, ByRef<::UnityEngine::Quaternion>  b, float_t  t, ByRef<::UnityEngine::Quaternion>  ret) ;

/// @brief Method Lerp_Injected addr 0x2cdb73c size 0x64 virtual false final false
static inline void Lerp_Injected(ByRef<::UnityEngine::Quaternion>  a, ByRef<::UnityEngine::Quaternion>  b, float_t  t, ByRef<::UnityEngine::Quaternion>  ret) ;

/// @brief Method Internal_FromEulerRad_Injected addr 0x2cdb7f4 size 0x44 virtual false final false
static inline void Internal_FromEulerRad_Injected(ByRef<::UnityEngine::Vector3>  euler, ByRef<::UnityEngine::Quaternion>  ret) ;

/// @brief Method Internal_ToEulerRad_Injected addr 0x2cdb890 size 0x44 virtual false final false
static inline void Internal_ToEulerRad_Injected(ByRef<::UnityEngine::Quaternion>  rotation, ByRef<::UnityEngine::Vector3>  ret) ;

/// @brief Method Internal_ToAxisAngleRad_Injected addr 0x2cdb930 size 0x54 virtual false final false
static inline void Internal_ToAxisAngleRad_Injected(ByRef<::UnityEngine::Quaternion>  q, ByRef<::UnityEngine::Vector3>  axis, ByRef<float_t>  angle) ;

/// @brief Method AngleAxis_Injected addr 0x2cdb9e8 size 0x54 virtual false final false
static inline void AngleAxis_Injected(float_t  angle, ByRef<::UnityEngine::Vector3>  axis, ByRef<::UnityEngine::Quaternion>  ret) ;

/// @brief Method LookRotation_Injected addr 0x2cdba9c size 0x54 virtual false final false
static inline void LookRotation_Injected(ByRef<::UnityEngine::Vector3>  forward, ByRef<::UnityEngine::Vector3>  upwards, ByRef<::UnityEngine::Quaternion>  ret) ;

// Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "z", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "w", ty: "float_t", modifiers: "", def_value: None }]
constexpr Quaternion(float_t  x, float_t  y, float_t  z, float_t  w) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Quaternion(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Quaternion()  = default;


// Fields

// Static field identityQuaternion


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Quaternion, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Quaternion, "UnityEngine", "Quaternion");
