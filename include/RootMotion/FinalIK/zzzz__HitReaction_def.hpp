#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__OffsetModifier_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HitReaction)
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Quaternion;
}
namespace RootMotion::FinalIK {
class IKSolverFullBodyBiped;
}
namespace RootMotion::FinalIK {
struct FullBodyBipedEffector;
}
namespace UnityEngine {
struct Vector3;
}
namespace RootMotion::FinalIK {
class __HitReaction__HitPointEffector;
}
namespace RootMotion::FinalIK {
class __HitReaction__HitPoint;
}
namespace UnityEngine {
class Collider;
}
namespace RootMotion::FinalIK {
class __HitReaction__HitPointBone;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace GlobalNamespace {
class __HitReaction__HitPointBone__BoneLink;
}
namespace GlobalNamespace {
class __HitReaction__HitPointEffector__EffectorLink;
}
// Forward declare root types
namespace GlobalNamespace {
class __HitReaction__HitPointBone__BoneLink;
}
namespace GlobalNamespace {
class __HitReaction__HitPointEffector__EffectorLink;
}
namespace RootMotion::FinalIK {
class HitReaction;
}
namespace RootMotion::FinalIK {
class __HitReaction__HitPoint;
}
namespace RootMotion::FinalIK {
class __HitReaction__HitPointBone;
}
namespace RootMotion::FinalIK {
class __HitReaction__HitPointEffector;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::__HitReaction__HitPointBone__BoneLink);
MARK_REF_PTR_T(::GlobalNamespace::__HitReaction__HitPointEffector__EffectorLink);
MARK_REF_PTR_T(::RootMotion::FinalIK::HitReaction);
MARK_REF_PTR_T(::RootMotion::FinalIK::__HitReaction__HitPoint);
MARK_REF_PTR_T(::RootMotion::FinalIK::__HitReaction__HitPointBone);
MARK_REF_PTR_T(::RootMotion::FinalIK::__HitReaction__HitPointEffector);
// Type: ::HitPoint
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12638))
// CS Name: ::HitReaction::HitPoint*
class CORDL_TYPE __HitReaction__HitPoint : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::System::Object)]{};

/// @brief Field name offset 0x10
 __declspec(property(get=__get_name, put=__set_name)) ::StringW  name;

/// @brief Field collider offset 0x18
 __declspec(property(get=__get_collider, put=__set_collider)) ::UnityEngine::Collider*  collider;

/// @brief Field crossFadeTime offset 0x20
 __declspec(property(get=__get_crossFadeTime, put=__set_crossFadeTime)) float_t  crossFadeTime;

/// @brief Field <crossFader>k__BackingField offset 0x24
 __declspec(property(get=__get__crossFader_k__BackingField, put=__set__crossFader_k__BackingField)) float_t  _crossFader_k__BackingField;

/// @brief Field <timer>k__BackingField offset 0x28
 __declspec(property(get=__get__timer_k__BackingField, put=__set__timer_k__BackingField)) float_t  _timer_k__BackingField;

/// @brief Field <force>k__BackingField offset 0x2c
 __declspec(property(get=__get__force_k__BackingField, put=__set__force_k__BackingField)) ::UnityEngine::Vector3  _force_k__BackingField;

/// @brief Field <point>k__BackingField offset 0x38
 __declspec(property(get=__get__point_k__BackingField, put=__set__point_k__BackingField)) ::UnityEngine::Vector3  _point_k__BackingField;

/// @brief Field length offset 0x44
 __declspec(property(get=__get_length, put=__set_length)) float_t  length;

/// @brief Field crossFadeSpeed offset 0x48
 __declspec(property(get=__get_crossFadeSpeed, put=__set_crossFadeSpeed)) float_t  crossFadeSpeed;

/// @brief Field lastTime offset 0x4c
 __declspec(property(get=__get_lastTime, put=__set_lastTime)) float_t  lastTime;

 __declspec(property(get=get_inProgress)) bool  inProgress;

 __declspec(property(get=get_crossFader, put=set_crossFader)) float_t  crossFader;

 __declspec(property(get=get_timer, put=set_timer)) float_t  timer;

 __declspec(property(get=get_force, put=set_force)) ::UnityEngine::Vector3  force;

 __declspec(property(get=get_point, put=set_point)) ::UnityEngine::Vector3  point;

