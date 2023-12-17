#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__NaccacheSternKeyParameters_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NaccacheSternPrivateKeyParameters)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System::Collections {
class IList;
}
namespace System::Collections {
class ArrayList;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class NaccacheSternPrivateKeyParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::NaccacheSternPrivateKeyParameters);
// Type: Org.BouncyCastle.Crypto.Parameters::NaccacheSternPrivateKeyParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1069))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1070))
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::NaccacheSternPrivateKeyParameters*
class CORDL_TYPE NaccacheSternPrivateKeyParameters : public ::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters)]{};

/// @brief Field phiN offset 0x30
 __declspec(property(get=__get_phiN, put=__set_phiN)) ::Org::BouncyCastle::Math::BigInteger*  phiN;

/// @brief Field smallPrimes offset 0x38
 __declspec(property(get=__get_smallPrimes, put=__set_smallPrimes)) ::System::Collections::IList*  smallPrimes;

 __declspec(property(get=get_PhiN)) ::Org::BouncyCastle::Math::BigInteger*  PhiN;

 __declspec(property(get=get_SmallPrimes)) ::System::Collections::ArrayList*  SmallPrimes;

 __declspec(property(get=get_SmallPrimesList)) ::System::Collections::IList*  SmallPrimesList;

constexpr void __set_phiN(::Org::BouncyCastle::Math::BigInteger*  value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger* __get_phiN() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> __get_phiN() const;

constexpr void __set_smallPrimes(::System::Collections::IList*  value) ;

constexpr ::System::Collections::IList* __get_smallPrimes() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> __get_smallPrimes() const;

static inline ::Org::BouncyCastle::Crypto::Parameters::NaccacheSternPrivateKeyParameters* New_ctor(::Org::BouncyCastle::Math::BigInteger*  g, ::Org::BouncyCastle::Math::BigInteger*  n, int32_t  lowerSigmaBound, ::System::Collections::ArrayList*  smallPrimes, ::Org::BouncyCastle::Math::BigInteger*  phiN) ;

/// @brief Method .ctor addr 0xf38da4 size 0x54 virtual false final false
inline void _ctor(::Org::BouncyCastle::Math::BigInteger*  g, ::Org::BouncyCastle::Math::BigInteger*  n, int32_t  lowerSigmaBound, ::System::Collections::ArrayList*  smallPrimes, ::Org::BouncyCastle::Math::BigInteger*  phiN) ;

static inline ::Org::BouncyCastle::Crypto::Parameters::NaccacheSternPrivateKeyParameters* New_ctor(::Org::BouncyCastle::Math::BigInteger*  g, ::Org::BouncyCastle::Math::BigInteger*  n, int32_t  lowerSigmaBound, ::System::Collections::IList*  smallPrimes, ::Org::BouncyCastle::Math::BigInteger*  phiN) ;

/// @brief Method .ctor addr 0xf38df8 size 0x54 virtual false final false
inline void _ctor(::Org::BouncyCastle::Math::BigInteger*  g, ::Org::BouncyCastle::Math::BigInteger*  n, int32_t  lowerSigmaBound, ::System::Collections::IList*  smallPrimes, ::Org::BouncyCastle::Math::BigInteger*  phiN) ;

/// @brief Method get_PhiN addr 0xf38e4c size 0x8 virtual false final false
inline ::Org::BouncyCastle::Math::BigInteger* get_PhiN() ;

/// @brief Method get_SmallPrimes addr 0xf38e54 size 0x68 virtual false final false
inline ::System::Collections::ArrayList* get_SmallPrimes() ;

/// @brief Method get_SmallPrimesList addr 0xf38ebc size 0x8 virtual false final false
inline ::System::Collections::IList* get_SmallPrimesList() ;

// Ctor Parameters [CppParam { name: "", ty: "NaccacheSternPrivateKeyParameters", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NaccacheSternPrivateKeyParameters(NaccacheSternPrivateKeyParameters && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NaccacheSternPrivateKeyParameters", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NaccacheSternPrivateKeyParameters(NaccacheSternPrivateKeyParameters const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NaccacheSternPrivateKeyParameters()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::NaccacheSternPrivateKeyParameters, 0x40>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::NaccacheSternPrivateKeyParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::NaccacheSternPrivateKeyParameters*, "Org.BouncyCastle.Crypto.Parameters", "NaccacheSternPrivateKeyParameters");
