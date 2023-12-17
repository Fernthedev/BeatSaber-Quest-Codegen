#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ClientAuthenticationType)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class ClientAuthenticationType;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::ClientAuthenticationType);
// Type: Org.BouncyCastle.Crypto.Tls::ClientAuthenticationType
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1199))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::ClientAuthenticationType*
class CORDL_TYPE ClientAuthenticationType : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Field anonymous offset 0x0
static constexpr uint8_t  anonymous{static_cast<uint8_t>(0x0u)};

/// @brief Field certificate_based offset 0x0
static constexpr uint8_t  certificate_based{static_cast<uint8_t>(0x1u)};

/// @brief Field psk offset 0x0
static constexpr uint8_t  psk{static_cast<uint8_t>(0x2u)};

static inline ::Org::BouncyCastle::Crypto::Tls::ClientAuthenticationType* New_ctor() ;

/// @brief Method .ctor addr 0xf61e5c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ClientAuthenticationType", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ClientAuthenticationType(ClientAuthenticationType && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClientAuthenticationType", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClientAuthenticationType(ClientAuthenticationType const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ClientAuthenticationType()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::ClientAuthenticationType, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::ClientAuthenticationType);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::ClientAuthenticationType*, "Org.BouncyCastle.Crypto.Tls", "ClientAuthenticationType");
