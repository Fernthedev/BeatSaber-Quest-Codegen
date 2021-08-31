// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: ISaberSwingRatingCounterDidFinishReceiver
#include "GlobalNamespace/ISaberSwingRatingCounterDidFinishReceiver.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteExecutionRating
  class NoteExecutionRating;
  // Forward declaring type: ISaberSwingRatingCounter
  class ISaberSwingRatingCounter;
  // Forward declaring type: LazyCopyHashSet`1<T>
  template<typename T>
  class LazyCopyHashSet_1;
  // Forward declaring type: ICutScoreHandlerDidFinishEvent
  class ICutScoreHandlerDidFinishEvent;
  // Forward declaring type: ILazyCopyHashSet`1<T>
  template<typename T>
  class ILazyCopyHashSet_1;
  // Forward declaring type: NoteCutInfo
  struct NoteCutInfo;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapObjectExecutionRatingsRecorder/CutScoreHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapObjectExecutionRatingsRecorder_CutScoreHandler : public ::Il2CppObject/*, public GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver*/ {
    public:
    // Nested type: GlobalNamespace::BeatmapObjectExecutionRatingsRecorder_CutScoreHandler::Pool
    class Pool;
    // private NoteExecutionRating _noteExecutionRating
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::NoteExecutionRating* noteExecutionRating;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NoteExecutionRating*) == 0x8);
    // private ISaberSwingRatingCounter _saberSwingRatingCounter
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::ISaberSwingRatingCounter* saberSwingRatingCounter;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ISaberSwingRatingCounter*) == 0x8);
    // private System.Single _cutDistanceToCenter
    // Size: 0x4
    // Offset: 0x20
    float cutDistanceToCenter;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: cutDistanceToCenter and: didFinishEvent
    char __padding2[0x4] = {};
    // private readonly LazyCopyHashSet`1<ICutScoreHandlerDidFinishEvent> _didFinishEvent
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ICutScoreHandlerDidFinishEvent*>* didFinishEvent;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ICutScoreHandlerDidFinishEvent*>*) == 0x8);
    // Creating value type constructor for type: BeatmapObjectExecutionRatingsRecorder_CutScoreHandler
    BeatmapObjectExecutionRatingsRecorder_CutScoreHandler(GlobalNamespace::NoteExecutionRating* noteExecutionRating_ = {}, GlobalNamespace::ISaberSwingRatingCounter* saberSwingRatingCounter_ = {}, float cutDistanceToCenter_ = {}, GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ICutScoreHandlerDidFinishEvent*>* didFinishEvent_ = {}) noexcept : noteExecutionRating{noteExecutionRating_}, saberSwingRatingCounter{saberSwingRatingCounter_}, cutDistanceToCenter{cutDistanceToCenter_}, didFinishEvent{didFinishEvent_} {}
    // Creating interface conversion operator: operator GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver
    operator GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver() noexcept {
      return *reinterpret_cast<GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver*>(this);
    }
    // Get instance field reference: private NoteExecutionRating _noteExecutionRating
    GlobalNamespace::NoteExecutionRating*& dyn__noteExecutionRating();
    // Get instance field reference: private ISaberSwingRatingCounter _saberSwingRatingCounter
    GlobalNamespace::ISaberSwingRatingCounter*& dyn__saberSwingRatingCounter();
    // Get instance field reference: private System.Single _cutDistanceToCenter
    float& dyn__cutDistanceToCenter();
    // Get instance field reference: private readonly LazyCopyHashSet`1<ICutScoreHandlerDidFinishEvent> _didFinishEvent
    GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ICutScoreHandlerDidFinishEvent*>*& dyn__didFinishEvent();
    // public ILazyCopyHashSet`1<ICutScoreHandlerDidFinishEvent> get_didFinishEvent()
    // Offset: 0x10C8E24
    GlobalNamespace::ILazyCopyHashSet_1<GlobalNamespace::ICutScoreHandlerDidFinishEvent*>* get_didFinishEvent();
    // public System.Void Set(in NoteCutInfo noteCutInfo, NoteExecutionRating noteExecutionRating, ISaberSwingRatingCounter swingRatingCounter)
    // Offset: 0x10C8A9C
    void Set(ByRef<GlobalNamespace::NoteCutInfo> noteCutInfo, GlobalNamespace::NoteExecutionRating* noteExecutionRating, GlobalNamespace::ISaberSwingRatingCounter* swingRatingCounter);
    // private System.Void Reinitialize()
    // Offset: 0x10C8E2C
    void Reinitialize();
    // public System.Void HandleSaberSwingRatingCounterDidFinish(ISaberSwingRatingCounter saberSwingRatingCounter)
    // Offset: 0x10C8E34
    void HandleSaberSwingRatingCounterDidFinish(GlobalNamespace::ISaberSwingRatingCounter* saberSwingRatingCounter);
    // public System.Void .ctor()
    // Offset: 0x10C9080
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapObjectExecutionRatingsRecorder_CutScoreHandler* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapObjectExecutionRatingsRecorder_CutScoreHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapObjectExecutionRatingsRecorder_CutScoreHandler*, creationType>()));
    }
  }; // BeatmapObjectExecutionRatingsRecorder/CutScoreHandler
  #pragma pack(pop)
  static check_size<sizeof(BeatmapObjectExecutionRatingsRecorder_CutScoreHandler), 40 + sizeof(GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ICutScoreHandlerDidFinishEvent*>*)> __GlobalNamespace_BeatmapObjectExecutionRatingsRecorder_CutScoreHandlerSizeCheck;
  static_assert(sizeof(BeatmapObjectExecutionRatingsRecorder_CutScoreHandler) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapObjectExecutionRatingsRecorder_CutScoreHandler*, "", "BeatmapObjectExecutionRatingsRecorder/CutScoreHandler");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectExecutionRatingsRecorder_CutScoreHandler::get_didFinishEvent
