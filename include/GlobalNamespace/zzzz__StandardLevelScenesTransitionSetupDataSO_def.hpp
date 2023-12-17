#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LevelScenesTransitionSetupDataSO_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(StandardLevelScenesTransitionSetupDataSO)
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace GlobalNamespace {
class PracticeSettings;
}
namespace GlobalNamespace {
class MainSettingsModelSO;
}
namespace GlobalNamespace {
class ColorScheme;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
struct __RecordingToolManager__SetupData;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class SceneInfo;
}
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace GlobalNamespace {
class BeatmapDataCache;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace GlobalNamespace {
class OverrideEnvironmentSettings;
}
// Forward declare root types
namespace GlobalNamespace {
class StandardLevelScenesTransitionSetupDataSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO);
// Type: ::StandardLevelScenesTransitionSetupDataSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6067))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6079))
// CS Name: ::StandardLevelScenesTransitionSetupDataSO*
class CORDL_TYPE StandardLevelScenesTransitionSetupDataSO : public ::GlobalNamespace::LevelScenesTransitionSetupDataSO {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x98};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x98 - sizeof(::GlobalNamespace::LevelScenesTransitionSetupDataSO)]{};

/// @brief Field _standardGameplaySceneInfo offset 0x38
 __declspec(property(get=__get__standardGameplaySceneInfo, put=__set__standardGameplaySceneInfo)) ::GlobalNamespace::SceneInfo*  _standardGameplaySceneInfo;

/// @brief Field _gameCoreSceneInfo offset 0x40
 __declspec(property(get=__get__gameCoreSceneInfo, put=__set__gameCoreSceneInfo)) ::GlobalNamespace::SceneInfo*  _gameCoreSceneInfo;

/// @brief Field _mainSettingsModel offset 0x48
 __declspec(property(get=__get__mainSettingsModel, put=__set__mainSettingsModel)) ::GlobalNamespace::MainSettingsModelSO*  _mainSettingsModel;

/// @brief Field didFinishEvent offset 0x50
 __declspec(property(get=__get_didFinishEvent, put=__set_didFinishEvent)) ::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*,::GlobalNamespace::LevelCompletionResults*>*  didFinishEvent;

/// @brief Field <gameMode>k__BackingField offset 0x58
 __declspec(property(get=__get__gameMode_k__BackingField, put=__set__gameMode_k__BackingField)) ::StringW  _gameMode_k__BackingField;

/// @brief Field <difficultyBeatmap>k__BackingField offset 0x60
 __declspec(property(get=__get__difficultyBeatmap_k__BackingField, put=__set__difficultyBeatmap_k__BackingField)) ::GlobalNamespace::IDifficultyBeatmap*  _difficultyBeatmap_k__BackingField;

/// @brief Field <practiceSettings>k__BackingField offset 0x68
 __declspec(property(get=__get__practiceSettings_k__BackingField, put=__set__practiceSettings_k__BackingField)) ::GlobalNamespace::PracticeSettings*  _practiceSettings_k__BackingField;

/// @brief Field <usingOverrideColorScheme>k__BackingField offset 0x70
 __declspec(property(get=__get__usingOverrideColorScheme_k__BackingField, put=__set__usingOverrideColorScheme_k__BackingField)) bool  _usingOverrideColorScheme_k__BackingField;

/// @brief Field <colorScheme>k__BackingField offset 0x78
 __declspec(property(get=__get__colorScheme_k__BackingField, put=__set__colorScheme_k__BackingField)) ::GlobalNamespace::ColorScheme*  _colorScheme_k__BackingField;

/// @brief Field <usingOverrideEnvironment>k__BackingField offset 0x80
 __declspec(property(get=__get__usingOverrideEnvironment_k__BackingField, put=__set__usingOverrideEnvironment_k__BackingField)) bool  _usingOverrideEnvironment_k__BackingField;

/// @brief Field <environmentInfo>k__BackingField offset 0x88
 __declspec(property(get=__get__environmentInfo_k__BackingField, put=__set__environmentInfo_k__BackingField)) ::GlobalNamespace::EnvironmentInfoSO*  _environmentInfo_k__BackingField;

