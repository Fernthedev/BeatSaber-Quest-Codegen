#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NtpRequest)
namespace LiteNetLib {
class NetSocket;
}
namespace System {
template<typename T>
class Action_1;
}
namespace LiteNetLib {
class INetSocketListener;
}
namespace LiteNetLib::Utils {
class NtpPacket;
}
namespace System::Net {
class IPAddress;
}
namespace System::Net {
class IPEndPoint;
}
namespace System::Net::Sockets {
struct SocketError;
}
// Forward declare root types
namespace LiteNetLib::Utils {
class NtpRequest;
}
// Write type traits
MARK_REF_PTR_T(::LiteNetLib::Utils::NtpRequest);
// Type: LiteNetLib.Utils::NtpRequest
namespace LiteNetLib::Utils {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14240))
// CS Name: ::LiteNetLib.Utils::NtpRequest*
class CORDL_TYPE NtpRequest : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field DefaultPort offset 0x0
static constexpr int32_t  DefaultPort{static_cast<int32_t>(0x7b)};

/// @brief Field _socket offset 0x10
 __declspec(property(get=__get__socket, put=__set__socket)) ::LiteNetLib::NetSocket*  _socket;

/// @brief Field _onRequestComplete offset 0x18
 __declspec(property(get=__get__onRequestComplete, put=__set__onRequestComplete)) ::System::Action_1<::LiteNetLib::Utils::NtpPacket*>*  _onRequestComplete;

/// @brief Field _ntpEndPoint offset 0x20
 __declspec(property(get=__get__ntpEndPoint, put=__set__ntpEndPoint)) ::System::Net::IPEndPoint*  _ntpEndPoint;

/// @brief Convert operator to "::LiteNetLib::INetSocketListener"
constexpr operator  ::LiteNetLib::INetSocketListener*() noexcept;

constexpr void __set__socket(::LiteNetLib::NetSocket*  value) ;

constexpr ::LiteNetLib::NetSocket* __get__socket() ;

constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetSocket*> __get__socket() const;

constexpr void __set__onRequestComplete(::System::Action_1<::LiteNetLib::Utils::NtpPacket*>*  value) ;

constexpr ::System::Action_1<::LiteNetLib::Utils::NtpPacket*>* __get__onRequestComplete() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::LiteNetLib::Utils::NtpPacket*>*> __get__onRequestComplete() const;

constexpr void __set__ntpEndPoint(::System::Net::IPEndPoint*  value) ;

constexpr ::System::Net::IPEndPoint* __get__ntpEndPoint() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::IPEndPoint*> __get__ntpEndPoint() const;

static inline ::LiteNetLib::Utils::NtpRequest* New_ctor(::System::Net::IPEndPoint*  endPoint, ::System::Action_1<::LiteNetLib::Utils::NtpPacket*>*  onRequestComplete) ;

/// @brief Method .ctor addr 0x220ccac size 0xf0 virtual false final false
inline void _ctor(::System::Net::IPEndPoint*  endPoint, ::System::Action_1<::LiteNetLib::Utils::NtpPacket*>*  onRequestComplete) ;

/// @brief Method Create addr 0x220cd9c size 0x70 virtual false final false
static inline ::LiteNetLib::Utils::NtpRequest* Create(::System::Net::IPEndPoint*  endPoint, ::System::Action_1<::LiteNetLib::Utils::NtpPacket*>*  onRequestComplete) ;

/// @brief Method Create addr 0x220ce0c size 0x78 virtual false final false
static inline ::LiteNetLib::Utils::NtpRequest* Create(::System::Net::IPAddress*  ipAddress, ::System::Action_1<::LiteNetLib::Utils::NtpPacket*>*  onRequestComplete) ;

/// @brief Method Create addr 0x220ce84 size 0x74 virtual false final false
static inline ::LiteNetLib::Utils::NtpRequest* Create(::StringW  ntpServerAddress, int32_t  port, ::System::Action_1<::LiteNetLib::Utils::NtpPacket*>*  onRequestComplete) ;

/// @brief Method Create addr 0x220cef8 size 0x70 virtual false final false
static inline ::LiteNetLib::Utils::NtpRequest* Create(::StringW  ntpServerAddress, ::System::Action_1<::LiteNetLib::Utils::NtpPacket*>*  onRequestComplete) ;

/// @brief Method Send addr 0x220cf68 size 0xc8 virtual false final false
inline void Send() ;

/// @brief Method Close addr 0x220d030 size 0x20 virtual false final false
inline void Close() ;

/// @brief Method LiteNetLib.INetSocketListener.OnMessageReceived addr 0x220d050 size 0x19c virtual true final true
inline void LiteNetLib_INetSocketListener_OnMessageReceived(::ArrayW<uint8_t,::Array<uint8_t>*>  data, int32_t  length, ::System::Net::Sockets::SocketError  errorCode, ::System::Net::IPEndPoint*  remoteEndPoint) ;

// Ctor Parameters [CppParam { name: "", ty: "NtpRequest", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NtpRequest(NtpRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NtpRequest", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NtpRequest(NtpRequest const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NtpRequest()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::Utils::NtpRequest, 0x28>, "Size mismatch!");

} // namespace end def LiteNetLib::Utils
NEED_NO_BOX(::LiteNetLib::Utils::NtpRequest);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::Utils::NtpRequest*, "LiteNetLib.Utils", "NtpRequest");
