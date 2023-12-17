#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HttpListenerContext)
namespace System::Net {
class HttpListenerResponse;
}
namespace System::Security::Principal {
class IPrincipal;
}
namespace System::Net {
class HttpListenerRequest;
}
namespace System::Net {
class HttpListener;
}
namespace System::Net {
class HttpConnection;
}
namespace System::Net {
struct AuthenticationSchemes;
}
// Forward declare root types
namespace System::Net {
class HttpListenerContext;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::HttpListenerContext);
// Type: System.Net::HttpListenerContext
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9173))
// CS Name: ::System.Net::HttpListenerContext*
class CORDL_TYPE HttpListenerContext : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::System::Object)]{};

/// @brief Field request offset 0x10
 __declspec(property(get=__get_request, put=__set_request)) ::System::Net::HttpListenerRequest*  request;

/// @brief Field response offset 0x18
 __declspec(property(get=__get_response, put=__set_response)) ::System::Net::HttpListenerResponse*  response;

/// @brief Field user offset 0x20
 __declspec(property(get=__get_user, put=__set_user)) ::System::Security::Principal::IPrincipal*  user;

/// @brief Field cnc offset 0x28
 __declspec(property(get=__get_cnc, put=__set_cnc)) ::System::Net::HttpConnection*  cnc;

/// @brief Field error offset 0x30
 __declspec(property(get=__get_error, put=__set_error)) ::StringW  error;

/// @brief Field err_status offset 0x38
 __declspec(property(get=__get_err_status, put=__set_err_status)) int32_t  err_status;

/// @brief Field Listener offset 0x40
 __declspec(property(get=__get_Listener, put=__set_Listener)) ::System::Net::HttpListener*  Listener;

 __declspec(property(get=get_ErrorStatus, put=set_ErrorStatus)) int32_t  ErrorStatus;

 __declspec(property(get=get_ErrorMessage, put=set_ErrorMessage)) ::StringW  ErrorMessage;

 __declspec(property(get=get_HaveError)) bool  HaveError;

 __declspec(property(get=get_Connection)) ::System::Net::HttpConnection*  Connection;

 __declspec(property(get=get_Request)) ::System::Net::HttpListenerRequest*  Request;

 __declspec(property(get=get_Response)) ::System::Net::HttpListenerResponse*  Response;

constexpr void __set_request(::System::Net::HttpListenerRequest*  value) ;

constexpr ::System::Net::HttpListenerRequest* __get_request() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::HttpListenerRequest*> __get_request() const;

constexpr void __set_response(::System::Net::HttpListenerResponse*  value) ;

constexpr ::System::Net::HttpListenerResponse* __get_response() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::HttpListenerResponse*> __get_response() const;

constexpr void __set_user(::System::Security::Principal::IPrincipal*  value) ;

constexpr ::System::Security::Principal::IPrincipal* __get_user() ;

constexpr ::cordl_internals::to_const_pointer<::System::Security::Principal::IPrincipal*> __get_user() const;

constexpr void __set_cnc(::System::Net::HttpConnection*  value) ;

constexpr ::System::Net::HttpConnection* __get_cnc() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::HttpConnection*> __get_cnc() const;

constexpr void __set_error(::StringW  value) ;

constexpr ::StringW& __get_error() ;

constexpr ::StringW const& __get_error() const;

constexpr void __set_err_status(int32_t  value) ;

constexpr int32_t& __get_err_status() ;

constexpr int32_t const& __get_err_status() const;

constexpr void __set_Listener(::System::Net::HttpListener*  value) ;

constexpr ::System::Net::HttpListener* __get_Listener() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::HttpListener*> __get_Listener() const;

static inline ::System::Net::HttpListenerContext* New_ctor(::System::Net::HttpConnection*  cnc) ;

/// @brief Method .ctor addr 0x29c5014 size 0xb4 virtual false final false
inline void _ctor(::System::Net::HttpConnection*  cnc) ;

/// @brief Method get_ErrorStatus addr 0x29c9704 size 0x8 virtual false final false
inline int32_t get_ErrorStatus() ;

/// @brief Method set_ErrorStatus addr 0x29c970c size 0x8 virtual false final false
inline void set_ErrorStatus(int32_t  value) ;

/// @brief Method get_ErrorMessage addr 0x29c9714 size 0x8 virtual false final false
inline ::StringW get_ErrorMessage() ;

/// @brief Method set_ErrorMessage addr 0x29c971c size 0x8 virtual false final false
inline void set_ErrorMessage(::StringW  value) ;

/// @brief Method get_HaveError addr 0x29c5cc0 size 0x10 virtual false final false
inline bool get_HaveError() ;

/// @brief Method get_Connection addr 0x29c9724 size 0x8 virtual false final false
inline ::System::Net::HttpConnection* get_Connection() ;

/// @brief Method get_Request addr 0x29c972c size 0x8 virtual false final false
inline ::System::Net::HttpListenerRequest* get_Request() ;

/// @brief Method get_Response addr 0x29c9734 size 0x8 virtual false final false
inline ::System::Net::HttpListenerResponse* get_Response() ;

/// @brief Method ParseAuthentication addr 0x29c91b4 size 0x120 virtual false final false
inline void ParseAuthentication(::System::Net::AuthenticationSchemes  expectedSchemes) ;

/// @brief Method ParseBasicAuthentication addr 0x29c973c size 0x24c virtual false final false
inline ::System::Security::Principal::IPrincipal* ParseBasicAuthentication(::StringW  authData) ;

// Ctor Parameters [CppParam { name: "", ty: "HttpListenerContext", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HttpListenerContext(HttpListenerContext && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HttpListenerContext", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HttpListenerContext(HttpListenerContext const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HttpListenerContext()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::HttpListenerContext, 0x48>, "Size mismatch!");

} // namespace end def System::Net
NEED_NO_BOX(::System::Net::HttpListenerContext);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HttpListenerContext*, "System.Net", "HttpListenerContext");
