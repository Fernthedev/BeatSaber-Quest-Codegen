#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(X509ChainPolicy)
namespace System {
struct TimeSpan;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509RevocationMode;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateCollection;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509RevocationFlag;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509VerificationFlags;
}
namespace System {
struct DateTime;
}
namespace System::Security::Cryptography {
class OidCollection;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2Collection;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class X509ChainPolicy;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::X509Certificates::X509ChainPolicy);
// Type: System.Security.Cryptography.X509Certificates::X509ChainPolicy
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9008))
// CS Name: ::System.Security.Cryptography.X509Certificates::X509ChainPolicy*
class CORDL_TYPE X509ChainPolicy : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::System::Object)]{};

/// @brief Field apps offset 0x10
 __declspec(property(get=__get_apps, put=__set_apps)) ::System::Security::Cryptography::OidCollection*  apps;

/// @brief Field cert offset 0x18
 __declspec(property(get=__get_cert, put=__set_cert)) ::System::Security::Cryptography::OidCollection*  cert;

/// @brief Field store offset 0x20
 __declspec(property(get=__get_store, put=__set_store)) ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*  store;

/// @brief Field store2 offset 0x28
 __declspec(property(get=__get_store2, put=__set_store2)) ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*  store2;

/// @brief Field rflag offset 0x30
 __declspec(property(get=__get_rflag, put=__set_rflag)) ::System::Security::Cryptography::X509Certificates::X509RevocationFlag  rflag;

/// @brief Field mode offset 0x34
 __declspec(property(get=__get_mode, put=__set_mode)) ::System::Security::Cryptography::X509Certificates::X509RevocationMode  mode;

/// @brief Field timeout offset 0x38
 __declspec(property(get=__get_timeout, put=__set_timeout)) ::System::TimeSpan  timeout;

/// @brief Field vflags offset 0x40
 __declspec(property(get=__get_vflags, put=__set_vflags)) ::System::Security::Cryptography::X509Certificates::X509VerificationFlags  vflags;

/// @brief Field vtime offset 0x48
 __declspec(property(get=__get_vtime, put=__set_vtime)) ::System::DateTime  vtime;

 __declspec(property(get=get_ExtraStore)) ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*  ExtraStore;

 __declspec(property(get=get_RevocationFlag, put=set_RevocationFlag)) ::System::Security::Cryptography::X509Certificates::X509RevocationFlag  RevocationFlag;

 __declspec(property(get=get_RevocationMode, put=set_RevocationMode)) ::System::Security::Cryptography::X509Certificates::X509RevocationMode  RevocationMode;

 __declspec(property(put=set_UrlRetrievalTimeout)) ::System::TimeSpan  UrlRetrievalTimeout;

 __declspec(property(get=get_VerificationFlags, put=set_VerificationFlags)) ::System::Security::Cryptography::X509Certificates::X509VerificationFlags  VerificationFlags;

 __declspec(property(get=get_VerificationTime, put=set_VerificationTime)) ::System::DateTime  VerificationTime;

constexpr void __set_apps(::System::Security::Cryptography::OidCollection*  value) ;

constexpr ::System::Security::Cryptography::OidCollection* __get_apps() ;

constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::OidCollection*> __get_apps() const;

constexpr void __set_cert(::System::Security::Cryptography::OidCollection*  value) ;

constexpr ::System::Security::Cryptography::OidCollection* __get_cert() ;

constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::OidCollection*> __get_cert() const;

constexpr void __set_store(::System::Security::Cryptography::X509Certificates::X509CertificateCollection*  value) ;

constexpr ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* __get_store() ;

constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*> __get_store() const;

constexpr void __set_store2(::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*  value) ;

constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* __get_store2() ;

constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*> __get_store2() const;

constexpr void __set_rflag(::System::Security::Cryptography::X509Certificates::X509RevocationFlag  value) ;

constexpr ::System::Security::Cryptography::X509Certificates::X509RevocationFlag& __get_rflag() ;

