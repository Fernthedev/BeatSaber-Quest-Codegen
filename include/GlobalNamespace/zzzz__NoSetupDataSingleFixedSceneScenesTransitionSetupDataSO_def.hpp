#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SingleFixedSceneScenesTransitionSetupDataSO_def.hpp"
CORDL_MODULE_EXPORT(NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO)
// Forward declare root types
namespace GlobalNamespace {
class NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO);
// Type: ::NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15418))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15414))
// CS Name: ::NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO*
class CORDL_TYPE NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO : public ::GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO)]{};

/// @brief Method Init addr 0xe236c0 size 0x8 virtual false final false
inline void Init() ;

static inline ::GlobalNamespace::NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO* New_ctor() ;

/// @brief Method .ctor addr 0xe236b8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO(NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO(NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO*, "", "NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO");
