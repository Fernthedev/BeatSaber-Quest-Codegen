// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: ScenesTransitionSetupDataSO
#include "GlobalNamespace/ScenesTransitionSetupDataSO.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SceneInfo
  class SceneInfo;
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: PracticeSettings
  class PracticeSettings;
  // Forward declaring type: ColorScheme
  class ColorScheme;
  // Forward declaring type: EnvironmentInfoSO
  class EnvironmentInfoSO;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
  // Forward declaring type: OverrideEnvironmentSettings
  class OverrideEnvironmentSettings;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
  // Forward declaring type: PlayerSpecificSettings
  class PlayerSpecificSettings;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: StandardLevelScenesTransitionSetupDataSO
  // [TokenAttribute] Offset: FFFFFFFF
  class StandardLevelScenesTransitionSetupDataSO : public GlobalNamespace::ScenesTransitionSetupDataSO {
    public:
    // private SceneInfo _standardGameplaySceneInfo
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::SceneInfo* standardGameplaySceneInfo;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SceneInfo*) == 0x8);
    // private SceneInfo _gameCoreSceneInfo
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::SceneInfo* gameCoreSceneInfo;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SceneInfo*) == 0x8);
    // private System.Action`2<StandardLevelScenesTransitionSetupDataSO,LevelCompletionResults> didFinishEvent
    // Size: 0x8
    // Offset: 0x38
    System::Action_2<GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, GlobalNamespace::LevelCompletionResults*>* didFinishEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, GlobalNamespace::LevelCompletionResults*>*) == 0x8);
    // private System.String <gameMode>k__BackingField
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppString* gameMode;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private IDifficultyBeatmap <difficultyBeatmap>k__BackingField
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IDifficultyBeatmap*) == 0x8);
    // private PracticeSettings <practiceSettings>k__BackingField
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::PracticeSettings* practiceSettings;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PracticeSettings*) == 0x8);
    // private System.Boolean <usingOverrideColorScheme>k__BackingField
    // Size: 0x1
    // Offset: 0x58
    bool usingOverrideColorScheme;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: usingOverrideColorScheme and: colorScheme
    char __padding6[0x7] = {};
    // private ColorScheme <colorScheme>k__BackingField
    // Size: 0x8
    // Offset: 0x60
    GlobalNamespace::ColorScheme* colorScheme;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorScheme*) == 0x8);
    // private System.Boolean <usingOverrideEnvironment>k__BackingField
    // Size: 0x1
    // Offset: 0x68
    bool usingOverrideEnvironment;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: usingOverrideEnvironment and: environmentInfo
    char __padding8[0x7] = {};
    // private EnvironmentInfoSO <environmentInfo>k__BackingField
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::EnvironmentInfoSO* environmentInfo;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EnvironmentInfoSO*) == 0x8);
    // Creating value type constructor for type: StandardLevelScenesTransitionSetupDataSO
    StandardLevelScenesTransitionSetupDataSO(GlobalNamespace::SceneInfo* standardGameplaySceneInfo_ = {}, GlobalNamespace::SceneInfo* gameCoreSceneInfo_ = {}, System::Action_2<GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, GlobalNamespace::LevelCompletionResults*>* didFinishEvent_ = {}, ::Il2CppString* gameMode_ = {}, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap_ = {}, GlobalNamespace::PracticeSettings* practiceSettings_ = {}, bool usingOverrideColorScheme_ = {}, GlobalNamespace::ColorScheme* colorScheme_ = {}, bool usingOverrideEnvironment_ = {}, GlobalNamespace::EnvironmentInfoSO* environmentInfo_ = {}) noexcept : standardGameplaySceneInfo{standardGameplaySceneInfo_}, gameCoreSceneInfo{gameCoreSceneInfo_}, didFinishEvent{didFinishEvent_}, gameMode{gameMode_}, difficultyBeatmap{difficultyBeatmap_}, practiceSettings{practiceSettings_}, usingOverrideColorScheme{usingOverrideColorScheme_}, colorScheme{colorScheme_}, usingOverrideEnvironment{usingOverrideEnvironment_}, environmentInfo{environmentInfo_} {}
    // Get instance field reference: private SceneInfo _standardGameplaySceneInfo
    GlobalNamespace::SceneInfo*& dyn__standardGameplaySceneInfo();
    // Get instance field reference: private SceneInfo _gameCoreSceneInfo
    GlobalNamespace::SceneInfo*& dyn__gameCoreSceneInfo();
    // Get instance field reference: private System.Action`2<StandardLevelScenesTransitionSetupDataSO,LevelCompletionResults> didFinishEvent
    System::Action_2<GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, GlobalNamespace::LevelCompletionResults*>*& dyn_didFinishEvent();
    // Get instance field reference: private System.String <gameMode>k__BackingField
    ::Il2CppString*& dyn_$gameMode$k__BackingField();
    // Get instance field reference: private IDifficultyBeatmap <difficultyBeatmap>k__BackingField
    GlobalNamespace::IDifficultyBeatmap*& dyn_$difficultyBeatmap$k__BackingField();
    // Get instance field reference: private PracticeSettings <practiceSettings>k__BackingField
    GlobalNamespace::PracticeSettings*& dyn_$practiceSettings$k__BackingField();
    // Get instance field reference: private System.Boolean <usingOverrideColorScheme>k__BackingField
    bool& dyn_$usingOverrideColorScheme$k__BackingField();
    // Get instance field reference: private ColorScheme <colorScheme>k__BackingField
    GlobalNamespace::ColorScheme*& dyn_$colorScheme$k__BackingField();
    // Get instance field reference: private System.Boolean <usingOverrideEnvironment>k__BackingField
    bool& dyn_$usingOverrideEnvironment$k__BackingField();
    // Get instance field reference: private EnvironmentInfoSO <environmentInfo>k__BackingField
    GlobalNamespace::EnvironmentInfoSO*& dyn_$environmentInfo$k__BackingField();
    // public System.String get_gameMode()
    // Offset: 0x1069DB0
    ::Il2CppString* get_gameMode();
    // private System.Void set_gameMode(System.String value)
    // Offset: 0x1069DB8
    void set_gameMode(::Il2CppString* value);
    // public IDifficultyBeatmap get_difficultyBeatmap()
    // Offset: 0x1069DC0
    GlobalNamespace::IDifficultyBeatmap* get_difficultyBeatmap();
    // private System.Void set_difficultyBeatmap(IDifficultyBeatmap value)
    // Offset: 0x1069DC8
    void set_difficultyBeatmap(GlobalNamespace::IDifficultyBeatmap* value);
    // public PracticeSettings get_practiceSettings()
    // Offset: 0x1069DD0
    GlobalNamespace::PracticeSettings* get_practiceSettings();
    // private System.Void set_practiceSettings(PracticeSettings value)
    // Offset: 0x1069DD8
    void set_practiceSettings(GlobalNamespace::PracticeSettings* value);
    // public System.Boolean get_usingOverrideColorScheme()
    // Offset: 0x1069DE0
    bool get_usingOverrideColorScheme();
    // private System.Void set_usingOverrideColorScheme(System.Boolean value)
    // Offset: 0x1069DE8
    void set_usingOverrideColorScheme(bool value);
    // public ColorScheme get_colorScheme()
    // Offset: 0x1069DF4
    GlobalNamespace::ColorScheme* get_colorScheme();
    // private System.Void set_colorScheme(ColorScheme value)
    // Offset: 0x1069DFC
    void set_colorScheme(GlobalNamespace::ColorScheme* value);
    // public System.Boolean get_usingOverrideEnvironment()
    // Offset: 0x1069E04
    bool get_usingOverrideEnvironment();
    // private System.Void set_usingOverrideEnvironment(System.Boolean value)
    // Offset: 0x1069E0C
    void set_usingOverrideEnvironment(bool value);
    // public EnvironmentInfoSO get_environmentInfo()
    // Offset: 0x1069E18
    GlobalNamespace::EnvironmentInfoSO* get_environmentInfo();
    // private System.Void set_environmentInfo(EnvironmentInfoSO value)
    // Offset: 0x1069E20
    void set_environmentInfo(GlobalNamespace::EnvironmentInfoSO* value);
    // public System.Void add_didFinishEvent(System.Action`2<StandardLevelScenesTransitionSetupDataSO,LevelCompletionResults> value)
    // Offset: 0x1069C68
    void add_didFinishEvent(System::Action_2<GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, GlobalNamespace::LevelCompletionResults*>* value);
    // public System.Void remove_didFinishEvent(System.Action`2<StandardLevelScenesTransitionSetupDataSO,LevelCompletionResults> value)
    // Offset: 0x1069D0C
    void remove_didFinishEvent(System::Action_2<GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, GlobalNamespace::LevelCompletionResults*>* value);
    // public System.Void Init(System.String gameMode, IDifficultyBeatmap difficultyBeatmap, IPreviewBeatmapLevel previewBeatmapLevel, OverrideEnvironmentSettings overrideEnvironmentSettings, ColorScheme overrideColorScheme, GameplayModifiers gameplayModifiers, PlayerSpecificSettings playerSpecificSettings, PracticeSettings practiceSettings, System.String backButtonText, System.Boolean useTestNoteCutSoundEffects)
    // Offset: 0x1069610
    void Init(::Il2CppString* gameMode, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, GlobalNamespace::OverrideEnvironmentSettings* overrideEnvironmentSettings, GlobalNamespace::ColorScheme* overrideColorScheme, GlobalNamespace::GameplayModifiers* gameplayModifiers, GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, GlobalNamespace::PracticeSettings* practiceSettings, ::Il2CppString* backButtonText, bool useTestNoteCutSoundEffects);
    // public System.Void Finish(LevelCompletionResults levelCompletionResults)
    // Offset: 0x1067D24
    void Finish(GlobalNamespace::LevelCompletionResults* levelCompletionResults);
    // public System.Void .ctor()
    // Offset: 0x1069E28
    // Implemented from: ScenesTransitionSetupDataSO
    // Base method: System.Void ScenesTransitionSetupDataSO::.ctor()
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StandardLevelScenesTransitionSetupDataSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StandardLevelScenesTransitionSetupDataSO*, creationType>()));
    }
  }; // StandardLevelScenesTransitionSetupDataSO
  #pragma pack(pop)
  static check_size<sizeof(StandardLevelScenesTransitionSetupDataSO), 112 + sizeof(GlobalNamespace::EnvironmentInfoSO*)> __GlobalNamespace_StandardLevelScenesTransitionSetupDataSOSizeCheck;
  static_assert(sizeof(StandardLevelScenesTransitionSetupDataSO) == 0x78);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, "", "StandardLevelScenesTransitionSetupDataSO");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::get_gameMode
