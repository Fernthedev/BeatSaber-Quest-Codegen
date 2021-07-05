// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.X509Certificates.X509Certificate
#include "System/Security/Cryptography/X509Certificates/X509Certificate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Certificate2Impl
  class X509Certificate2Impl;
  // Forward declaring type: X509ExtensionCollection
  class X509ExtensionCollection;
  // Forward declaring type: X500DistinguishedName
  class X500DistinguishedName;
  // Forward declaring type: PublicKey
  class PublicKey;
  // Forward declaring type: X509NameType
  struct X509NameType;
  // Forward declaring type: X509KeyStorageFlags
  struct X509KeyStorageFlags;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: DateTime
  struct DateTime;
}
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: AsymmetricAlgorithm
  class AsymmetricAlgorithm;
  // Forward declaring type: Oid
  class Oid;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Forward declaring namespace: Mono::Security::X509
namespace Mono::Security::X509 {
  // Forward declaring type: X509Certificate
  class X509Certificate;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509Certificate2
  class X509Certificate2 : public System::Security::Cryptography::X509Certificates::X509Certificate {
    public:
    // private System.String friendlyName
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* friendlyName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: X509Certificate2
    X509Certificate2(::Il2CppString* friendlyName_ = {}) noexcept : friendlyName{friendlyName_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return friendlyName;
    }
    // Get static field: static private System.Byte[] signedData
    static ::Array<uint8_t>* _get_signedData();
    // Set static field: static private System.Byte[] signedData
    static void _set_signedData(::Array<uint8_t>* value);
    // System.Security.Cryptography.X509Certificates.X509Certificate2Impl get_Impl()
    // Offset: 0x1845E50
    System::Security::Cryptography::X509Certificates::X509Certificate2Impl* get_Impl();
    // public System.Void .ctor(System.String fileName)
    // Offset: 0x1845FE0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509Certificate2* New_ctor(::Il2CppString* fileName) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::X509Certificates::X509Certificate2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509Certificate2*, creationType>(fileName)));
    }
    // public System.Security.Cryptography.X509Certificates.X509ExtensionCollection get_Extensions()
    // Offset: 0x1846268
    System::Security::Cryptography::X509Certificates::X509ExtensionCollection* get_Extensions();
    // public System.Security.Cryptography.X509Certificates.X500DistinguishedName get_IssuerName()
    // Offset: 0x1846290
    System::Security::Cryptography::X509Certificates::X500DistinguishedName* get_IssuerName();
    // public System.DateTime get_NotAfter()
    // Offset: 0x18462B8
    System::DateTime get_NotAfter();
    // public System.DateTime get_NotBefore()
    // Offset: 0x18462FC
    System::DateTime get_NotBefore();
    // public System.Security.Cryptography.AsymmetricAlgorithm get_PrivateKey()
    // Offset: 0x1846340
    System::Security::Cryptography::AsymmetricAlgorithm* get_PrivateKey();
    // public System.Void set_PrivateKey(System.Security.Cryptography.AsymmetricAlgorithm value)
    // Offset: 0x1846368
    void set_PrivateKey(System::Security::Cryptography::AsymmetricAlgorithm* value);
    // public System.Security.Cryptography.X509Certificates.PublicKey get_PublicKey()
    // Offset: 0x18463A0
    System::Security::Cryptography::X509Certificates::PublicKey* get_PublicKey();
    // public System.String get_SerialNumber()
    // Offset: 0x18463C8
    ::Il2CppString* get_SerialNumber();
    // public System.Security.Cryptography.Oid get_SignatureAlgorithm()
    // Offset: 0x18463D4
    System::Security::Cryptography::Oid* get_SignatureAlgorithm();
    // public System.Security.Cryptography.X509Certificates.X500DistinguishedName get_SubjectName()
    // Offset: 0x18463FC
    System::Security::Cryptography::X509Certificates::X500DistinguishedName* get_SubjectName();
    // public System.String get_Thumbprint()
    // Offset: 0x1846424
    ::Il2CppString* get_Thumbprint();
    // public System.Int32 get_Version()
    // Offset: 0x1846430
    int get_Version();
    // public System.String GetNameInfo(System.Security.Cryptography.X509Certificates.X509NameType nameType, System.Boolean forIssuer)
    // Offset: 0x1846458
    ::Il2CppString* GetNameInfo(System::Security::Cryptography::X509Certificates::X509NameType nameType, bool forIssuer);
    // static private System.Void AppendBuffer(System.Text.StringBuilder sb, System.Byte[] buffer)
    // Offset: 0x1846AEC
    static void AppendBuffer(System::Text::StringBuilder* sb, ::Array<uint8_t>* buffer);
    // public System.Boolean Verify()
    // Offset: 0x1846BE4
    bool Verify();
    // Mono.Security.X509.X509Certificate get_MonoCertificate()
    // Offset: 0x1846C1C
    Mono::Security::X509::X509Certificate* get_MonoCertificate();
    // static private System.Void .cctor()
    // Offset: 0x1846D00
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1845EF4
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Certificate
    // Base method: System.Void X509Certificate::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509Certificate2* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::X509Certificates::X509Certificate2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509Certificate2*, creationType>()));
    }
    // public System.Void .ctor(System.Byte[] rawData)
    // Offset: 0x1845F54
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Certificate
    // Base method: System.Void X509Certificate::.ctor(System.Byte[] rawData)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509Certificate2* New_ctor(::Array<uint8_t>* rawData) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::X509Certificates::X509Certificate2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509Certificate2*, creationType>(rawData)));
    }
    // public System.Void .ctor(System.Security.Cryptography.X509Certificates.X509Certificate certificate)
    // Offset: 0x1846074
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Certificate
    // Base method: System.Void X509Certificate::.ctor(System.Security.Cryptography.X509Certificates.X509Certificate certificate)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509Certificate2* New_ctor(System::Security::Cryptography::X509Certificates::X509Certificate* certificate) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::X509Certificates::X509Certificate2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509Certificate2*, creationType>(certificate)));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x18461E0
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Certificate
    // Base method: System.Void X509Certificate::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509Certificate2* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::X509Certificates::X509Certificate2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509Certificate2*, creationType>(info, context)));
    }
    // public override System.Void Import(System.Byte[] rawData, System.String password, System.Security.Cryptography.X509Certificates.X509KeyStorageFlags keyStorageFlags)
    // Offset: 0x1846498
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Certificate
    // Base method: System.Void X509Certificate::Import(System.Byte[] rawData, System.String password, System.Security.Cryptography.X509Certificates.X509KeyStorageFlags keyStorageFlags)
    void Import(::Array<uint8_t>* rawData, ::Il2CppString* password, System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags);
    // public override System.Void Import(System.String fileName, System.String password, System.Security.Cryptography.X509Certificates.X509KeyStorageFlags keyStorageFlags)
    // Offset: 0x1846570
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Certificate
    // Base method: System.Void X509Certificate::Import(System.String fileName, System.String password, System.Security.Cryptography.X509Certificates.X509KeyStorageFlags keyStorageFlags)
    void Import(::Il2CppString* fileName, ::Il2CppString* password, System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags);
    // public override System.Void Reset()
    // Offset: 0x18465C4
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Certificate
    // Base method: System.Void X509Certificate::Reset()
    void Reset();
    // public override System.String ToString()
    // Offset: 0x1846624
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Certificate
    // Base method: System.String X509Certificate::ToString()
    ::Il2CppString* ToString();
    // public override System.String ToString(System.Boolean verbose)
    // Offset: 0x1846698
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Certificate
    // Base method: System.String X509Certificate::ToString(System.Boolean verbose)
    ::Il2CppString* ToString(bool verbose);
  }; // System.Security.Cryptography.X509Certificates.X509Certificate2
  #pragma pack(pop)
  static check_size<sizeof(X509Certificate2), 48 + sizeof(::Il2CppString*)> __System_Security_Cryptography_X509Certificates_X509Certificate2SizeCheck;
  static_assert(sizeof(X509Certificate2) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509Certificate2*, "System.Security.Cryptography.X509Certificates", "X509Certificate2");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2::get_Impl
