#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Finger)
namespace UnityEngine {
struct Quaternion;
}
namespace RootMotion::FinalIK {
class IKSolverLimb;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace RootMotion::FinalIK {
struct __Finger__DOF;
}
// Forward declare root types
namespace RootMotion::FinalIK {
struct __Finger__DOF;
}
namespace RootMotion::FinalIK {
class Finger;
}
// Write type traits
MARK_VAL_T(::RootMotion::FinalIK::__Finger__DOF);
MARK_REF_PTR_T(::RootMotion::FinalIK::Finger);
// Type: ::DOF
namespace RootMotion::FinalIK {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12514))
// CS Name: ::Finger::DOF
struct CORDL_TYPE __Finger__DOF : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____Finger__DOF_Unwrapped
enum struct ____Finger__DOF_Unwrapped : int32_t {
__E_One = static_cast<int32_t>(0x0),
__E_Three = static_cast<int32_t>(0x1),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field One value: static_cast<int32_t>(0x0)
static ::RootMotion::FinalIK::__Finger__DOF const One;

/// @brief Field Three value: static_cast<int32_t>(0x1)
static ::RootMotion::FinalIK::__Finger__DOF const Three;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____Finger__DOF_Unwrapped () const noexcept {
return std::bit_cast<____Finger__DOF_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __Finger__DOF(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __Finger__DOF(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __Finger__DOF()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__Finger__DOF, 0x4>, "Size mismatch!");

} // namespace end def RootMotion::FinalIK
// Type: RootMotion.FinalIK::Finger
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12515))
// CS Name: ::RootMotion.FinalIK::Finger*
class CORDL_TYPE Finger : public ::System::Object {
public:
// Declarations
using DOF = ::RootMotion::FinalIK::__Finger__DOF;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xa8};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xa8 - sizeof(::System::Object)]{};

/// @brief Field weight offset 0x10
 __declspec(property(get=__get_weight, put=__set_weight)) float_t  weight;

/// @brief Field rotationWeight offset 0x14
 __declspec(property(get=__get_rotationWeight, put=__set_rotationWeight)) float_t  rotationWeight;

/// @brief Field rotationDOF offset 0x18
 __declspec(property(get=__get_rotationDOF, put=__set_rotationDOF)) ::RootMotion::FinalIK::__Finger__DOF  rotationDOF;

/// @brief Field fixBone1Twist offset 0x1c
 __declspec(property(get=__get_fixBone1Twist, put=__set_fixBone1Twist)) bool  fixBone1Twist;

/// @brief Field bone1 offset 0x20
 __declspec(property(get=__get_bone1, put=__set_bone1)) ::UnityEngine::Transform*  bone1;

/// @brief Field bone2 offset 0x28
 __declspec(property(get=__get_bone2, put=__set_bone2)) ::UnityEngine::Transform*  bone2;

/// @brief Field bone3 offset 0x30
 __declspec(property(get=__get_bone3, put=__set_bone3)) ::UnityEngine::Transform*  bone3;

/// @brief Field tip offset 0x38
 __declspec(property(get=__get_tip, put=__set_tip)) ::UnityEngine::Transform*  tip;

/// @brief Field target offset 0x40
 __declspec(property(get=__get_target, put=__set_target)) ::UnityEngine::Transform*  target;

/// @brief Field <initiated>k__BackingField offset 0x48
 __declspec(property(get=__get__initiated_k__BackingField, put=__set__initiated_k__BackingField)) bool  _initiated_k__BackingField;

/// @brief Field solver offset 0x50
 __declspec(property(get=__get_solver, put=__set_solver)) ::RootMotion::FinalIK::IKSolverLimb*  solver;

/// @brief Field bone3RelativeToTarget offset 0x58
 __declspec(property(get=__get_bone3RelativeToTarget, put=__set_bone3RelativeToTarget)) ::UnityEngine::Quaternion  bone3RelativeToTarget;

/// @brief Field bone3DefaultLocalPosition offset 0x68
 __declspec(property(get=__get_bone3DefaultLocalPosition, put=__set_bone3DefaultLocalPosition)) ::UnityEngine::Vector3  bone3DefaultLocalPosition;

/// @brief Field bone3DefaultLocalRotation offset 0x74
 __declspec(property(get=__get_bone3DefaultLocalRotation, put=__set_bone3DefaultLocalRotation)) ::UnityEngine::Quaternion  bone3DefaultLocalRotation;

/// @brief Field bone1Axis offset 0x84
 __declspec(property(get=__get_bone1Axis, put=__set_bone1Axis)) ::UnityEngine::Vector3  bone1Axis;

/// @brief Field tipAxis offset 0x90
 __declspec(property(get=__get_tipAxis, put=__set_tipAxis)) ::UnityEngine::Vector3  tipAxis;

/// @brief Field bone1TwistAxis offset 0x9c
 __declspec(property(get=__get_bone1TwistAxis, put=__set_bone1TwistAxis)) ::UnityEngine::Vector3  bone1TwistAxis;

 __declspec(property(get=get_initiated, put=set_initiated)) bool  initiated;

 __declspec(property(get=get_IKPosition, put=set_IKPosition)) ::UnityEngine::Vector3  IKPosition;

 __declspec(property(get=get_IKRotation, put=set_IKRotation)) ::UnityEngine::Quaternion  IKRotation;

