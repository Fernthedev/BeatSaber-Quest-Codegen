// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  // Autogenerated type: OnlineServices.API.HTTPAdminLeaderboardsHelper/LeaderboardsIdsDto
  class HTTPAdminLeaderboardsHelper::LeaderboardsIdsDto : public ::Il2CppObject {
    public:
    // public System.String[] leaderboardsIds
    // Size: 0x8
    // Offset: 0x10
    ::Array<::Il2CppString*>* leaderboardsIds;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // Creating value type constructor for type: LeaderboardsIdsDto
    LeaderboardsIdsDto(::Array<::Il2CppString*>* leaderboardsIds_ = {}) noexcept : leaderboardsIds{leaderboardsIds_} {}
    // Creating conversion operator: operator ::Array<::Il2CppString*>*
    constexpr operator ::Array<::Il2CppString*>*() const noexcept {
      return leaderboardsIds;
    }
    // public System.Void .ctor()
    // Offset: 0x11F00D0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HTTPAdminLeaderboardsHelper::LeaderboardsIdsDto* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("OnlineServices::API::HTTPAdminLeaderboardsHelper::LeaderboardsIdsDto::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HTTPAdminLeaderboardsHelper::LeaderboardsIdsDto*, creationType>()));
    }
  }; // OnlineServices.API.HTTPAdminLeaderboardsHelper/LeaderboardsIdsDto
  #pragma pack(pop)
  static check_size<sizeof(HTTPAdminLeaderboardsHelper::LeaderboardsIdsDto), 16 + sizeof(::Array<::Il2CppString*>*)> __OnlineServices_API_HTTPAdminLeaderboardsHelper_LeaderboardsIdsDtoSizeCheck;
  static_assert(sizeof(HTTPAdminLeaderboardsHelper::LeaderboardsIdsDto) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(OnlineServices::API::HTTPAdminLeaderboardsHelper::LeaderboardsIdsDto*, "OnlineServices.API", "HTTPAdminLeaderboardsHelper/LeaderboardsIdsDto");
// Writing includes for template specializations
// Writing MetadataGetter for method: OnlineServices::API::HTTPAdminLeaderboardsHelper::LeaderboardsIdsDto::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
