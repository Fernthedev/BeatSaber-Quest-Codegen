#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__ContainedPacket_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MarkerPacket)
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class MarkerPacket;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::MarkerPacket);
// Type: Org.BouncyCastle.Bcpg::MarkerPacket
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(560))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(574))
// CS Name: ::Org.BouncyCastle.Bcpg::MarkerPacket*
class CORDL_TYPE MarkerPacket : public ::Org::BouncyCastle::Bcpg::ContainedPacket {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::Org::BouncyCastle::Bcpg::ContainedPacket)]{};

/// @brief Field marker offset 0x10
 __declspec(property(get=__get_marker, put=__set_marker)) ::ArrayW<uint8_t,::Array<uint8_t>*>  marker;

constexpr void __set_marker(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_marker() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_marker() const;

static inline ::Org::BouncyCastle::Bcpg::MarkerPacket* New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream*  bcpgIn) ;

/// @brief Method .ctor addr 0x11ceb00 size 0x9c virtual false final false
inline void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream*  bcpgIn) ;

/// @brief Method Encode addr 0x11d1d04 size 0x28 virtual true final false
inline void Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream*  bcpgOut) ;

// Ctor Parameters [CppParam { name: "", ty: "MarkerPacket", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MarkerPacket(MarkerPacket && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MarkerPacket", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MarkerPacket(MarkerPacket const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MarkerPacket()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::MarkerPacket, 0x18>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::MarkerPacket);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::MarkerPacket*, "Org.BouncyCastle.Bcpg", "MarkerPacket");
