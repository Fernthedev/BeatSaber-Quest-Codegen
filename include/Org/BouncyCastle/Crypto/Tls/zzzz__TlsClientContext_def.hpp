#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(TlsClientContext)
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsClientContext;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsClientContext);
// Type: Org.BouncyCastle.Crypto.Tls::TlsClientContext
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1289))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::TlsClientContext*
class CORDL_TYPE TlsClientContext {
public:
// Declarations
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsContext"
constexpr operator  ::Org::BouncyCastle::Crypto::Tls::TlsContext*() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "TlsClientContext", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TlsClientContext(TlsClientContext && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TlsClientContext", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TlsClientContext(TlsClientContext const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsClientContext);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsClientContext*, "Org.BouncyCastle.Crypto.Tls", "TlsClientContext");
