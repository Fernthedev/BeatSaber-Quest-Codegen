#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EnvelopedDataHelper)
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
namespace Org::BouncyCastle::Crypto {
class CipherKeyGenerator;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class EnvelopedDataHelper;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::EnvelopedDataHelper);
// Type: Org.BouncyCastle.Cms::EnvelopedDataHelper
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(668))
// CS Name: ::Org.BouncyCastle.Cms::EnvelopedDataHelper*
class CORDL_TYPE EnvelopedDataHelper : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_BaseCipherNames(::System::Collections::IDictionary*  value) ;

static inline ::System::Collections::IDictionary* getStaticF_BaseCipherNames() ;

static inline void setStaticF_MacAlgNames(::System::Collections::IDictionary*  value) ;

static inline ::System::Collections::IDictionary* getStaticF_MacAlgNames() ;

/// @brief Method CreateContentCipher addr 0x120174c size 0x70 virtual false final false
static inline ::System::Object* CreateContentCipher(bool  forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters*  encKey, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  encryptionAlgID) ;

/// @brief Method GenerateEncryptionAlgID addr 0x12017bc size 0x90 virtual false final false
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* GenerateEncryptionAlgID(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  encryptionOID, ::Org::BouncyCastle::Crypto::Parameters::KeyParameter*  encKey, ::Org::BouncyCastle::Security::SecureRandom*  random) ;

/// @brief Method CreateKeyGenerator addr 0x120184c size 0x10 virtual false final false
inline ::Org::BouncyCastle::Crypto::CipherKeyGenerator* CreateKeyGenerator(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  algorithm, ::Org::BouncyCastle::Security::SecureRandom*  random) ;

static inline ::Org::BouncyCastle::Cms::EnvelopedDataHelper* New_ctor() ;

/// @brief Method .ctor addr 0x120185c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "EnvelopedDataHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnvelopedDataHelper(EnvelopedDataHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnvelopedDataHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnvelopedDataHelper(EnvelopedDataHelper const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EnvelopedDataHelper()  = default;
public:


// Fields

// Static field BaseCipherNames

// Static field MacAlgNames


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::EnvelopedDataHelper, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::EnvelopedDataHelper);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::EnvelopedDataHelper*, "Org.BouncyCastle.Cms", "EnvelopedDataHelper");
