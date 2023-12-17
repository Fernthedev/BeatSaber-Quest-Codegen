#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TimeStampToken)
namespace Org::BouncyCastle::Asn1::Cms {
class ContentInfo;
}
namespace Org::BouncyCastle::Cms {
class SignerID;
}
namespace Org::BouncyCastle::Cms {
class SignerInformation;
}
namespace Org::BouncyCastle::Tsp {
class __TimeStampToken__CertID;
}
namespace Org::BouncyCastle::X509::Store {
class IX509Store;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::Cms {
class CmsSignedData;
}
namespace Org::BouncyCastle::Asn1::Cms {
class AttributeTable;
}
namespace Org::BouncyCastle::Tsp {
class TimeStampTokenInfo;
}
namespace Org::BouncyCastle::Asn1::Ess {
class EssCertID;
}
namespace Org::BouncyCastle::Asn1::X509 {
class IssuerSerial;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1::Ess {
class EssCertIDv2;
}
// Forward declare root types
namespace Org::BouncyCastle::Tsp {
class TimeStampToken;
}
namespace Org::BouncyCastle::Tsp {
class __TimeStampToken__CertID;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Tsp::TimeStampToken);
MARK_REF_PTR_T(::Org::BouncyCastle::Tsp::__TimeStampToken__CertID);
// Type: ::CertID
namespace Org::BouncyCastle::Tsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1769))
// CS Name: ::TimeStampToken::CertID*
class CORDL_TYPE __TimeStampToken__CertID : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field certID offset 0x10
 __declspec(property(get=__get_certID, put=__set_certID)) ::Org::BouncyCastle::Asn1::Ess::EssCertID*  certID;

/// @brief Field certIDv2 offset 0x18
 __declspec(property(get=__get_certIDv2, put=__set_certIDv2)) ::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*  certIDv2;

 __declspec(property(get=get_IssuerSerial)) ::Org::BouncyCastle::Asn1::X509::IssuerSerial*  IssuerSerial;

constexpr void __set_certID(::Org::BouncyCastle::Asn1::Ess::EssCertID*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Ess::EssCertID* __get_certID() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Ess::EssCertID*> __get_certID() const;

constexpr void __set_certIDv2(::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Ess::EssCertIDv2* __get_certIDv2() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*> __get_certIDv2() const;

static inline ::Org::BouncyCastle::Tsp::__TimeStampToken__CertID* New_ctor(::Org::BouncyCastle::Asn1::Ess::EssCertID*  certID) ;

/// @brief Method .ctor addr 0x1152b58 size 0x28 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Ess::EssCertID*  certID) ;

static inline ::Org::BouncyCastle::Tsp::__TimeStampToken__CertID* New_ctor(::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*  certID) ;

/// @brief Method .ctor addr 0x1152b80 size 0x28 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*  certID) ;

/// @brief Method GetHashAlgorithmName addr 0x11532b0 size 0xf8 virtual false final false
inline ::StringW GetHashAlgorithmName() ;

/// @brief Method GetHashAlgorithm addr 0x11537f8 size 0xac virtual false final false
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* GetHashAlgorithm() ;

/// @brief Method GetCertHash addr 0x11533a8 size 0x34 virtual false final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetCertHash() ;

/// @brief Method get_IssuerSerial addr 0x11533dc size 0x30 virtual false final false
inline ::Org::BouncyCastle::Asn1::X509::IssuerSerial* get_IssuerSerial() ;

// Ctor Parameters [CppParam { name: "", ty: "__TimeStampToken__CertID", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TimeStampToken__CertID(__TimeStampToken__CertID && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TimeStampToken__CertID", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TimeStampToken__CertID(__TimeStampToken__CertID const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TimeStampToken__CertID()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Tsp::__TimeStampToken__CertID, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Tsp
// Type: Org.BouncyCastle.Tsp::TimeStampToken
namespace Org::BouncyCastle::Tsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1770))
// CS Name: ::Org.BouncyCastle.Tsp::TimeStampToken*
class CORDL_TYPE TimeStampToken : public ::System::Object {
public:
// Declarations
using CertID = ::Org::BouncyCastle::Tsp::__TimeStampToken__CertID;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field tsToken offset 0x10
 __declspec(property(get=__get_tsToken, put=__set_tsToken)) ::Org::BouncyCastle::Cms::CmsSignedData*  tsToken;

/// @brief Field tsaSignerInfo offset 0x18
 __declspec(property(get=__get_tsaSignerInfo, put=__set_tsaSignerInfo)) ::Org::BouncyCastle::Cms::SignerInformation*  tsaSignerInfo;

/// @brief Field tstInfo offset 0x20
 __declspec(property(get=__get_tstInfo, put=__set_tstInfo)) ::Org::BouncyCastle::Tsp::TimeStampTokenInfo*  tstInfo;

/// @brief Field certID offset 0x28
 __declspec(property(get=__get_certID, put=__set_certID)) ::Org::BouncyCastle::Tsp::__TimeStampToken__CertID*  certID;

