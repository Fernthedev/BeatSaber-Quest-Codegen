#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Utilities/Encoders/zzzz__Base64Encoder_def.hpp"
CORDL_MODULE_EXPORT(UrlBase64Encoder)
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Encoders {
class UrlBase64Encoder;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::Encoders::UrlBase64Encoder);
// Type: Org.BouncyCastle.Utilities.Encoders::UrlBase64Encoder
namespace Org::BouncyCastle::Utilities::Encoders {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1795))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1803))
// CS Name: ::Org.BouncyCastle.Utilities.Encoders::UrlBase64Encoder*
class CORDL_TYPE UrlBase64Encoder : public ::Org::BouncyCastle::Utilities::Encoders::Base64Encoder {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Org::BouncyCastle::Utilities::Encoders::Base64Encoder)]{};

static inline ::Org::BouncyCastle::Utilities::Encoders::UrlBase64Encoder* New_ctor() ;

/// @brief Method .ctor addr 0x115f750 size 0x74 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "UrlBase64Encoder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UrlBase64Encoder(UrlBase64Encoder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UrlBase64Encoder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UrlBase64Encoder(UrlBase64Encoder const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UrlBase64Encoder()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Encoders::UrlBase64Encoder, 0x28>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Utilities::Encoders
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Encoders::UrlBase64Encoder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Encoders::UrlBase64Encoder*, "Org.BouncyCastle.Utilities.Encoders", "UrlBase64Encoder");
