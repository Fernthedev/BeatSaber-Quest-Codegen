// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: BaseMasterServerReliableRequest
#include "GlobalNamespace/BaseMasterServerReliableRequest.hpp"
// Including type: MasterServer.IMasterServerMultipartMessage
#include "MasterServer/IMasterServerMultipartMessage.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.BaseMasterServerMultipartMessage
  // [TokenAttribute] Offset: FFFFFFFF
  class BaseMasterServerMultipartMessage : public GlobalNamespace::BaseMasterServerReliableRequest/*, public MasterServer::IMasterServerMultipartMessage*/ {
    public:
    // private System.UInt32 <multipartMessageId>k__BackingField
    // Size: 0x4
    // Offset: 0x14
    uint multipartMessageId;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.Int32 <offset>k__BackingField
    // Size: 0x4
    // Offset: 0x18
    int offset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <length>k__BackingField
    // Size: 0x4
    // Offset: 0x1C
    int length;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <totalLength>k__BackingField
    // Size: 0x4
    // Offset: 0x20
    int totalLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: totalLength and: data
    char __padding3[0x4] = {};
    // private readonly System.Byte[] _data
    // Size: 0x8
    // Offset: 0x28
    ::Array<uint8_t>* data;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: BaseMasterServerMultipartMessage
    BaseMasterServerMultipartMessage(uint multipartMessageId_ = {}, int offset_ = {}, int length_ = {}, int totalLength_ = {}, ::Array<uint8_t>* data_ = {}) noexcept : multipartMessageId{multipartMessageId_}, offset{offset_}, length{length_}, totalLength{totalLength_}, data{data_} {}
    // Creating interface conversion operator: operator MasterServer::IMasterServerMultipartMessage
    operator MasterServer::IMasterServerMultipartMessage() noexcept {
      return *reinterpret_cast<MasterServer::IMasterServerMultipartMessage*>(this);
    }
    // Deleting conversion operator: operator uint
    constexpr operator uint() const noexcept = delete;
    // static field const value: static public System.Int32 kDataChunkSize
    static constexpr const int kDataChunkSize = 384;
    // Get static field: static public System.Int32 kDataChunkSize
    static int _get_kDataChunkSize();
    // Set static field: static public System.Int32 kDataChunkSize
    static void _set_kDataChunkSize(int value);
    // static field const value: static public System.Int32 kMaximumDataSize
    static constexpr const int kMaximumDataSize = 32767;
    // Get static field: static public System.Int32 kMaximumDataSize
    static int _get_kMaximumDataSize();
    // Set static field: static public System.Int32 kMaximumDataSize
    static void _set_kMaximumDataSize(int value);
    // Get instance field: private System.UInt32 <multipartMessageId>k__BackingField
    uint _get_$multipartMessageId$k__BackingField();
    // Set instance field: private System.UInt32 <multipartMessageId>k__BackingField
    void _set_$multipartMessageId$k__BackingField(uint value);
    // Get instance field: private System.Int32 <offset>k__BackingField
    int _get_$offset$k__BackingField();
    // Set instance field: private System.Int32 <offset>k__BackingField
    void _set_$offset$k__BackingField(int value);
    // Get instance field: private System.Int32 <length>k__BackingField
    int _get_$length$k__BackingField();
    // Set instance field: private System.Int32 <length>k__BackingField
    void _set_$length$k__BackingField(int value);
    // Get instance field: private System.Int32 <totalLength>k__BackingField
    int _get_$totalLength$k__BackingField();
    // Set instance field: private System.Int32 <totalLength>k__BackingField
    void _set_$totalLength$k__BackingField(int value);
    // Get instance field: private readonly System.Byte[] _data
    ::Array<uint8_t>* _get__data();
    // Set instance field: private readonly System.Byte[] _data
    void _set__data(::Array<uint8_t>* value);
    // public System.UInt32 get_multipartMessageId()
    // Offset: 0x1214D98
    uint get_multipartMessageId();
    // private System.Void set_multipartMessageId(System.UInt32 value)
    // Offset: 0x1214DA0
    void set_multipartMessageId(uint value);
    // public System.Int32 get_offset()
    // Offset: 0x1214DA8
    int get_offset();
    // private System.Void set_offset(System.Int32 value)
    // Offset: 0x1214DB0
    void set_offset(int value);
    // public System.Int32 get_length()
    // Offset: 0x1214DB8
    int get_length();
    // private System.Void set_length(System.Int32 value)
    // Offset: 0x1214DC0
    void set_length(int value);
    // public System.Int32 get_totalLength()
    // Offset: 0x1214DC8
    int get_totalLength();
    // private System.Void set_totalLength(System.Int32 value)
    // Offset: 0x1214DD0
    void set_totalLength(int value);
    // public System.Byte[] get_data()
    // Offset: 0x1214DD8
    ::Array<uint8_t>* get_data();
    // public MasterServer.BaseMasterServerMultipartMessage Init(System.UInt32 multipartMessageId, System.Byte[] data, System.Int32 offset, System.Int32 length, System.Int32 totalLength)
    // Offset: 0x1214DE0
    MasterServer::BaseMasterServerMultipartMessage* Init(uint multipartMessageId, ::Array<uint8_t>* data, int offset, int length, int totalLength);
    // protected System.Void .ctor()
    // Offset: 0x1215028
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseMasterServerMultipartMessage* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::BaseMasterServerMultipartMessage::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseMasterServerMultipartMessage*, creationType>()));
    }
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x1214E3C
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x1214EC0
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
  }; // MasterServer.BaseMasterServerMultipartMessage
  #pragma pack(pop)
  static check_size<sizeof(BaseMasterServerMultipartMessage), 40 + sizeof(::Array<uint8_t>*)> __MasterServer_BaseMasterServerMultipartMessageSizeCheck;
  static_assert(sizeof(BaseMasterServerMultipartMessage) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(MasterServer::BaseMasterServerMultipartMessage*, "MasterServer", "BaseMasterServerMultipartMessage");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::BaseMasterServerMultipartMessage::get_multipartMessageId
// Il2CppName: get_multipartMessageId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (MasterServer::BaseMasterServerMultipartMessage::*)()>(&MasterServer::BaseMasterServerMultipartMessage::get_multipartMessageId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::BaseMasterServerMultipartMessage*), "get_multipartMessageId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::BaseMasterServerMultipartMessage::set_multipartMessageId
// Il2CppName: set_multipartMessageId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::BaseMasterServerMultipartMessage::*)(uint)>(&MasterServer::BaseMasterServerMultipartMessage::set_multipartMessageId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::BaseMasterServerMultipartMessage*), "set_multipartMessageId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: MasterServer::BaseMasterServerMultipartMessage::get_offset
// Il2CppName: get_offset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (MasterServer::BaseMasterServerMultipartMessage::*)()>(&MasterServer::BaseMasterServerMultipartMessage::get_offset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::BaseMasterServerMultipartMessage*), "get_offset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::BaseMasterServerMultipartMessage::set_offset
// Il2CppName: set_offset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::BaseMasterServerMultipartMessage::*)(int)>(&MasterServer::BaseMasterServerMultipartMessage::set_offset)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::BaseMasterServerMultipartMessage*), "set_offset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: MasterServer::BaseMasterServerMultipartMessage::get_length
// Il2CppName: get_length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (MasterServer::BaseMasterServerMultipartMessage::*)()>(&MasterServer::BaseMasterServerMultipartMessage::get_length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::BaseMasterServerMultipartMessage*), "get_length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::BaseMasterServerMultipartMessage::set_length
// Il2CppName: set_length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::BaseMasterServerMultipartMessage::*)(int)>(&MasterServer::BaseMasterServerMultipartMessage::set_length)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::BaseMasterServerMultipartMessage*), "set_length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: MasterServer::BaseMasterServerMultipartMessage::get_totalLength
// Il2CppName: get_totalLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (MasterServer::BaseMasterServerMultipartMessage::*)()>(&MasterServer::BaseMasterServerMultipartMessage::get_totalLength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::BaseMasterServerMultipartMessage*), "get_totalLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::BaseMasterServerMultipartMessage::set_totalLength
// Il2CppName: set_totalLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::BaseMasterServerMultipartMessage::*)(int)>(&MasterServer::BaseMasterServerMultipartMessage::set_totalLength)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::BaseMasterServerMultipartMessage*), "set_totalLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: MasterServer::BaseMasterServerMultipartMessage::get_data
// Il2CppName: get_data
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (MasterServer::BaseMasterServerMultipartMessage::*)()>(&MasterServer::BaseMasterServerMultipartMessage::get_data)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::BaseMasterServerMultipartMessage*), "get_data", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::BaseMasterServerMultipartMessage::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<MasterServer::BaseMasterServerMultipartMessage* (MasterServer::BaseMasterServerMultipartMessage::*)(uint, ::Array<uint8_t>*, int, int, int)>(&MasterServer::BaseMasterServerMultipartMessage::Init)> {
  static const MethodInfo* get() {
    static auto* multipartMessageId = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* totalLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::BaseMasterServerMultipartMessage*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{multipartMessageId, data, offset, length, totalLength});
  }
};
// Writing MetadataGetter for method: MasterServer::BaseMasterServerMultipartMessage::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MasterServer::BaseMasterServerMultipartMessage::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::BaseMasterServerMultipartMessage::*)(LiteNetLib::Utils::NetDataWriter*)>(&MasterServer::BaseMasterServerMultipartMessage::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::BaseMasterServerMultipartMessage*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: MasterServer::BaseMasterServerMultipartMessage::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::BaseMasterServerMultipartMessage::*)(LiteNetLib::Utils::NetDataReader*)>(&MasterServer::BaseMasterServerMultipartMessage::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::BaseMasterServerMultipartMessage*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
