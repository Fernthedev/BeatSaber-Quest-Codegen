// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Security.Protocol.Ntlm.NtlmFlags
#include "Mono/Security/Protocol/Ntlm/NtlmFlags.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Mono.Security.Protocol.Ntlm
namespace Mono::Security::Protocol::Ntlm {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Protocol.Ntlm.MessageBase
  // [TokenAttribute] Offset: FFFFFFFF
  class MessageBase : public ::Il2CppObject {
    public:
    // private System.Int32 _type
    // Size: 0x4
    // Offset: 0x10
    int type;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private Mono.Security.Protocol.Ntlm.NtlmFlags _flags
    // Size: 0x4
    // Offset: 0x14
    Mono::Security::Protocol::Ntlm::NtlmFlags flags;
    // Field size check
    static_assert(sizeof(Mono::Security::Protocol::Ntlm::NtlmFlags) == 0x4);
    // Creating value type constructor for type: MessageBase
    MessageBase(int type_ = {}, Mono::Security::Protocol::Ntlm::NtlmFlags flags_ = {}) noexcept : type{type_}, flags{flags_} {}
    // Get static field: static private System.Byte[] header
    static ::Array<uint8_t>* _get_header();
    // Set static field: static private System.Byte[] header
    static void _set_header(::Array<uint8_t>* value);
    // Get instance field reference: private System.Int32 _type
    int& dyn__type();
    // Get instance field reference: private Mono.Security.Protocol.Ntlm.NtlmFlags _flags
    Mono::Security::Protocol::Ntlm::NtlmFlags& dyn__flags();
    // public Mono.Security.Protocol.Ntlm.NtlmFlags get_Flags()
    // Offset: 0x1E081F0
    Mono::Security::Protocol::Ntlm::NtlmFlags get_Flags();
    // public System.Void set_Flags(Mono.Security.Protocol.Ntlm.NtlmFlags value)
    // Offset: 0x1E081F8
    void set_Flags(Mono::Security::Protocol::Ntlm::NtlmFlags value);
    // public System.Int32 get_Type()
    // Offset: 0x1E08200
    int get_Type();
    // protected System.Void .ctor(System.Int32 messageType)
    // Offset: 0x1E081C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageBase* New_ctor(int messageType) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Security::Protocol::Ntlm::MessageBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageBase*, creationType>(messageType)));
    }
    // static private System.Void .cctor()
    // Offset: 0x1E085F4
    static void _cctor();
    // protected System.Byte[] PrepareMessage(System.Int32 messageSize)
    // Offset: 0x1E08208
    ::Array<uint8_t>* PrepareMessage(int messageSize);
    // protected System.Void Decode(System.Byte[] message)
    // Offset: 0x1E08314
    void Decode(::Array<uint8_t>* message);
    // protected System.Boolean CheckHeader(System.Byte[] message)
    // Offset: 0x1E084B8
    bool CheckHeader(::Array<uint8_t>* message);
    // public System.Byte[] GetBytes()
    // Offset: 0xFFFFFFFF
    ::Array<uint8_t>* GetBytes();
  }; // Mono.Security.Protocol.Ntlm.MessageBase
  #pragma pack(pop)
  static check_size<sizeof(MessageBase), 20 + sizeof(Mono::Security::Protocol::Ntlm::NtlmFlags)> __Mono_Security_Protocol_Ntlm_MessageBaseSizeCheck;
  static_assert(sizeof(MessageBase) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Protocol::Ntlm::MessageBase*, "Mono.Security.Protocol.Ntlm", "MessageBase");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::MessageBase::get_Flags
// Il2CppName: get_Flags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Security::Protocol::Ntlm::NtlmFlags (Mono::Security::Protocol::Ntlm::MessageBase::*)()>(&Mono::Security::Protocol::Ntlm::MessageBase::get_Flags)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Ntlm::MessageBase*), "get_Flags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::MessageBase::set_Flags
// Il2CppName: set_Flags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Protocol::Ntlm::MessageBase::*)(Mono::Security::Protocol::Ntlm::NtlmFlags)>(&Mono::Security::Protocol::Ntlm::MessageBase::set_Flags)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Mono.Security.Protocol.Ntlm", "NtlmFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Ntlm::MessageBase*), "set_Flags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::MessageBase::get_Type
// Il2CppName: get_Type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Mono::Security::Protocol::Ntlm::MessageBase::*)()>(&Mono::Security::Protocol::Ntlm::MessageBase::get_Type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Ntlm::MessageBase*), "get_Type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::MessageBase::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::MessageBase::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Mono::Security::Protocol::Ntlm::MessageBase::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Ntlm::MessageBase*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::MessageBase::PrepareMessage
// Il2CppName: PrepareMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (Mono::Security::Protocol::Ntlm::MessageBase::*)(int)>(&Mono::Security::Protocol::Ntlm::MessageBase::PrepareMessage)> {
  static const MethodInfo* get() {
    static auto* messageSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Ntlm::MessageBase*), "PrepareMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{messageSize});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::MessageBase::Decode
// Il2CppName: Decode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Protocol::Ntlm::MessageBase::*)(::Array<uint8_t>*)>(&Mono::Security::Protocol::Ntlm::MessageBase::Decode)> {
  static const MethodInfo* get() {
    static auto* message = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Ntlm::MessageBase*), "Decode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::MessageBase::CheckHeader
// Il2CppName: CheckHeader
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::Protocol::Ntlm::MessageBase::*)(::Array<uint8_t>*)>(&Mono::Security::Protocol::Ntlm::MessageBase::CheckHeader)> {
  static const MethodInfo* get() {
    static auto* message = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Ntlm::MessageBase*), "CheckHeader", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::MessageBase::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (Mono::Security::Protocol::Ntlm::MessageBase::*)()>(&Mono::Security::Protocol::Ntlm::MessageBase::GetBytes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Ntlm::MessageBase*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
