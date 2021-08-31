// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: HttpListenerRequest
  class HttpListenerRequest;
  // Forward declaring type: HttpListenerResponse
  class HttpListenerResponse;
  // Forward declaring type: HttpConnection
  class HttpConnection;
  // Forward declaring type: HttpListener
  class HttpListener;
  // Forward declaring type: AuthenticationSchemes
  struct AuthenticationSchemes;
}
// Forward declaring namespace: System::Security::Principal
namespace System::Security::Principal {
  // Forward declaring type: IPrincipal
  class IPrincipal;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.HttpListenerContext
  // [TokenAttribute] Offset: FFFFFFFF
  class HttpListenerContext : public ::Il2CppObject {
    public:
    // private System.Net.HttpListenerRequest request
    // Size: 0x8
    // Offset: 0x10
    System::Net::HttpListenerRequest* request;
    // Field size check
    static_assert(sizeof(System::Net::HttpListenerRequest*) == 0x8);
    // private System.Net.HttpListenerResponse response
    // Size: 0x8
    // Offset: 0x18
    System::Net::HttpListenerResponse* response;
    // Field size check
    static_assert(sizeof(System::Net::HttpListenerResponse*) == 0x8);
    // private System.Security.Principal.IPrincipal user
    // Size: 0x8
    // Offset: 0x20
    System::Security::Principal::IPrincipal* user;
    // Field size check
    static_assert(sizeof(System::Security::Principal::IPrincipal*) == 0x8);
    // private System.Net.HttpConnection cnc
    // Size: 0x8
    // Offset: 0x28
    System::Net::HttpConnection* cnc;
    // Field size check
    static_assert(sizeof(System::Net::HttpConnection*) == 0x8);
    // private System.String error
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* error;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Int32 err_status
    // Size: 0x4
    // Offset: 0x38
    int err_status;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: err_status and: Listener
    char __padding5[0x4] = {};
    // System.Net.HttpListener Listener
    // Size: 0x8
    // Offset: 0x40
    System::Net::HttpListener* Listener;
    // Field size check
    static_assert(sizeof(System::Net::HttpListener*) == 0x8);
    // Creating value type constructor for type: HttpListenerContext
    HttpListenerContext(System::Net::HttpListenerRequest* request_ = {}, System::Net::HttpListenerResponse* response_ = {}, System::Security::Principal::IPrincipal* user_ = {}, System::Net::HttpConnection* cnc_ = {}, ::Il2CppString* error_ = {}, int err_status_ = {}, System::Net::HttpListener* Listener_ = {}) noexcept : request{request_}, response{response_}, user{user_}, cnc{cnc_}, error{error_}, err_status{err_status_}, Listener{Listener_} {}
    // Get instance field reference: private System.Net.HttpListenerRequest request
    System::Net::HttpListenerRequest*& dyn_request();
    // Get instance field reference: private System.Net.HttpListenerResponse response
    System::Net::HttpListenerResponse*& dyn_response();
    // Get instance field reference: private System.Security.Principal.IPrincipal user
    System::Security::Principal::IPrincipal*& dyn_user();
    // Get instance field reference: private System.Net.HttpConnection cnc
    System::Net::HttpConnection*& dyn_cnc();
    // Get instance field reference: private System.String error
    ::Il2CppString*& dyn_error();
    // Get instance field reference: private System.Int32 err_status
    int& dyn_err_status();
    // Get instance field reference: System.Net.HttpListener Listener
    System::Net::HttpListener*& dyn_Listener();
    // System.Int32 get_ErrorStatus()
    // Offset: 0x1670448
    int get_ErrorStatus();
    // System.Void set_ErrorStatus(System.Int32 value)
    // Offset: 0x1670450
    void set_ErrorStatus(int value);
    // System.String get_ErrorMessage()
    // Offset: 0x1670458
    ::Il2CppString* get_ErrorMessage();
    // System.Void set_ErrorMessage(System.String value)
    // Offset: 0x1670460
    void set_ErrorMessage(::Il2CppString* value);
    // System.Boolean get_HaveError()
    // Offset: 0x166B70C
    bool get_HaveError();
    // System.Net.HttpConnection get_Connection()
    // Offset: 0x1670468
    System::Net::HttpConnection* get_Connection();
    // public System.Net.HttpListenerRequest get_Request()
    // Offset: 0x1670470
    System::Net::HttpListenerRequest* get_Request();
    // public System.Net.HttpListenerResponse get_Response()
    // Offset: 0x1670478
    System::Net::HttpListenerResponse* get_Response();
    // System.Void .ctor(System.Net.HttpConnection cnc)
    // Offset: 0x166A478
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpListenerContext* New_ctor(System::Net::HttpConnection* cnc) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::HttpListenerContext::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpListenerContext*, creationType>(cnc)));
    }
    // System.Void ParseAuthentication(System.Net.AuthenticationSchemes expectedSchemes)
    // Offset: 0x166FD4C
    void ParseAuthentication(System::Net::AuthenticationSchemes expectedSchemes);
    // System.Security.Principal.IPrincipal ParseBasicAuthentication(System.String authData)
    // Offset: 0x1670480
    System::Security::Principal::IPrincipal* ParseBasicAuthentication(::Il2CppString* authData);
  }; // System.Net.HttpListenerContext
  #pragma pack(pop)
  static check_size<sizeof(HttpListenerContext), 64 + sizeof(System::Net::HttpListener*)> __System_Net_HttpListenerContextSizeCheck;
  static_assert(sizeof(HttpListenerContext) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::HttpListenerContext*, "System.Net", "HttpListenerContext");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::HttpListenerContext::get_ErrorStatus
