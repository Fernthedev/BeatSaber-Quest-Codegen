// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: BaseMasterServerReliableResponse
#include "GlobalNamespace/BaseMasterServerReliableResponse.hpp"
// Including type: MasterServer.IMasterServerAuthenticateRequest
#include "MasterServer/IMasterServerAuthenticateRequest.hpp"
// Including type: MasterServer.IUserMessage
#include "MasterServer/IUserMessage.hpp"
// Including type: AuthenticationToken
#include "GlobalNamespace/AuthenticationToken.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PacketPool`1<T>
  template<typename T>
  class PacketPool_1;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Completed forward declares
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.AuthenticateUserRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class AuthenticateUserRequest : public GlobalNamespace::BaseMasterServerReliableResponse/*, public MasterServer::IMasterServerAuthenticateRequest, public MasterServer::IUserMessage*/ {
    public:
    // public AuthenticationToken authenticationToken
    // Size: 0x20
    // Offset: 0x18
    GlobalNamespace::AuthenticationToken authenticationToken;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AuthenticationToken) == 0x20);
    // Creating value type constructor for type: AuthenticateUserRequest
    AuthenticateUserRequest(GlobalNamespace::AuthenticationToken authenticationToken_ = {}) noexcept : authenticationToken{authenticationToken_} {}
    // Creating interface conversion operator: operator MasterServer::IMasterServerAuthenticateRequest
    operator MasterServer::IMasterServerAuthenticateRequest() noexcept {
      return *reinterpret_cast<MasterServer::IMasterServerAuthenticateRequest*>(this);
    }
    // Creating interface conversion operator: operator MasterServer::IUserMessage
    operator MasterServer::IUserMessage() noexcept {
      return *reinterpret_cast<MasterServer::IUserMessage*>(this);
    }
    // Creating conversion operator: operator GlobalNamespace::AuthenticationToken
    constexpr operator GlobalNamespace::AuthenticationToken() const noexcept {
      return authenticationToken;
    }
    // Get instance field: public AuthenticationToken authenticationToken
    GlobalNamespace::AuthenticationToken _get_authenticationToken();
    // Set instance field: public AuthenticationToken authenticationToken
    void _set_authenticationToken(GlobalNamespace::AuthenticationToken value);
    // static public PacketPool`1<MasterServer.AuthenticateUserRequest> get_pool()
    // Offset: 0x132E910
    static GlobalNamespace::PacketPool_1<MasterServer::AuthenticateUserRequest*>* get_pool();
    // public MasterServer.AuthenticateUserRequest Init(AuthenticationToken authenticationToken)
    // Offset: 0x132E958
    MasterServer::AuthenticateUserRequest* Init(GlobalNamespace::AuthenticationToken authenticationToken);
    // public System.Void .ctor()
    // Offset: 0x132EA34
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AuthenticateUserRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::AuthenticateUserRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AuthenticateUserRequest*, creationType>()));
    }
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x132E968
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x132E994
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public override System.Void Release()
    // Offset: 0x132E9D8
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::Release()
    void Release();
  }; // MasterServer.AuthenticateUserRequest
  #pragma pack(pop)
  static check_size<sizeof(AuthenticateUserRequest), 24 + sizeof(GlobalNamespace::AuthenticationToken)> __MasterServer_AuthenticateUserRequestSizeCheck;
  static_assert(sizeof(AuthenticateUserRequest) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(MasterServer::AuthenticateUserRequest*, "MasterServer", "AuthenticateUserRequest");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::AuthenticateUserRequest::get_pool
// Il2CppName: get_pool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PacketPool_1<MasterServer::AuthenticateUserRequest*>* (*)()>(&MasterServer::AuthenticateUserRequest::get_pool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::AuthenticateUserRequest*), "get_pool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::AuthenticateUserRequest::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<MasterServer::AuthenticateUserRequest* (MasterServer::AuthenticateUserRequest::*)(GlobalNamespace::AuthenticationToken)>(&MasterServer::AuthenticateUserRequest::Init)> {
  static const MethodInfo* get() {
    static auto* authenticationToken = &::il2cpp_utils::GetClassFromName("", "AuthenticationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::AuthenticateUserRequest*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{authenticationToken});
  }
};
// Writing MetadataGetter for method: MasterServer::AuthenticateUserRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MasterServer::AuthenticateUserRequest::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::AuthenticateUserRequest::*)(LiteNetLib::Utils::NetDataWriter*)>(&MasterServer::AuthenticateUserRequest::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::AuthenticateUserRequest*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: MasterServer::AuthenticateUserRequest::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::AuthenticateUserRequest::*)(LiteNetLib::Utils::NetDataReader*)>(&MasterServer::AuthenticateUserRequest::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::AuthenticateUserRequest*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: MasterServer::AuthenticateUserRequest::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::AuthenticateUserRequest::*)()>(&MasterServer::AuthenticateUserRequest::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::AuthenticateUserRequest*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
