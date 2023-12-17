#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CryptoApiRandomGenerator)
namespace System::Security::Cryptography {
class RandomNumberGenerator;
}
namespace Org::BouncyCastle::Crypto::Prng {
class IRandomGenerator;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Prng {
class CryptoApiRandomGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator);
// Type: Org.BouncyCastle.Crypto.Prng::CryptoApiRandomGenerator
namespace Org::BouncyCastle::Crypto::Prng {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1106))
// CS Name: ::Org.BouncyCastle.Crypto.Prng::CryptoApiRandomGenerator*
class CORDL_TYPE CryptoApiRandomGenerator : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field rndProv offset 0x10
 __declspec(property(get=__get_rndProv, put=__set_rndProv)) ::System::Security::Cryptography::RandomNumberGenerator*  rndProv;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Prng::IRandomGenerator"
constexpr operator  ::Org::BouncyCastle::Crypto::Prng::IRandomGenerator*() noexcept;

constexpr void __set_rndProv(::System::Security::Cryptography::RandomNumberGenerator*  value) ;

constexpr ::System::Security::Cryptography::RandomNumberGenerator* __get_rndProv() ;

constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::RandomNumberGenerator*> __get_rndProv() const;

static inline ::Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator* New_ctor() ;

/// @brief Method .ctor addr 0xf41e40 size 0x34 virtual false final false
inline void _ctor() ;

static inline ::Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator* New_ctor(::System::Security::Cryptography::RandomNumberGenerator*  rng) ;

/// @brief Method .ctor addr 0xf41e74 size 0x28 virtual false final false
inline void _ctor(::System::Security::Cryptography::RandomNumberGenerator*  rng) ;

/// @brief Method AddSeedMaterial addr 0xf41e9c size 0x4 virtual true final false
inline void AddSeedMaterial(::ArrayW<uint8_t,::Array<uint8_t>*>  seed) ;

/// @brief Method AddSeedMaterial addr 0xf41ea0 size 0x4 virtual true final false
inline void AddSeedMaterial(int64_t  seed) ;

/// @brief Method NextBytes addr 0xf41ea4 size 0x20 virtual true final false
inline void NextBytes(::ArrayW<uint8_t,::Array<uint8_t>*>  bytes) ;

/// @brief Method NextBytes addr 0xf41ec4 size 0x170 virtual true final false
inline void NextBytes(::ArrayW<uint8_t,::Array<uint8_t>*>  bytes, int32_t  start, int32_t  len) ;

// Ctor Parameters [CppParam { name: "", ty: "CryptoApiRandomGenerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CryptoApiRandomGenerator(CryptoApiRandomGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CryptoApiRandomGenerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CryptoApiRandomGenerator(CryptoApiRandomGenerator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CryptoApiRandomGenerator()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator, 0x18>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Prng
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator*, "Org.BouncyCastle.Crypto.Prng", "CryptoApiRandomGenerator");
