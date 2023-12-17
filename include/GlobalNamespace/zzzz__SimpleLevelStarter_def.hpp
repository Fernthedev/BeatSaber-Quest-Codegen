#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(SimpleLevelStarter)
namespace UnityEngine::UI {
class Button;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace HMUI {
class ButtonBinder;
}
namespace GlobalNamespace {
class BeatmapLevelSO;
}
namespace UnityEngine {
class TextAsset;
}
namespace Zenject {
class DiContainer;
}
namespace GlobalNamespace {
class GameScenesManager;
}
namespace GlobalNamespace {
class StandardLevelScenesTransitionSetupDataSO;
}
namespace UnityEngine {
class Component;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class MenuTransitionsHelper;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class ScenesTransitionSetupDataSO;
}
// Forward declare root types
namespace GlobalNamespace {
class SimpleLevelStarter;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SimpleLevelStarter);
// Type: ::SimpleLevelStarter
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6085))
// CS Name: ::SimpleLevelStarter*
class CORDL_TYPE SimpleLevelStarter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x78};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x78 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _level offset 0x18
 __declspec(property(get=__get__level, put=__set__level)) ::GlobalNamespace::BeatmapLevelSO*  _level;

/// @brief Field _beatmapCharacteristic offset 0x20
 __declspec(property(get=__get__beatmapCharacteristic, put=__set__beatmapCharacteristic)) ::GlobalNamespace::BeatmapCharacteristicSO*  _beatmapCharacteristic;

/// @brief Field _beatmapDifficulty offset 0x28
 __declspec(property(get=__get__beatmapDifficulty, put=__set__beatmapDifficulty)) ::GlobalNamespace::BeatmapDifficulty  _beatmapDifficulty;

/// @brief Field _useTestNoteCutSoundEffects offset 0x2c
 __declspec(property(get=__get__useTestNoteCutSoundEffects, put=__set__useTestNoteCutSoundEffects)) bool  _useTestNoteCutSoundEffects;

/// @brief Field _overrideStrobeFilterSettingsToAllEffects offset 0x2d
 __declspec(property(get=__get__overrideStrobeFilterSettingsToAllEffects, put=__set__overrideStrobeFilterSettingsToAllEffects)) bool  _overrideStrobeFilterSettingsToAllEffects;

/// @brief Field _recordingTextAsset offset 0x30
 __declspec(property(get=__get__recordingTextAsset, put=__set__recordingTextAsset)) ::UnityEngine::TextAsset*  _recordingTextAsset;

/// @brief Field _prefabBindings offset 0x38
 __declspec(property(get=__get__prefabBindings, put=__set__prefabBindings)) ::ArrayW<::UnityEngine::Component*,::Array<::UnityEngine::Component*>*>  _prefabBindings;

/// @brief Field _forceOverrideEnvironment offset 0x40
 __declspec(property(get=__get__forceOverrideEnvironment, put=__set__forceOverrideEnvironment)) bool  _forceOverrideEnvironment;

/// @brief Field _button offset 0x48
 __declspec(property(get=__get__button, put=__set__button)) ::UnityEngine::UI::Button*  _button;

/// @brief Field _menuTransitionsHelper offset 0x50
 __declspec(property(get=__get__menuTransitionsHelper, put=__set__menuTransitionsHelper)) ::GlobalNamespace::MenuTransitionsHelper*  _menuTransitionsHelper;

/// @brief Field _gameScenesManager offset 0x58
 __declspec(property(get=__get__gameScenesManager, put=__set__gameScenesManager)) ::GlobalNamespace::GameScenesManager*  _gameScenesManager;

/// @brief Field _playerDataModel offset 0x60
 __declspec(property(get=__get__playerDataModel, put=__set__playerDataModel)) ::GlobalNamespace::PlayerDataModel*  _playerDataModel;

/// @brief Field _buttonBinder offset 0x68
 __declspec(property(get=__get__buttonBinder, put=__set__buttonBinder)) ::HMUI::ButtonBinder*  _buttonBinder;

/// @brief Field _gameplayModifiers offset 0x70
 __declspec(property(get=__get__gameplayModifiers, put=__set__gameplayModifiers)) ::GlobalNamespace::GameplayModifiers*  _gameplayModifiers;

constexpr void __set__level(::GlobalNamespace::BeatmapLevelSO*  value) ;

constexpr ::GlobalNamespace::BeatmapLevelSO* __get__level() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelSO*> __get__level() const;

constexpr void __set__beatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO*  value) ;

constexpr ::GlobalNamespace::BeatmapCharacteristicSO* __get__beatmapCharacteristic() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicSO*> __get__beatmapCharacteristic() const;

constexpr void __set__beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty  value) ;

