#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CmsEnvelopedGenerator)
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
namespace System::Collections {
class ICollection;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Cms {
class RecipientInfoGenerator;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Cms {
class CmsAttributeTableGenerator;
}
namespace Org::BouncyCastle::Asn1::Cms {
class KekIdentifier;
}
namespace Org::BouncyCastle::Cms {
class CmsPbeKey;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsEnvelopedGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CmsEnvelopedGenerator);
// Type: Org.BouncyCastle.Cms::CmsEnvelopedGenerator
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(617))
// CS Name: ::Org.BouncyCastle.Cms::CmsEnvelopedGenerator*
class CORDL_TYPE CmsEnvelopedGenerator : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field IdeaCbc offset 0x0
static constexpr ::ConstString  IdeaCbc{u"1.3.6.1.4.1.188.7.1.1.2"};

/// @brief Field Cast5Cbc offset 0x0
static constexpr ::ConstString  Cast5Cbc{u"1.2.840.113533.7.66.10"};

/// @brief Field recipientInfoGenerators offset 0x10
 __declspec(property(get=__get_recipientInfoGenerators, put=__set_recipientInfoGenerators)) ::System::Collections::IList*  recipientInfoGenerators;

/// @brief Field rand offset 0x18
 __declspec(property(get=__get_rand, put=__set_rand)) ::Org::BouncyCastle::Security::SecureRandom*  rand;

/// @brief Field unprotectedAttributeGenerator offset 0x20
 __declspec(property(get=__get_unprotectedAttributeGenerator, put=__set_unprotectedAttributeGenerator)) ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*  unprotectedAttributeGenerator;

