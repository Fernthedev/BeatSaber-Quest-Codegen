#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SslClientAuthenticationOptions)
namespace System::Net::Security {
struct EncryptionPolicy;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509RevocationMode;
}
namespace System::Security::Authentication {
struct SslProtocols;
}
namespace System::Net::Security {
class LocalCertificateSelectionCallback;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateCollection;
}
// Forward declare root types
namespace System::Net::Security {
class SslClientAuthenticationOptions;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Security::SslClientAuthenticationOptions);
// Type: System.Net.Security::SslClientAuthenticationOptions
namespace System::Net::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9362))
// CS Name: ::System.Net.Security::SslClientAuthenticationOptions*
class CORDL_TYPE SslClientAuthenticationOptions : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Object)]{};

/// @brief Field _encryptionPolicy offset 0x10
 __declspec(property(get=__get__encryptionPolicy, put=__set__encryptionPolicy)) ::System::Net::Security::EncryptionPolicy  _encryptionPolicy;

/// @brief Field _checkCertificateRevocation offset 0x14
 __declspec(property(get=__get__checkCertificateRevocation, put=__set__checkCertificateRevocation)) ::System::Security::Cryptography::X509Certificates::X509RevocationMode  _checkCertificateRevocation;

/// @brief Field _enabledSslProtocols offset 0x18
 __declspec(property(get=__get__enabledSslProtocols, put=__set__enabledSslProtocols)) ::System::Security::Authentication::SslProtocols  _enabledSslProtocols;

/// @brief Field _allowRenegotiation offset 0x1c
 __declspec(property(get=__get__allowRenegotiation, put=__set__allowRenegotiation)) bool  _allowRenegotiation;

/// @brief Field <LocalCertificateSelectionCallback>k__BackingField offset 0x20
 __declspec(property(get=__get__LocalCertificateSelectionCallback_k__BackingField, put=__set__LocalCertificateSelectionCallback_k__BackingField)) ::System::Net::Security::LocalCertificateSelectionCallback*  _LocalCertificateSelectionCallback_k__BackingField;

/// @brief Field <TargetHost>k__BackingField offset 0x28
 __declspec(property(get=__get__TargetHost_k__BackingField, put=__set__TargetHost_k__BackingField)) ::StringW  _TargetHost_k__BackingField;

/// @brief Field <ClientCertificates>k__BackingField offset 0x30
 __declspec(property(get=__get__ClientCertificates_k__BackingField, put=__set__ClientCertificates_k__BackingField)) ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*  _ClientCertificates_k__BackingField;

 __declspec(property(put=set_LocalCertificateSelectionCallback)) ::System::Net::Security::LocalCertificateSelectionCallback*  LocalCertificateSelectionCallback;

 __declspec(property(get=get_TargetHost, put=set_TargetHost)) ::StringW  TargetHost;

 __declspec(property(get=get_ClientCertificates, put=set_ClientCertificates)) ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*  ClientCertificates;

 __declspec(property(put=set_CertificateRevocationCheckMode)) ::System::Security::Cryptography::X509Certificates::X509RevocationMode  CertificateRevocationCheckMode;

 __declspec(property(put=set_EncryptionPolicy)) ::System::Net::Security::EncryptionPolicy  EncryptionPolicy;

 __declspec(property(get=get_EnabledSslProtocols, put=set_EnabledSslProtocols)) ::System::Security::Authentication::SslProtocols  EnabledSslProtocols;

constexpr void __set__encryptionPolicy(::System::Net::Security::EncryptionPolicy  value) ;

constexpr ::System::Net::Security::EncryptionPolicy& __get__encryptionPolicy() ;

constexpr ::System::Net::Security::EncryptionPolicy const& __get__encryptionPolicy() const;

constexpr void __set__checkCertificateRevocation(::System::Security::Cryptography::X509Certificates::X509RevocationMode  value) ;

constexpr ::System::Security::Cryptography::X509Certificates::X509RevocationMode& __get__checkCertificateRevocation() ;

