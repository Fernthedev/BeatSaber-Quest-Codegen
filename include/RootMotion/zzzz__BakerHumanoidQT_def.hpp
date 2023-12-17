#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BakerHumanoidQT)
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Avatar;
}
namespace UnityEngine {
class AnimationClip;
}
namespace UnityEngine {
struct AvatarIKGoal;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace RootMotion {
class BakerHumanoidQT;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::BakerHumanoidQT);
// Type: RootMotion::BakerHumanoidQT
namespace RootMotion {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12476))
// CS Name: ::RootMotion::BakerHumanoidQT*
class CORDL_TYPE BakerHumanoidQT : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xa0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xa0 - sizeof(::System::Object)]{};

/// @brief Field transform offset 0x10
 __declspec(property(get=__get_transform, put=__set_transform)) ::UnityEngine::Transform*  transform;

/// @brief Field Qx offset 0x18
 __declspec(property(get=__get_Qx, put=__set_Qx)) ::StringW  Qx;

/// @brief Field Qy offset 0x20
 __declspec(property(get=__get_Qy, put=__set_Qy)) ::StringW  Qy;

/// @brief Field Qz offset 0x28
 __declspec(property(get=__get_Qz, put=__set_Qz)) ::StringW  Qz;

/// @brief Field Qw offset 0x30
 __declspec(property(get=__get_Qw, put=__set_Qw)) ::StringW  Qw;

/// @brief Field Tx offset 0x38
 __declspec(property(get=__get_Tx, put=__set_Tx)) ::StringW  Tx;

/// @brief Field Ty offset 0x40
 __declspec(property(get=__get_Ty, put=__set_Ty)) ::StringW  Ty;

/// @brief Field Tz offset 0x48
 __declspec(property(get=__get_Tz, put=__set_Tz)) ::StringW  Tz;

/// @brief Field rotX offset 0x50
 __declspec(property(get=__get_rotX, put=__set_rotX)) ::UnityEngine::AnimationCurve*  rotX;

/// @brief Field rotY offset 0x58
 __declspec(property(get=__get_rotY, put=__set_rotY)) ::UnityEngine::AnimationCurve*  rotY;

/// @brief Field rotZ offset 0x60
 __declspec(property(get=__get_rotZ, put=__set_rotZ)) ::UnityEngine::AnimationCurve*  rotZ;

/// @brief Field rotW offset 0x68
 __declspec(property(get=__get_rotW, put=__set_rotW)) ::UnityEngine::AnimationCurve*  rotW;

/// @brief Field posX offset 0x70
 __declspec(property(get=__get_posX, put=__set_posX)) ::UnityEngine::AnimationCurve*  posX;

/// @brief Field posY offset 0x78
 __declspec(property(get=__get_posY, put=__set_posY)) ::UnityEngine::AnimationCurve*  posY;

/// @brief Field posZ offset 0x80
 __declspec(property(get=__get_posZ, put=__set_posZ)) ::UnityEngine::AnimationCurve*  posZ;

/// @brief Field goal offset 0x88
 __declspec(property(get=__get_goal, put=__set_goal)) ::UnityEngine::AvatarIKGoal  goal;

/// @brief Field lastQ offset 0x8c
 __declspec(property(get=__get_lastQ, put=__set_lastQ)) ::UnityEngine::Quaternion  lastQ;

/// @brief Field lastQSet offset 0x9c
 __declspec(property(get=__get_lastQSet, put=__set_lastQSet)) bool  lastQSet;

