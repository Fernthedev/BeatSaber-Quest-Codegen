#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Math/Prime/Generator/zzzz__PrimeGeneratorBase_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SequentialSearchPrimeGeneratorBase)
namespace System {
class Object;
}
namespace Mono::Math {
class BigInteger;
}
// Forward declare root types
namespace Mono::Math::Prime::Generator {
class SequentialSearchPrimeGeneratorBase;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase);
// Type: Mono.Math.Prime.Generator::SequentialSearchPrimeGeneratorBase
namespace Mono::Math::Prime::Generator {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2294))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2295))
// CS Name: ::Mono.Math.Prime.Generator::SequentialSearchPrimeGeneratorBase*
class CORDL_TYPE SequentialSearchPrimeGeneratorBase : public ::Mono::Math::Prime::Generator::PrimeGeneratorBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::Mono::Math::Prime::Generator::PrimeGeneratorBase)]{};

/// @brief Method GenerateSearchBase addr 0x242baa8 size 0x74 virtual true final false
inline ::Mono::Math::BigInteger* GenerateSearchBase(int32_t  bits, ::System::Object*  context) ;

/// @brief Method GenerateNewPrime addr 0x242bb1c size 0x10 virtual true final false
inline ::Mono::Math::BigInteger* GenerateNewPrime(int32_t  bits) ;

/// @brief Method GenerateNewPrime addr 0x242bb2c size 0x2e4 virtual true final false
inline ::Mono::Math::BigInteger* GenerateNewPrime(int32_t  bits, ::System::Object*  context) ;

/// @brief Method IsPrimeAcceptable addr 0x242be10 size 0x8 virtual true final false
inline bool IsPrimeAcceptable(::Mono::Math::BigInteger*  bi, ::System::Object*  context) ;

static inline ::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase* New_ctor() ;

/// @brief Method .ctor addr 0x242a5c4 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SequentialSearchPrimeGeneratorBase", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SequentialSearchPrimeGeneratorBase(SequentialSearchPrimeGeneratorBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SequentialSearchPrimeGeneratorBase", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SequentialSearchPrimeGeneratorBase(SequentialSearchPrimeGeneratorBase const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SequentialSearchPrimeGeneratorBase()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase, 0x10>, "Size mismatch!");

} // namespace end def Mono::Math::Prime::Generator
NEED_NO_BOX(::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase*, "Mono.Math.Prime.Generator", "SequentialSearchPrimeGeneratorBase");