/// @brief Field <gameplayModifiers>k__BackingField offset 0x90
 __declspec(property(get=__get__gameplayModifiers_k__BackingField, put=__set__gameplayModifiers_k__BackingField)) ::GlobalNamespace::GameplayModifiers*  _gameplayModifiers_k__BackingField;

 __declspec(property(get=get_gameMode, put=set_gameMode)) ::StringW  gameMode;

 __declspec(property(get=get_difficultyBeatmap, put=set_difficultyBeatmap)) ::GlobalNamespace::IDifficultyBeatmap*  difficultyBeatmap;

 __declspec(property(get=get_practiceSettings, put=set_practiceSettings)) ::GlobalNamespace::PracticeSettings*  practiceSettings;

 __declspec(property(get=get_usingOverrideColorScheme, put=set_usingOverrideColorScheme)) bool  usingOverrideColorScheme;

 __declspec(property(get=get_colorScheme, put=set_colorScheme)) ::GlobalNamespace::ColorScheme*  colorScheme;

 __declspec(property(get=get_usingOverrideEnvironment, put=set_usingOverrideEnvironment)) bool  usingOverrideEnvironment;

 __declspec(property(get=get_environmentInfo, put=set_environmentInfo)) ::GlobalNamespace::EnvironmentInfoSO*  environmentInfo;

 __declspec(property(get=get_gameplayModifiers, put=set_gameplayModifiers)) ::GlobalNamespace::GameplayModifiers*  gameplayModifiers;

constexpr void __set__standardGameplaySceneInfo(::GlobalNamespace::SceneInfo*  value) ;

constexpr ::GlobalNamespace::SceneInfo* __get__standardGameplaySceneInfo() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SceneInfo*> __get__standardGameplaySceneInfo() const;

constexpr void __set__gameCoreSceneInfo(::GlobalNamespace::SceneInfo*  value) ;

constexpr ::GlobalNamespace::SceneInfo* __get__gameCoreSceneInfo() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SceneInfo*> __get__gameCoreSceneInfo() const;

constexpr void __set__mainSettingsModel(::GlobalNamespace::MainSettingsModelSO*  value) ;

constexpr ::GlobalNamespace::MainSettingsModelSO* __get__mainSettingsModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainSettingsModelSO*> __get__mainSettingsModel() const;

constexpr void __set_didFinishEvent(::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*,::GlobalNamespace::LevelCompletionResults*>*  value) ;

constexpr ::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*,::GlobalNamespace::LevelCompletionResults*>* __get_didFinishEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*,::GlobalNamespace::LevelCompletionResults*>*> __get_didFinishEvent() const;

constexpr void __set__gameMode_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__gameMode_k__BackingField() ;

constexpr ::StringW const& __get__gameMode_k__BackingField() const;

constexpr void __set__difficultyBeatmap_k__BackingField(::GlobalNamespace::IDifficultyBeatmap*  value) ;

constexpr ::GlobalNamespace::IDifficultyBeatmap* __get__difficultyBeatmap_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IDifficultyBeatmap*> __get__difficultyBeatmap_k__BackingField() const;

constexpr void __set__practiceSettings_k__BackingField(::GlobalNamespace::PracticeSettings*  value) ;

constexpr ::GlobalNamespace::PracticeSettings* __get__practiceSettings_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PracticeSettings*> __get__practiceSettings_k__BackingField() const;

constexpr void __set__usingOverrideColorScheme_k__BackingField(bool  value) ;

constexpr bool& __get__usingOverrideColorScheme_k__BackingField() ;

constexpr bool const& __get__usingOverrideColorScheme_k__BackingField() const;

constexpr void __set__colorScheme_k__BackingField(::GlobalNamespace::ColorScheme*  value) ;

constexpr ::GlobalNamespace::ColorScheme* __get__colorScheme_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorScheme*> __get__colorScheme_k__BackingField() const;

constexpr void __set__usingOverrideEnvironment_k__BackingField(bool  value) ;

constexpr bool& __get__usingOverrideEnvironment_k__BackingField() ;

constexpr bool const& __get__usingOverrideEnvironment_k__BackingField() const;

constexpr void __set__environmentInfo_k__BackingField(::GlobalNamespace::EnvironmentInfoSO*  value) ;

constexpr ::GlobalNamespace::EnvironmentInfoSO* __get__environmentInfo_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentInfoSO*> __get__environmentInfo_k__BackingField() const;

constexpr void __set__gameplayModifiers_k__BackingField(::GlobalNamespace::GameplayModifiers*  value) ;

constexpr ::GlobalNamespace::GameplayModifiers* __get__gameplayModifiers_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiers*> __get__gameplayModifiers_k__BackingField() const;

/// @brief Method add_didFinishEvent addr 0x231d6c8 size 0xb0 virtual false final false
inline void add_didFinishEvent(::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*,::GlobalNamespace::LevelCompletionResults*>*  value) ;

/// @brief Method remove_didFinishEvent addr 0x231dabc size 0xb0 virtual false final false
inline void remove_didFinishEvent(::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*,::GlobalNamespace::LevelCompletionResults*>*  value) ;

