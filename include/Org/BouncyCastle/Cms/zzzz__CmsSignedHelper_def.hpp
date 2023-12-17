#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CmsSignedHelper)
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Utilities::Collections {
class ISet;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
namespace Org::BouncyCastle::X509::Store {
class IX509Store;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace System::Collections {
class IDictionary;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsSignedHelper;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CmsSignedHelper);
// Type: Org.BouncyCastle.Cms::CmsSignedHelper
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(660))
// CS Name: ::Org.BouncyCastle.Cms::CmsSignedHelper*
class CORDL_TYPE CmsSignedHelper : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_Instance(::Org::BouncyCastle::Cms::CmsSignedHelper*  value) ;

static inline ::Org::BouncyCastle::Cms::CmsSignedHelper* getStaticF_Instance() ;

static inline void setStaticF_EncryptionECDsaWithSha1(::StringW  value) ;

static inline ::StringW getStaticF_EncryptionECDsaWithSha1() ;

static inline void setStaticF_EncryptionECDsaWithSha224(::StringW  value) ;

static inline ::StringW getStaticF_EncryptionECDsaWithSha224() ;

static inline void setStaticF_EncryptionECDsaWithSha256(::StringW  value) ;

static inline ::StringW getStaticF_EncryptionECDsaWithSha256() ;

static inline void setStaticF_EncryptionECDsaWithSha384(::StringW  value) ;

static inline ::StringW getStaticF_EncryptionECDsaWithSha384() ;

static inline void setStaticF_EncryptionECDsaWithSha512(::StringW  value) ;

static inline ::StringW getStaticF_EncryptionECDsaWithSha512() ;

static inline void setStaticF_encryptionAlgs(::System::Collections::IDictionary*  value) ;

static inline ::System::Collections::IDictionary* getStaticF_encryptionAlgs() ;

static inline void setStaticF_digestAlgs(::System::Collections::IDictionary*  value) ;

static inline ::System::Collections::IDictionary* getStaticF_digestAlgs() ;

static inline void setStaticF_digestAliases(::System::Collections::IDictionary*  value) ;

static inline ::System::Collections::IDictionary* getStaticF_digestAliases() ;

static inline void setStaticF_noParams(::Org::BouncyCastle::Utilities::Collections::ISet*  value) ;

static inline ::Org::BouncyCastle::Utilities::Collections::ISet* getStaticF_noParams() ;

static inline void setStaticF_ecAlgorithms(::System::Collections::IDictionary*  value) ;

static inline ::System::Collections::IDictionary* getStaticF_ecAlgorithms() ;

/// @brief Method AddEntries addr 0x11fd4fc size 0x16c virtual false final false
static inline void AddEntries(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  oid, ::StringW  digest, ::StringW  encryption) ;

/// @brief Method GetDigestAlgName addr 0x11ed110 size 0x108 virtual false final false
inline ::StringW GetDigestAlgName(::StringW  digestAlgOid) ;

/// @brief Method GetEncAlgorithmIdentifier addr 0x11ed78c size 0x13c virtual false final false
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* GetEncAlgorithmIdentifier(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  encOid, ::Org::BouncyCastle::Asn1::Asn1Encodable*  sigX509Parameters) ;

/// @brief Method GetDigestAliases addr 0x11ff418 size 0x14c virtual false final false
inline ::ArrayW<::StringW,::Array<::StringW>*> GetDigestAliases(::StringW  algName) ;

/// @brief Method GetEncryptionAlgName addr 0x11ed218 size 0x108 virtual false final false
inline ::StringW GetEncryptionAlgName(::StringW  encryptionAlgOid) ;

/// @brief Method GetDigestInstance addr 0x11ed59c size 0x1f0 virtual false final false
inline ::Org::BouncyCastle::Crypto::IDigest* GetDigestInstance(::StringW  algorithm) ;

/// @brief Method GetSignatureInstance addr 0x11f291c size 0x58 virtual false final false
inline ::Org::BouncyCastle::Crypto::ISigner* GetSignatureInstance(::StringW  algorithm) ;

/// @brief Method CreateAttributeStore addr 0x11e62ac size 0x654 virtual false final false
inline ::Org::BouncyCastle::X509::Store::IX509Store* CreateAttributeStore(::StringW  type, ::Org::BouncyCastle::Asn1::Asn1Set*  certSet) ;

/// @brief Method CreateCertificateStore addr 0x11e6988 size 0x1b0 virtual false final false
inline ::Org::BouncyCastle::X509::Store::IX509Store* CreateCertificateStore(::StringW  type, ::Org::BouncyCastle::Asn1::Asn1Set*  certSet) ;

/// @brief Method CreateCrlStore addr 0x11e6bc0 size 0x1b0 virtual false final false
inline ::Org::BouncyCastle::X509::Store::IX509Store* CreateCrlStore(::StringW  type, ::Org::BouncyCastle::Asn1::Asn1Set*  crlSet) ;

/// @brief Method AddCertsFromSet addr 0x11ff564 size 0x4c8 virtual false final false
inline void AddCertsFromSet(::System::Collections::IList*  certs, ::Org::BouncyCastle::Asn1::Asn1Set*  certSet) ;

/// @brief Method AddCrlsFromSet addr 0x11ffa2c size 0x478 virtual false final false
inline void AddCrlsFromSet(::System::Collections::IList*  crls, ::Org::BouncyCastle::Asn1::Asn1Set*  crlSet) ;

/// @brief Method FixAlgID addr 0x11e74d0 size 0xd0 virtual false final false
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* FixAlgID(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  algId) ;

/// @brief Method GetEncOid addr 0x11e9c80 size 0x4e0 virtual false final false
inline ::StringW GetEncOid(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  key, ::StringW  digestOID) ;

static inline ::Org::BouncyCastle::Cms::CmsSignedHelper* New_ctor() ;

/// @brief Method .ctor addr 0x11ff410 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "CmsSignedHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CmsSignedHelper(CmsSignedHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CmsSignedHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CmsSignedHelper(CmsSignedHelper const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CmsSignedHelper()  = default;
public:


// Fields

// Static field Instance

// Static field EncryptionECDsaWithSha1

// Static field EncryptionECDsaWithSha224

// Static field EncryptionECDsaWithSha256

// Static field EncryptionECDsaWithSha384

// Static field EncryptionECDsaWithSha512

// Static field encryptionAlgs

// Static field digestAlgs

// Static field digestAliases

// Static field noParams

// Static field ecAlgorithms


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsSignedHelper, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsSignedHelper);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsSignedHelper*, "Org.BouncyCastle.Cms", "CmsSignedHelper");
