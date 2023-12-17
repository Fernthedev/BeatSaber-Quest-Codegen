#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IKConstraintBend)
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace RootMotion::FinalIK {
class IKSolverFullBody;
}
namespace UnityEngine {
struct Quaternion;
}
namespace RootMotion {
class __Warning__Logger;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class IKConstraintBend;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::IKConstraintBend);
// Type: RootMotion.FinalIK::IKConstraintBend
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12551))
// CS Name: ::RootMotion.FinalIK::IKConstraintBend*
class CORDL_TYPE IKConstraintBend : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x88};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x88 - sizeof(::System::Object)]{};

/// @brief Field bone1 offset 0x10
 __declspec(property(get=__get_bone1, put=__set_bone1)) ::UnityEngine::Transform*  bone1;

/// @brief Field bone2 offset 0x18
 __declspec(property(get=__get_bone2, put=__set_bone2)) ::UnityEngine::Transform*  bone2;

/// @brief Field bone3 offset 0x20
 __declspec(property(get=__get_bone3, put=__set_bone3)) ::UnityEngine::Transform*  bone3;

/// @brief Field bendGoal offset 0x28
 __declspec(property(get=__get_bendGoal, put=__set_bendGoal)) ::UnityEngine::Transform*  bendGoal;

/// @brief Field direction offset 0x30
 __declspec(property(get=__get_direction, put=__set_direction)) ::UnityEngine::Vector3  direction;

/// @brief Field rotationOffset offset 0x3c
 __declspec(property(get=__get_rotationOffset, put=__set_rotationOffset)) ::UnityEngine::Quaternion  rotationOffset;

/// @brief Field weight offset 0x4c
 __declspec(property(get=__get_weight, put=__set_weight)) float_t  weight;

/// @brief Field defaultLocalDirection offset 0x50
 __declspec(property(get=__get_defaultLocalDirection, put=__set_defaultLocalDirection)) ::UnityEngine::Vector3  defaultLocalDirection;

/// @brief Field defaultChildDirection offset 0x5c
 __declspec(property(get=__get_defaultChildDirection, put=__set_defaultChildDirection)) ::UnityEngine::Vector3  defaultChildDirection;

/// @brief Field clampF offset 0x68
 __declspec(property(get=__get_clampF, put=__set_clampF)) float_t  clampF;

/// @brief Field chainIndex1 offset 0x6c
 __declspec(property(get=__get_chainIndex1, put=__set_chainIndex1)) int32_t  chainIndex1;

/// @brief Field nodeIndex1 offset 0x70
 __declspec(property(get=__get_nodeIndex1, put=__set_nodeIndex1)) int32_t  nodeIndex1;

/// @brief Field chainIndex2 offset 0x74
 __declspec(property(get=__get_chainIndex2, put=__set_chainIndex2)) int32_t  chainIndex2;

/// @brief Field nodeIndex2 offset 0x78
 __declspec(property(get=__get_nodeIndex2, put=__set_nodeIndex2)) int32_t  nodeIndex2;

/// @brief Field chainIndex3 offset 0x7c
 __declspec(property(get=__get_chainIndex3, put=__set_chainIndex3)) int32_t  chainIndex3;

/// @brief Field nodeIndex3 offset 0x80
 __declspec(property(get=__get_nodeIndex3, put=__set_nodeIndex3)) int32_t  nodeIndex3;

/// @brief Field <initiated>k__BackingField offset 0x84
 __declspec(property(get=__get__initiated_k__BackingField, put=__set__initiated_k__BackingField)) bool  _initiated_k__BackingField;

/// @brief Field limbOrientationsSet offset 0x85
 __declspec(property(get=__get_limbOrientationsSet, put=__set_limbOrientationsSet)) bool  limbOrientationsSet;

 __declspec(property(get=get_initiated, put=set_initiated)) bool  initiated;

