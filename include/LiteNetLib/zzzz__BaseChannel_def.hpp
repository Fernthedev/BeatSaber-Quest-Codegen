#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BaseChannel)
namespace LiteNetLib {
class NetPacket;
}
namespace LiteNetLib {
class NetPeer;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
// Forward declare root types
namespace LiteNetLib {
class BaseChannel;
}
// Write type traits
MARK_REF_PTR_T(::LiteNetLib::BaseChannel);
// Type: LiteNetLib::BaseChannel
namespace LiteNetLib {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14127))
// CS Name: ::LiteNetLib::BaseChannel*
class CORDL_TYPE BaseChannel : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field Next offset 0x10
 __declspec(property(get=__get_Next, put=__set_Next)) ::LiteNetLib::BaseChannel*  Next;

/// @brief Field Peer offset 0x18
 __declspec(property(get=__get_Peer, put=__set_Peer)) ::LiteNetLib::NetPeer*  Peer;

/// @brief Field OutgoingQueue offset 0x20
 __declspec(property(get=__get_OutgoingQueue, put=__set_OutgoingQueue)) ::System::Collections::Generic::Queue_1<::LiteNetLib::NetPacket*>*  OutgoingQueue;

 __declspec(property(get=get_PacketsInQueue)) int32_t  PacketsInQueue;

constexpr void __set_Next(::LiteNetLib::BaseChannel*  value) ;

constexpr ::LiteNetLib::BaseChannel* __get_Next() ;

constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::BaseChannel*> __get_Next() const;

constexpr void __set_Peer(::LiteNetLib::NetPeer*  value) ;

constexpr ::LiteNetLib::NetPeer* __get_Peer() ;

constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetPeer*> __get_Peer() const;

constexpr void __set_OutgoingQueue(::System::Collections::Generic::Queue_1<::LiteNetLib::NetPacket*>*  value) ;

constexpr ::System::Collections::Generic::Queue_1<::LiteNetLib::NetPacket*>* __get_OutgoingQueue() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::LiteNetLib::NetPacket*>*> __get_OutgoingQueue() const;

static inline ::LiteNetLib::BaseChannel* New_ctor(::LiteNetLib::NetPeer*  peer) ;

/// @brief Method .ctor addr 0x21f7ff8 size 0x94 virtual false final false
inline void _ctor(::LiteNetLib::NetPeer*  peer) ;

/// @brief Method get_PacketsInQueue addr 0x21f808c size 0x48 virtual false final false
inline int32_t get_PacketsInQueue() ;

/// @brief Method AddToQueue addr 0x21f80d4 size 0xfc virtual false final false
inline void AddToQueue(::LiteNetLib::NetPacket*  packet) ;

/// @brief Method SendNextPackets addr 0x0 size 0xffffffffffffffff virtual true final false
inline void SendNextPackets() ;

/// @brief Method ProcessPacket addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool ProcessPacket(::LiteNetLib::NetPacket*  packet) ;

// Ctor Parameters [CppParam { name: "", ty: "BaseChannel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseChannel(BaseChannel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseChannel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseChannel(BaseChannel const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BaseChannel()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::BaseChannel, 0x28>, "Size mismatch!");

} // namespace end def LiteNetLib
NEED_NO_BOX(::LiteNetLib::BaseChannel);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::BaseChannel*, "LiteNetLib", "BaseChannel");
