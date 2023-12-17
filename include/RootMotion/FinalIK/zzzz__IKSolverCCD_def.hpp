#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__IKSolverHeuristic_def.hpp"
CORDL_MODULE_EXPORT(IKSolverCCD)
namespace UnityEngine {
struct Vector3;
}
namespace RootMotion::FinalIK {
class __IKSolver__IterationDelegate;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class IKSolverCCD;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::IKSolverCCD);
// Type: RootMotion.FinalIK::IKSolverCCD
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12574))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12567))
// CS Name: ::RootMotion.FinalIK::IKSolverCCD*
class CORDL_TYPE IKSolverCCD : public ::RootMotion::FinalIK::IKSolverHeuristic {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::RootMotion::FinalIK::IKSolverHeuristic)]{};

/// @brief Field OnPreIteration offset 0x88
 __declspec(property(get=__get_OnPreIteration, put=__set_OnPreIteration)) ::RootMotion::FinalIK::__IKSolver__IterationDelegate*  OnPreIteration;

constexpr void __set_OnPreIteration(::RootMotion::FinalIK::__IKSolver__IterationDelegate*  value) ;

constexpr ::RootMotion::FinalIK::__IKSolver__IterationDelegate* __get_OnPreIteration() ;

constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolver__IterationDelegate*> __get_OnPreIteration() const;

/// @brief Method FadeOutBoneWeights addr 0x1261dac size 0x70 virtual false final false
inline void FadeOutBoneWeights() ;

/// @brief Method OnInitiate addr 0x1261e1c size 0x6c virtual true final false
inline void OnInitiate() ;

/// @brief Method OnUpdate addr 0x1262310 size 0x2e0 virtual true final false
inline void OnUpdate() ;

/// @brief Method Solve addr 0x12629e4 size 0x690 virtual false final false
inline void Solve(::UnityEngine::Vector3  targetPosition) ;

static inline ::RootMotion::FinalIK::IKSolverCCD* New_ctor() ;

/// @brief Method .ctor addr 0x1263074 size 0x4 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "IKSolverCCD", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IKSolverCCD(IKSolverCCD && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IKSolverCCD", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IKSolverCCD(IKSolverCCD const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 IKSolverCCD()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::IKSolverCCD, 0x90>, "Size mismatch!");

} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::IKSolverCCD);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::IKSolverCCD*, "RootMotion.FinalIK", "IKSolverCCD");
