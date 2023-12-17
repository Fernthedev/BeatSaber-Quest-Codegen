#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CertChainType)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class CertChainType;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::CertChainType);
// Type: Org.BouncyCastle.Crypto.Tls::CertChainType
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1185))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::CertChainType*
class CORDL_TYPE CertChainType : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Field individual_certs offset 0x0
static constexpr uint8_t  individual_certs{static_cast<uint8_t>(0x0u)};

/// @brief Field pkipath offset 0x0
static constexpr uint8_t  pkipath{static_cast<uint8_t>(0x1u)};

/// @brief Method IsValid addr 0xf5e460 size 0x10 virtual false final false
static inline bool IsValid(uint8_t  certChainType) ;

static inline ::Org::BouncyCastle::Crypto::Tls::CertChainType* New_ctor() ;

/// @brief Method .ctor addr 0xf5e470 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "CertChainType", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CertChainType(CertChainType && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CertChainType", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CertChainType(CertChainType const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CertChainType()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::CertChainType, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::CertChainType);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::CertChainType*, "Org.BouncyCastle.Crypto.Tls", "CertChainType");