/// @brief Method get_gameMode addr 0x231ffa0 size 0x8 virtual false final false
inline ::StringW get_gameMode() ;

/// @brief Method set_gameMode addr 0x231ffa8 size 0x8 virtual false final false
inline void set_gameMode(::StringW  value) ;

/// @brief Method get_difficultyBeatmap addr 0x231ffb0 size 0x8 virtual false final false
inline ::GlobalNamespace::IDifficultyBeatmap* get_difficultyBeatmap() ;

/// @brief Method set_difficultyBeatmap addr 0x231ffb8 size 0x8 virtual false final false
inline void set_difficultyBeatmap(::GlobalNamespace::IDifficultyBeatmap*  value) ;

/// @brief Method get_practiceSettings addr 0x231ffc0 size 0x8 virtual false final false
inline ::GlobalNamespace::PracticeSettings* get_practiceSettings() ;

/// @brief Method set_practiceSettings addr 0x231ffc8 size 0x8 virtual false final false
inline void set_practiceSettings(::GlobalNamespace::PracticeSettings*  value) ;

/// @brief Method get_usingOverrideColorScheme addr 0x231ffd0 size 0x8 virtual false final false
inline bool get_usingOverrideColorScheme() ;

/// @brief Method set_usingOverrideColorScheme addr 0x231ffd8 size 0xc virtual false final false
inline void set_usingOverrideColorScheme(bool  value) ;

/// @brief Method get_colorScheme addr 0x231ffe4 size 0x8 virtual false final false
inline ::GlobalNamespace::ColorScheme* get_colorScheme() ;

/// @brief Method set_colorScheme addr 0x231ffec size 0x8 virtual false final false
inline void set_colorScheme(::GlobalNamespace::ColorScheme*  value) ;

/// @brief Method get_usingOverrideEnvironment addr 0x231fff4 size 0x8 virtual false final false
inline bool get_usingOverrideEnvironment() ;

/// @brief Method set_usingOverrideEnvironment addr 0x231fffc size 0xc virtual false final false
inline void set_usingOverrideEnvironment(bool  value) ;

/// @brief Method get_environmentInfo addr 0x2320008 size 0x8 virtual false final false
inline ::GlobalNamespace::EnvironmentInfoSO* get_environmentInfo() ;

/// @brief Method set_environmentInfo addr 0x2320010 size 0x8 virtual false final false
inline void set_environmentInfo(::GlobalNamespace::EnvironmentInfoSO*  value) ;

/// @brief Method get_gameplayModifiers addr 0x2320018 size 0x8 virtual false final false
inline ::GlobalNamespace::GameplayModifiers* get_gameplayModifiers() ;

/// @brief Method set_gameplayModifiers addr 0x2320020 size 0x8 virtual false final false
inline void set_gameplayModifiers(::GlobalNamespace::GameplayModifiers*  value) ;

/// @brief Method Init addr 0x231b8a4 size 0x66c virtual false final false
inline void Init(::StringW  gameMode, ::GlobalNamespace::IDifficultyBeatmap*  difficultyBeatmap, ::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel, ::GlobalNamespace::OverrideEnvironmentSettings*  overrideEnvironmentSettings, ::GlobalNamespace::ColorScheme*  overrideColorScheme, ::GlobalNamespace::ColorScheme*  beatmapOverrideColorScheme, ::GlobalNamespace::GameplayModifiers*  gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings*  playerSpecificSettings, ::GlobalNamespace::PracticeSettings*  practiceSettings, ::StringW  backButtonText, bool  useTestNoteCutSoundEffects, bool  startPaused, ::GlobalNamespace::BeatmapDataCache*  beatmapDataCache, ::System::Nullable_1<::GlobalNamespace::__RecordingToolManager__SetupData>  recordingToolData) ;

/// @brief Method Finish addr 0x2320028 size 0x28 virtual false final false
inline void Finish(::GlobalNamespace::LevelCompletionResults*  levelCompletionResults) ;

static inline ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* New_ctor() ;

/// @brief Method .ctor addr 0x2320050 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "StandardLevelScenesTransitionSetupDataSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StandardLevelScenesTransitionSetupDataSO(StandardLevelScenesTransitionSetupDataSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StandardLevelScenesTransitionSetupDataSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StandardLevelScenesTransitionSetupDataSO(StandardLevelScenesTransitionSetupDataSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 StandardLevelScenesTransitionSetupDataSO()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO, 0x98>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, "", "StandardLevelScenesTransitionSetupDataSO");
