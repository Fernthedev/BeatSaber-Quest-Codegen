// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: ICutScoreHandlerDidFinishEvent
#include "GlobalNamespace/ICutScoreHandlerDidFinishEvent.hpp"
// Including type: BeatmapObjectExecutionRatingsRecorder/CutScoreHandler
#include "GlobalNamespace/BeatmapObjectExecutionRatingsRecorder_CutScoreHandler.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IScoreController
  class IScoreController;
  // Forward declaring type: BeatmapObjectManager
  class BeatmapObjectManager;
  // Forward declaring type: PlayerHeadAndObstacleInteraction
  class PlayerHeadAndObstacleInteraction;
  // Forward declaring type: AudioTimeSyncController
  class AudioTimeSyncController;
  // Forward declaring type: BeatmapObjectExecutionRating
  class BeatmapObjectExecutionRating;
  // Forward declaring type: ObstacleData
  class ObstacleData;
  // Forward declaring type: ObstacleController
  class ObstacleController;
  // Forward declaring type: NoteData
  class NoteData;
  // Forward declaring type: NoteCutInfo
  struct NoteCutInfo;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapObjectExecutionRatingsRecorder
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapObjectExecutionRatingsRecorder : public UnityEngine::MonoBehaviour/*, public GlobalNamespace::ICutScoreHandlerDidFinishEvent*/ {
    public:
    // [InjectAttribute] Offset: 0xE3BBD8
    // private readonly IScoreController _scoreController
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::IScoreController* scoreController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IScoreController*) == 0x8);
    // [InjectAttribute] Offset: 0xE3BBE8
    // private readonly BeatmapObjectManager _beatmapObjectManager
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::BeatmapObjectManager* beatmapObjectManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE3BBF8
    // private readonly PlayerHeadAndObstacleInteraction _playerHeadAndObstacleInteraction
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::PlayerHeadAndObstacleInteraction* playerHeadAndObstacleInteraction;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerHeadAndObstacleInteraction*) == 0x8);
    // [InjectAttribute] Offset: 0xE3BC08
    // private readonly AudioTimeSyncController _audioTimeSyncController
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::AudioTimeSyncController* audioTimeSyncController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AudioTimeSyncController*) == 0x8);
    // [InjectAttribute] Offset: 0xE3BC18
    // private readonly BeatmapObjectExecutionRatingsRecorder/CutScoreHandler/Pool _cutScoreHandlerPool
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::BeatmapObjectExecutionRatingsRecorder_CutScoreHandler::Pool* cutScoreHandlerPool;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectExecutionRatingsRecorder_CutScoreHandler::Pool*) == 0x8);
    // private readonly System.Collections.Generic.List`1<BeatmapObjectExecutionRating> _beatmapObjectExecutionRatings
    // Size: 0x8
    // Offset: 0x40
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapObjectExecutionRating*>* beatmapObjectExecutionRatings;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::BeatmapObjectExecutionRating*>*) == 0x8);
    // private readonly System.Collections.Generic.HashSet`1<ObstacleData> _hitObstacles
    // Size: 0x8
    // Offset: 0x48
    System::Collections::Generic::HashSet_1<GlobalNamespace::ObstacleData*>* hitObstacles;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::HashSet_1<GlobalNamespace::ObstacleData*>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<ObstacleController> _prevIntersectingObstacles
    // Size: 0x8
    // Offset: 0x50
    System::Collections::Generic::List_1<GlobalNamespace::ObstacleController*>* prevIntersectingObstacles;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::ObstacleController*>*) == 0x8);
    // Creating value type constructor for type: BeatmapObjectExecutionRatingsRecorder
    BeatmapObjectExecutionRatingsRecorder(GlobalNamespace::IScoreController* scoreController_ = {}, GlobalNamespace::BeatmapObjectManager* beatmapObjectManager_ = {}, GlobalNamespace::PlayerHeadAndObstacleInteraction* playerHeadAndObstacleInteraction_ = {}, GlobalNamespace::AudioTimeSyncController* audioTimeSyncController_ = {}, GlobalNamespace::BeatmapObjectExecutionRatingsRecorder_CutScoreHandler::Pool* cutScoreHandlerPool_ = {}, System::Collections::Generic::List_1<GlobalNamespace::BeatmapObjectExecutionRating*>* beatmapObjectExecutionRatings_ = {}, System::Collections::Generic::HashSet_1<GlobalNamespace::ObstacleData*>* hitObstacles_ = {}, System::Collections::Generic::List_1<GlobalNamespace::ObstacleController*>* prevIntersectingObstacles_ = {}) noexcept : scoreController{scoreController_}, beatmapObjectManager{beatmapObjectManager_}, playerHeadAndObstacleInteraction{playerHeadAndObstacleInteraction_}, audioTimeSyncController{audioTimeSyncController_}, cutScoreHandlerPool{cutScoreHandlerPool_}, beatmapObjectExecutionRatings{beatmapObjectExecutionRatings_}, hitObstacles{hitObstacles_}, prevIntersectingObstacles{prevIntersectingObstacles_} {}
    // Creating interface conversion operator: operator GlobalNamespace::ICutScoreHandlerDidFinishEvent
    operator GlobalNamespace::ICutScoreHandlerDidFinishEvent() noexcept {
      return *reinterpret_cast<GlobalNamespace::ICutScoreHandlerDidFinishEvent*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private readonly IScoreController _scoreController
    GlobalNamespace::IScoreController*& dyn__scoreController();
    // Get instance field reference: private readonly BeatmapObjectManager _beatmapObjectManager
    GlobalNamespace::BeatmapObjectManager*& dyn__beatmapObjectManager();
    // Get instance field reference: private readonly PlayerHeadAndObstacleInteraction _playerHeadAndObstacleInteraction
    GlobalNamespace::PlayerHeadAndObstacleInteraction*& dyn__playerHeadAndObstacleInteraction();
    // Get instance field reference: private readonly AudioTimeSyncController _audioTimeSyncController
    GlobalNamespace::AudioTimeSyncController*& dyn__audioTimeSyncController();
    // Get instance field reference: private readonly BeatmapObjectExecutionRatingsRecorder/CutScoreHandler/Pool _cutScoreHandlerPool
    GlobalNamespace::BeatmapObjectExecutionRatingsRecorder_CutScoreHandler::Pool*& dyn__cutScoreHandlerPool();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<BeatmapObjectExecutionRating> _beatmapObjectExecutionRatings
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapObjectExecutionRating*>*& dyn__beatmapObjectExecutionRatings();
    // Get instance field reference: private readonly System.Collections.Generic.HashSet`1<ObstacleData> _hitObstacles
    System::Collections::Generic::HashSet_1<GlobalNamespace::ObstacleData*>*& dyn__hitObstacles();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<ObstacleController> _prevIntersectingObstacles
    System::Collections::Generic::List_1<GlobalNamespace::ObstacleController*>*& dyn__prevIntersectingObstacles();
    // public System.Collections.Generic.List`1<BeatmapObjectExecutionRating> get_beatmapObjectExecutionRatings()
    // Offset: 0x10CF36C
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapObjectExecutionRating*>* get_beatmapObjectExecutionRatings();
    // protected System.Void Start()
    // Offset: 0x10CF374
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x10CF5EC
    void OnDestroy();
    // protected System.Void Update()
    // Offset: 0x10CF878
    void Update();
    // public System.Void HandleCutScoreHandlerDidFinish(BeatmapObjectExecutionRatingsRecorder/CutScoreHandler cutScoreHandler)
    // Offset: 0x10CFA94
    void HandleCutScoreHandlerDidFinish(GlobalNamespace::BeatmapObjectExecutionRatingsRecorder_CutScoreHandler* cutScoreHandler);
    // private System.Void HandleScoreControllerNoteWasCut(NoteData noteData, in NoteCutInfo noteCutInfo, System.Int32 multiplier)
    // Offset: 0x10CFB74
    void HandleScoreControllerNoteWasCut(GlobalNamespace::NoteData* noteData, ByRef<GlobalNamespace::NoteCutInfo> noteCutInfo, int multiplier);
    // private System.Void HandleScoreControllerNoteWasMissed(NoteData noteData, System.Int32 multiplier)
    // Offset: 0x10CFEB8
    void HandleScoreControllerNoteWasMissed(GlobalNamespace::NoteData* noteData, int multiplier);
    // private System.Void HandleObstacleDidPassAvoidedMark(ObstacleController obstacleController)
    // Offset: 0x10CFFA0
    void HandleObstacleDidPassAvoidedMark(GlobalNamespace::ObstacleController* obstacleController);
    // public System.Void .ctor()
    // Offset: 0x10D0094
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapObjectExecutionRatingsRecorder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapObjectExecutionRatingsRecorder*, creationType>()));
    }
  }; // BeatmapObjectExecutionRatingsRecorder
  #pragma pack(pop)
  static check_size<sizeof(BeatmapObjectExecutionRatingsRecorder), 80 + sizeof(System::Collections::Generic::List_1<GlobalNamespace::ObstacleController*>*)> __GlobalNamespace_BeatmapObjectExecutionRatingsRecorderSizeCheck;
  static_assert(sizeof(BeatmapObjectExecutionRatingsRecorder) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapObjectExecutionRatingsRecorder*, "", "BeatmapObjectExecutionRatingsRecorder");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::get_beatmapObjectExecutionRatings