// Il2CppName: get_ErrorStatus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::HttpListenerContext::*)()>(&System::Net::HttpListenerContext::get_ErrorStatus)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerContext*), "get_ErrorStatus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerContext::set_ErrorStatus
// Il2CppName: set_ErrorStatus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpListenerContext::*)(int)>(&System::Net::HttpListenerContext::set_ErrorStatus)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerContext*), "set_ErrorStatus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerContext::get_ErrorMessage
// Il2CppName: get_ErrorMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::HttpListenerContext::*)()>(&System::Net::HttpListenerContext::get_ErrorMessage)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerContext*), "get_ErrorMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerContext::set_ErrorMessage
// Il2CppName: set_ErrorMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpListenerContext::*)(::Il2CppString*)>(&System::Net::HttpListenerContext::set_ErrorMessage)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerContext*), "set_ErrorMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerContext::get_HaveError
// Il2CppName: get_HaveError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::HttpListenerContext::*)()>(&System::Net::HttpListenerContext::get_HaveError)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerContext*), "get_HaveError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerContext::get_Connection
// Il2CppName: get_Connection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::HttpConnection* (System::Net::HttpListenerContext::*)()>(&System::Net::HttpListenerContext::get_Connection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerContext*), "get_Connection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerContext::get_Request
// Il2CppName: get_Request
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::HttpListenerRequest* (System::Net::HttpListenerContext::*)()>(&System::Net::HttpListenerContext::get_Request)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerContext*), "get_Request", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerContext::get_Response
// Il2CppName: get_Response
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::HttpListenerResponse* (System::Net::HttpListenerContext::*)()>(&System::Net::HttpListenerContext::get_Response)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerContext*), "get_Response", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerContext::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::HttpListenerContext::ParseAuthentication
// Il2CppName: ParseAuthentication
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpListenerContext::*)(System::Net::AuthenticationSchemes)>(&System::Net::HttpListenerContext::ParseAuthentication)> {
  static const MethodInfo* get() {
    static auto* expectedSchemes = &::il2cpp_utils::GetClassFromName("System.Net", "AuthenticationSchemes")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerContext*), "ParseAuthentication", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{expectedSchemes});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerContext::ParseBasicAuthentication
// Il2CppName: ParseBasicAuthentication
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Principal::IPrincipal* (System::Net::HttpListenerContext::*)(::Il2CppString*)>(&System::Net::HttpListenerContext::ParseBasicAuthentication)> {
  static const MethodInfo* get() {
    static auto* authData = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerContext*), "ParseBasicAuthentication", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{authData});
  }
};