// Il2CppName: get_Impl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509Certificate2Impl* (System::Security::Cryptography::X509Certificates::X509Certificate2::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2::get_Impl)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2*), "get_Impl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2::get_Extensions
// Il2CppName: get_Extensions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509ExtensionCollection* (System::Security::Cryptography::X509Certificates::X509Certificate2::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2::get_Extensions)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2*), "get_Extensions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2::get_IssuerName
// Il2CppName: get_IssuerName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X500DistinguishedName* (System::Security::Cryptography::X509Certificates::X509Certificate2::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2::get_IssuerName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2*), "get_IssuerName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2::get_NotAfter
// Il2CppName: get_NotAfter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (System::Security::Cryptography::X509Certificates::X509Certificate2::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2::get_NotAfter)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2*), "get_NotAfter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2::get_NotBefore
// Il2CppName: get_NotBefore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (System::Security::Cryptography::X509Certificates::X509Certificate2::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2::get_NotBefore)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2*), "get_NotBefore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2::get_PrivateKey
// Il2CppName: get_PrivateKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::AsymmetricAlgorithm* (System::Security::Cryptography::X509Certificates::X509Certificate2::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2::get_PrivateKey)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2*), "get_PrivateKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2::set_PrivateKey
// Il2CppName: set_PrivateKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509Certificate2::*)(System::Security::Cryptography::AsymmetricAlgorithm*)>(&System::Security::Cryptography::X509Certificates::X509Certificate2::set_PrivateKey)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "AsymmetricAlgorithm")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2*), "set_PrivateKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2::get_PublicKey
// Il2CppName: get_PublicKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::PublicKey* (System::Security::Cryptography::X509Certificates::X509Certificate2::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2::get_PublicKey)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2*), "get_PublicKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2::get_SerialNumber
// Il2CppName: get_SerialNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Security::Cryptography::X509Certificates::X509Certificate2::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2::get_SerialNumber)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2*), "get_SerialNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2::get_SignatureAlgorithm
// Il2CppName: get_SignatureAlgorithm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::Oid* (System::Security::Cryptography::X509Certificates::X509Certificate2::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2::get_SignatureAlgorithm)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2*), "get_SignatureAlgorithm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2::get_SubjectName
// Il2CppName: get_SubjectName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X500DistinguishedName* (System::Security::Cryptography::X509Certificates::X509Certificate2::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2::get_SubjectName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2*), "get_SubjectName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2::get_Thumbprint
// Il2CppName: get_Thumbprint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Security::Cryptography::X509Certificates::X509Certificate2::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2::get_Thumbprint)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2*), "get_Thumbprint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2::get_Version
// Il2CppName: get_Version
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::X509Certificates::X509Certificate2::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2::get_Version)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2*), "get_Version", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2::GetNameInfo
// Il2CppName: GetNameInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Security::Cryptography::X509Certificates::X509Certificate2::*)(System::Security::Cryptography::X509Certificates::X509NameType, bool)>(&System::Security::Cryptography::X509Certificates::X509Certificate2::GetNameInfo)> {
  const MethodInfo* get() {
    static auto* nameType = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509NameType")->byval_arg;
    static auto* forIssuer = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2*), "GetNameInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nameType, forIssuer});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2::AppendBuffer
