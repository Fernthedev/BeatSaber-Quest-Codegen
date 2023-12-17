#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(EncryptedContentInfo)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class EncryptedContentInfo;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo);
// Type: Org.BouncyCastle.Asn1.Cms::EncryptedContentInfo
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(68))
// CS Name: ::Org.BouncyCastle.Asn1.Cms::EncryptedContentInfo*
class CORDL_TYPE EncryptedContentInfo : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field contentType offset 0x10
 __declspec(property(get=__get_contentType, put=__set_contentType)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier*  contentType;

/// @brief Field contentEncryptionAlgorithm offset 0x18
 __declspec(property(get=__get_contentEncryptionAlgorithm, put=__set_contentEncryptionAlgorithm)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  contentEncryptionAlgorithm;

/// @brief Field encryptedContent offset 0x20
 __declspec(property(get=__get_encryptedContent, put=__set_encryptedContent)) ::Org::BouncyCastle::Asn1::Asn1OctetString*  encryptedContent;

 __declspec(property(get=get_ContentType)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier*  ContentType;

 __declspec(property(get=get_ContentEncryptionAlgorithm)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  ContentEncryptionAlgorithm;

 __declspec(property(get=get_EncryptedContent)) ::Org::BouncyCastle::Asn1::Asn1OctetString*  EncryptedContent;

constexpr void __set_contentType(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* __get_contentType() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> __get_contentType() const;

constexpr void __set_contentEncryptionAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* __get_contentEncryptionAlgorithm() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> __get_contentEncryptionAlgorithm() const;

constexpr void __set_encryptedContent(::Org::BouncyCastle::Asn1::Asn1OctetString*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* __get_encryptedContent() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> __get_encryptedContent() const;

static inline ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  contentType, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  contentEncryptionAlgorithm, ::Org::BouncyCastle::Asn1::Asn1OctetString*  encryptedContent) ;

/// @brief Method .ctor addr 0xe76334 size 0x3c virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  contentType, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  contentEncryptionAlgorithm, ::Org::BouncyCastle::Asn1::Asn1OctetString*  encryptedContent) ;

static inline ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method .ctor addr 0xe76370 size 0x170 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method GetInstance addr 0xe7426c size 0x178 virtual false final false
static inline ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* GetInstance(::System::Object*  obj) ;

/// @brief Method get_ContentType addr 0xe764e0 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_ContentType() ;

/// @brief Method get_ContentEncryptionAlgorithm addr 0xe764e8 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_ContentEncryptionAlgorithm() ;

/// @brief Method get_EncryptedContent addr 0xe764f0 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::Asn1OctetString* get_EncryptedContent() ;

/// @brief Method ToAsn1Object addr 0xe764f8 size 0x170 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "EncryptedContentInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EncryptedContentInfo(EncryptedContentInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EncryptedContentInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EncryptedContentInfo(EncryptedContentInfo const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EncryptedContentInfo()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo, 0x28>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo*, "Org.BouncyCastle.Asn1.Cms", "EncryptedContentInfo");
