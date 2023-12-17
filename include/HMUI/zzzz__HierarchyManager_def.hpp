#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(HierarchyManager)
namespace Zenject {
class DiContainer;
}
namespace GlobalNamespace {
class GameScenesManager;
}
namespace HMUI {
class FlowCoordinator;
}
namespace GlobalNamespace {
class ScenesTransitionSetupDataSO;
}
namespace HMUI {
class ScreenSystem;
}
// Forward declare root types
namespace HMUI {
class HierarchyManager;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::HierarchyManager);
// Type: HMUI::HierarchyManager
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13583))
// CS Name: ::HMUI::HierarchyManager*
class CORDL_TYPE HierarchyManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _screenSystem offset 0x18
 __declspec(property(get=__get__screenSystem, put=__set__screenSystem)) ::HMUI::ScreenSystem*  _screenSystem;

/// @brief Field _gameScenesManager offset 0x20
 __declspec(property(get=__get__gameScenesManager, put=__set__gameScenesManager)) ::GlobalNamespace::GameScenesManager*  _gameScenesManager;

/// @brief Field _rootFlowCoordinator offset 0x28
 __declspec(property(get=__get__rootFlowCoordinator, put=__set__rootFlowCoordinator)) ::HMUI::FlowCoordinator*  _rootFlowCoordinator;

constexpr void __set__screenSystem(::HMUI::ScreenSystem*  value) ;

constexpr ::HMUI::ScreenSystem* __get__screenSystem() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ScreenSystem*> __get__screenSystem() const;

constexpr void __set__gameScenesManager(::GlobalNamespace::GameScenesManager*  value) ;

constexpr ::GlobalNamespace::GameScenesManager* __get__gameScenesManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameScenesManager*> __get__gameScenesManager() const;

constexpr void __set__rootFlowCoordinator(::HMUI::FlowCoordinator*  value) ;

constexpr ::HMUI::FlowCoordinator* __get__rootFlowCoordinator() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::FlowCoordinator*> __get__rootFlowCoordinator() const;

/// @brief Method Start addr 0x212a800 size 0x11c virtual false final false
inline void Start() ;

/// @brief Method OnDestroy addr 0x212a9d0 size 0x140 virtual false final false
inline void OnDestroy() ;

/// @brief Method HandleSceneTransitionDidFinish addr 0x212a91c size 0xb4 virtual false final false
inline void HandleSceneTransitionDidFinish(::GlobalNamespace::ScenesTransitionSetupDataSO*  scenesTransitionSetupData, ::Zenject::DiContainer*  container) ;

/// @brief Method HandleBeforeDismissingScenes addr 0x212ab10 size 0xb4 virtual false final false
inline void HandleBeforeDismissingScenes() ;

/// @brief Method StartWithFlowCoordinator addr 0x212abc4 size 0x28 virtual false final false
inline void StartWithFlowCoordinator(::HMUI::FlowCoordinator*  flowCoordinator) ;

static inline ::HMUI::HierarchyManager* New_ctor() ;

/// @brief Method .ctor addr 0x212abec size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "HierarchyManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HierarchyManager(HierarchyManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HierarchyManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HierarchyManager(HierarchyManager const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HierarchyManager()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::HierarchyManager, 0x30>, "Size mismatch!");

} // namespace end def HMUI
NEED_NO_BOX(::HMUI::HierarchyManager);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::HierarchyManager*, "HMUI", "HierarchyManager");
