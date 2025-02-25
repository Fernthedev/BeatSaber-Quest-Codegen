// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Security.X509.X509Extension
#include "Mono/Security/X509/X509Extension.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Mono.Security.X509.Extensions
namespace Mono::Security::X509::Extensions {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.X509.Extensions.AuthorityKeyIdentifierExtension
  // [TokenAttribute] Offset: FFFFFFFF
  class AuthorityKeyIdentifierExtension : public Mono::Security::X509::X509Extension {
    public:
    // private System.Byte[] aki
    // Size: 0x8
    // Offset: 0x28
    ::Array<uint8_t>* aki;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: AuthorityKeyIdentifierExtension
    AuthorityKeyIdentifierExtension(::Array<uint8_t>* aki_ = {}) noexcept : aki{aki_} {}
    // Creating conversion operator: operator ::Array<uint8_t>*
    constexpr operator ::Array<uint8_t>*() const noexcept {
      return aki;
    }
    // Get instance field reference: private System.Byte[] aki
    ::Array<uint8_t>*& dyn_aki();
    // public System.Byte[] get_Identifier()
    // Offset: 0x1E09AD8
    ::Array<uint8_t>* get_Identifier();
    // public System.Void .ctor(Mono.Security.X509.X509Extension extension)
    // Offset: 0x1E09898
    // Implemented from: Mono.Security.X509.X509Extension
    // Base method: System.Void X509Extension::.ctor(Mono.Security.X509.X509Extension extension)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AuthorityKeyIdentifierExtension* New_ctor(Mono::Security::X509::X509Extension* extension) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AuthorityKeyIdentifierExtension*, creationType>(extension)));
    }
    // protected override System.Void Decode()
    // Offset: 0x1E098A0
    // Implemented from: Mono.Security.X509.X509Extension
    // Base method: System.Void X509Extension::Decode()
    void Decode();
    // protected override System.Void Encode()
    // Offset: 0x1E099B8
    // Implemented from: Mono.Security.X509.X509Extension
    // Base method: System.Void X509Extension::Encode()
    void Encode();
    // public override System.String ToString()
    // Offset: 0x1E09B54
    // Implemented from: Mono.Security.X509.X509Extension
    // Base method: System.String X509Extension::ToString()
    ::Il2CppString* ToString();
  }; // Mono.Security.X509.Extensions.AuthorityKeyIdentifierExtension
  #pragma pack(pop)
  static check_size<sizeof(AuthorityKeyIdentifierExtension), 40 + sizeof(::Array<uint8_t>*)> __Mono_Security_X509_Extensions_AuthorityKeyIdentifierExtensionSizeCheck;
  static_assert(sizeof(AuthorityKeyIdentifierExtension) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension*, "Mono.Security.X509.Extensions", "AuthorityKeyIdentifierExtension");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::get_Identifier
// Il2CppName: get_Identifier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::*)()>(&Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::get_Identifier)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension*), "get_Identifier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::Decode
// Il2CppName: Decode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::*)()>(&Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::Decode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension*), "Decode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::Encode
// Il2CppName: Encode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::*)()>(&Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::Encode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension*), "Encode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::*)()>(&Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
