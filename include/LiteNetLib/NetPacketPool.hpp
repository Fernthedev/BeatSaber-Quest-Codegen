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
// Begin forward declares
// Forward declaring namespace: LiteNetLib
namespace LiteNetLib {
  // Forward declaring type: NetPacket
  class NetPacket;
  // Forward declaring type: PacketProperty
  struct PacketProperty;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ReaderWriterLockSlim
  class ReaderWriterLockSlim;
}
// Completed forward declares
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.NetPacketPool
  class NetPacketPool : public ::Il2CppObject {
    public:
    // private readonly LiteNetLib.NetPacket[] _pool
    // Size: 0x8
    // Offset: 0x10
    ::Array<LiteNetLib::NetPacket*>* pool;
    // Field size check
    static_assert(sizeof(::Array<LiteNetLib::NetPacket*>*) == 0x8);
    // private readonly System.Threading.ReaderWriterLockSlim _lock
    // Size: 0x8
    // Offset: 0x18
    System::Threading::ReaderWriterLockSlim* lock;
    // Field size check
    static_assert(sizeof(System::Threading::ReaderWriterLockSlim*) == 0x8);
    // private System.Int32 _count
    // Size: 0x4
    // Offset: 0x20
    int count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: NetPacketPool
    NetPacketPool(::Array<LiteNetLib::NetPacket*>* pool_ = {}, System::Threading::ReaderWriterLockSlim* lock_ = {}, int count_ = {}) noexcept : pool{pool_}, lock{lock_}, count{count_} {}
    // public LiteNetLib.NetPacket GetWithData(LiteNetLib.PacketProperty property, System.Byte[] data, System.Int32 start, System.Int32 length)
    // Offset: 0x1B44884
    LiteNetLib::NetPacket* GetWithData(LiteNetLib::PacketProperty property, ::Array<uint8_t>* data, int start, int length);
    // public LiteNetLib.NetPacket GetWithProperty(LiteNetLib.PacketProperty property, System.Int32 size)
    // Offset: 0x1B42848
    LiteNetLib::NetPacket* GetWithProperty(LiteNetLib::PacketProperty property, int size);
    // public LiteNetLib.NetPacket GetWithProperty(LiteNetLib.PacketProperty property)
    // Offset: 0x1B432E4
    LiteNetLib::NetPacket* GetWithProperty(LiteNetLib::PacketProperty property);
    // public LiteNetLib.NetPacket GetPacket(System.Int32 size)
    // Offset: 0x1B40F24
    LiteNetLib::NetPacket* GetPacket(int size);
    // public System.Void Recycle(LiteNetLib.NetPacket packet)
    // Offset: 0x1B40DA4
    void Recycle(LiteNetLib::NetPacket* packet);
    // public System.Void .ctor()
    // Offset: 0x1B406CC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetPacketPool* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::NetPacketPool::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetPacketPool*, creationType>()));
    }
  }; // LiteNetLib.NetPacketPool
  #pragma pack(pop)
  static check_size<sizeof(NetPacketPool), 32 + sizeof(int)> __LiteNetLib_NetPacketPoolSizeCheck;
  static_assert(sizeof(NetPacketPool) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::NetPacketPool*, "LiteNetLib", "NetPacketPool");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LiteNetLib::NetPacketPool::GetWithData
// Il2CppName: GetWithData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<LiteNetLib::NetPacket* (LiteNetLib::NetPacketPool::*)(LiteNetLib::PacketProperty, ::Array<uint8_t>*, int, int)>(&LiteNetLib::NetPacketPool::GetWithData)> {
  const MethodInfo* get() {
    static auto* property = &::il2cpp_utils::GetClassFromName("LiteNetLib", "PacketProperty")->byval_arg;
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetPacketPool*), "GetWithData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{property, data, start, length});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetPacketPool::GetWithProperty
// Il2CppName: GetWithProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<LiteNetLib::NetPacket* (LiteNetLib::NetPacketPool::*)(LiteNetLib::PacketProperty, int)>(&LiteNetLib::NetPacketPool::GetWithProperty)> {
  const MethodInfo* get() {
    static auto* property = &::il2cpp_utils::GetClassFromName("LiteNetLib", "PacketProperty")->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetPacketPool*), "GetWithProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{property, size});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetPacketPool::GetWithProperty
// Il2CppName: GetWithProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<LiteNetLib::NetPacket* (LiteNetLib::NetPacketPool::*)(LiteNetLib::PacketProperty)>(&LiteNetLib::NetPacketPool::GetWithProperty)> {
  const MethodInfo* get() {
    static auto* property = &::il2cpp_utils::GetClassFromName("LiteNetLib", "PacketProperty")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetPacketPool*), "GetWithProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{property});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetPacketPool::GetPacket
// Il2CppName: GetPacket
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<LiteNetLib::NetPacket* (LiteNetLib::NetPacketPool::*)(int)>(&LiteNetLib::NetPacketPool::GetPacket)> {
  const MethodInfo* get() {
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetPacketPool*), "GetPacket", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{size});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetPacketPool::Recycle
// Il2CppName: Recycle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NetPacketPool::*)(LiteNetLib::NetPacket*)>(&LiteNetLib::NetPacketPool::Recycle)> {
  const MethodInfo* get() {
    static auto* packet = &::il2cpp_utils::GetClassFromName("LiteNetLib", "NetPacket")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetPacketPool*), "Recycle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{packet});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetPacketPool::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
