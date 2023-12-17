#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Cms/zzzz__CmsEnvelopedGenerator_def.hpp"
CORDL_MODULE_EXPORT(CmsAuthenticatedGenerator)
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsAuthenticatedGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CmsAuthenticatedGenerator);
// Type: Org.BouncyCastle.Cms::CmsAuthenticatedGenerator
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(617))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(618))
// CS Name: ::Org.BouncyCastle.Cms::CmsAuthenticatedGenerator*
class CORDL_TYPE CmsAuthenticatedGenerator : public ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Org::BouncyCastle::Cms::CmsEnvelopedGenerator)]{};

static inline ::Org::BouncyCastle::Cms::CmsAuthenticatedGenerator* New_ctor() ;

/// @brief Method .ctor addr 0x11d9794 size 0x54 virtual false final false
inline void _ctor() ;

static inline ::Org::BouncyCastle::Cms::CmsAuthenticatedGenerator* New_ctor(::Org::BouncyCastle::Security::SecureRandom*  rand) ;

/// @brief Method .ctor addr 0x11d97e8 size 0x64 virtual false final false
inline void _ctor(::Org::BouncyCastle::Security::SecureRandom*  rand) ;

// Ctor Parameters [CppParam { name: "", ty: "CmsAuthenticatedGenerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CmsAuthenticatedGenerator(CmsAuthenticatedGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CmsAuthenticatedGenerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CmsAuthenticatedGenerator(CmsAuthenticatedGenerator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CmsAuthenticatedGenerator()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsAuthenticatedGenerator, 0x28>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsAuthenticatedGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsAuthenticatedGenerator*, "Org.BouncyCastle.Cms", "CmsAuthenticatedGenerator");
