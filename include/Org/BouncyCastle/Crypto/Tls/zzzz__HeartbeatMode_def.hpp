#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HeartbeatMode)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class HeartbeatMode;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::HeartbeatMode);
// Type: Org.BouncyCastle.Crypto.Tls::HeartbeatMode
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1251))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::HeartbeatMode*
class CORDL_TYPE HeartbeatMode : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Field peer_allowed_to_send offset 0x0
static constexpr uint8_t  peer_allowed_to_send{static_cast<uint8_t>(0x1u)};

/// @brief Field peer_not_allowed_to_send offset 0x0
static constexpr uint8_t  peer_not_allowed_to_send{static_cast<uint8_t>(0x2u)};

/// @brief Method IsValid addr 0xf91770 size 0x14 virtual false final false
static inline bool IsValid(uint8_t  heartbeatMode) ;

static inline ::Org::BouncyCastle::Crypto::Tls::HeartbeatMode* New_ctor() ;

/// @brief Method .ctor addr 0xf91e9c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "HeartbeatMode", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HeartbeatMode(HeartbeatMode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HeartbeatMode", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HeartbeatMode(HeartbeatMode const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HeartbeatMode()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::HeartbeatMode, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::HeartbeatMode);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::HeartbeatMode*, "Org.BouncyCastle.Crypto.Tls", "HeartbeatMode");
