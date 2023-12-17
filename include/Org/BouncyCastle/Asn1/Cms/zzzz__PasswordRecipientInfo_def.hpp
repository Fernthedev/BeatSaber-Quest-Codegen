#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(PasswordRecipientInfo)
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class PasswordRecipientInfo;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo);
// Type: Org.BouncyCastle.Asn1.Cms::PasswordRecipientInfo
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(87))
// CS Name: ::Org.BouncyCastle.Asn1.Cms::PasswordRecipientInfo*
class CORDL_TYPE PasswordRecipientInfo : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field version offset 0x10
 __declspec(property(get=__get_version, put=__set_version)) ::Org::BouncyCastle::Asn1::DerInteger*  version;

/// @brief Field keyDerivationAlgorithm offset 0x18
 __declspec(property(get=__get_keyDerivationAlgorithm, put=__set_keyDerivationAlgorithm)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  keyDerivationAlgorithm;

/// @brief Field keyEncryptionAlgorithm offset 0x20
 __declspec(property(get=__get_keyEncryptionAlgorithm, put=__set_keyEncryptionAlgorithm)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  keyEncryptionAlgorithm;

/// @brief Field encryptedKey offset 0x28
 __declspec(property(get=__get_encryptedKey, put=__set_encryptedKey)) ::Org::BouncyCastle::Asn1::Asn1OctetString*  encryptedKey;

 __declspec(property(get=get_Version)) ::Org::BouncyCastle::Asn1::DerInteger*  Version;

 __declspec(property(get=get_KeyDerivationAlgorithm)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  KeyDerivationAlgorithm;

 __declspec(property(get=get_KeyEncryptionAlgorithm)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  KeyEncryptionAlgorithm;

 __declspec(property(get=get_EncryptedKey)) ::Org::BouncyCastle::Asn1::Asn1OctetString*  EncryptedKey;

constexpr void __set_version(::Org::BouncyCastle::Asn1::DerInteger*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger* __get_version() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> __get_version() const;

constexpr void __set_keyDerivationAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* __get_keyDerivationAlgorithm() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> __get_keyDerivationAlgorithm() const;

constexpr void __set_keyEncryptionAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* __get_keyEncryptionAlgorithm() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> __get_keyEncryptionAlgorithm() const;

constexpr void __set_encryptedKey(::Org::BouncyCastle::Asn1::Asn1OctetString*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* __get_encryptedKey() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> __get_encryptedKey() const;

static inline ::Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo* New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  keyEncryptionAlgorithm, ::Org::BouncyCastle::Asn1::Asn1OctetString*  encryptedKey) ;

/// @brief Method .ctor addr 0xe7be8c size 0x84 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  keyEncryptionAlgorithm, ::Org::BouncyCastle::Asn1::Asn1OctetString*  encryptedKey) ;

static inline ::Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo* New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  keyDerivationAlgorithm, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  keyEncryptionAlgorithm, ::Org::BouncyCastle::Asn1::Asn1OctetString*  encryptedKey) ;

/// @brief Method .ctor addr 0xe7bf10 size 0x90 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  keyDerivationAlgorithm, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  keyEncryptionAlgorithm, ::Org::BouncyCastle::Asn1::Asn1OctetString*  encryptedKey) ;

static inline ::Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method .ctor addr 0xe7bfa0 size 0x244 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method GetInstance addr 0xe7c1e4 size 0x18 virtual false final false
static inline ::Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject*  obj, bool  explicitly) ;

/// @brief Method GetInstance addr 0xe7c1fc size 0x178 virtual false final false
static inline ::Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo* GetInstance(::System::Object*  obj) ;

/// @brief Method get_Version addr 0xe7c374 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::DerInteger* get_Version() ;

/// @brief Method get_KeyDerivationAlgorithm addr 0xe7c37c size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_KeyDerivationAlgorithm() ;

/// @brief Method get_KeyEncryptionAlgorithm addr 0xe7c384 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_KeyEncryptionAlgorithm() ;

/// @brief Method get_EncryptedKey addr 0xe7c38c size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::Asn1OctetString* get_EncryptedKey() ;

/// @brief Method ToAsn1Object addr 0xe7c394 size 0x18c virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "PasswordRecipientInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PasswordRecipientInfo(PasswordRecipientInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PasswordRecipientInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PasswordRecipientInfo(PasswordRecipientInfo const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PasswordRecipientInfo()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo, 0x30>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo*, "Org.BouncyCastle.Asn1.Cms", "PasswordRecipientInfo");
