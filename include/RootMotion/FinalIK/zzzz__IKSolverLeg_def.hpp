#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__IKSolver_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(IKSolverLeg)
namespace UnityEngine {
struct Vector3;
}
namespace RootMotion::FinalIK {
class __IKSolverVR__Leg;
}
namespace UnityEngine {
class Transform;
}
namespace RootMotion::FinalIK {
class __IKSolver__Point;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class IKSolverLeg;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::IKSolverLeg);
// Type: RootMotion.FinalIK::IKSolverLeg
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12564))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12575))
// CS Name: ::RootMotion.FinalIK::IKSolverLeg*
class CORDL_TYPE IKSolverLeg : public ::RootMotion::FinalIK::IKSolver {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xc0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xc0 - sizeof(::RootMotion::FinalIK::IKSolver)]{};

/// @brief Field IKRotationWeight offset 0x58
 __declspec(property(get=__get_IKRotationWeight, put=__set_IKRotationWeight)) float_t  IKRotationWeight;

/// @brief Field IKRotation offset 0x5c
 __declspec(property(get=__get_IKRotation, put=__set_IKRotation)) ::UnityEngine::Quaternion  IKRotation;

/// @brief Field pelvis offset 0x70
 __declspec(property(get=__get_pelvis, put=__set_pelvis)) ::RootMotion::FinalIK::__IKSolver__Point*  pelvis;

/// @brief Field thigh offset 0x78
 __declspec(property(get=__get_thigh, put=__set_thigh)) ::RootMotion::FinalIK::__IKSolver__Point*  thigh;

/// @brief Field calf offset 0x80
 __declspec(property(get=__get_calf, put=__set_calf)) ::RootMotion::FinalIK::__IKSolver__Point*  calf;

/// @brief Field foot offset 0x88
 __declspec(property(get=__get_foot, put=__set_foot)) ::RootMotion::FinalIK::__IKSolver__Point*  foot;

/// @brief Field toe offset 0x90
 __declspec(property(get=__get_toe, put=__set_toe)) ::RootMotion::FinalIK::__IKSolver__Point*  toe;

/// @brief Field leg offset 0x98
 __declspec(property(get=__get_leg, put=__set_leg)) ::RootMotion::FinalIK::__IKSolverVR__Leg*  leg;

/// @brief Field heelOffset offset 0xa0
 __declspec(property(get=__get_heelOffset, put=__set_heelOffset)) ::UnityEngine::Vector3  heelOffset;

/// @brief Field positions offset 0xb0
 __declspec(property(get=__get_positions, put=__set_positions)) ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  positions;

/// @brief Field rotations offset 0xb8
 __declspec(property(get=__get_rotations, put=__set_rotations)) ::ArrayW<::UnityEngine::Quaternion,::Array<::UnityEngine::Quaternion>*>  rotations;

constexpr void __set_IKRotationWeight(float_t  value) ;

constexpr float_t& __get_IKRotationWeight() ;

constexpr float_t const& __get_IKRotationWeight() const;

constexpr void __set_IKRotation(::UnityEngine::Quaternion  value) ;

constexpr ::UnityEngine::Quaternion& __get_IKRotation() ;

constexpr ::UnityEngine::Quaternion const& __get_IKRotation() const;

constexpr void __set_pelvis(::RootMotion::FinalIK::__IKSolver__Point*  value) ;

constexpr ::RootMotion::FinalIK::__IKSolver__Point* __get_pelvis() ;

constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolver__Point*> __get_pelvis() const;

constexpr void __set_thigh(::RootMotion::FinalIK::__IKSolver__Point*  value) ;

constexpr ::RootMotion::FinalIK::__IKSolver__Point* __get_thigh() ;

constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolver__Point*> __get_thigh() const;

constexpr void __set_calf(::RootMotion::FinalIK::__IKSolver__Point*  value) ;

