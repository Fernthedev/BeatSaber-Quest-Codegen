#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Collision)
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct ContactPoint;
}
namespace UnityEngine {
class Component;
}
// Forward declare root types
namespace UnityEngine {
class Collision;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Collision);
// Type: UnityEngine::Collision
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15491))
// CS Name: ::UnityEngine::Collision*
class CORDL_TYPE Collision : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::System::Object)]{};

/// @brief Field m_Impulse offset 0x10
 __declspec(property(get=__get_m_Impulse, put=__set_m_Impulse)) ::UnityEngine::Vector3  m_Impulse;

/// @brief Field m_RelativeVelocity offset 0x1c
 __declspec(property(get=__get_m_RelativeVelocity, put=__set_m_RelativeVelocity)) ::UnityEngine::Vector3  m_RelativeVelocity;

/// @brief Field m_Body offset 0x28
 __declspec(property(get=__get_m_Body, put=__set_m_Body)) ::UnityEngine::Component*  m_Body;

/// @brief Field m_Collider offset 0x30
 __declspec(property(get=__get_m_Collider, put=__set_m_Collider)) ::UnityEngine::Collider*  m_Collider;

/// @brief Field m_ContactCount offset 0x38
 __declspec(property(get=__get_m_ContactCount, put=__set_m_ContactCount)) int32_t  m_ContactCount;

/// @brief Field m_ReusedContacts offset 0x40
 __declspec(property(get=__get_m_ReusedContacts, put=__set_m_ReusedContacts)) ::ArrayW<::UnityEngine::ContactPoint,::Array<::UnityEngine::ContactPoint>*>  m_ReusedContacts;

/// @brief Field m_LegacyContacts offset 0x48
 __declspec(property(get=__get_m_LegacyContacts, put=__set_m_LegacyContacts)) ::ArrayW<::UnityEngine::ContactPoint,::Array<::UnityEngine::ContactPoint>*>  m_LegacyContacts;

constexpr void __set_m_Impulse(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_m_Impulse() ;

constexpr ::UnityEngine::Vector3 const& __get_m_Impulse() const;

constexpr void __set_m_RelativeVelocity(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_m_RelativeVelocity() ;

constexpr ::UnityEngine::Vector3 const& __get_m_RelativeVelocity() const;

constexpr void __set_m_Body(::UnityEngine::Component*  value) ;

constexpr ::UnityEngine::Component* __get_m_Body() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Component*> __get_m_Body() const;

constexpr void __set_m_Collider(::UnityEngine::Collider*  value) ;

constexpr ::UnityEngine::Collider* __get_m_Collider() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Collider*> __get_m_Collider() const;

constexpr void __set_m_ContactCount(int32_t  value) ;

constexpr int32_t& __get_m_ContactCount() ;

constexpr int32_t const& __get_m_ContactCount() const;

constexpr void __set_m_ReusedContacts(::ArrayW<::UnityEngine::ContactPoint,::Array<::UnityEngine::ContactPoint>*>  value) ;

constexpr ::ArrayW<::UnityEngine::ContactPoint,::Array<::UnityEngine::ContactPoint>*>& __get_m_ReusedContacts() ;

constexpr ::ArrayW<::UnityEngine::ContactPoint,::Array<::UnityEngine::ContactPoint>*> const& __get_m_ReusedContacts() const;

constexpr void __set_m_LegacyContacts(::ArrayW<::UnityEngine::ContactPoint,::Array<::UnityEngine::ContactPoint>*>  value) ;

constexpr ::ArrayW<::UnityEngine::ContactPoint,::Array<::UnityEngine::ContactPoint>*>& __get_m_LegacyContacts() ;

constexpr ::ArrayW<::UnityEngine::ContactPoint,::Array<::UnityEngine::ContactPoint>*> const& __get_m_LegacyContacts() const;

// Ctor Parameters [CppParam { name: "", ty: "Collision", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Collision(Collision && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Collision", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Collision(Collision const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Collision()  = default;
public:


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Collision, 0x50>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::Collision);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Collision*, "UnityEngine", "Collision");
