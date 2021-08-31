// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
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
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: VarIntExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class VarIntExtensions : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: VarIntExtensions
    VarIntExtensions() noexcept {}
    // static public System.Void PutVarInt(LiteNetLib.Utils.NetDataWriter writer, System.Int32 val)
    // Offset: 0x237A4B4
    static void PutVarInt(LiteNetLib::Utils::NetDataWriter* writer, int val);
    // static public System.Int32 GetVarInt(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x237A82C
    static int GetVarInt(LiteNetLib::Utils::NetDataReader* reader);
    // static public System.Void PutVarUInt(LiteNetLib.Utils.NetDataWriter writer, System.UInt32 val)
    // Offset: 0x2376AFC
    static void PutVarUInt(LiteNetLib::Utils::NetDataWriter* writer, uint val);
    // static public System.UInt32 GetVarUInt(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x2376A98
    static uint GetVarUInt(LiteNetLib::Utils::NetDataReader* reader);
    // static public System.Void PutVarLong(LiteNetLib.Utils.NetDataWriter writer, System.Int64 val)
    // Offset: 0x237E284
    static void PutVarLong(LiteNetLib::Utils::NetDataWriter* writer, int64_t val);
    // static public System.Int64 GetVarLong(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x237E2A0
    static int64_t GetVarLong(LiteNetLib::Utils::NetDataReader* reader);
    // static public System.Void PutVarULong(LiteNetLib.Utils.NetDataWriter writer, System.UInt64 val)
    // Offset: 0x237E2BC
    static void PutVarULong(LiteNetLib::Utils::NetDataWriter* writer, uint64_t val);
    // static public System.UInt64 GetVarULong(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x237E308
    static uint64_t GetVarULong(LiteNetLib::Utils::NetDataReader* reader);
    // static public System.Boolean TryGetVarUInt(LiteNetLib.Utils.NetDataReader reader, out System.UInt32 value)
    // Offset: 0x237E388
    static bool TryGetVarUInt(LiteNetLib::Utils::NetDataReader* reader, ByRef<uint> value);
    // static public System.Boolean TryGetVarULong(LiteNetLib.Utils.NetDataReader reader, out System.UInt64 value)
    // Offset: 0x237E3D8
    static bool TryGetVarULong(LiteNetLib::Utils::NetDataReader* reader, ByRef<uint64_t> value);
    // static public System.Int32 GetSize(System.Int32 val)
    // Offset: 0x237D9FC
    static int GetSize(int val);
    // static public System.Int32 GetSize(System.UInt32 val)
    // Offset: 0x237E494
    static int GetSize(uint val);
    // static public System.Int32 GetSize(System.Int64 val)
    // Offset: 0x237E464
    static int GetSize(int64_t val);
    // static public System.Int32 GetSize(System.UInt64 val)
    // Offset: 0x237E4B0
    static int GetSize(uint64_t val);
  }; // VarIntExtensions
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VarIntExtensions*, "", "VarIntExtensions");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::VarIntExtensions::PutVarInt
// Il2CppName: PutVarInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(LiteNetLib::Utils::NetDataWriter*, int)>(&GlobalNamespace::VarIntExtensions::PutVarInt)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VarIntExtensions*), "PutVarInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer, val});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VarIntExtensions::GetVarInt
// Il2CppName: GetVarInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::VarIntExtensions::GetVarInt)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VarIntExtensions*), "GetVarInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VarIntExtensions::PutVarUInt
// Il2CppName: PutVarUInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(LiteNetLib::Utils::NetDataWriter*, uint)>(&GlobalNamespace::VarIntExtensions::PutVarUInt)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VarIntExtensions*), "PutVarUInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer, val});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VarIntExtensions::GetVarUInt
// Il2CppName: GetVarUInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::VarIntExtensions::GetVarUInt)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VarIntExtensions*), "GetVarUInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VarIntExtensions::PutVarLong
// Il2CppName: PutVarLong
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(LiteNetLib::Utils::NetDataWriter*, int64_t)>(&GlobalNamespace::VarIntExtensions::PutVarLong)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VarIntExtensions*), "PutVarLong", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer, val});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VarIntExtensions::GetVarLong
// Il2CppName: GetVarLong
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::VarIntExtensions::GetVarLong)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VarIntExtensions*), "GetVarLong", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VarIntExtensions::PutVarULong
// Il2CppName: PutVarULong
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(LiteNetLib::Utils::NetDataWriter*, uint64_t)>(&GlobalNamespace::VarIntExtensions::PutVarULong)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VarIntExtensions*), "PutVarULong", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer, val});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VarIntExtensions::GetVarULong
// Il2CppName: GetVarULong
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::VarIntExtensions::GetVarULong)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VarIntExtensions*), "GetVarULong", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VarIntExtensions::TryGetVarUInt
// Il2CppName: TryGetVarUInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(LiteNetLib::Utils::NetDataReader*, ByRef<uint>)>(&GlobalNamespace::VarIntExtensions::TryGetVarUInt)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VarIntExtensions*), "TryGetVarUInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader, value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VarIntExtensions::TryGetVarULong
// Il2CppName: TryGetVarULong
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(LiteNetLib::Utils::NetDataReader*, ByRef<uint64_t>)>(&GlobalNamespace::VarIntExtensions::TryGetVarULong)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt64")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VarIntExtensions*), "TryGetVarULong", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader, value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VarIntExtensions::GetSize
// Il2CppName: GetSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&GlobalNamespace::VarIntExtensions::GetSize)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VarIntExtensions*), "GetSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VarIntExtensions::GetSize
// Il2CppName: GetSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(uint)>(&GlobalNamespace::VarIntExtensions::GetSize)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VarIntExtensions*), "GetSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VarIntExtensions::GetSize
// Il2CppName: GetSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int64_t)>(&GlobalNamespace::VarIntExtensions::GetSize)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VarIntExtensions*), "GetSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VarIntExtensions::GetSize
// Il2CppName: GetSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(uint64_t)>(&GlobalNamespace::VarIntExtensions::GetSize)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VarIntExtensions*), "GetSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
