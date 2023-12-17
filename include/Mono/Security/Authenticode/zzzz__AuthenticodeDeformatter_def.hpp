#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Security/Authenticode/zzzz__AuthenticodeBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AuthenticodeDeformatter)
namespace Mono::Security::X509 {
class X509Certificate;
}
namespace Mono::Security {
class __PKCS7__SignerInfo;
}
namespace Mono::Security {
class __PKCS7__SignedData;
}
namespace System::Security::Cryptography {
class HashAlgorithm;
}
namespace System {
struct DateTime;
}
namespace Mono::Security::X509 {
class X509Chain;
}
namespace Mono::Security {
class ASN1;
}
namespace Mono::Security::X509 {
class X509CertificateCollection;
}
// Forward declare root types
namespace Mono::Security::Authenticode {
class AuthenticodeDeformatter;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::Authenticode::AuthenticodeDeformatter);
// Type: Mono.Security.Authenticode::AuthenticodeDeformatter
namespace Mono::Security::Authenticode {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13801))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13802))
// CS Name: ::Mono.Security.Authenticode::AuthenticodeDeformatter*
class CORDL_TYPE AuthenticodeDeformatter : public ::Mono::Security::Authenticode::AuthenticodeBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x98};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x98 - sizeof(::Mono::Security::Authenticode::AuthenticodeBase)]{};

/// @brief Field filename offset 0x40
 __declspec(property(get=__get_filename, put=__set_filename)) ::StringW  filename;

/// @brief Field rawdata offset 0x48
 __declspec(property(get=__get_rawdata, put=__set_rawdata)) ::ArrayW<uint8_t,::Array<uint8_t>*>  rawdata;

/// @brief Field hash offset 0x50
 __declspec(property(get=__get_hash, put=__set_hash)) ::ArrayW<uint8_t,::Array<uint8_t>*>  hash;

/// @brief Field coll offset 0x58
 __declspec(property(get=__get_coll, put=__set_coll)) ::Mono::Security::X509::X509CertificateCollection*  coll;

/// @brief Field signedHash offset 0x60
 __declspec(property(get=__get_signedHash, put=__set_signedHash)) ::Mono::Security::ASN1*  signedHash;

/// @brief Field timestamp offset 0x68
 __declspec(property(get=__get_timestamp, put=__set_timestamp)) ::System::DateTime  timestamp;

/// @brief Field signingCertificate offset 0x70
 __declspec(property(get=__get_signingCertificate, put=__set_signingCertificate)) ::Mono::Security::X509::X509Certificate*  signingCertificate;

/// @brief Field reason offset 0x78
 __declspec(property(get=__get_reason, put=__set_reason)) int32_t  reason;

/// @brief Field trustedRoot offset 0x7c
 __declspec(property(get=__get_trustedRoot, put=__set_trustedRoot)) bool  trustedRoot;

/// @brief Field trustedTimestampRoot offset 0x7d
 __declspec(property(get=__get_trustedTimestampRoot, put=__set_trustedTimestampRoot)) bool  trustedTimestampRoot;

/// @brief Field entry offset 0x80
 __declspec(property(get=__get_entry, put=__set_entry)) ::ArrayW<uint8_t,::Array<uint8_t>*>  entry;

/// @brief Field signerChain offset 0x88
 __declspec(property(get=__get_signerChain, put=__set_signerChain)) ::Mono::Security::X509::X509Chain*  signerChain;

/// @brief Field timestampChain offset 0x90
 __declspec(property(get=__get_timestampChain, put=__set_timestampChain)) ::Mono::Security::X509::X509Chain*  timestampChain;

 __declspec(property(put=set_RawData)) ::ArrayW<uint8_t,::Array<uint8_t>*>  RawData;

 __declspec(property(get=get_SigningCertificate)) ::Mono::Security::X509::X509Certificate*  SigningCertificate;

constexpr void __set_filename(::StringW  value) ;

constexpr ::StringW& __get_filename() ;

constexpr ::StringW const& __get_filename() const;