constexpr void __set_bone1(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get_bone1() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get_bone1() const;

constexpr void __set_bone2(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get_bone2() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get_bone2() const;

constexpr void __set_bone3(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get_bone3() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get_bone3() const;

constexpr void __set_bendGoal(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get_bendGoal() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get_bendGoal() const;

constexpr void __set_direction(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_direction() ;

constexpr ::UnityEngine::Vector3 const& __get_direction() const;

constexpr void __set_rotationOffset(::UnityEngine::Quaternion  value) ;

constexpr ::UnityEngine::Quaternion& __get_rotationOffset() ;

constexpr ::UnityEngine::Quaternion const& __get_rotationOffset() const;

constexpr void __set_weight(float_t  value) ;

constexpr float_t& __get_weight() ;

constexpr float_t const& __get_weight() const;

constexpr void __set_defaultLocalDirection(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_defaultLocalDirection() ;

constexpr ::UnityEngine::Vector3 const& __get_defaultLocalDirection() const;

constexpr void __set_defaultChildDirection(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_defaultChildDirection() ;

constexpr ::UnityEngine::Vector3 const& __get_defaultChildDirection() const;

constexpr void __set_clampF(float_t  value) ;

constexpr float_t& __get_clampF() ;

constexpr float_t const& __get_clampF() const;

constexpr void __set_chainIndex1(int32_t  value) ;

constexpr int32_t& __get_chainIndex1() ;

constexpr int32_t const& __get_chainIndex1() const;

constexpr void __set_nodeIndex1(int32_t  value) ;

constexpr int32_t& __get_nodeIndex1() ;

constexpr int32_t const& __get_nodeIndex1() const;

constexpr void __set_chainIndex2(int32_t  value) ;

constexpr int32_t& __get_chainIndex2() ;

constexpr int32_t const& __get_chainIndex2() const;

constexpr void __set_nodeIndex2(int32_t  value) ;

constexpr int32_t& __get_nodeIndex2() ;

constexpr int32_t const& __get_nodeIndex2() const;

constexpr void __set_chainIndex3(int32_t  value) ;

constexpr int32_t& __get_chainIndex3() ;

constexpr int32_t const& __get_chainIndex3() const;

constexpr void __set_nodeIndex3(int32_t  value) ;

constexpr int32_t& __get_nodeIndex3() ;

constexpr int32_t const& __get_nodeIndex3() const;

constexpr void __set__initiated_k__BackingField(bool  value) ;

constexpr bool& __get__initiated_k__BackingField() ;

constexpr bool const& __get__initiated_k__BackingField() const;

constexpr void __set_limbOrientationsSet(bool  value) ;

constexpr bool& __get_limbOrientationsSet() ;

constexpr bool const& __get_limbOrientationsSet() const;

/// @brief Method IsValid addr 0x1257abc size 0x1d8 virtual false final false
inline bool IsValid(::RootMotion::FinalIK::IKSolverFullBody*  solver, ::RootMotion::__Warning__Logger*  logger) ;

/// @brief Method get_initiated addr 0x1257c94 size 0x8 virtual false final false
inline bool get_initiated() ;

/// @brief Method set_initiated addr 0x1257c9c size 0xc virtual false final false
inline void set_initiated(bool  value) ;

static inline ::RootMotion::FinalIK::IKConstraintBend* New_ctor() ;

/// @brief Method .ctor addr 0x1254c1c size 0x6c virtual false final false
inline void _ctor() ;

static inline ::RootMotion::FinalIK::IKConstraintBend* New_ctor(::UnityEngine::Transform*  bone1, ::UnityEngine::Transform*  bone2, ::UnityEngine::Transform*  bone3) ;

/// @brief Method .ctor addr 0x1257ca8 size 0x8c virtual false final false
inline void _ctor(::UnityEngine::Transform*  bone1, ::UnityEngine::Transform*  bone2, ::UnityEngine::Transform*  bone3) ;

/// @brief Method SetBones addr 0x12557b8 size 0xc virtual false final false
inline void SetBones(::UnityEngine::Transform*  bone1, ::UnityEngine::Transform*  bone2, ::UnityEngine::Transform*  bone3) ;

/// @brief Method Initiate addr 0x12557c4 size 0x268 virtual false final false
inline void Initiate(::RootMotion::FinalIK::IKSolverFullBody*  solver) ;

/// @brief Method SetLimbOrientation addr 0x1257e7c size 0x354 virtual false final false
inline void SetLimbOrientation(::UnityEngine::Vector3  upper, ::UnityEngine::Vector3  lower, ::UnityEngine::Vector3  last) ;

/// @brief Method LimitBend addr 0x12581d0 size 0x13c8 virtual false final false
inline void LimitBend(float_t  solverWeight, float_t  positionWeight) ;

/// @brief Method GetDir addr 0x1256790 size 0x630 virtual false final false
inline ::UnityEngine::Vector3 GetDir(::RootMotion::FinalIK::IKSolverFullBody*  solver) ;

/// @brief Method OrthoToLimb addr 0x1257d34 size 0xa4 virtual false final false
inline ::UnityEngine::Vector3 OrthoToLimb(::RootMotion::FinalIK::IKSolverFullBody*  solver, ::UnityEngine::Vector3  tangent) ;

/// @brief Method OrthoToBone1 addr 0x1257dd8 size 0xa4 virtual false final false
inline ::UnityEngine::Vector3 OrthoToBone1(::RootMotion::FinalIK::IKSolverFullBody*  solver, ::UnityEngine::Vector3  tangent) ;

// Ctor Parameters [CppParam { name: "", ty: "IKConstraintBend", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IKConstraintBend(IKConstraintBend && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IKConstraintBend", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IKConstraintBend(IKConstraintBend const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 IKConstraintBend()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::IKConstraintBend, 0x88>, "Size mismatch!");

} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::IKConstraintBend);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::IKConstraintBend*, "RootMotion.FinalIK", "IKConstraintBend");
