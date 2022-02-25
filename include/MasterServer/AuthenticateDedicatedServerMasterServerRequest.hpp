// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BGNet.Core.Messages.BaseReliableResponse
#include "BGNet/Core/Messages/BaseReliableResponse.hpp"
// Including type: BGNet.Core.Messages.IUnconnectedAuthenticateRequest
#include "BGNet/Core/Messages/IUnconnectedAuthenticateRequest.hpp"
// Including type: MasterServer.IDedicatedServerMasterServerMessage
#include "MasterServer/IDedicatedServerMasterServerMessage.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ByteArrayNetSerializable
  class ByteArrayNetSerializable;
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
  // Forward declaring type: AuthenticateDedicatedServerMasterServerRequest
  class AuthenticateDedicatedServerMasterServerRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(MasterServer::AuthenticateDedicatedServerMasterServerRequest);
DEFINE_IL2CPP_ARG_TYPE(MasterServer::AuthenticateDedicatedServerMasterServerRequest*, "MasterServer", "AuthenticateDedicatedServerMasterServerRequest");
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.AuthenticateDedicatedServerMasterServerRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class AuthenticateDedicatedServerMasterServerRequest : public BGNet::Core::Messages::BaseReliableResponse/*, public BGNet::Core::Messages::IUnconnectedAuthenticateRequest, public MasterServer::IDedicatedServerMasterServerMessage*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.String <dedicatedServerId>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::StringW dedicatedServerId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly ByteArrayNetSerializable nonce
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::ByteArrayNetSerializable* nonce;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ByteArrayNetSerializable*) == 0x8);
    // public readonly ByteArrayNetSerializable hash
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::ByteArrayNetSerializable* hash;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ByteArrayNetSerializable*) == 0x8);
    // public System.Int64 timestamp
    // Size: 0x8
    // Offset: 0x30
    int64_t timestamp;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    public:
    // Creating interface conversion operator: operator BGNet::Core::Messages::IUnconnectedAuthenticateRequest
    operator BGNet::Core::Messages::IUnconnectedAuthenticateRequest() noexcept {
      return *reinterpret_cast<BGNet::Core::Messages::IUnconnectedAuthenticateRequest*>(this);
    }
    // Creating interface conversion operator: operator MasterServer::IDedicatedServerMasterServerMessage
    operator MasterServer::IDedicatedServerMasterServerMessage() noexcept {
      return *reinterpret_cast<MasterServer::IDedicatedServerMasterServerMessage*>(this);
    }
    // Get instance field reference: private System.String <dedicatedServerId>k__BackingField
    ::StringW& dyn_$dedicatedServerId$k__BackingField();
    // Get instance field reference: public readonly ByteArrayNetSerializable nonce
    GlobalNamespace::ByteArrayNetSerializable*& dyn_nonce();
    // Get instance field reference: public readonly ByteArrayNetSerializable hash
    GlobalNamespace::ByteArrayNetSerializable*& dyn_hash();
    // Get instance field reference: public System.Int64 timestamp
    int64_t& dyn_timestamp();
    // static public PacketPool`1<MasterServer.AuthenticateDedicatedServerMasterServerRequest> get_pool()
    // Offset: 0x2C4C26C
    static GlobalNamespace::PacketPool_1<MasterServer::AuthenticateDedicatedServerMasterServerRequest*>* get_pool();
    // public System.String get_dedicatedServerId()
    // Offset: 0x2C4C2B4
    ::StringW get_dedicatedServerId();
    // private System.Void set_dedicatedServerId(System.String value)
    // Offset: 0x2C4C2BC
    void set_dedicatedServerId(::StringW value);
    // public MasterServer.AuthenticateDedicatedServerMasterServerRequest Init(System.String dedicatedServerId, System.Byte[] nonce, System.Byte[] hash, System.Int64 timestamp)
    // Offset: 0x2C4C2C4
    MasterServer::AuthenticateDedicatedServerMasterServerRequest* Init(::StringW dedicatedServerId, ::ArrayW<uint8_t> nonce, ::ArrayW<uint8_t> hash, int64_t timestamp);
    // public System.Void .ctor()
    // Offset: 0x2C4C494
    // Implemented from: BGNet.Core.Messages.BaseReliableResponse
    // Base method: System.Void BaseReliableResponse::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AuthenticateDedicatedServerMasterServerRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::AuthenticateDedicatedServerMasterServerRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AuthenticateDedicatedServerMasterServerRequest*, creationType>()));
    }
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x2C4C328
    // Implemented from: BGNet.Core.Messages.BaseReliableResponse
    // Base method: System.Void BaseReliableResponse::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x2C4C39C
    // Implemented from: BGNet.Core.Messages.BaseReliableResponse
    // Base method: System.Void BaseReliableResponse::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public override System.Void Release()
    // Offset: 0x2C4C418
    // Implemented from: BGNet.Core.Messages.BaseReliableResponse
    // Base method: System.Void BaseReliableResponse::Release()
    void Release();
  }; // MasterServer.AuthenticateDedicatedServerMasterServerRequest
  #pragma pack(pop)
  static check_size<sizeof(AuthenticateDedicatedServerMasterServerRequest), 48 + sizeof(int64_t)> __MasterServer_AuthenticateDedicatedServerMasterServerRequestSizeCheck;
  static_assert(sizeof(AuthenticateDedicatedServerMasterServerRequest) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::AuthenticateDedicatedServerMasterServerRequest::get_pool
// Il2CppName: get_pool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PacketPool_1<MasterServer::AuthenticateDedicatedServerMasterServerRequest*>* (*)()>(&MasterServer::AuthenticateDedicatedServerMasterServerRequest::get_pool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::AuthenticateDedicatedServerMasterServerRequest*), "get_pool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::AuthenticateDedicatedServerMasterServerRequest::get_dedicatedServerId
// Il2CppName: get_dedicatedServerId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (MasterServer::AuthenticateDedicatedServerMasterServerRequest::*)()>(&MasterServer::AuthenticateDedicatedServerMasterServerRequest::get_dedicatedServerId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::AuthenticateDedicatedServerMasterServerRequest*), "get_dedicatedServerId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::AuthenticateDedicatedServerMasterServerRequest::set_dedicatedServerId
// Il2CppName: set_dedicatedServerId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::AuthenticateDedicatedServerMasterServerRequest::*)(::StringW)>(&MasterServer::AuthenticateDedicatedServerMasterServerRequest::set_dedicatedServerId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::AuthenticateDedicatedServerMasterServerRequest*), "set_dedicatedServerId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: MasterServer::AuthenticateDedicatedServerMasterServerRequest::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<MasterServer::AuthenticateDedicatedServerMasterServerRequest* (MasterServer::AuthenticateDedicatedServerMasterServerRequest::*)(::StringW, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int64_t)>(&MasterServer::AuthenticateDedicatedServerMasterServerRequest::Init)> {
  static const MethodInfo* get() {
    static auto* dedicatedServerId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* nonce = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* hash = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* timestamp = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::AuthenticateDedicatedServerMasterServerRequest*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dedicatedServerId, nonce, hash, timestamp});
  }
};
// Writing MetadataGetter for method: MasterServer::AuthenticateDedicatedServerMasterServerRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MasterServer::AuthenticateDedicatedServerMasterServerRequest::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::AuthenticateDedicatedServerMasterServerRequest::*)(LiteNetLib::Utils::NetDataWriter*)>(&MasterServer::AuthenticateDedicatedServerMasterServerRequest::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::AuthenticateDedicatedServerMasterServerRequest*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: MasterServer::AuthenticateDedicatedServerMasterServerRequest::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::AuthenticateDedicatedServerMasterServerRequest::*)(LiteNetLib::Utils::NetDataReader*)>(&MasterServer::AuthenticateDedicatedServerMasterServerRequest::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::AuthenticateDedicatedServerMasterServerRequest*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: MasterServer::AuthenticateDedicatedServerMasterServerRequest::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::AuthenticateDedicatedServerMasterServerRequest::*)()>(&MasterServer::AuthenticateDedicatedServerMasterServerRequest::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::AuthenticateDedicatedServerMasterServerRequest*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