// Il2CppName: AppendBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Text::StringBuilder*, ::Array<uint8_t>*)>(&System::Security::Cryptography::X509Certificates::X509Certificate2::AppendBuffer)> {
  const MethodInfo* get() {
    static auto* sb = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2*), "AppendBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sb, buffer});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2::Verify
// Il2CppName: Verify
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::X509Certificates::X509Certificate2::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2::Verify)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2*), "Verify", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2::get_MonoCertificate
// Il2CppName: get_MonoCertificate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Security::X509::X509Certificate* (System::Security::Cryptography::X509Certificates::X509Certificate2::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2::get_MonoCertificate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2*), "get_MonoCertificate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2::Import
// Il2CppName: Import
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509Certificate2::*)(::Array<uint8_t>*, ::Il2CppString*, System::Security::Cryptography::X509Certificates::X509KeyStorageFlags)>(&System::Security::Cryptography::X509Certificates::X509Certificate2::Import)> {
  const MethodInfo* get() {
    static auto* rawData = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* password = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* keyStorageFlags = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509KeyStorageFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2*), "Import", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rawData, password, keyStorageFlags});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2::Import
// Il2CppName: Import
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509Certificate2::*)(::Il2CppString*, ::Il2CppString*, System::Security::Cryptography::X509Certificates::X509KeyStorageFlags)>(&System::Security::Cryptography::X509Certificates::X509Certificate2::Import)> {
  const MethodInfo* get() {
    static auto* fileName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* password = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* keyStorageFlags = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509KeyStorageFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2*), "Import", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fileName, password, keyStorageFlags});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509Certificate2::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2::Reset)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Security::Cryptography::X509Certificates::X509Certificate2::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2::ToString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Security::Cryptography::X509Certificates::X509Certificate2::*)(bool)>(&System::Security::Cryptography::X509Certificates::X509Certificate2::ToString)> {
  const MethodInfo* get() {
    static auto* verbose = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{verbose});
  }
};
