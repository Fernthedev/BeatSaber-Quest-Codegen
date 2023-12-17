#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PrfAlgorithm)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class PrfAlgorithm;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::PrfAlgorithm);
// Type: Org.BouncyCastle.Crypto.Tls::PrfAlgorithm
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1259))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::PrfAlgorithm*
class CORDL_TYPE PrfAlgorithm : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Field tls_prf_legacy offset 0x0
static constexpr int32_t  tls_prf_legacy{static_cast<int32_t>(0x0)};

/// @brief Field tls_prf_sha256 offset 0x0
static constexpr int32_t  tls_prf_sha256{static_cast<int32_t>(0x1)};

/// @brief Field tls_prf_sha384 offset 0x0
static constexpr int32_t  tls_prf_sha384{static_cast<int32_t>(0x2)};

static inline ::Org::BouncyCastle::Crypto::Tls::PrfAlgorithm* New_ctor() ;

/// @brief Method .ctor addr 0xf92734 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "PrfAlgorithm", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PrfAlgorithm(PrfAlgorithm && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PrfAlgorithm", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PrfAlgorithm(PrfAlgorithm const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PrfAlgorithm()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::PrfAlgorithm, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::PrfAlgorithm);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::PrfAlgorithm*, "Org.BouncyCastle.Crypto.Tls", "PrfAlgorithm");
