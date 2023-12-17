#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ServerCertValidationCallback)
namespace System::Security::Cryptography::X509Certificates {
class X509Chain;
}
namespace System::Threading {
class ExecutionContext;
}
namespace System {
class Object;
}
namespace System::Net::Security {
class RemoteCertificateValidationCallback;
}
namespace System::Net {
class __ServerCertValidationCallback__CallbackContext;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace System::Net::Security {
struct SslPolicyErrors;
}
// Forward declare root types
namespace System::Net {
class ServerCertValidationCallback;
}
namespace System::Net {
class __ServerCertValidationCallback__CallbackContext;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::ServerCertValidationCallback);
MARK_REF_PTR_T(::System::Net::__ServerCertValidationCallback__CallbackContext);
// Type: ::CallbackContext
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9146))
// CS Name: ::ServerCertValidationCallback::CallbackContext*
class CORDL_TYPE __ServerCertValidationCallback__CallbackContext : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field request offset 0x10
 __declspec(property(get=__get_request, put=__set_request)) ::System::Object*  request;

/// @brief Field certificate offset 0x18
 __declspec(property(get=__get_certificate, put=__set_certificate)) ::System::Security::Cryptography::X509Certificates::X509Certificate*  certificate;

/// @brief Field chain offset 0x20
 __declspec(property(get=__get_chain, put=__set_chain)) ::System::Security::Cryptography::X509Certificates::X509Chain*  chain;

/// @brief Field sslPolicyErrors offset 0x28
 __declspec(property(get=__get_sslPolicyErrors, put=__set_sslPolicyErrors)) ::System::Net::Security::SslPolicyErrors  sslPolicyErrors;

/// @brief Field result offset 0x2c
 __declspec(property(get=__get_result, put=__set_result)) bool  result;

constexpr void __set_request(::System::Object*  value) ;

constexpr ::System::Object* __get_request() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get_request() const;

constexpr void __set_certificate(::System::Security::Cryptography::X509Certificates::X509Certificate*  value) ;

constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate* __get_certificate() ;

constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X509Certificate*> __get_certificate() const;

constexpr void __set_chain(::System::Security::Cryptography::X509Certificates::X509Chain*  value) ;

constexpr ::System::Security::Cryptography::X509Certificates::X509Chain* __get_chain() ;

constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X509Chain*> __get_chain() const;

constexpr void __set_sslPolicyErrors(::System::Net::Security::SslPolicyErrors  value) ;

constexpr ::System::Net::Security::SslPolicyErrors& __get_sslPolicyErrors() ;

constexpr ::System::Net::Security::SslPolicyErrors const& __get_sslPolicyErrors() const;

constexpr void __set_result(bool  value) ;

constexpr bool& __get_result() ;

constexpr bool const& __get_result() const;

static inline ::System::Net::__ServerCertValidationCallback__CallbackContext* New_ctor(::System::Object*  request, ::System::Security::Cryptography::X509Certificates::X509Certificate*  certificate, ::System::Security::Cryptography::X509Certificates::X509Chain*  chain, ::System::Net::Security::SslPolicyErrors  sslPolicyErrors) ;

/// @brief Method .ctor addr 0x29baad4 size 0x44 virtual false final false
inline void _ctor(::System::Object*  request, ::System::Security::Cryptography::X509Certificates::X509Certificate*  certificate, ::System::Security::Cryptography::X509Certificates::X509Chain*  chain, ::System::Net::Security::SslPolicyErrors  sslPolicyErrors) ;

// Ctor Parameters [CppParam { name: "", ty: "__ServerCertValidationCallback__CallbackContext", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ServerCertValidationCallback__CallbackContext(__ServerCertValidationCallback__CallbackContext && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ServerCertValidationCallback__CallbackContext", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ServerCertValidationCallback__CallbackContext(__ServerCertValidationCallback__CallbackContext const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ServerCertValidationCallback__CallbackContext()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__ServerCertValidationCallback__CallbackContext, 0x30>, "Size mismatch!");

} // namespace end def System::Net
// Type: System.Net::ServerCertValidationCallback
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9147))
// CS Name: ::System.Net::ServerCertValidationCallback*
class CORDL_TYPE ServerCertValidationCallback : public ::System::Object {
public:
// Declarations
using CallbackContext = ::System::Net::__ServerCertValidationCallback__CallbackContext;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field m_ValidationCallback offset 0x10
 __declspec(property(get=__get_m_ValidationCallback, put=__set_m_ValidationCallback)) ::System::Net::Security::RemoteCertificateValidationCallback*  m_ValidationCallback;

/// @brief Field m_Context offset 0x18
 __declspec(property(get=__get_m_Context, put=__set_m_Context)) ::System::Threading::ExecutionContext*  m_Context;

 __declspec(property(get=get_ValidationCallback)) ::System::Net::Security::RemoteCertificateValidationCallback*  ValidationCallback;

constexpr void __set_m_ValidationCallback(::System::Net::Security::RemoteCertificateValidationCallback*  value) ;

constexpr ::System::Net::Security::RemoteCertificateValidationCallback* __get_m_ValidationCallback() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::Security::RemoteCertificateValidationCallback*> __get_m_ValidationCallback() const;

constexpr void __set_m_Context(::System::Threading::ExecutionContext*  value) ;

constexpr ::System::Threading::ExecutionContext* __get_m_Context() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::ExecutionContext*> __get_m_Context() const;

static inline ::System::Net::ServerCertValidationCallback* New_ctor(::System::Net::Security::RemoteCertificateValidationCallback*  validationCallback) ;

/// @brief Method .ctor addr 0x29ba840 size 0x78 virtual false final false
inline void _ctor(::System::Net::Security::RemoteCertificateValidationCallback*  validationCallback) ;

/// @brief Method get_ValidationCallback addr 0x29ba8b8 size 0x8 virtual false final false
inline ::System::Net::Security::RemoteCertificateValidationCallback* get_ValidationCallback() ;

/// @brief Method Callback addr 0x29ba8c0 size 0xac virtual false final false
inline void Callback(::System::Object*  state) ;

/// @brief Method Invoke addr 0x29ba96c size 0x168 virtual false final false
inline bool Invoke(::System::Object*  request, ::System::Security::Cryptography::X509Certificates::X509Certificate*  certificate, ::System::Security::Cryptography::X509Certificates::X509Chain*  chain, ::System::Net::Security::SslPolicyErrors  sslPolicyErrors) ;

// Ctor Parameters [CppParam { name: "", ty: "ServerCertValidationCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ServerCertValidationCallback(ServerCertValidationCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ServerCertValidationCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ServerCertValidationCallback(ServerCertValidationCallback const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ServerCertValidationCallback()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::ServerCertValidationCallback, 0x20>, "Size mismatch!");

} // namespace end def System::Net
NEED_NO_BOX(::System::Net::ServerCertValidationCallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::ServerCertValidationCallback*, "System.Net", "ServerCertValidationCallback");
NEED_NO_BOX(::System::Net::__ServerCertValidationCallback__CallbackContext);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__ServerCertValidationCallback__CallbackContext*, "System.Net", "ServerCertValidationCallback/CallbackContext");
