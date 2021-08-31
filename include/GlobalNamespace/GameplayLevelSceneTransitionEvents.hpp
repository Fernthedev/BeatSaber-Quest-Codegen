// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: StandardLevelScenesTransitionSetupDataSO
  class StandardLevelScenesTransitionSetupDataSO;
  // Forward declaring type: MissionLevelScenesTransitionSetupDataSO
  class MissionLevelScenesTransitionSetupDataSO;
  // Forward declaring type: MultiplayerLevelScenesTransitionSetupDataSO
  class MultiplayerLevelScenesTransitionSetupDataSO;
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
  // Forward declaring type: MultiplayerResultsData
  class MultiplayerResultsData;
  // Forward declaring type: MissionCompletionResults
  class MissionCompletionResults;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: GameplayLevelSceneTransitionEvents
  // [TokenAttribute] Offset: FFFFFFFF
  class GameplayLevelSceneTransitionEvents : public ::Il2CppObject {
    public:
    // private readonly StandardLevelScenesTransitionSetupDataSO _standardLevelScenesTransitionSetupData
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* standardLevelScenesTransitionSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*) == 0x8);
    // private readonly MissionLevelScenesTransitionSetupDataSO _missionLevelScenesTransitionSetupData
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* missionLevelScenesTransitionSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*) == 0x8);
    // private readonly MultiplayerLevelScenesTransitionSetupDataSO _multiplayerLevelScenesTransitionSetupData
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* multiplayerLevelScenesTransitionSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*) == 0x8);
    // private System.Action anyGameplayLevelDidFinishEvent
    // Size: 0x8
    // Offset: 0x28
    System::Action* anyGameplayLevelDidFinishEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // Creating value type constructor for type: GameplayLevelSceneTransitionEvents
    GameplayLevelSceneTransitionEvents(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* standardLevelScenesTransitionSetupData_ = {}, GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* missionLevelScenesTransitionSetupData_ = {}, GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* multiplayerLevelScenesTransitionSetupData_ = {}, System::Action* anyGameplayLevelDidFinishEvent_ = {}) noexcept : standardLevelScenesTransitionSetupData{standardLevelScenesTransitionSetupData_}, missionLevelScenesTransitionSetupData{missionLevelScenesTransitionSetupData_}, multiplayerLevelScenesTransitionSetupData{multiplayerLevelScenesTransitionSetupData_}, anyGameplayLevelDidFinishEvent{anyGameplayLevelDidFinishEvent_} {}
    // Get instance field reference: private readonly StandardLevelScenesTransitionSetupDataSO _standardLevelScenesTransitionSetupData
    GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*& dyn__standardLevelScenesTransitionSetupData();
    // Get instance field reference: private readonly MissionLevelScenesTransitionSetupDataSO _missionLevelScenesTransitionSetupData
    GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*& dyn__missionLevelScenesTransitionSetupData();
    // Get instance field reference: private readonly MultiplayerLevelScenesTransitionSetupDataSO _multiplayerLevelScenesTransitionSetupData
    GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*& dyn__multiplayerLevelScenesTransitionSetupData();
    // Get instance field reference: private System.Action anyGameplayLevelDidFinishEvent
    System::Action*& dyn_anyGameplayLevelDidFinishEvent();
    // public System.Void add_anyGameplayLevelDidFinishEvent(System.Action value)
    // Offset: 0x110C3A4
    void add_anyGameplayLevelDidFinishEvent(System::Action* value);
    // public System.Void remove_anyGameplayLevelDidFinishEvent(System.Action value)
    // Offset: 0x110C448
    void remove_anyGameplayLevelDidFinishEvent(System::Action* value);
    // public System.Void .ctor(StandardLevelScenesTransitionSetupDataSO standardLevelScenesTransitionSetupData, MissionLevelScenesTransitionSetupDataSO missionLevelScenesTransitionSetupData, MultiplayerLevelScenesTransitionSetupDataSO multiplayerLevelScenesTransitionSetupData)
    // Offset: 0x110C4EC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameplayLevelSceneTransitionEvents* New_ctor(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* standardLevelScenesTransitionSetupData, GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* missionLevelScenesTransitionSetupData, GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* multiplayerLevelScenesTransitionSetupData) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::GameplayLevelSceneTransitionEvents::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameplayLevelSceneTransitionEvents*, creationType>(standardLevelScenesTransitionSetupData, missionLevelScenesTransitionSetupData, multiplayerLevelScenesTransitionSetupData)));
    }
    // private System.Void HandleStandardLevelDidFinish(StandardLevelScenesTransitionSetupDataSO standardLevelScenesTransitionSetupData, LevelCompletionResults levelCompletionResults)
    // Offset: 0x110C7C8
    void HandleStandardLevelDidFinish(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* standardLevelScenesTransitionSetupData, GlobalNamespace::LevelCompletionResults* levelCompletionResults);
    // private System.Void HandleMultiplayerLevelDidFinish(MultiplayerLevelScenesTransitionSetupDataSO multiplayerLevelScenesTransitionSetupData, MultiplayerResultsData multiplayerResultsData)
    // Offset: 0x110C7F0
    void HandleMultiplayerLevelDidFinish(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* multiplayerLevelScenesTransitionSetupData, GlobalNamespace::MultiplayerResultsData* multiplayerResultsData);
    // private System.Void HandleMissionLevelDidFinish(MissionLevelScenesTransitionSetupDataSO missionLevelScenesTransitionSetupData, MissionCompletionResults missionCompletionResults)
    // Offset: 0x110C804
    void HandleMissionLevelDidFinish(GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* missionLevelScenesTransitionSetupData, GlobalNamespace::MissionCompletionResults* missionCompletionResults);
    // private System.Void InvokeAnyGameplayLevelDidFinish()
    // Offset: 0x110C7DC
    void InvokeAnyGameplayLevelDidFinish();
    // protected override System.Void Finalize()
    // Offset: 0x110C63C
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // GameplayLevelSceneTransitionEvents
  #pragma pack(pop)
  static check_size<sizeof(GameplayLevelSceneTransitionEvents), 40 + sizeof(System::Action*)> __GlobalNamespace_GameplayLevelSceneTransitionEventsSizeCheck;
  static_assert(sizeof(GameplayLevelSceneTransitionEvents) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayLevelSceneTransitionEvents*, "", "GameplayLevelSceneTransitionEvents");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GameplayLevelSceneTransitionEvents::add_anyGameplayLevelDidFinishEvent