constexpr void __set_name(::StringW  value) ;

constexpr ::StringW& __get_name() ;

constexpr ::StringW const& __get_name() const;

constexpr void __set_collider(::UnityEngine::Collider*  value) ;

constexpr ::UnityEngine::Collider* __get_collider() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Collider*> __get_collider() const;

constexpr void __set_crossFadeTime(float_t  value) ;

constexpr float_t& __get_crossFadeTime() ;

constexpr float_t const& __get_crossFadeTime() const;

constexpr void __set__crossFader_k__BackingField(float_t  value) ;

constexpr float_t& __get__crossFader_k__BackingField() ;

constexpr float_t const& __get__crossFader_k__BackingField() const;

constexpr void __set__timer_k__BackingField(float_t  value) ;

constexpr float_t& __get__timer_k__BackingField() ;

constexpr float_t const& __get__timer_k__BackingField() const;

constexpr void __set__force_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__force_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __get__force_k__BackingField() const;

constexpr void __set__point_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__point_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __get__point_k__BackingField() const;

constexpr void __set_length(float_t  value) ;

constexpr float_t& __get_length() ;

constexpr float_t const& __get_length() const;

constexpr void __set_crossFadeSpeed(float_t  value) ;

constexpr float_t& __get_crossFadeSpeed() ;

constexpr float_t const& __get_crossFadeSpeed() const;

constexpr void __set_lastTime(float_t  value) ;

constexpr float_t& __get_lastTime() ;

constexpr float_t const& __get_lastTime() const;

/// @brief Method get_inProgress addr 0x1294f40 size 0x14 virtual false final false
inline bool get_inProgress() ;

/// @brief Method get_crossFader addr 0x1295440 size 0x8 virtual false final false
inline float_t get_crossFader() ;

/// @brief Method set_crossFader addr 0x1295448 size 0x8 virtual false final false
inline void set_crossFader(float_t  value) ;

/// @brief Method get_timer addr 0x1295450 size 0x8 virtual false final false
inline float_t get_timer() ;

/// @brief Method set_timer addr 0x1295458 size 0x8 virtual false final false
inline void set_timer(float_t  value) ;

/// @brief Method get_force addr 0x1295460 size 0xc virtual false final false
inline ::UnityEngine::Vector3 get_force() ;

/// @brief Method set_force addr 0x129546c size 0xc virtual false final false
inline void set_force(::UnityEngine::Vector3  value) ;

/// @brief Method get_point addr 0x1295478 size 0xc virtual false final false
inline ::UnityEngine::Vector3 get_point() ;

/// @brief Method set_point addr 0x1295484 size 0xc virtual false final false
inline void set_point(::UnityEngine::Vector3  value) ;

/// @brief Method Hit addr 0x1295308 size 0x128 virtual false final false
inline void Hit(::UnityEngine::Vector3  force, ::UnityEngine::Vector3  point) ;

/// @brief Method Apply addr 0x1295014 size 0xd8 virtual false final false
inline void Apply(::RootMotion::FinalIK::IKSolverFullBodyBiped*  solver, float_t  weight) ;

/// @brief Method GetLength addr 0x0 size 0xffffffffffffffff virtual true final false
inline float_t GetLength() ;

/// @brief Method CrossFadeStart addr 0x0 size 0xffffffffffffffff virtual true final false
inline void CrossFadeStart() ;

/// @brief Method OnApply addr 0x0 size 0xffffffffffffffff virtual true final false
inline void OnApply(::RootMotion::FinalIK::IKSolverFullBodyBiped*  solver, float_t  weight) ;

static inline ::RootMotion::FinalIK::__HitReaction__HitPoint* New_ctor() ;

