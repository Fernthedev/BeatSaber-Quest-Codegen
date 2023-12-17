#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DtlsReliableHandshake)
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Crypto::Tls {
class Timeout;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Crypto::Tls {
class __DtlsReliableHandshake__Message;
}
namespace Org::BouncyCastle::Crypto::Tls {
class DtlsRecordLayer;
}
namespace Org::BouncyCastle::Crypto::Tls {
class __DtlsReliableHandshake__RecordLayerBuffer;
}
namespace Org::BouncyCastle::Crypto::Tls {
class __DtlsReliableHandshake__Retransmit;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsHandshakeHash;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace Org::BouncyCastle::Crypto::Tls {
class DtlsHandshakeRetransmit;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class DtlsReliableHandshake;
}
namespace Org::BouncyCastle::Crypto::Tls {
class __DtlsReliableHandshake__Message;
}
namespace Org::BouncyCastle::Crypto::Tls {
class __DtlsReliableHandshake__RecordLayerBuffer;
}
namespace Org::BouncyCastle::Crypto::Tls {
class __DtlsReliableHandshake__Retransmit;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake);
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message);
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__RecordLayerBuffer);
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Retransmit);
// Type: ::Message
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1230))
// CS Name: ::DtlsReliableHandshake::Message*
class CORDL_TYPE __DtlsReliableHandshake__Message : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field mMessageSeq offset 0x10
 __declspec(property(get=__get_mMessageSeq, put=__set_mMessageSeq)) int32_t  mMessageSeq;

/// @brief Field mMsgType offset 0x14
 __declspec(property(get=__get_mMsgType, put=__set_mMsgType)) uint8_t  mMsgType;

/// @brief Field mBody offset 0x18
 __declspec(property(get=__get_mBody, put=__set_mBody)) ::ArrayW<uint8_t,::Array<uint8_t>*>  mBody;

 __declspec(property(get=get_Seq)) int32_t  Seq;

 __declspec(property(get=get_Type)) uint8_t  Type;

 __declspec(property(get=get_Body)) ::ArrayW<uint8_t,::Array<uint8_t>*>  Body;

constexpr void __set_mMessageSeq(int32_t  value) ;

constexpr int32_t& __get_mMessageSeq() ;

constexpr int32_t const& __get_mMessageSeq() const;

constexpr void __set_mMsgType(uint8_t  value) ;

constexpr uint8_t& __get_mMsgType() ;

constexpr uint8_t const& __get_mMsgType() const;

constexpr void __set_mBody(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_mBody() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_mBody() const;

static inline ::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message* New_ctor(int32_t  message_seq, uint8_t  msg_type, ::ArrayW<uint8_t,::Array<uint8_t>*>  body) ;

/// @brief Method .ctor addr 0xf6fd3c size 0x40 virtual false final false
inline void _ctor(int32_t  message_seq, uint8_t  msg_type, ::ArrayW<uint8_t,::Array<uint8_t>*>  body) ;

/// @brief Method get_Seq addr 0xf712b8 size 0x8 virtual false final false
inline int32_t get_Seq() ;

/// @brief Method get_Type addr 0xf712c0 size 0x8 virtual false final false
inline uint8_t get_Type() ;

/// @brief Method get_Body addr 0xf712c8 size 0x8 virtual false final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> get_Body() ;

// Ctor Parameters [CppParam { name: "", ty: "__DtlsReliableHandshake__Message", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__DtlsReliableHandshake__Message(__DtlsReliableHandshake__Message && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__DtlsReliableHandshake__Message", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__DtlsReliableHandshake__Message(__DtlsReliableHandshake__Message const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __DtlsReliableHandshake__Message()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Tls
// Type: ::RecordLayerBuffer
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3566))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1231))
// CS Name: ::DtlsReliableHandshake::RecordLayerBuffer*
class CORDL_TYPE __DtlsReliableHandshake__RecordLayerBuffer : public ::System::IO::MemoryStream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::System::IO::MemoryStream)]{};

