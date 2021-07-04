// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Security.Protocol.Ntlm.MessageBase
#include "Mono/Security/Protocol/Ntlm/MessageBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Mono.Security.Protocol.Ntlm
namespace Mono::Security::Protocol::Ntlm {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Protocol.Ntlm.Type1Message
  class Type1Message : public Mono::Security::Protocol::Ntlm::MessageBase {
    public:
    // private System.String _host
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* host;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _domain
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* domain;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: Type1Message
    Type1Message(::Il2CppString* host_ = {}, ::Il2CppString* domain_ = {}) noexcept : host{host_}, domain{domain_} {}
    // public System.Void set_Domain(System.String value)
    // Offset: 0x1D7C2FC
    void set_Domain(::Il2CppString* value);
    // public System.Void set_Host(System.String value)
    // Offset: 0x1D7C384
    void set_Host(::Il2CppString* value);
    // public System.Void .ctor()
    // Offset: 0x1D7C268
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Type1Message* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Security::Protocol::Ntlm::Type1Message::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Type1Message*, creationType>()));
    }
    // protected override System.Void Decode(System.Byte[] message)
    // Offset: 0x1D7C40C
    // Implemented from: Mono.Security.Protocol.Ntlm.MessageBase
    // Base method: System.Void MessageBase::Decode(System.Byte[] message)
    void Decode(::Array<uint8_t>* message);
    // public override System.Byte[] GetBytes()
    // Offset: 0x1D7C500
    // Implemented from: Mono.Security.Protocol.Ntlm.MessageBase
    // Base method: System.Byte[] MessageBase::GetBytes()
    ::Array<uint8_t>* GetBytes();
  }; // Mono.Security.Protocol.Ntlm.Type1Message
  #pragma pack(pop)
  static check_size<sizeof(Type1Message), 32 + sizeof(::Il2CppString*)> __Mono_Security_Protocol_Ntlm_Type1MessageSizeCheck;
  static_assert(sizeof(Type1Message) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Protocol::Ntlm::Type1Message*, "Mono.Security.Protocol.Ntlm", "Type1Message");
// Writing includes for template specializations
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::Type1Message::set_Domain
// Il2CppName: set_Domain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Protocol::Ntlm::Type1Message::*)(::Il2CppString*)>(&Mono::Security::Protocol::Ntlm::Type1Message::set_Domain)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Ntlm::Type1Message*), "set_Domain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::Type1Message::set_Host
// Il2CppName: set_Host
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Protocol::Ntlm::Type1Message::*)(::Il2CppString*)>(&Mono::Security::Protocol::Ntlm::Type1Message::set_Host)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Ntlm::Type1Message*), "set_Host", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::Type1Message::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::Type1Message::Decode
// Il2CppName: Decode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Protocol::Ntlm::Type1Message::*)(::Array<uint8_t>*)>(&Mono::Security::Protocol::Ntlm::Type1Message::Decode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Ntlm::Type1Message*), "Decode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>()});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::Type1Message::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (Mono::Security::Protocol::Ntlm::Type1Message::*)()>(&Mono::Security::Protocol::Ntlm::Type1Message::GetBytes)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Ntlm::Type1Message*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