// Il2CppName: get_gameMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)()>(&GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::get_gameMode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*), "get_gameMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::set_gameMode
// Il2CppName: set_gameMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)(::Il2CppString*)>(&GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::set_gameMode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*), "set_gameMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::get_difficultyBeatmap
// Il2CppName: get_difficultyBeatmap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IDifficultyBeatmap* (GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)()>(&GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::get_difficultyBeatmap)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*), "get_difficultyBeatmap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::set_difficultyBeatmap
// Il2CppName: set_difficultyBeatmap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)(GlobalNamespace::IDifficultyBeatmap*)>(&GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::set_difficultyBeatmap)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*), "set_difficultyBeatmap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::get_practiceSettings
// Il2CppName: get_practiceSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PracticeSettings* (GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)()>(&GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::get_practiceSettings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*), "get_practiceSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::set_practiceSettings
// Il2CppName: set_practiceSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)(GlobalNamespace::PracticeSettings*)>(&GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::set_practiceSettings)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "PracticeSettings")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*), "set_practiceSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::get_usingOverrideColorScheme
// Il2CppName: get_usingOverrideColorScheme
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)()>(&GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::get_usingOverrideColorScheme)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*), "get_usingOverrideColorScheme", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::set_usingOverrideColorScheme
// Il2CppName: set_usingOverrideColorScheme
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)(bool)>(&GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::set_usingOverrideColorScheme)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*), "set_usingOverrideColorScheme", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::get_colorScheme
// Il2CppName: get_colorScheme
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ColorScheme* (GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)()>(&GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::get_colorScheme)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*), "get_colorScheme", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::set_colorScheme
// Il2CppName: set_colorScheme
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)(GlobalNamespace::ColorScheme*)>(&GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::set_colorScheme)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "ColorScheme")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*), "set_colorScheme", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::get_usingOverrideEnvironment
// Il2CppName: get_usingOverrideEnvironment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)()>(&GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::get_usingOverrideEnvironment)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*), "get_usingOverrideEnvironment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::set_usingOverrideEnvironment
// Il2CppName: set_usingOverrideEnvironment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)(bool)>(&GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::set_usingOverrideEnvironment)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*), "set_usingOverrideEnvironment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::get_environmentInfo
// Il2CppName: get_environmentInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::EnvironmentInfoSO* (GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)()>(&GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::get_environmentInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*), "get_environmentInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::set_environmentInfo
// Il2CppName: set_environmentInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)(GlobalNamespace::EnvironmentInfoSO*)>(&GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::set_environmentInfo)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "EnvironmentInfoSO")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*), "set_environmentInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::add_didFinishEvent
// Il2CppName: add_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)(System::Action_2<GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, GlobalNamespace::LevelCompletionResults*>*)>(&GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::add_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "StandardLevelScenesTransitionSetupDataSO"), ::il2cpp_utils::GetClassFromName("", "LevelCompletionResults")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*), "add_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::remove_didFinishEvent
// Il2CppName: remove_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)(System::Action_2<GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, GlobalNamespace::LevelCompletionResults*>*)>(&GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::remove_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "StandardLevelScenesTransitionSetupDataSO"), ::il2cpp_utils::GetClassFromName("", "LevelCompletionResults")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*), "remove_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)(::Il2CppString*, GlobalNamespace::IDifficultyBeatmap*, GlobalNamespace::IPreviewBeatmapLevel*, GlobalNamespace::OverrideEnvironmentSettings*, GlobalNamespace::ColorScheme*, GlobalNamespace::GameplayModifiers*, GlobalNamespace::PlayerSpecificSettings*, GlobalNamespace::PracticeSettings*, ::Il2CppString*, bool)>(&GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::Init)> {
  static const MethodInfo* get() {
    static auto* gameMode = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* difficultyBeatmap = &::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap")->byval_arg;
    static auto* previewBeatmapLevel = &::il2cpp_utils::GetClassFromName("", "IPreviewBeatmapLevel")->byval_arg;
    static auto* overrideEnvironmentSettings = &::il2cpp_utils::GetClassFromName("", "OverrideEnvironmentSettings")->byval_arg;
    static auto* overrideColorScheme = &::il2cpp_utils::GetClassFromName("", "ColorScheme")->byval_arg;
    static auto* gameplayModifiers = &::il2cpp_utils::GetClassFromName("", "GameplayModifiers")->byval_arg;
    static auto* playerSpecificSettings = &::il2cpp_utils::GetClassFromName("", "PlayerSpecificSettings")->byval_arg;
    static auto* practiceSettings = &::il2cpp_utils::GetClassFromName("", "PracticeSettings")->byval_arg;
    static auto* backButtonText = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* useTestNoteCutSoundEffects = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gameMode, difficultyBeatmap, previewBeatmapLevel, overrideEnvironmentSettings, overrideColorScheme, gameplayModifiers, playerSpecificSettings, practiceSettings, backButtonText, useTestNoteCutSoundEffects});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::Finish
// Il2CppName: Finish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)(GlobalNamespace::LevelCompletionResults*)>(&GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::Finish)> {
  static const MethodInfo* get() {
    static auto* levelCompletionResults = &::il2cpp_utils::GetClassFromName("", "LevelCompletionResults")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*), "Finish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelCompletionResults});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
