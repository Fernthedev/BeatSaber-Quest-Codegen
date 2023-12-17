#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VmpcRandomGenerator)
namespace Org::BouncyCastle::Crypto::Prng {
class IRandomGenerator;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Prng {
class VmpcRandomGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator);
// Type: Org.BouncyCastle.Crypto.Prng::VmpcRandomGenerator
namespace Org::BouncyCastle::Crypto::Prng {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1119))
// CS Name: ::Org.BouncyCastle.Crypto.Prng::VmpcRandomGenerator*
class CORDL_TYPE VmpcRandomGenerator : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field n offset 0x10
 __declspec(property(get=__get_n, put=__set_n)) uint8_t  n;

/// @brief Field P offset 0x18
 __declspec(property(get=__get_P, put=__set_P)) ::ArrayW<uint8_t,::Array<uint8_t>*>  P;

/// @brief Field s offset 0x20
 __declspec(property(get=__get_s, put=__set_s)) uint8_t  s;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Prng::IRandomGenerator"
constexpr operator  ::Org::BouncyCastle::Crypto::Prng::IRandomGenerator*() noexcept;

constexpr void __set_n(uint8_t  value) ;

constexpr uint8_t& __get_n() ;

constexpr uint8_t const& __get_n() const;

constexpr void __set_P(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_P() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_P() const;

constexpr void __set_s(uint8_t  value) ;

constexpr uint8_t& __get_s() ;

constexpr uint8_t const& __get_s() const;

static inline ::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator* New_ctor() ;

/// @brief Method .ctor addr 0xf44fd0 size 0x90 virtual false final false
inline void _ctor() ;

/// @brief Method AddSeedMaterial addr 0xf45060 size 0xd0 virtual true final false
inline void AddSeedMaterial(::ArrayW<uint8_t,::Array<uint8_t>*>  seed) ;

/// @brief Method AddSeedMaterial addr 0xf45130 size 0x2c virtual true final false
inline void AddSeedMaterial(int64_t  seed) ;

/// @brief Method NextBytes addr 0xf4515c size 0x24 virtual true final false
inline void NextBytes(::ArrayW<uint8_t,::Array<uint8_t>*>  bytes) ;

/// @brief Method NextBytes addr 0xf45180 size 0x210 virtual true final false
inline void NextBytes(::ArrayW<uint8_t,::Array<uint8_t>*>  bytes, int32_t  start, int32_t  len) ;

// Ctor Parameters [CppParam { name: "", ty: "VmpcRandomGenerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VmpcRandomGenerator(VmpcRandomGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VmpcRandomGenerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VmpcRandomGenerator(VmpcRandomGenerator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 VmpcRandomGenerator()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator, 0x28>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Prng
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator*, "Org.BouncyCastle.Crypto.Prng", "VmpcRandomGenerator");
