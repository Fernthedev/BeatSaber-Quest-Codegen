#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__IKSolver_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(IKSolverArm)
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
namespace RootMotion::FinalIK {
class __IKSolverVR__Arm;
}
namespace RootMotion::FinalIK {
class __IKSolver__Point;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class IKSolverArm;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::IKSolverArm);
// Type: RootMotion.FinalIK::IKSolverArm
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12564))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12566))
// CS Name: ::RootMotion.FinalIK::IKSolverArm*
class CORDL_TYPE IKSolverArm : public ::RootMotion::FinalIK::IKSolver {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xb8};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xb8 - sizeof(::RootMotion::FinalIK::IKSolver)]{};

/// @brief Field IKRotationWeight offset 0x58
 __declspec(property(get=__get_IKRotationWeight, put=__set_IKRotationWeight)) float_t  IKRotationWeight;

/// @brief Field IKRotation offset 0x5c
 __declspec(property(get=__get_IKRotation, put=__set_IKRotation)) ::UnityEngine::Quaternion  IKRotation;

/// @brief Field chest offset 0x70
 __declspec(property(get=__get_chest, put=__set_chest)) ::RootMotion::FinalIK::__IKSolver__Point*  chest;

/// @brief Field shoulder offset 0x78
 __declspec(property(get=__get_shoulder, put=__set_shoulder)) ::RootMotion::FinalIK::__IKSolver__Point*  shoulder;

/// @brief Field upperArm offset 0x80
 __declspec(property(get=__get_upperArm, put=__set_upperArm)) ::RootMotion::FinalIK::__IKSolver__Point*  upperArm;

/// @brief Field forearm offset 0x88
 __declspec(property(get=__get_forearm, put=__set_forearm)) ::RootMotion::FinalIK::__IKSolver__Point*  forearm;

/// @brief Field hand offset 0x90
 __declspec(property(get=__get_hand, put=__set_hand)) ::RootMotion::FinalIK::__IKSolver__Point*  hand;

/// @brief Field isLeft offset 0x98
 __declspec(property(get=__get_isLeft, put=__set_isLeft)) bool  isLeft;

/// @brief Field arm offset 0xa0
 __declspec(property(get=__get_arm, put=__set_arm)) ::RootMotion::FinalIK::__IKSolverVR__Arm*  arm;

/// @brief Field positions offset 0xa8
 __declspec(property(get=__get_positions, put=__set_positions)) ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  positions;

/// @brief Field rotations offset 0xb0
 __declspec(property(get=__get_rotations, put=__set_rotations)) ::ArrayW<::UnityEngine::Quaternion,::Array<::UnityEngine::Quaternion>*>  rotations;

constexpr void __set_IKRotationWeight(float_t  value) ;

constexpr float_t& __get_IKRotationWeight() ;

constexpr float_t const& __get_IKRotationWeight() const;

constexpr void __set_IKRotation(::UnityEngine::Quaternion  value) ;

constexpr ::UnityEngine::Quaternion& __get_IKRotation() ;

constexpr ::UnityEngine::Quaternion const& __get_IKRotation() const;

constexpr void __set_chest(::RootMotion::FinalIK::__IKSolver__Point*  value) ;

constexpr ::RootMotion::FinalIK::__IKSolver__Point* __get_chest() ;

constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolver__Point*> __get_chest() const;

constexpr void __set_shoulder(::RootMotion::FinalIK::__IKSolver__Point*  value) ;

constexpr ::RootMotion::FinalIK::__IKSolver__Point* __get_shoulder() ;

constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolver__Point*> __get_shoulder() const;

constexpr void __set_upperArm(::RootMotion::FinalIK::__IKSolver__Point*  value) ;

constexpr ::RootMotion::FinalIK::__IKSolver__Point* __get_upperArm() ;

constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolver__Point*> __get_upperArm() const;

constexpr void __set_forearm(::RootMotion::FinalIK::__IKSolver__Point*  value) ;

constexpr ::RootMotion::FinalIK::__IKSolver__Point* __get_forearm() ;

constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolver__Point*> __get_forearm() const;

constexpr void __set_hand(::RootMotion::FinalIK::__IKSolver__Point*  value) ;

constexpr ::RootMotion::FinalIK::__IKSolver__Point* __get_hand() ;

constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolver__Point*> __get_hand() const;

constexpr void __set_isLeft(bool  value) ;

constexpr bool& __get_isLeft() ;

constexpr bool const& __get_isLeft() const;

constexpr void __set_arm(::RootMotion::FinalIK::__IKSolverVR__Arm*  value) ;

constexpr ::RootMotion::FinalIK::__IKSolverVR__Arm* __get_arm() ;

constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolverVR__Arm*> __get_arm() const;

constexpr void __set_positions(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  value) ;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>& __get_positions() ;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> const& __get_positions() const;

constexpr void __set_rotations(::ArrayW<::UnityEngine::Quaternion,::Array<::UnityEngine::Quaternion>*>  value) ;

constexpr ::ArrayW<::UnityEngine::Quaternion,::Array<::UnityEngine::Quaternion>*>& __get_rotations() ;

constexpr ::ArrayW<::UnityEngine::Quaternion,::Array<::UnityEngine::Quaternion>*> const& __get_rotations() const;

/// @brief Method IsValid addr 0x1260fd0 size 0x35c virtual true final false
inline bool IsValid(ByRef<::StringW>  message) ;

/// @brief Method SetChain addr 0x126132c size 0x60 virtual false final false
inline bool SetChain(::UnityEngine::Transform*  chest, ::UnityEngine::Transform*  shoulder, ::UnityEngine::Transform*  upperArm, ::UnityEngine::Transform*  forearm, ::UnityEngine::Transform*  hand, ::UnityEngine::Transform*  root) ;

/// @brief Method GetPoints addr 0x126138c size 0x144 virtual true final false
inline ::ArrayW<::RootMotion::FinalIK::__IKSolver__Point*,::Array<::RootMotion::FinalIK::__IKSolver__Point*>*> GetPoints() ;

/// @brief Method GetPoint addr 0x12614d0 size 0x160 virtual true final false
inline ::RootMotion::FinalIK::__IKSolver__Point* GetPoint(::UnityEngine::Transform*  transform) ;

/// @brief Method StoreDefaultLocalState addr 0x1261630 size 0x40 virtual true final false
inline void StoreDefaultLocalState() ;

/// @brief Method FixTransforms addr 0x1261670 size 0x50 virtual true final false
inline void FixTransforms() ;

/// @brief Method OnInitiate addr 0x12616c0 size 0x58 virtual true final false
inline void OnInitiate() ;

/// @brief Method OnUpdate addr 0x1261a20 size 0x20 virtual true final false
inline void OnUpdate() ;

/// @brief Method Solve addr 0x1261a40 size 0x60 virtual false final false
inline void Solve() ;

/// @brief Method Read addr 0x1261718 size 0x308 virtual false final false
inline void Read() ;

/// @brief Method Write addr 0x1261aa0 size 0x178 virtual false final false
inline void Write() ;

static inline ::RootMotion::FinalIK::IKSolverArm* New_ctor() ;

/// @brief Method .ctor addr 0x1261c18 size 0x194 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "IKSolverArm", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IKSolverArm(IKSolverArm && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IKSolverArm", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IKSolverArm(IKSolverArm const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 IKSolverArm()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::IKSolverArm, 0xb8>, "Size mismatch!");

} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::IKSolverArm);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::IKSolverArm*, "RootMotion.FinalIK", "IKSolverArm");
