// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OnlineServices.API.ApiResponse`1
#include "OnlineServices/API/ApiResponse_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: BeatSaberAPI::DataTransferObjects
namespace BeatSaberAPI::DataTransferObjects {
  // Forward declaring type: LeaderboardEntries
  class LeaderboardEntries;
  // Forward declaring type: LeaderboardQuery
  class LeaderboardQuery;
  // Forward declaring type: LevelScoreResult
  class LevelScoreResult;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: OnlineServices.API
namespace OnlineServices::API {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: OnlineServices.API.IApiLeaderboardsModel
  class IApiLeaderboardsModel {
    public:
    // Creating value type constructor for type: IApiLeaderboardsModel
    IApiLeaderboardsModel() noexcept {}
    // public System.Threading.Tasks.Task`1<OnlineServices.API.ApiResponse`1<BeatSaberAPI.DataTransferObjects.LeaderboardEntries>> GetLeaderboardEntriesAsync(BeatSaberAPI.DataTransferObjects.LeaderboardQuery leaderboardQueryDTO, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xFFFFFFFF
    System::Threading::Tasks::Task_1<OnlineServices::API::ApiResponse_1<BeatSaberAPI::DataTransferObjects::LeaderboardEntries*>>* GetLeaderboardEntriesAsync(BeatSaberAPI::DataTransferObjects::LeaderboardQuery* leaderboardQueryDTO, System::Threading::CancellationToken cancellationToken);
    // public System.Threading.Tasks.Task`1<OnlineServices.API.Response> SendLevelScoreResultAsync(BeatSaberAPI.DataTransferObjects.LevelScoreResult levelScoreResultDto, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xFFFFFFFF
    System::Threading::Tasks::Task_1<OnlineServices::API::Response>* SendLevelScoreResultAsync(BeatSaberAPI::DataTransferObjects::LevelScoreResult* levelScoreResultDto, System::Threading::CancellationToken cancellationToken);
    // public System.Void LogoutAsync()
    // Offset: 0xFFFFFFFF
    void LogoutAsync();
  }; // OnlineServices.API.IApiLeaderboardsModel
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OnlineServices::API::IApiLeaderboardsModel*, "OnlineServices.API", "IApiLeaderboardsModel");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OnlineServices::API::IApiLeaderboardsModel::GetLeaderboardEntriesAsync
// Il2CppName: GetLeaderboardEntriesAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<OnlineServices::API::ApiResponse_1<BeatSaberAPI::DataTransferObjects::LeaderboardEntries*>>* (OnlineServices::API::IApiLeaderboardsModel::*)(BeatSaberAPI::DataTransferObjects::LeaderboardQuery*, System::Threading::CancellationToken)>(&OnlineServices::API::IApiLeaderboardsModel::GetLeaderboardEntriesAsync)> {
  const MethodInfo* get() {
    static auto* leaderboardQueryDTO = &::il2cpp_utils::GetClassFromName("BeatSaberAPI.DataTransferObjects", "LeaderboardQuery")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OnlineServices::API::IApiLeaderboardsModel*), "GetLeaderboardEntriesAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{leaderboardQueryDTO, cancellationToken});
  }
};
// Writing MetadataGetter for method: OnlineServices::API::IApiLeaderboardsModel::SendLevelScoreResultAsync
// Il2CppName: SendLevelScoreResultAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<OnlineServices::API::Response>* (OnlineServices::API::IApiLeaderboardsModel::*)(BeatSaberAPI::DataTransferObjects::LevelScoreResult*, System::Threading::CancellationToken)>(&OnlineServices::API::IApiLeaderboardsModel::SendLevelScoreResultAsync)> {
  const MethodInfo* get() {
    static auto* levelScoreResultDto = &::il2cpp_utils::GetClassFromName("BeatSaberAPI.DataTransferObjects", "LevelScoreResult")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OnlineServices::API::IApiLeaderboardsModel*), "SendLevelScoreResultAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelScoreResultDto, cancellationToken});
  }
};
// Writing MetadataGetter for method: OnlineServices::API::IApiLeaderboardsModel::LogoutAsync
// Il2CppName: LogoutAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OnlineServices::API::IApiLeaderboardsModel::*)()>(&OnlineServices::API::IApiLeaderboardsModel::LogoutAsync)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OnlineServices::API::IApiLeaderboardsModel*), "LogoutAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
