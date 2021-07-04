// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MockPlayerGamePoseGenerator
#include "GlobalNamespace/MockPlayerGamePoseGenerator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NodePoseSyncStateManager
  class NodePoseSyncStateManager;
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
  // Forward declaring type: IGameplayRpcManager
  class IGameplayRpcManager;
  // Forward declaring type: NoteMissInfoNetSerializable
  class NoteMissInfoNetSerializable;
  // Forward declaring type: NoteCutInfoNetSerializable
  class NoteCutInfoNetSerializable;
  // Forward declaring type: StandardScoreSyncStateNetSerializable
  class StandardScoreSyncStateNetSerializable;
  // Forward declaring type: MultiplayerLevelCompletionResults
  class MultiplayerLevelCompletionResults;
  // Forward declaring type: MockBeatmapData
  class MockBeatmapData;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: MockPlayerGamePoseGeneratorMirror
  class MockPlayerGamePoseGeneratorMirror : public GlobalNamespace::MockPlayerGamePoseGenerator {
    public:
    // Nested type: GlobalNamespace::MockPlayerGamePoseGeneratorMirror::$SendPoses$d__5
    struct $SendPoses$d__5;
    // private readonly NodePoseSyncStateManager _nodePoseSyncStateManager
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::NodePoseSyncStateManager* nodePoseSyncStateManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NodePoseSyncStateManager*) == 0x8);
    // private IConnectedPlayer _mirroredPlayer
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::IConnectedPlayer* mirroredPlayer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IConnectedPlayer*) == 0x8);
    // private System.Action _onSongFinished
    // Size: 0x8
    // Offset: 0x48
    System::Action* onSongFinished;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // Creating value type constructor for type: MockPlayerGamePoseGeneratorMirror
    MockPlayerGamePoseGeneratorMirror(GlobalNamespace::NodePoseSyncStateManager* nodePoseSyncStateManager_ = {}, GlobalNamespace::IConnectedPlayer* mirroredPlayer_ = {}, System::Action* onSongFinished_ = {}) noexcept : nodePoseSyncStateManager{nodePoseSyncStateManager_}, mirroredPlayer{mirroredPlayer_}, onSongFinished{onSongFinished_} {}
    // public System.Void .ctor(IMultiplayerSessionManager multiplayerSessionManager, IGameplayRpcManager gameplayRpcManager, System.Boolean leftHanded, NodePoseSyncStateManager nodePoseSyncStateManager)
    // Offset: 0x113FF04
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MockPlayerGamePoseGeneratorMirror* New_ctor(GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager, GlobalNamespace::IGameplayRpcManager* gameplayRpcManager, bool leftHanded, GlobalNamespace::NodePoseSyncStateManager* nodePoseSyncStateManager) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MockPlayerGamePoseGeneratorMirror::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MockPlayerGamePoseGeneratorMirror*, creationType>(multiplayerSessionManager, gameplayRpcManager, leftHanded, nodePoseSyncStateManager)));
    }
    // private System.Void FindPlayerToMirror()
    // Offset: 0x1140950
    void FindPlayerToMirror();
    // private System.Void HandleNoteWasMissed(System.String userId, System.Single syncTime, System.Single songTime, NoteMissInfoNetSerializable noteMissInfo)
    // Offset: 0x1140C68
    void HandleNoteWasMissed(::Il2CppString* userId, float syncTime, float songTime, GlobalNamespace::NoteMissInfoNetSerializable* noteMissInfo);
    // private System.Void HandleNoteWasCut(System.String userId, System.Single syncTime, System.Single songTime, NoteCutInfoNetSerializable noteCutInfo)
    // Offset: 0x1140DE4
    void HandleNoteWasCut(::Il2CppString* userId, float syncTime, float songTime, GlobalNamespace::NoteCutInfoNetSerializable* noteCutInfo);
    // private System.Void HandleScoreSyncStateUpdate(StandardScoreSyncStateNetSerializable nodePose, IConnectedPlayer player)
    // Offset: 0x1140F60
    void HandleScoreSyncStateUpdate(GlobalNamespace::StandardScoreSyncStateNetSerializable* nodePose, GlobalNamespace::IConnectedPlayer* player);
    // private System.Void HandleLevelFinished(System.String userId, MultiplayerLevelCompletionResults results)
    // Offset: 0x114115C
    void HandleLevelFinished(::Il2CppString* userId, GlobalNamespace::MultiplayerLevelCompletionResults* results);
    // public override System.Void Dispose()
    // Offset: 0x1140644
    // Implemented from: MockPlayerGamePoseGenerator
    // Base method: System.Void MockPlayerGamePoseGenerator::Dispose()
    void Dispose();
    // public override System.Void SendPoses(System.Single introStartTime, MockBeatmapData beatmapData, GameplayModifiers gameplayModifiers, System.Threading.CancellationToken cancellationToken, System.Action onSongFinished)
    // Offset: 0x1140884
    // Implemented from: MockPlayerGamePoseGenerator
    // Base method: System.Void MockPlayerGamePoseGenerator::SendPoses(System.Single introStartTime, MockBeatmapData beatmapData, GameplayModifiers gameplayModifiers, System.Threading.CancellationToken cancellationToken, System.Action onSongFinished)
    void SendPoses(float introStartTime, GlobalNamespace::MockBeatmapData* beatmapData, GlobalNamespace::GameplayModifiers* gameplayModifiers, System::Threading::CancellationToken cancellationToken, System::Action* onSongFinished);
  }; // MockPlayerGamePoseGeneratorMirror
  #pragma pack(pop)
  static check_size<sizeof(MockPlayerGamePoseGeneratorMirror), 72 + sizeof(System::Action*)> __GlobalNamespace_MockPlayerGamePoseGeneratorMirrorSizeCheck;
  static_assert(sizeof(MockPlayerGamePoseGeneratorMirror) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockPlayerGamePoseGeneratorMirror*, "", "MockPlayerGamePoseGeneratorMirror");
