#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IBasicAgreement)
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class IBasicAgreement;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::IBasicAgreement);
// Type: Org.BouncyCastle.Crypto::IBasicAgreement
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(733))
// CS Name: ::Org.BouncyCastle.Crypto::IBasicAgreement*
class CORDL_TYPE IBasicAgreement {
public:
// Declarations
/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Init(::Org::BouncyCastle::Crypto::ICipherParameters*  parameters) ;

/// @brief Method GetFieldSize addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetFieldSize() ;

/// @brief Method CalculateAgreement addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::Org::BouncyCastle::Math::BigInteger* CalculateAgreement(::Org::BouncyCastle::Crypto::ICipherParameters*  pubKey) ;

// Ctor Parameters [CppParam { name: "", ty: "IBasicAgreement", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IBasicAgreement(IBasicAgreement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IBasicAgreement", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IBasicAgreement(IBasicAgreement const& ) = delete;


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto
NEED_NO_BOX(::Org::BouncyCastle::Crypto::IBasicAgreement);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::IBasicAgreement*, "Org.BouncyCastle.Crypto", "IBasicAgreement");
