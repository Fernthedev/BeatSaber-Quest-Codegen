#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DHParametersHelper)
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class DHParametersHelper;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Generators::DHParametersHelper);
// Type: Org.BouncyCastle.Crypto.Generators::DHParametersHelper
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(896))
// CS Name: ::Org.BouncyCastle.Crypto.Generators::DHParametersHelper*
class CORDL_TYPE DHParametersHelper : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_Six(::Org::BouncyCastle::Math::BigInteger*  value) ;

static inline ::Org::BouncyCastle::Math::BigInteger* getStaticF_Six() ;

static inline void setStaticF_primeLists(::ArrayW<::ArrayW<int32_t,::Array<int32_t>*>,::Array<::ArrayW<int32_t,::Array<int32_t>*>>*>  value) ;

static inline ::ArrayW<::ArrayW<int32_t,::Array<int32_t>*>,::Array<::ArrayW<int32_t,::Array<int32_t>*>>*> getStaticF_primeLists() ;

static inline void setStaticF_primeProducts(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

static inline ::ArrayW<int32_t,::Array<int32_t>*> getStaticF_primeProducts() ;

static inline void setStaticF_BigPrimeProducts(::ArrayW<::Org::BouncyCastle::Math::BigInteger*,::Array<::Org::BouncyCastle::Math::BigInteger*>*>  value) ;

static inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*,::Array<::Org::BouncyCastle::Math::BigInteger*>*> getStaticF_BigPrimeProducts() ;

/// @brief Method ConstructBigPrimeProducts addr 0xef7f78 size 0x110 virtual false final false
static inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*,::Array<::Org::BouncyCastle::Math::BigInteger*>*> ConstructBigPrimeProducts(::ArrayW<int32_t,::Array<int32_t>*>  primeProducts) ;

/// @brief Method GenerateSafePrimes addr 0xef79a4 size 0x4dc virtual false final false
static inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*,::Array<::Org::BouncyCastle::Math::BigInteger*>*> GenerateSafePrimes(int32_t  size, int32_t  certainty, ::Org::BouncyCastle::Security::SecureRandom*  random) ;

/// @brief Method SelectGenerator addr 0xef7e80 size 0xf0 virtual false final false
static inline ::Org::BouncyCastle::Math::BigInteger* SelectGenerator(::Org::BouncyCastle::Math::BigInteger*  p, ::Org::BouncyCastle::Math::BigInteger*  q, ::Org::BouncyCastle::Security::SecureRandom*  random) ;

static inline ::Org::BouncyCastle::Crypto::Generators::DHParametersHelper* New_ctor() ;

/// @brief Method .ctor addr 0xef8130 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "DHParametersHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DHParametersHelper(DHParametersHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DHParametersHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DHParametersHelper(DHParametersHelper const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DHParametersHelper()  = default;
public:


// Fields

// Static field Six

// Static field primeLists

// Static field primeProducts

// Static field BigPrimeProducts


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Generators::DHParametersHelper, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Generators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Generators::DHParametersHelper);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Generators::DHParametersHelper*, "Org.BouncyCastle.Crypto.Generators", "DHParametersHelper");