/// @brief Method .ctor addr 0x1295490 size 0x14 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__HitReaction__HitPoint", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HitReaction__HitPoint(__HitReaction__HitPoint && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HitReaction__HitPoint", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HitReaction__HitPoint(__HitReaction__HitPoint const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HitReaction__HitPoint()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__HitReaction__HitPoint, 0x50>, "Size mismatch!");

} // namespace end def RootMotion::FinalIK
// Type: ::EffectorLink
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12639))
// CS Name: ::HitReaction::HitPointEffector::EffectorLink*
class CORDL_TYPE __HitReaction__HitPointEffector__EffectorLink : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field effector offset 0x10
 __declspec(property(get=__get_effector, put=__set_effector)) ::RootMotion::FinalIK::FullBodyBipedEffector  effector;

/// @brief Field weight offset 0x14
 __declspec(property(get=__get_weight, put=__set_weight)) float_t  weight;

/// @brief Field lastValue offset 0x18
 __declspec(property(get=__get_lastValue, put=__set_lastValue)) ::UnityEngine::Vector3  lastValue;

/// @brief Field current offset 0x24
 __declspec(property(get=__get_current, put=__set_current)) ::UnityEngine::Vector3  current;

constexpr void __set_effector(::RootMotion::FinalIK::FullBodyBipedEffector  value) ;

constexpr ::RootMotion::FinalIK::FullBodyBipedEffector& __get_effector() ;

constexpr ::RootMotion::FinalIK::FullBodyBipedEffector const& __get_effector() const;

constexpr void __set_weight(float_t  value) ;

constexpr float_t& __get_weight() ;

constexpr float_t const& __get_weight() const;

constexpr void __set_lastValue(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_lastValue() ;

constexpr ::UnityEngine::Vector3 const& __get_lastValue() const;

constexpr void __set_current(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_current() ;

constexpr ::UnityEngine::Vector3 const& __get_current() const;

/// @brief Method Apply addr 0x12957c4 size 0x9c virtual false final false
inline void Apply(::RootMotion::FinalIK::IKSolverFullBodyBiped*  solver, ::UnityEngine::Vector3  offset, float_t  crossFader) ;

/// @brief Method CrossFadeStart addr 0x1295620 size 0x14 virtual false final false
inline void CrossFadeStart() ;

static inline ::GlobalNamespace::__HitReaction__HitPointEffector__EffectorLink* New_ctor() ;

/// @brief Method .ctor addr 0x1295874 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__HitReaction__HitPointEffector__EffectorLink", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HitReaction__HitPointEffector__EffectorLink(__HitReaction__HitPointEffector__EffectorLink && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HitReaction__HitPointEffector__EffectorLink", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HitReaction__HitPointEffector__EffectorLink(__HitReaction__HitPointEffector__EffectorLink const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HitReaction__HitPointEffector__EffectorLink()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__HitReaction__HitPointEffector__EffectorLink, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::HitPointEffector
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12640))
// CS Name: ::HitReaction::HitPointEffector*
class CORDL_TYPE __HitReaction__HitPointEffector : public ::RootMotion::FinalIK::__HitReaction__HitPoint {
public:
// Declarations
using EffectorLink = ::GlobalNamespace::__HitReaction__HitPointEffector__EffectorLink;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x68};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x68 - sizeof(::RootMotion::FinalIK::__HitReaction__HitPoint)]{};

/// @brief Field offsetInForceDirection offset 0x50
 __declspec(property(get=__get_offsetInForceDirection, put=__set_offsetInForceDirection)) ::UnityEngine::AnimationCurve*  offsetInForceDirection;

/// @brief Field offsetInUpDirection offset 0x58
 __declspec(property(get=__get_offsetInUpDirection, put=__set_offsetInUpDirection)) ::UnityEngine::AnimationCurve*  offsetInUpDirection;

/// @brief Field effectorLinks offset 0x60
 __declspec(property(get=__get_effectorLinks, put=__set_effectorLinks)) ::ArrayW<::GlobalNamespace::__HitReaction__HitPointEffector__EffectorLink*,::Array<::GlobalNamespace::__HitReaction__HitPointEffector__EffectorLink*>*>  effectorLinks;

constexpr void __set_offsetInForceDirection(::UnityEngine::AnimationCurve*  value) ;

constexpr ::UnityEngine::AnimationCurve* __get_offsetInForceDirection() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> __get_offsetInForceDirection() const;

