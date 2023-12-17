#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IgnoranceClient)
namespace System::Threading {
class Thread;
}
namespace IgnoranceCore {
struct IgnoranceConnectionEvent;
}
namespace IgnoranceCore {
struct IgnoranceClientStats;
}
namespace IgnoranceCore {
struct __IgnoranceClient__ThreadParamInfo;
}
namespace IgnoranceThirdparty {
template<typename T>
class RingBuffer_1;
}
namespace System {
class Object;
}
namespace IgnoranceCore {
struct IgnoranceCommandPacket;
}
namespace IgnoranceCore {
struct IgnoranceIncomingPacket;
}
namespace IgnoranceCore {
struct IgnoranceOutgoingPacket;
}
// Forward declare root types
namespace IgnoranceCore {
class IgnoranceClient;
}
namespace IgnoranceCore {
struct __IgnoranceClient__ThreadParamInfo;
}
// Write type traits
MARK_REF_PTR_T(::IgnoranceCore::IgnoranceClient);
MARK_VAL_T(::IgnoranceCore::__IgnoranceClient__ThreadParamInfo);
// Type: ::ThreadParamInfo
namespace IgnoranceCore {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15238))
// CS Name: ::IgnoranceClient::ThreadParamInfo
struct CORDL_TYPE __IgnoranceClient__ThreadParamInfo : public ::bs_hook::ValueTypeWrapper<0x38> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field Channels offset 0x0
 __declspec(property(get=__get_Channels, put=__set_Channels)) int32_t  Channels;

/// @brief Field PollTime offset 0x4
 __declspec(property(get=__get_PollTime, put=__set_PollTime)) int32_t  PollTime;

/// @brief Field Port offset 0x8
 __declspec(property(get=__get_Port, put=__set_Port)) int32_t  Port;

/// @brief Field PacketSizeLimit offset 0xc
 __declspec(property(get=__get_PacketSizeLimit, put=__set_PacketSizeLimit)) int32_t  PacketSizeLimit;

/// @brief Field Verbosity offset 0x10
 __declspec(property(get=__get_Verbosity, put=__set_Verbosity)) int32_t  Verbosity;

/// @brief Field Address offset 0x18
 __declspec(property(get=__get_Address, put=__set_Address)) ::StringW  Address;

/// @brief Field UseSsl offset 0x20
 __declspec(property(get=__get_UseSsl, put=__set_UseSsl)) bool  UseSsl;

/// @brief Field ValidateCertificate offset 0x21
 __declspec(property(get=__get_ValidateCertificate, put=__set_ValidateCertificate)) bool  ValidateCertificate;

/// @brief Field RootCertificatePath offset 0x28
 __declspec(property(get=__get_RootCertificatePath, put=__set_RootCertificatePath)) ::StringW  RootCertificatePath;

/// @brief Field RootCertificate offset 0x30
 __declspec(property(get=__get_RootCertificate, put=__set_RootCertificate)) ::StringW  RootCertificate;

constexpr void __set_Channels(int32_t  value) ;

constexpr int32_t& __get_Channels() ;

constexpr int32_t const& __get_Channels() const;

constexpr void __set_PollTime(int32_t  value) ;

constexpr int32_t& __get_PollTime() ;

constexpr int32_t const& __get_PollTime() const;

constexpr void __set_Port(int32_t  value) ;

constexpr int32_t& __get_Port() ;

constexpr int32_t const& __get_Port() const;

constexpr void __set_PacketSizeLimit(int32_t  value) ;

constexpr int32_t& __get_PacketSizeLimit() ;

constexpr int32_t const& __get_PacketSizeLimit() const;

constexpr void __set_Verbosity(int32_t  value) ;

constexpr int32_t& __get_Verbosity() ;

constexpr int32_t const& __get_Verbosity() const;

constexpr void __set_Address(::StringW  value) ;

constexpr ::StringW& __get_Address() ;

constexpr ::StringW const& __get_Address() const;

constexpr void __set_UseSsl(bool  value) ;

constexpr bool& __get_UseSsl() ;

constexpr bool const& __get_UseSsl() const;

constexpr void __set_ValidateCertificate(bool  value) ;

constexpr bool& __get_ValidateCertificate() ;

constexpr bool const& __get_ValidateCertificate() const;

constexpr void __set_RootCertificatePath(::StringW  value) ;

constexpr ::StringW& __get_RootCertificatePath() ;

constexpr ::StringW const& __get_RootCertificatePath() const;

constexpr void __set_RootCertificate(::StringW  value) ;

constexpr ::StringW& __get_RootCertificate() ;

constexpr ::StringW const& __get_RootCertificate() const;

