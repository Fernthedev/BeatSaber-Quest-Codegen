#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Agreement/zzzz__ECMqvBasicAgreement_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ECMqvWithKdfBasicAgreement)
namespace Org::BouncyCastle::Crypto {
class IDerivationFunction;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Agreement {
class ECMqvWithKdfBasicAgreement;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Agreement::ECMqvWithKdfBasicAgreement);
// Type: Org.BouncyCastle.Crypto.Agreement::ECMqvWithKdfBasicAgreement
namespace Org::BouncyCastle::Crypto::Agreement {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(739))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(740))
// CS Name: ::Org.BouncyCastle.Crypto.Agreement::ECMqvWithKdfBasicAgreement*
class CORDL_TYPE ECMqvWithKdfBasicAgreement : public ::Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement)]{};

/// @brief Field algorithm offset 0x18
 __declspec(property(get=__get_algorithm, put=__set_algorithm)) ::StringW  algorithm;

/// @brief Field kdf offset 0x20
 __declspec(property(get=__get_kdf, put=__set_kdf)) ::Org::BouncyCastle::Crypto::IDerivationFunction*  kdf;

constexpr void __set_algorithm(::StringW  value) ;

constexpr ::StringW& __get_algorithm() ;

constexpr ::StringW const& __get_algorithm() const;

constexpr void __set_kdf(::Org::BouncyCastle::Crypto::IDerivationFunction*  value) ;

constexpr ::Org::BouncyCastle::Crypto::IDerivationFunction* __get_kdf() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IDerivationFunction*> __get_kdf() const;

static inline ::Org::BouncyCastle::Crypto::Agreement::ECMqvWithKdfBasicAgreement* New_ctor(::StringW  algorithm, ::Org::BouncyCastle::Crypto::IDerivationFunction*  kdf) ;

/// @brief Method .ctor addr 0x121b434 size 0xa4 virtual false final false
inline void _ctor(::StringW  algorithm, ::Org::BouncyCastle::Crypto::IDerivationFunction*  kdf) ;

/// @brief Method CalculateAgreement addr 0x121b4d8 size 0x26c virtual true final false
inline ::Org::BouncyCastle::Math::BigInteger* CalculateAgreement(::Org::BouncyCastle::Crypto::ICipherParameters*  pubKey) ;

/// @brief Method BigIntToBytes addr 0x121b744 size 0x4c virtual false final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> BigIntToBytes(::Org::BouncyCastle::Math::BigInteger*  r) ;

// Ctor Parameters [CppParam { name: "", ty: "ECMqvWithKdfBasicAgreement", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ECMqvWithKdfBasicAgreement(ECMqvWithKdfBasicAgreement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ECMqvWithKdfBasicAgreement", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ECMqvWithKdfBasicAgreement(ECMqvWithKdfBasicAgreement const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ECMqvWithKdfBasicAgreement()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Agreement::ECMqvWithKdfBasicAgreement, 0x28>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Agreement
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Agreement::ECMqvWithKdfBasicAgreement);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Agreement::ECMqvWithKdfBasicAgreement*, "Org.BouncyCastle.Crypto.Agreement", "ECMqvWithKdfBasicAgreement");
