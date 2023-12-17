#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IEntropySourceProvider)
namespace Org::BouncyCastle::Crypto {
class IEntropySource;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class IEntropySourceProvider;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::IEntropySourceProvider);
// Type: Org.BouncyCastle.Crypto::IEntropySourceProvider
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1099))
// CS Name: ::Org.BouncyCastle.Crypto::IEntropySourceProvider*
class CORDL_TYPE IEntropySourceProvider {
public:
// Declarations
/// @brief Method Get addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::Org::BouncyCastle::Crypto::IEntropySource* Get(int32_t  bitsRequired) ;

// Ctor Parameters [CppParam { name: "", ty: "IEntropySourceProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IEntropySourceProvider(IEntropySourceProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IEntropySourceProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IEntropySourceProvider(IEntropySourceProvider const& ) = delete;


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto
NEED_NO_BOX(::Org::BouncyCastle::Crypto::IEntropySourceProvider);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::IEntropySourceProvider*, "Org.BouncyCastle.Crypto", "IEntropySourceProvider");
