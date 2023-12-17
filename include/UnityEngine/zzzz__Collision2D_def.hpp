#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Collision2D)
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct ContactPoint2D;
}
// Forward declare root types
namespace UnityEngine {
class Collision2D;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Collision2D);
// Type: UnityEngine::Collision2D
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15932))
// CS Name: ::UnityEngine::Collision2D*
class CORDL_TYPE Collision2D : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::System::Object)]{};

/// @brief Field m_Collider offset 0x10
 __declspec(property(get=__get_m_Collider, put=__set_m_Collider)) int32_t  m_Collider;

/// @brief Field m_OtherCollider offset 0x14
 __declspec(property(get=__get_m_OtherCollider, put=__set_m_OtherCollider)) int32_t  m_OtherCollider;

/// @brief Field m_Rigidbody offset 0x18
 __declspec(property(get=__get_m_Rigidbody, put=__set_m_Rigidbody)) int32_t  m_Rigidbody;

/// @brief Field m_OtherRigidbody offset 0x1c
 __declspec(property(get=__get_m_OtherRigidbody, put=__set_m_OtherRigidbody)) int32_t  m_OtherRigidbody;

/// @brief Field m_RelativeVelocity offset 0x20
 __declspec(property(get=__get_m_RelativeVelocity, put=__set_m_RelativeVelocity)) ::UnityEngine::Vector2  m_RelativeVelocity;

/// @brief Field m_Enabled offset 0x28
 __declspec(property(get=__get_m_Enabled, put=__set_m_Enabled)) int32_t  m_Enabled;

/// @brief Field m_ContactCount offset 0x2c
 __declspec(property(get=__get_m_ContactCount, put=__set_m_ContactCount)) int32_t  m_ContactCount;

/// @brief Field m_ReusedContacts offset 0x30
 __declspec(property(get=__get_m_ReusedContacts, put=__set_m_ReusedContacts)) ::ArrayW<::UnityEngine::ContactPoint2D,::Array<::UnityEngine::ContactPoint2D>*>  m_ReusedContacts;

/// @brief Field m_LegacyContacts offset 0x38
 __declspec(property(get=__get_m_LegacyContacts, put=__set_m_LegacyContacts)) ::ArrayW<::UnityEngine::ContactPoint2D,::Array<::UnityEngine::ContactPoint2D>*>  m_LegacyContacts;

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

constexpr void __set_m_RelativeVelocity(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get_m_RelativeVelocity() ;

constexpr ::UnityEngine::Vector2 const& __get_m_RelativeVelocity() const;

constexpr void __set_m_Enabled(int32_t  value) ;

constexpr int32_t& __get_m_Enabled() ;

constexpr int32_t const& __get_m_Enabled() const;

constexpr void __set_m_ContactCount(int32_t  value) ;

constexpr int32_t& __get_m_ContactCount() ;

constexpr int32_t const& __get_m_ContactCount() const;

constexpr void __set_m_ReusedContacts(::ArrayW<::UnityEngine::ContactPoint2D,::Array<::UnityEngine::ContactPoint2D>*>  value) ;

constexpr ::ArrayW<::UnityEngine::ContactPoint2D,::Array<::UnityEngine::ContactPoint2D>*>& __get_m_ReusedContacts() ;

constexpr ::ArrayW<::UnityEngine::ContactPoint2D,::Array<::UnityEngine::ContactPoint2D>*> const& __get_m_ReusedContacts() const;

constexpr void __set_m_LegacyContacts(::ArrayW<::UnityEngine::ContactPoint2D,::Array<::UnityEngine::ContactPoint2D>*>  value) ;

constexpr ::ArrayW<::UnityEngine::ContactPoint2D,::Array<::UnityEngine::ContactPoint2D>*>& __get_m_LegacyContacts() ;

constexpr ::ArrayW<::UnityEngine::ContactPoint2D,::Array<::UnityEngine::ContactPoint2D>*> const& __get_m_LegacyContacts() const;

// Ctor Parameters [CppParam { name: "", ty: "Collision2D", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Collision2D(Collision2D && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Collision2D", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Collision2D(Collision2D const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Collision2D()  = default;
public:


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Collision2D, 0x40>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::Collision2D);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Collision2D*, "UnityEngine", "Collision2D");