constexpr void __set_weight(float_t  value) ;

constexpr float_t& __get_weight() ;

constexpr float_t const& __get_weight() const;

constexpr void __set_rotationWeight(float_t  value) ;

constexpr float_t& __get_rotationWeight() ;

constexpr float_t const& __get_rotationWeight() const;

constexpr void __set_rotationDOF(::RootMotion::FinalIK::__Finger__DOF  value) ;

constexpr ::RootMotion::FinalIK::__Finger__DOF& __get_rotationDOF() ;

constexpr ::RootMotion::FinalIK::__Finger__DOF const& __get_rotationDOF() const;

constexpr void __set_fixBone1Twist(bool  value) ;

constexpr bool& __get_fixBone1Twist() ;

constexpr bool const& __get_fixBone1Twist() const;

constexpr void __set_bone1(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get_bone1() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get_bone1() const;

constexpr void __set_bone2(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get_bone2() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get_bone2() const;

constexpr void __set_bone3(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get_bone3() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get_bone3() const;

constexpr void __set_tip(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get_tip() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get_tip() const;

constexpr void __set_target(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get_target() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get_target() const;

constexpr void __set__initiated_k__BackingField(bool  value) ;

constexpr bool& __get__initiated_k__BackingField() ;

constexpr bool const& __get__initiated_k__BackingField() const;

constexpr void __set_solver(::RootMotion::FinalIK::IKSolverLimb*  value) ;

constexpr ::RootMotion::FinalIK::IKSolverLimb* __get_solver() ;

constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::IKSolverLimb*> __get_solver() const;

constexpr void __set_bone3RelativeToTarget(::UnityEngine::Quaternion  value) ;

constexpr ::UnityEngine::Quaternion& __get_bone3RelativeToTarget() ;

constexpr ::UnityEngine::Quaternion const& __get_bone3RelativeToTarget() const;

constexpr void __set_bone3DefaultLocalPosition(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_bone3DefaultLocalPosition() ;

constexpr ::UnityEngine::Vector3 const& __get_bone3DefaultLocalPosition() const;

constexpr void __set_bone3DefaultLocalRotation(::UnityEngine::Quaternion  value) ;

constexpr ::UnityEngine::Quaternion& __get_bone3DefaultLocalRotation() ;

constexpr ::UnityEngine::Quaternion const& __get_bone3DefaultLocalRotation() const;

constexpr void __set_bone1Axis(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_bone1Axis() ;

constexpr ::UnityEngine::Vector3 const& __get_bone1Axis() const;

constexpr void __set_tipAxis(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_tipAxis() ;

constexpr ::UnityEngine::Vector3 const& __get_tipAxis() const;

constexpr void __set_bone1TwistAxis(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_bone1TwistAxis() ;

constexpr ::UnityEngine::Vector3 const& __get_bone1TwistAxis() const;

/// @brief Method get_initiated addr 0x1242be4 size 0x8 virtual false final false
inline bool get_initiated() ;

/// @brief Method set_initiated addr 0x1242bec size 0xc virtual false final false
inline void set_initiated(bool  value) ;

/// @brief Method get_IKPosition addr 0x1242bf8 size 0x20 virtual false final false
inline ::UnityEngine::Vector3 get_IKPosition() ;

/// @brief Method set_IKPosition addr 0x1242c18 size 0x20 virtual false final false
inline void set_IKPosition(::UnityEngine::Vector3  value) ;

/// @brief Method get_IKRotation addr 0x1242c38 size 0x20 virtual false final false
inline ::UnityEngine::Quaternion get_IKRotation() ;

/// @brief Method set_IKRotation addr 0x1242c58 size 0x20 virtual false final false
inline void set_IKRotation(::UnityEngine::Quaternion  value) ;

/// @brief Method IsValid addr 0x1242c78 size 0xec virtual false final false
inline bool IsValid(ByRef<::StringW>  errorMessage) ;

/// @brief Method Initiate addr 0x1242d64 size 0x4e0 virtual false final false
inline void Initiate(::UnityEngine::Transform*  hand, int32_t  index) ;

/// @brief Method FixTransforms addr 0x1243244 size 0xcc virtual false final false
inline void FixTransforms() ;

/// @brief Method StoreDefaultLocalState addr 0x1243310 size 0xb8 virtual false final false
inline void StoreDefaultLocalState() ;

/// @brief Method Update addr 0x12433c8 size 0x660 virtual false final false
inline void Update(float_t  masterWeight) ;

static inline ::RootMotion::FinalIK::Finger* New_ctor() ;

/// @brief Method .ctor addr 0x1243a28 size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "Finger", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Finger(Finger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Finger", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Finger(Finger const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Finger()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::Finger, 0xa8>, "Size mismatch!");

} // namespace end def RootMotion::FinalIK
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__Finger__DOF, "RootMotion.FinalIK", "Finger/DOF");
NEED_NO_BOX(::RootMotion::FinalIK::Finger);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::Finger*, "RootMotion.FinalIK", "Finger");