// Il2CppName: get_beatmapObjectExecutionRatings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<GlobalNamespace::BeatmapObjectExecutionRating*>* (GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::*)()>(&GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::get_beatmapObjectExecutionRatings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectExecutionRatingsRecorder*), "get_beatmapObjectExecutionRatings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::*)()>(&GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectExecutionRatingsRecorder*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::*)()>(&GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectExecutionRatingsRecorder*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::*)()>(&GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectExecutionRatingsRecorder*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::HandleCutScoreHandlerDidFinish
// Il2CppName: HandleCutScoreHandlerDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::*)(GlobalNamespace::BeatmapObjectExecutionRatingsRecorder_CutScoreHandler*)>(&GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::HandleCutScoreHandlerDidFinish)> {
  static const MethodInfo* get() {
    static auto* cutScoreHandler = &::il2cpp_utils::GetClassFromName("", "BeatmapObjectExecutionRatingsRecorder/CutScoreHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectExecutionRatingsRecorder*), "HandleCutScoreHandlerDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cutScoreHandler});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::HandleScoreControllerNoteWasCut
// Il2CppName: HandleScoreControllerNoteWasCut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::*)(GlobalNamespace::NoteData*, ByRef<GlobalNamespace::NoteCutInfo>, int)>(&GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::HandleScoreControllerNoteWasCut)> {
  static const MethodInfo* get() {
    static auto* noteData = &::il2cpp_utils::GetClassFromName("", "NoteData")->byval_arg;
    static auto* noteCutInfo = &::il2cpp_utils::GetClassFromName("", "NoteCutInfo")->this_arg;
    static auto* multiplier = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectExecutionRatingsRecorder*), "HandleScoreControllerNoteWasCut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteData, noteCutInfo, multiplier});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::HandleScoreControllerNoteWasMissed
// Il2CppName: HandleScoreControllerNoteWasMissed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::*)(GlobalNamespace::NoteData*, int)>(&GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::HandleScoreControllerNoteWasMissed)> {
  static const MethodInfo* get() {
    static auto* noteData = &::il2cpp_utils::GetClassFromName("", "NoteData")->byval_arg;
    static auto* multiplier = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectExecutionRatingsRecorder*), "HandleScoreControllerNoteWasMissed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteData, multiplier});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::HandleObstacleDidPassAvoidedMark
// Il2CppName: HandleObstacleDidPassAvoidedMark
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::*)(GlobalNamespace::ObstacleController*)>(&GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::HandleObstacleDidPassAvoidedMark)> {
  static const MethodInfo* get() {
    static auto* obstacleController = &::il2cpp_utils::GetClassFromName("", "ObstacleController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectExecutionRatingsRecorder*), "HandleObstacleDidPassAvoidedMark", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obstacleController});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