// Il2CppName: get_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ILazyCopyHashSet_1<GlobalNamespace::ICutScoreHandlerDidFinishEvent*>* (GlobalNamespace::BeatmapObjectExecutionRatingsRecorder_CutScoreHandler::*)()>(&GlobalNamespace::BeatmapObjectExecutionRatingsRecorder_CutScoreHandler::get_didFinishEvent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectExecutionRatingsRecorder_CutScoreHandler*), "get_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectExecutionRatingsRecorder_CutScoreHandler::Set
// Il2CppName: Set
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectExecutionRatingsRecorder_CutScoreHandler::*)(ByRef<GlobalNamespace::NoteCutInfo>, GlobalNamespace::NoteExecutionRating*, GlobalNamespace::ISaberSwingRatingCounter*)>(&GlobalNamespace::BeatmapObjectExecutionRatingsRecorder_CutScoreHandler::Set)> {
  static const MethodInfo* get() {
    static auto* noteCutInfo = &::il2cpp_utils::GetClassFromName("", "NoteCutInfo")->this_arg;
    static auto* noteExecutionRating = &::il2cpp_utils::GetClassFromName("", "NoteExecutionRating")->byval_arg;
    static auto* swingRatingCounter = &::il2cpp_utils::GetClassFromName("", "ISaberSwingRatingCounter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectExecutionRatingsRecorder_CutScoreHandler*), "Set", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteCutInfo, noteExecutionRating, swingRatingCounter});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectExecutionRatingsRecorder_CutScoreHandler::Reinitialize
// Il2CppName: Reinitialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectExecutionRatingsRecorder_CutScoreHandler::*)()>(&GlobalNamespace::BeatmapObjectExecutionRatingsRecorder_CutScoreHandler::Reinitialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectExecutionRatingsRecorder_CutScoreHandler*), "Reinitialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectExecutionRatingsRecorder_CutScoreHandler::HandleSaberSwingRatingCounterDidFinish
// Il2CppName: HandleSaberSwingRatingCounterDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectExecutionRatingsRecorder_CutScoreHandler::*)(GlobalNamespace::ISaberSwingRatingCounter*)>(&GlobalNamespace::BeatmapObjectExecutionRatingsRecorder_CutScoreHandler::HandleSaberSwingRatingCounterDidFinish)> {
  static const MethodInfo* get() {
    static auto* saberSwingRatingCounter = &::il2cpp_utils::GetClassFromName("", "ISaberSwingRatingCounter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectExecutionRatingsRecorder_CutScoreHandler*), "HandleSaberSwingRatingCounterDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{saberSwingRatingCounter});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectExecutionRatingsRecorder_CutScoreHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
