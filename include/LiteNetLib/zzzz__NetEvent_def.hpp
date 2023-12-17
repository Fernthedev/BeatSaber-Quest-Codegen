#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetEvent)
namespace LiteNetLib {
struct __NetEvent__EType;
}
namespace LiteNetLib {
class ConnectionRequest;
}
namespace LiteNetLib {
struct DeliveryMethod;
}
namespace LiteNetLib {
class NetPeer;
}
namespace System::Net {
class IPEndPoint;
}
namespace LiteNetLib {
class NetPacketReader;
}
namespace LiteNetLib {
class NetManager;
}
namespace System::Net::Sockets {
struct SocketError;
}
namespace System {
class Object;
}
namespace LiteNetLib {
struct DisconnectReason;
}
// Forward declare root types
namespace LiteNetLib {
struct __NetEvent__EType;
}
namespace LiteNetLib {
class NetEvent;
}
// Write type traits
MARK_VAL_T(::LiteNetLib::__NetEvent__EType);
MARK_REF_PTR_T(::LiteNetLib::NetEvent);
// Type: ::EType
namespace LiteNetLib {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14163))
// CS Name: ::NetEvent::EType
struct CORDL_TYPE __NetEvent__EType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____NetEvent__EType_Unwrapped
enum struct ____NetEvent__EType_Unwrapped : int32_t {
__E_Connect = static_cast<int32_t>(0x0),
__E_Disconnect = static_cast<int32_t>(0x1),
__E_Receive = static_cast<int32_t>(0x2),
__E_ReceiveUnconnected = static_cast<int32_t>(0x3),
__E_Error = static_cast<int32_t>(0x4),
__E_ConnectionLatencyUpdated = static_cast<int32_t>(0x5),
__E_Broadcast = static_cast<int32_t>(0x6),
__E_ConnectionRequest = static_cast<int32_t>(0x7),
__E_MessageDelivered = static_cast<int32_t>(0x8),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Connect value: static_cast<int32_t>(0x0)
static ::LiteNetLib::__NetEvent__EType const Connect;

/// @brief Field Disconnect value: static_cast<int32_t>(0x1)
static ::LiteNetLib::__NetEvent__EType const Disconnect;

/// @brief Field Receive value: static_cast<int32_t>(0x2)
static ::LiteNetLib::__NetEvent__EType const Receive;

/// @brief Field ReceiveUnconnected value: static_cast<int32_t>(0x3)
static ::LiteNetLib::__NetEvent__EType const ReceiveUnconnected;

/// @brief Field Error value: static_cast<int32_t>(0x4)
static ::LiteNetLib::__NetEvent__EType const Error;

/// @brief Field ConnectionLatencyUpdated value: static_cast<int32_t>(0x5)
static ::LiteNetLib::__NetEvent__EType const ConnectionLatencyUpdated;

/// @brief Field Broadcast value: static_cast<int32_t>(0x6)
static ::LiteNetLib::__NetEvent__EType const Broadcast;

/// @brief Field ConnectionRequest value: static_cast<int32_t>(0x7)
static ::LiteNetLib::__NetEvent__EType const ConnectionRequest;

/// @brief Field MessageDelivered value: static_cast<int32_t>(0x8)
static ::LiteNetLib::__NetEvent__EType const MessageDelivered;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____NetEvent__EType_Unwrapped () const noexcept {
return std::bit_cast<____NetEvent__EType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __NetEvent__EType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __NetEvent__EType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __NetEvent__EType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::__NetEvent__EType, 0x4>, "Size mismatch!");

} // namespace end def LiteNetLib
// Type: LiteNetLib::NetEvent
namespace LiteNetLib {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14164))
// CS Name: ::LiteNetLib::NetEvent*
class CORDL_TYPE NetEvent : public ::System::Object {
public:
// Declarations
using EType = ::LiteNetLib::__NetEvent__EType;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::System::Object)]{};

/// @brief Field Type offset 0x10
 __declspec(property(get=__get_Type, put=__set_Type)) ::LiteNetLib::__NetEvent__EType  Type;

/// @brief Field Peer offset 0x18
 __declspec(property(get=__get_Peer, put=__set_Peer)) ::LiteNetLib::NetPeer*  Peer;

/// @brief Field RemoteEndPoint offset 0x20
 __declspec(property(get=__get_RemoteEndPoint, put=__set_RemoteEndPoint)) ::System::Net::IPEndPoint*  RemoteEndPoint;

