#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(SDKQuaternion)
namespace LIV::SDK::Unity {
struct SDKVector3;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace LIV::SDK::Unity {
struct SDKQuaternion;
}
// Write type traits
MARK_VAL_T(::LIV::SDK::Unity::SDKQuaternion);
// Type: LIV.SDK.Unity::SDKQuaternion
namespace LIV::SDK::Unity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15110))
// CS Name: ::LIV.SDK.Unity::SDKQuaternion
struct CORDL_TYPE SDKQuaternion : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field x offset 0x0
 __declspec(property(get=__get_x, put=__set_x)) float_t  x;

/// @brief Field y offset 0x4
 __declspec(property(get=__get_y, put=__set_y)) float_t  y;

/// @brief Field z offset 0x8
 __declspec(property(get=__get_z, put=__set_z)) float_t  z;

/// @brief Field w offset 0xc
 __declspec(property(get=__get_w, put=__set_w)) float_t  w;

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

/// @brief Method get_identity addr 0x2213fec size 0x14 virtual false final false
static inline ::LIV::SDK::Unity::SDKQuaternion get_identity() ;

/// @brief Method op_Implicit addr 0x2214000 size 0x4 virtual false final false
static inline ::UnityEngine::Quaternion op_Implicit___UnityEngine__Quaternion(::LIV::SDK::Unity::SDKQuaternion  v) ;

/// @brief Method op_Implicit addr 0x2213464 size 0x4 virtual false final false
static inline ::LIV::SDK::Unity::SDKQuaternion op_Implicit___LIV__SDK__Unity__SDKQuaternion(::UnityEngine::Quaternion  v) ;

/// @brief Method Euler addr 0x2214004 size 0xb4 virtual false final false
static inline ::LIV::SDK::Unity::SDKQuaternion Euler(float_t  pitch, float_t  yaw, float_t  roll) ;

/// @brief Method op_Multiply addr 0x22140b8 size 0x74 virtual false final false
static inline ::LIV::SDK::Unity::SDKQuaternion op_Multiply(::LIV::SDK::Unity::SDKQuaternion  lhs, ::LIV::SDK::Unity::SDKQuaternion  rhs) ;

/// @brief Method op_Multiply addr 0x221412c size 0xa4 virtual false final false
static inline ::LIV::SDK::Unity::SDKVector3 op_Multiply(::LIV::SDK::Unity::SDKQuaternion  lhs, ::LIV::SDK::Unity::SDKVector3  rhs) ;

/// @brief Method ToString addr 0x22141d0 size 0x1ac virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "z", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "w", ty: "float_t", modifiers: "", def_value: None }]
constexpr SDKQuaternion(float_t  x, float_t  y, float_t  z, float_t  w) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit SDKQuaternion(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 SDKQuaternion()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LIV::SDK::Unity::SDKQuaternion, 0x10>, "Size mismatch!");

} // namespace end def LIV::SDK::Unity
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::SDKQuaternion, "LIV.SDK.Unity", "SDKQuaternion");