constexpr void __set_rawdata(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_rawdata() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_rawdata() const;

constexpr void __set_hash(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_hash() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_hash() const;

constexpr void __set_coll(::Mono::Security::X509::X509CertificateCollection*  value) ;

constexpr ::Mono::Security::X509::X509CertificateCollection* __get_coll() ;

constexpr ::cordl_internals::to_const_pointer<::Mono::Security::X509::X509CertificateCollection*> __get_coll() const;

constexpr void __set_signedHash(::Mono::Security::ASN1*  value) ;

constexpr ::Mono::Security::ASN1* __get_signedHash() ;

constexpr ::cordl_internals::to_const_pointer<::Mono::Security::ASN1*> __get_signedHash() const;

constexpr void __set_timestamp(::System::DateTime  value) ;

constexpr ::System::DateTime& __get_timestamp() ;

constexpr ::System::DateTime const& __get_timestamp() const;

constexpr void __set_signingCertificate(::Mono::Security::X509::X509Certificate*  value) ;

constexpr ::Mono::Security::X509::X509Certificate* __get_signingCertificate() ;

constexpr ::cordl_internals::to_const_pointer<::Mono::Security::X509::X509Certificate*> __get_signingCertificate() const;

constexpr void __set_reason(int32_t  value) ;

constexpr int32_t& __get_reason() ;

constexpr int32_t const& __get_reason() const;

constexpr void __set_trustedRoot(bool  value) ;

constexpr bool& __get_trustedRoot() ;

constexpr bool const& __get_trustedRoot() const;

constexpr void __set_trustedTimestampRoot(bool  value) ;

constexpr bool& __get_trustedTimestampRoot() ;

constexpr bool const& __get_trustedTimestampRoot() const;

constexpr void __set_entry(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_entry() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_entry() const;

constexpr void __set_signerChain(::Mono::Security::X509::X509Chain*  value) ;

constexpr ::Mono::Security::X509::X509Chain* __get_signerChain() ;

constexpr ::cordl_internals::to_const_pointer<::Mono::Security::X509::X509Chain*> __get_signerChain() const;

constexpr void __set_timestampChain(::Mono::Security::X509::X509Chain*  value) ;

constexpr ::Mono::Security::X509::X509Chain* __get_timestampChain() ;

constexpr ::cordl_internals::to_const_pointer<::Mono::Security::X509::X509Chain*> __get_timestampChain() const;

static inline ::Mono::Security::Authenticode::AuthenticodeDeformatter* New_ctor() ;

/// @brief Method .ctor addr 0x240ae30 size 0x8c virtual false final false
inline void _ctor() ;

static inline ::Mono::Security::Authenticode::AuthenticodeDeformatter* New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  rawData) ;

/// @brief Method .ctor addr 0x240aebc size 0x28 virtual false final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  rawData) ;

/// @brief Method set_RawData addr 0x240aee4 size 0xd0 virtual false final false
inline void set_RawData(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

/// @brief Method get_SigningCertificate addr 0x240b34c size 0x8 virtual false final false
inline ::Mono::Security::X509::X509Certificate* get_SigningCertificate() ;

/// @brief Method CheckSignature addr 0x240b058 size 0x2f4 virtual false final false
inline bool CheckSignature() ;

/// @brief Method CompareIssuerSerial addr 0x240bd9c size 0xf4 virtual false final false
inline bool CompareIssuerSerial(::StringW  issuer, ::ArrayW<uint8_t,::Array<uint8_t>*>  serial, ::Mono::Security::X509::X509Certificate*  x509) ;

/// @brief Method VerifySignature addr 0x240b354 size 0xa48 virtual false final false
inline bool VerifySignature(::Mono::Security::__PKCS7__SignedData*  sd, ::ArrayW<uint8_t,::Array<uint8_t>*>  calculatedMessageDigest, ::System::Security::Cryptography::HashAlgorithm*  ha) ;

/// @brief Method VerifyCounterSignature addr 0x240be90 size 0xa00 virtual false final false
inline bool VerifyCounterSignature(::Mono::Security::__PKCS7__SignerInfo*  cs, ::ArrayW<uint8_t,::Array<uint8_t>*>  signature) ;

/// @brief Method Reset addr 0x240afb4 size 0xa4 virtual false final false
inline void Reset() ;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticodeDeformatter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AuthenticodeDeformatter(AuthenticodeDeformatter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticodeDeformatter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AuthenticodeDeformatter(AuthenticodeDeformatter const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AuthenticodeDeformatter()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::Authenticode::AuthenticodeDeformatter, 0x98>, "Size mismatch!");

} // namespace end def Mono::Security::Authenticode
NEED_NO_BOX(::Mono::Security::Authenticode::AuthenticodeDeformatter);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Authenticode::AuthenticodeDeformatter*, "Mono.Security.Authenticode", "AuthenticodeDeformatter");
