#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Packet)
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class Packet;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::Packet);
// Type: Org.BouncyCastle.Bcpg::Packet
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(556))
// CS Name: ::Org.BouncyCastle.Bcpg::Packet*
class CORDL_TYPE Packet : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline ::Org::BouncyCastle::Bcpg::Packet* New_ctor() ;

/// @brief Method .ctor addr 0x11d0404 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "Packet", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Packet(Packet && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Packet", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Packet(Packet const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Packet()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::Packet, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::Packet);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::Packet*, "Org.BouncyCastle.Bcpg", "Packet");
