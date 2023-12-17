#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SingleFixedSceneScenesTransitionSetupDataSO_def.hpp"
CORDL_MODULE_EXPORT(RecordingToolScenesTransitionSetupDataSO)
namespace GlobalNamespace {
class RecordingToolSceneSetupData;
}
// Forward declare root types
namespace GlobalNamespace {
class RecordingToolScenesTransitionSetupDataSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO);
// Type: ::RecordingToolScenesTransitionSetupDataSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15418))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6077))
// CS Name: ::RecordingToolScenesTransitionSetupDataSO*
class CORDL_TYPE RecordingToolScenesTransitionSetupDataSO : public ::GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO)]{};

/// @brief Method Init addr 0x231b73c size 0x8 virtual false final false
inline void Init(::GlobalNamespace::RecordingToolSceneSetupData*  recordingToolSceneSetupData) ;

static inline ::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO* New_ctor() ;

/// @brief Method .ctor addr 0x231ff88 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "RecordingToolScenesTransitionSetupDataSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RecordingToolScenesTransitionSetupDataSO(RecordingToolScenesTransitionSetupDataSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RecordingToolScenesTransitionSetupDataSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RecordingToolScenesTransitionSetupDataSO(RecordingToolScenesTransitionSetupDataSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RecordingToolScenesTransitionSetupDataSO()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO*, "", "RecordingToolScenesTransitionSetupDataSO");