static inline ::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__RecordLayerBuffer* New_ctor(int32_t  size) ;

/// @brief Method .ctor addr 0xf711fc size 0x8 virtual false final false
inline void _ctor(int32_t  size) ;

/// @brief Method SendToRecordLayer addr 0xf71204 size 0xb4 virtual false final false
inline void SendToRecordLayer(::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*  recordLayer) ;

// Ctor Parameters [CppParam { name: "", ty: "__DtlsReliableHandshake__RecordLayerBuffer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__DtlsReliableHandshake__RecordLayerBuffer(__DtlsReliableHandshake__RecordLayerBuffer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__DtlsReliableHandshake__RecordLayerBuffer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__DtlsReliableHandshake__RecordLayerBuffer(__DtlsReliableHandshake__RecordLayerBuffer const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __DtlsReliableHandshake__RecordLayerBuffer()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__RecordLayerBuffer, 0x50>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Tls
// Type: ::Retransmit
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1232))
// CS Name: ::DtlsReliableHandshake::Retransmit*
class CORDL_TYPE __DtlsReliableHandshake__Retransmit : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field mOuter offset 0x10
 __declspec(property(get=__get_mOuter, put=__set_mOuter)) ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*  mOuter;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit"
constexpr operator  ::Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit*() noexcept;

constexpr void __set_mOuter(::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*  value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake* __get_mOuter() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*> __get_mOuter() const;

static inline ::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Retransmit* New_ctor(::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*  outer) ;

/// @brief Method .ctor addr 0xf708f8 size 0x28 virtual false final false
inline void _ctor(::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*  outer) ;

/// @brief Method ReceivedHandshakeRecord addr 0xf712d0 size 0x2c virtual true final true
inline void ReceivedHandshakeRecord(int32_t  epoch, ::ArrayW<uint8_t,::Array<uint8_t>*>  buf, int32_t  off, int32_t  len) ;

// Ctor Parameters [CppParam { name: "", ty: "__DtlsReliableHandshake__Retransmit", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__DtlsReliableHandshake__Retransmit(__DtlsReliableHandshake__Retransmit && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__DtlsReliableHandshake__Retransmit", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__DtlsReliableHandshake__Retransmit(__DtlsReliableHandshake__Retransmit const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __DtlsReliableHandshake__Retransmit()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Retransmit, 0x18>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Tls
// Type: Org.BouncyCastle.Crypto.Tls::DtlsReliableHandshake
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1233))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::DtlsReliableHandshake*
class CORDL_TYPE DtlsReliableHandshake : public ::System::Object {
public:
// Declarations
using Retransmit = ::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Retransmit;

using RecordLayerBuffer = ::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__RecordLayerBuffer;

using Message = ::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::System::Object)]{};

/// @brief Field MaxReceiveAhead offset 0x0
static constexpr int32_t  MaxReceiveAhead{static_cast<int32_t>(0x10)};

/// @brief Field MessageHeaderLength offset 0x0
static constexpr int32_t  MessageHeaderLength{static_cast<int32_t>(0xc)};

/// @brief Field InitialResendMillis offset 0x0
static constexpr int32_t  InitialResendMillis{static_cast<int32_t>(0x3e8)};

/// @brief Field MaxResendMillis offset 0x0
static constexpr int32_t  MaxResendMillis{static_cast<int32_t>(0xea60)};

/// @brief Field mRecordLayer offset 0x10
 __declspec(property(get=__get_mRecordLayer, put=__set_mRecordLayer)) ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*  mRecordLayer;

/// @brief Field mHandshakeTimeout offset 0x18
 __declspec(property(get=__get_mHandshakeTimeout, put=__set_mHandshakeTimeout)) ::Org::BouncyCastle::Crypto::Tls::Timeout*  mHandshakeTimeout;

/// @brief Field mHandshakeHash offset 0x20
 __declspec(property(get=__get_mHandshakeHash, put=__set_mHandshakeHash)) ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*  mHandshakeHash;