constexpr ::System::Security::Cryptography::X509Certificates::X509RevocationFlag const& __get_rflag() const;

constexpr void __set_mode(::System::Security::Cryptography::X509Certificates::X509RevocationMode  value) ;

constexpr ::System::Security::Cryptography::X509Certificates::X509RevocationMode& __get_mode() ;

constexpr ::System::Security::Cryptography::X509Certificates::X509RevocationMode const& __get_mode() const;

constexpr void __set_timeout(::System::TimeSpan  value) ;

constexpr ::System::TimeSpan& __get_timeout() ;

constexpr ::System::TimeSpan const& __get_timeout() const;

constexpr void __set_vflags(::System::Security::Cryptography::X509Certificates::X509VerificationFlags  value) ;

constexpr ::System::Security::Cryptography::X509Certificates::X509VerificationFlags& __get_vflags() ;

constexpr ::System::Security::Cryptography::X509Certificates::X509VerificationFlags const& __get_vflags() const;

constexpr void __set_vtime(::System::DateTime  value) ;

constexpr ::System::DateTime& __get_vtime() ;

constexpr ::System::DateTime const& __get_vtime() const;

static inline ::System::Security::Cryptography::X509Certificates::X509ChainPolicy* New_ctor() ;

/// @brief Method .ctor addr 0x2980a88 size 0x1c virtual false final false
inline void _ctor() ;

/// @brief Method get_ExtraStore addr 0x29819e0 size 0x26c virtual false final false
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* get_ExtraStore() ;

/// @brief Method get_RevocationFlag addr 0x2983aec size 0x8 virtual false final false
inline ::System::Security::Cryptography::X509Certificates::X509RevocationFlag get_RevocationFlag() ;

/// @brief Method set_RevocationFlag addr 0x2983af4 size 0x64 virtual false final false
inline void set_RevocationFlag(::System::Security::Cryptography::X509Certificates::X509RevocationFlag  value) ;

/// @brief Method get_RevocationMode addr 0x2983b58 size 0x8 virtual false final false
inline ::System::Security::Cryptography::X509Certificates::X509RevocationMode get_RevocationMode() ;

/// @brief Method set_RevocationMode addr 0x2983b60 size 0x64 virtual false final false
inline void set_RevocationMode(::System::Security::Cryptography::X509Certificates::X509RevocationMode  value) ;

/// @brief Method set_UrlRetrievalTimeout addr 0x2983bc4 size 0x8 virtual false final false
inline void set_UrlRetrievalTimeout(::System::TimeSpan  value) ;

/// @brief Method get_VerificationFlags addr 0x2983bcc size 0x8 virtual false final false
inline ::System::Security::Cryptography::X509Certificates::X509VerificationFlags get_VerificationFlags() ;

/// @brief Method set_VerificationFlags addr 0x2983bd4 size 0x64 virtual false final false
inline void set_VerificationFlags(::System::Security::Cryptography::X509Certificates::X509VerificationFlags  value) ;

/// @brief Method get_VerificationTime addr 0x2983c38 size 0x8 virtual false final false
inline ::System::DateTime get_VerificationTime() ;

/// @brief Method set_VerificationTime addr 0x2983c40 size 0x8 virtual false final false
inline void set_VerificationTime(::System::DateTime  value) ;

/// @brief Method Reset addr 0x29839f8 size 0xf4 virtual false final false
inline void Reset() ;

// Ctor Parameters [CppParam { name: "", ty: "X509ChainPolicy", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X509ChainPolicy(X509ChainPolicy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X509ChainPolicy", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X509ChainPolicy(X509ChainPolicy const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 X509ChainPolicy()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::X509Certificates::X509ChainPolicy, 0x50>, "Size mismatch!");

} // namespace end def System::Security::Cryptography::X509Certificates
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X509ChainPolicy);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509ChainPolicy*, "System.Security.Cryptography.X509Certificates", "X509ChainPolicy");
