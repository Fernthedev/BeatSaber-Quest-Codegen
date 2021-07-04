// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OnlineServices.ILeaderboardsModel
#include "OnlineServices/ILeaderboardsModel.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: OnlineServices
namespace OnlineServices {
  // Forward declaring type: GetLeaderboardFilterData
  struct GetLeaderboardFilterData;
  // Forward declaring type: LevelScoreResultsData
  struct LevelScoreResultsData;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: TestLeaderboardsModel
  class TestLeaderboardsModel : public ::Il2CppObject/*, public OnlineServices::ILeaderboardsModel*/ {
    public:
    // Nested type: GlobalNamespace::TestLeaderboardsModel::$GetLeaderboardEntriesAsync$d__4
    struct $GetLeaderboardEntriesAsync$d__4;
    // Nested type: GlobalNamespace::TestLeaderboardsModel::$SendLevelScoreResultAsync$d__5
    struct $SendLevelScoreResultAsync$d__5;
    // [CompilerGeneratedAttribute] Offset: 0xE18120
    // private System.Action`1<System.String> scoreForLeaderboardDidUploadEvent
    // Size: 0x8
    // Offset: 0x10
    System::Action_1<::Il2CppString*>* scoreForLeaderboardDidUploadEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<::Il2CppString*>*) == 0x8);
    // Creating value type constructor for type: TestLeaderboardsModel
    TestLeaderboardsModel(System::Action_1<::Il2CppString*>* scoreForLeaderboardDidUploadEvent_ = {}) noexcept : scoreForLeaderboardDidUploadEvent{scoreForLeaderboardDidUploadEvent_} {}
    // Creating interface conversion operator: operator OnlineServices::ILeaderboardsModel
    operator OnlineServices::ILeaderboardsModel() noexcept {
      return *reinterpret_cast<OnlineServices::ILeaderboardsModel*>(this);
    }
    // Creating conversion operator: operator System::Action_1<::Il2CppString*>*
    constexpr operator System::Action_1<::Il2CppString*>*() const noexcept {
      return scoreForLeaderboardDidUploadEvent;
    }
    // public System.Void add_scoreForLeaderboardDidUploadEvent(System.Action`1<System.String> value)
    // Offset: 0x11156D0
    void add_scoreForLeaderboardDidUploadEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void remove_scoreForLeaderboardDidUploadEvent(System.Action`1<System.String> value)
    // Offset: 0x1115774
    void remove_scoreForLeaderboardDidUploadEvent(System::Action_1<::Il2CppString*>* value);
    // public System.String GetLeaderboardId(IDifficultyBeatmap difficultyBeatmap)
    // Offset: 0x1115818
    ::Il2CppString* GetLeaderboardId(GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);
    // public System.Threading.Tasks.Task`1<OnlineServices.GetLeaderboardEntriesResult> GetLeaderboardEntriesAsync(OnlineServices.GetLeaderboardFilterData leaderboardFilterData, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x1115824
    System::Threading::Tasks::Task_1<OnlineServices::GetLeaderboardEntriesResult>* GetLeaderboardEntriesAsync(OnlineServices::GetLeaderboardFilterData leaderboardFilterData, System::Threading::CancellationToken cancellationToken);
    // public System.Threading.Tasks.Task`1<OnlineServices.SendLeaderboardEntryResult> SendLevelScoreResultAsync(OnlineServices.LevelScoreResultsData levelScoreResult, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x1115938
    System::Threading::Tasks::Task_1<OnlineServices::SendLeaderboardEntryResult>* SendLevelScoreResultAsync(OnlineServices::LevelScoreResultsData levelScoreResult, System::Threading::CancellationToken cancellationToken);
    // public System.Void .ctor()
    // Offset: 0x1115A68
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestLeaderboardsModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::TestLeaderboardsModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestLeaderboardsModel*, creationType>()));
    }
  }; // TestLeaderboardsModel
  #pragma pack(pop)
  static check_size<sizeof(TestLeaderboardsModel), 16 + sizeof(System::Action_1<::Il2CppString*>*)> __GlobalNamespace_TestLeaderboardsModelSizeCheck;
  static_assert(sizeof(TestLeaderboardsModel) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TestLeaderboardsModel*, "", "TestLeaderboardsModel");
// Writing includes for template specializations
#include "System/Action_1.hpp"
#include "GlobalNamespace/IDifficultyBeatmap.hpp"
#include "OnlineServices/GetLeaderboardFilterData.hpp"
#include "System/Threading/CancellationToken.hpp"
#include "OnlineServices/LevelScoreResultsData.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TestLeaderboardsModel::add_scoreForLeaderboardDidUploadEvent
// Il2CppName: add_scoreForLeaderboardDidUploadEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TestLeaderboardsModel::*)(System::Action_1<::Il2CppString*>*)>(&GlobalNamespace::TestLeaderboardsModel::add_scoreForLeaderboardDidUploadEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TestLeaderboardsModel*), "add_scoreForLeaderboardDidUploadEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_1<::Il2CppString*>*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TestLeaderboardsModel::remove_scoreForLeaderboardDidUploadEvent
// Il2CppName: remove_scoreForLeaderboardDidUploadEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TestLeaderboardsModel::*)(System::Action_1<::Il2CppString*>*)>(&GlobalNamespace::TestLeaderboardsModel::remove_scoreForLeaderboardDidUploadEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TestLeaderboardsModel*), "remove_scoreForLeaderboardDidUploadEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_1<::Il2CppString*>*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TestLeaderboardsModel::GetLeaderboardId
// Il2CppName: GetLeaderboardId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::TestLeaderboardsModel::*)(GlobalNamespace::IDifficultyBeatmap*)>(&GlobalNamespace::TestLeaderboardsModel::GetLeaderboardId)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TestLeaderboardsModel*), "GetLeaderboardId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::IDifficultyBeatmap*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TestLeaderboardsModel::GetLeaderboardEntriesAsync
// Il2CppName: GetLeaderboardEntriesAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<OnlineServices::GetLeaderboardEntriesResult>* (GlobalNamespace::TestLeaderboardsModel::*)(OnlineServices::GetLeaderboardFilterData, System::Threading::CancellationToken)>(&GlobalNamespace::TestLeaderboardsModel::GetLeaderboardEntriesAsync)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TestLeaderboardsModel*), "GetLeaderboardEntriesAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<OnlineServices::GetLeaderboardFilterData>(), ::il2cpp_utils::ExtractIndependentType<System::Threading::CancellationToken>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TestLeaderboardsModel::SendLevelScoreResultAsync
// Il2CppName: SendLevelScoreResultAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<OnlineServices::SendLeaderboardEntryResult>* (GlobalNamespace::TestLeaderboardsModel::*)(OnlineServices::LevelScoreResultsData, System::Threading::CancellationToken)>(&GlobalNamespace::TestLeaderboardsModel::SendLevelScoreResultAsync)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TestLeaderboardsModel*), "SendLevelScoreResultAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<OnlineServices::LevelScoreResultsData>(), ::il2cpp_utils::ExtractIndependentType<System::Threading::CancellationToken>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TestLeaderboardsModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
