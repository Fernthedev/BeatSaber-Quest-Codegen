#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRGrabber)
namespace GlobalNamespace {
class OVRGrabbable;
}
namespace UnityEngine {
class Transform;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
struct Quaternion;
}
namespace GlobalNamespace {
class OVRCameraRig;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
struct __OVRInput__Controller;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRGrabber;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRGrabber);
// Type: ::OVRGrabber
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8111))
// CS Name: ::OVRGrabber*
class CORDL_TYPE OVRGrabber : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xc8};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xc8 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field grabBegin offset 0x18
 __declspec(property(get=__get_grabBegin, put=__set_grabBegin)) float_t  grabBegin;

/// @brief Field grabEnd offset 0x1c
 __declspec(property(get=__get_grabEnd, put=__set_grabEnd)) float_t  grabEnd;

/// @brief Field m_parentHeldObject offset 0x20
 __declspec(property(get=__get_m_parentHeldObject, put=__set_m_parentHeldObject)) bool  m_parentHeldObject;

/// @brief Field m_moveHandPosition offset 0x21
 __declspec(property(get=__get_m_moveHandPosition, put=__set_m_moveHandPosition)) bool  m_moveHandPosition;

/// @brief Field m_gripTransform offset 0x28
 __declspec(property(get=__get_m_gripTransform, put=__set_m_gripTransform)) ::UnityEngine::Transform*  m_gripTransform;

/// @brief Field m_grabVolumes offset 0x30
 __declspec(property(get=__get_m_grabVolumes, put=__set_m_grabVolumes)) ::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*>  m_grabVolumes;

/// @brief Field m_controller offset 0x38
 __declspec(property(get=__get_m_controller, put=__set_m_controller)) ::GlobalNamespace::__OVRInput__Controller  m_controller;

/// @brief Field m_parentTransform offset 0x40
 __declspec(property(get=__get_m_parentTransform, put=__set_m_parentTransform)) ::UnityEngine::Transform*  m_parentTransform;

/// @brief Field m_player offset 0x48
 __declspec(property(get=__get_m_player, put=__set_m_player)) ::UnityEngine::GameObject*  m_player;

/// @brief Field m_grabVolumeEnabled offset 0x50
 __declspec(property(get=__get_m_grabVolumeEnabled, put=__set_m_grabVolumeEnabled)) bool  m_grabVolumeEnabled;

/// @brief Field m_lastPos offset 0x54
 __declspec(property(get=__get_m_lastPos, put=__set_m_lastPos)) ::UnityEngine::Vector3  m_lastPos;

/// @brief Field m_lastRot offset 0x60
 __declspec(property(get=__get_m_lastRot, put=__set_m_lastRot)) ::UnityEngine::Quaternion  m_lastRot;

/// @brief Field m_anchorOffsetRotation offset 0x70
 __declspec(property(get=__get_m_anchorOffsetRotation, put=__set_m_anchorOffsetRotation)) ::UnityEngine::Quaternion  m_anchorOffsetRotation;

/// @brief Field m_anchorOffsetPosition offset 0x80
 __declspec(property(get=__get_m_anchorOffsetPosition, put=__set_m_anchorOffsetPosition)) ::UnityEngine::Vector3  m_anchorOffsetPosition;

/// @brief Field m_prevFlex offset 0x8c
 __declspec(property(get=__get_m_prevFlex, put=__set_m_prevFlex)) float_t  m_prevFlex;

/// @brief Field m_grabbedObj offset 0x90
 __declspec(property(get=__get_m_grabbedObj, put=__set_m_grabbedObj)) ::GlobalNamespace::OVRGrabbable*  m_grabbedObj;

/// @brief Field m_grabbedObjectPosOff offset 0x98
 __declspec(property(get=__get_m_grabbedObjectPosOff, put=__set_m_grabbedObjectPosOff)) ::UnityEngine::Vector3  m_grabbedObjectPosOff;

/// @brief Field m_grabbedObjectRotOff offset 0xa4
 __declspec(property(get=__get_m_grabbedObjectRotOff, put=__set_m_grabbedObjectRotOff)) ::UnityEngine::Quaternion  m_grabbedObjectRotOff;