/// @brief Field mCurrentInboundFlight offset 0x28
 __declspec(property(get=__get_mCurrentInboundFlight, put=__set_mCurrentInboundFlight)) ::System::Collections::IDictionary*  mCurrentInboundFlight;

/// @brief Field mPreviousInboundFlight offset 0x30
 __declspec(property(get=__get_mPreviousInboundFlight, put=__set_mPreviousInboundFlight)) ::System::Collections::IDictionary*  mPreviousInboundFlight;

/// @brief Field mOutboundFlight offset 0x38
 __declspec(property(get=__get_mOutboundFlight, put=__set_mOutboundFlight)) ::System::Collections::IList*  mOutboundFlight;

/// @brief Field mResendMillis offset 0x40
 __declspec(property(get=__get_mResendMillis, put=__set_mResendMillis)) int32_t  mResendMillis;

/// @brief Field mResendTimeout offset 0x48
 __declspec(property(get=__get_mResendTimeout, put=__set_mResendTimeout)) ::Org::BouncyCastle::Crypto::Tls::Timeout*  mResendTimeout;

/// @brief Field mMessageSeq offset 0x50
 __declspec(property(get=__get_mMessageSeq, put=__set_mMessageSeq)) int32_t  mMessageSeq;

/// @brief Field mNextReceiveSeq offset 0x54
 __declspec(property(get=__get_mNextReceiveSeq, put=__set_mNextReceiveSeq)) int32_t  mNextReceiveSeq;

 __declspec(property(get=get_HandshakeHash)) ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*  HandshakeHash;

