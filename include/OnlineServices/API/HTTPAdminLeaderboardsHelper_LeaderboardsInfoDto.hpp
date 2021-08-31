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
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: OnlineServices.API.HTTPAdminLeaderboardsHelper/OnlineServices.API.LeaderboardsInfoDto
  // [TokenAttribute] Offset: FFFFFFFF
  class HTTPAdminLeaderboardsHelper::LeaderboardsInfoDto : public ::Il2CppObject {
    public:
    // public System.Boolean exist
    // Size: 0x1
    // Offset: 0x10
    bool exist;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: LeaderboardsInfoDto
    LeaderboardsInfoDto(bool exist_ = {}) noexcept : exist{exist_} {}
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return exist;
    }
    // Get instance field reference: public System.Boolean exist
    bool& dyn_exist();
    // public System.Void .ctor()
    // Offset: 0x102609C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HTTPAdminLeaderboardsHelper::LeaderboardsInfoDto* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("OnlineServices::API::HTTPAdminLeaderboardsHelper::LeaderboardsInfoDto::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HTTPAdminLeaderboardsHelper::LeaderboardsInfoDto*, creationType>()));
    }
  }; // OnlineServices.API.HTTPAdminLeaderboardsHelper/OnlineServices.API.LeaderboardsInfoDto
  #pragma pack(pop)
  static check_size<sizeof(HTTPAdminLeaderboardsHelper::LeaderboardsInfoDto), 16 + sizeof(bool)> __OnlineServices_API_HTTPAdminLeaderboardsHelper_LeaderboardsInfoDtoSizeCheck;
  static_assert(sizeof(HTTPAdminLeaderboardsHelper::LeaderboardsInfoDto) == 0x11);
}
DEFINE_IL2CPP_ARG_TYPE(OnlineServices::API::HTTPAdminLeaderboardsHelper::LeaderboardsInfoDto*, "OnlineServices.API", "HTTPAdminLeaderboardsHelper/LeaderboardsInfoDto");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OnlineServices::API::HTTPAdminLeaderboardsHelper::LeaderboardsInfoDto::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