// Ctor Parameters [CppParam { name: "Channels", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "PollTime", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Port", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "PacketSizeLimit", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Verbosity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Address", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "UseSsl", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "ValidateCertificate", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "RootCertificatePath", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "RootCertificate", ty: "::StringW", modifiers: "", def_value: None }]
constexpr __IgnoranceClient__ThreadParamInfo(int32_t  Channels, int32_t  PollTime, int32_t  Port, int32_t  PacketSizeLimit, int32_t  Verbosity, ::StringW  Address, bool  UseSsl, bool  ValidateCertificate, ::StringW  RootCertificatePath, ::StringW  RootCertificate) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __IgnoranceClient__ThreadParamInfo(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x38>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __IgnoranceClient__ThreadParamInfo()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::IgnoranceCore::__IgnoranceClient__ThreadParamInfo, 0x38>, "Size mismatch!");

} // namespace end def IgnoranceCore
// Type: IgnoranceCore::IgnoranceClient
namespace IgnoranceCore {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15239))
// CS Name: ::IgnoranceCore::IgnoranceClient*
class CORDL_TYPE IgnoranceClient : public ::System::Object {
public:
// Declarations
using ThreadParamInfo = ::IgnoranceCore::__IgnoranceClient__ThreadParamInfo;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x88};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x88 - sizeof(::System::Object)]{};

/// @brief Field ConnectAddress offset 0x10
 __declspec(property(get=__get_ConnectAddress, put=__set_ConnectAddress)) ::StringW  ConnectAddress;

/// @brief Field ConnectPort offset 0x18
 __declspec(property(get=__get_ConnectPort, put=__set_ConnectPort)) int32_t  ConnectPort;

/// @brief Field ExpectedChannels offset 0x1c
 __declspec(property(get=__get_ExpectedChannels, put=__set_ExpectedChannels)) int32_t  ExpectedChannels;

/// @brief Field PollTime offset 0x20
 __declspec(property(get=__get_PollTime, put=__set_PollTime)) int32_t  PollTime;

/// @brief Field MaximumPacketSize offset 0x24
 __declspec(property(get=__get_MaximumPacketSize, put=__set_MaximumPacketSize)) int32_t  MaximumPacketSize;

/// @brief Field Verbosity offset 0x28
 __declspec(property(get=__get_Verbosity, put=__set_Verbosity)) int32_t  Verbosity;

/// @brief Field IncomingOutgoingBufferSize offset 0x2c
 __declspec(property(get=__get_IncomingOutgoingBufferSize, put=__set_IncomingOutgoingBufferSize)) int32_t  IncomingOutgoingBufferSize;

/// @brief Field ConnectionEventBufferSize offset 0x30
 __declspec(property(get=__get_ConnectionEventBufferSize, put=__set_ConnectionEventBufferSize)) int32_t  ConnectionEventBufferSize;

/// @brief Field UseSsl offset 0x34
 __declspec(property(get=__get_UseSsl, put=__set_UseSsl)) bool  UseSsl;

/// @brief Field ValidateCertificate offset 0x35
 __declspec(property(get=__get_ValidateCertificate, put=__set_ValidateCertificate)) bool  ValidateCertificate;

/// @brief Field RootCertificatePath offset 0x38
 __declspec(property(get=__get_RootCertificatePath, put=__set_RootCertificatePath)) ::StringW  RootCertificatePath;

/// @brief Field RootCertificate offset 0x40
 __declspec(property(get=__get_RootCertificate, put=__set_RootCertificate)) ::StringW  RootCertificate;

/// @brief Field Incoming offset 0x48
 __declspec(property(get=__get_Incoming, put=__set_Incoming)) ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceIncomingPacket>*  Incoming;

/// @brief Field Outgoing offset 0x50
 __declspec(property(get=__get_Outgoing, put=__set_Outgoing)) ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceOutgoingPacket>*  Outgoing;

/// @brief Field Commands offset 0x58
 __declspec(property(get=__get_Commands, put=__set_Commands)) ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceCommandPacket>*  Commands;

/// @brief Field ConnectionEvents offset 0x60
 __declspec(property(get=__get_ConnectionEvents, put=__set_ConnectionEvents)) ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>*  ConnectionEvents;

/// @brief Field DisconnectionEvents offset 0x68
 __declspec(property(get=__get_DisconnectionEvents, put=__set_DisconnectionEvents)) ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>*  DisconnectionEvents;

/// @brief Field StatusUpdates offset 0x70
 __declspec(property(get=__get_StatusUpdates, put=__set_StatusUpdates)) ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceClientStats>*  StatusUpdates;

/// @brief Field CeaseOperation offset 0x78
 __declspec(property(get=__get_CeaseOperation, put=__set_CeaseOperation)) bool  CeaseOperation;

/// @brief Field WorkerThread offset 0x80
 __declspec(property(get=__get_WorkerThread, put=__set_WorkerThread)) ::System::Threading::Thread*  WorkerThread;

 __declspec(property(get=get_IsAlive)) bool  IsAlive;

constexpr void __set_ConnectAddress(::StringW  value) ;

constexpr ::StringW& __get_ConnectAddress() ;

constexpr ::StringW const& __get_ConnectAddress() const;

constexpr void __set_ConnectPort(int32_t  value) ;

constexpr int32_t& __get_ConnectPort() ;

constexpr int32_t const& __get_ConnectPort() const;

constexpr void __set_ExpectedChannels(int32_t  value) ;

constexpr int32_t& __get_ExpectedChannels() ;

constexpr int32_t const& __get_ExpectedChannels() const;