constexpr ::System::Security::Cryptography::X509Certificates::X509RevocationMode const& __get__checkCertificateRevocation() const;

constexpr void __set__enabledSslProtocols(::System::Security::Authentication::SslProtocols  value) ;

constexpr ::System::Security::Authentication::SslProtocols& __get__enabledSslProtocols() ;

constexpr ::System::Security::Authentication::SslProtocols const& __get__enabledSslProtocols() const;

constexpr void __set__allowRenegotiation(bool  value) ;

constexpr bool& __get__allowRenegotiation() ;

constexpr bool const& __get__allowRenegotiation() const;

constexpr void __set__LocalCertificateSelectionCallback_k__BackingField(::System::Net::Security::LocalCertificateSelectionCallback*  value) ;

constexpr ::System::Net::Security::LocalCertificateSelectionCallback* __get__LocalCertificateSelectionCallback_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::Security::LocalCertificateSelectionCallback*> __get__LocalCertificateSelectionCallback_k__BackingField() const;

constexpr void __set__TargetHost_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__TargetHost_k__BackingField() ;

constexpr ::StringW const& __get__TargetHost_k__BackingField() const;

constexpr void __set__ClientCertificates_k__BackingField(::System::Security::Cryptography::X509Certificates::X509CertificateCollection*  value) ;

constexpr ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* __get__ClientCertificates_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*> __get__ClientCertificates_k__BackingField() const;

/// @brief Method set_LocalCertificateSelectionCallback addr 0x28ff454 size 0x8 virtual false final false
inline void set_LocalCertificateSelectionCallback(::System::Net::Security::LocalCertificateSelectionCallback*  value) ;

/// @brief Method get_TargetHost addr 0x28ff45c size 0x8 virtual false final false
inline ::StringW get_TargetHost() ;

/// @brief Method set_TargetHost addr 0x28ff464 size 0x8 virtual false final false
inline void set_TargetHost(::StringW  value) ;

/// @brief Method get_ClientCertificates addr 0x28ff46c size 0x8 virtual false final false
inline ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* get_ClientCertificates() ;

/// @brief Method set_ClientCertificates addr 0x28ff474 size 0x8 virtual false final false
inline void set_ClientCertificates(::System::Security::Cryptography::X509Certificates::X509CertificateCollection*  value) ;

/// @brief Method set_CertificateRevocationCheckMode addr 0x28ff47c size 0xa0 virtual false final false
inline void set_CertificateRevocationCheckMode(::System::Security::Cryptography::X509Certificates::X509RevocationMode  value) ;

/// @brief Method set_EncryptionPolicy addr 0x28ff51c size 0xa0 virtual false final false
inline void set_EncryptionPolicy(::System::Net::Security::EncryptionPolicy  value) ;

/// @brief Method get_EnabledSslProtocols addr 0x28ff5bc size 0x8 virtual false final false
inline ::System::Security::Authentication::SslProtocols get_EnabledSslProtocols() ;

/// @brief Method set_EnabledSslProtocols addr 0x28ff5c4 size 0x8 virtual false final false
inline void set_EnabledSslProtocols(::System::Security::Authentication::SslProtocols  value) ;

static inline ::System::Net::Security::SslClientAuthenticationOptions* New_ctor() ;

/// @brief Method .ctor addr 0x28ff5cc size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SslClientAuthenticationOptions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SslClientAuthenticationOptions(SslClientAuthenticationOptions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SslClientAuthenticationOptions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SslClientAuthenticationOptions(SslClientAuthenticationOptions const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SslClientAuthenticationOptions()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Security::SslClientAuthenticationOptions, 0x38>, "Size mismatch!");

} // namespace end def System::Net::Security
NEED_NO_BOX(::System::Net::Security::SslClientAuthenticationOptions);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Security::SslClientAuthenticationOptions*, "System.Net.Security", "SslClientAuthenticationOptions");
