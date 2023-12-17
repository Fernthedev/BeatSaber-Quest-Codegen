#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Http/zzzz__HttpMessageHandler_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HttpClientHandler)
namespace System::Net::Http {
class __HttpClientHandler____c;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Net::Http {
class HttpResponseMessage;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateCollection;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace System {
struct TimeSpan;
}
namespace System {
class Object;
}
namespace System::Net::Http {
class IMonoHttpClientHandler;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Net::Http {
class HttpRequestMessage;
}
namespace System::Net::Http {
struct ClientCertificateOption;
}
namespace System::Net::Security {
class LocalCertificateSelectionCallback;
}
// Forward declare root types
namespace System::Net::Http {
class HttpClientHandler;
}
namespace System::Net::Http {
class __HttpClientHandler____c;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Http::HttpClientHandler);
MARK_REF_PTR_T(::System::Net::Http::__HttpClientHandler____c);
// Type: ::<>c
namespace System::Net::Http {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14633))
// CS Name: ::HttpClientHandler::<>c*
class CORDL_TYPE __HttpClientHandler____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::System::Net::Http::__HttpClientHandler____c*  value) ;

static inline ::System::Net::Http::__HttpClientHandler____c* getStaticF___9() ;

static inline void setStaticF___9__23_1(::System::Net::Security::LocalCertificateSelectionCallback*  value) ;

static inline ::System::Net::Security::LocalCertificateSelectionCallback* getStaticF___9__23_1() ;

static inline ::System::Net::Http::__HttpClientHandler____c* New_ctor() ;

/// @brief Method .ctor addr 0x282d0c8 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <set_ClientCertificateOptions>b__23_1 addr 0x282d0d0 size 0x8 virtual false final false
inline ::System::Security::Cryptography::X509Certificates::X509Certificate* _set_ClientCertificateOptions_b__23_1(::System::Object*  sender, ::StringW  targetHost, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*  localCertificates, ::System::Security::Cryptography::X509Certificates::X509Certificate*  remoteCertificate, ::ArrayW<::StringW,::Array<::StringW>*>  acceptableIssuers) ;

// Ctor Parameters [CppParam { name: "", ty: "__HttpClientHandler____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HttpClientHandler____c(__HttpClientHandler____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HttpClientHandler____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HttpClientHandler____c(__HttpClientHandler____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HttpClientHandler____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__23_1


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::__HttpClientHandler____c, 0x10>, "Size mismatch!");

} // namespace end def System::Net::Http
// Type: System.Net.Http::HttpClientHandler
namespace System::Net::Http {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14650))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14634))
// CS Name: ::System.Net.Http::HttpClientHandler*
class CORDL_TYPE HttpClientHandler : public ::System::Net::Http::HttpMessageHandler {
public:
// Declarations
using __c = ::System::Net::Http::__HttpClientHandler____c;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Net::Http::HttpMessageHandler)]{};

/// @brief Field _delegatingHandler offset 0x10
 __declspec(property(get=__get__delegatingHandler, put=__set__delegatingHandler)) ::System::Net::Http::IMonoHttpClientHandler*  _delegatingHandler;

/// @brief Field _clientCertificateOptions offset 0x18
 __declspec(property(get=__get__clientCertificateOptions, put=__set__clientCertificateOptions)) ::System::Net::Http::ClientCertificateOption  _clientCertificateOptions;

 __declspec(property(get=get_ClientCertificateOptions, put=set_ClientCertificateOptions)) ::System::Net::Http::ClientCertificateOption  ClientCertificateOptions;

 __declspec(property(get=get_ClientCertificates)) ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*  ClientCertificates;

constexpr void __set__delegatingHandler(::System::Net::Http::IMonoHttpClientHandler*  value) ;

constexpr ::System::Net::Http::IMonoHttpClientHandler* __get__delegatingHandler() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::IMonoHttpClientHandler*> __get__delegatingHandler() const;

constexpr void __set__clientCertificateOptions(::System::Net::Http::ClientCertificateOption  value) ;

constexpr ::System::Net::Http::ClientCertificateOption& __get__clientCertificateOptions() ;

constexpr ::System::Net::Http::ClientCertificateOption const& __get__clientCertificateOptions() const;

/// @brief Method CreateDefaultHandler addr 0x282c650 size 0x58 virtual false final false
static inline ::System::Net::Http::IMonoHttpClientHandler* CreateDefaultHandler() ;

static inline ::System::Net::Http::HttpClientHandler* New_ctor() ;

/// @brief Method .ctor addr 0x282c858 size 0x38 virtual false final false
inline void _ctor() ;

static inline ::System::Net::Http::HttpClientHandler* New_ctor(::System::Net::Http::IMonoHttpClientHandler*  handler) ;

/// @brief Method .ctor addr 0x282c890 size 0x30 virtual false final false
inline void _ctor(::System::Net::Http::IMonoHttpClientHandler*  handler) ;

/// @brief Method Dispose addr 0x282cb48 size 0xb4 virtual true final false
inline void Dispose(bool  disposing) ;

/// @brief Method ThrowForModifiedManagedSslOptionsIfStarted addr 0x282cc00 size 0x104 virtual false final false
inline void ThrowForModifiedManagedSslOptionsIfStarted() ;

/// @brief Method get_ClientCertificateOptions addr 0x282cd04 size 0x8 virtual false final false
inline ::System::Net::Http::ClientCertificateOption get_ClientCertificateOptions() ;

/// @brief Method set_ClientCertificateOptions addr 0x282c8c8 size 0x280 virtual false final false
inline void set_ClientCertificateOptions(::System::Net::Http::ClientCertificateOption  value) ;

/// @brief Method get_ClientCertificates addr 0x282cd0c size 0x1dc virtual false final false
inline ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* get_ClientCertificates() ;

/// @brief Method SetWebRequestTimeout addr 0x282cee8 size 0xac virtual false final false
inline void SetWebRequestTimeout(::System::TimeSpan  timeout) ;

/// @brief Method SendAsync addr 0x282cf94 size 0xbc virtual true final false
inline ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* SendAsync(::System::Net::Http::HttpRequestMessage*  request, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method <set_ClientCertificateOptions>b__23_0 addr 0x282d050 size 0x14 virtual false final false
inline ::System::Security::Cryptography::X509Certificates::X509Certificate* _set_ClientCertificateOptions_b__23_0(::System::Object*  sender, ::StringW  targetHost, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*  localCertificates, ::System::Security::Cryptography::X509Certificates::X509Certificate*  remoteCertificate, ::ArrayW<::StringW,::Array<::StringW>*>  acceptableIssuers) ;

// Ctor Parameters [CppParam { name: "", ty: "HttpClientHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HttpClientHandler(HttpClientHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HttpClientHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HttpClientHandler(HttpClientHandler const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HttpClientHandler()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::HttpClientHandler, 0x20>, "Size mismatch!");

} // namespace end def System::Net::Http
NEED_NO_BOX(::System::Net::Http::HttpClientHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::HttpClientHandler*, "System.Net.Http", "HttpClientHandler");
NEED_NO_BOX(::System::Net::Http::__HttpClientHandler____c);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::__HttpClientHandler____c*, "System.Net.Http", "HttpClientHandler/<>c");
