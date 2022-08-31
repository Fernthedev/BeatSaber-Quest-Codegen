// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ConnectedPlayerManager
#include "GlobalNamespace/ConnectedPlayerManager.hpp"
// Including type: LiteNetLib.Utils.INetSerializable
#include "LiteNetLib/Utils/INetSerializable.hpp"
// Including type: IPoolablePacket
#include "GlobalNamespace/IPoolablePacket.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ConnectedPlayerManager::PlayerSortOrderPacket);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ConnectedPlayerManager::PlayerSortOrderPacket*, "", "ConnectedPlayerManager/PlayerSortOrderPacket");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: ConnectedPlayerManager/PlayerSortOrderPacket
  // [TokenAttribute] Offset: FFFFFFFF
  class ConnectedPlayerManager::PlayerSortOrderPacket : public ::Il2CppObject/*, public ::LiteNetLib::Utils::INetSerializable, public ::GlobalNamespace::IPoolablePacket*/ {
    public:
    public:
    // public System.String userId
    // Size: 0x8
    // Offset: 0x10
    ::StringW userId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Int32 sortIndex
    // Size: 0x4
    // Offset: 0x18
    int sortIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::LiteNetLib::Utils::INetSerializable
    operator ::LiteNetLib::Utils::INetSerializable() noexcept {
      return *reinterpret_cast<::LiteNetLib::Utils::INetSerializable*>(this);
    }
    // Creating interface conversion operator: i_INetSerializable
    inline ::LiteNetLib::Utils::INetSerializable* i_INetSerializable() noexcept {
      return reinterpret_cast<::LiteNetLib::Utils::INetSerializable*>(this);
    }
    // Creating interface conversion operator: operator ::GlobalNamespace::IPoolablePacket
    operator ::GlobalNamespace::IPoolablePacket() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IPoolablePacket*>(this);
    }
    // Creating interface conversion operator: i_IPoolablePacket
    inline ::GlobalNamespace::IPoolablePacket* i_IPoolablePacket() noexcept {
      return reinterpret_cast<::GlobalNamespace::IPoolablePacket*>(this);
    }
    // Get instance field reference: public System.String userId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_userId();
    // Get instance field reference: public System.Int32 sortIndex
    [[deprecated("Use field access instead!")]] int& dyn_sortIndex();
    // static public PacketPool`1<ConnectedPlayerManager/PlayerSortOrderPacket> get_pool()
    // Offset: 0x1685354
    static ::GlobalNamespace::PacketPool_1<::GlobalNamespace::ConnectedPlayerManager::PlayerSortOrderPacket*>* get_pool();
    // public System.Void .ctor()
    // Offset: 0x1685F84
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConnectedPlayerManager::PlayerSortOrderPacket* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ConnectedPlayerManager::PlayerSortOrderPacket::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConnectedPlayerManager::PlayerSortOrderPacket*, creationType>()));
    }
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x1685E9C
    void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x1685EE0
    void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);
    // public System.Void Release()
    // Offset: 0x1685F28
    void Release();
    // public ConnectedPlayerManager/PlayerSortOrderPacket Init(System.String userId, System.Int32 sortIndex)
    // Offset: 0x168539C
    ::GlobalNamespace::ConnectedPlayerManager::PlayerSortOrderPacket* Init(::StringW userId, int sortIndex);
  }; // ConnectedPlayerManager/PlayerSortOrderPacket
  #pragma pack(pop)
  static check_size<sizeof(ConnectedPlayerManager::PlayerSortOrderPacket), 24 + sizeof(int)> __GlobalNamespace_ConnectedPlayerManager_PlayerSortOrderPacketSizeCheck;
  static_assert(sizeof(ConnectedPlayerManager::PlayerSortOrderPacket) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::PlayerSortOrderPacket::get_pool
// Il2CppName: get_pool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PacketPool_1<::GlobalNamespace::ConnectedPlayerManager::PlayerSortOrderPacket*>* (*)()>(&GlobalNamespace::ConnectedPlayerManager::PlayerSortOrderPacket::get_pool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedPlayerManager::PlayerSortOrderPacket*), "get_pool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::PlayerSortOrderPacket::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::PlayerSortOrderPacket::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::PlayerSortOrderPacket::*)(::LiteNetLib::Utils::NetDataWriter*)>(&GlobalNamespace::ConnectedPlayerManager::PlayerSortOrderPacket::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedPlayerManager::PlayerSortOrderPacket*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::PlayerSortOrderPacket::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::PlayerSortOrderPacket::*)(::LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::ConnectedPlayerManager::PlayerSortOrderPacket::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedPlayerManager::PlayerSortOrderPacket*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::PlayerSortOrderPacket::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::PlayerSortOrderPacket::*)()>(&GlobalNamespace::ConnectedPlayerManager::PlayerSortOrderPacket::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedPlayerManager::PlayerSortOrderPacket*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::PlayerSortOrderPacket::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ConnectedPlayerManager::PlayerSortOrderPacket* (GlobalNamespace::ConnectedPlayerManager::PlayerSortOrderPacket::*)(::StringW, int)>(&GlobalNamespace::ConnectedPlayerManager::PlayerSortOrderPacket::Init)> {
  static const MethodInfo* get() {
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* sortIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedPlayerManager::PlayerSortOrderPacket*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userId, sortIndex});
  }
};