 __declspec(property(get=get_UnprotectedAttributeGenerator, put=set_UnprotectedAttributeGenerator)) ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*  UnprotectedAttributeGenerator;

static inline void setStaticF_rc2Table(::ArrayW<int16_t,::Array<int16_t>*>  value) ;

static inline ::ArrayW<int16_t,::Array<int16_t>*> getStaticF_rc2Table() ;

static inline void setStaticF_DesEde3Cbc(::StringW  value) ;

static inline ::StringW getStaticF_DesEde3Cbc() ;

static inline void setStaticF_RC2Cbc(::StringW  value) ;

static inline ::StringW getStaticF_RC2Cbc() ;

static inline void setStaticF_Aes128Cbc(::StringW  value) ;

static inline ::StringW getStaticF_Aes128Cbc() ;

static inline void setStaticF_Aes192Cbc(::StringW  value) ;

static inline ::StringW getStaticF_Aes192Cbc() ;

static inline void setStaticF_Aes256Cbc(::StringW  value) ;

static inline ::StringW getStaticF_Aes256Cbc() ;

static inline void setStaticF_Camellia128Cbc(::StringW  value) ;

static inline ::StringW getStaticF_Camellia128Cbc() ;

static inline void setStaticF_Camellia192Cbc(::StringW  value) ;

static inline ::StringW getStaticF_Camellia192Cbc() ;

static inline void setStaticF_Camellia256Cbc(::StringW  value) ;

static inline ::StringW getStaticF_Camellia256Cbc() ;

static inline void setStaticF_SeedCbc(::StringW  value) ;

static inline ::StringW getStaticF_SeedCbc() ;

static inline void setStaticF_DesEde3Wrap(::StringW  value) ;

static inline ::StringW getStaticF_DesEde3Wrap() ;

static inline void setStaticF_Aes128Wrap(::StringW  value) ;

static inline ::StringW getStaticF_Aes128Wrap() ;

static inline void setStaticF_Aes192Wrap(::StringW  value) ;

static inline ::StringW getStaticF_Aes192Wrap() ;

static inline void setStaticF_Aes256Wrap(::StringW  value) ;

static inline ::StringW getStaticF_Aes256Wrap() ;

static inline void setStaticF_Camellia128Wrap(::StringW  value) ;

static inline ::StringW getStaticF_Camellia128Wrap() ;

static inline void setStaticF_Camellia192Wrap(::StringW  value) ;

static inline ::StringW getStaticF_Camellia192Wrap() ;

static inline void setStaticF_Camellia256Wrap(::StringW  value) ;

static inline ::StringW getStaticF_Camellia256Wrap() ;

static inline void setStaticF_SeedWrap(::StringW  value) ;

static inline ::StringW getStaticF_SeedWrap() ;

static inline void setStaticF_ECDHSha1Kdf(::StringW  value) ;

static inline ::StringW getStaticF_ECDHSha1Kdf() ;

static inline void setStaticF_ECMqvSha1Kdf(::StringW  value) ;

static inline ::StringW getStaticF_ECMqvSha1Kdf() ;

constexpr void __set_recipientInfoGenerators(::System::Collections::IList*  value) ;

constexpr ::System::Collections::IList* __get_recipientInfoGenerators() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> __get_recipientInfoGenerators() const;

constexpr void __set_rand(::Org::BouncyCastle::Security::SecureRandom*  value) ;

constexpr ::Org::BouncyCastle::Security::SecureRandom* __get_rand() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Security::SecureRandom*> __get_rand() const;

constexpr void __set_unprotectedAttributeGenerator(::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*  value) ;

constexpr ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* __get_unprotectedAttributeGenerator() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*> __get_unprotectedAttributeGenerator() const;

static inline ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator* New_ctor() ;

/// @brief Method .ctor addr 0x11d86c0 size 0x64 virtual false final false
inline void _ctor() ;

static inline ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator* New_ctor(::Org::BouncyCastle::Security::SecureRandom*  rand) ;

/// @brief Method .ctor addr 0x11d8724 size 0x7c virtual false final false
inline void _ctor(::Org::BouncyCastle::Security::SecureRandom*  rand) ;

/// @brief Method get_UnprotectedAttributeGenerator addr 0x11d87a0 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* get_UnprotectedAttributeGenerator() ;

/// @brief Method set_UnprotectedAttributeGenerator addr 0x11d87a8 size 0x8 virtual false final false
inline void set_UnprotectedAttributeGenerator(::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*  value) ;

/// @brief Method AddKeyTransRecipient addr 0x11d87b0 size 0xf0 virtual false final false
inline void AddKeyTransRecipient(::Org::BouncyCastle::X509::X509Certificate*  cert) ;

/// @brief Method AddKeyTransRecipient addr 0x11d88a0 size 0x128 virtual false final false
inline void AddKeyTransRecipient(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  pubKey, ::ArrayW<uint8_t,::Array<uint8_t>*>  subKeyId) ;

/// @brief Method AddKekRecipient addr 0x11d89c8 size 0x94 virtual false final false
inline void AddKekRecipient(::StringW  keyAlgorithm, ::Org::BouncyCastle::Crypto::Parameters::KeyParameter*  key, ::ArrayW<uint8_t,::Array<uint8_t>*>  keyIdentifier) ;

/// @brief Method AddKekRecipient addr 0x11d8a5c size 0x104 virtual false final false
inline void AddKekRecipient(::StringW  keyAlgorithm, ::Org::BouncyCastle::Crypto::Parameters::KeyParameter*  key, ::Org::BouncyCastle::Asn1::Cms::KekIdentifier*  kekIdentifier) ;

/// @brief Method AddPasswordRecipient addr 0x11d8b60 size 0x1c0 virtual false final false
inline void AddPasswordRecipient(::Org::BouncyCastle::Cms::CmsPbeKey*  pbeKey, ::StringW  kekAlgorithmOid) ;

/// @brief Method AddKeyAgreementRecipient addr 0x11d8d20 size 0x120 virtual false final false
inline void AddKeyAgreementRecipient(::StringW  agreementAlgorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  senderPrivateKey, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  senderPublicKey, ::Org::BouncyCastle::X509::X509Certificate*  recipientCert, ::StringW  cekWrapAlgorithm) ;

/// @brief Method AddKeyAgreementRecipients addr 0x11d8e40 size 0x248 virtual false final false
inline void AddKeyAgreementRecipients(::StringW  agreementAlgorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  senderPrivateKey, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  senderPublicKey, ::System::Collections::ICollection*  recipientCerts, ::StringW  cekWrapAlgorithm) ;

/// @brief Method AddRecipientInfoGenerator addr 0x11d9088 size 0xac virtual false final false
inline void AddRecipientInfoGenerator(::Org::BouncyCastle::Cms::RecipientInfoGenerator*  recipientInfoGenerator) ;

/// @brief Method GetAlgorithmIdentifier addr 0x11d9134 size 0x144 virtual true final false
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* GetAlgorithmIdentifier(::StringW  encryptionOid, ::Org::BouncyCastle::Crypto::Parameters::KeyParameter*  encKey, ::Org::BouncyCastle::Asn1::Asn1Encodable*  asn1Params, ByRef<::Org::BouncyCastle::Crypto::ICipherParameters*>  cipherParameters) ;

/// @brief Method GenerateAsn1Parameters addr 0x11d9278 size 0x238 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Encodable* GenerateAsn1Parameters(::StringW  encryptionOid, ::ArrayW<uint8_t,::Array<uint8_t>*>  encKeyBytes) ;

// Ctor Parameters [CppParam { name: "", ty: "CmsEnvelopedGenerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CmsEnvelopedGenerator(CmsEnvelopedGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CmsEnvelopedGenerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CmsEnvelopedGenerator(CmsEnvelopedGenerator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CmsEnvelopedGenerator()  = default;
public:


// Fields

// Static field rc2Table

// Static field DesEde3Cbc

// Static field RC2Cbc

// Static field Aes128Cbc

// Static field Aes192Cbc

// Static field Aes256Cbc

// Static field Camellia128Cbc

// Static field Camellia192Cbc

// Static field Camellia256Cbc

// Static field SeedCbc

// Static field DesEde3Wrap

// Static field Aes128Wrap

// Static field Aes192Wrap

// Static field Aes256Wrap

// Static field Camellia128Wrap

// Static field Camellia192Wrap

// Static field Camellia256Wrap

// Static field SeedWrap

// Static field ECDHSha1Kdf

// Static field ECMqvSha1Kdf


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator, 0x28>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsEnvelopedGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*, "Org.BouncyCastle.Cms", "CmsEnvelopedGenerator");
