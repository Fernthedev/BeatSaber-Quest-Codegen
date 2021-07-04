// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BaseMasterServerReliableRequest
#include "GlobalNamespace/BaseMasterServerReliableRequest.hpp"
// Including type: MasterServer.IUserClientToServerMessage
#include "MasterServer/IUserClientToServerMessage.hpp"
// Including type: GameplayServerFilter
#include "GlobalNamespace/GameplayServerFilter.hpp"
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
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.GetPublicUserServersRequest
  class GetPublicUserServersRequest : public GlobalNamespace::BaseMasterServerReliableRequest/*, public MasterServer::IUserClientToServerMessage*/ {
    public:
    // Writing base type padding for base size: 0x14 to desired offset: 0x18
    char ___base_padding[0x4] = {};
    // [CompilerGeneratedAttribute] Offset: 0xDF1270
    // private System.String <userId>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* userId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDF1280
    // private System.String <userName>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* userName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Int32 offset
    // Size: 0x4
    // Offset: 0x28
    int offset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 count
    // Size: 0x4
    // Offset: 0x2C
    int count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public GameplayServerFilter filter
    // Size: 0x28
    // Offset: 0x30
    GlobalNamespace::GameplayServerFilter filter;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayServerFilter) == 0x28);
    // Creating value type constructor for type: GetPublicUserServersRequest
    GetPublicUserServersRequest(::Il2CppString* userId_ = {}, ::Il2CppString* userName_ = {}, int offset_ = {}, int count_ = {}, GlobalNamespace::GameplayServerFilter filter_ = {}) noexcept : userId{userId_}, userName{userName_}, offset{offset_}, count{count_}, filter{filter_} {}
    // Creating interface conversion operator: operator MasterServer::IUserClientToServerMessage
    operator MasterServer::IUserClientToServerMessage() noexcept {
      return *reinterpret_cast<MasterServer::IUserClientToServerMessage*>(this);
    }
    // Deleting conversion operator: operator uint
    constexpr operator uint() const noexcept = delete;
    // static public PacketPool`1<MasterServer.GetPublicUserServersRequest> get_pool()
    // Offset: 0x12DB734
    static GlobalNamespace::PacketPool_1<MasterServer::GetPublicUserServersRequest*>* get_pool();
    // public System.String get_userId()
    // Offset: 0x12DB77C
    ::Il2CppString* get_userId();
    // private System.Void set_userId(System.String value)
    // Offset: 0x12DB784
    void set_userId(::Il2CppString* value);
    // public System.String get_userName()
    // Offset: 0x12DB78C
    ::Il2CppString* get_userName();
    // private System.Void set_userName(System.String value)
    // Offset: 0x12DB794
    void set_userName(::Il2CppString* value);
    // public MasterServer.GetPublicUserServersRequest Init(System.String userId, System.String userName, System.Int32 offset, System.Int32 count, GameplayServerFilter filter)
    // Offset: 0x12DB79C
    MasterServer::GetPublicUserServersRequest* Init(::Il2CppString* userId, ::Il2CppString* userName, int offset, int count, GlobalNamespace::GameplayServerFilter filter);
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x12DB7B8
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x12DB834
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public override System.Void Release()
    // Offset: 0x12DB8D0
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Release()
    void Release();
    // public System.Void .ctor()
    // Offset: 0x12DB938
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GetPublicUserServersRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::GetPublicUserServersRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GetPublicUserServersRequest*, creationType>()));
    }
  }; // MasterServer.GetPublicUserServersRequest
  #pragma pack(pop)
  static check_size<sizeof(GetPublicUserServersRequest), 48 + sizeof(GlobalNamespace::GameplayServerFilter)> __MasterServer_GetPublicUserServersRequestSizeCheck;
  static_assert(sizeof(GetPublicUserServersRequest) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(MasterServer::GetPublicUserServersRequest*, "MasterServer", "GetPublicUserServersRequest");
// Writing includes for template specializations
#include "LiteNetLib/Utils/NetDataWriter.hpp"
#include "LiteNetLib/Utils/NetDataReader.hpp"
// Writing MetadataGetter for method: MasterServer::GetPublicUserServersRequest::get_pool
// Il2CppName: get_pool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PacketPool_1<MasterServer::GetPublicUserServersRequest*>* (*)()>(&MasterServer::GetPublicUserServersRequest::get_pool)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::GetPublicUserServersRequest*), "get_pool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::GetPublicUserServersRequest::get_userId
// Il2CppName: get_userId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (MasterServer::GetPublicUserServersRequest::*)()>(&MasterServer::GetPublicUserServersRequest::get_userId)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::GetPublicUserServersRequest*), "get_userId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::GetPublicUserServersRequest::set_userId
// Il2CppName: set_userId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::GetPublicUserServersRequest::*)(::Il2CppString*)>(&MasterServer::GetPublicUserServersRequest::set_userId)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::GetPublicUserServersRequest*), "set_userId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: MasterServer::GetPublicUserServersRequest::get_userName
// Il2CppName: get_userName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (MasterServer::GetPublicUserServersRequest::*)()>(&MasterServer::GetPublicUserServersRequest::get_userName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::GetPublicUserServersRequest*), "get_userName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::GetPublicUserServersRequest::set_userName
// Il2CppName: set_userName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::GetPublicUserServersRequest::*)(::Il2CppString*)>(&MasterServer::GetPublicUserServersRequest::set_userName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::GetPublicUserServersRequest*), "set_userName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: MasterServer::GetPublicUserServersRequest::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<MasterServer::GetPublicUserServersRequest* (MasterServer::GetPublicUserServersRequest::*)(::Il2CppString*, ::Il2CppString*, int, int, GlobalNamespace::GameplayServerFilter)>(&MasterServer::GetPublicUserServersRequest::Init)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::GetPublicUserServersRequest*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::GameplayServerFilter>()});
  }
};
// Writing MetadataGetter for method: MasterServer::GetPublicUserServersRequest::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::GetPublicUserServersRequest::*)(LiteNetLib::Utils::NetDataWriter*)>(&MasterServer::GetPublicUserServersRequest::Serialize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::GetPublicUserServersRequest*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<LiteNetLib::Utils::NetDataWriter*>()});
  }
};
// Writing MetadataGetter for method: MasterServer::GetPublicUserServersRequest::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::GetPublicUserServersRequest::*)(LiteNetLib::Utils::NetDataReader*)>(&MasterServer::GetPublicUserServersRequest::Deserialize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::GetPublicUserServersRequest*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<LiteNetLib::Utils::NetDataReader*>()});
  }
};
// Writing MetadataGetter for method: MasterServer::GetPublicUserServersRequest::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::GetPublicUserServersRequest::*)()>(&MasterServer::GetPublicUserServersRequest::Release)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::GetPublicUserServersRequest*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::GetPublicUserServersRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
