#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(StandardLevelRestartController)
namespace GlobalNamespace {
class StandardLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class ILevelRestartController;
}
namespace GlobalNamespace {
class PrepareLevelCompletionResults;
}
// Forward declare root types
namespace GlobalNamespace {
class StandardLevelRestartController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StandardLevelRestartController);
// Type: ::StandardLevelRestartController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5082))
// CS Name: ::StandardLevelRestartController*
class CORDL_TYPE StandardLevelRestartController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _standardLevelSceneSetupData offset 0x18
 __declspec(property(get=__get__standardLevelSceneSetupData, put=__set__standardLevelSceneSetupData)) ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*  _standardLevelSceneSetupData;

/// @brief Field _prepareLevelCompletionResults offset 0x20
 __declspec(property(get=__get__prepareLevelCompletionResults, put=__set__prepareLevelCompletionResults)) ::GlobalNamespace::PrepareLevelCompletionResults*  _prepareLevelCompletionResults;

/// @brief Convert operator to "::GlobalNamespace::ILevelRestartController"
constexpr operator  ::GlobalNamespace::ILevelRestartController*() noexcept;

constexpr void __set__standardLevelSceneSetupData(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*  value) ;

constexpr ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* __get__standardLevelSceneSetupData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*> __get__standardLevelSceneSetupData() const;

constexpr void __set__prepareLevelCompletionResults(::GlobalNamespace::PrepareLevelCompletionResults*  value) ;

constexpr ::GlobalNamespace::PrepareLevelCompletionResults* __get__prepareLevelCompletionResults() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PrepareLevelCompletionResults*> __get__prepareLevelCompletionResults() const;

/// @brief Method RestartLevel addr 0x23caf88 size 0x40 virtual true final true
inline void RestartLevel() ;

static inline ::GlobalNamespace::StandardLevelRestartController* New_ctor() ;

/// @brief Method .ctor addr 0x23cafc8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "StandardLevelRestartController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StandardLevelRestartController(StandardLevelRestartController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StandardLevelRestartController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StandardLevelRestartController(StandardLevelRestartController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 StandardLevelRestartController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandardLevelRestartController, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StandardLevelRestartController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardLevelRestartController*, "", "StandardLevelRestartController");
