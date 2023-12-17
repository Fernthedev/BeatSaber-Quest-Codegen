#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(KeyAgreeRecipientInfo)
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1::Cms {
class OriginatorIdentifierOrKey;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class KeyAgreeRecipientInfo;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo);
// Type: Org.BouncyCastle.Asn1.Cms::KeyAgreeRecipientInfo
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(78))
// CS Name: ::Org.BouncyCastle.Asn1.Cms::KeyAgreeRecipientInfo*
class CORDL_TYPE KeyAgreeRecipientInfo : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field version offset 0x10
 __declspec(property(get=__get_version, put=__set_version)) ::Org::BouncyCastle::Asn1::DerInteger*  version;

/// @brief Field originator offset 0x18
 __declspec(property(get=__get_originator, put=__set_originator)) ::Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey*  originator;

/// @brief Field ukm offset 0x20
 __declspec(property(get=__get_ukm, put=__set_ukm)) ::Org::BouncyCastle::Asn1::Asn1OctetString*  ukm;

/// @brief Field keyEncryptionAlgorithm offset 0x28
 __declspec(property(get=__get_keyEncryptionAlgorithm, put=__set_keyEncryptionAlgorithm)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  keyEncryptionAlgorithm;

/// @brief Field recipientEncryptedKeys offset 0x30
 __declspec(property(get=__get_recipientEncryptedKeys, put=__set_recipientEncryptedKeys)) ::Org::BouncyCastle::Asn1::Asn1Sequence*  recipientEncryptedKeys;

 __declspec(property(get=get_Version)) ::Org::BouncyCastle::Asn1::DerInteger*  Version;

 __declspec(property(get=get_Originator)) ::Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey*  Originator;

 __declspec(property(get=get_UserKeyingMaterial)) ::Org::BouncyCastle::Asn1::Asn1OctetString*  UserKeyingMaterial;

 __declspec(property(get=get_KeyEncryptionAlgorithm)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  KeyEncryptionAlgorithm;

 __declspec(property(get=get_RecipientEncryptedKeys)) ::Org::BouncyCastle::Asn1::Asn1Sequence*  RecipientEncryptedKeys;

constexpr void __set_version(::Org::BouncyCastle::Asn1::DerInteger*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger* __get_version() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> __get_version() const;

constexpr void __set_originator(::Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey* __get_originator() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey*> __get_originator() const;

constexpr void __set_ukm(::Org::BouncyCastle::Asn1::Asn1OctetString*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* __get_ukm() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> __get_ukm() const;

constexpr void __set_keyEncryptionAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* __get_keyEncryptionAlgorithm() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> __get_keyEncryptionAlgorithm() const;

constexpr void __set_recipientEncryptedKeys(::Org::BouncyCastle::Asn1::Asn1Sequence*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* __get_recipientEncryptedKeys() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> __get_recipientEncryptedKeys() const;

static inline ::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo* New_ctor(::Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey*  originator, ::Org::BouncyCastle::Asn1::Asn1OctetString*  ukm, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  keyEncryptionAlgorithm, ::Org::BouncyCastle::Asn1::Asn1Sequence*  recipientEncryptedKeys) ;

/// @brief Method .ctor addr 0xe79770 size 0x98 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey*  originator, ::Org::BouncyCastle::Asn1::Asn1OctetString*  ukm, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  keyEncryptionAlgorithm, ::Org::BouncyCastle::Asn1::Asn1Sequence*  recipientEncryptedKeys) ;

static inline ::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method .ctor addr 0xe79808 size 0x288 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method GetInstance addr 0xe79afc size 0x18 virtual false final false
static inline ::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject*  obj, bool  explicitly) ;

/// @brief Method GetInstance addr 0xe79b14 size 0x178 virtual false final false
static inline ::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo* GetInstance(::System::Object*  obj) ;

/// @brief Method get_Version addr 0xe79c8c size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::DerInteger* get_Version() ;

/// @brief Method get_Originator addr 0xe79c94 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey* get_Originator() ;

/// @brief Method get_UserKeyingMaterial addr 0xe79c9c size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::Asn1OctetString* get_UserKeyingMaterial() ;

/// @brief Method get_KeyEncryptionAlgorithm addr 0xe79ca4 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_KeyEncryptionAlgorithm() ;

/// @brief Method get_RecipientEncryptedKeys addr 0xe79cac size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::Asn1Sequence* get_RecipientEncryptedKeys() ;

/// @brief Method ToAsn1Object addr 0xe79cb4 size 0x1ec virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "KeyAgreeRecipientInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
KeyAgreeRecipientInfo(KeyAgreeRecipientInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KeyAgreeRecipientInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
KeyAgreeRecipientInfo(KeyAgreeRecipientInfo const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 KeyAgreeRecipientInfo()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo, 0x38>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo*, "Org.BouncyCastle.Asn1.Cms", "KeyAgreeRecipientInfo");