 __declspec(property(get=get_TimeStampInfo)) ::Org::BouncyCastle::Tsp::TimeStampTokenInfo*  TimeStampInfo;

 __declspec(property(get=get_SignerID)) ::Org::BouncyCastle::Cms::SignerID*  SignerID;

 __declspec(property(get=get_SignedAttributes)) ::Org::BouncyCastle::Asn1::Cms::AttributeTable*  SignedAttributes;

 __declspec(property(get=get_UnsignedAttributes)) ::Org::BouncyCastle::Asn1::Cms::AttributeTable*  UnsignedAttributes;

constexpr void __set_tsToken(::Org::BouncyCastle::Cms::CmsSignedData*  value) ;

constexpr ::Org::BouncyCastle::Cms::CmsSignedData* __get_tsToken() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::CmsSignedData*> __get_tsToken() const;

constexpr void __set_tsaSignerInfo(::Org::BouncyCastle::Cms::SignerInformation*  value) ;

constexpr ::Org::BouncyCastle::Cms::SignerInformation* __get_tsaSignerInfo() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::SignerInformation*> __get_tsaSignerInfo() const;

constexpr void __set_tstInfo(::Org::BouncyCastle::Tsp::TimeStampTokenInfo*  value) ;

constexpr ::Org::BouncyCastle::Tsp::TimeStampTokenInfo* __get_tstInfo() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Tsp::TimeStampTokenInfo*> __get_tstInfo() const;

constexpr void __set_certID(::Org::BouncyCastle::Tsp::__TimeStampToken__CertID*  value) ;

constexpr ::Org::BouncyCastle::Tsp::__TimeStampToken__CertID* __get_certID() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Tsp::__TimeStampToken__CertID*> __get_certID() const;

static inline ::Org::BouncyCastle::Tsp::TimeStampToken* New_ctor(::Org::BouncyCastle::Asn1::Cms::ContentInfo*  contentInfo) ;

/// @brief Method .ctor addr 0x11507d0 size 0x74 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Cms::ContentInfo*  contentInfo) ;

static inline ::Org::BouncyCastle::Tsp::TimeStampToken* New_ctor(::Org::BouncyCastle::Cms::CmsSignedData*  signedData) ;

/// @brief Method .ctor addr 0x1152194 size 0x890 virtual false final false
inline void _ctor(::Org::BouncyCastle::Cms::CmsSignedData*  signedData) ;

/// @brief Method get_TimeStampInfo addr 0x1152ba8 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Tsp::TimeStampTokenInfo* get_TimeStampInfo() ;

/// @brief Method get_SignerID addr 0x1152bb0 size 0x1c virtual false final false
inline ::Org::BouncyCastle::Cms::SignerID* get_SignerID() ;

/// @brief Method get_SignedAttributes addr 0x1151058 size 0x1c virtual false final false
inline ::Org::BouncyCastle::Asn1::Cms::AttributeTable* get_SignedAttributes() ;

/// @brief Method get_UnsignedAttributes addr 0x1152bcc size 0x1c virtual false final false
inline ::Org::BouncyCastle::Asn1::Cms::AttributeTable* get_UnsignedAttributes() ;

/// @brief Method GetCertificates addr 0x1152be8 size 0x1c virtual false final false
inline ::Org::BouncyCastle::X509::Store::IX509Store* GetCertificates(::StringW  type) ;

/// @brief Method GetCrls addr 0x1152c04 size 0x1c virtual false final false
inline ::Org::BouncyCastle::X509::Store::IX509Store* GetCrls(::StringW  type) ;

/// @brief Method GetAttributeCertificates addr 0x1152c20 size 0x1c virtual false final false
inline ::Org::BouncyCastle::X509::Store::IX509Store* GetAttributeCertificates(::StringW  type) ;

/// @brief Method Validate addr 0x1152c3c size 0x674 virtual false final false
inline void Validate(::Org::BouncyCastle::X509::X509Certificate*  cert) ;

/// @brief Method ToCmsSignedData addr 0x1153780 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Cms::CmsSignedData* ToCmsSignedData() ;

/// @brief Method GetEncoded addr 0x1153788 size 0x54 virtual false final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetEncoded() ;

/// @brief Method GetEncoded addr 0x11537dc size 0x1c virtual false final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetEncoded(::StringW  encoding) ;

// Ctor Parameters [CppParam { name: "", ty: "TimeStampToken", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TimeStampToken(TimeStampToken && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimeStampToken", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimeStampToken(TimeStampToken const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TimeStampToken()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Tsp::TimeStampToken, 0x30>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Tsp
NEED_NO_BOX(::Org::BouncyCastle::Tsp::TimeStampToken);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Tsp::TimeStampToken*, "Org.BouncyCastle.Tsp", "TimeStampToken");
NEED_NO_BOX(::Org::BouncyCastle::Tsp::__TimeStampToken__CertID);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Tsp::__TimeStampToken__CertID*, "Org.BouncyCastle.Tsp", "TimeStampToken/CertID");