// Il2CppName: add_anyGameplayLevelDidFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayLevelSceneTransitionEvents::*)(System::Action*)>(&GlobalNamespace::GameplayLevelSceneTransitionEvents::add_anyGameplayLevelDidFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayLevelSceneTransitionEvents*), "add_anyGameplayLevelDidFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayLevelSceneTransitionEvents::remove_anyGameplayLevelDidFinishEvent
// Il2CppName: remove_anyGameplayLevelDidFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayLevelSceneTransitionEvents::*)(System::Action*)>(&GlobalNamespace::GameplayLevelSceneTransitionEvents::remove_anyGameplayLevelDidFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayLevelSceneTransitionEvents*), "remove_anyGameplayLevelDidFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayLevelSceneTransitionEvents::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::GameplayLevelSceneTransitionEvents::HandleStandardLevelDidFinish
// Il2CppName: HandleStandardLevelDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayLevelSceneTransitionEvents::*)(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, GlobalNamespace::LevelCompletionResults*)>(&GlobalNamespace::GameplayLevelSceneTransitionEvents::HandleStandardLevelDidFinish)> {
  static const MethodInfo* get() {
    static auto* standardLevelScenesTransitionSetupData = &::il2cpp_utils::GetClassFromName("", "StandardLevelScenesTransitionSetupDataSO")->byval_arg;
    static auto* levelCompletionResults = &::il2cpp_utils::GetClassFromName("", "LevelCompletionResults")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayLevelSceneTransitionEvents*), "HandleStandardLevelDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{standardLevelScenesTransitionSetupData, levelCompletionResults});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayLevelSceneTransitionEvents::HandleMultiplayerLevelDidFinish
// Il2CppName: HandleMultiplayerLevelDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayLevelSceneTransitionEvents::*)(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, GlobalNamespace::MultiplayerResultsData*)>(&GlobalNamespace::GameplayLevelSceneTransitionEvents::HandleMultiplayerLevelDidFinish)> {
  static const MethodInfo* get() {
    static auto* multiplayerLevelScenesTransitionSetupData = &::il2cpp_utils::GetClassFromName("", "MultiplayerLevelScenesTransitionSetupDataSO")->byval_arg;
    static auto* multiplayerResultsData = &::il2cpp_utils::GetClassFromName("", "MultiplayerResultsData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayLevelSceneTransitionEvents*), "HandleMultiplayerLevelDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{multiplayerLevelScenesTransitionSetupData, multiplayerResultsData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayLevelSceneTransitionEvents::HandleMissionLevelDidFinish
// Il2CppName: HandleMissionLevelDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayLevelSceneTransitionEvents::*)(GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*, GlobalNamespace::MissionCompletionResults*)>(&GlobalNamespace::GameplayLevelSceneTransitionEvents::HandleMissionLevelDidFinish)> {
  static const MethodInfo* get() {
    static auto* missionLevelScenesTransitionSetupData = &::il2cpp_utils::GetClassFromName("", "MissionLevelScenesTransitionSetupDataSO")->byval_arg;
    static auto* missionCompletionResults = &::il2cpp_utils::GetClassFromName("", "MissionCompletionResults")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayLevelSceneTransitionEvents*), "HandleMissionLevelDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{missionLevelScenesTransitionSetupData, missionCompletionResults});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayLevelSceneTransitionEvents::InvokeAnyGameplayLevelDidFinish
// Il2CppName: InvokeAnyGameplayLevelDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayLevelSceneTransitionEvents::*)()>(&GlobalNamespace::GameplayLevelSceneTransitionEvents::InvokeAnyGameplayLevelDidFinish)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayLevelSceneTransitionEvents*), "InvokeAnyGameplayLevelDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayLevelSceneTransitionEvents::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayLevelSceneTransitionEvents::*)()>(&GlobalNamespace::GameplayLevelSceneTransitionEvents::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayLevelSceneTransitionEvents*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
