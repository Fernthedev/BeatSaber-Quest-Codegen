// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: BeatmapObjectSpawnMovementData
#include "GlobalNamespace/BeatmapObjectSpawnMovementData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PlayerTransforms
  class PlayerTransforms;
  // Forward declaring type: AudioTimeSyncController
  class AudioTimeSyncController;
  // Forward declaring type: IScoreSyncStateManager
  class IScoreSyncStateManager;
  // Forward declaring type: INodePoseSyncStateManager
  class INodePoseSyncStateManager;
  // Forward declaring type: IGameplayRpcManager
  class IGameplayRpcManager;
  // Forward declaring type: BeatmapObjectManager
  class BeatmapObjectManager;
  // Forward declaring type: IScoreController
  class IScoreController;
  // Forward declaring type: ComboController
  class ComboController;
  // Forward declaring type: NoteData
  class NoteData;
  // Forward declaring type: ObstacleData
  class ObstacleData;
  // Forward declaring type: SliderData
  class SliderData;
  // Forward declaring type: NoteController
  class NoteController;
  // Forward declaring type: NoteCutInfo
  struct NoteCutInfo;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerLocalActiveClient
  class MultiplayerLocalActiveClient;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MultiplayerLocalActiveClient);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLocalActiveClient*, "", "MultiplayerLocalActiveClient");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerLocalActiveClient
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerLocalActiveClient : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // [InjectAttribute] Offset: 0x10EAE90
    // private readonly PlayerTransforms _playerTransforms
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::PlayerTransforms* playerTransforms;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PlayerTransforms*) == 0x8);
    // [InjectAttribute] Offset: 0x10EAEA0
    // private readonly AudioTimeSyncController _audioTimeSyncController
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::AudioTimeSyncController* audioTimeSyncController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AudioTimeSyncController*) == 0x8);
    // [InjectAttribute] Offset: 0x10EAEB0
    // private readonly IScoreSyncStateManager _scoreSyncStateManager
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::IScoreSyncStateManager* scoreSyncStateManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IScoreSyncStateManager*) == 0x8);
    // [InjectAttribute] Offset: 0x10EAEC0
    // private readonly INodePoseSyncStateManager _nodePoseSyncStateManager
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::INodePoseSyncStateManager* nodePoseSyncStateManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::INodePoseSyncStateManager*) == 0x8);
    // [InjectAttribute] Offset: 0x10EAED0
    // private readonly IGameplayRpcManager _rpcManager
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::IGameplayRpcManager* rpcManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IGameplayRpcManager*) == 0x8);
    // [InjectAttribute] Offset: 0x10EAEE0
    // private readonly BeatmapObjectManager _beatmapObjectManager
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::BeatmapObjectManager* beatmapObjectManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapObjectManager*) == 0x8);
    // [InjectAttribute] Offset: 0x10EAEF0
    // private readonly IScoreController _scoreController
    // Size: 0x8
    // Offset: 0x48
    ::GlobalNamespace::IScoreController* scoreController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IScoreController*) == 0x8);
    // [InjectAttribute] Offset: 0x10EAF00
    // private readonly ComboController _comboController
    // Size: 0x8
    // Offset: 0x50
    ::GlobalNamespace::ComboController* comboController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ComboController*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private readonly PlayerTransforms _playerTransforms
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PlayerTransforms*& dyn__playerTransforms();
    // Get instance field reference: private readonly AudioTimeSyncController _audioTimeSyncController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AudioTimeSyncController*& dyn__audioTimeSyncController();
    // Get instance field reference: private readonly IScoreSyncStateManager _scoreSyncStateManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IScoreSyncStateManager*& dyn__scoreSyncStateManager();
    // Get instance field reference: private readonly INodePoseSyncStateManager _nodePoseSyncStateManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::INodePoseSyncStateManager*& dyn__nodePoseSyncStateManager();
    // Get instance field reference: private readonly IGameplayRpcManager _rpcManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IGameplayRpcManager*& dyn__rpcManager();
    // Get instance field reference: private readonly BeatmapObjectManager _beatmapObjectManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapObjectManager*& dyn__beatmapObjectManager();
    // Get instance field reference: private readonly IScoreController _scoreController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IScoreController*& dyn__scoreController();
    // Get instance field reference: private readonly ComboController _comboController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ComboController*& dyn__comboController();
    // public System.Void .ctor()
    // Offset: 0x1436A70
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLocalActiveClient* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerLocalActiveClient::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLocalActiveClient*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x1434F0C
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x143558C
    void OnDestroy();
    // protected System.Void LateUpdate()
    // Offset: 0x143592C
    void LateUpdate();
    // private System.Void HandleNoteWasAdded(NoteData noteData, BeatmapObjectSpawnMovementData/NoteSpawnData noteSpawnData, System.Single rotation)
    // Offset: 0x1435CB4
    void HandleNoteWasAdded(::GlobalNamespace::NoteData* noteData, ::GlobalNamespace::BeatmapObjectSpawnMovementData::NoteSpawnData noteSpawnData, float rotation);
    // private System.Void HandleObstacleWasAdded(ObstacleData obstacleData, BeatmapObjectSpawnMovementData/ObstacleSpawnData obstacleSpawnData, System.Single rotation)
    // Offset: 0x1435EB8
    void HandleObstacleWasAdded(::GlobalNamespace::ObstacleData* obstacleData, ::GlobalNamespace::BeatmapObjectSpawnMovementData::ObstacleSpawnData obstacleSpawnData, float rotation);
    // private System.Void HandleSliderWasAdded(SliderData sliderData, BeatmapObjectSpawnMovementData/SliderSpawnData sliderSpawnData, System.Single rotation)
    // Offset: 0x143607C
    void HandleSliderWasAdded(::GlobalNamespace::SliderData* sliderData, ::GlobalNamespace::BeatmapObjectSpawnMovementData::SliderSpawnData sliderSpawnData, float rotation);
    // private System.Void HandleNoteWasMissed(NoteController noteController)
    // Offset: 0x143633C
    void HandleNoteWasMissed(::GlobalNamespace::NoteController* noteController);
    // private System.Void HandleNoteWasCut(NoteController noteController, in NoteCutInfo noteCutInfo)
    // Offset: 0x1436454
    void HandleNoteWasCut(::GlobalNamespace::NoteController* noteController, ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo);
    // private System.Void HandleComboDidChange(System.Int32 combo)
    // Offset: 0x1436624
    void HandleComboDidChange(int combo);
    // private System.Void HandleMultiplierDidChange(System.Int32 multiplier, System.Single multiplierProgress)
    // Offset: 0x143670C
    void HandleMultiplierDidChange(int multiplier, float multiplierProgress);
    // private System.Void HandleScoreDidChange(System.Int32 multipliedScore, System.Int32 modifiedScore)
    // Offset: 0x14367F4
    void HandleScoreDidChange(int multipliedScore, int modifiedScore);
  }; // MultiplayerLocalActiveClient
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerLocalActiveClient), 80 + sizeof(::GlobalNamespace::ComboController*)> __GlobalNamespace_MultiplayerLocalActiveClientSizeCheck;
  static_assert(sizeof(MultiplayerLocalActiveClient) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActiveClient::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActiveClient::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActiveClient::*)()>(&GlobalNamespace::MultiplayerLocalActiveClient::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActiveClient*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActiveClient::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActiveClient::*)()>(&GlobalNamespace::MultiplayerLocalActiveClient::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActiveClient*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActiveClient::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActiveClient::*)()>(&GlobalNamespace::MultiplayerLocalActiveClient::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActiveClient*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActiveClient::HandleNoteWasAdded
// Il2CppName: HandleNoteWasAdded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActiveClient::*)(::GlobalNamespace::NoteData*, ::GlobalNamespace::BeatmapObjectSpawnMovementData::NoteSpawnData, float)>(&GlobalNamespace::MultiplayerLocalActiveClient::HandleNoteWasAdded)> {
  static const MethodInfo* get() {
    static auto* noteData = &::il2cpp_utils::GetClassFromName("", "NoteData")->byval_arg;
    static auto* noteSpawnData = &::il2cpp_utils::GetClassFromName("", "BeatmapObjectSpawnMovementData/NoteSpawnData")->byval_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActiveClient*), "HandleNoteWasAdded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteData, noteSpawnData, rotation});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActiveClient::HandleObstacleWasAdded
// Il2CppName: HandleObstacleWasAdded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActiveClient::*)(::GlobalNamespace::ObstacleData*, ::GlobalNamespace::BeatmapObjectSpawnMovementData::ObstacleSpawnData, float)>(&GlobalNamespace::MultiplayerLocalActiveClient::HandleObstacleWasAdded)> {
  static const MethodInfo* get() {
    static auto* obstacleData = &::il2cpp_utils::GetClassFromName("", "ObstacleData")->byval_arg;
    static auto* obstacleSpawnData = &::il2cpp_utils::GetClassFromName("", "BeatmapObjectSpawnMovementData/ObstacleSpawnData")->byval_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActiveClient*), "HandleObstacleWasAdded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obstacleData, obstacleSpawnData, rotation});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActiveClient::HandleSliderWasAdded
// Il2CppName: HandleSliderWasAdded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActiveClient::*)(::GlobalNamespace::SliderData*, ::GlobalNamespace::BeatmapObjectSpawnMovementData::SliderSpawnData, float)>(&GlobalNamespace::MultiplayerLocalActiveClient::HandleSliderWasAdded)> {
  static const MethodInfo* get() {
    static auto* sliderData = &::il2cpp_utils::GetClassFromName("", "SliderData")->byval_arg;
    static auto* sliderSpawnData = &::il2cpp_utils::GetClassFromName("", "BeatmapObjectSpawnMovementData/SliderSpawnData")->byval_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActiveClient*), "HandleSliderWasAdded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sliderData, sliderSpawnData, rotation});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActiveClient::HandleNoteWasMissed
// Il2CppName: HandleNoteWasMissed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActiveClient::*)(::GlobalNamespace::NoteController*)>(&GlobalNamespace::MultiplayerLocalActiveClient::HandleNoteWasMissed)> {
  static const MethodInfo* get() {
    static auto* noteController = &::il2cpp_utils::GetClassFromName("", "NoteController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActiveClient*), "HandleNoteWasMissed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteController});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActiveClient::HandleNoteWasCut
// Il2CppName: HandleNoteWasCut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActiveClient::*)(::GlobalNamespace::NoteController*, ByRef<::GlobalNamespace::NoteCutInfo>)>(&GlobalNamespace::MultiplayerLocalActiveClient::HandleNoteWasCut)> {
  static const MethodInfo* get() {
    static auto* noteController = &::il2cpp_utils::GetClassFromName("", "NoteController")->byval_arg;
    static auto* noteCutInfo = &::il2cpp_utils::GetClassFromName("", "NoteCutInfo")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActiveClient*), "HandleNoteWasCut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteController, noteCutInfo});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActiveClient::HandleComboDidChange
// Il2CppName: HandleComboDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActiveClient::*)(int)>(&GlobalNamespace::MultiplayerLocalActiveClient::HandleComboDidChange)> {
  static const MethodInfo* get() {
    static auto* combo = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActiveClient*), "HandleComboDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{combo});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActiveClient::HandleMultiplierDidChange
// Il2CppName: HandleMultiplierDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActiveClient::*)(int, float)>(&GlobalNamespace::MultiplayerLocalActiveClient::HandleMultiplierDidChange)> {
  static const MethodInfo* get() {
    static auto* multiplier = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* multiplierProgress = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActiveClient*), "HandleMultiplierDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{multiplier, multiplierProgress});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActiveClient::HandleScoreDidChange
// Il2CppName: HandleScoreDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActiveClient::*)(int, int)>(&GlobalNamespace::MultiplayerLocalActiveClient::HandleScoreDidChange)> {
  static const MethodInfo* get() {
    static auto* multipliedScore = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* modifiedScore = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActiveClient*), "HandleScoreDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{multipliedScore, modifiedScore});
  }
};
