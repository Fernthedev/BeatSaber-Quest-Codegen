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
// Forward declaring namespace: BeatSaberAPI::DataTransferObjects
namespace BeatSaberAPI::DataTransferObjects {
  // Forward declaring type: UserInfo
  class UserInfo;
  // Forward declaring type: AccessToken
  class AccessToken;
}
// Completed forward declares
// Type namespace: BeatSaberAPI.DataTransferObjects
namespace BeatSaberAPI::DataTransferObjects {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: BeatSaberAPI.DataTransferObjects.UserAuthenticationResult
  // [TokenAttribute] Offset: FFFFFFFF
  class UserAuthenticationResult : public ::Il2CppObject {
    public:
    // public BeatSaberAPI.DataTransferObjects.UserInfo userInfo
    // Size: 0x8
    // Offset: 0x10
    BeatSaberAPI::DataTransferObjects::UserInfo* userInfo;
    // Field size check
    static_assert(sizeof(BeatSaberAPI::DataTransferObjects::UserInfo*) == 0x8);
    // public BeatSaberAPI.DataTransferObjects.AccessToken accessToken
    // Size: 0x8
    // Offset: 0x18
    BeatSaberAPI::DataTransferObjects::AccessToken* accessToken;
    // Field size check
    static_assert(sizeof(BeatSaberAPI::DataTransferObjects::AccessToken*) == 0x8);
    // Creating value type constructor for type: UserAuthenticationResult
    UserAuthenticationResult(BeatSaberAPI::DataTransferObjects::UserInfo* userInfo_ = {}, BeatSaberAPI::DataTransferObjects::AccessToken* accessToken_ = {}) noexcept : userInfo{userInfo_}, accessToken{accessToken_} {}
    // Get instance field reference: public BeatSaberAPI.DataTransferObjects.UserInfo userInfo
    BeatSaberAPI::DataTransferObjects::UserInfo*& dyn_userInfo();
    // Get instance field reference: public BeatSaberAPI.DataTransferObjects.AccessToken accessToken
    BeatSaberAPI::DataTransferObjects::AccessToken*& dyn_accessToken();
    // public System.Void .ctor()
    // Offset: 0x11DEE84
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UserAuthenticationResult* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("BeatSaberAPI::DataTransferObjects::UserAuthenticationResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UserAuthenticationResult*, creationType>()));
    }
  }; // BeatSaberAPI.DataTransferObjects.UserAuthenticationResult
  #pragma pack(pop)
  static check_size<sizeof(UserAuthenticationResult), 24 + sizeof(BeatSaberAPI::DataTransferObjects::AccessToken*)> __BeatSaberAPI_DataTransferObjects_UserAuthenticationResultSizeCheck;
  static_assert(sizeof(UserAuthenticationResult) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(BeatSaberAPI::DataTransferObjects::UserAuthenticationResult*, "BeatSaberAPI.DataTransferObjects", "UserAuthenticationResult");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BeatSaberAPI::DataTransferObjects::UserAuthenticationResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
