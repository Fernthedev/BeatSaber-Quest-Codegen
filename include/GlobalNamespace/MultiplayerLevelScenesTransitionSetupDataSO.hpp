// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ScenesTransitionSetupDataSO
#include "GlobalNamespace/ScenesTransitionSetupDataSO.hpp"
// Including type: DisconnectedReason
#include "GlobalNamespace/DisconnectedReason.hpp"
// Including type: BeatmapDifficulty
#include "GlobalNamespace/BeatmapDifficulty.hpp"
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
  // Forward declaring type: EnvironmentInfoSO
  class EnvironmentInfoSO;
  // Forward declaring type: MultiplayerResultsData
  class MultiplayerResultsData;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: ColorScheme
  class ColorScheme;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
  // Forward declaring type: PlayerSpecificSettings
  class PlayerSpecificSettings;
  // Forward declaring type: PracticeSettings
  class PracticeSettings;
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
  // Autogenerated type: MultiplayerLevelScenesTransitionSetupDataSO
  class MultiplayerLevelScenesTransitionSetupDataSO : public GlobalNamespace::ScenesTransitionSetupDataSO {
    public:
    // private SceneInfo _multiplayerLevelSceneInfo
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::SceneInfo* multiplayerLevelSceneInfo;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SceneInfo*) == 0x8);
    // private SceneInfo _gameCoreSceneInfo
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::SceneInfo* gameCoreSceneInfo;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SceneInfo*) == 0x8);
    // private EnvironmentInfoSO _multiplayerEnvironmentInfo
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::EnvironmentInfoSO* multiplayerEnvironmentInfo;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EnvironmentInfoSO*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE2952C
    // private System.Action`2<MultiplayerLevelScenesTransitionSetupDataSO,MultiplayerResultsData> didFinishEvent
    // Size: 0x8
    // Offset: 0x40
    System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, GlobalNamespace::MultiplayerResultsData*>* didFinishEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, GlobalNamespace::MultiplayerResultsData*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE2953C
    // private System.Action`2<MultiplayerLevelScenesTransitionSetupDataSO,DisconnectedReason> didDisconnectEvent
    // Size: 0x8
    // Offset: 0x48
    System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, GlobalNamespace::DisconnectedReason>* didDisconnectEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, GlobalNamespace::DisconnectedReason>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE2954C
    // private System.String <gameMode>k__BackingField
    // Size: 0x8
    // Offset: 0x50
    ::Il2CppString* gameMode;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE2955C
    // private IPreviewBeatmapLevel <previewBeatmapLevel>k__BackingField
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IPreviewBeatmapLevel*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE2956C
    // private BeatmapDifficulty <beatmapDifficulty>k__BackingField
    // Size: 0x4
    // Offset: 0x60
    GlobalNamespace::BeatmapDifficulty beatmapDifficulty;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapDifficulty) == 0x4);
    // Padding between fields: beatmapDifficulty and: difficultyBeatmap
    char __padding7[0x4] = {};
    // [CompilerGeneratedAttribute] Offset: 0xE2957C
    // private IDifficultyBeatmap <difficultyBeatmap>k__BackingField
    // Size: 0x8
    // Offset: 0x68
    GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IDifficultyBeatmap*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE2958C
    // private BeatmapCharacteristicSO <beatmapCharacteristic>k__BackingField
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapCharacteristicSO*) == 0x8);
    // Creating value type constructor for type: MultiplayerLevelScenesTransitionSetupDataSO
    MultiplayerLevelScenesTransitionSetupDataSO(GlobalNamespace::SceneInfo* multiplayerLevelSceneInfo_ = {}, GlobalNamespace::SceneInfo* gameCoreSceneInfo_ = {}, GlobalNamespace::EnvironmentInfoSO* multiplayerEnvironmentInfo_ = {}, System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, GlobalNamespace::MultiplayerResultsData*>* didFinishEvent_ = {}, System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, GlobalNamespace::DisconnectedReason>* didDisconnectEvent_ = {}, ::Il2CppString* gameMode_ = {}, GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel_ = {}, GlobalNamespace::BeatmapDifficulty beatmapDifficulty_ = {}, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap_ = {}, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic_ = {}) noexcept : multiplayerLevelSceneInfo{multiplayerLevelSceneInfo_}, gameCoreSceneInfo{gameCoreSceneInfo_}, multiplayerEnvironmentInfo{multiplayerEnvironmentInfo_}, didFinishEvent{didFinishEvent_}, didDisconnectEvent{didDisconnectEvent_}, gameMode{gameMode_}, previewBeatmapLevel{previewBeatmapLevel_}, beatmapDifficulty{beatmapDifficulty_}, difficultyBeatmap{difficultyBeatmap_}, beatmapCharacteristic{beatmapCharacteristic_} {}
    // public System.Void add_didFinishEvent(System.Action`2<MultiplayerLevelScenesTransitionSetupDataSO,MultiplayerResultsData> value)
    // Offset: 0x1020D7C
    void add_didFinishEvent(System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, GlobalNamespace::MultiplayerResultsData*>* value);
    // public System.Void remove_didFinishEvent(System.Action`2<MultiplayerLevelScenesTransitionSetupDataSO,MultiplayerResultsData> value)
    // Offset: 0x1020EB0
    void remove_didFinishEvent(System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, GlobalNamespace::MultiplayerResultsData*>* value);
    // public System.Void add_didDisconnectEvent(System.Action`2<MultiplayerLevelScenesTransitionSetupDataSO,DisconnectedReason> value)
    // Offset: 0x102377C
    void add_didDisconnectEvent(System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, GlobalNamespace::DisconnectedReason>* value);
    // public System.Void remove_didDisconnectEvent(System.Action`2<MultiplayerLevelScenesTransitionSetupDataSO,DisconnectedReason> value)
    // Offset: 0x1023820
    void remove_didDisconnectEvent(System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, GlobalNamespace::DisconnectedReason>* value);
    // public System.String get_gameMode()
    // Offset: 0x10238C4
    ::Il2CppString* get_gameMode();
    // private System.Void set_gameMode(System.String value)
    // Offset: 0x10238CC
    void set_gameMode(::Il2CppString* value);
    // public IPreviewBeatmapLevel get_previewBeatmapLevel()
    // Offset: 0x10238D4
    GlobalNamespace::IPreviewBeatmapLevel* get_previewBeatmapLevel();
    // private System.Void set_previewBeatmapLevel(IPreviewBeatmapLevel value)
    // Offset: 0x10238DC
    void set_previewBeatmapLevel(GlobalNamespace::IPreviewBeatmapLevel* value);
    // public BeatmapDifficulty get_beatmapDifficulty()
    // Offset: 0x10238E4
    GlobalNamespace::BeatmapDifficulty get_beatmapDifficulty();
    // private System.Void set_beatmapDifficulty(BeatmapDifficulty value)
    // Offset: 0x10238EC
    void set_beatmapDifficulty(GlobalNamespace::BeatmapDifficulty value);
    // public IDifficultyBeatmap get_difficultyBeatmap()
    // Offset: 0x10238F4
    GlobalNamespace::IDifficultyBeatmap* get_difficultyBeatmap();
    // private System.Void set_difficultyBeatmap(IDifficultyBeatmap value)
    // Offset: 0x10238FC
    void set_difficultyBeatmap(GlobalNamespace::IDifficultyBeatmap* value);
    // public BeatmapCharacteristicSO get_beatmapCharacteristic()
    // Offset: 0x1023904
    GlobalNamespace::BeatmapCharacteristicSO* get_beatmapCharacteristic();
    // private System.Void set_beatmapCharacteristic(BeatmapCharacteristicSO value)
    // Offset: 0x102390C
    void set_beatmapCharacteristic(GlobalNamespace::BeatmapCharacteristicSO* value);
    // public System.Void Init(System.String gameMode, IPreviewBeatmapLevel previewBeatmapLevel, BeatmapDifficulty beatmapDifficulty, BeatmapCharacteristicSO beatmapCharacteristic, IDifficultyBeatmap difficultyBeatmap, ColorScheme overrideColorScheme, GameplayModifiers gameplayModifiers, PlayerSpecificSettings playerSpecificSettings, PracticeSettings practiceSettings, System.Boolean useTestNoteCutSoundEffects)
    // Offset: 0x1022B08
    void Init(::Il2CppString* gameMode, GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, GlobalNamespace::BeatmapDifficulty beatmapDifficulty, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, GlobalNamespace::ColorScheme* overrideColorScheme, GlobalNamespace::GameplayModifiers* gameplayModifiers, GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, GlobalNamespace::PracticeSettings* practiceSettings, bool useTestNoteCutSoundEffects);
    // public System.Void Finish(MultiplayerResultsData resultsData)
    // Offset: 0x1023914
    void Finish(GlobalNamespace::MultiplayerResultsData* resultsData);
    // public System.Void FinishWithDisconnect(DisconnectedReason disconnectedReason)
    // Offset: 0x102398C
    void FinishWithDisconnect(GlobalNamespace::DisconnectedReason disconnectedReason);
    // public System.Void .ctor()
    // Offset: 0x1023A04
    // Implemented from: ScenesTransitionSetupDataSO
    // Base method: System.Void ScenesTransitionSetupDataSO::.ctor()
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLevelScenesTransitionSetupDataSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLevelScenesTransitionSetupDataSO*, creationType>()));
    }
  }; // MultiplayerLevelScenesTransitionSetupDataSO
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerLevelScenesTransitionSetupDataSO), 112 + sizeof(GlobalNamespace::BeatmapCharacteristicSO*)> __GlobalNamespace_MultiplayerLevelScenesTransitionSetupDataSOSizeCheck;
  static_assert(sizeof(MultiplayerLevelScenesTransitionSetupDataSO) == 0x78);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, "", "MultiplayerLevelScenesTransitionSetupDataSO");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::add_didFinishEvent
