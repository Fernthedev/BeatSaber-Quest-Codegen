// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: LiteNetLib.PacketProperty
#include "LiteNetLib/PacketProperty.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.NetPacket
  // [TokenAttribute] Offset: FFFFFFFF
  class NetPacket : public ::Il2CppObject {
    public:
    // public System.Byte[] RawData
    // Size: 0x8
    // Offset: 0x10
    ::Array<uint8_t>* RawData;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // public System.Int32 Size
    // Size: 0x4
    // Offset: 0x18
    int Size;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: Size and: UserData
    char __padding1[0x4] = {};
    // public System.Object UserData
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppObject* UserData;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // Creating value type constructor for type: NetPacket
    NetPacket(::Array<uint8_t>* RawData_ = {}, int Size_ = {}, ::Il2CppObject* UserData_ = {}) noexcept : RawData{RawData_}, Size{Size_}, UserData{UserData_} {}
    // Get static field: static private readonly System.Int32 LastProperty
    static int _get_LastProperty();
    // Set static field: static private readonly System.Int32 LastProperty
    static void _set_LastProperty(int value);
    // Get instance field reference: public System.Byte[] RawData
    ::Array<uint8_t>*& dyn_RawData();
    // Get instance field reference: public System.Int32 Size
    int& dyn_Size();
    // Get instance field reference: public System.Object UserData
    ::Il2CppObject*& dyn_UserData();
    // public LiteNetLib.PacketProperty get_Property()
    // Offset: 0x1C21C84
    LiteNetLib::PacketProperty get_Property();
    // public System.Void set_Property(LiteNetLib.PacketProperty value)
    // Offset: 0x1C23530
    void set_Property(LiteNetLib::PacketProperty value);
    // public System.Byte get_ConnectionNumber()
    // Offset: 0x1C1DFE8
    uint8_t get_ConnectionNumber();
    // public System.Void set_ConnectionNumber(System.Byte value)
    // Offset: 0x1C212DC
    void set_ConnectionNumber(uint8_t value);
    // public System.UInt16 get_Sequence()
    // Offset: 0x1C248E4
    uint16_t get_Sequence();
    // public System.Void set_Sequence(System.UInt16 value)
    // Offset: 0x1C24954
    void set_Sequence(uint16_t value);
    // public System.Boolean get_IsFragmented()
    // Offset: 0x1C24968
    bool get_IsFragmented();
    // public System.Byte get_ChannelId()
    // Offset: 0x1C249E0
    uint8_t get_ChannelId();
    // public System.Void set_ChannelId(System.Byte value)
    // Offset: 0x1C24A18
    void set_ChannelId(uint8_t value);
    // public System.UInt16 get_FragmentId()
    // Offset: 0x1C24A50
    uint16_t get_FragmentId();
    // public System.Void set_FragmentId(System.UInt16 value)
    // Offset: 0x1C24AC0
    void set_FragmentId(uint16_t value);
    // public System.UInt16 get_FragmentPart()
    // Offset: 0x1C24AD0
    uint16_t get_FragmentPart();
    // public System.Void set_FragmentPart(System.UInt16 value)
    // Offset: 0x1C24B40
    void set_FragmentPart(uint16_t value);
    // public System.UInt16 get_FragmentsTotal()
    // Offset: 0x1C24B50
    uint16_t get_FragmentsTotal();
    // public System.Void set_FragmentsTotal(System.UInt16 value)
    // Offset: 0x1C24BC0
    void set_FragmentsTotal(uint16_t value);
    // public System.Void .ctor(System.Int32 size)
    // Offset: 0x1C24BD0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetPacket* New_ctor(int size) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::NetPacket::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetPacket*, creationType>(size)));
    }
    // public System.Void .ctor(LiteNetLib.PacketProperty property, System.Int32 size)
    // Offset: 0x1C1DCB0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetPacket* New_ctor(LiteNetLib::PacketProperty property, int size) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::NetPacket::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetPacket*, creationType>(property, size)));
    }
    // static private System.Void .cctor()
    // Offset: 0x1C24CDC
    static void _cctor();
    // public System.Void MarkFragmented()
    // Offset: 0x1C249A4
    void MarkFragmented();
    // static public System.Int32 GetHeaderSize(LiteNetLib.PacketProperty property)
    // Offset: 0x1C23504
    static int GetHeaderSize(LiteNetLib::PacketProperty property);
    // public System.Int32 GetHeaderSize()
    // Offset: 0x1C24C44
    int GetHeaderSize();
    // public System.Boolean FromBytes(System.Byte[] data, System.Int32 start, System.Int32 packetSize)
    // Offset: 0x1C21B38
    bool FromBytes(::Array<uint8_t>* data, int start, int packetSize);
  }; // LiteNetLib.NetPacket
  #pragma pack(pop)
  static check_size<sizeof(NetPacket), 32 + sizeof(::Il2CppObject*)> __LiteNetLib_NetPacketSizeCheck;
  static_assert(sizeof(NetPacket) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::NetPacket*, "LiteNetLib", "NetPacket");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LiteNetLib::NetPacket::get_Property