constexpr void __set_offsetInUpDirection(::UnityEngine::AnimationCurve*  value) ;

constexpr ::UnityEngine::AnimationCurve* __get_offsetInUpDirection() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> __get_offsetInUpDirection() const;

constexpr void __set_effectorLinks(::ArrayW<::GlobalNamespace::__HitReaction__HitPointEffector__EffectorLink*,::Array<::GlobalNamespace::__HitReaction__HitPointEffector__EffectorLink*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__HitReaction__HitPointEffector__EffectorLink*,::Array<::GlobalNamespace::__HitReaction__HitPointEffector__EffectorLink*>*>& __get_effectorLinks() ;

constexpr ::ArrayW<::GlobalNamespace::__HitReaction__HitPointEffector__EffectorLink*,::Array<::GlobalNamespace::__HitReaction__HitPointEffector__EffectorLink*>*> const& __get_effectorLinks() const;

/// @brief Method GetLength addr 0x12954a4 size 0x11c virtual true final false
inline float_t GetLength() ;

/// @brief Method CrossFadeStart addr 0x12955c0 size 0x60 virtual true final false
inline void CrossFadeStart() ;

/// @brief Method OnApply addr 0x1295634 size 0x190 virtual true final false
inline void OnApply(::RootMotion::FinalIK::IKSolverFullBodyBiped*  solver, float_t  weight) ;

static inline ::RootMotion::FinalIK::__HitReaction__HitPointEffector* New_ctor() ;

/// @brief Method .ctor addr 0x1295860 size 0x14 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__HitReaction__HitPointEffector", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HitReaction__HitPointEffector(__HitReaction__HitPointEffector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HitReaction__HitPointEffector", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HitReaction__HitPointEffector(__HitReaction__HitPointEffector const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HitReaction__HitPointEffector()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__HitReaction__HitPointEffector, 0x68>, "Size mismatch!");

} // namespace end def RootMotion::FinalIK
// Type: ::BoneLink
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12641))
// CS Name: ::HitReaction::HitPointBone::BoneLink*
class CORDL_TYPE __HitReaction__HitPointBone__BoneLink : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::System::Object)]{};

/// @brief Field bone offset 0x10
 __declspec(property(get=__get_bone, put=__set_bone)) ::UnityEngine::Transform*  bone;

/// @brief Field weight offset 0x18
 __declspec(property(get=__get_weight, put=__set_weight)) float_t  weight;

/// @brief Field lastValue offset 0x1c
 __declspec(property(get=__get_lastValue, put=__set_lastValue)) ::UnityEngine::Quaternion  lastValue;

/// @brief Field current offset 0x2c
 __declspec(property(get=__get_current, put=__set_current)) ::UnityEngine::Quaternion  current;

constexpr void __set_bone(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get_bone() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get_bone() const;

constexpr void __set_weight(float_t  value) ;

constexpr float_t& __get_weight() ;

constexpr float_t const& __get_weight() const;

constexpr void __set_lastValue(::UnityEngine::Quaternion  value) ;

constexpr ::UnityEngine::Quaternion& __get_lastValue() ;

constexpr ::UnityEngine::Quaternion const& __get_lastValue() const;

constexpr void __set_current(::UnityEngine::Quaternion  value) ;

constexpr ::UnityEngine::Quaternion& __get_current() ;

constexpr ::UnityEngine::Quaternion const& __get_current() const;

/// @brief Method Apply addr 0x1295b34 size 0x18c virtual false final false
inline void Apply(::RootMotion::FinalIK::IKSolverFullBodyBiped*  solver, ::UnityEngine::Quaternion  offset, float_t  crossFader) ;

/// @brief Method CrossFadeStart addr 0x1295960 size 0xc virtual false final false
inline void CrossFadeStart() ;

static inline ::GlobalNamespace::__HitReaction__HitPointBone__BoneLink* New_ctor() ;

/// @brief Method .ctor addr 0x1295cd4 size 0x64 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__HitReaction__HitPointBone__BoneLink", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HitReaction__HitPointBone__BoneLink(__HitReaction__HitPointBone__BoneLink && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HitReaction__HitPointBone__BoneLink", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HitReaction__HitPointBone__BoneLink(__HitReaction__HitPointBone__BoneLink const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HitReaction__HitPointBone__BoneLink()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__HitReaction__HitPointBone__BoneLink, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::HitPointBone
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12642))
// CS Name: ::HitReaction::HitPointBone*
class CORDL_TYPE __HitReaction__HitPointBone : public ::RootMotion::FinalIK::__HitReaction__HitPoint {
public:
// Declarations
using BoneLink = ::GlobalNamespace::__HitReaction__HitPointBone__BoneLink;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x68};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x68 - sizeof(::RootMotion::FinalIK::__HitReaction__HitPoint)]{};

