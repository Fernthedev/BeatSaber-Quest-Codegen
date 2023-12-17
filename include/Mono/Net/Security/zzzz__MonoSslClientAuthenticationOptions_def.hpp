#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Net/Security/zzzz__MonoSslAuthenticationOptions_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MonoSslClientAuthenticationOptions)
namespace System::Net::Security {
struct EncryptionPolicy;
}
namespace System::Net::Security {
class SslClientAuthenticationOptions;
}
namespace System::Security::Authentication {
struct SslProtocols;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509RevocationMode;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateCollection;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
// Forward declare root types
namespace Mono::Net::Security {
class MonoSslClientAuthenticationOptions;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Net::Security::MonoSslClientAuthenticationOptions);
// Type: Mono.Net.Security::MonoSslClientAuthenticationOptions
namespace Mono::Net::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8839))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8840))
// CS Name: ::Mono.Net.Security::MonoSslClientAuthenticationOptions*
class CORDL_TYPE MonoSslClientAuthenticationOptions : public ::Mono::Net::Security::MonoSslAuthenticationOptions {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::Mono::Net::Security::MonoSslAuthenticationOptions)]{};

/// @brief Field <Options>k__BackingField offset 0x18
 __declspec(property(get=__get__Options_k__BackingField, put=__set__Options_k__BackingField)) ::System::Net::Security::SslClientAuthenticationOptions*  _Options_k__BackingField;

 __declspec(property(get=get_Options)) ::System::Net::Security::SslClientAuthenticationOptions*  Options;

 __declspec(property(get=get_ServerMode)) bool  ServerMode;

 __declspec(property(put=set_CertificateRevocationCheckMode)) ::System::Security::Cryptography::X509Certificates::X509RevocationMode  CertificateRevocationCheckMode;

 __declspec(property(put=set_EncryptionPolicy)) ::System::Net::Security::EncryptionPolicy  EncryptionPolicy;

 __declspec(property(get=get_EnabledSslProtocols, put=set_EnabledSslProtocols)) ::System::Security::Authentication::SslProtocols  EnabledSslProtocols;

 __declspec(property(get=get_TargetHost, put=set_TargetHost)) ::StringW  TargetHost;

 __declspec(property(get=get_ClientCertificateRequired, put=set_ClientCertificateRequired)) bool  ClientCertificateRequired;

 __declspec(property(get=get_ClientCertificates, put=set_ClientCertificates)) ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*  ClientCertificates;

 __declspec(property(get=get_ServerCertificate, put=set_ServerCertificate)) ::System::Security::Cryptography::X509Certificates::X509Certificate*  ServerCertificate;

constexpr void __set__Options_k__BackingField(::System::Net::Security::SslClientAuthenticationOptions*  value) ;

constexpr ::System::Net::Security::SslClientAuthenticationOptions* __get__Options_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::Security::SslClientAuthenticationOptions*> __get__Options_k__BackingField() const;

/// @brief Method get_Options addr 0x2823f94 size 0x8 virtual false final false
inline ::System::Net::Security::SslClientAuthenticationOptions* get_Options() ;

/// @brief Method get_ServerMode addr 0x2823f9c size 0x8 virtual true final false
inline bool get_ServerMode() ;

static inline ::Mono::Net::Security::MonoSslClientAuthenticationOptions* New_ctor() ;

/// @brief Method .ctor addr 0x282130c size 0x6c virtual false final false
inline void _ctor() ;

/// @brief Method set_CertificateRevocationCheckMode addr 0x2823fa4 size 0x1c virtual true final false
inline void set_CertificateRevocationCheckMode(::System::Security::Cryptography::X509Certificates::X509RevocationMode  value) ;

/// @brief Method set_EncryptionPolicy addr 0x2823fc0 size 0x1c virtual true final false
inline void set_EncryptionPolicy(::System::Net::Security::EncryptionPolicy  value) ;

/// @brief Method get_EnabledSslProtocols addr 0x2823fdc size 0x1c virtual true final false
inline ::System::Security::Authentication::SslProtocols get_EnabledSslProtocols() ;

/// @brief Method set_EnabledSslProtocols addr 0x2823ff8 size 0x1c virtual true final false
inline void set_EnabledSslProtocols(::System::Security::Authentication::SslProtocols  value) ;

/// @brief Method get_TargetHost addr 0x2824014 size 0x1c virtual true final false
inline ::StringW get_TargetHost() ;

/// @brief Method set_TargetHost addr 0x2824030 size 0x1c virtual true final false
inline void set_TargetHost(::StringW  value) ;

/// @brief Method get_ClientCertificateRequired addr 0x282404c size 0x40 virtual true final false
inline bool get_ClientCertificateRequired() ;

/// @brief Method set_ClientCertificateRequired addr 0x282408c size 0x40 virtual true final false
inline void set_ClientCertificateRequired(bool  value) ;

/// @brief Method get_ClientCertificates addr 0x28240cc size 0x1c virtual true final false
inline ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* get_ClientCertificates() ;

/// @brief Method set_ClientCertificates addr 0x28240e8 size 0x1c virtual true final false
inline void set_ClientCertificates(::System::Security::Cryptography::X509Certificates::X509CertificateCollection*  value) ;

/// @brief Method get_ServerCertificate addr 0x2824104 size 0x40 virtual true final false
inline ::System::Security::Cryptography::X509Certificates::X509Certificate* get_ServerCertificate() ;

/// @brief Method set_ServerCertificate addr 0x2824144 size 0x40 virtual true final false
inline void set_ServerCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "MonoSslClientAuthenticationOptions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoSslClientAuthenticationOptions(MonoSslClientAuthenticationOptions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoSslClientAuthenticationOptions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoSslClientAuthenticationOptions(MonoSslClientAuthenticationOptions const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MonoSslClientAuthenticationOptions()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Net::Security::MonoSslClientAuthenticationOptions, 0x20>, "Size mismatch!");

} // namespace end def Mono::Net::Security
NEED_NO_BOX(::Mono::Net::Security::MonoSslClientAuthenticationOptions);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::Security::MonoSslClientAuthenticationOptions*, "Mono.Net.Security", "MonoSslClientAuthenticationOptions");
