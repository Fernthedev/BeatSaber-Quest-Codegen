// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BaseMasterServerReliableRequest
#include "GlobalNamespace/BaseMasterServerReliableRequest.hpp"
// Including type: MasterServer.IUserServerToClientMessage
#include "MasterServer/IUserServerToClientMessage.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
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
  // Size: 0x42
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.PrepareForConnectionRequest
  class PrepareForConnectionRequest : public GlobalNamespace::BaseMasterServerReliableRequest/*, public MasterServer::IUserServerToClientMessage*/ {
    public:
    // Writing base type padding for base size: 0x14 to desired offset: 0x18
    char ___base_padding[0x4] = {};
    // public System.String userId
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* userId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String userName
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* userName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Net.IPEndPoint remoteEndPoint
    // Size: 0x8
    // Offset: 0x28
    System::Net::IPEndPoint* remoteEndPoint;
    // Field size check
    static_assert(sizeof(System::Net::IPEndPoint*) == 0x8);
    // public readonly ByteArrayNetSerializable random
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::ByteArrayNetSerializable* random;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ByteArrayNetSerializable*) == 0x8);
    // public readonly ByteArrayNetSerializable publicKey
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::ByteArrayNetSerializable* publicKey;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ByteArrayNetSerializable*) == 0x8);
    // public System.Boolean isConnectionOwner
    // Size: 0x1
    // Offset: 0x40
    bool isConnectionOwner;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean isDedicatedServer
    // Size: 0x1
    // Offset: 0x41
    bool isDedicatedServer;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: PrepareForConnectionRequest
    PrepareForConnectionRequest(::Il2CppString* userId_ = {}, ::Il2CppString* userName_ = {}, System::Net::IPEndPoint* remoteEndPoint_ = {}, GlobalNamespace::ByteArrayNetSerializable* random_ = {}, GlobalNamespace::ByteArrayNetSerializable* publicKey_ = {}, bool isConnectionOwner_ = {}, bool isDedicatedServer_ = {}) noexcept : userId{userId_}, userName{userName_}, remoteEndPoint{remoteEndPoint_}, random{random_}, publicKey{publicKey_}, isConnectionOwner{isConnectionOwner_}, isDedicatedServer{isDedicatedServer_} {}
    // Creating interface conversion operator: operator MasterServer::IUserServerToClientMessage
    operator MasterServer::IUserServerToClientMessage() noexcept {
      return *reinterpret_cast<MasterServer::IUserServerToClientMessage*>(this);
    }
    // Deleting conversion operator: operator uint
    constexpr operator uint() const noexcept = delete;
    // static public PacketPool`1<MasterServer.PrepareForConnectionRequest> get_pool()
    // Offset: 0x12DDC3C
    static GlobalNamespace::PacketPool_1<MasterServer::PrepareForConnectionRequest*>* get_pool();
    // public MasterServer.PrepareForConnectionRequest Init(System.String userId, System.String userName, System.Net.IPEndPoint remoteEndPoint, System.Byte[] random, System.Byte[] publicKey, System.Boolean isConnectionOwner, System.Boolean isDedicatedServer)
    // Offset: 0x12E3B18
    MasterServer::PrepareForConnectionRequest* Init(::Il2CppString* userId, ::Il2CppString* userName, System::Net::IPEndPoint* remoteEndPoint, ::Array<uint8_t>* random, ::Array<uint8_t>* publicKey, bool isConnectionOwner, bool isDedicatedServer);
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x12E3B90
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x12E3C38
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public override System.Void Release()
    // Offset: 0x12E3CE0
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Release()
    void Release();
    // public System.Void .ctor()
    // Offset: 0x12E3D5C
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PrepareForConnectionRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::PrepareForConnectionRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PrepareForConnectionRequest*, creationType>()));
    }
  }; // MasterServer.PrepareForConnectionRequest
  #pragma pack(pop)
  static check_size<sizeof(PrepareForConnectionRequest), 65 + sizeof(bool)> __MasterServer_PrepareForConnectionRequestSizeCheck;
  static_assert(sizeof(PrepareForConnectionRequest) == 0x42);
}
DEFINE_IL2CPP_ARG_TYPE(MasterServer::PrepareForConnectionRequest*, "MasterServer", "PrepareForConnectionRequest");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::PrepareForConnectionRequest::get_pool
// Il2CppName: get_pool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PacketPool_1<MasterServer::PrepareForConnectionRequest*>* (*)()>(&MasterServer::PrepareForConnectionRequest::get_pool)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::PrepareForConnectionRequest*), "get_pool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::PrepareForConnectionRequest::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<MasterServer::PrepareForConnectionRequest* (MasterServer::PrepareForConnectionRequest::*)(::Il2CppString*, ::Il2CppString*, System::Net::IPEndPoint*, ::Array<uint8_t>*, ::Array<uint8_t>*, bool, bool)>(&MasterServer::PrepareForConnectionRequest::Init)> {
  const MethodInfo* get() {
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* userName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* remoteEndPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* random = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* publicKey = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* isConnectionOwner = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* isDedicatedServer = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::PrepareForConnectionRequest*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userId, userName, remoteEndPoint, random, publicKey, isConnectionOwner, isDedicatedServer});
  }
};
// Writing MetadataGetter for method: MasterServer::PrepareForConnectionRequest::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::PrepareForConnectionRequest::*)(LiteNetLib::Utils::NetDataWriter*)>(&MasterServer::PrepareForConnectionRequest::Serialize)> {
  const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::PrepareForConnectionRequest*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: MasterServer::PrepareForConnectionRequest::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::PrepareForConnectionRequest::*)(LiteNetLib::Utils::NetDataReader*)>(&MasterServer::PrepareForConnectionRequest::Deserialize)> {
  const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::PrepareForConnectionRequest*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: MasterServer::PrepareForConnectionRequest::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::PrepareForConnectionRequest::*)()>(&MasterServer::PrepareForConnectionRequest::Release)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::PrepareForConnectionRequest*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::PrepareForConnectionRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
