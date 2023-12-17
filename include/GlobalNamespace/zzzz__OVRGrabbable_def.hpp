#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(OVRGrabbable)
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Rigidbody;
}
namespace GlobalNamespace {
class OVRGrabber;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRGrabbable;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRGrabbable);
// Type: ::OVRGrabbable
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8110))
// CS Name: ::OVRGrabbable*
class CORDL_TYPE OVRGrabbable : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field m_allowOffhandGrab offset 0x18
 __declspec(property(get=__get_m_allowOffhandGrab, put=__set_m_allowOffhandGrab)) bool  m_allowOffhandGrab;

/// @brief Field m_snapPosition offset 0x19
 __declspec(property(get=__get_m_snapPosition, put=__set_m_snapPosition)) bool  m_snapPosition;

/// @brief Field m_snapOrientation offset 0x1a
 __declspec(property(get=__get_m_snapOrientation, put=__set_m_snapOrientation)) bool  m_snapOrientation;

/// @brief Field m_snapOffset offset 0x20
 __declspec(property(get=__get_m_snapOffset, put=__set_m_snapOffset)) ::UnityEngine::Transform*  m_snapOffset;

/// @brief Field m_grabPoints offset 0x28
 __declspec(property(get=__get_m_grabPoints, put=__set_m_grabPoints)) ::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*>  m_grabPoints;

/// @brief Field m_grabbedKinematic offset 0x30
 __declspec(property(get=__get_m_grabbedKinematic, put=__set_m_grabbedKinematic)) bool  m_grabbedKinematic;

/// @brief Field m_grabbedCollider offset 0x38
 __declspec(property(get=__get_m_grabbedCollider, put=__set_m_grabbedCollider)) ::UnityEngine::Collider*  m_grabbedCollider;

/// @brief Field m_grabbedBy offset 0x40
 __declspec(property(get=__get_m_grabbedBy, put=__set_m_grabbedBy)) ::GlobalNamespace::OVRGrabber*  m_grabbedBy;

 __declspec(property(get=get_allowOffhandGrab)) bool  allowOffhandGrab;

 __declspec(property(get=get_isGrabbed)) bool  isGrabbed;

 __declspec(property(get=get_snapPosition)) bool  snapPosition;

 __declspec(property(get=get_snapOrientation)) bool  snapOrientation;

 __declspec(property(get=get_snapOffset)) ::UnityEngine::Transform*  snapOffset;

 __declspec(property(get=get_grabbedBy)) ::GlobalNamespace::OVRGrabber*  grabbedBy;

 __declspec(property(get=get_grabbedTransform)) ::UnityEngine::Transform*  grabbedTransform;

 __declspec(property(get=get_grabbedRigidbody)) ::UnityEngine::Rigidbody*  grabbedRigidbody;

 __declspec(property(get=get_grabPoints)) ::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*>  grabPoints;

constexpr void __set_m_allowOffhandGrab(bool  value) ;

constexpr bool& __get_m_allowOffhandGrab() ;

constexpr bool const& __get_m_allowOffhandGrab() const;

constexpr void __set_m_snapPosition(bool  value) ;

constexpr bool& __get_m_snapPosition() ;

constexpr bool const& __get_m_snapPosition() const;

constexpr void __set_m_snapOrientation(bool  value) ;

constexpr bool& __get_m_snapOrientation() ;

constexpr bool const& __get_m_snapOrientation() const;

constexpr void __set_m_snapOffset(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get_m_snapOffset() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get_m_snapOffset() const;

constexpr void __set_m_grabPoints(::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*>& __get_m_grabPoints() ;

constexpr ::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*> const& __get_m_grabPoints() const;

constexpr void __set_m_grabbedKinematic(bool  value) ;

constexpr bool& __get_m_grabbedKinematic() ;

constexpr bool const& __get_m_grabbedKinematic() const;

constexpr void __set_m_grabbedCollider(::UnityEngine::Collider*  value) ;

constexpr ::UnityEngine::Collider* __get_m_grabbedCollider() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Collider*> __get_m_grabbedCollider() const;

constexpr void __set_m_grabbedBy(::GlobalNamespace::OVRGrabber*  value) ;

constexpr ::GlobalNamespace::OVRGrabber* __get_m_grabbedBy() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRGrabber*> __get_m_grabbedBy() const;

/// @brief Method get_allowOffhandGrab addr 0x27ac7e4 size 0x8 virtual false final false
inline bool get_allowOffhandGrab() ;

/// @brief Method get_isGrabbed addr 0x27ac7ec size 0x60 virtual false final false
inline bool get_isGrabbed() ;

/// @brief Method get_snapPosition addr 0x27ac84c size 0x8 virtual false final false
inline bool get_snapPosition() ;

/// @brief Method get_snapOrientation addr 0x27ac854 size 0x8 virtual false final false
inline bool get_snapOrientation() ;

/// @brief Method get_snapOffset addr 0x27ac85c size 0x8 virtual false final false
inline ::UnityEngine::Transform* get_snapOffset() ;

/// @brief Method get_grabbedBy addr 0x27ac864 size 0x8 virtual false final false
inline ::GlobalNamespace::OVRGrabber* get_grabbedBy() ;

/// @brief Method get_grabbedTransform addr 0x27ac86c size 0x1c virtual false final false
inline ::UnityEngine::Transform* get_grabbedTransform() ;

/// @brief Method get_grabbedRigidbody addr 0x27ac888 size 0x1c virtual false final false
inline ::UnityEngine::Rigidbody* get_grabbedRigidbody() ;

/// @brief Method get_grabPoints addr 0x27ac8a4 size 0x8 virtual false final false
inline ::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*> get_grabPoints() ;

/// @brief Method GrabBegin addr 0x27ac8ac size 0x7c virtual true final false
inline void GrabBegin(::GlobalNamespace::OVRGrabber*  hand, ::UnityEngine::Collider*  grabPoint) ;

/// @brief Method GrabEnd addr 0x27ac928 size 0xd4 virtual true final false
inline void GrabEnd(::UnityEngine::Vector3  linearVelocity, ::UnityEngine::Vector3  angularVelocity) ;

/// @brief Method Awake addr 0x27ac9fc size 0x14c virtual false final false
inline void Awake() ;

/// @brief Method Start addr 0x27acb48 size 0x64 virtual true final false
inline void Start() ;

/// @brief Method OnDestroy addr 0x27acbac size 0x84 virtual false final false
inline void OnDestroy() ;

static inline ::GlobalNamespace::OVRGrabbable* New_ctor() ;

/// @brief Method .ctor addr 0x27acce0 size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OVRGrabbable", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRGrabbable(OVRGrabbable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRGrabbable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRGrabbable(OVRGrabbable const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OVRGrabbable()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRGrabbable, 0x48>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRGrabbable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRGrabbable*, "", "OVRGrabbable");