// Writing includes for template specializations
#include "GlobalNamespace/IMultiplayerSessionManager.hpp"
#include "GlobalNamespace/IGameplayRpcManager.hpp"
#include "GlobalNamespace/NodePoseSyncStateManager.hpp"
#include "GlobalNamespace/NoteMissInfoNetSerializable.hpp"
#include "GlobalNamespace/NoteCutInfoNetSerializable.hpp"
#include "GlobalNamespace/StandardScoreSyncStateNetSerializable.hpp"
#include "GlobalNamespace/IConnectedPlayer.hpp"
#include "GlobalNamespace/MultiplayerLevelCompletionResults.hpp"
#include "GlobalNamespace/MockBeatmapData.hpp"
#include "GlobalNamespace/GameplayModifiers.hpp"
#include "System/Threading/CancellationToken.hpp"
#include "System/Action.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerGamePoseGeneratorMirror::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerGamePoseGeneratorMirror::FindPlayerToMirror
// Il2CppName: FindPlayerToMirror
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerGamePoseGeneratorMirror::*)()>(&GlobalNamespace::MockPlayerGamePoseGeneratorMirror::FindPlayerToMirror)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerGamePoseGeneratorMirror*), "FindPlayerToMirror", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerGamePoseGeneratorMirror::HandleNoteWasMissed
// Il2CppName: HandleNoteWasMissed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerGamePoseGeneratorMirror::*)(::Il2CppString*, float, float, GlobalNamespace::NoteMissInfoNetSerializable*)>(&GlobalNamespace::MockPlayerGamePoseGeneratorMirror::HandleNoteWasMissed)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerGamePoseGeneratorMirror*), "HandleNoteWasMissed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::NoteMissInfoNetSerializable*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerGamePoseGeneratorMirror::HandleNoteWasCut
// Il2CppName: HandleNoteWasCut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerGamePoseGeneratorMirror::*)(::Il2CppString*, float, float, GlobalNamespace::NoteCutInfoNetSerializable*)>(&GlobalNamespace::MockPlayerGamePoseGeneratorMirror::HandleNoteWasCut)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerGamePoseGeneratorMirror*), "HandleNoteWasCut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::NoteCutInfoNetSerializable*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerGamePoseGeneratorMirror::HandleScoreSyncStateUpdate
// Il2CppName: HandleScoreSyncStateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerGamePoseGeneratorMirror::*)(GlobalNamespace::StandardScoreSyncStateNetSerializable*, GlobalNamespace::IConnectedPlayer*)>(&GlobalNamespace::MockPlayerGamePoseGeneratorMirror::HandleScoreSyncStateUpdate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerGamePoseGeneratorMirror*), "HandleScoreSyncStateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::StandardScoreSyncStateNetSerializable*>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::IConnectedPlayer*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerGamePoseGeneratorMirror::HandleLevelFinished
// Il2CppName: HandleLevelFinished
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerGamePoseGeneratorMirror::*)(::Il2CppString*, GlobalNamespace::MultiplayerLevelCompletionResults*)>(&GlobalNamespace::MockPlayerGamePoseGeneratorMirror::HandleLevelFinished)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerGamePoseGeneratorMirror*), "HandleLevelFinished", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::MultiplayerLevelCompletionResults*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerGamePoseGeneratorMirror::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerGamePoseGeneratorMirror::*)()>(&GlobalNamespace::MockPlayerGamePoseGeneratorMirror::Dispose)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerGamePoseGeneratorMirror*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerGamePoseGeneratorMirror::SendPoses
// Il2CppName: SendPoses
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerGamePoseGeneratorMirror::*)(float, GlobalNamespace::MockBeatmapData*, GlobalNamespace::GameplayModifiers*, System::Threading::CancellationToken, System::Action*)>(&GlobalNamespace::MockPlayerGamePoseGeneratorMirror::SendPoses)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerGamePoseGeneratorMirror*), "SendPoses", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::MockBeatmapData*>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::GameplayModifiers*>(), ::il2cpp_utils::ExtractIndependentType<System::Threading::CancellationToken>(), ::il2cpp_utils::ExtractIndependentType<System::Action*>()});
  }
};
