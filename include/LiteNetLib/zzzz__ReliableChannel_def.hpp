#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "LiteNetLib/zzzz__BaseChannel_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReliableChannel)
namespace LiteNetLib {
struct DeliveryMethod;
}
namespace LiteNetLib {
class NetPacket;
}
namespace LiteNetLib {
class NetPeer;
}
namespace LiteNetLib {
struct __ReliableChannel__PendingPacket;
}
// Forward declare root types
namespace LiteNetLib {
class ReliableChannel;
}
namespace LiteNetLib {
struct __ReliableChannel__PendingPacket;
}
// Write type traits
MARK_REF_PTR_T(::LiteNetLib::ReliableChannel);
MARK_VAL_T(::LiteNetLib::__ReliableChannel__PendingPacket);
// Type: ::PendingPacket
namespace LiteNetLib {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14184))
// CS Name: ::ReliableChannel::PendingPacket
struct CORDL_TYPE __ReliableChannel__PendingPacket : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field _packet offset 0x0
 __declspec(property(get=__get__packet, put=__set__packet)) ::LiteNetLib::NetPacket*  _packet;

/// @brief Field _timeStamp offset 0x8
 __declspec(property(get=__get__timeStamp, put=__set__timeStamp)) int64_t  _timeStamp;

/// @brief Field _isSent offset 0x10
 __declspec(property(get=__get__isSent, put=__set__isSent)) bool  _isSent;

constexpr void __set__packet(::LiteNetLib::NetPacket*  value) ;

constexpr ::LiteNetLib::NetPacket* __get__packet() ;

constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetPacket*> __get__packet() const;

constexpr void __set__timeStamp(int64_t  value) ;

constexpr int64_t& __get__timeStamp() ;

constexpr int64_t const& __get__timeStamp() const;

constexpr void __set__isSent(bool  value) ;

constexpr bool& __get__isSent() ;

constexpr bool const& __get__isSent() const;

/// @brief Method ToString addr 0x2207b80 size 0x68 virtual true final false
inline ::StringW ToString() ;

/// @brief Method Init addr 0x2207600 size 0xc virtual false final false
inline void Init(::LiteNetLib::NetPacket*  packet) ;

/// @brief Method TrySend addr 0x220760c size 0x78 virtual false final false
inline void TrySend(int64_t  currentTime, ::LiteNetLib::NetPeer*  peer) ;

/// @brief Method Clear addr 0x2207158 size 0x3c virtual false final false
inline bool Clear(::LiteNetLib::NetPeer*  peer) ;

// Ctor Parameters [CppParam { name: "_packet", ty: "::LiteNetLib::NetPacket*", modifiers: "", def_value: None }, CppParam { name: "_timeStamp", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "_isSent", ty: "bool", modifiers: "", def_value: None }]
constexpr __ReliableChannel__PendingPacket(::LiteNetLib::NetPacket*  _packet, int64_t  _timeStamp, bool  _isSent) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ReliableChannel__PendingPacket(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ReliableChannel__PendingPacket()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::__ReliableChannel__PendingPacket, 0x18>, "Size mismatch!");

} // namespace end def LiteNetLib
// Type: LiteNetLib::ReliableChannel
namespace LiteNetLib {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14127))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14185))
// CS Name: ::LiteNetLib::ReliableChannel*
class CORDL_TYPE ReliableChannel : public ::LiteNetLib::BaseChannel {
public:
// Declarations
using PendingPacket = ::LiteNetLib::__ReliableChannel__PendingPacket;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x68};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x68 - sizeof(::LiteNetLib::BaseChannel)]{};

/// @brief Field BitsInByte offset 0x0
static constexpr int32_t  BitsInByte{static_cast<int32_t>(0x8)};

/// @brief Field _outgoingAcks offset 0x28
 __declspec(property(get=__get__outgoingAcks, put=__set__outgoingAcks)) ::LiteNetLib::NetPacket*  _outgoingAcks;

/// @brief Field _pendingPackets offset 0x30
 __declspec(property(get=__get__pendingPackets, put=__set__pendingPackets)) ::ArrayW<::LiteNetLib::__ReliableChannel__PendingPacket,::Array<::LiteNetLib::__ReliableChannel__PendingPacket>*>  _pendingPackets;

/// @brief Field _receivedPackets offset 0x38
 __declspec(property(get=__get__receivedPackets, put=__set__receivedPackets)) ::ArrayW<::LiteNetLib::NetPacket*,::Array<::LiteNetLib::NetPacket*>*>  _receivedPackets;

/// @brief Field _earlyReceived offset 0x40
 __declspec(property(get=__get__earlyReceived, put=__set__earlyReceived)) ::ArrayW<bool,::Array<bool>*>  _earlyReceived;

/// @brief Field _localSeqence offset 0x48
 __declspec(property(get=__get__localSeqence, put=__set__localSeqence)) int32_t  _localSeqence;

/// @brief Field _remoteSequence offset 0x4c
 __declspec(property(get=__get__remoteSequence, put=__set__remoteSequence)) int32_t  _remoteSequence;

/// @brief Field _localWindowStart offset 0x50
 __declspec(property(get=__get__localWindowStart, put=__set__localWindowStart)) int32_t  _localWindowStart;

/// @brief Field _remoteWindowStart offset 0x54
 __declspec(property(get=__get__remoteWindowStart, put=__set__remoteWindowStart)) int32_t  _remoteWindowStart;

