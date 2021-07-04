// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: ServerCertValidationCallback
  class ServerCertValidationCallback;
}
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Certificate
  class X509Certificate;
  // Forward declaring type: X509Chain
  class X509Chain;
}
// Forward declaring namespace: Mono::Security::Interface
namespace Mono::Security::Interface {
  // Forward declaring type: MonoSslPolicyErrors
  struct MonoSslPolicyErrors;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: Mono.Net.Security
namespace Mono::Net::Security {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Net.Security.ServerCertValidationCallbackWrapper
  class ServerCertValidationCallbackWrapper : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: ServerCertValidationCallbackWrapper
    ServerCertValidationCallbackWrapper() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x15F502C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ServerCertValidationCallbackWrapper* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Net::Security::ServerCertValidationCallbackWrapper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ServerCertValidationCallbackWrapper*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(System.Net.ServerCertValidationCallback callback, System.Security.Cryptography.X509Certificates.X509Certificate certificate, System.Security.Cryptography.X509Certificates.X509Chain chain, Mono.Security.Interface.MonoSslPolicyErrors sslPolicyErrors)
    // Offset: 0x15F013C
    bool Invoke(System::Net::ServerCertValidationCallback* callback, System::Security::Cryptography::X509Certificates::X509Certificate* certificate, System::Security::Cryptography::X509Certificates::X509Chain* chain, Mono::Security::Interface::MonoSslPolicyErrors sslPolicyErrors);
    // public System.IAsyncResult BeginInvoke(System.Net.ServerCertValidationCallback callback, System.Security.Cryptography.X509Certificates.X509Certificate certificate, System.Security.Cryptography.X509Certificates.X509Chain chain, Mono.Security.Interface.MonoSslPolicyErrors sslPolicyErrors, System.AsyncCallback __callback, System.Object object)
    // Offset: 0x15F503C
    System::IAsyncResult* BeginInvoke(System::Net::ServerCertValidationCallback* callback, System::Security::Cryptography::X509Certificates::X509Certificate* certificate, System::Security::Cryptography::X509Certificates::X509Chain* chain, Mono::Security::Interface::MonoSslPolicyErrors sslPolicyErrors, System::AsyncCallback* __callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(System.IAsyncResult result)
    // Offset: 0x15F50EC
    bool EndInvoke(System::IAsyncResult* result);
  }; // Mono.Net.Security.ServerCertValidationCallbackWrapper
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::Security::ServerCertValidationCallbackWrapper*, "Mono.Net.Security", "ServerCertValidationCallbackWrapper");
// Writing includes for template specializations
#include "System/Net/ServerCertValidationCallback.hpp"
#include "System/Security/Cryptography/X509Certificates/X509Certificate.hpp"
#include "System/Security/Cryptography/X509Certificates/X509Chain.hpp"
#include "Mono/Security/Interface/MonoSslPolicyErrors.hpp"
#include "System/AsyncCallback.hpp"
#include "System/IAsyncResult.hpp"
// Writing MetadataGetter for method: Mono::Net::Security::ServerCertValidationCallbackWrapper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Net::Security::ServerCertValidationCallbackWrapper::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Net::Security::ServerCertValidationCallbackWrapper::*)(System::Net::ServerCertValidationCallback*, System::Security::Cryptography::X509Certificates::X509Certificate*, System::Security::Cryptography::X509Certificates::X509Chain*, Mono::Security::Interface::MonoSslPolicyErrors)>(&Mono::Net::Security::ServerCertValidationCallbackWrapper::Invoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::ServerCertValidationCallbackWrapper*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Net::ServerCertValidationCallback*>(), ::il2cpp_utils::ExtractIndependentType<System::Security::Cryptography::X509Certificates::X509Certificate*>(), ::il2cpp_utils::ExtractIndependentType<System::Security::Cryptography::X509Certificates::X509Chain*>(), ::il2cpp_utils::ExtractIndependentType<Mono::Security::Interface::MonoSslPolicyErrors>()});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::ServerCertValidationCallbackWrapper::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Mono::Net::Security::ServerCertValidationCallbackWrapper::*)(System::Net::ServerCertValidationCallback*, System::Security::Cryptography::X509Certificates::X509Certificate*, System::Security::Cryptography::X509Certificates::X509Chain*, Mono::Security::Interface::MonoSslPolicyErrors, System::AsyncCallback*, ::Il2CppObject*)>(&Mono::Net::Security::ServerCertValidationCallbackWrapper::BeginInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::ServerCertValidationCallbackWrapper*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Net::ServerCertValidationCallback*>(), ::il2cpp_utils::ExtractIndependentType<System::Security::Cryptography::X509Certificates::X509Certificate*>(), ::il2cpp_utils::ExtractIndependentType<System::Security::Cryptography::X509Certificates::X509Chain*>(), ::il2cpp_utils::ExtractIndependentType<Mono::Security::Interface::MonoSslPolicyErrors>(), ::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::ServerCertValidationCallbackWrapper::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Net::Security::ServerCertValidationCallbackWrapper::*)(System::IAsyncResult*)>(&Mono::Net::Security::ServerCertValidationCallbackWrapper::EndInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::ServerCertValidationCallbackWrapper*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
  }
};
