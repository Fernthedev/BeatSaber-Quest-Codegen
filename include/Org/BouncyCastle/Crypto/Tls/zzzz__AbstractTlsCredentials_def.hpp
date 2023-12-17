#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AbstractTlsCredentials)
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCredentials;
}
namespace Org::BouncyCastle::Crypto::Tls {
class Certificate;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class AbstractTlsCredentials;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::AbstractTlsCredentials);
// Type: Org.BouncyCastle.Crypto.Tls::AbstractTlsCredentials
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1157))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::AbstractTlsCredentials*
class CORDL_TYPE AbstractTlsCredentials : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

 __declspec(property(get=get_Certificate)) ::Org::BouncyCastle::Crypto::Tls::Certificate*  Certificate;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsCredentials"
constexpr operator  ::Org::BouncyCastle::Crypto::Tls::TlsCredentials*() noexcept;

/// @brief Method get_Certificate addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::Org::BouncyCastle::Crypto::Tls::Certificate* get_Certificate() ;

static inline ::Org::BouncyCastle::Crypto::Tls::AbstractTlsCredentials* New_ctor() ;

/// @brief Method .ctor addr 0xf5a300 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "AbstractTlsCredentials", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AbstractTlsCredentials(AbstractTlsCredentials && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AbstractTlsCredentials", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AbstractTlsCredentials(AbstractTlsCredentials const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AbstractTlsCredentials()  = default;
public:


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::AbstractTlsCredentials, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::AbstractTlsCredentials);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::AbstractTlsCredentials*, "Org.BouncyCastle.Crypto.Tls", "AbstractTlsCredentials");
