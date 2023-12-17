#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__IK_def.hpp"
CORDL_MODULE_EXPORT(ArmIK)
namespace RootMotion::FinalIK {
class IKSolver;
}
namespace RootMotion::FinalIK {
class IKSolverArm;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class ArmIK;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::ArmIK);
// Type: RootMotion.FinalIK::ArmIK
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12536))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12531))
// CS Name: ::RootMotion.FinalIK::ArmIK*
class CORDL_TYPE ArmIK : public ::RootMotion::FinalIK::IK {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::RootMotion::FinalIK::IK)]{};

/// @brief Field solver offset 0x38
 __declspec(property(get=__get_solver, put=__set_solver)) ::RootMotion::FinalIK::IKSolverArm*  solver;

constexpr void __set_solver(::RootMotion::FinalIK::IKSolverArm*  value) ;

constexpr ::RootMotion::FinalIK::IKSolverArm* __get_solver() ;

constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::IKSolverArm*> __get_solver() const;

/// @brief Method OpenUserManual addr 0x124e154 size 0x44 virtual true final false
inline void OpenUserManual() ;

/// @brief Method OpenScriptReference addr 0x124e198 size 0x44 virtual true final false
inline void OpenScriptReference() ;

/// @brief Method SupportGroup addr 0x124e1dc size 0x44 virtual false final false
inline void SupportGroup() ;

/// @brief Method ASThread addr 0x124e220 size 0x44 virtual false final false
inline void ASThread() ;

/// @brief Method GetIKSolver addr 0x124e264 size 0x8 virtual true final false
inline ::RootMotion::FinalIK::IKSolver* GetIKSolver() ;

static inline ::RootMotion::FinalIK::ArmIK* New_ctor() ;

/// @brief Method .ctor addr 0x124e26c size 0x68 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ArmIK", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ArmIK(ArmIK && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ArmIK", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ArmIK(ArmIK const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ArmIK()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::ArmIK, 0x40>, "Size mismatch!");

} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::ArmIK);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::ArmIK*, "RootMotion.FinalIK", "ArmIK");
