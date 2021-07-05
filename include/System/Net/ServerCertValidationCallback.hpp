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
// Forward declaring namespace: System::Net
namespace System::Net {
}
// Forward declaring namespace: System::Net::Security
namespace System::Net::Security {
  // Forward declaring type: RemoteCertificateValidationCallback
  class RemoteCertificateValidationCallback;
  // Forward declaring type: SslPolicyErrors
  struct SslPolicyErrors;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ExecutionContext
  class ExecutionContext;
}
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Certificate
  class X509Certificate;
  // Forward declaring type: X509Chain
  class X509Chain;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.ServerCertValidationCallback
  class ServerCertValidationCallback : public ::Il2CppObject {
    public:
    // Nested type: System::Net::ServerCertValidationCallback::CallbackContext
    class CallbackContext;
    // private readonly System.Net.Security.RemoteCertificateValidationCallback m_ValidationCallback
    // Size: 0x8
    // Offset: 0x10
    System::Net::Security::RemoteCertificateValidationCallback* m_ValidationCallback;
    // Field size check
    static_assert(sizeof(System::Net::Security::RemoteCertificateValidationCallback*) == 0x8);
    // private readonly System.Threading.ExecutionContext m_Context
    // Size: 0x8
    // Offset: 0x18
    System::Threading::ExecutionContext* m_Context;
    // Field size check
    static_assert(sizeof(System::Threading::ExecutionContext*) == 0x8);
    // Creating value type constructor for type: ServerCertValidationCallback
    ServerCertValidationCallback(System::Net::Security::RemoteCertificateValidationCallback* m_ValidationCallback_ = {}, System::Threading::ExecutionContext* m_Context_ = {}) noexcept : m_ValidationCallback{m_ValidationCallback_}, m_Context{m_Context_} {}
    // System.Void .ctor(System.Net.Security.RemoteCertificateValidationCallback validationCallback)
    // Offset: 0x14967D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ServerCertValidationCallback* New_ctor(System::Net::Security::RemoteCertificateValidationCallback* validationCallback) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::ServerCertValidationCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ServerCertValidationCallback*, creationType>(validationCallback)));
    }
    // System.Void Callback(System.Object state)
    // Offset: 0x1496858
    void Callback(::Il2CppObject* state);
    // System.Boolean Invoke(System.Object request, System.Security.Cryptography.X509Certificates.X509Certificate certificate, System.Security.Cryptography.X509Certificates.X509Chain chain, System.Net.Security.SslPolicyErrors sslPolicyErrors)
    // Offset: 0x1496908
    bool Invoke(::Il2CppObject* request, System::Security::Cryptography::X509Certificates::X509Certificate* certificate, System::Security::Cryptography::X509Certificates::X509Chain* chain, System::Net::Security::SslPolicyErrors sslPolicyErrors);
  }; // System.Net.ServerCertValidationCallback
  #pragma pack(pop)
  static check_size<sizeof(ServerCertValidationCallback), 24 + sizeof(System::Threading::ExecutionContext*)> __System_Net_ServerCertValidationCallbackSizeCheck;
  static_assert(sizeof(ServerCertValidationCallback) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::ServerCertValidationCallback*, "System.Net", "ServerCertValidationCallback");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::ServerCertValidationCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::ServerCertValidationCallback::Callback
// Il2CppName: Callback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ServerCertValidationCallback::*)(::Il2CppObject*)>(&System::Net::ServerCertValidationCallback::Callback)> {
  const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServerCertValidationCallback*), "Callback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
// Writing MetadataGetter for method: System::Net::ServerCertValidationCallback::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::ServerCertValidationCallback::*)(::Il2CppObject*, System::Security::Cryptography::X509Certificates::X509Certificate*, System::Security::Cryptography::X509Certificates::X509Chain*, System::Net::Security::SslPolicyErrors)>(&System::Net::ServerCertValidationCallback::Invoke)> {
  const MethodInfo* get() {
    static auto* request = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* certificate = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509Certificate")->byval_arg;
    static auto* chain = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509Chain")->byval_arg;
    static auto* sslPolicyErrors = &::il2cpp_utils::GetClassFromName("System.Net.Security", "SslPolicyErrors")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServerCertValidationCallback*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{request, certificate, chain, sslPolicyErrors});
  }
};