/// @brief Field aroundCenterOfMass offset 0x50
 __declspec(property(get=__get_aroundCenterOfMass, put=__set_aroundCenterOfMass)) ::UnityEngine::AnimationCurve*  aroundCenterOfMass;

/// @brief Field boneLinks offset 0x58
 __declspec(property(get=__get_boneLinks, put=__set_boneLinks)) ::ArrayW<::GlobalNamespace::__HitReaction__HitPointBone__BoneLink*,::Array<::GlobalNamespace::__HitReaction__HitPointBone__BoneLink*>*>  boneLinks;

/// @brief Field rigidbody offset 0x60
 __declspec(property(get=__get_rigidbody, put=__set_rigidbody)) ::UnityEngine::Rigidbody*  rigidbody;

constexpr void __set_aroundCenterOfMass(::UnityEngine::AnimationCurve*  value) ;

constexpr ::UnityEngine::AnimationCurve* __get_aroundCenterOfMass() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> __get_aroundCenterOfMass() const;

constexpr void __set_boneLinks(::ArrayW<::GlobalNamespace::__HitReaction__HitPointBone__BoneLink*,::Array<::GlobalNamespace::__HitReaction__HitPointBone__BoneLink*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__HitReaction__HitPointBone__BoneLink*,::Array<::GlobalNamespace::__HitReaction__HitPointBone__BoneLink*>*>& __get_boneLinks() ;

constexpr ::ArrayW<::GlobalNamespace::__HitReaction__HitPointBone__BoneLink*,::Array<::GlobalNamespace::__HitReaction__HitPointBone__BoneLink*>*> const& __get_boneLinks() const;

constexpr void __set_rigidbody(::UnityEngine::Rigidbody*  value) ;

constexpr ::UnityEngine::Rigidbody* __get_rigidbody() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rigidbody*> __get_rigidbody() const;

/// @brief Method GetLength addr 0x129587c size 0x8c virtual true final false
inline float_t GetLength() ;

/// @brief Method CrossFadeStart addr 0x1295908 size 0x58 virtual true final false
inline void CrossFadeStart() ;

/// @brief Method OnApply addr 0x129596c size 0x1c8 virtual true final false
inline void OnApply(::RootMotion::FinalIK::IKSolverFullBodyBiped*  solver, float_t  weight) ;

static inline ::RootMotion::FinalIK::__HitReaction__HitPointBone* New_ctor() ;

/// @brief Method .ctor addr 0x1295cc0 size 0x14 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__HitReaction__HitPointBone", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HitReaction__HitPointBone(__HitReaction__HitPointBone && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HitReaction__HitPointBone", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HitReaction__HitPointBone(__HitReaction__HitPointBone const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HitReaction__HitPointBone()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__HitReaction__HitPointBone, 0x68>, "Size mismatch!");

} // namespace end def RootMotion::FinalIK
// Type: RootMotion.FinalIK::HitReaction
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12643))
// CS Name: ::RootMotion.FinalIK::HitReaction*
class CORDL_TYPE HitReaction : public ::RootMotion::FinalIK::OffsetModifier {
public:
// Declarations
using HitPointBone = ::RootMotion::FinalIK::__HitReaction__HitPointBone;

using HitPointEffector = ::RootMotion::FinalIK::__HitReaction__HitPointEffector;

using HitPoint = ::RootMotion::FinalIK::__HitReaction__HitPoint;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::RootMotion::FinalIK::OffsetModifier)]{};

