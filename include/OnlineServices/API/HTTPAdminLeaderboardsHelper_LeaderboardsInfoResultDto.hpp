// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: OnlineServices.API.HTTPAdminLeaderboardsHelper
#include "OnlineServices/API/HTTPAdminLeaderboardsHelper.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: OnlineServices.API
namespace OnlineServices::API {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: OnlineServices.API.HTTPAdminLeaderboardsHelper/OnlineServices.API.LeaderboardsInfoResultDto
  // [TokenAttribute] Offset: FFFFFFFF
  class HTTPAdminLeaderboardsHelper::LeaderboardsInfoResultDto : public ::Il2CppObject {
    public:
    // public OnlineServices.API.HTTPAdminLeaderboardsHelper/OnlineServices.API.LeaderboardsInfoDto[] leaderboardsInfos
    // Size: 0x8
    // Offset: 0x10
    ::Array<OnlineServices::API::HTTPAdminLeaderboardsHelper::LeaderboardsInfoDto*>* leaderboardsInfos;
    // Field size check
    static_assert(sizeof(::Array<OnlineServices::API::HTTPAdminLeaderboardsHelper::LeaderboardsInfoDto*>*) == 0x8);
    // Creating value type constructor for type: LeaderboardsInfoResultDto
    LeaderboardsInfoResultDto(::Array<OnlineServices::API::HTTPAdminLeaderboardsHelper::LeaderboardsInfoDto*>* leaderboardsInfos_ = {}) noexcept : leaderboardsInfos{leaderboardsInfos_} {}
    // Creating conversion operator: operator ::Array<OnlineServices::API::HTTPAdminLeaderboardsHelper::LeaderboardsInfoDto*>*
    constexpr operator ::Array<OnlineServices::API::HTTPAdminLeaderboardsHelper::LeaderboardsInfoDto*>*() const noexcept {
      return leaderboardsInfos;
    }
    // Get instance field reference: public OnlineServices.API.HTTPAdminLeaderboardsHelper/OnlineServices.API.LeaderboardsInfoDto[] leaderboardsInfos
    ::Array<OnlineServices::API::HTTPAdminLeaderboardsHelper::LeaderboardsInfoDto*>*& dyn_leaderboardsInfos();
    // public System.Void .ctor()
    // Offset: 0x102D8E0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HTTPAdminLeaderboardsHelper::LeaderboardsInfoResultDto* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("OnlineServices::API::HTTPAdminLeaderboardsHelper::LeaderboardsInfoResultDto::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HTTPAdminLeaderboardsHelper::LeaderboardsInfoResultDto*, creationType>()));
    }
  }; // OnlineServices.API.HTTPAdminLeaderboardsHelper/OnlineServices.API.LeaderboardsInfoResultDto
  #pragma pack(pop)
  static check_size<sizeof(HTTPAdminLeaderboardsHelper::LeaderboardsInfoResultDto), 16 + sizeof(::Array<OnlineServices::API::HTTPAdminLeaderboardsHelper::LeaderboardsInfoDto*>*)> __OnlineServices_API_HTTPAdminLeaderboardsHelper_LeaderboardsInfoResultDtoSizeCheck;
  static_assert(sizeof(HTTPAdminLeaderboardsHelper::LeaderboardsInfoResultDto) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(OnlineServices::API::HTTPAdminLeaderboardsHelper::LeaderboardsInfoResultDto*, "OnlineServices.API", "HTTPAdminLeaderboardsHelper/LeaderboardsInfoResultDto");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OnlineServices::API::HTTPAdminLeaderboardsHelper::LeaderboardsInfoResultDto::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
