// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LiteNetLib.Utils.INetSerializable
#include "LiteNetLib/Utils/INetSerializable.hpp"
// Including type: IPoolablePacket
#include "GlobalNamespace/IPoolablePacket.hpp"
// Including type: ISyncStateSerializable`1
#include "GlobalNamespace/ISyncStateSerializable_1.hpp"
// Including type: NodePoseSyncState
#include "GlobalNamespace/NodePoseSyncState.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
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
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: NodePoseSyncStateNetSerializable
  class NodePoseSyncStateNetSerializable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::NodePoseSyncStateNetSerializable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NodePoseSyncStateNetSerializable*, "", "NodePoseSyncStateNetSerializable");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: NodePoseSyncStateNetSerializable
  // [TokenAttribute] Offset: FFFFFFFF
  class NodePoseSyncStateNetSerializable : public ::Il2CppObject/*, public ::LiteNetLib::Utils::INetSerializable, public ::GlobalNamespace::IPoolablePacket, public ::GlobalNamespace::ISyncStateSerializable_1<::GlobalNamespace::NodePoseSyncState>*/ {
    public:
    public:
    // private NodePoseSyncState _state
    // Size: 0x48
    // Offset: 0x10
    ::GlobalNamespace::NodePoseSyncState state;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::NodePoseSyncState) == 0x48);
    // private SyncStateId <id>k__BackingField
    // Size: 0x1
    // Offset: 0x58
    ::GlobalNamespace::SyncStateId id;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SyncStateId) == 0x1);
    // Padding between fields: id and: time
    char __padding1[0x3] = {};
    // private System.Single <time>k__BackingField
    // Size: 0x4
    // Offset: 0x5C
    float time;
    // Field size check
    static_assert(sizeof(float) == 0x4);
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
    // Creating interface conversion operator: operator ::GlobalNamespace::ISyncStateSerializable_1<::GlobalNamespace::NodePoseSyncState>
    operator ::GlobalNamespace::ISyncStateSerializable_1<::GlobalNamespace::NodePoseSyncState>() noexcept {
      return *reinterpret_cast<::GlobalNamespace::ISyncStateSerializable_1<::GlobalNamespace::NodePoseSyncState>*>(this);
    }
    // Creating interface conversion operator: i_NodePoseSyncState
    inline ::GlobalNamespace::ISyncStateSerializable_1<::GlobalNamespace::NodePoseSyncState>* i_NodePoseSyncState() noexcept {
      return reinterpret_cast<::GlobalNamespace::ISyncStateSerializable_1<::GlobalNamespace::NodePoseSyncState>*>(this);
    }
    // Get instance field reference: private NodePoseSyncState _state
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::NodePoseSyncState& dyn__state();
    // Get instance field reference: private SyncStateId <id>k__BackingField
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SyncStateId& dyn_$id$k__BackingField();
    // Get instance field reference: private System.Single <time>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$time$k__BackingField();
    // static public PacketPool`1<NodePoseSyncStateNetSerializable> get_pool()
    // Offset: 0x1747A74
    static ::GlobalNamespace::PacketPool_1<::GlobalNamespace::NodePoseSyncStateNetSerializable*>* get_pool();
    // public SyncStateId get_id()
    // Offset: 0x1747ABC
    ::GlobalNamespace::SyncStateId get_id();
    // public System.Void set_id(SyncStateId value)
    // Offset: 0x1747AC4
    void set_id(::GlobalNamespace::SyncStateId value);
    // public System.Single get_time()
    // Offset: 0x1747ACC
    float get_time();
    // public System.Void set_time(System.Single value)
    // Offset: 0x1747AD4
    void set_time(float value);
    // public NodePoseSyncState get_state()
    // Offset: 0x1747ADC
    ::GlobalNamespace::NodePoseSyncState get_state();
    // public System.Void set_state(NodePoseSyncState value)
    // Offset: 0x1747AEC
    void set_state(::GlobalNamespace::NodePoseSyncState value);
    // public System.Void .ctor()
    // Offset: 0x1747C14
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NodePoseSyncStateNetSerializable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::NodePoseSyncStateNetSerializable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NodePoseSyncStateNetSerializable*, creationType>()));
    }
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x1747B08
    void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x1747B68
    void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);
    // public System.Void Release()
    // Offset: 0x1747BB8
    void Release();
  }; // NodePoseSyncStateNetSerializable
  #pragma pack(pop)
  static check_size<sizeof(NodePoseSyncStateNetSerializable), 92 + sizeof(float)> __GlobalNamespace_NodePoseSyncStateNetSerializableSizeCheck;
  static_assert(sizeof(NodePoseSyncStateNetSerializable) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NodePoseSyncStateNetSerializable::get_pool
// Il2CppName: get_pool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PacketPool_1<::GlobalNamespace::NodePoseSyncStateNetSerializable*>* (*)()>(&GlobalNamespace::NodePoseSyncStateNetSerializable::get_pool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NodePoseSyncStateNetSerializable*), "get_pool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NodePoseSyncStateNetSerializable::get_id
// Il2CppName: get_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SyncStateId (GlobalNamespace::NodePoseSyncStateNetSerializable::*)()>(&GlobalNamespace::NodePoseSyncStateNetSerializable::get_id)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NodePoseSyncStateNetSerializable*), "get_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NodePoseSyncStateNetSerializable::set_id
// Il2CppName: set_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NodePoseSyncStateNetSerializable::*)(::GlobalNamespace::SyncStateId)>(&GlobalNamespace::NodePoseSyncStateNetSerializable::set_id)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "SyncStateId")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NodePoseSyncStateNetSerializable*), "set_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NodePoseSyncStateNetSerializable::get_time
// Il2CppName: get_time
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::NodePoseSyncStateNetSerializable::*)()>(&GlobalNamespace::NodePoseSyncStateNetSerializable::get_time)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NodePoseSyncStateNetSerializable*), "get_time", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NodePoseSyncStateNetSerializable::set_time
// Il2CppName: set_time
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NodePoseSyncStateNetSerializable::*)(float)>(&GlobalNamespace::NodePoseSyncStateNetSerializable::set_time)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NodePoseSyncStateNetSerializable*), "set_time", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NodePoseSyncStateNetSerializable::get_state
// Il2CppName: get_state
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NodePoseSyncState (GlobalNamespace::NodePoseSyncStateNetSerializable::*)()>(&GlobalNamespace::NodePoseSyncStateNetSerializable::get_state)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NodePoseSyncStateNetSerializable*), "get_state", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NodePoseSyncStateNetSerializable::set_state
// Il2CppName: set_state
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NodePoseSyncStateNetSerializable::*)(::GlobalNamespace::NodePoseSyncState)>(&GlobalNamespace::NodePoseSyncStateNetSerializable::set_state)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "NodePoseSyncState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NodePoseSyncStateNetSerializable*), "set_state", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NodePoseSyncStateNetSerializable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::NodePoseSyncStateNetSerializable::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NodePoseSyncStateNetSerializable::*)(::LiteNetLib::Utils::NetDataWriter*)>(&GlobalNamespace::NodePoseSyncStateNetSerializable::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NodePoseSyncStateNetSerializable*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NodePoseSyncStateNetSerializable::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NodePoseSyncStateNetSerializable::*)(::LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::NodePoseSyncStateNetSerializable::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NodePoseSyncStateNetSerializable*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NodePoseSyncStateNetSerializable::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NodePoseSyncStateNetSerializable::*)()>(&GlobalNamespace::NodePoseSyncStateNetSerializable::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NodePoseSyncStateNetSerializable*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
