#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Peer)
namespace ENet {
struct Packet;
}
namespace ENet {
struct PeerState;
}
// Forward declare root types
namespace ENet {
struct Peer;
}
// Write type traits
MARK_VAL_T(::ENet::Peer);
// Type: ENet::Peer
namespace ENet {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15234))
// CS Name: ::ENet::Peer
struct CORDL_TYPE Peer : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field nativePeer offset 0x0
 __declspec(property(get=__get_nativePeer, put=__set_nativePeer)) ::cordl_internals::intptr_t  nativePeer;

/// @brief Field nativeID offset 0x8
 __declspec(property(get=__get_nativeID, put=__set_nativeID)) uint32_t  nativeID;

 __declspec(property(get=get_NativeData, put=set_NativeData)) ::cordl_internals::intptr_t  NativeData;

 __declspec(property(get=get_IsSet)) bool  IsSet;

 __declspec(property(get=get_ID)) uint32_t  _cordl_ID;

 __declspec(property(get=get_IP)) ::StringW  IP;

 __declspec(property(get=get_Port)) uint16_t  Port;

 __declspec(property(get=get_MTU)) uint32_t  MTU;

 __declspec(property(get=get_State)) ::ENet::PeerState  State;

 __declspec(property(get=get_RoundTripTime)) uint32_t  RoundTripTime;

 __declspec(property(get=get_LastRoundTripTime)) uint32_t  LastRoundTripTime;

 __declspec(property(get=get_LastSendTime)) uint32_t  LastSendTime;

 __declspec(property(get=get_LastReceiveTime)) uint32_t  LastReceiveTime;

 __declspec(property(get=get_PacketsSent)) uint64_t  PacketsSent;

 __declspec(property(get=get_PacketsLost)) uint64_t  PacketsLost;

 __declspec(property(get=get_PacketsThrottle)) float_t  PacketsThrottle;

 __declspec(property(get=get_BytesSent)) uint64_t  BytesSent;

 __declspec(property(get=get_BytesReceived)) uint64_t  BytesReceived;

 __declspec(property(get=get_Data, put=set_Data)) ::cordl_internals::intptr_t  Data;

constexpr void __set_nativePeer(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_nativePeer() ;

constexpr ::cordl_internals::intptr_t const& __get_nativePeer() const;

constexpr void __set_nativeID(uint32_t  value) ;

constexpr uint32_t& __get_nativeID() ;

constexpr uint32_t const& __get_nativeID() const;

/// @brief Method get_NativeData addr 0x21f27c0 size 0x8 virtual false final false
inline ::cordl_internals::intptr_t get_NativeData() ;

/// @brief Method set_NativeData addr 0x21f27c8 size 0x8 virtual false final false
inline void set_NativeData(::cordl_internals::intptr_t  value) ;

/// @brief Method .ctor addr 0x21efdb4 size 0x80 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  peer) ;

/// @brief Method get_IsSet addr 0x21f284c size 0x54 virtual false final false
inline bool get_IsSet() ;

/// @brief Method get_ID addr 0x21f28a0 size 0x8 virtual false final false
inline uint32_t get_ID() ;

/// @brief Method get_IP addr 0x21f28a8 size 0xc8 virtual false final false
inline ::StringW get_IP() ;

/// @brief Method get_Port addr 0x21f2b50 size 0x18 virtual false final false
inline uint16_t get_Port() ;

/// @brief Method get_MTU addr 0x21f2be4 size 0x18 virtual false final false
inline uint32_t get_MTU() ;

/// @brief Method get_State addr 0x21f2c78 size 0x70 virtual false final false
inline ::ENet::PeerState get_State() ;

/// @brief Method get_RoundTripTime addr 0x21f2d64 size 0x18 virtual false final false
inline uint32_t get_RoundTripTime() ;

/// @brief Method get_LastRoundTripTime addr 0x21f2df8 size 0x18 virtual false final false
inline uint32_t get_LastRoundTripTime() ;

/// @brief Method get_LastSendTime addr 0x21f2e8c size 0x18 virtual false final false
inline uint32_t get_LastSendTime() ;

/// @brief Method get_LastReceiveTime addr 0x21f2f20 size 0x18 virtual false final false
inline uint32_t get_LastReceiveTime() ;

/// @brief Method get_PacketsSent addr 0x21f2fb4 size 0x18 virtual false final false
inline uint64_t get_PacketsSent() ;

/// @brief Method get_PacketsLost addr 0x21f3048 size 0x18 virtual false final false
inline uint64_t get_PacketsLost() ;

/// @brief Method get_PacketsThrottle addr 0x21f30dc size 0x18 virtual false final false
inline float_t get_PacketsThrottle() ;

/// @brief Method get_BytesSent addr 0x21f3170 size 0x18 virtual false final false
inline uint64_t get_BytesSent() ;

/// @brief Method get_BytesReceived addr 0x21f3204 size 0x18 virtual false final false
inline uint64_t get_BytesReceived() ;

/// @brief Method get_Data addr 0x21f3298 size 0x18 virtual false final false
inline ::cordl_internals::intptr_t get_Data() ;

/// @brief Method set_Data addr 0x21f332c size 0x28 virtual false final false
inline void set_Data(::cordl_internals::intptr_t  value) ;

/// @brief Method ThrowIfNotCreated addr 0x21f2970 size 0xa8 virtual false final false
inline void ThrowIfNotCreated() ;

/// @brief Method ConfigureThrottle addr 0x21f33d8 size 0x48 virtual false final false
inline void ConfigureThrottle(uint32_t  interval, uint32_t  acceleration, uint32_t  deceleration, uint32_t  threshold) ;

/// @brief Method Send addr 0x21f34cc size 0x38 virtual false final false
inline int32_t Send(uint8_t  channelID, ByRef<::ENet::Packet>  packet) ;

/// @brief Method Receive addr 0x21f3598 size 0x94 virtual false final false
inline bool Receive(ByRef<uint8_t>  channelID, ByRef<::ENet::Packet>  packet) ;

/// @brief Method Ping addr 0x21f36b0 size 0x18 virtual false final false
inline void Ping() ;

/// @brief Method PingInterval addr 0x21f3744 size 0x28 virtual false final false
inline void PingInterval(uint32_t  interval) ;

/// @brief Method Timeout addr 0x21f37f0 size 0x40 virtual false final false
inline void Timeout(uint32_t  timeoutLimit, uint32_t  timeoutMinimum, uint32_t  timeoutMaximum) ;

/// @brief Method Disconnect addr 0x21f38cc size 0x28 virtual false final false
inline void Disconnect(uint32_t  data) ;

/// @brief Method DisconnectNow addr 0x21f3978 size 0x28 virtual false final false
inline void DisconnectNow(uint32_t  data) ;

/// @brief Method DisconnectLater addr 0x21f3a24 size 0x28 virtual false final false
inline void DisconnectLater(uint32_t  data) ;

/// @brief Method Reset addr 0x21f3ad0 size 0x18 virtual false final false
inline void Reset() ;

// Ctor Parameters [CppParam { name: "nativePeer", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "nativeID", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr Peer(::cordl_internals::intptr_t  nativePeer, uint32_t  nativeID) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Peer(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Peer()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ENet::Peer, 0x10>, "Size mismatch!");

} // namespace end def ENet
DEFINE_IL2CPP_ARG_TYPE(::ENet::Peer, "ENet", "Peer");