constexpr ::GlobalNamespace::BeatmapDifficulty& __get__beatmapDifficulty() ;

constexpr ::GlobalNamespace::BeatmapDifficulty const& __get__beatmapDifficulty() const;

constexpr void __set__useTestNoteCutSoundEffects(bool  value) ;

constexpr bool& __get__useTestNoteCutSoundEffects() ;

constexpr bool const& __get__useTestNoteCutSoundEffects() const;

constexpr void __set__overrideStrobeFilterSettingsToAllEffects(bool  value) ;

constexpr bool& __get__overrideStrobeFilterSettingsToAllEffects() ;

constexpr bool const& __get__overrideStrobeFilterSettingsToAllEffects() const;

constexpr void __set__recordingTextAsset(::UnityEngine::TextAsset*  value) ;

constexpr ::UnityEngine::TextAsset* __get__recordingTextAsset() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextAsset*> __get__recordingTextAsset() const;

constexpr void __set__prefabBindings(::ArrayW<::UnityEngine::Component*,::Array<::UnityEngine::Component*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::Component*,::Array<::UnityEngine::Component*>*>& __get__prefabBindings() ;

constexpr ::ArrayW<::UnityEngine::Component*,::Array<::UnityEngine::Component*>*> const& __get__prefabBindings() const;

constexpr void __set__forceOverrideEnvironment(bool  value) ;

constexpr bool& __get__forceOverrideEnvironment() ;

constexpr bool const& __get__forceOverrideEnvironment() const;

constexpr void __set__button(::UnityEngine::UI::Button*  value) ;

constexpr ::UnityEngine::UI::Button* __get__button() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> __get__button() const;

constexpr void __set__menuTransitionsHelper(::GlobalNamespace::MenuTransitionsHelper*  value) ;

constexpr ::GlobalNamespace::MenuTransitionsHelper* __get__menuTransitionsHelper() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuTransitionsHelper*> __get__menuTransitionsHelper() const;

constexpr void __set__gameScenesManager(::GlobalNamespace::GameScenesManager*  value) ;

constexpr ::GlobalNamespace::GameScenesManager* __get__gameScenesManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameScenesManager*> __get__gameScenesManager() const;

constexpr void __set__playerDataModel(::GlobalNamespace::PlayerDataModel*  value) ;

constexpr ::GlobalNamespace::PlayerDataModel* __get__playerDataModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> __get__playerDataModel() const;

constexpr void __set__buttonBinder(::HMUI::ButtonBinder*  value) ;

constexpr ::HMUI::ButtonBinder* __get__buttonBinder() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ButtonBinder*> __get__buttonBinder() const;

constexpr void __set__gameplayModifiers(::GlobalNamespace::GameplayModifiers*  value) ;

constexpr ::GlobalNamespace::GameplayModifiers* __get__gameplayModifiers() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiers*> __get__gameplayModifiers() const;

/// @brief Method Awake addr 0x23202d4 size 0xc4 virtual false final false
inline void Awake() ;

/// @brief Method OnDestroy addr 0x2320398 size 0x1c virtual false final false
inline void OnDestroy() ;

/// @brief Method StartLevel addr 0x23203b4 size 0x4dc virtual false final false
inline void StartLevel() ;

/// @brief Method InstallEarlyBindings addr 0x2320890 size 0x128 virtual false final false
inline void InstallEarlyBindings(::GlobalNamespace::ScenesTransitionSetupDataSO*  scenesTransitionSetupData, ::Zenject::DiContainer*  container) ;

/// @brief Method ButtonPressed addr 0x23209b8 size 0x4 virtual false final false
inline void ButtonPressed() ;

/// @brief Method HandleLevelDidFinish addr 0x23209bc size 0x28 virtual false final false
inline void HandleLevelDidFinish(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*  standardLevelSceneSetupData, ::GlobalNamespace::LevelCompletionResults*  levelCompletionResults) ;

static inline ::GlobalNamespace::SimpleLevelStarter* New_ctor() ;

/// @brief Method .ctor addr 0x23209e4 size 0xd8 virtual false final false
inline void _ctor() ;

/// @brief Method <StartLevel>g__AfterSceneSwitchCallback|16_0 addr 0x2320abc size 0x13c virtual false final false
inline void _StartLevel_g__AfterSceneSwitchCallback_16_0(::Zenject::DiContainer*  container) ;

// Ctor Parameters [CppParam { name: "", ty: "SimpleLevelStarter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SimpleLevelStarter(SimpleLevelStarter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimpleLevelStarter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimpleLevelStarter(SimpleLevelStarter const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SimpleLevelStarter()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SimpleLevelStarter, 0x78>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SimpleLevelStarter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SimpleLevelStarter*, "", "SimpleLevelStarter");
