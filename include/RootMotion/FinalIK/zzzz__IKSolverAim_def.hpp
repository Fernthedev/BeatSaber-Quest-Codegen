#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__IKSolverHeuristic_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IKSolverAim)
namespace RootMotion::FinalIK {
class __IKSolver__IterationDelegate;
}
namespace RootMotion::FinalIK {
class RotationLimit;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace RootMotion::FinalIK {
class __IKSolver__Bone;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class IKSolverAim;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::IKSolverAim);
// Type: RootMotion.FinalIK::IKSolverAim
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12574))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12565))
// CS Name: ::RootMotion.FinalIK::IKSolverAim*
class CORDL_TYPE IKSolverAim : public ::RootMotion::FinalIK::IKSolverHeuristic {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xf0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xf0 - sizeof(::RootMotion::FinalIK::IKSolverHeuristic)]{};

/// @brief Field transform offset 0x88
 __declspec(property(get=__get_transform, put=__set_transform)) ::UnityEngine::Transform*  transform;

/// @brief Field axis offset 0x90
 __declspec(property(get=__get_axis, put=__set_axis)) ::UnityEngine::Vector3  axis;

/// @brief Field poleAxis offset 0x9c
 __declspec(property(get=__get_poleAxis, put=__set_poleAxis)) ::UnityEngine::Vector3  poleAxis;

/// @brief Field polePosition offset 0xa8
 __declspec(property(get=__get_polePosition, put=__set_polePosition)) ::UnityEngine::Vector3  polePosition;

/// @brief Field poleWeight offset 0xb4
 __declspec(property(get=__get_poleWeight, put=__set_poleWeight)) float_t  poleWeight;

/// @brief Field poleTarget offset 0xb8
 __declspec(property(get=__get_poleTarget, put=__set_poleTarget)) ::UnityEngine::Transform*  poleTarget;

/// @brief Field clampWeight offset 0xc0
 __declspec(property(get=__get_clampWeight, put=__set_clampWeight)) float_t  clampWeight;

/// @brief Field clampSmoothing offset 0xc4
 __declspec(property(get=__get_clampSmoothing, put=__set_clampSmoothing)) int32_t  clampSmoothing;

/// @brief Field OnPreIteration offset 0xc8
 __declspec(property(get=__get_OnPreIteration, put=__set_OnPreIteration)) ::RootMotion::FinalIK::__IKSolver__IterationDelegate*  OnPreIteration;

/// @brief Field step offset 0xd0
 __declspec(property(get=__get_step, put=__set_step)) float_t  step;

/// @brief Field clampedIKPosition offset 0xd4
 __declspec(property(get=__get_clampedIKPosition, put=__set_clampedIKPosition)) ::UnityEngine::Vector3  clampedIKPosition;

/// @brief Field transformLimit offset 0xe0
 __declspec(property(get=__get_transformLimit, put=__set_transformLimit)) ::RootMotion::FinalIK::RotationLimit*  transformLimit;

/// @brief Field lastTransform offset 0xe8
 __declspec(property(get=__get_lastTransform, put=__set_lastTransform)) ::UnityEngine::Transform*  lastTransform;

 __declspec(property(get=get_transformAxis)) ::UnityEngine::Vector3  transformAxis;

 __declspec(property(get=get_transformPoleAxis)) ::UnityEngine::Vector3  transformPoleAxis;

 __declspec(property(get=get_minBones)) int32_t  minBones;

 __declspec(property(get=get_localDirection)) ::UnityEngine::Vector3  localDirection;

constexpr void __set_transform(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get_transform() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get_transform() const;

constexpr void __set_axis(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_axis() ;

constexpr ::UnityEngine::Vector3 const& __get_axis() const;

constexpr void __set_poleAxis(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_poleAxis() ;

constexpr ::UnityEngine::Vector3 const& __get_poleAxis() const;

constexpr void __set_polePosition(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_polePosition() ;

constexpr ::UnityEngine::Vector3 const& __get_polePosition() const;

constexpr void __set_poleWeight(float_t  value) ;

constexpr float_t& __get_poleWeight() ;

constexpr float_t const& __get_poleWeight() const;

constexpr void __set_poleTarget(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get_poleTarget() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get_poleTarget() const;

constexpr void __set_clampWeight(float_t  value) ;

constexpr float_t& __get_clampWeight() ;

constexpr float_t const& __get_clampWeight() const;

constexpr void __set_clampSmoothing(int32_t  value) ;

constexpr int32_t& __get_clampSmoothing() ;

constexpr int32_t const& __get_clampSmoothing() const;

constexpr void __set_OnPreIteration(::RootMotion::FinalIK::__IKSolver__IterationDelegate*  value) ;

constexpr ::RootMotion::FinalIK::__IKSolver__IterationDelegate* __get_OnPreIteration() ;

constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolver__IterationDelegate*> __get_OnPreIteration() const;

constexpr void __set_step(float_t  value) ;

constexpr float_t& __get_step() ;

constexpr float_t const& __get_step() const;

constexpr void __set_clampedIKPosition(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_clampedIKPosition() ;

constexpr ::UnityEngine::Vector3 const& __get_clampedIKPosition() const;

constexpr void __set_transformLimit(::RootMotion::FinalIK::RotationLimit*  value) ;

constexpr ::RootMotion::FinalIK::RotationLimit* __get_transformLimit() ;

constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::RotationLimit*> __get_transformLimit() const;

constexpr void __set_lastTransform(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get_lastTransform() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get_lastTransform() const;

/// @brief Method GetAngle addr 0x125fb80 size 0x138 virtual false final false
inline float_t GetAngle() ;

/// @brief Method get_transformAxis addr 0x125fcb8 size 0x30 virtual false final false
inline ::UnityEngine::Vector3 get_transformAxis() ;

/// @brief Method get_transformPoleAxis addr 0x125fce8 size 0x30 virtual false final false
inline ::UnityEngine::Vector3 get_transformPoleAxis() ;

/// @brief Method OnInitiate addr 0x125fd18 size 0x28c virtual true final false
inline void OnInitiate() ;

/// @brief Method OnUpdate addr 0x125ffa4 size 0x56c virtual true final false
inline void OnUpdate() ;

/// @brief Method get_minBones addr 0x126091c size 0x8 virtual true final false
inline int32_t get_minBones() ;

/// @brief Method Solve addr 0x1260874 size 0xa8 virtual false final false
inline void Solve() ;

/// @brief Method GetClampedIKPosition addr 0x1260510 size 0x364 virtual false final false
inline ::UnityEngine::Vector3 GetClampedIKPosition() ;

/// @brief Method RotateToTarget addr 0x1260924 size 0x538 virtual false final false
inline void RotateToTarget(::UnityEngine::Vector3  targetPosition, ::RootMotion::FinalIK::__IKSolver__Bone*  bone, float_t  weight) ;

/// @brief Method get_localDirection addr 0x1260e5c size 0x60 virtual true final false
inline ::UnityEngine::Vector3 get_localDirection() ;

static inline ::RootMotion::FinalIK::IKSolverAim* New_ctor() ;

/// @brief Method .ctor addr 0x1260ebc size 0xa0 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "IKSolverAim", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IKSolverAim(IKSolverAim && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IKSolverAim", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IKSolverAim(IKSolverAim const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 IKSolverAim()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::IKSolverAim, 0xf0>, "Size mismatch!");

} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::IKSolverAim);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::IKSolverAim*, "RootMotion.FinalIK", "IKSolverAim");
