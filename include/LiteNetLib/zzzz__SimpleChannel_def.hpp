#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "LiteNetLib/zzzz__BaseChannel_def.hpp"
CORDL_MODULE_EXPORT(SimpleChannel)
namespace LiteNetLib {
class NetPacket;
}
namespace LiteNetLib {
class NetPeer;
}
// Forward declare root types
namespace LiteNetLib {
class SimpleChannel;
}
// Write type traits
MARK_REF_PTR_T(::LiteNetLib::SimpleChannel);
// Type: LiteNetLib::SimpleChannel
namespace LiteNetLib {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14127))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14187))
// CS Name: ::LiteNetLib::SimpleChannel*
class CORDL_TYPE SimpleChannel : public ::LiteNetLib::BaseChannel {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::LiteNetLib::BaseChannel)]{};

static inline ::LiteNetLib::SimpleChannel* New_ctor(::LiteNetLib::NetPeer*  peer) ;

/// @brief Method .ctor addr 0x22080c0 size 0x4 virtual false final false
inline void _ctor(::LiteNetLib::NetPeer*  peer) ;

/// @brief Method SendNextPackets addr 0x22080c4 size 0x170 virtual true final false
inline void SendNextPackets() ;

/// @brief Method ProcessPacket addr 0x2208234 size 0x8 virtual true final false
inline bool ProcessPacket(::LiteNetLib::NetPacket*  packet) ;

// Ctor Parameters [CppParam { name: "", ty: "SimpleChannel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SimpleChannel(SimpleChannel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimpleChannel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimpleChannel(SimpleChannel const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SimpleChannel()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::SimpleChannel, 0x28>, "Size mismatch!");

} // namespace end def LiteNetLib
NEED_NO_BOX(::LiteNetLib::SimpleChannel);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::SimpleChannel*, "LiteNetLib", "SimpleChannel");
