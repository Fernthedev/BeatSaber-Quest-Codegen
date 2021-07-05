// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: BeatSaberAPI.DataTransferObjects
namespace BeatSaberAPI::DataTransferObjects {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: BeatSaberAPI.DataTransferObjects.AccessToken
  class AccessToken : public ::Il2CppObject {
    public:
    // public System.String token
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* token;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String expiration
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* expiration;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: AccessToken
    AccessToken(::Il2CppString* token_ = {}, ::Il2CppString* expiration_ = {}) noexcept : token{token_}, expiration{expiration_} {}
    // public System.Void .ctor()
    // Offset: 0x11BC6D4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AccessToken* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("BeatSaberAPI::DataTransferObjects::AccessToken::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AccessToken*, creationType>()));
    }
  }; // BeatSaberAPI.DataTransferObjects.AccessToken
  #pragma pack(pop)
  static check_size<sizeof(AccessToken), 24 + sizeof(::Il2CppString*)> __BeatSaberAPI_DataTransferObjects_AccessTokenSizeCheck;
  static_assert(sizeof(AccessToken) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(BeatSaberAPI::DataTransferObjects::AccessToken*, "BeatSaberAPI.DataTransferObjects", "AccessToken");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BeatSaberAPI::DataTransferObjects::AccessToken::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
