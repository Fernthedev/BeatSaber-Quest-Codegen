// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.IDeserializationCallback
#include "System/Runtime/Serialization/IDeserializationCallback.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509CertificateImpl
  class X509CertificateImpl;
  // Forward declaring type: X509KeyStorageFlags
  struct X509KeyStorageFlags;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509Certificate
  // [ComVisibleAttribute] Offset: D7DBD8
  // [MonoTODOAttribute] Offset: D7DBD8
  class X509Certificate : public ::Il2CppObject/*, public System::Runtime::Serialization::IDeserializationCallback, public System::Runtime::Serialization::ISerializable, public System::IDisposable*/ {
    public:
    // private System.Security.Cryptography.X509Certificates.X509CertificateImpl impl
    // Size: 0x8
    // Offset: 0x10
    System::Security::Cryptography::X509Certificates::X509CertificateImpl* impl;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::X509Certificates::X509CertificateImpl*) == 0x8);
    // private System.Boolean hideDates
    // Size: 0x1
    // Offset: 0x18
    bool hideDates;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hideDates and: issuer_name
    char __padding1[0x7] = {};
    // private System.String issuer_name
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* issuer_name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String subject_name
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* subject_name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: X509Certificate
    X509Certificate(System::Security::Cryptography::X509Certificates::X509CertificateImpl* impl_ = {}, bool hideDates_ = {}, ::Il2CppString* issuer_name_ = {}, ::Il2CppString* subject_name_ = {}) noexcept : impl{impl_}, hideDates{hideDates_}, issuer_name{issuer_name_}, subject_name{subject_name_} {}
    // Creating interface conversion operator: operator System::Runtime::Serialization::IDeserializationCallback
    operator System::Runtime::Serialization::IDeserializationCallback() noexcept {
      return *reinterpret_cast<System::Runtime::Serialization::IDeserializationCallback*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::Serialization::ISerializable
    operator System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<System::Runtime::Serialization::ISerializable*>(this);
    }
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // System.Void .ctor(System.Byte[] data, System.Boolean dates)
    // Offset: 0x1AF076C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509Certificate* New_ctor(::Array<uint8_t>* data, bool dates) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::X509Certificates::X509Certificate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509Certificate*, creationType>(data, dates)));
    }
    // public System.Void .ctor(System.Byte[] data)
    // Offset: 0x1AF07D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509Certificate* New_ctor(::Array<uint8_t>* data) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::X509Certificates::X509Certificate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509Certificate*, creationType>(data)));
    }
    // System.Void .ctor(System.Security.Cryptography.X509Certificates.X509CertificateImpl impl)
    // Offset: 0x1AF07D8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509Certificate* New_ctor(System::Security::Cryptography::X509Certificates::X509CertificateImpl* impl) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::X509Certificates::X509Certificate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509Certificate*, creationType>(impl)));
    }
    // public System.Void .ctor(System.Security.Cryptography.X509Certificates.X509Certificate cert)
    // Offset: 0x1AF0950
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509Certificate* New_ctor(System::Security::Cryptography::X509Certificates::X509Certificate* cert) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::X509Certificates::X509Certificate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509Certificate*, creationType>(cert)));
    }
    // System.Void ImportHandle(System.Security.Cryptography.X509Certificates.X509CertificateImpl impl)
    // Offset: 0x1AF0AD8
    void ImportHandle(System::Security::Cryptography::X509Certificates::X509CertificateImpl* impl);
    // System.Security.Cryptography.X509Certificates.X509CertificateImpl get_Impl()
    // Offset: 0x1AF0B10
    System::Security::Cryptography::X509Certificates::X509CertificateImpl* get_Impl();
    // System.Boolean get_IsValid()
    // Offset: 0x1AF0BA4
    bool get_IsValid();
    // public System.Boolean Equals(System.Security.Cryptography.X509Certificates.X509Certificate other)
    // Offset: 0x1AF0BD0
    bool Equals(System::Security::Cryptography::X509Certificates::X509Certificate* other);
    // public System.Byte[] GetCertHash()
    // Offset: 0x1AF0CC8
    ::Array<uint8_t>* GetCertHash();
    // public System.String GetCertHashString()
    // Offset: 0x1AF0D38
    ::Il2CppString* GetCertHashString();
    // public System.Byte[] GetRawCertData()
    // Offset: 0x1AF0EB4
    ::Array<uint8_t>* GetRawCertData();
    // public System.Byte[] GetSerialNumber()
    // Offset: 0x1AF0EEC
    ::Array<uint8_t>* GetSerialNumber();
    // public System.String GetSerialNumberString()
    // Offset: 0x1AF0F28
    ::Il2CppString* GetSerialNumberString();
    // public System.String ToString(System.Boolean fVerbose)
    // Offset: 0x1AF0F98
    ::Il2CppString* ToString(bool fVerbose);
    // public System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1AF1008
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509Certificate* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::X509Certificates::X509Certificate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509Certificate*, creationType>(info, context)));
    }
    // public System.String get_Issuer()
    // Offset: 0x1AF1108
    ::Il2CppString* get_Issuer();
    // public System.String get_Subject()
    // Offset: 0x1AF1154
    ::Il2CppString* get_Subject();
    // public System.Void Import(System.Byte[] rawData, System.String password, System.Security.Cryptography.X509Certificates.X509KeyStorageFlags keyStorageFlags)
    // Offset: 0x1AF1248
    void Import(::Array<uint8_t>* rawData, ::Il2CppString* password, System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags);
    // public System.Void Import(System.String fileName, System.String password, System.Security.Cryptography.X509Certificates.X509KeyStorageFlags keyStorageFlags)
    // Offset: 0x1AF13C4
    void Import(::Il2CppString* fileName, ::Il2CppString* password, System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags);
    // private System.Void System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object sender)
    // Offset: 0x1AF1418
    void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::Il2CppObject* sender);
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1AF141C
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public System.Void Dispose()
    // Offset: 0x1AF14E4
    void Dispose();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x1AF14F8
    void Dispose(bool disposing);
    // public System.Void Reset()
    // Offset: 0x1AF1510
    void Reset();
    // public override System.Int32 GetHashCode()
    // Offset: 0x1AF0E5C
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x1AF0F90
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // public System.Void .ctor()
    // Offset: 0x1AF1000
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509Certificate* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::X509Certificates::X509Certificate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509Certificate*, creationType>()));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1AF11A0
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
  }; // System.Security.Cryptography.X509Certificates.X509Certificate
  #pragma pack(pop)
  static check_size<sizeof(X509Certificate), 40 + sizeof(::Il2CppString*)> __System_Security_Cryptography_X509Certificates_X509CertificateSizeCheck;
  static_assert(sizeof(X509Certificate) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509Certificate*, "System.Security.Cryptography.X509Certificates", "X509Certificate");