// Il2CppName: get_Property
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<LiteNetLib::PacketProperty (LiteNetLib::NetPacket::*)()>(&LiteNetLib::NetPacket::get_Property)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetPacket*), "get_Property", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetPacket::set_Property
// Il2CppName: set_Property
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NetPacket::*)(LiteNetLib::PacketProperty)>(&LiteNetLib::NetPacket::set_Property)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("LiteNetLib", "PacketProperty")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetPacket*), "set_Property", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetPacket::get_ConnectionNumber
// Il2CppName: get_ConnectionNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (LiteNetLib::NetPacket::*)()>(&LiteNetLib::NetPacket::get_ConnectionNumber)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetPacket*), "get_ConnectionNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetPacket::set_ConnectionNumber
// Il2CppName: set_ConnectionNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NetPacket::*)(uint8_t)>(&LiteNetLib::NetPacket::set_ConnectionNumber)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetPacket*), "set_ConnectionNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetPacket::get_Sequence
// Il2CppName: get_Sequence
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (LiteNetLib::NetPacket::*)()>(&LiteNetLib::NetPacket::get_Sequence)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetPacket*), "get_Sequence", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetPacket::set_Sequence
// Il2CppName: set_Sequence
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NetPacket::*)(uint16_t)>(&LiteNetLib::NetPacket::set_Sequence)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetPacket*), "set_Sequence", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetPacket::get_IsFragmented
// Il2CppName: get_IsFragmented
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (LiteNetLib::NetPacket::*)()>(&LiteNetLib::NetPacket::get_IsFragmented)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetPacket*), "get_IsFragmented", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetPacket::get_ChannelId
// Il2CppName: get_ChannelId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (LiteNetLib::NetPacket::*)()>(&LiteNetLib::NetPacket::get_ChannelId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetPacket*), "get_ChannelId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetPacket::set_ChannelId
// Il2CppName: set_ChannelId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NetPacket::*)(uint8_t)>(&LiteNetLib::NetPacket::set_ChannelId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetPacket*), "set_ChannelId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetPacket::get_FragmentId
// Il2CppName: get_FragmentId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (LiteNetLib::NetPacket::*)()>(&LiteNetLib::NetPacket::get_FragmentId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetPacket*), "get_FragmentId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetPacket::set_FragmentId
// Il2CppName: set_FragmentId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NetPacket::*)(uint16_t)>(&LiteNetLib::NetPacket::set_FragmentId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetPacket*), "set_FragmentId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetPacket::get_FragmentPart
// Il2CppName: get_FragmentPart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (LiteNetLib::NetPacket::*)()>(&LiteNetLib::NetPacket::get_FragmentPart)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetPacket*), "get_FragmentPart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetPacket::set_FragmentPart
// Il2CppName: set_FragmentPart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NetPacket::*)(uint16_t)>(&LiteNetLib::NetPacket::set_FragmentPart)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetPacket*), "set_FragmentPart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetPacket::get_FragmentsTotal
// Il2CppName: get_FragmentsTotal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (LiteNetLib::NetPacket::*)()>(&LiteNetLib::NetPacket::get_FragmentsTotal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetPacket*), "get_FragmentsTotal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetPacket::set_FragmentsTotal
// Il2CppName: set_FragmentsTotal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NetPacket::*)(uint16_t)>(&LiteNetLib::NetPacket::set_FragmentsTotal)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetPacket*), "set_FragmentsTotal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetPacket::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: LiteNetLib::NetPacket::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: LiteNetLib::NetPacket::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&LiteNetLib::NetPacket::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetPacket*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetPacket::MarkFragmented
// Il2CppName: MarkFragmented
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NetPacket::*)()>(&LiteNetLib::NetPacket::MarkFragmented)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetPacket*), "MarkFragmented", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetPacket::GetHeaderSize
// Il2CppName: GetHeaderSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(LiteNetLib::PacketProperty)>(&LiteNetLib::NetPacket::GetHeaderSize)> {
  static const MethodInfo* get() {
    static auto* property = &::il2cpp_utils::GetClassFromName("LiteNetLib", "PacketProperty")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetPacket*), "GetHeaderSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{property});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetPacket::GetHeaderSize
// Il2CppName: GetHeaderSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (LiteNetLib::NetPacket::*)()>(&LiteNetLib::NetPacket::GetHeaderSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetPacket*), "GetHeaderSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetPacket::FromBytes
// Il2CppName: FromBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (LiteNetLib::NetPacket::*)(::Array<uint8_t>*, int, int)>(&LiteNetLib::NetPacket::FromBytes)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* packetSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetPacket*), "FromBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, start, packetSize});
  }
};
