#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ConnectionRequest)
namespace LiteNetLib {
struct ConnectionRequestResult;
}
namespace LiteNetLib {
class NetManager;
}
namespace LiteNetLib {
class NetPeer;
}
namespace LiteNetLib {
class NetConnectRequestPacket;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace System::Net {
class IPEndPoint;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
// Forward declare root types
namespace LiteNetLib {
class ConnectionRequest;
}
// Write type traits
MARK_REF_PTR_T(::LiteNetLib::ConnectionRequest);
// Type: LiteNetLib::ConnectionRequest
namespace LiteNetLib {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14129))
// CS Name: ::LiteNetLib::ConnectionRequest*
class CORDL_TYPE ConnectionRequest : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::System::Object)]{};

/// @brief Field _listener offset 0x10
 __declspec(property(get=__get__listener, put=__set__listener)) ::LiteNetLib::NetManager*  _listener;

/// @brief Field _used offset 0x18
 __declspec(property(get=__get__used, put=__set__used)) int32_t  _used;

/// @brief Field Data offset 0x20
 __declspec(property(get=__get_Data, put=__set_Data)) ::LiteNetLib::Utils::NetDataReader*  Data;

/// @brief Field <Result>k__BackingField offset 0x28
 __declspec(property(get=__get__Result_k__BackingField, put=__set__Result_k__BackingField)) ::LiteNetLib::ConnectionRequestResult  _Result_k__BackingField;

/// @brief Field ConnectionTime offset 0x30
 __declspec(property(get=__get_ConnectionTime, put=__set_ConnectionTime)) int64_t  ConnectionTime;

/// @brief Field ConnectionNumber offset 0x38
 __declspec(property(get=__get_ConnectionNumber, put=__set_ConnectionNumber)) uint8_t  ConnectionNumber;

/// @brief Field RemoteEndPoint offset 0x40
 __declspec(property(get=__get_RemoteEndPoint, put=__set_RemoteEndPoint)) ::System::Net::IPEndPoint*  RemoteEndPoint;

 __declspec(property(get=get_Result, put=set_Result)) ::LiteNetLib::ConnectionRequestResult  Result;

constexpr void __set__listener(::LiteNetLib::NetManager*  value) ;

constexpr ::LiteNetLib::NetManager* __get__listener() ;

constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetManager*> __get__listener() const;

constexpr void __set__used(int32_t  value) ;

constexpr int32_t& __get__used() ;

constexpr int32_t const& __get__used() const;

constexpr void __set_Data(::LiteNetLib::Utils::NetDataReader*  value) ;

constexpr ::LiteNetLib::Utils::NetDataReader* __get_Data() ;

constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::Utils::NetDataReader*> __get_Data() const;

constexpr void __set__Result_k__BackingField(::LiteNetLib::ConnectionRequestResult  value) ;

constexpr ::LiteNetLib::ConnectionRequestResult& __get__Result_k__BackingField() ;

constexpr ::LiteNetLib::ConnectionRequestResult const& __get__Result_k__BackingField() const;

constexpr void __set_ConnectionTime(int64_t  value) ;

constexpr int64_t& __get_ConnectionTime() ;

constexpr int64_t const& __get_ConnectionTime() const;

constexpr void __set_ConnectionNumber(uint8_t  value) ;

constexpr uint8_t& __get_ConnectionNumber() ;

constexpr uint8_t const& __get_ConnectionNumber() const;

constexpr void __set_RemoteEndPoint(::System::Net::IPEndPoint*  value) ;

constexpr ::System::Net::IPEndPoint* __get_RemoteEndPoint() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::IPEndPoint*> __get_RemoteEndPoint() const;

/// @brief Method get_Result addr 0x21f81d0 size 0x8 virtual false final false
inline ::LiteNetLib::ConnectionRequestResult get_Result() ;

/// @brief Method set_Result addr 0x21f81d8 size 0x8 virtual false final false
inline void set_Result(::LiteNetLib::ConnectionRequestResult  value) ;

/// @brief Method TryActivate addr 0x21f81e0 size 0x28 virtual false final false
inline bool TryActivate() ;

/// @brief Method UpdateRequest addr 0x21f8208 size 0x30 virtual false final false
inline void UpdateRequest(::LiteNetLib::NetConnectRequestPacket*  connRequest) ;

static inline ::LiteNetLib::ConnectionRequest* New_ctor(int64_t  connectionId, uint8_t  connectionNumber, ::LiteNetLib::Utils::NetDataReader*  netDataReader, ::System::Net::IPEndPoint*  endPoint, ::LiteNetLib::NetManager*  listener) ;

/// @brief Method .ctor addr 0x21f8238 size 0x58 virtual false final false
inline void _ctor(int64_t  connectionId, uint8_t  connectionNumber, ::LiteNetLib::Utils::NetDataReader*  netDataReader, ::System::Net::IPEndPoint*  endPoint, ::LiteNetLib::NetManager*  listener) ;

/// @brief Method AcceptIfKey addr 0x21f8290 size 0x1a8 virtual false final false
inline ::LiteNetLib::NetPeer* AcceptIfKey(::StringW  key) ;

/// @brief Method Accept addr 0x21f8938 size 0x64 virtual false final false
inline ::LiteNetLib::NetPeer* Accept() ;

/// @brief Method Reject addr 0x21f899c size 0x88 virtual false final false
inline void Reject(::ArrayW<uint8_t,::Array<uint8_t>*>  rejectData, int32_t  start, int32_t  length, bool  force) ;

/// @brief Method Reject addr 0x21f8a24 size 0x8 virtual false final false
inline void Reject(::ArrayW<uint8_t,::Array<uint8_t>*>  rejectData, int32_t  start, int32_t  length) ;

/// @brief Method RejectForce addr 0x21f8a2c size 0x8 virtual false final false
inline void RejectForce(::ArrayW<uint8_t,::Array<uint8_t>*>  rejectData, int32_t  start, int32_t  length) ;

/// @brief Method RejectForce addr 0x21f8a34 size 0x14 virtual false final false
inline void RejectForce() ;

/// @brief Method RejectForce addr 0x21f8a48 size 0x20 virtual false final false
inline void RejectForce(::ArrayW<uint8_t,::Array<uint8_t>*>  rejectData) ;

/// @brief Method RejectForce addr 0x21f8a68 size 0x28 virtual false final false
inline void RejectForce(::LiteNetLib::Utils::NetDataWriter*  rejectData) ;

/// @brief Method Reject addr 0x21f8a90 size 0x14 virtual false final false
inline void Reject() ;

/// @brief Method Reject addr 0x21f8aa4 size 0x20 virtual false final false
inline void Reject(::ArrayW<uint8_t,::Array<uint8_t>*>  rejectData) ;

/// @brief Method Reject addr 0x21f8ac4 size 0x28 virtual false final false
inline void Reject(::LiteNetLib::Utils::NetDataWriter*  rejectData) ;

// Ctor Parameters [CppParam { name: "", ty: "ConnectionRequest", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConnectionRequest(ConnectionRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConnectionRequest", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConnectionRequest(ConnectionRequest const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ConnectionRequest()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::ConnectionRequest, 0x48>, "Size mismatch!");

} // namespace end def LiteNetLib
NEED_NO_BOX(::LiteNetLib::ConnectionRequest);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::ConnectionRequest*, "LiteNetLib", "ConnectionRequest");
