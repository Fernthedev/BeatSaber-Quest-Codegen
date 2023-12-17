#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CertTemplate)
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1::X509 {
class SubjectPublicKeyInfo;
}
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class OptionalValidity;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Crmf {
class CertTemplate;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Crmf::CertTemplate);
// Type: Org.BouncyCastle.Asn1.Crmf::CertTemplate
namespace Org::BouncyCastle::Asn1::Crmf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(107))
// CS Name: ::Org.BouncyCastle.Asn1.Crmf::CertTemplate*
class CORDL_TYPE CertTemplate : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x68};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x68 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field seq offset 0x10
 __declspec(property(get=__get_seq, put=__set_seq)) ::Org::BouncyCastle::Asn1::Asn1Sequence*  seq;

/// @brief Field version offset 0x18
 __declspec(property(get=__get_version, put=__set_version)) ::Org::BouncyCastle::Asn1::DerInteger*  version;

/// @brief Field serialNumber offset 0x20
 __declspec(property(get=__get_serialNumber, put=__set_serialNumber)) ::Org::BouncyCastle::Asn1::DerInteger*  serialNumber;

/// @brief Field signingAlg offset 0x28
 __declspec(property(get=__get_signingAlg, put=__set_signingAlg)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  signingAlg;

/// @brief Field issuer offset 0x30
 __declspec(property(get=__get_issuer, put=__set_issuer)) ::Org::BouncyCastle::Asn1::X509::X509Name*  issuer;

/// @brief Field validity offset 0x38
 __declspec(property(get=__get_validity, put=__set_validity)) ::Org::BouncyCastle::Asn1::Crmf::OptionalValidity*  validity;

/// @brief Field subject offset 0x40
 __declspec(property(get=__get_subject, put=__set_subject)) ::Org::BouncyCastle::Asn1::X509::X509Name*  subject;

/// @brief Field publicKey offset 0x48
 __declspec(property(get=__get_publicKey, put=__set_publicKey)) ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*  publicKey;

/// @brief Field issuerUID offset 0x50
 __declspec(property(get=__get_issuerUID, put=__set_issuerUID)) ::Org::BouncyCastle::Asn1::DerBitString*  issuerUID;

/// @brief Field subjectUID offset 0x58
 __declspec(property(get=__get_subjectUID, put=__set_subjectUID)) ::Org::BouncyCastle::Asn1::DerBitString*  subjectUID;

/// @brief Field extensions offset 0x60
 __declspec(property(get=__get_extensions, put=__set_extensions)) ::Org::BouncyCastle::Asn1::X509::X509Extensions*  extensions;

 __declspec(property(get=get_Version)) int32_t  Version;

 __declspec(property(get=get_SerialNumber)) ::Org::BouncyCastle::Asn1::DerInteger*  SerialNumber;

 __declspec(property(get=get_SigningAlg)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  SigningAlg;

 __declspec(property(get=get_Issuer)) ::Org::BouncyCastle::Asn1::X509::X509Name*  Issuer;

 __declspec(property(get=get_Validity)) ::Org::BouncyCastle::Asn1::Crmf::OptionalValidity*  Validity;

 __declspec(property(get=get_Subject)) ::Org::BouncyCastle::Asn1::X509::X509Name*  Subject;

 __declspec(property(get=get_PublicKey)) ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*  PublicKey;

 __declspec(property(get=get_IssuerUID)) ::Org::BouncyCastle::Asn1::DerBitString*  IssuerUID;

 __declspec(property(get=get_SubjectUID)) ::Org::BouncyCastle::Asn1::DerBitString*  SubjectUID;

 __declspec(property(get=get_Extensions)) ::Org::BouncyCastle::Asn1::X509::X509Extensions*  Extensions;

constexpr void __set_seq(::Org::BouncyCastle::Asn1::Asn1Sequence*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* __get_seq() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> __get_seq() const;

constexpr void __set_version(::Org::BouncyCastle::Asn1::DerInteger*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger* __get_version() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> __get_version() const;

constexpr void __set_serialNumber(::Org::BouncyCastle::Asn1::DerInteger*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger* __get_serialNumber() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> __get_serialNumber() const;

constexpr void __set_signingAlg(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* __get_signingAlg() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> __get_signingAlg() const;

constexpr void __set_issuer(::Org::BouncyCastle::Asn1::X509::X509Name*  value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::X509Name* __get_issuer() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509Name*> __get_issuer() const;

constexpr void __set_validity(::Org::BouncyCastle::Asn1::Crmf::OptionalValidity*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Crmf::OptionalValidity* __get_validity() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Crmf::OptionalValidity*> __get_validity() const;

constexpr void __set_subject(::Org::BouncyCastle::Asn1::X509::X509Name*  value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::X509Name* __get_subject() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509Name*> __get_subject() const;

constexpr void __set_publicKey(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*  value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* __get_publicKey() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*> __get_publicKey() const;

constexpr void __set_issuerUID(::Org::BouncyCastle::Asn1::DerBitString*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerBitString* __get_issuerUID() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerBitString*> __get_issuerUID() const;

constexpr void __set_subjectUID(::Org::BouncyCastle::Asn1::DerBitString*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerBitString* __get_subjectUID() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerBitString*> __get_subjectUID() const;

constexpr void __set_extensions(::Org::BouncyCastle::Asn1::X509::X509Extensions*  value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions* __get_extensions() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509Extensions*> __get_extensions() const;

static inline ::Org::BouncyCastle::Asn1::Crmf::CertTemplate* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method .ctor addr 0xe84ca8 size 0x56c virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method GetInstance addr 0xe84824 size 0xa4 virtual false final false
static inline ::Org::BouncyCastle::Asn1::Crmf::CertTemplate* GetInstance(::System::Object*  obj) ;

/// @brief Method get_Version addr 0xe853dc size 0x18 virtual true final false
inline int32_t get_Version() ;

/// @brief Method get_SerialNumber addr 0xe85474 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Asn1::DerInteger* get_SerialNumber() ;

/// @brief Method get_SigningAlg addr 0xe8547c size 0x8 virtual true final false
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_SigningAlg() ;

/// @brief Method get_Issuer addr 0xe85484 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Asn1::X509::X509Name* get_Issuer() ;

/// @brief Method get_Validity addr 0xe8548c size 0x8 virtual true final false
inline ::Org::BouncyCastle::Asn1::Crmf::OptionalValidity* get_Validity() ;

/// @brief Method get_Subject addr 0xe85494 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Asn1::X509::X509Name* get_Subject() ;

/// @brief Method get_PublicKey addr 0xe8549c size 0x8 virtual true final false
inline ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* get_PublicKey() ;

/// @brief Method get_IssuerUID addr 0xe854a4 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Asn1::DerBitString* get_IssuerUID() ;

/// @brief Method get_SubjectUID addr 0xe854ac size 0x8 virtual true final false
inline ::Org::BouncyCastle::Asn1::DerBitString* get_SubjectUID() ;

/// @brief Method get_Extensions addr 0xe854b4 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* get_Extensions() ;

/// @brief Method ToAsn1Object addr 0xe854bc size 0x8 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "CertTemplate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CertTemplate(CertTemplate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CertTemplate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CertTemplate(CertTemplate const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CertTemplate()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Crmf::CertTemplate, 0x68>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Crmf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Crmf::CertTemplate);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Crmf::CertTemplate*, "Org.BouncyCastle.Asn1.Crmf", "CertTemplate");
