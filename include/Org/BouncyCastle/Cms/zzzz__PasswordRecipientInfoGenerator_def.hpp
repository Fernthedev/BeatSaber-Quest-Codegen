#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PasswordRecipientInfoGenerator)
namespace Org::BouncyCastle::Asn1::Cms {
class RecipientInfo;
}
namespace Org::BouncyCastle::Cms {
class CmsEnvelopedHelper;
}
namespace Org::BouncyCastle::Cms {
class RecipientInfoGenerator;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class PasswordRecipientInfoGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator);
// Type: Org.BouncyCastle.Cms::PasswordRecipientInfoGenerator
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(682))
// CS Name: ::Org.BouncyCastle.Cms::PasswordRecipientInfoGenerator*
class CORDL_TYPE PasswordRecipientInfoGenerator : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field keyDerivationAlgorithm offset 0x10
 __declspec(property(get=__get_keyDerivationAlgorithm, put=__set_keyDerivationAlgorithm)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  keyDerivationAlgorithm;

/// @brief Field keyEncryptionKey offset 0x18
 __declspec(property(get=__get_keyEncryptionKey, put=__set_keyEncryptionKey)) ::Org::BouncyCastle::Crypto::Parameters::KeyParameter*  keyEncryptionKey;

/// @brief Field keyEncryptionKeyOID offset 0x20
 __declspec(property(get=__get_keyEncryptionKeyOID, put=__set_keyEncryptionKeyOID)) ::StringW  keyEncryptionKeyOID;

 __declspec(property(put=set_KeyDerivationAlgorithm)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  KeyDerivationAlgorithm;

 __declspec(property(put=set_KeyEncryptionKey)) ::Org::BouncyCastle::Crypto::Parameters::KeyParameter*  KeyEncryptionKey;

 __declspec(property(put=set_KeyEncryptionKeyOID)) ::StringW  KeyEncryptionKeyOID;

/// @brief Convert operator to "::Org::BouncyCastle::Cms::RecipientInfoGenerator"
constexpr operator  ::Org::BouncyCastle::Cms::RecipientInfoGenerator*() noexcept;

static inline void setStaticF_Helper(::Org::BouncyCastle::Cms::CmsEnvelopedHelper*  value) ;

static inline ::Org::BouncyCastle::Cms::CmsEnvelopedHelper* getStaticF_Helper() ;

constexpr void __set_keyDerivationAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* __get_keyDerivationAlgorithm() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> __get_keyDerivationAlgorithm() const;

constexpr void __set_keyEncryptionKey(::Org::BouncyCastle::Crypto::Parameters::KeyParameter*  value) ;

constexpr ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* __get_keyEncryptionKey() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*> __get_keyEncryptionKey() const;

constexpr void __set_keyEncryptionKeyOID(::StringW  value) ;

constexpr ::StringW& __get_keyEncryptionKeyOID() ;

constexpr ::StringW const& __get_keyEncryptionKeyOID() const;

static inline ::Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator* New_ctor() ;

/// @brief Method .ctor addr 0x120758c size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method set_KeyDerivationAlgorithm addr 0x1207594 size 0x8 virtual false final false
inline void set_KeyDerivationAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  value) ;

/// @brief Method set_KeyEncryptionKey addr 0x120759c size 0x8 virtual false final false
inline void set_KeyEncryptionKey(::Org::BouncyCastle::Crypto::Parameters::KeyParameter*  value) ;

/// @brief Method set_KeyEncryptionKeyOID addr 0x12075a4 size 0x8 virtual false final false
inline void set_KeyEncryptionKeyOID(::StringW  value) ;

/// @brief Method Generate addr 0x12075ac size 0x4bc virtual true final true
inline ::Org::BouncyCastle::Asn1::Cms::RecipientInfo* Generate(::Org::BouncyCastle::Crypto::Parameters::KeyParameter*  contentEncryptionKey, ::Org::BouncyCastle::Security::SecureRandom*  random) ;

// Ctor Parameters [CppParam { name: "", ty: "PasswordRecipientInfoGenerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PasswordRecipientInfoGenerator(PasswordRecipientInfoGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PasswordRecipientInfoGenerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PasswordRecipientInfoGenerator(PasswordRecipientInfoGenerator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PasswordRecipientInfoGenerator()  = default;
public:


// Fields

// Static field Helper


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator, 0x28>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator*, "Org.BouncyCastle.Cms", "PasswordRecipientInfoGenerator");
