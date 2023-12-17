#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MgfParameters)
namespace Org::BouncyCastle::Crypto {
class IDerivationParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class MgfParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::MgfParameters);
// Type: Org.BouncyCastle.Crypto.Parameters::MgfParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1065))
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::MgfParameters*
class CORDL_TYPE MgfParameters : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field seed offset 0x10
 __declspec(property(get=__get_seed, put=__set_seed)) ::ArrayW<uint8_t,::Array<uint8_t>*>  seed;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDerivationParameters"
constexpr operator  ::Org::BouncyCastle::Crypto::IDerivationParameters*() noexcept;

constexpr void __set_seed(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_seed() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_seed() const;

static inline ::Org::BouncyCastle::Crypto::Parameters::MgfParameters* New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  seed) ;

/// @brief Method .ctor addr 0xf38834 size 0x1c virtual false final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  seed) ;

static inline ::Org::BouncyCastle::Crypto::Parameters::MgfParameters* New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  seed, int32_t  off, int32_t  len) ;

/// @brief Method .ctor addr 0xf38850 size 0x90 virtual false final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  seed, int32_t  off, int32_t  len) ;

/// @brief Method GetSeed addr 0xf388e0 size 0x78 virtual false final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetSeed() ;

// Ctor Parameters [CppParam { name: "", ty: "MgfParameters", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MgfParameters(MgfParameters && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MgfParameters", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MgfParameters(MgfParameters const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MgfParameters()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::MgfParameters, 0x18>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::MgfParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::MgfParameters*, "Org.BouncyCastle.Crypto.Parameters", "MgfParameters");
