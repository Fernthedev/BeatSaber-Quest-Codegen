// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: BaseMasterServerReliableRequest
#include "GlobalNamespace/BaseMasterServerReliableRequest.hpp"
// Including type: MasterServer.IUserClientToServerMessage
#include "MasterServer/IUserClientToServerMessage.hpp"
// Including type: BeatmapLevelSelectionMask
#include "GlobalNamespace/BeatmapLevelSelectionMask.hpp"
// Including type: GameplayServerConfiguration
#include "GlobalNamespace/GameplayServerConfiguration.hpp"
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
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.GetPublicServersRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class GetPublicServersRequest : public GlobalNamespace::BaseMasterServerReliableRequest/*, public MasterServer::IUserClientToServerMessage*/ {
    public:
    // Writing base type padding for base size: 0x14 to desired offset: 0x18
    char ___base_padding[0x4] = {};
    // private System.String <userId>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* userId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
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
    // public BeatmapLevelSelectionMask selectionMask
    // Size: 0x18
    // Offset: 0x30
    GlobalNamespace::BeatmapLevelSelectionMask selectionMask;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapLevelSelectionMask) == 0x18);
    // public GameplayServerConfiguration configuration
    // Size: 0x18
    // Offset: 0x48
    GlobalNamespace::GameplayServerConfiguration configuration;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayServerConfiguration) == 0x18);
    // Creating value type constructor for type: GetPublicServersRequest
    GetPublicServersRequest(::Il2CppString* userId_ = {}, ::Il2CppString* userName_ = {}, int offset_ = {}, int count_ = {}, GlobalNamespace::BeatmapLevelSelectionMask selectionMask_ = {}, GlobalNamespace::GameplayServerConfiguration configuration_ = {}) noexcept : userId{userId_}, userName{userName_}, offset{offset_}, count{count_}, selectionMask{selectionMask_}, configuration{configuration_} {}
    // Creating interface conversion operator: operator MasterServer::IUserClientToServerMessage
    operator MasterServer::IUserClientToServerMessage() noexcept {
      return *reinterpret_cast<MasterServer::IUserClientToServerMessage*>(this);
    }
    // Deleting conversion operator: operator uint
    constexpr operator uint() const noexcept = delete;
    // Get instance field: private System.String <userId>k__BackingField
    ::Il2CppString* _get_$userId$k__BackingField();
    // Set instance field: private System.String <userId>k__BackingField
    void _set_$userId$k__BackingField(::Il2CppString* value);
    // Get instance field: private System.String <userName>k__BackingField
    ::Il2CppString* _get_$userName$k__BackingField();
    // Set instance field: private System.String <userName>k__BackingField
    void _set_$userName$k__BackingField(::Il2CppString* value);
    // Get instance field: public System.Int32 offset
    int _get_offset();
    // Set instance field: public System.Int32 offset
    void _set_offset(int value);
    // Get instance field: public System.Int32 count
    int _get_count();
    // Set instance field: public System.Int32 count
    void _set_count(int value);
    // Get instance field: public BeatmapLevelSelectionMask selectionMask
    GlobalNamespace::BeatmapLevelSelectionMask _get_selectionMask();
    // Set instance field: public BeatmapLevelSelectionMask selectionMask
    void _set_selectionMask(GlobalNamespace::BeatmapLevelSelectionMask value);
    // Get instance field: public GameplayServerConfiguration configuration
    GlobalNamespace::GameplayServerConfiguration _get_configuration();
    // Set instance field: public GameplayServerConfiguration configuration
    void _set_configuration(GlobalNamespace::GameplayServerConfiguration value);
    // static public PacketPool`1<MasterServer.GetPublicServersRequest> get_pool()
    // Offset: 0x1217524
    static GlobalNamespace::PacketPool_1<MasterServer::GetPublicServersRequest*>* get_pool();
    // public System.String get_userId()
    // Offset: 0x121756C
    ::Il2CppString* get_userId();
    // private System.Void set_userId(System.String value)
    // Offset: 0x1217574
    void set_userId(::Il2CppString* value);
    // public System.String get_userName()
    // Offset: 0x121757C
    ::Il2CppString* get_userName();
    // private System.Void set_userName(System.String value)
    // Offset: 0x1217584
    void set_userName(::Il2CppString* value);
    // public MasterServer.GetPublicServersRequest Init(System.String userId, System.String userName, System.Int32 offset, System.Int32 count, BeatmapLevelSelectionMask selectionMask, GameplayServerConfiguration configuration)
    // Offset: 0x121758C
    MasterServer::GetPublicServersRequest* Init(::Il2CppString* userId, ::Il2CppString* userName, int offset, int count, GlobalNamespace::BeatmapLevelSelectionMask selectionMask, GlobalNamespace::GameplayServerConfiguration configuration);
    // public System.Void .ctor()
    // Offset: 0x1217760
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GetPublicServersRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::GetPublicServersRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GetPublicServersRequest*, creationType>()));
    }
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x12175B8
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x1217648
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public override System.Void Release()
    // Offset: 0x1217704
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Release()
    void Release();
  }; // MasterServer.GetPublicServersRequest
  #pragma pack(pop)
  static check_size<sizeof(GetPublicServersRequest), 72 + sizeof(GlobalNamespace::GameplayServerConfiguration)> __MasterServer_GetPublicServersRequestSizeCheck;
  static_assert(sizeof(GetPublicServersRequest) == 0x60);
}
DEFINE_IL2CPP_ARG_TYPE(MasterServer::GetPublicServersRequest*, "MasterServer", "GetPublicServersRequest");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::GetPublicServersRequest::get_pool
// Il2CppName: get_pool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PacketPool_1<MasterServer::GetPublicServersRequest*>* (*)()>(&MasterServer::GetPublicServersRequest::get_pool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::GetPublicServersRequest*), "get_pool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::GetPublicServersRequest::get_userId
// Il2CppName: get_userId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (MasterServer::GetPublicServersRequest::*)()>(&MasterServer::GetPublicServersRequest::get_userId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::GetPublicServersRequest*), "get_userId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::GetPublicServersRequest::set_userId
// Il2CppName: set_userId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::GetPublicServersRequest::*)(::Il2CppString*)>(&MasterServer::GetPublicServersRequest::set_userId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::GetPublicServersRequest*), "set_userId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: MasterServer::GetPublicServersRequest::get_userName
// Il2CppName: get_userName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (MasterServer::GetPublicServersRequest::*)()>(&MasterServer::GetPublicServersRequest::get_userName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::GetPublicServersRequest*), "get_userName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::GetPublicServersRequest::set_userName
// Il2CppName: set_userName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::GetPublicServersRequest::*)(::Il2CppString*)>(&MasterServer::GetPublicServersRequest::set_userName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::GetPublicServersRequest*), "set_userName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: MasterServer::GetPublicServersRequest::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<MasterServer::GetPublicServersRequest* (MasterServer::GetPublicServersRequest::*)(::Il2CppString*, ::Il2CppString*, int, int, GlobalNamespace::BeatmapLevelSelectionMask, GlobalNamespace::GameplayServerConfiguration)>(&MasterServer::GetPublicServersRequest::Init)> {
  static const MethodInfo* get() {
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* userName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* selectionMask = &::il2cpp_utils::GetClassFromName("", "BeatmapLevelSelectionMask")->byval_arg;
    static auto* configuration = &::il2cpp_utils::GetClassFromName("", "GameplayServerConfiguration")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::GetPublicServersRequest*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userId, userName, offset, count, selectionMask, configuration});
  }
};
// Writing MetadataGetter for method: MasterServer::GetPublicServersRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MasterServer::GetPublicServersRequest::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::GetPublicServersRequest::*)(LiteNetLib::Utils::NetDataWriter*)>(&MasterServer::GetPublicServersRequest::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::GetPublicServersRequest*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: MasterServer::GetPublicServersRequest::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::GetPublicServersRequest::*)(LiteNetLib::Utils::NetDataReader*)>(&MasterServer::GetPublicServersRequest::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::GetPublicServersRequest*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: MasterServer::GetPublicServersRequest::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::GetPublicServersRequest::*)()>(&MasterServer::GetPublicServersRequest::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::GetPublicServersRequest*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
