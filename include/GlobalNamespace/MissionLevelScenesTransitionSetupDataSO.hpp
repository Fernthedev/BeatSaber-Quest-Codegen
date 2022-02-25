// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ScenesTransitionSetupDataSO
#include "GlobalNamespace/ScenesTransitionSetupDataSO.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SceneInfo
  class SceneInfo;
  // Forward declaring type: MissionCompletionResults
  class MissionCompletionResults;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
  // Forward declaring type: MissionObjective
  class MissionObjective;
  // Forward declaring type: ColorScheme
  class ColorScheme;
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
  // Forward declaring type: MissionLevelScenesTransitionSetupDataSO
  class MissionLevelScenesTransitionSetupDataSO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::MissionLevelScenesTransitionSetupDataSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*, "", "MissionLevelScenesTransitionSetupDataSO");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: MissionLevelScenesTransitionSetupDataSO
  // [TokenAttribute] Offset: FFFFFFFF
  class MissionLevelScenesTransitionSetupDataSO : public GlobalNamespace::ScenesTransitionSetupDataSO {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private SceneInfo _missionGameplaySceneInfo
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::SceneInfo* missionGameplaySceneInfo;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SceneInfo*) == 0x8);
    // private SceneInfo _gameCoreSceneInfo
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::SceneInfo* gameCoreSceneInfo;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SceneInfo*) == 0x8);
    // private System.Action`2<MissionLevelScenesTransitionSetupDataSO,MissionCompletionResults> didFinishEvent
    // Size: 0x8
    // Offset: 0x38
    System::Action_2<GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*, GlobalNamespace::MissionCompletionResults*>* didFinishEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*, GlobalNamespace::MissionCompletionResults*>*) == 0x8);
    // private System.String <missionId>k__BackingField
    // Size: 0x8
    // Offset: 0x40
    ::StringW missionId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private IDifficultyBeatmap <difficultyBeatmap>k__BackingField
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IDifficultyBeatmap*) == 0x8);
    public:
    // Get instance field reference: private SceneInfo _missionGameplaySceneInfo
    GlobalNamespace::SceneInfo*& dyn__missionGameplaySceneInfo();
    // Get instance field reference: private SceneInfo _gameCoreSceneInfo
    GlobalNamespace::SceneInfo*& dyn__gameCoreSceneInfo();
    // Get instance field reference: private System.Action`2<MissionLevelScenesTransitionSetupDataSO,MissionCompletionResults> didFinishEvent
    System::Action_2<GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*, GlobalNamespace::MissionCompletionResults*>*& dyn_didFinishEvent();
    // Get instance field reference: private System.String <missionId>k__BackingField
    ::StringW& dyn_$missionId$k__BackingField();
    // Get instance field reference: private IDifficultyBeatmap <difficultyBeatmap>k__BackingField
    GlobalNamespace::IDifficultyBeatmap*& dyn_$difficultyBeatmap$k__BackingField();
    // public System.String get_missionId()
    // Offset: 0x2A6F4EC
    ::StringW get_missionId();
    // private System.Void set_missionId(System.String value)
    // Offset: 0x2A6F4F4
    void set_missionId(::StringW value);
    // public IDifficultyBeatmap get_difficultyBeatmap()
    // Offset: 0x2A6F4FC
    GlobalNamespace::IDifficultyBeatmap* get_difficultyBeatmap();
    // private System.Void set_difficultyBeatmap(IDifficultyBeatmap value)
    // Offset: 0x2A6F504
    void set_difficultyBeatmap(GlobalNamespace::IDifficultyBeatmap* value);
    // public System.Void add_didFinishEvent(System.Action`2<MissionLevelScenesTransitionSetupDataSO,MissionCompletionResults> value)
    // Offset: 0x2A687A0
    void add_didFinishEvent(System::Action_2<GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*, GlobalNamespace::MissionCompletionResults*>* value);
    // public System.Void remove_didFinishEvent(System.Action`2<MissionLevelScenesTransitionSetupDataSO,MissionCompletionResults> value)
    // Offset: 0x2A686FC
    void remove_didFinishEvent(System::Action_2<GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*, GlobalNamespace::MissionCompletionResults*>* value);
    // public System.Void Init(System.String missionId, IDifficultyBeatmap difficultyBeatmap, IPreviewBeatmapLevel previewBeatmapLevel, MissionObjective[] missionObjectives, ColorScheme overrideColorScheme, GameplayModifiers gameplayModifiers, PlayerSpecificSettings playerSpecificSettings, System.String backButtonText)
    // Offset: 0x2A68844
    void Init(::StringW missionId, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, ::ArrayW<GlobalNamespace::MissionObjective*> missionObjectives, GlobalNamespace::ColorScheme* overrideColorScheme, GlobalNamespace::GameplayModifiers* gameplayModifiers, GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::StringW backButtonText);
    // public System.Void Finish(MissionCompletionResults levelCompletionResults)
    // Offset: 0x2A6E160
    void Finish(GlobalNamespace::MissionCompletionResults* levelCompletionResults);
    // public System.Void .ctor()
    // Offset: 0x2A6F50C
    // Implemented from: ScenesTransitionSetupDataSO
    // Base method: System.Void ScenesTransitionSetupDataSO::.ctor()
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionLevelScenesTransitionSetupDataSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MissionLevelScenesTransitionSetupDataSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionLevelScenesTransitionSetupDataSO*, creationType>()));
    }
  }; // MissionLevelScenesTransitionSetupDataSO
  #pragma pack(pop)
  static check_size<sizeof(MissionLevelScenesTransitionSetupDataSO), 72 + sizeof(GlobalNamespace::IDifficultyBeatmap*)> __GlobalNamespace_MissionLevelScenesTransitionSetupDataSOSizeCheck;
  static_assert(sizeof(MissionLevelScenesTransitionSetupDataSO) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelScenesTransitionSetupDataSO::get_missionId
// Il2CppName: get_missionId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::MissionLevelScenesTransitionSetupDataSO::*)()>(&GlobalNamespace::MissionLevelScenesTransitionSetupDataSO::get_missionId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*), "get_missionId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelScenesTransitionSetupDataSO::set_missionId
// Il2CppName: set_missionId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionLevelScenesTransitionSetupDataSO::*)(::StringW)>(&GlobalNamespace::MissionLevelScenesTransitionSetupDataSO::set_missionId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*), "set_missionId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelScenesTransitionSetupDataSO::get_difficultyBeatmap
// Il2CppName: get_difficultyBeatmap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IDifficultyBeatmap* (GlobalNamespace::MissionLevelScenesTransitionSetupDataSO::*)()>(&GlobalNamespace::MissionLevelScenesTransitionSetupDataSO::get_difficultyBeatmap)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*), "get_difficultyBeatmap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelScenesTransitionSetupDataSO::set_difficultyBeatmap
// Il2CppName: set_difficultyBeatmap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionLevelScenesTransitionSetupDataSO::*)(GlobalNamespace::IDifficultyBeatmap*)>(&GlobalNamespace::MissionLevelScenesTransitionSetupDataSO::set_difficultyBeatmap)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*), "set_difficultyBeatmap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelScenesTransitionSetupDataSO::add_didFinishEvent
// Il2CppName: add_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionLevelScenesTransitionSetupDataSO::*)(System::Action_2<GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*, GlobalNamespace::MissionCompletionResults*>*)>(&GlobalNamespace::MissionLevelScenesTransitionSetupDataSO::add_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MissionLevelScenesTransitionSetupDataSO"), ::il2cpp_utils::GetClassFromName("", "MissionCompletionResults")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*), "add_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelScenesTransitionSetupDataSO::remove_didFinishEvent
// Il2CppName: remove_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionLevelScenesTransitionSetupDataSO::*)(System::Action_2<GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*, GlobalNamespace::MissionCompletionResults*>*)>(&GlobalNamespace::MissionLevelScenesTransitionSetupDataSO::remove_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MissionLevelScenesTransitionSetupDataSO"), ::il2cpp_utils::GetClassFromName("", "MissionCompletionResults")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*), "remove_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelScenesTransitionSetupDataSO::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionLevelScenesTransitionSetupDataSO::*)(::StringW, GlobalNamespace::IDifficultyBeatmap*, GlobalNamespace::IPreviewBeatmapLevel*, ::ArrayW<GlobalNamespace::MissionObjective*>, GlobalNamespace::ColorScheme*, GlobalNamespace::GameplayModifiers*, GlobalNamespace::PlayerSpecificSettings*, ::StringW)>(&GlobalNamespace::MissionLevelScenesTransitionSetupDataSO::Init)> {
  static const MethodInfo* get() {
    static auto* missionId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* difficultyBeatmap = &::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap")->byval_arg;
    static auto* previewBeatmapLevel = &::il2cpp_utils::GetClassFromName("", "IPreviewBeatmapLevel")->byval_arg;
    static auto* missionObjectives = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("", "MissionObjective"), 1)->byval_arg;
    static auto* overrideColorScheme = &::il2cpp_utils::GetClassFromName("", "ColorScheme")->byval_arg;
    static auto* gameplayModifiers = &::il2cpp_utils::GetClassFromName("", "GameplayModifiers")->byval_arg;
    static auto* playerSpecificSettings = &::il2cpp_utils::GetClassFromName("", "PlayerSpecificSettings")->byval_arg;
    static auto* backButtonText = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{missionId, difficultyBeatmap, previewBeatmapLevel, missionObjectives, overrideColorScheme, gameplayModifiers, playerSpecificSettings, backButtonText});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelScenesTransitionSetupDataSO::Finish
// Il2CppName: Finish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionLevelScenesTransitionSetupDataSO::*)(GlobalNamespace::MissionCompletionResults*)>(&GlobalNamespace::MissionLevelScenesTransitionSetupDataSO::Finish)> {
  static const MethodInfo* get() {
    static auto* levelCompletionResults = &::il2cpp_utils::GetClassFromName("", "MissionCompletionResults")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*), "Finish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelCompletionResults});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelScenesTransitionSetupDataSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
