// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Certificate
  class X509Certificate;
  // Forward declaring type: X509CertificateCollection
  class X509CertificateCollection;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.Net.Security
namespace System::Net::Security {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Security.LocalCertSelectionCallback
  // [TokenAttribute] Offset: FFFFFFFF
  class LocalCertSelectionCallback : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: LocalCertSelectionCallback
    LocalCertSelectionCallback() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x14A6C48
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalCertSelectionCallback* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Security::LocalCertSelectionCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalCertSelectionCallback*, creationType>(object, method)));
    }
    // public System.Security.Cryptography.X509Certificates.X509Certificate Invoke(System.String targetHost, System.Security.Cryptography.X509Certificates.X509CertificateCollection localCertificates, System.Security.Cryptography.X509Certificates.X509Certificate remoteCertificate, System.String[] acceptableIssuers)
    // Offset: 0x14A6C58
    System::Security::Cryptography::X509Certificates::X509Certificate* Invoke(::Il2CppString* targetHost, System::Security::Cryptography::X509Certificates::X509CertificateCollection* localCertificates, System::Security::Cryptography::X509Certificates::X509Certificate* remoteCertificate, ::Array<::Il2CppString*>* acceptableIssuers);
    // public System.IAsyncResult BeginInvoke(System.String targetHost, System.Security.Cryptography.X509Certificates.X509CertificateCollection localCertificates, System.Security.Cryptography.X509Certificates.X509Certificate remoteCertificate, System.String[] acceptableIssuers, System.AsyncCallback callback, System.Object object)
    // Offset: 0x14A7098
    System::IAsyncResult* BeginInvoke(::Il2CppString* targetHost, System::Security::Cryptography::X509Certificates::X509CertificateCollection* localCertificates, System::Security::Cryptography::X509Certificates::X509Certificate* remoteCertificate, ::Array<::Il2CppString*>* acceptableIssuers, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Security.Cryptography.X509Certificates.X509Certificate EndInvoke(System.IAsyncResult result)
    // Offset: 0x14A70CC
    System::Security::Cryptography::X509Certificates::X509Certificate* EndInvoke(System::IAsyncResult* result);
  }; // System.Net.Security.LocalCertSelectionCallback
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Security::LocalCertSelectionCallback*, "System.Net.Security", "LocalCertSelectionCallback");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Security::LocalCertSelectionCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Security::LocalCertSelectionCallback::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509Certificate* (System::Net::Security::LocalCertSelectionCallback::*)(::Il2CppString*, System::Security::Cryptography::X509Certificates::X509CertificateCollection*, System::Security::Cryptography::X509Certificates::X509Certificate*, ::Array<::Il2CppString*>*)>(&System::Net::Security::LocalCertSelectionCallback::Invoke)> {
  static const MethodInfo* get() {
    static auto* targetHost = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* localCertificates = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509CertificateCollection")->byval_arg;
    static auto* remoteCertificate = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509Certificate")->byval_arg;
    static auto* acceptableIssuers = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Security::LocalCertSelectionCallback*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetHost, localCertificates, remoteCertificate, acceptableIssuers});
  }
};
// Writing MetadataGetter for method: System::Net::Security::LocalCertSelectionCallback::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (System::Net::Security::LocalCertSelectionCallback::*)(::Il2CppString*, System::Security::Cryptography::X509Certificates::X509CertificateCollection*, System::Security::Cryptography::X509Certificates::X509Certificate*, ::Array<::Il2CppString*>*, System::AsyncCallback*, ::Il2CppObject*)>(&System::Net::Security::LocalCertSelectionCallback::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* targetHost = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* localCertificates = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509CertificateCollection")->byval_arg;
    static auto* remoteCertificate = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509Certificate")->byval_arg;
    static auto* acceptableIssuers = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Security::LocalCertSelectionCallback*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetHost, localCertificates, remoteCertificate, acceptableIssuers, callback, object});
  }
};
// Writing MetadataGetter for method: System::Net::Security::LocalCertSelectionCallback::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509Certificate* (System::Net::Security::LocalCertSelectionCallback::*)(System::IAsyncResult*)>(&System::Net::Security::LocalCertSelectionCallback::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Security::LocalCertSelectionCallback*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