/// @brief Field m_grabCandidates offset 0xb8
 __declspec(property(get=__get_m_grabCandidates, put=__set_m_grabCandidates)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGrabbable*,int32_t>*  m_grabCandidates;

/// @brief Field m_operatingWithoutOVRCameraRig offset 0xc0
 __declspec(property(get=__get_m_operatingWithoutOVRCameraRig, put=__set_m_operatingWithoutOVRCameraRig)) bool  m_operatingWithoutOVRCameraRig;

 __declspec(property(get=get_grabbedObject)) ::GlobalNamespace::OVRGrabbable*  grabbedObject;

constexpr void __set_grabBegin(float_t  value) ;

constexpr float_t& __get_grabBegin() ;

constexpr float_t const& __get_grabBegin() const;

constexpr void __set_grabEnd(float_t  value) ;

constexpr float_t& __get_grabEnd() ;

constexpr float_t const& __get_grabEnd() const;

constexpr void __set_m_parentHeldObject(bool  value) ;

constexpr bool& __get_m_parentHeldObject() ;

constexpr bool const& __get_m_parentHeldObject() const;

constexpr void __set_m_moveHandPosition(bool  value) ;

constexpr bool& __get_m_moveHandPosition() ;

constexpr bool const& __get_m_moveHandPosition() const;

constexpr void __set_m_gripTransform(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get_m_gripTransform() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get_m_gripTransform() const;

constexpr void __set_m_grabVolumes(::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*>& __get_m_grabVolumes() ;

constexpr ::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*> const& __get_m_grabVolumes() const;

constexpr void __set_m_controller(::GlobalNamespace::__OVRInput__Controller  value) ;

constexpr ::GlobalNamespace::__OVRInput__Controller& __get_m_controller() ;

constexpr ::GlobalNamespace::__OVRInput__Controller const& __get_m_controller() const;

constexpr void __set_m_parentTransform(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get_m_parentTransform() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get_m_parentTransform() const;

constexpr void __set_m_player(::UnityEngine::GameObject*  value) ;

constexpr ::UnityEngine::GameObject* __get_m_player() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> __get_m_player() const;

constexpr void __set_m_grabVolumeEnabled(bool  value) ;

constexpr bool& __get_m_grabVolumeEnabled() ;

constexpr bool const& __get_m_grabVolumeEnabled() const;

constexpr void __set_m_lastPos(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_m_lastPos() ;

constexpr ::UnityEngine::Vector3 const& __get_m_lastPos() const;

constexpr void __set_m_lastRot(::UnityEngine::Quaternion  value) ;

constexpr ::UnityEngine::Quaternion& __get_m_lastRot() ;

constexpr ::UnityEngine::Quaternion const& __get_m_lastRot() const;

constexpr void __set_m_anchorOffsetRotation(::UnityEngine::Quaternion  value) ;

constexpr ::UnityEngine::Quaternion& __get_m_anchorOffsetRotation() ;

constexpr ::UnityEngine::Quaternion const& __get_m_anchorOffsetRotation() const;

constexpr void __set_m_anchorOffsetPosition(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_m_anchorOffsetPosition() ;

constexpr ::UnityEngine::Vector3 const& __get_m_anchorOffsetPosition() const;

constexpr void __set_m_prevFlex(float_t  value) ;

constexpr float_t& __get_m_prevFlex() ;

constexpr float_t const& __get_m_prevFlex() const;

constexpr void __set_m_grabbedObj(::GlobalNamespace::OVRGrabbable*  value) ;

constexpr ::GlobalNamespace::OVRGrabbable* __get_m_grabbedObj() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRGrabbable*> __get_m_grabbedObj() const;

constexpr void __set_m_grabbedObjectPosOff(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_m_grabbedObjectPosOff() ;

constexpr ::UnityEngine::Vector3 const& __get_m_grabbedObjectPosOff() const;

constexpr void __set_m_grabbedObjectRotOff(::UnityEngine::Quaternion  value) ;

constexpr ::UnityEngine::Quaternion& __get_m_grabbedObjectRotOff() ;

constexpr ::UnityEngine::Quaternion const& __get_m_grabbedObjectRotOff() const;

constexpr void __set_m_grabCandidates(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGrabbable*,int32_t>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGrabbable*,int32_t>* __get_m_grabCandidates() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGrabbable*,int32_t>*> __get_m_grabCandidates() const;

constexpr void __set_m_operatingWithoutOVRCameraRig(bool  value) ;

constexpr bool& __get_m_operatingWithoutOVRCameraRig() ;

constexpr bool const& __get_m_operatingWithoutOVRCameraRig() const;

/// @brief Method get_grabbedObject addr 0x27accf0 size 0x8 virtual false final false
inline ::GlobalNamespace::OVRGrabbable* get_grabbedObject() ;

/// @brief Method ForceRelease addr 0x27acc30 size 0xb0 virtual false final false
inline void ForceRelease(::GlobalNamespace::OVRGrabbable*  grabbable) ;

/// @brief Method Awake addr 0x27acf60 size 0x144 virtual true final false
inline void Awake() ;

/// @brief Method Start addr 0x27ad0a4 size 0xe0 virtual true final false
inline void Start() ;

/// @brief Method Update addr 0x27ad2fc size 0x10 virtual true final false
inline void Update() ;

/// @brief Method OnUpdatedAnchors addr 0x27ad30c size 0x224 virtual false final false
inline void OnUpdatedAnchors() ;

/// @brief Method OnDestroy addr 0x27ad570 size 0x78 virtual false final false
inline void OnDestroy() ;

/// @brief Method OnTriggerEnter addr 0x27ad5e8 size 0x128 virtual false final false
inline void OnTriggerEnter(::UnityEngine::Collider*  otherCollider) ;

/// @brief Method OnTriggerExit addr 0x27ad710 size 0x15c virtual false final false
inline void OnTriggerExit(::UnityEngine::Collider*  otherCollider) ;

/// @brief Method CheckForGrabOrRelease addr 0x27ad530 size 0x40 virtual false final false
inline void CheckForGrabOrRelease(float_t  prevFlex) ;

/// @brief Method GrabBegin addr 0x27ad86c size 0x6b0 virtual true final false
inline void GrabBegin() ;

/// @brief Method MoveGrabbedObject addr 0x27adf1c size 0x234 virtual true final false
inline void MoveGrabbedObject(::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot, bool  forceTeleport) ;

/// @brief Method GrabEnd addr 0x27accf8 size 0x268 virtual false final false
inline void GrabEnd() ;

/// @brief Method GrabbableRelease addr 0x27ae150 size 0x54 virtual false final false
inline void GrabbableRelease(::UnityEngine::Vector3  linearVelocity, ::UnityEngine::Vector3  angularVelocity) ;

/// @brief Method GrabVolumeEnable addr 0x27ae1a4 size 0xc0 virtual true final false
inline void GrabVolumeEnable(bool  enabled) ;

/// @brief Method OffhandGrabbed addr 0x27ae264 size 0xcc virtual true final false
inline void OffhandGrabbed(::GlobalNamespace::OVRGrabbable*  grabbable) ;

/// @brief Method SetPlayerIgnoreCollision addr 0x27ad184 size 0x178 virtual false final false
inline void SetPlayerIgnoreCollision(::UnityEngine::GameObject*  grabbable, bool  ignore) ;

static inline ::GlobalNamespace::OVRGrabber* New_ctor() ;

/// @brief Method .ctor addr 0x27ae330 size 0x94 virtual false final false
inline void _ctor() ;

/// @brief Method <Awake>b__23_0 addr 0x27ae3c4 size 0x4 virtual false final false
inline void _Awake_b__23_0(::GlobalNamespace::OVRCameraRig*  r) ;

// Ctor Parameters [CppParam { name: "", ty: "OVRGrabber", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRGrabber(OVRGrabber && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRGrabber", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRGrabber(OVRGrabber const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OVRGrabber()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRGrabber, 0xc8>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRGrabber);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRGrabber*, "", "OVRGrabber");