constexpr void __set_mRecordLayer(::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*  value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer* __get_mRecordLayer() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*> __get_mRecordLayer() const;

constexpr void __set_mHandshakeTimeout(::Org::BouncyCastle::Crypto::Tls::Timeout*  value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::Timeout* __get_mHandshakeTimeout() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::Timeout*> __get_mHandshakeTimeout() const;

constexpr void __set_mHandshakeHash(::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*  value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* __get_mHandshakeHash() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*> __get_mHandshakeHash() const;

constexpr void __set_mCurrentInboundFlight(::System::Collections::IDictionary*  value) ;

constexpr ::System::Collections::IDictionary* __get_mCurrentInboundFlight() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> __get_mCurrentInboundFlight() const;

constexpr void __set_mPreviousInboundFlight(::System::Collections::IDictionary*  value) ;

constexpr ::System::Collections::IDictionary* __get_mPreviousInboundFlight() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> __get_mPreviousInboundFlight() const;

constexpr void __set_mOutboundFlight(::System::Collections::IList*  value) ;

constexpr ::System::Collections::IList* __get_mOutboundFlight() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> __get_mOutboundFlight() const;

constexpr void __set_mResendMillis(int32_t  value) ;

constexpr int32_t& __get_mResendMillis() ;

constexpr int32_t const& __get_mResendMillis() const;

constexpr void __set_mResendTimeout(::Org::BouncyCastle::Crypto::Tls::Timeout*  value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::Timeout* __get_mResendTimeout() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::Timeout*> __get_mResendTimeout() const;

constexpr void __set_mMessageSeq(int32_t  value) ;

constexpr int32_t& __get_mMessageSeq() ;

constexpr int32_t const& __get_mMessageSeq() const;

constexpr void __set_mNextReceiveSeq(int32_t  value) ;

constexpr int32_t& __get_mNextReceiveSeq() ;

constexpr int32_t const& __get_mNextReceiveSeq() const;

static inline ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake* New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext*  context, ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*  transport, int32_t  timeoutMillis) ;

/// @brief Method .ctor addr 0xf6aaec size 0x14c virtual false final false
inline void _ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext*  context, ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*  transport, int32_t  timeoutMillis) ;

/// @brief Method NotifyHelloComplete addr 0xf6b2d0 size 0xac virtual false final false
inline void NotifyHelloComplete() ;

/// @brief Method get_HandshakeHash addr 0xf6f9ac size 0x8 virtual false final false
inline ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* get_HandshakeHash() ;

/// @brief Method PrepareToFinish addr 0xf6b48c size 0xb0 virtual false final false
inline ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* PrepareToFinish() ;

/// @brief Method SendMessage addr 0xf6ac38 size 0x1d0 virtual false final false
inline void SendMessage(uint8_t  msg_type, ::ArrayW<uint8_t,::Array<uint8_t>*>  body) ;

/// @brief Method ReceiveMessageBody addr 0xf6b37c size 0x6c virtual false final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> ReceiveMessageBody(uint8_t  msg_type) ;

/// @brief Method ReceiveMessage addr 0xf6ae08 size 0x2f4 virtual false final false
inline ::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message* ReceiveMessage() ;

/// @brief Method Finish addr 0xf6b3e8 size 0xa4 virtual false final false
inline void Finish() ;

/// @brief Method ResetHandshakeMessagesDigest addr 0xf6b22c size 0xa4 virtual false final false
inline void ResetHandshakeMessagesDigest() ;

/// @brief Method BackOff addr 0xf70920 size 0x5c virtual false final false
inline int32_t BackOff(int32_t  timeoutMillis) ;

/// @brief Method CheckInboundFlight addr 0xf6f9b4 size 0x388 virtual false final false
inline void CheckInboundFlight() ;

/// @brief Method GetPendingMessage addr 0xf700cc size 0x19c virtual false final false
inline ::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message* GetPendingMessage() ;

/// @brief Method PrepareInboundFlight addr 0xf700a0 size 0x2c virtual false final false
inline void PrepareInboundFlight(::System::Collections::IDictionary*  nextFlight) ;

/// @brief Method ProcessRecord addr 0xf70468 size 0x490 virtual false final false
inline void ProcessRecord(int32_t  windowSize, int32_t  epoch, ::ArrayW<uint8_t,::Array<uint8_t>*>  buf, int32_t  off, int32_t  len) ;

/// @brief Method ResendOutboundFlight addr 0xf70268 size 0x200 virtual false final false
inline void ResendOutboundFlight() ;

/// @brief Method UpdateHandshakeMessagesDigest addr 0xf6fe90 size 0x210 virtual false final false
inline ::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message* UpdateHandshakeMessagesDigest(::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message*  message) ;

/// @brief Method WriteMessage addr 0xf6fd7c size 0x114 virtual false final false
inline void WriteMessage(::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message*  message) ;

/// @brief Method WriteHandshakeFragment addr 0xf710d4 size 0x128 virtual false final false
inline void WriteHandshakeFragment(::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message*  message, int32_t  fragment_offset, int32_t  fragment_length) ;

/// @brief Method CheckAll addr 0xf70d18 size 0x3bc virtual false final false
static inline bool CheckAll(::System::Collections::IDictionary*  inboundFlight) ;

/// @brief Method ResetAll addr 0xf7097c size 0x39c virtual false final false
static inline void ResetAll(::System::Collections::IDictionary*  inboundFlight) ;

// Ctor Parameters [CppParam { name: "", ty: "DtlsReliableHandshake", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DtlsReliableHandshake(DtlsReliableHandshake && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DtlsReliableHandshake", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DtlsReliableHandshake(DtlsReliableHandshake const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DtlsReliableHandshake()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake, 0x58>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*, "Org.BouncyCastle.Crypto.Tls", "DtlsReliableHandshake");
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message*, "Org.BouncyCastle.Crypto.Tls", "DtlsReliableHandshake/Message");
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__RecordLayerBuffer);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__RecordLayerBuffer*, "Org.BouncyCastle.Crypto.Tls", "DtlsReliableHandshake/RecordLayerBuffer");
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Retransmit);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Retransmit*, "Org.BouncyCastle.Crypto.Tls", "DtlsReliableHandshake/Retransmit");