// Writing includes for template specializations
#include "System/Security/Cryptography/X509Certificates/X509CertificateImpl.hpp"
#include "System/Runtime/Serialization/SerializationInfo.hpp"
#include "System/Security/Cryptography/X509Certificates/X509KeyStorageFlags.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate::ImportHandle
// Il2CppName: ImportHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509Certificate::*)(System::Security::Cryptography::X509Certificates::X509CertificateImpl*)>(&System::Security::Cryptography::X509Certificates::X509Certificate::ImportHandle)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate*), "ImportHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Security::Cryptography::X509Certificates::X509CertificateImpl*>()});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate::get_Impl
// Il2CppName: get_Impl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509CertificateImpl* (System::Security::Cryptography::X509Certificates::X509Certificate::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate::get_Impl)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate*), "get_Impl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate::get_IsValid
// Il2CppName: get_IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::X509Certificates::X509Certificate::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate::get_IsValid)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate*), "get_IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::X509Certificates::X509Certificate::*)(System::Security::Cryptography::X509Certificates::X509Certificate*)>(&System::Security::Cryptography::X509Certificates::X509Certificate::Equals)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Security::Cryptography::X509Certificates::X509Certificate*>()});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate::GetCertHash
// Il2CppName: GetCertHash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (System::Security::Cryptography::X509Certificates::X509Certificate::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate::GetCertHash)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate*), "GetCertHash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate::GetCertHashString
// Il2CppName: GetCertHashString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Security::Cryptography::X509Certificates::X509Certificate::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate::GetCertHashString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate*), "GetCertHashString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate::GetRawCertData
// Il2CppName: GetRawCertData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (System::Security::Cryptography::X509Certificates::X509Certificate::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate::GetRawCertData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate*), "GetRawCertData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate::GetSerialNumber
// Il2CppName: GetSerialNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (System::Security::Cryptography::X509Certificates::X509Certificate::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate::GetSerialNumber)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate*), "GetSerialNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate::GetSerialNumberString
// Il2CppName: GetSerialNumberString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Security::Cryptography::X509Certificates::X509Certificate::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate::GetSerialNumberString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate*), "GetSerialNumberString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Security::Cryptography::X509Certificates::X509Certificate::*)(bool)>(&System::Security::Cryptography::X509Certificates::X509Certificate::ToString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate::get_Issuer
// Il2CppName: get_Issuer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Security::Cryptography::X509Certificates::X509Certificate::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate::get_Issuer)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate*), "get_Issuer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate::get_Subject
// Il2CppName: get_Subject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Security::Cryptography::X509Certificates::X509Certificate::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate::get_Subject)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate*), "get_Subject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate::Import
// Il2CppName: Import
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509Certificate::*)(::Array<uint8_t>*, ::Il2CppString*, System::Security::Cryptography::X509Certificates::X509KeyStorageFlags)>(&System::Security::Cryptography::X509Certificates::X509Certificate::Import)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate*), "Import", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<System::Security::Cryptography::X509Certificates::X509KeyStorageFlags>()});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate::Import
// Il2CppName: Import
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509Certificate::*)(::Il2CppString*, ::Il2CppString*, System::Security::Cryptography::X509Certificates::X509KeyStorageFlags)>(&System::Security::Cryptography::X509Certificates::X509Certificate::Import)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate*), "Import", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<System::Security::Cryptography::X509Certificates::X509KeyStorageFlags>()});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization
// Il2CppName: System.Runtime.Serialization.IDeserializationCallback.OnDeserialization
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509Certificate::*)(::Il2CppObject*)>(&System::Security::Cryptography::X509Certificates::X509Certificate::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate*), "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate::System_Runtime_Serialization_ISerializable_GetObjectData
// Il2CppName: System.Runtime.Serialization.ISerializable.GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509Certificate::*)(System::Runtime::Serialization::SerializationInfo*, System::Runtime::Serialization::StreamingContext)>(&System::Security::Cryptography::X509Certificates::X509Certificate::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate*), "System.Runtime.Serialization.ISerializable.GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::SerializationInfo*>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::StreamingContext>()});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509Certificate::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate::Dispose)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509Certificate::*)(bool)>(&System::Security::Cryptography::X509Certificates::X509Certificate::Dispose)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509Certificate::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate::Reset)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::X509Certificates::X509Certificate::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate::GetHashCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Security::Cryptography::X509Certificates::X509Certificate::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate::ToString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::X509Certificates::X509Certificate::*)(::Il2CppObject*)>(&System::Security::Cryptography::X509Certificates::X509Certificate::Equals)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
