#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PkcsObjectIdentifiers)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Pkcs {
class PkcsObjectIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers);
// Type: Org.BouncyCastle.Asn1.Pkcs::PkcsObjectIdentifiers
namespace Org::BouncyCastle::Asn1::Pkcs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(245))
// CS Name: ::Org.BouncyCastle.Asn1.Pkcs::PkcsObjectIdentifiers*
class CORDL_TYPE PkcsObjectIdentifiers : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Field Pkcs1 offset 0x0
static constexpr ::ConstString  Pkcs1{u"1.2.840.113549.1.1"};

/// @brief Field Pkcs3 offset 0x0
static constexpr ::ConstString  Pkcs3{u"1.2.840.113549.1.3"};

/// @brief Field Pkcs5 offset 0x0
static constexpr ::ConstString  Pkcs5{u"1.2.840.113549.1.5"};

/// @brief Field EncryptionAlgorithm offset 0x0
static constexpr ::ConstString  EncryptionAlgorithm{u"1.2.840.113549.3"};

/// @brief Field DigestAlgorithm offset 0x0
static constexpr ::ConstString  DigestAlgorithm{u"1.2.840.113549.2"};

/// @brief Field Pkcs7 offset 0x0
static constexpr ::ConstString  Pkcs7{u"1.2.840.113549.1.7"};

/// @brief Field Pkcs9 offset 0x0
static constexpr ::ConstString  Pkcs9{u"1.2.840.113549.1.9"};

/// @brief Field CertTypes offset 0x0
static constexpr ::ConstString  CertTypes{u"1.2.840.113549.1.9.22"};

/// @brief Field CrlTypes offset 0x0
static constexpr ::ConstString  CrlTypes{u"1.2.840.113549.1.9.23"};

/// @brief Field IdCT offset 0x0
static constexpr ::ConstString  IdCT{u"1.2.840.113549.1.9.16.1"};

/// @brief Field IdCti offset 0x0
static constexpr ::ConstString  IdCti{u"1.2.840.113549.1.9.16.6"};

/// @brief Field IdAA offset 0x0
static constexpr ::ConstString  IdAA{u"1.2.840.113549.1.9.16.2"};

/// @brief Field IdSpq offset 0x0
static constexpr ::ConstString  IdSpq{u"1.2.840.113549.1.9.16.5"};

/// @brief Field Pkcs12 offset 0x0
static constexpr ::ConstString  Pkcs12{u"1.2.840.113549.1.12"};

/// @brief Field BagTypes offset 0x0
static constexpr ::ConstString  BagTypes{u"1.2.840.113549.1.12.10.1"};

/// @brief Field Pkcs12PbeIds offset 0x0
static constexpr ::ConstString  Pkcs12PbeIds{u"1.2.840.113549.1.12.1"};

