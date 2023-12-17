#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TriggerEventBroadcaster)
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace RootMotion {
class TriggerEventBroadcaster;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::TriggerEventBroadcaster);
// Type: RootMotion::TriggerEventBroadcaster
namespace RootMotion {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12500))
// CS Name: ::RootMotion::TriggerEventBroadcaster*
class CORDL_TYPE TriggerEventBroadcaster : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field target offset 0x18
 __declspec(property(get=__get_target, put=__set_target)) ::UnityEngine::GameObject*  target;

constexpr void __set_target(::UnityEngine::GameObject*  value) ;

constexpr ::UnityEngine::GameObject* __get_target() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> __get_target() const;

/// @brief Method OnTriggerEnter addr 0x123f7fc size 0xb4 virtual false final false
inline void OnTriggerEnter(::UnityEngine::Collider*  collider) ;

/// @brief Method OnTriggerStay addr 0x123f8b0 size 0xb4 virtual false final false
inline void OnTriggerStay(::UnityEngine::Collider*  collider) ;

/// @brief Method OnTriggerExit addr 0x123f964 size 0xb4 virtual false final false
inline void OnTriggerExit(::UnityEngine::Collider*  collider) ;

static inline ::RootMotion::TriggerEventBroadcaster* New_ctor() ;

/// @brief Method .ctor addr 0x123fa18 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TriggerEventBroadcaster", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TriggerEventBroadcaster(TriggerEventBroadcaster && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TriggerEventBroadcaster", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TriggerEventBroadcaster(TriggerEventBroadcaster const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TriggerEventBroadcaster()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::TriggerEventBroadcaster, 0x20>, "Size mismatch!");

} // namespace end def RootMotion
NEED_NO_BOX(::RootMotion::TriggerEventBroadcaster);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::TriggerEventBroadcaster*, "RootMotion", "TriggerEventBroadcaster");