// Il2CppName: add_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::*)(System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, GlobalNamespace::MultiplayerResultsData*>*)>(&GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::add_didFinishEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MultiplayerLevelScenesTransitionSetupDataSO"), ::il2cpp_utils::GetClassFromName("", "MultiplayerResultsData")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*), "add_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::remove_didFinishEvent
// Il2CppName: remove_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::*)(System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, GlobalNamespace::MultiplayerResultsData*>*)>(&GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::remove_didFinishEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MultiplayerLevelScenesTransitionSetupDataSO"), ::il2cpp_utils::GetClassFromName("", "MultiplayerResultsData")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*), "remove_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::add_didDisconnectEvent
// Il2CppName: add_didDisconnectEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::*)(System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, GlobalNamespace::DisconnectedReason>*)>(&GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::add_didDisconnectEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MultiplayerLevelScenesTransitionSetupDataSO"), ::il2cpp_utils::GetClassFromName("", "DisconnectedReason")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*), "add_didDisconnectEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::remove_didDisconnectEvent
// Il2CppName: remove_didDisconnectEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::*)(System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, GlobalNamespace::DisconnectedReason>*)>(&GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::remove_didDisconnectEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MultiplayerLevelScenesTransitionSetupDataSO"), ::il2cpp_utils::GetClassFromName("", "DisconnectedReason")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*), "remove_didDisconnectEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::get_gameMode
// Il2CppName: get_gameMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::*)()>(&GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::get_gameMode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*), "get_gameMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::set_gameMode
// Il2CppName: set_gameMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::*)(::Il2CppString*)>(&GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::set_gameMode)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*), "set_gameMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::get_previewBeatmapLevel
// Il2CppName: get_previewBeatmapLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IPreviewBeatmapLevel* (GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::*)()>(&GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::get_previewBeatmapLevel)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*), "get_previewBeatmapLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::set_previewBeatmapLevel
// Il2CppName: set_previewBeatmapLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::*)(GlobalNamespace::IPreviewBeatmapLevel*)>(&GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::set_previewBeatmapLevel)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "IPreviewBeatmapLevel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*), "set_previewBeatmapLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::get_beatmapDifficulty
// Il2CppName: get_beatmapDifficulty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapDifficulty (GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::*)()>(&GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::get_beatmapDifficulty)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*), "get_beatmapDifficulty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::set_beatmapDifficulty
// Il2CppName: set_beatmapDifficulty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::*)(GlobalNamespace::BeatmapDifficulty)>(&GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::set_beatmapDifficulty)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "BeatmapDifficulty")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*), "set_beatmapDifficulty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::get_difficultyBeatmap
// Il2CppName: get_difficultyBeatmap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IDifficultyBeatmap* (GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::*)()>(&GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::get_difficultyBeatmap)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*), "get_difficultyBeatmap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::set_difficultyBeatmap
// Il2CppName: set_difficultyBeatmap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::*)(GlobalNamespace::IDifficultyBeatmap*)>(&GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::set_difficultyBeatmap)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*), "set_difficultyBeatmap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::get_beatmapCharacteristic
// Il2CppName: get_beatmapCharacteristic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapCharacteristicSO* (GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::*)()>(&GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::get_beatmapCharacteristic)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*), "get_beatmapCharacteristic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::set_beatmapCharacteristic
// Il2CppName: set_beatmapCharacteristic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::*)(GlobalNamespace::BeatmapCharacteristicSO*)>(&GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::set_beatmapCharacteristic)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "BeatmapCharacteristicSO")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*), "set_beatmapCharacteristic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::*)(::Il2CppString*, GlobalNamespace::IPreviewBeatmapLevel*, GlobalNamespace::BeatmapDifficulty, GlobalNamespace::BeatmapCharacteristicSO*, GlobalNamespace::IDifficultyBeatmap*, GlobalNamespace::ColorScheme*, GlobalNamespace::GameplayModifiers*, GlobalNamespace::PlayerSpecificSettings*, GlobalNamespace::PracticeSettings*, bool)>(&GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::Init)> {
  const MethodInfo* get() {
    static auto* gameMode = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* previewBeatmapLevel = &::il2cpp_utils::GetClassFromName("", "IPreviewBeatmapLevel")->byval_arg;
    static auto* beatmapDifficulty = &::il2cpp_utils::GetClassFromName("", "BeatmapDifficulty")->byval_arg;
    static auto* beatmapCharacteristic = &::il2cpp_utils::GetClassFromName("", "BeatmapCharacteristicSO")->byval_arg;
    static auto* difficultyBeatmap = &::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap")->byval_arg;
    static auto* overrideColorScheme = &::il2cpp_utils::GetClassFromName("", "ColorScheme")->byval_arg;
    static auto* gameplayModifiers = &::il2cpp_utils::GetClassFromName("", "GameplayModifiers")->byval_arg;
    static auto* playerSpecificSettings = &::il2cpp_utils::GetClassFromName("", "PlayerSpecificSettings")->byval_arg;
    static auto* practiceSettings = &::il2cpp_utils::GetClassFromName("", "PracticeSettings")->byval_arg;
    static auto* useTestNoteCutSoundEffects = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gameMode, previewBeatmapLevel, beatmapDifficulty, beatmapCharacteristic, difficultyBeatmap, overrideColorScheme, gameplayModifiers, playerSpecificSettings, practiceSettings, useTestNoteCutSoundEffects});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::Finish
// Il2CppName: Finish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::*)(GlobalNamespace::MultiplayerResultsData*)>(&GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::Finish)> {
  const MethodInfo* get() {
    static auto* resultsData = &::il2cpp_utils::GetClassFromName("", "MultiplayerResultsData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*), "Finish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resultsData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::FinishWithDisconnect
// Il2CppName: FinishWithDisconnect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::*)(GlobalNamespace::DisconnectedReason)>(&GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::FinishWithDisconnect)> {
  const MethodInfo* get() {
    static auto* disconnectedReason = &::il2cpp_utils::GetClassFromName("", "DisconnectedReason")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*), "FinishWithDisconnect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disconnectedReason});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
