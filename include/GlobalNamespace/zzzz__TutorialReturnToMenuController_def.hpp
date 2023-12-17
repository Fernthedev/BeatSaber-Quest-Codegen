#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TutorialReturnToMenuController)
namespace GlobalNamespace {
class TutorialScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class IReturnToMenuController;
}
// Forward declare root types
namespace GlobalNamespace {
class TutorialReturnToMenuController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TutorialReturnToMenuController);
// Type: ::TutorialReturnToMenuController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5085))
// CS Name: ::TutorialReturnToMenuController*
class CORDL_TYPE TutorialReturnToMenuController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _tutorialSceneSetupData offset 0x18
 __declspec(property(get=__get__tutorialSceneSetupData, put=__set__tutorialSceneSetupData)) ::GlobalNamespace::TutorialScenesTransitionSetupDataSO*  _tutorialSceneSetupData;

/// @brief Convert operator to "::GlobalNamespace::IReturnToMenuController"
constexpr operator  ::GlobalNamespace::IReturnToMenuController*() noexcept;

constexpr void __set__tutorialSceneSetupData(::GlobalNamespace::TutorialScenesTransitionSetupDataSO*  value) ;

constexpr ::GlobalNamespace::TutorialScenesTransitionSetupDataSO* __get__tutorialSceneSetupData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*> __get__tutorialSceneSetupData() const;

/// @brief Method ReturnToMenu addr 0x23cb040 size 0x20 virtual true final true
inline void ReturnToMenu() ;

static inline ::GlobalNamespace::TutorialReturnToMenuController* New_ctor() ;

/// @brief Method .ctor addr 0x23cb060 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TutorialReturnToMenuController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TutorialReturnToMenuController(TutorialReturnToMenuController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TutorialReturnToMenuController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TutorialReturnToMenuController(TutorialReturnToMenuController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TutorialReturnToMenuController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TutorialReturnToMenuController, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TutorialReturnToMenuController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TutorialReturnToMenuController*, "", "TutorialReturnToMenuController");
