// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.IAuthenticationModule
#include "System/Net/IAuthenticationModule.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Http
namespace Mono::Http {
  // Forward declaring type: NtlmSession
  class NtlmSession;
}
// Forward declaring namespace: System::Runtime::CompilerServices
namespace System::Runtime::CompilerServices {
  // Forward declaring type: ConditionalWeakTable`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class ConditionalWeakTable_2;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: HttpWebRequest
  class HttpWebRequest;
  // Forward declaring type: Authorization
  class Authorization;
  // Forward declaring type: WebRequest
  class WebRequest;
  // Forward declaring type: ICredentials
  class ICredentials;
}
// Completed forward declares
// Type namespace: Mono.Http
namespace Mono::Http {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Http.NtlmClient
  class NtlmClient : public ::Il2CppObject/*, public System::Net::IAuthenticationModule*/ {
    public:
    // Nested type: Mono::Http::NtlmClient::$$c
    class $$c;
    // Creating value type constructor for type: NtlmClient
    NtlmClient() noexcept {}
    // Creating interface conversion operator: operator System::Net::IAuthenticationModule
    operator System::Net::IAuthenticationModule() noexcept {
      return *reinterpret_cast<System::Net::IAuthenticationModule*>(this);
    }
    // Get static field: static private readonly System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Net.HttpWebRequest,Mono.Http.NtlmSession> cache
    static System::Runtime::CompilerServices::ConditionalWeakTable_2<System::Net::HttpWebRequest*, Mono::Http::NtlmSession*>* _get_cache();
    // Set static field: static private readonly System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Net.HttpWebRequest,Mono.Http.NtlmSession> cache
    static void _set_cache(System::Runtime::CompilerServices::ConditionalWeakTable_2<System::Net::HttpWebRequest*, Mono::Http::NtlmSession*>* value);
    // public System.Net.Authorization Authenticate(System.String challenge, System.Net.WebRequest webRequest, System.Net.ICredentials credentials)
    // Offset: 0x15E8AA0
    System::Net::Authorization* Authenticate(::Il2CppString* challenge, System::Net::WebRequest* webRequest, System::Net::ICredentials* credentials);
    // public System.Net.Authorization PreAuthenticate(System.Net.WebRequest webRequest, System.Net.ICredentials credentials)
    // Offset: 0x15E91F8
    System::Net::Authorization* PreAuthenticate(System::Net::WebRequest* webRequest, System::Net::ICredentials* credentials);
    // public System.String get_AuthenticationType()
    // Offset: 0x15E9200
    ::Il2CppString* get_AuthenticationType();
    // static private System.Void .cctor()
    // Offset: 0x15E9250
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x15E9248
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NtlmClient* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Http::NtlmClient::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NtlmClient*, creationType>()));
    }
  }; // Mono.Http.NtlmClient
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Http::NtlmClient*, "Mono.Http", "NtlmClient");
// Writing includes for template specializations
#include "System/Net/WebRequest.hpp"
#include "System/Net/ICredentials.hpp"
// Writing MetadataGetter for method: Mono::Http::NtlmClient::Authenticate
// Il2CppName: Authenticate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Authorization* (Mono::Http::NtlmClient::*)(::Il2CppString*, System::Net::WebRequest*, System::Net::ICredentials*)>(&Mono::Http::NtlmClient::Authenticate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Http::NtlmClient*), "Authenticate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<System::Net::WebRequest*>(), ::il2cpp_utils::ExtractIndependentType<System::Net::ICredentials*>()});
  }
};
// Writing MetadataGetter for method: Mono::Http::NtlmClient::PreAuthenticate
// Il2CppName: PreAuthenticate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Authorization* (Mono::Http::NtlmClient::*)(System::Net::WebRequest*, System::Net::ICredentials*)>(&Mono::Http::NtlmClient::PreAuthenticate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Http::NtlmClient*), "PreAuthenticate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Net::WebRequest*>(), ::il2cpp_utils::ExtractIndependentType<System::Net::ICredentials*>()});
  }
};
// Writing MetadataGetter for method: Mono::Http::NtlmClient::get_AuthenticationType
// Il2CppName: get_AuthenticationType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Mono::Http::NtlmClient::*)()>(&Mono::Http::NtlmClient::get_AuthenticationType)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Http::NtlmClient*), "get_AuthenticationType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Http::NtlmClient::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Mono::Http::NtlmClient::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Http::NtlmClient*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Http::NtlmClient::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
