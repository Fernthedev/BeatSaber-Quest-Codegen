#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(AnniversaryManager)
namespace GlobalNamespace {
struct __MainMenuViewController__MenuButton;
}
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class FireworksController;
}
namespace GlobalNamespace {
class MainMenuViewController;
}
// Forward declare root types
namespace GlobalNamespace {
class AnniversaryManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AnniversaryManager);
// Type: ::AnniversaryManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4009))
// CS Name: ::AnniversaryManager*
class CORDL_TYPE AnniversaryManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _fireworksController offset 0x18
 __declspec(property(get=__get__fireworksController, put=__set__fireworksController)) ::GlobalNamespace::FireworksController*  _fireworksController;

/// @brief Field _mainMenuViewController offset 0x20
 __declspec(property(get=__get__mainMenuViewController, put=__set__mainMenuViewController)) ::GlobalNamespace::MainMenuViewController*  _mainMenuViewController;

constexpr void __set__fireworksController(::GlobalNamespace::FireworksController*  value) ;

constexpr ::GlobalNamespace::FireworksController* __get__fireworksController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FireworksController*> __get__fireworksController() const;

constexpr void __set__mainMenuViewController(::GlobalNamespace::MainMenuViewController*  value) ;

constexpr ::GlobalNamespace::MainMenuViewController* __get__mainMenuViewController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainMenuViewController*> __get__mainMenuViewController() const;

/// @brief Method Start addr 0x22220c8 size 0xfc virtual false final false
inline void Start() ;

/// @brief Method OnDestroy addr 0x22221e4 size 0x140 virtual false final false
inline void OnDestroy() ;

/// @brief Method HandleMainMenuViewControllerDidFinish addr 0x2222324 size 0x4 virtual false final false
inline void HandleMainMenuViewControllerDidFinish(::GlobalNamespace::MainMenuViewController*  mainMenuViewController, ::GlobalNamespace::__MainMenuViewController__MenuButton  menuButton) ;

/// @brief Method HandleMainMenuViewControllerMusicPackPromoButtonWasPressed addr 0x2222348 size 0x4 virtual false final false
inline void HandleMainMenuViewControllerMusicPackPromoButtonWasPressed(::GlobalNamespace::IBeatmapLevelPack*  musicPack, ::GlobalNamespace::IPreviewBeatmapLevel*  beatmap) ;

/// @brief Method StartFireworks addr 0x22221c4 size 0x20 virtual false final false
inline void StartFireworks() ;

/// @brief Method StopFireworks addr 0x2222328 size 0x20 virtual false final false
inline void StopFireworks() ;

static inline ::GlobalNamespace::AnniversaryManager* New_ctor() ;

/// @brief Method .ctor addr 0x222234c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "AnniversaryManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnniversaryManager(AnniversaryManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnniversaryManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnniversaryManager(AnniversaryManager const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AnniversaryManager()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AnniversaryManager, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AnniversaryManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AnniversaryManager*, "", "AnniversaryManager");