/// @brief Field UserData offset 0x28
 __declspec(property(get=__get_UserData, put=__set_UserData)) ::System::Object*  UserData;

/// @brief Field Latency offset 0x30
 __declspec(property(get=__get_Latency, put=__set_Latency)) int32_t  Latency;

/// @brief Field ErrorCode offset 0x34
 __declspec(property(get=__get_ErrorCode, put=__set_ErrorCode)) ::System::Net::Sockets::SocketError  ErrorCode;

/// @brief Field DisconnectReason offset 0x38
 __declspec(property(get=__get_DisconnectReason, put=__set_DisconnectReason)) ::LiteNetLib::DisconnectReason  DisconnectReason;

/// @brief Field ConnectionRequest offset 0x40
 __declspec(property(get=__get_ConnectionRequest, put=__set_ConnectionRequest)) ::LiteNetLib::ConnectionRequest*  ConnectionRequest;

/// @brief Field DeliveryMethod offset 0x48
 __declspec(property(get=__get_DeliveryMethod, put=__set_DeliveryMethod)) ::LiteNetLib::DeliveryMethod  DeliveryMethod;

/// @brief Field DataReader offset 0x50
 __declspec(property(get=__get_DataReader, put=__set_DataReader)) ::LiteNetLib::NetPacketReader*  DataReader;

constexpr void __set_Type(::LiteNetLib::__NetEvent__EType  value) ;

constexpr ::LiteNetLib::__NetEvent__EType& __get_Type() ;

constexpr ::LiteNetLib::__NetEvent__EType const& __get_Type() const;

constexpr void __set_Peer(::LiteNetLib::NetPeer*  value) ;

constexpr ::LiteNetLib::NetPeer* __get_Peer() ;

constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetPeer*> __get_Peer() const;

constexpr void __set_RemoteEndPoint(::System::Net::IPEndPoint*  value) ;

constexpr ::System::Net::IPEndPoint* __get_RemoteEndPoint() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::IPEndPoint*> __get_RemoteEndPoint() const;

constexpr void __set_UserData(::System::Object*  value) ;

constexpr ::System::Object* __get_UserData() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get_UserData() const;

constexpr void __set_Latency(int32_t  value) ;

constexpr int32_t& __get_Latency() ;

constexpr int32_t const& __get_Latency() const;

constexpr void __set_ErrorCode(::System::Net::Sockets::SocketError  value) ;

constexpr ::System::Net::Sockets::SocketError& __get_ErrorCode() ;

constexpr ::System::Net::Sockets::SocketError const& __get_ErrorCode() const;

constexpr void __set_DisconnectReason(::LiteNetLib::DisconnectReason  value) ;

constexpr ::LiteNetLib::DisconnectReason& __get_DisconnectReason() ;

constexpr ::LiteNetLib::DisconnectReason const& __get_DisconnectReason() const;

constexpr void __set_ConnectionRequest(::LiteNetLib::ConnectionRequest*  value) ;

constexpr ::LiteNetLib::ConnectionRequest* __get_ConnectionRequest() ;

constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::ConnectionRequest*> __get_ConnectionRequest() const;

constexpr void __set_DeliveryMethod(::LiteNetLib::DeliveryMethod  value) ;

constexpr ::LiteNetLib::DeliveryMethod& __get_DeliveryMethod() ;

constexpr ::LiteNetLib::DeliveryMethod const& __get_DeliveryMethod() const;

constexpr void __set_DataReader(::LiteNetLib::NetPacketReader*  value) ;

constexpr ::LiteNetLib::NetPacketReader* __get_DataReader() ;

constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetPacketReader*> __get_DataReader() const;

static inline ::LiteNetLib::NetEvent* New_ctor(::LiteNetLib::NetManager*  manager) ;

/// @brief Method .ctor addr 0x21fc760 size 0x7c virtual false final false
inline void _ctor(::LiteNetLib::NetManager*  manager) ;

// Ctor Parameters [CppParam { name: "", ty: "NetEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetEvent(NetEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetEvent(NetEvent const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NetEvent()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::NetEvent, 0x58>, "Size mismatch!");

} // namespace end def LiteNetLib
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::__NetEvent__EType, "LiteNetLib", "NetEvent/EType");
NEED_NO_BOX(::LiteNetLib::NetEvent);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::NetEvent*, "LiteNetLib", "NetEvent");
