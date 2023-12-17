#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IXof)
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class IXof;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::IXof);
// Type: Org.BouncyCastle.Crypto::IXof
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(773))
// CS Name: ::Org.BouncyCastle.Crypto::IXof*
class CORDL_TYPE IXof {
public:
// Declarations
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDigest"
constexpr operator  ::Org::BouncyCastle::Crypto::IDigest*() noexcept;

/// @brief Method DoFinal addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t DoFinal(::ArrayW<uint8_t,::Array<uint8_t>*>  output, int32_t  outOff, int32_t  outLen) ;

/// @brief Method DoOutput addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t DoOutput(::ArrayW<uint8_t,::Array<uint8_t>*>  output, int32_t  outOff, int32_t  outLen) ;

// Ctor Parameters [CppParam { name: "", ty: "IXof", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IXof(IXof && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IXof", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IXof(IXof const& ) = delete;


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto
NEED_NO_BOX(::Org::BouncyCastle::Crypto::IXof);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::IXof*, "Org.BouncyCastle.Crypto", "IXof");