/// @brief Field effectorHitPoints offset 0x30
 __declspec(property(get=__get_effectorHitPoints, put=__set_effectorHitPoints)) ::ArrayW<::RootMotion::FinalIK::__HitReaction__HitPointEffector*,::Array<::RootMotion::FinalIK::__HitReaction__HitPointEffector*>*>  effectorHitPoints;

/// @brief Field boneHitPoints offset 0x38
 __declspec(property(get=__get_boneHitPoints, put=__set_boneHitPoints)) ::ArrayW<::RootMotion::FinalIK::__HitReaction__HitPointBone*,::Array<::RootMotion::FinalIK::__HitReaction__HitPointBone*>*>  boneHitPoints;

 __declspec(property(get=get_inProgress)) bool  inProgress;

constexpr void __set_effectorHitPoints(::ArrayW<::RootMotion::FinalIK::__HitReaction__HitPointEffector*,::Array<::RootMotion::FinalIK::__HitReaction__HitPointEffector*>*>  value) ;

constexpr ::ArrayW<::RootMotion::FinalIK::__HitReaction__HitPointEffector*,::Array<::RootMotion::FinalIK::__HitReaction__HitPointEffector*>*>& __get_effectorHitPoints() ;

constexpr ::ArrayW<::RootMotion::FinalIK::__HitReaction__HitPointEffector*,::Array<::RootMotion::FinalIK::__HitReaction__HitPointEffector*>*> const& __get_effectorHitPoints() const;

constexpr void __set_boneHitPoints(::ArrayW<::RootMotion::FinalIK::__HitReaction__HitPointBone*,::Array<::RootMotion::FinalIK::__HitReaction__HitPointBone*>*>  value) ;

constexpr ::ArrayW<::RootMotion::FinalIK::__HitReaction__HitPointBone*,::Array<::RootMotion::FinalIK::__HitReaction__HitPointBone*>*>& __get_boneHitPoints() ;

constexpr ::ArrayW<::RootMotion::FinalIK::__HitReaction__HitPointBone*,::Array<::RootMotion::FinalIK::__HitReaction__HitPointBone*>*> const& __get_boneHitPoints() const;

/// @brief Method get_inProgress addr 0x1294ea4 size 0x9c virtual false final false
inline bool get_inProgress() ;

/// @brief Method OnModifyOffset addr 0x1294f54 size 0xc0 virtual true final false
inline void OnModifyOffset() ;

/// @brief Method Hit addr 0x12950ec size 0x21c virtual false final false
inline void Hit(::UnityEngine::Collider*  collider, ::UnityEngine::Vector3  force, ::UnityEngine::Vector3  point) ;

static inline ::RootMotion::FinalIK::HitReaction* New_ctor() ;

/// @brief Method .ctor addr 0x1295430 size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "HitReaction", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HitReaction(HitReaction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HitReaction", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HitReaction(HitReaction const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HitReaction()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::HitReaction, 0x40>, "Size mismatch!");

} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(::GlobalNamespace::__HitReaction__HitPointBone__BoneLink);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__HitReaction__HitPointBone__BoneLink*, "RootMotion.FinalIK", "HitReaction/HitPointBone/BoneLink");
NEED_NO_BOX(::GlobalNamespace::__HitReaction__HitPointEffector__EffectorLink);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__HitReaction__HitPointEffector__EffectorLink*, "RootMotion.FinalIK", "HitReaction/HitPointEffector/EffectorLink");
NEED_NO_BOX(::RootMotion::FinalIK::HitReaction);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::HitReaction*, "RootMotion.FinalIK", "HitReaction");
NEED_NO_BOX(::RootMotion::FinalIK::__HitReaction__HitPoint);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__HitReaction__HitPoint*, "RootMotion.FinalIK", "HitReaction/HitPoint");
NEED_NO_BOX(::RootMotion::FinalIK::__HitReaction__HitPointBone);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__HitReaction__HitPointBone*, "RootMotion.FinalIK", "HitReaction/HitPointBone");
NEED_NO_BOX(::RootMotion::FinalIK::__HitReaction__HitPointEffector);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__HitReaction__HitPointEffector*, "RootMotion.FinalIK", "HitReaction/HitPointEffector");
