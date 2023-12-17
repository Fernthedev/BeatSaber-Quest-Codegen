#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ContactPoint2D)
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
struct ContactPoint2D;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ContactPoint2D);
// Type: UnityEngine::ContactPoint2D
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15933))
// CS Name: ::UnityEngine::ContactPoint2D
struct CORDL_TYPE ContactPoint2D : public ::bs_hook::ValueTypeWrapper<0x38> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field m_Point offset 0x0
 __declspec(property(get=__get_m_Point, put=__set_m_Point)) ::UnityEngine::Vector2  m_Point;

/// @brief Field m_Normal offset 0x8
 __declspec(property(get=__get_m_Normal, put=__set_m_Normal)) ::UnityEngine::Vector2  m_Normal;

/// @brief Field m_RelativeVelocity offset 0x10
 __declspec(property(get=__get_m_RelativeVelocity, put=__set_m_RelativeVelocity)) ::UnityEngine::Vector2  m_RelativeVelocity;

/// @brief Field m_Separation offset 0x18
 __declspec(property(get=__get_m_Separation, put=__set_m_Separation)) float_t  m_Separation;

/// @brief Field m_NormalImpulse offset 0x1c
 __declspec(property(get=__get_m_NormalImpulse, put=__set_m_NormalImpulse)) float_t  m_NormalImpulse;

/// @brief Field m_TangentImpulse offset 0x20
 __declspec(property(get=__get_m_TangentImpulse, put=__set_m_TangentImpulse)) float_t  m_TangentImpulse;

/// @brief Field m_Collider offset 0x24
 __declspec(property(get=__get_m_Collider, put=__set_m_Collider)) int32_t  m_Collider;

/// @brief Field m_OtherCollider offset 0x28
 __declspec(property(get=__get_m_OtherCollider, put=__set_m_OtherCollider)) int32_t  m_OtherCollider;

/// @brief Field m_Rigidbody offset 0x2c
 __declspec(property(get=__get_m_Rigidbody, put=__set_m_Rigidbody)) int32_t  m_Rigidbody;

/// @brief Field m_OtherRigidbody offset 0x30
 __declspec(property(get=__get_m_OtherRigidbody, put=__set_m_OtherRigidbody)) int32_t  m_OtherRigidbody;

/// @brief Field m_Enabled offset 0x34
 __declspec(property(get=__get_m_Enabled, put=__set_m_Enabled)) int32_t  m_Enabled;

constexpr void __set_m_Point(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get_m_Point() ;

constexpr ::UnityEngine::Vector2 const& __get_m_Point() const;

constexpr void __set_m_Normal(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get_m_Normal() ;

constexpr ::UnityEngine::Vector2 const& __get_m_Normal() const;

constexpr void __set_m_RelativeVelocity(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get_m_RelativeVelocity() ;

constexpr ::UnityEngine::Vector2 const& __get_m_RelativeVelocity() const;

constexpr void __set_m_Separation(float_t  value) ;

constexpr float_t& __get_m_Separation() ;

constexpr float_t const& __get_m_Separation() const;

constexpr void __set_m_NormalImpulse(float_t  value) ;

constexpr float_t& __get_m_NormalImpulse() ;

constexpr float_t const& __get_m_NormalImpulse() const;

constexpr void __set_m_TangentImpulse(float_t  value) ;

constexpr float_t& __get_m_TangentImpulse() ;

constexpr float_t const& __get_m_TangentImpulse() const;

constexpr void __set_m_Collider(int32_t  value) ;

constexpr int32_t& __get_m_Collider() ;

constexpr int32_t const& __get_m_Collider() const;

constexpr void __set_m_OtherCollider(int32_t  value) ;

constexpr int32_t& __get_m_OtherCollider() ;

constexpr int32_t const& __get_m_OtherCollider() const;

constexpr void __set_m_Rigidbody(int32_t  value) ;

constexpr int32_t& __get_m_Rigidbody() ;

constexpr int32_t const& __get_m_Rigidbody() const;

constexpr void __set_m_OtherRigidbody(int32_t  value) ;

constexpr int32_t& __get_m_OtherRigidbody() ;

constexpr int32_t const& __get_m_OtherRigidbody() const;

constexpr void __set_m_Enabled(int32_t  value) ;

constexpr int32_t& __get_m_Enabled() ;

constexpr int32_t const& __get_m_Enabled() const;

// Ctor Parameters [CppParam { name: "m_Point", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "m_Normal", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "m_RelativeVelocity", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "m_Separation", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_NormalImpulse", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_TangentImpulse", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Collider", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_OtherCollider", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Rigidbody", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_OtherRigidbody", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Enabled", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ContactPoint2D(::UnityEngine::Vector2  m_Point, ::UnityEngine::Vector2  m_Normal, ::UnityEngine::Vector2  m_RelativeVelocity, float_t  m_Separation, float_t  m_NormalImpulse, float_t  m_TangentImpulse, int32_t  m_Collider, int32_t  m_OtherCollider, int32_t  m_Rigidbody, int32_t  m_OtherRigidbody, int32_t  m_Enabled) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ContactPoint2D(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x38>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ContactPoint2D()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ContactPoint2D, 0x38>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ContactPoint2D, "UnityEngine", "ContactPoint2D");
