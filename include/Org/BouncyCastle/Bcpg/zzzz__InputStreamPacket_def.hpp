#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__Packet_def.hpp"
CORDL_MODULE_EXPORT(InputStreamPacket)
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class InputStreamPacket;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::InputStreamPacket);
// Type: Org.BouncyCastle.Bcpg::InputStreamPacket
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(556))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(557))
// CS Name: ::Org.BouncyCastle.Bcpg::InputStreamPacket*
class CORDL_TYPE InputStreamPacket : public ::Org::BouncyCastle::Bcpg::Packet {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::Org::BouncyCastle::Bcpg::Packet)]{};

/// @brief Field bcpgIn offset 0x10
 __declspec(property(get=__get_bcpgIn, put=__set_bcpgIn)) ::Org::BouncyCastle::Bcpg::BcpgInputStream*  bcpgIn;

constexpr void __set_bcpgIn(::Org::BouncyCastle::Bcpg::BcpgInputStream*  value) ;

constexpr ::Org::BouncyCastle::Bcpg::BcpgInputStream* __get_bcpgIn() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::BcpgInputStream*> __get_bcpgIn() const;

static inline ::Org::BouncyCastle::Bcpg::InputStreamPacket* New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream*  bcpgIn) ;

/// @brief Method .ctor addr 0x11cd2c0 size 0x28 virtual false final false
inline void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream*  bcpgIn) ;

/// @brief Method GetInputStream addr 0x11d040c size 0x8 virtual false final false
inline ::Org::BouncyCastle::Bcpg::BcpgInputStream* GetInputStream() ;

// Ctor Parameters [CppParam { name: "", ty: "InputStreamPacket", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputStreamPacket(InputStreamPacket && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputStreamPacket", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputStreamPacket(InputStreamPacket const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InputStreamPacket()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::InputStreamPacket, 0x18>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::InputStreamPacket);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::InputStreamPacket*, "Org.BouncyCastle.Bcpg", "InputStreamPacket");
