#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MissionObjectiveChecker_def.hpp"
CORDL_MODULE_EXPORT(SimpleValueMissionObjectiveChecker)
// Forward declare root types
namespace GlobalNamespace {
class SimpleValueMissionObjectiveChecker;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SimpleValueMissionObjectiveChecker);
// Type: ::SimpleValueMissionObjectiveChecker
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5093))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5098))
// CS Name: ::SimpleValueMissionObjectiveChecker*
class CORDL_TYPE SimpleValueMissionObjectiveChecker : public ::GlobalNamespace::MissionObjectiveChecker {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::GlobalNamespace::MissionObjectiveChecker)]{};

/// @brief Method CheckAndUpdateStatus addr 0x23cb350 size 0x104 virtual false final false
inline void CheckAndUpdateStatus() ;

static inline ::GlobalNamespace::SimpleValueMissionObjectiveChecker* New_ctor() ;

/// @brief Method .ctor addr 0x23cb45c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SimpleValueMissionObjectiveChecker", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SimpleValueMissionObjectiveChecker(SimpleValueMissionObjectiveChecker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimpleValueMissionObjectiveChecker", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimpleValueMissionObjectiveChecker(SimpleValueMissionObjectiveChecker const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SimpleValueMissionObjectiveChecker()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SimpleValueMissionObjectiveChecker, 0x48>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SimpleValueMissionObjectiveChecker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SimpleValueMissionObjectiveChecker*, "", "SimpleValueMissionObjectiveChecker");