/// @brief Field _mustSendAcks offset 0x58
 __declspec(property(get=__get__mustSendAcks, put=__set__mustSendAcks)) bool  _mustSendAcks;

/// @brief Field _deliveryMethod offset 0x59
 __declspec(property(get=__get__deliveryMethod, put=__set__deliveryMethod)) ::LiteNetLib::DeliveryMethod  _deliveryMethod;

/// @brief Field _ordered offset 0x5a
 __declspec(property(get=__get__ordered, put=__set__ordered)) bool  _ordered;

/// @brief Field _windowSize offset 0x5c
 __declspec(property(get=__get__windowSize, put=__set__windowSize)) int32_t  _windowSize;

/// @brief Field _id offset 0x60
 __declspec(property(get=__get__id, put=__set__id)) uint8_t  _id;

constexpr void __set__outgoingAcks(::LiteNetLib::NetPacket*  value) ;

constexpr ::LiteNetLib::NetPacket* __get__outgoingAcks() ;

constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetPacket*> __get__outgoingAcks() const;

constexpr void __set__pendingPackets(::ArrayW<::LiteNetLib::__ReliableChannel__PendingPacket,::Array<::LiteNetLib::__ReliableChannel__PendingPacket>*>  value) ;

constexpr ::ArrayW<::LiteNetLib::__ReliableChannel__PendingPacket,::Array<::LiteNetLib::__ReliableChannel__PendingPacket>*>& __get__pendingPackets() ;

constexpr ::ArrayW<::LiteNetLib::__ReliableChannel__PendingPacket,::Array<::LiteNetLib::__ReliableChannel__PendingPacket>*> const& __get__pendingPackets() const;

constexpr void __set__receivedPackets(::ArrayW<::LiteNetLib::NetPacket*,::Array<::LiteNetLib::NetPacket*>*>  value) ;

constexpr ::ArrayW<::LiteNetLib::NetPacket*,::Array<::LiteNetLib::NetPacket*>*>& __get__receivedPackets() ;

constexpr ::ArrayW<::LiteNetLib::NetPacket*,::Array<::LiteNetLib::NetPacket*>*> const& __get__receivedPackets() const;

constexpr void __set__earlyReceived(::ArrayW<bool,::Array<bool>*>  value) ;

constexpr ::ArrayW<bool,::Array<bool>*>& __get__earlyReceived() ;

constexpr ::ArrayW<bool,::Array<bool>*> const& __get__earlyReceived() const;

constexpr void __set__localSeqence(int32_t  value) ;

constexpr int32_t& __get__localSeqence() ;

constexpr int32_t const& __get__localSeqence() const;

constexpr void __set__remoteSequence(int32_t  value) ;

constexpr int32_t& __get__remoteSequence() ;

constexpr int32_t const& __get__remoteSequence() const;

constexpr void __set__localWindowStart(int32_t  value) ;

constexpr int32_t& __get__localWindowStart() ;

constexpr int32_t const& __get__localWindowStart() const;

constexpr void __set__remoteWindowStart(int32_t  value) ;

constexpr int32_t& __get__remoteWindowStart() ;

constexpr int32_t const& __get__remoteWindowStart() const;

constexpr void __set__mustSendAcks(bool  value) ;

constexpr bool& __get__mustSendAcks() ;

constexpr bool const& __get__mustSendAcks() const;

constexpr void __set__deliveryMethod(::LiteNetLib::DeliveryMethod  value) ;

constexpr ::LiteNetLib::DeliveryMethod& __get__deliveryMethod() ;

constexpr ::LiteNetLib::DeliveryMethod const& __get__deliveryMethod() const;

constexpr void __set__ordered(bool  value) ;

constexpr bool& __get__ordered() ;

constexpr bool const& __get__ordered() const;

constexpr void __set__windowSize(int32_t  value) ;

constexpr int32_t& __get__windowSize() ;

constexpr int32_t const& __get__windowSize() const;

constexpr void __set__id(uint8_t  value) ;

constexpr uint8_t& __get__id() ;

constexpr uint8_t const& __get__id() const;

static inline ::LiteNetLib::ReliableChannel* New_ctor(::LiteNetLib::NetPeer*  peer, bool  ordered, uint8_t  id) ;

/// @brief Method .ctor addr 0x22036dc size 0x188 virtual false final false
inline void _ctor(::LiteNetLib::NetPeer*  peer, bool  ordered, uint8_t  id) ;

/// @brief Method ProcessAck addr 0x2206e08 size 0x350 virtual false final false
inline void ProcessAck(::LiteNetLib::NetPacket*  packet) ;

/// @brief Method SendNextPackets addr 0x2207194 size 0x46c virtual true final false
inline void SendNextPackets() ;

/// @brief Method ProcessPacket addr 0x2207684 size 0x4fc virtual true final false
inline bool ProcessPacket(::LiteNetLib::NetPacket*  packet) ;

// Ctor Parameters [CppParam { name: "", ty: "ReliableChannel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ReliableChannel(ReliableChannel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReliableChannel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReliableChannel(ReliableChannel const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ReliableChannel()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::ReliableChannel, 0x68>, "Size mismatch!");

} // namespace end def LiteNetLib
NEED_NO_BOX(::LiteNetLib::ReliableChannel);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::ReliableChannel*, "LiteNetLib", "ReliableChannel");
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::__ReliableChannel__PendingPacket, "LiteNetLib", "ReliableChannel/PendingPacket");