constexpr void __set_PollTime(int32_t  value) ;

constexpr int32_t& __get_PollTime() ;

constexpr int32_t const& __get_PollTime() const;

constexpr void __set_MaximumPacketSize(int32_t  value) ;

constexpr int32_t& __get_MaximumPacketSize() ;

constexpr int32_t const& __get_MaximumPacketSize() const;

constexpr void __set_Verbosity(int32_t  value) ;

constexpr int32_t& __get_Verbosity() ;

constexpr int32_t const& __get_Verbosity() const;

constexpr void __set_IncomingOutgoingBufferSize(int32_t  value) ;

constexpr int32_t& __get_IncomingOutgoingBufferSize() ;

constexpr int32_t const& __get_IncomingOutgoingBufferSize() const;

constexpr void __set_ConnectionEventBufferSize(int32_t  value) ;

constexpr int32_t& __get_ConnectionEventBufferSize() ;

constexpr int32_t const& __get_ConnectionEventBufferSize() const;

constexpr void __set_UseSsl(bool  value) ;

constexpr bool& __get_UseSsl() ;

constexpr bool const& __get_UseSsl() const;

constexpr void __set_ValidateCertificate(bool  value) ;

constexpr bool& __get_ValidateCertificate() ;

constexpr bool const& __get_ValidateCertificate() const;

constexpr void __set_RootCertificatePath(::StringW  value) ;

constexpr ::StringW& __get_RootCertificatePath() ;

constexpr ::StringW const& __get_RootCertificatePath() const;

constexpr void __set_RootCertificate(::StringW  value) ;

constexpr ::StringW& __get_RootCertificate() ;

constexpr ::StringW const& __get_RootCertificate() const;

constexpr void __set_Incoming(::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceIncomingPacket>*  value) ;

constexpr ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceIncomingPacket>* __get_Incoming() ;

constexpr ::cordl_internals::to_const_pointer<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceIncomingPacket>*> __get_Incoming() const;

constexpr void __set_Outgoing(::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceOutgoingPacket>*  value) ;

constexpr ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceOutgoingPacket>* __get_Outgoing() ;

constexpr ::cordl_internals::to_const_pointer<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceOutgoingPacket>*> __get_Outgoing() const;

constexpr void __set_Commands(::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceCommandPacket>*  value) ;

constexpr ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceCommandPacket>* __get_Commands() ;

constexpr ::cordl_internals::to_const_pointer<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceCommandPacket>*> __get_Commands() const;

constexpr void __set_ConnectionEvents(::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>*  value) ;

constexpr ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>* __get_ConnectionEvents() ;

constexpr ::cordl_internals::to_const_pointer<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>*> __get_ConnectionEvents() const;

constexpr void __set_DisconnectionEvents(::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>*  value) ;

constexpr ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>* __get_DisconnectionEvents() ;

constexpr ::cordl_internals::to_const_pointer<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>*> __get_DisconnectionEvents() const;

constexpr void __set_StatusUpdates(::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceClientStats>*  value) ;

constexpr ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceClientStats>* __get_StatusUpdates() ;

constexpr ::cordl_internals::to_const_pointer<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceClientStats>*> __get_StatusUpdates() const;

constexpr void __set_CeaseOperation(bool  value) ;

constexpr bool& __get_CeaseOperation() ;

constexpr bool const& __get_CeaseOperation() const;

constexpr void __set_WorkerThread(::System::Threading::Thread*  value) ;

constexpr ::System::Threading::Thread* __get_WorkerThread() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Thread*> __get_WorkerThread() const;

/// @brief Method get_IsAlive addr 0x21f4290 size 0x14 virtual false final false
inline bool get_IsAlive() ;

/// @brief Method Start addr 0x21f42a4 size 0x370 virtual false final false
inline void Start() ;

/// @brief Method Stop addr 0x21f4858 size 0x90 virtual false final false
inline void Stop() ;

/// @brief Method ThreadWorker addr 0x21f48e8 size 0xe90 virtual false final false
inline void ThreadWorker(::System::Object*  parameters) ;

/// @brief Method SetupRingBuffersIfNull addr 0x21f4614 size 0x244 virtual false final false
inline void SetupRingBuffersIfNull() ;

static inline ::IgnoranceCore::IgnoranceClient* New_ctor() ;

/// @brief Method .ctor addr 0x21f5778 size 0x78 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "IgnoranceClient", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IgnoranceClient(IgnoranceClient && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IgnoranceClient", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IgnoranceClient(IgnoranceClient const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 IgnoranceClient()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::IgnoranceCore::IgnoranceClient, 0x88>, "Size mismatch!");

} // namespace end def IgnoranceCore
NEED_NO_BOX(::IgnoranceCore::IgnoranceClient);
DEFINE_IL2CPP_ARG_TYPE(::IgnoranceCore::IgnoranceClient*, "IgnoranceCore", "IgnoranceClient");
DEFINE_IL2CPP_ARG_TYPE(::IgnoranceCore::__IgnoranceClient__ThreadParamInfo, "IgnoranceCore", "IgnoranceClient/ThreadParamInfo");