constexpr void __set_transform(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get_transform() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get_transform() const;

constexpr void __set_Qx(::StringW  value) ;

constexpr ::StringW& __get_Qx() ;

constexpr ::StringW const& __get_Qx() const;

constexpr void __set_Qy(::StringW  value) ;

constexpr ::StringW& __get_Qy() ;

constexpr ::StringW const& __get_Qy() const;

constexpr void __set_Qz(::StringW  value) ;

constexpr ::StringW& __get_Qz() ;

constexpr ::StringW const& __get_Qz() const;

constexpr void __set_Qw(::StringW  value) ;

constexpr ::StringW& __get_Qw() ;

constexpr ::StringW const& __get_Qw() const;

constexpr void __set_Tx(::StringW  value) ;

constexpr ::StringW& __get_Tx() ;

constexpr ::StringW const& __get_Tx() const;

constexpr void __set_Ty(::StringW  value) ;

constexpr ::StringW& __get_Ty() ;

constexpr ::StringW const& __get_Ty() const;

constexpr void __set_Tz(::StringW  value) ;

constexpr ::StringW& __get_Tz() ;

constexpr ::StringW const& __get_Tz() const;

constexpr void __set_rotX(::UnityEngine::AnimationCurve*  value) ;

constexpr ::UnityEngine::AnimationCurve* __get_rotX() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> __get_rotX() const;

constexpr void __set_rotY(::UnityEngine::AnimationCurve*  value) ;

constexpr ::UnityEngine::AnimationCurve* __get_rotY() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> __get_rotY() const;

constexpr void __set_rotZ(::UnityEngine::AnimationCurve*  value) ;

constexpr ::UnityEngine::AnimationCurve* __get_rotZ() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> __get_rotZ() const;

constexpr void __set_rotW(::UnityEngine::AnimationCurve*  value) ;

constexpr ::UnityEngine::AnimationCurve* __get_rotW() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> __get_rotW() const;

constexpr void __set_posX(::UnityEngine::AnimationCurve*  value) ;

constexpr ::UnityEngine::AnimationCurve* __get_posX() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> __get_posX() const;

constexpr void __set_posY(::UnityEngine::AnimationCurve*  value) ;

constexpr ::UnityEngine::AnimationCurve* __get_posY() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> __get_posY() const;

constexpr void __set_posZ(::UnityEngine::AnimationCurve*  value) ;

constexpr ::UnityEngine::AnimationCurve* __get_posZ() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> __get_posZ() const;

constexpr void __set_goal(::UnityEngine::AvatarIKGoal  value) ;

constexpr ::UnityEngine::AvatarIKGoal& __get_goal() ;

constexpr ::UnityEngine::AvatarIKGoal const& __get_goal() const;

constexpr void __set_lastQ(::UnityEngine::Quaternion  value) ;

constexpr ::UnityEngine::Quaternion& __get_lastQ() ;

constexpr ::UnityEngine::Quaternion const& __get_lastQ() const;

constexpr void __set_lastQSet(bool  value) ;

constexpr bool& __get_lastQSet() ;

constexpr bool const& __get_lastQSet() const;

static inline ::RootMotion::BakerHumanoidQT* New_ctor(::StringW  name) ;

/// @brief Method .ctor addr 0x1232cf0 size 0x178 virtual false final false
inline void _ctor(::StringW  name) ;

static inline ::RootMotion::BakerHumanoidQT* New_ctor(::UnityEngine::Transform*  transform, ::UnityEngine::AvatarIKGoal  goal, ::StringW  name) ;

/// @brief Method .ctor addr 0x1232fac size 0x188 virtual false final false
inline void _ctor(::UnityEngine::Transform*  transform, ::UnityEngine::AvatarIKGoal  goal, ::StringW  name) ;

/// @brief Method Reset addr 0x1232e68 size 0x144 virtual false final false
inline void Reset() ;

/// @brief Method SetIKKeyframes addr 0x1233134 size 0x234 virtual false final false
inline void SetIKKeyframes(float_t  time, ::UnityEngine::Avatar*  avatar, float_t  humanScale, ::UnityEngine::Vector3  bodyPosition, ::UnityEngine::Quaternion  bodyRotation) ;

/// @brief Method SetKeyframes addr 0x1233368 size 0xf0 virtual false final false
inline void SetKeyframes(float_t  time, ::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot) ;

/// @brief Method MoveLastKeyframes addr 0x1233458 size 0x68 virtual false final false
inline void MoveLastKeyframes(float_t  time) ;

/// @brief Method SetLoopFrame addr 0x123353c size 0x68 virtual false final false
inline void SetLoopFrame(float_t  time) ;

/// @brief Method MoveLastKeyframe addr 0x12334c0 size 0x7c virtual false final false
inline void MoveLastKeyframe(float_t  time, ::UnityEngine::AnimationCurve*  curve) ;

/// @brief Method MultiplyLength addr 0x12335a4 size 0xa8 virtual false final false
inline void MultiplyLength(::UnityEngine::AnimationCurve*  curve, float_t  mlp) ;

/// @brief Method SetCurves addr 0x123364c size 0x2ec virtual false final false
inline void SetCurves(ByRef<::UnityEngine::AnimationClip*>  clip, float_t  maxError, float_t  lengthMlp) ;

// Ctor Parameters [CppParam { name: "", ty: "BakerHumanoidQT", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BakerHumanoidQT(BakerHumanoidQT && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BakerHumanoidQT", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BakerHumanoidQT(BakerHumanoidQT const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BakerHumanoidQT()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::BakerHumanoidQT, 0xa0>, "Size mismatch!");

} // namespace end def RootMotion
NEED_NO_BOX(::RootMotion::BakerHumanoidQT);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::BakerHumanoidQT*, "RootMotion", "BakerHumanoidQT");