static inline void setStaticF_Pkcs1Oid(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Pkcs1Oid() ;

static inline void setStaticF_RsaEncryption(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_RsaEncryption() ;

static inline void setStaticF_MD2WithRsaEncryption(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_MD2WithRsaEncryption() ;

static inline void setStaticF_MD4WithRsaEncryption(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_MD4WithRsaEncryption() ;

static inline void setStaticF_MD5WithRsaEncryption(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_MD5WithRsaEncryption() ;

static inline void setStaticF_Sha1WithRsaEncryption(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Sha1WithRsaEncryption() ;

static inline void setStaticF_SrsaOaepEncryptionSet(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SrsaOaepEncryptionSet() ;

static inline void setStaticF_IdRsaesOaep(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdRsaesOaep() ;

static inline void setStaticF_IdMgf1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdMgf1() ;

static inline void setStaticF_IdPSpecified(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdPSpecified() ;

static inline void setStaticF_IdRsassaPss(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdRsassaPss() ;

static inline void setStaticF_Sha256WithRsaEncryption(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Sha256WithRsaEncryption() ;

static inline void setStaticF_Sha384WithRsaEncryption(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Sha384WithRsaEncryption() ;

static inline void setStaticF_Sha512WithRsaEncryption(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Sha512WithRsaEncryption() ;

static inline void setStaticF_Sha224WithRsaEncryption(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Sha224WithRsaEncryption() ;

static inline void setStaticF_Sha512_224WithRSAEncryption(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Sha512_224WithRSAEncryption() ;

static inline void setStaticF_Sha512_256WithRSAEncryption(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Sha512_256WithRSAEncryption() ;

static inline void setStaticF_DhKeyAgreement(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_DhKeyAgreement() ;

static inline void setStaticF_PbeWithMD2AndDesCbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_PbeWithMD2AndDesCbc() ;

static inline void setStaticF_PbeWithMD2AndRC2Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_PbeWithMD2AndRC2Cbc() ;

static inline void setStaticF_PbeWithMD5AndDesCbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_PbeWithMD5AndDesCbc() ;

static inline void setStaticF_PbeWithMD5AndRC2Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_PbeWithMD5AndRC2Cbc() ;

static inline void setStaticF_PbeWithSha1AndDesCbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_PbeWithSha1AndDesCbc() ;

static inline void setStaticF_PbeWithSha1AndRC2Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_PbeWithSha1AndRC2Cbc() ;

static inline void setStaticF_IdPbeS2(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdPbeS2() ;

static inline void setStaticF_IdPbkdf2(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdPbkdf2() ;

static inline void setStaticF_DesEde3Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_DesEde3Cbc() ;

static inline void setStaticF_RC2Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_RC2Cbc() ;

static inline void setStaticF_rc4(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_rc4() ;

static inline void setStaticF_MD2(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_MD2() ;

static inline void setStaticF_MD4(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_MD4() ;

static inline void setStaticF_MD5(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_MD5() ;

static inline void setStaticF_IdHmacWithSha1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdHmacWithSha1() ;

static inline void setStaticF_IdHmacWithSha224(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdHmacWithSha224() ;

static inline void setStaticF_IdHmacWithSha256(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdHmacWithSha256() ;

static inline void setStaticF_IdHmacWithSha384(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdHmacWithSha384() ;

static inline void setStaticF_IdHmacWithSha512(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdHmacWithSha512() ;

static inline void setStaticF_Data(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Data() ;

static inline void setStaticF_SignedData(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SignedData() ;

static inline void setStaticF_EnvelopedData(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_EnvelopedData() ;

static inline void setStaticF_SignedAndEnvelopedData(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SignedAndEnvelopedData() ;

static inline void setStaticF_DigestedData(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_DigestedData() ;

static inline void setStaticF_EncryptedData(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_EncryptedData() ;

static inline void setStaticF_Pkcs9AtEmailAddress(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Pkcs9AtEmailAddress() ;

static inline void setStaticF_Pkcs9AtUnstructuredName(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Pkcs9AtUnstructuredName() ;

static inline void setStaticF_Pkcs9AtContentType(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Pkcs9AtContentType() ;

static inline void setStaticF_Pkcs9AtMessageDigest(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Pkcs9AtMessageDigest() ;

static inline void setStaticF_Pkcs9AtSigningTime(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Pkcs9AtSigningTime() ;

static inline void setStaticF_Pkcs9AtCounterSignature(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Pkcs9AtCounterSignature() ;

static inline void setStaticF_Pkcs9AtChallengePassword(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Pkcs9AtChallengePassword() ;

static inline void setStaticF_Pkcs9AtUnstructuredAddress(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Pkcs9AtUnstructuredAddress() ;

static inline void setStaticF_Pkcs9AtExtendedCertificateAttributes(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Pkcs9AtExtendedCertificateAttributes() ;

static inline void setStaticF_Pkcs9AtSigningDescription(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Pkcs9AtSigningDescription() ;

static inline void setStaticF_Pkcs9AtExtensionRequest(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Pkcs9AtExtensionRequest() ;

static inline void setStaticF_Pkcs9AtSmimeCapabilities(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Pkcs9AtSmimeCapabilities() ;

static inline void setStaticF_IdSmime(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdSmime() ;

static inline void setStaticF_Pkcs9AtFriendlyName(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Pkcs9AtFriendlyName() ;

static inline void setStaticF_Pkcs9AtLocalKeyID(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Pkcs9AtLocalKeyID() ;

static inline void setStaticF_X509CertType(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_X509CertType() ;

static inline void setStaticF_X509Certificate(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_X509Certificate() ;

static inline void setStaticF_SdsiCertificate(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SdsiCertificate() ;

static inline void setStaticF_X509Crl(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_X509Crl() ;

static inline void setStaticF_IdAlg(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAlg() ;

static inline void setStaticF_IdAlgEsdh(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAlgEsdh() ;

static inline void setStaticF_IdAlgCms3DesWrap(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAlgCms3DesWrap() ;

static inline void setStaticF_IdAlgCmsRC2Wrap(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAlgCmsRC2Wrap() ;

static inline void setStaticF_IdAlgPwriKek(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAlgPwriKek() ;

static inline void setStaticF_IdAlgSsdh(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAlgSsdh() ;

static inline void setStaticF_IdRsaKem(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdRsaKem() ;

static inline void setStaticF_IdAlgAeadChaCha20Poly1305(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAlgAeadChaCha20Poly1305() ;

static inline void setStaticF_PreferSignedData(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_PreferSignedData() ;

static inline void setStaticF_CannotDecryptAny(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_CannotDecryptAny() ;

static inline void setStaticF_SmimeCapabilitiesVersions(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SmimeCapabilitiesVersions() ;

static inline void setStaticF_IdAAReceiptRequest(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAAReceiptRequest() ;

static inline void setStaticF_IdCTAuthData(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdCTAuthData() ;

static inline void setStaticF_IdCTTstInfo(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdCTTstInfo() ;

static inline void setStaticF_IdCTCompressedData(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdCTCompressedData() ;

static inline void setStaticF_IdCTAuthEnvelopedData(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdCTAuthEnvelopedData() ;

static inline void setStaticF_IdCTTimestampedData(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdCTTimestampedData() ;

static inline void setStaticF_IdCtiEtsProofOfOrigin(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdCtiEtsProofOfOrigin() ;

static inline void setStaticF_IdCtiEtsProofOfReceipt(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdCtiEtsProofOfReceipt() ;

static inline void setStaticF_IdCtiEtsProofOfDelivery(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdCtiEtsProofOfDelivery() ;

static inline void setStaticF_IdCtiEtsProofOfSender(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdCtiEtsProofOfSender() ;

static inline void setStaticF_IdCtiEtsProofOfApproval(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdCtiEtsProofOfApproval() ;

static inline void setStaticF_IdCtiEtsProofOfCreation(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdCtiEtsProofOfCreation() ;

static inline void setStaticF_IdAAOid(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAAOid() ;

static inline void setStaticF_IdAAContentHint(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAAContentHint() ;

static inline void setStaticF_IdAAMsgSigDigest(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAAMsgSigDigest() ;

static inline void setStaticF_IdAAContentReference(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAAContentReference() ;

static inline void setStaticF_IdAAEncrypKeyPref(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAAEncrypKeyPref() ;

static inline void setStaticF_IdAASigningCertificate(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAASigningCertificate() ;

static inline void setStaticF_IdAASigningCertificateV2(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAASigningCertificateV2() ;

static inline void setStaticF_IdAAContentIdentifier(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAAContentIdentifier() ;

static inline void setStaticF_IdAASignatureTimeStampToken(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAASignatureTimeStampToken() ;

static inline void setStaticF_IdAAEtsSigPolicyID(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAAEtsSigPolicyID() ;

static inline void setStaticF_IdAAEtsCommitmentType(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAAEtsCommitmentType() ;

static inline void setStaticF_IdAAEtsSignerLocation(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAAEtsSignerLocation() ;

static inline void setStaticF_IdAAEtsSignerAttr(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAAEtsSignerAttr() ;

static inline void setStaticF_IdAAEtsOtherSigCert(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAAEtsOtherSigCert() ;

static inline void setStaticF_IdAAEtsContentTimestamp(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAAEtsContentTimestamp() ;

static inline void setStaticF_IdAAEtsCertificateRefs(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAAEtsCertificateRefs() ;

static inline void setStaticF_IdAAEtsRevocationRefs(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAAEtsRevocationRefs() ;

static inline void setStaticF_IdAAEtsCertValues(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAAEtsCertValues() ;

static inline void setStaticF_IdAAEtsRevocationValues(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAAEtsRevocationValues() ;

static inline void setStaticF_IdAAEtsEscTimeStamp(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAAEtsEscTimeStamp() ;

static inline void setStaticF_IdAAEtsCertCrlTimestamp(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAAEtsCertCrlTimestamp() ;

static inline void setStaticF_IdAAEtsArchiveTimestamp(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAAEtsArchiveTimestamp() ;

static inline void setStaticF_IdAADecryptKeyID(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAADecryptKeyID() ;

static inline void setStaticF_IdAAImplCryptoAlgs(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAAImplCryptoAlgs() ;

static inline void setStaticF_IdAAAsymmDecryptKeyID(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAAAsymmDecryptKeyID() ;

static inline void setStaticF_IdAAImplCompressAlgs(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAAImplCompressAlgs() ;

static inline void setStaticF_IdAACommunityIdentifiers(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAACommunityIdentifiers() ;

static inline void setStaticF_IdAASigPolicyID(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAASigPolicyID() ;

static inline void setStaticF_IdAACommitmentType(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAACommitmentType() ;

static inline void setStaticF_IdAASignerLocation(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAASignerLocation() ;

static inline void setStaticF_IdAAOtherSigCert(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAAOtherSigCert() ;

static inline void setStaticF_IdSpqEtsUri(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdSpqEtsUri() ;

static inline void setStaticF_IdSpqEtsUNotice(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdSpqEtsUNotice() ;

static inline void setStaticF_KeyBag(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_KeyBag() ;

static inline void setStaticF_Pkcs8ShroudedKeyBag(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Pkcs8ShroudedKeyBag() ;

static inline void setStaticF_CertBag(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_CertBag() ;

static inline void setStaticF_CrlBag(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_CrlBag() ;

static inline void setStaticF_SecretBag(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SecretBag() ;

static inline void setStaticF_SafeContentsBag(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SafeContentsBag() ;

static inline void setStaticF_PbeWithShaAnd128BitRC4(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_PbeWithShaAnd128BitRC4() ;

static inline void setStaticF_PbeWithShaAnd40BitRC4(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_PbeWithShaAnd40BitRC4() ;

static inline void setStaticF_PbeWithShaAnd3KeyTripleDesCbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_PbeWithShaAnd3KeyTripleDesCbc() ;

static inline void setStaticF_PbeWithShaAnd2KeyTripleDesCbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_PbeWithShaAnd2KeyTripleDesCbc() ;

static inline void setStaticF_PbeWithShaAnd128BitRC2Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_PbeWithShaAnd128BitRC2Cbc() ;

static inline void setStaticF_PbewithShaAnd40BitRC2Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_PbewithShaAnd40BitRC2Cbc() ;

static inline ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers* New_ctor() ;

/// @brief Method .ctor addr 0xf8cd28 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "PkcsObjectIdentifiers", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PkcsObjectIdentifiers(PkcsObjectIdentifiers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PkcsObjectIdentifiers", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PkcsObjectIdentifiers(PkcsObjectIdentifiers const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PkcsObjectIdentifiers()  = default;
public:


// Fields

// Static field Pkcs1Oid

// Static field RsaEncryption

// Static field MD2WithRsaEncryption

// Static field MD4WithRsaEncryption

// Static field MD5WithRsaEncryption

// Static field Sha1WithRsaEncryption

// Static field SrsaOaepEncryptionSet

// Static field IdRsaesOaep

// Static field IdMgf1

// Static field IdPSpecified

// Static field IdRsassaPss

// Static field Sha256WithRsaEncryption

// Static field Sha384WithRsaEncryption

// Static field Sha512WithRsaEncryption

// Static field Sha224WithRsaEncryption

// Static field Sha512_224WithRSAEncryption

// Static field Sha512_256WithRSAEncryption

// Static field DhKeyAgreement

// Static field PbeWithMD2AndDesCbc

// Static field PbeWithMD2AndRC2Cbc

// Static field PbeWithMD5AndDesCbc

// Static field PbeWithMD5AndRC2Cbc

// Static field PbeWithSha1AndDesCbc

// Static field PbeWithSha1AndRC2Cbc

// Static field IdPbeS2

// Static field IdPbkdf2

// Static field DesEde3Cbc

// Static field RC2Cbc

// Static field rc4

// Static field MD2

// Static field MD4

// Static field MD5

// Static field IdHmacWithSha1

// Static field IdHmacWithSha224

// Static field IdHmacWithSha256

// Static field IdHmacWithSha384

// Static field IdHmacWithSha512

// Static field Data

// Static field SignedData

// Static field EnvelopedData

// Static field SignedAndEnvelopedData

// Static field DigestedData

// Static field EncryptedData

// Static field Pkcs9AtEmailAddress

// Static field Pkcs9AtUnstructuredName

// Static field Pkcs9AtContentType

// Static field Pkcs9AtMessageDigest

// Static field Pkcs9AtSigningTime

// Static field Pkcs9AtCounterSignature

// Static field Pkcs9AtChallengePassword

// Static field Pkcs9AtUnstructuredAddress

// Static field Pkcs9AtExtendedCertificateAttributes

// Static field Pkcs9AtSigningDescription

// Static field Pkcs9AtExtensionRequest

// Static field Pkcs9AtSmimeCapabilities

// Static field IdSmime

// Static field Pkcs9AtFriendlyName

// Static field Pkcs9AtLocalKeyID

// Static field X509CertType

// Static field X509Certificate

// Static field SdsiCertificate

// Static field X509Crl

// Static field IdAlg

// Static field IdAlgEsdh

// Static field IdAlgCms3DesWrap

// Static field IdAlgCmsRC2Wrap

// Static field IdAlgPwriKek

// Static field IdAlgSsdh

// Static field IdRsaKem

// Static field IdAlgAeadChaCha20Poly1305

// Static field PreferSignedData

// Static field CannotDecryptAny

// Static field SmimeCapabilitiesVersions

// Static field IdAAReceiptRequest

// Static field IdCTAuthData

// Static field IdCTTstInfo

// Static field IdCTCompressedData

// Static field IdCTAuthEnvelopedData

// Static field IdCTTimestampedData

// Static field IdCtiEtsProofOfOrigin

// Static field IdCtiEtsProofOfReceipt

// Static field IdCtiEtsProofOfDelivery

// Static field IdCtiEtsProofOfSender

// Static field IdCtiEtsProofOfApproval

// Static field IdCtiEtsProofOfCreation

// Static field IdAAOid

// Static field IdAAContentHint

// Static field IdAAMsgSigDigest

// Static field IdAAContentReference

// Static field IdAAEncrypKeyPref

// Static field IdAASigningCertificate

// Static field IdAASigningCertificateV2

// Static field IdAAContentIdentifier

// Static field IdAASignatureTimeStampToken

// Static field IdAAEtsSigPolicyID

// Static field IdAAEtsCommitmentType

// Static field IdAAEtsSignerLocation

// Static field IdAAEtsSignerAttr

// Static field IdAAEtsOtherSigCert

// Static field IdAAEtsContentTimestamp

// Static field IdAAEtsCertificateRefs

// Static field IdAAEtsRevocationRefs

// Static field IdAAEtsCertValues

// Static field IdAAEtsRevocationValues

// Static field IdAAEtsEscTimeStamp

// Static field IdAAEtsCertCrlTimestamp

// Static field IdAAEtsArchiveTimestamp

// Static field IdAADecryptKeyID

// Static field IdAAImplCryptoAlgs

// Static field IdAAAsymmDecryptKeyID

// Static field IdAAImplCompressAlgs

// Static field IdAACommunityIdentifiers

// Static field IdAASigPolicyID

// Static field IdAACommitmentType

// Static field IdAASignerLocation

// Static field IdAAOtherSigCert

// Static field IdSpqEtsUri

// Static field IdSpqEtsUNotice

// Static field KeyBag

// Static field Pkcs8ShroudedKeyBag

// Static field CertBag

// Static field CrlBag

// Static field SecretBag

// Static field SafeContentsBag

// Static field PbeWithShaAnd128BitRC4

// Static field PbeWithShaAnd40BitRC4

// Static field PbeWithShaAnd3KeyTripleDesCbc

// Static field PbeWithShaAnd2KeyTripleDesCbc

// Static field PbeWithShaAnd128BitRC2Cbc

// Static field PbewithShaAnd40BitRC2Cbc


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Pkcs
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*, "Org.BouncyCastle.Asn1.Pkcs", "PkcsObjectIdentifiers");
