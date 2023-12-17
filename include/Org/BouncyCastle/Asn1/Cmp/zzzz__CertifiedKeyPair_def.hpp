#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(CertifiedKeyPair)
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class PkiPublicationInfo;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class CertOrEncCert;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class EncryptedValue;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class CertifiedKeyPair;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair);
// Type: Org.BouncyCastle.Asn1.Cmp::CertifiedKeyPair
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12))
// CS Name: ::Org.BouncyCastle.Asn1.Cmp::CertifiedKeyPair*
class CORDL_TYPE CertifiedKeyPair : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field certOrEncCert offset 0x10
 __declspec(property(get=__get_certOrEncCert, put=__set_certOrEncCert)) ::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert*  certOrEncCert;

/// @brief Field privateKey offset 0x18
 __declspec(property(get=__get_privateKey, put=__set_privateKey)) ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*  privateKey;

/// @brief Field publicationInfo offset 0x20
 __declspec(property(get=__get_publicationInfo, put=__set_publicationInfo)) ::Org::BouncyCastle::Asn1::Crmf::PkiPublicationInfo*  publicationInfo;

 __declspec(property(get=get_CertOrEncCert)) ::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert*  CertOrEncCert;

 __declspec(property(get=get_PrivateKey)) ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*  PrivateKey;

 __declspec(property(get=get_PublicationInfo)) ::Org::BouncyCastle::Asn1::Crmf::PkiPublicationInfo*  PublicationInfo;

constexpr void __set_certOrEncCert(::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert* __get_certOrEncCert() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert*> __get_certOrEncCert() const;

constexpr void __set_privateKey(::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* __get_privateKey() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*> __get_privateKey() const;

constexpr void __set_publicationInfo(::Org::BouncyCastle::Asn1::Crmf::PkiPublicationInfo*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Crmf::PkiPublicationInfo* __get_publicationInfo() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Crmf::PkiPublicationInfo*> __get_publicationInfo() const;

static inline ::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method .ctor addr 0xe647d0 size 0xf8 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method GetInstance addr 0xe64a50 size 0x188 virtual false final false
static inline ::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair* GetInstance(::System::Object*  obj) ;

static inline ::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair* New_ctor(::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert*  certOrEncCert) ;

/// @brief Method .ctor addr 0xe64bd8 size 0xc virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert*  certOrEncCert) ;

static inline ::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair* New_ctor(::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert*  certOrEncCert, ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*  privateKey, ::Org::BouncyCastle::Asn1::Crmf::PkiPublicationInfo*  publicationInfo) ;

/// @brief Method .ctor addr 0xe64be4 size 0x8c virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert*  certOrEncCert, ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*  privateKey, ::Org::BouncyCastle::Asn1::Crmf::PkiPublicationInfo*  publicationInfo) ;

/// @brief Method get_CertOrEncCert addr 0xe64c70 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert* get_CertOrEncCert() ;

/// @brief Method get_PrivateKey addr 0xe64c78 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* get_PrivateKey() ;

/// @brief Method get_PublicationInfo addr 0xe64c80 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Asn1::Crmf::PkiPublicationInfo* get_PublicationInfo() ;

/// @brief Method ToAsn1Object addr 0xe64c88 size 0x12c virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "CertifiedKeyPair", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CertifiedKeyPair(CertifiedKeyPair && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CertifiedKeyPair", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CertifiedKeyPair(CertifiedKeyPair const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CertifiedKeyPair()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair, 0x28>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair*, "Org.BouncyCastle.Asn1.Cmp", "CertifiedKeyPair");
