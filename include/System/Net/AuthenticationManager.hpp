// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: ICredentialPolicy
  class ICredentialPolicy;
  // Forward declaring type: Authorization
  class Authorization;
  // Forward declaring type: WebRequest
  class WebRequest;
  // Forward declaring type: ICredentials
  class ICredentials;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.AuthenticationManager
  class AuthenticationManager : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: AuthenticationManager
    AuthenticationManager() noexcept {}
    // Get static field: static private System.Collections.ArrayList modules
    static System::Collections::ArrayList* _get_modules();
    // Set static field: static private System.Collections.ArrayList modules
    static void _set_modules(System::Collections::ArrayList* value);
    // Get static field: static private System.Object locker
    static ::Il2CppObject* _get_locker();
    // Set static field: static private System.Object locker
    static void _set_locker(::Il2CppObject* value);
    // Get static field: static private System.Net.ICredentialPolicy credential_policy
    static System::Net::ICredentialPolicy* _get_credential_policy();
    // Set static field: static private System.Net.ICredentialPolicy credential_policy
    static void _set_credential_policy(System::Net::ICredentialPolicy* value);
    // static private System.Void EnsureModules()
    // Offset: 0x16A96B8
    static void EnsureModules();
    // static public System.Net.Authorization Authenticate(System.String challenge, System.Net.WebRequest request, System.Net.ICredentials credentials)
    // Offset: 0x16A98EC
    static System::Net::Authorization* Authenticate(::Il2CppString* challenge, System::Net::WebRequest* request, System::Net::ICredentials* credentials);
    // static private System.Net.Authorization DoAuthenticate(System.String challenge, System.Net.WebRequest request, System.Net.ICredentials credentials)
    // Offset: 0x16A99E8
    static System::Net::Authorization* DoAuthenticate(::Il2CppString* challenge, System::Net::WebRequest* request, System::Net::ICredentials* credentials);
    // static public System.Net.Authorization PreAuthenticate(System.Net.WebRequest request, System.Net.ICredentials credentials)
    // Offset: 0x16A9E40
    static System::Net::Authorization* PreAuthenticate(System::Net::WebRequest* request, System::Net::ICredentials* credentials);
    // static private System.Void .cctor()
    // Offset: 0x16AA2D4
    static void _cctor();
  }; // System.Net.AuthenticationManager
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::AuthenticationManager*, "System.Net", "AuthenticationManager");
// Writing includes for template specializations
#include "System/Net/WebRequest.hpp"
#include "System/Net/ICredentials.hpp"
// Writing MetadataGetter for method: System::Net::AuthenticationManager::EnsureModules
// Il2CppName: EnsureModules
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::AuthenticationManager::EnsureModules)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::AuthenticationManager*), "EnsureModules", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::AuthenticationManager::Authenticate
// Il2CppName: Authenticate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Authorization* (*)(::Il2CppString*, System::Net::WebRequest*, System::Net::ICredentials*)>(&System::Net::AuthenticationManager::Authenticate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::AuthenticationManager*), "Authenticate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<System::Net::WebRequest*>(), ::il2cpp_utils::ExtractIndependentType<System::Net::ICredentials*>()});
  }
};
// Writing MetadataGetter for method: System::Net::AuthenticationManager::DoAuthenticate
// Il2CppName: DoAuthenticate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Authorization* (*)(::Il2CppString*, System::Net::WebRequest*, System::Net::ICredentials*)>(&System::Net::AuthenticationManager::DoAuthenticate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::AuthenticationManager*), "DoAuthenticate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<System::Net::WebRequest*>(), ::il2cpp_utils::ExtractIndependentType<System::Net::ICredentials*>()});
  }
};
// Writing MetadataGetter for method: System::Net::AuthenticationManager::PreAuthenticate
// Il2CppName: PreAuthenticate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Authorization* (*)(System::Net::WebRequest*, System::Net::ICredentials*)>(&System::Net::AuthenticationManager::PreAuthenticate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::AuthenticationManager*), "PreAuthenticate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Net::WebRequest*>(), ::il2cpp_utils::ExtractIndependentType<System::Net::ICredentials*>()});
  }
};
// Writing MetadataGetter for method: System::Net::AuthenticationManager::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::AuthenticationManager::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::AuthenticationManager*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
