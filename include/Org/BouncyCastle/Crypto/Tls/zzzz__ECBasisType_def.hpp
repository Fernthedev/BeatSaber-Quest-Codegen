#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ECBasisType)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class ECBasisType;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::ECBasisType);
// Type: Org.BouncyCastle.Crypto.Tls::ECBasisType
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1238))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::ECBasisType*
class CORDL_TYPE ECBasisType : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Field ec_basis_trinomial offset 0x0
static constexpr uint8_t  ec_basis_trinomial{static_cast<uint8_t>(0x1u)};

/// @brief Field ec_basis_pentanomial offset 0x0
static constexpr uint8_t  ec_basis_pentanomial{static_cast<uint8_t>(0x2u)};

/// @brief Method IsValid addr 0xf91364 size 0x14 virtual false final false
static inline bool IsValid(uint8_t  ecBasisType) ;

static inline ::Org::BouncyCastle::Crypto::Tls::ECBasisType* New_ctor() ;

/// @brief Method .ctor addr 0xf91378 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ECBasisType", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ECBasisType(ECBasisType && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ECBasisType", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ECBasisType(ECBasisType const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ECBasisType()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::ECBasisType, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::ECBasisType);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::ECBasisType*, "Org.BouncyCastle.Crypto.Tls", "ECBasisType");
