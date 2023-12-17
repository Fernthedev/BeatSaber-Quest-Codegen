#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Cms/zzzz__CmsEnvelopedGenerator_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CmsEnvelopedDataGenerator)
namespace Org::BouncyCastle::Cms {
class CmsEnvelopedData;
}
namespace Org::BouncyCastle::Crypto {
class ICipherBuilderWithKey;
}
namespace Org::BouncyCastle::Crypto {
class CipherKeyGenerator;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Cms {
class CmsProcessable;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsEnvelopedDataGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator);
// Type: Org.BouncyCastle.Cms::CmsEnvelopedDataGenerator
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(617))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(634))
// CS Name: ::Org.BouncyCastle.Cms::CmsEnvelopedDataGenerator*
class CORDL_TYPE CmsEnvelopedDataGenerator : public ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Org::BouncyCastle::Cms::CmsEnvelopedGenerator)]{};

static inline ::Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator* New_ctor() ;

/// @brief Method .ctor addr 0x11dd994 size 0x54 virtual false final false
inline void _ctor() ;

static inline ::Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator* New_ctor(::Org::BouncyCastle::Security::SecureRandom*  rand) ;

/// @brief Method .ctor addr 0x11dd9e8 size 0x64 virtual false final false
inline void _ctor(::Org::BouncyCastle::Security::SecureRandom*  rand) ;

/// @brief Method Generate addr 0x11dda4c size 0xbfc virtual false final false
inline ::Org::BouncyCastle::Cms::CmsEnvelopedData* Generate(::Org::BouncyCastle::Cms::CmsProcessable*  content, ::StringW  encryptionOid, ::Org::BouncyCastle::Crypto::CipherKeyGenerator*  keyGen) ;

/// @brief Method Generate addr 0x11de648 size 0x1b4 virtual false final false
inline ::Org::BouncyCastle::Cms::CmsEnvelopedData* Generate(::Org::BouncyCastle::Cms::CmsProcessable*  content, ::StringW  encryptionOid) ;

/// @brief Method Generate addr 0x11de7fc size 0xc80 virtual false final false
inline ::Org::BouncyCastle::Cms::CmsEnvelopedData* Generate(::Org::BouncyCastle::Cms::CmsProcessable*  content, ::Org::BouncyCastle::Crypto::ICipherBuilderWithKey*  cipherBuilder) ;

/// @brief Method Generate addr 0x11df47c size 0x1b0 virtual false final false
inline ::Org::BouncyCastle::Cms::CmsEnvelopedData* Generate(::Org::BouncyCastle::Cms::CmsProcessable*  content, ::StringW  encryptionOid, int32_t  keySize) ;

// Ctor Parameters [CppParam { name: "", ty: "CmsEnvelopedDataGenerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CmsEnvelopedDataGenerator(CmsEnvelopedDataGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CmsEnvelopedDataGenerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CmsEnvelopedDataGenerator(CmsEnvelopedDataGenerator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CmsEnvelopedDataGenerator()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator, 0x28>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator*, "Org.BouncyCastle.Cms", "CmsEnvelopedDataGenerator");