constexpr ::RootMotion::FinalIK::__IKSolver__Point* __get_calf() ;

constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolver__Point*> __get_calf() const;

constexpr void __set_foot(::RootMotion::FinalIK::__IKSolver__Point*  value) ;

constexpr ::RootMotion::FinalIK::__IKSolver__Point* __get_foot() ;

constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolver__Point*> __get_foot() const;

constexpr void __set_toe(::RootMotion::FinalIK::__IKSolver__Point*  value) ;

constexpr ::RootMotion::FinalIK::__IKSolver__Point* __get_toe() ;

constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolver__Point*> __get_toe() const;

constexpr void __set_leg(::RootMotion::FinalIK::__IKSolverVR__Leg*  value) ;

constexpr ::RootMotion::FinalIK::__IKSolverVR__Leg* __get_leg() ;

constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolverVR__Leg*> __get_leg() const;

constexpr void __set_heelOffset(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_heelOffset() ;

constexpr ::UnityEngine::Vector3 const& __get_heelOffset() const;

constexpr void __set_positions(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  value) ;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>& __get_positions() ;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> const& __get_positions() const;

constexpr void __set_rotations(::ArrayW<::UnityEngine::Quaternion,::Array<::UnityEngine::Quaternion>*>  value) ;

constexpr ::ArrayW<::UnityEngine::Quaternion,::Array<::UnityEngine::Quaternion>*>& __get_rotations() ;

constexpr ::ArrayW<::UnityEngine::Quaternion,::Array<::UnityEngine::Quaternion>*> const& __get_rotations() const;

/// @brief Method IsValid addr 0x126a8b8 size 0x35c virtual true final false
inline bool IsValid(ByRef<::StringW>  message) ;

/// @brief Method SetChain addr 0x126ac14 size 0x64 virtual false final false
inline bool SetChain(::UnityEngine::Transform*  pelvis, ::UnityEngine::Transform*  thigh, ::UnityEngine::Transform*  calf, ::UnityEngine::Transform*  foot, ::UnityEngine::Transform*  toe, ::UnityEngine::Transform*  root) ;

/// @brief Method GetPoints addr 0x126ac78 size 0x144 virtual true final false
inline ::ArrayW<::RootMotion::FinalIK::__IKSolver__Point*,::Array<::RootMotion::FinalIK::__IKSolver__Point*>*> GetPoints() ;

/// @brief Method GetPoint addr 0x126adbc size 0x160 virtual true final false
inline ::RootMotion::FinalIK::__IKSolver__Point* GetPoint(::UnityEngine::Transform*  transform) ;

/// @brief Method StoreDefaultLocalState addr 0x126af1c size 0x50 virtual true final false
inline void StoreDefaultLocalState() ;

/// @brief Method FixTransforms addr 0x126af6c size 0x60 virtual true final false
inline void FixTransforms() ;

/// @brief Method OnInitiate addr 0x126afcc size 0x58 virtual true final false
inline void OnInitiate() ;

/// @brief Method OnUpdate addr 0x126b328 size 0x20 virtual true final false
inline void OnUpdate() ;

/// @brief Method Solve addr 0x126b348 size 0x84 virtual false final false
inline void Solve() ;

/// @brief Method Read addr 0x126b024 size 0x304 virtual false final false
inline void Read() ;

/// @brief Method Write addr 0x126b3cc size 0x178 virtual false final false
inline void Write() ;

static inline ::RootMotion::FinalIK::IKSolverLeg* New_ctor() ;

/// @brief Method .ctor addr 0x126b7ac size 0x194 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "IKSolverLeg", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IKSolverLeg(IKSolverLeg && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IKSolverLeg", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IKSolverLeg(IKSolverLeg const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 IKSolverLeg()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::IKSolverLeg, 0xc0>, "Size mismatch!");

} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::IKSolverLeg);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::IKSolverLeg*, "RootMotion.FinalIK", "IKSolverLeg");
