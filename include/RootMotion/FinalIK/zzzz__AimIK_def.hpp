#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__IK_def.hpp"
CORDL_MODULE_EXPORT(AimIK)
namespace RootMotion::FinalIK {
class IKSolverAim;
}
namespace RootMotion::FinalIK {
class IKSolver;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class AimIK;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::AimIK);
// Type: RootMotion.FinalIK::AimIK
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12536))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12530))
// CS Name: ::RootMotion.FinalIK::AimIK*
class CORDL_TYPE AimIK : public ::RootMotion::FinalIK::IK {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::RootMotion::FinalIK::IK)]{};

/// @brief Field solver offset 0x38
 __declspec(property(get=__get_solver, put=__set_solver)) ::RootMotion::FinalIK::IKSolverAim*  solver;

constexpr void __set_solver(::RootMotion::FinalIK::IKSolverAim*  value) ;

constexpr ::RootMotion::FinalIK::IKSolverAim* __get_solver() ;

constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::IKSolverAim*> __get_solver() const;

/// @brief Method OpenUserManual addr 0x124df88 size 0x44 virtual true final false
inline void OpenUserManual() ;

/// @brief Method OpenScriptReference addr 0x124dfcc size 0x44 virtual true final false
inline void OpenScriptReference() ;

/// @brief Method OpenSetupTutorial addr 0x124e010 size 0x44 virtual false final false
inline void OpenSetupTutorial() ;

/// @brief Method SupportGroup addr 0x124e054 size 0x44 virtual false final false
inline void SupportGroup() ;

/// @brief Method ASThread addr 0x124e098 size 0x44 virtual false final false
inline void ASThread() ;

/// @brief Method GetIKSolver addr 0x124e0dc size 0x8 virtual true final false
inline ::RootMotion::FinalIK::IKSolver* GetIKSolver() ;

static inline ::RootMotion::FinalIK::AimIK* New_ctor() ;

/// @brief Method .ctor addr 0x124e0e4 size 0x68 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "AimIK", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AimIK(AimIK && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AimIK", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AimIK(AimIK const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AimIK()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::AimIK, 0x40>, "Size mismatch!");

} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::AimIK);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::AimIK*, "RootMotion.FinalIK", "AimIK");
