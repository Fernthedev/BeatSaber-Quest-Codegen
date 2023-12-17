#pragma once
#include "System/IO/zzzz__MemoryStream_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DtlsReliableHandshake_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__Timeout_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DtlsReliableHandshake_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DtlsRecordLayer_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsHandshakeHash_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsContext_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DtlsHandshakeRetransmit_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message::*)(int32_t, uint8_t, ::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xf6fd3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message.get_Seq
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message::*)()>(&::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message::get_Seq)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf712b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message*>::get(),
                            "get_Seq",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message.get_Type
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message::*)()>(&::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf712c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message*>::get(),
                            "get_Type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message.get_Body
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message::*)()>(&::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message::get_Body)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf712c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message*>::get(),
                            "get_Body",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message::__set_mMessageSeq(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message::__get_mMessageSeq()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message::__get_mMessageSeq() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message::__set_mMsgType(uint8_t  value)  {
::cordl_internals::setInstanceField<uint8_t, 0x14>(this, std::forward<uint8_t>(value));
}
constexpr uint8_t& Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message::__get_mMsgType()  {
return ::cordl_internals::getInstanceField<uint8_t, 0x14>(this);
}
constexpr uint8_t const& Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message::__get_mMsgType() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x14>(this);
}
constexpr void Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message::__set_mBody(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x18>(this, std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message::__get_mBody()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x18>(this);
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message::__get_mBody() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x18>(this);
}
inline ::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message* Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message::New_ctor(int32_t  message_seq, uint8_t  msg_type, ::ArrayW<uint8_t,::Array<uint8_t>*>  body)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message*>(message_seq, msg_type, body));
}
inline void Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message::_ctor(int32_t  message_seq, uint8_t  msg_type, ::ArrayW<uint8_t,::Array<uint8_t>*>  body)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, message_seq, msg_type, body);
}
inline int32_t Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message::get_Seq()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message*>::get(),
                            "get_Seq",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline uint8_t Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message::get_Type()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message*>::get(),
                            "get_Type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(*this, ___internal_method);
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message::get_Body()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message*>::get(),
                            "get_Body",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__RecordLayerBuffer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__RecordLayerBuffer::*)(int32_t)>(&::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__RecordLayerBuffer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf711fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__RecordLayerBuffer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__RecordLayerBuffer.SendToRecordLayer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__RecordLayerBuffer::*)(::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*)>(&::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__RecordLayerBuffer::SendToRecordLayer)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xf71204;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__RecordLayerBuffer*>::get(),
                            "SendToRecordLayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get()}
                        )));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__RecordLayerBuffer* Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__RecordLayerBuffer::New_ctor(int32_t  size)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__RecordLayerBuffer*>(size));
}
inline void Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__RecordLayerBuffer::_ctor(int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__RecordLayerBuffer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, size);
}
inline void Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__RecordLayerBuffer::SendToRecordLayer(::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*  recordLayer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__RecordLayerBuffer*>::get(),
                            "SendToRecordLayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, recordLayer);
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Retransmit._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Retransmit::*)(::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*)>(&::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Retransmit::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xf708f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Retransmit*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Retransmit.ReceivedHandshakeRecord
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Retransmit::*)(int32_t, ::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Retransmit::ReceivedHandshakeRecord)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xf712d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Retransmit*>::get(),
                            "ReceivedHandshakeRecord",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit"
constexpr  Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Retransmit::operator ::Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit*() noexcept {
return static_cast<::Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit*>(static_cast<void*>(this));
}
constexpr void Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Retransmit::__set_mOuter(::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*, 0x10>(this, std::forward<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake* Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Retransmit::__get_mOuter()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*> Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Retransmit::__get_mOuter() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*, 0x10>(this);
}
inline ::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Retransmit* Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Retransmit::New_ctor(::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*  outer)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Retransmit*>(outer));
}
inline void Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Retransmit::_ctor(::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*  outer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Retransmit*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, outer);
}
inline void Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Retransmit::ReceivedHandshakeRecord(int32_t  epoch, ::ArrayW<uint8_t,::Array<uint8_t>*>  buf, int32_t  off, int32_t  len)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Retransmit*>::get(),
                            "ReceivedHandshakeRecord",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, epoch, buf, off, len);
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::*)(::Org::BouncyCastle::Crypto::Tls::TlsContext*, ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*, int32_t)>(&::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::_ctor)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xf6aaec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsContext*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake.NotifyHelloComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::*)()>(&::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::NotifyHelloComplete)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xf6b2d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(),
                            "NotifyHelloComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake.get_HandshakeHash
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* (::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::*)()>(&::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::get_HandshakeHash)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf6f9ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(),
                            "get_HandshakeHash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake.PrepareToFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* (::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::*)()>(&::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::PrepareToFinish)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xf6b48c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(),
                            "PrepareToFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake.SendMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::*)(uint8_t, ::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::SendMessage)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0xf6ac38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(),
                            "SendMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake.ReceiveMessageBody
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::*)(uint8_t)>(&::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::ReceiveMessageBody)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xf6b37c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(),
                            "ReceiveMessageBody",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake.ReceiveMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message* (::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::*)()>(&::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::ReceiveMessage)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0xf6ae08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(),
                            "ReceiveMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake.Finish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::*)()>(&::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::Finish)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xf6b3e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(),
                            "Finish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake.ResetHandshakeMessagesDigest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::*)()>(&::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::ResetHandshakeMessagesDigest)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xf6b22c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(),
                            "ResetHandshakeMessagesDigest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake.BackOff
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::*)(int32_t)>(&::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::BackOff)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xf70920;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(),
                            "BackOff",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake.CheckInboundFlight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::*)()>(&::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::CheckInboundFlight)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0xf6f9b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(),
                            "CheckInboundFlight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake.GetPendingMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message* (::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::*)()>(&::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::GetPendingMessage)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xf700cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(),
                            "GetPendingMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake.PrepareInboundFlight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::*)(::System::Collections::IDictionary*)>(&::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::PrepareInboundFlight)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xf700a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(),
                            "PrepareInboundFlight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake.ProcessRecord
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::*)(int32_t, int32_t, ::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::ProcessRecord)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0xf70468;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(),
                            "ProcessRecord",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake.ResendOutboundFlight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::*)()>(&::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::ResendOutboundFlight)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0xf70268;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(),
                            "ResendOutboundFlight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake.UpdateHandshakeMessagesDigest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message* (::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::*)(::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message*)>(&::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::UpdateHandshakeMessagesDigest)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0xf6fe90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(),
                            "UpdateHandshakeMessagesDigest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake.WriteMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::*)(::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message*)>(&::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::WriteMessage)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xf6fd7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(),
                            "WriteMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake.WriteHandshakeFragment
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::*)(::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message*, int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::WriteHandshakeFragment)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xf710d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(),
                            "WriteHandshakeFragment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake.CheckAll
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Collections::IDictionary*)>(&::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::CheckAll)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0xf70d18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(),
                            "CheckAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake.ResetAll
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::IDictionary*)>(&::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::ResetAll)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0xf7097c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(),
                            "ResetAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__set_mRecordLayer(::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*, 0x10>(this, std::forward<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer* Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__get_mRecordLayer()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*> Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__get_mRecordLayer() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*, 0x10>(this);
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__set_mHandshakeTimeout(::Org::BouncyCastle::Crypto::Tls::Timeout*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Tls::Timeout*, 0x18>(this, std::forward<::Org::BouncyCastle::Crypto::Tls::Timeout*>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::Timeout* Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__get_mHandshakeTimeout()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::Timeout*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::Timeout*> Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__get_mHandshakeTimeout() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::Timeout*, 0x18>(this);
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__set_mHandshakeHash(::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*, 0x20>(this, std::forward<::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__get_mHandshakeHash()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*> Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__get_mHandshakeHash() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*, 0x20>(this);
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__set_mCurrentInboundFlight(::System::Collections::IDictionary*  value)  {
::cordl_internals::setInstanceField<::System::Collections::IDictionary*, 0x28>(this, std::forward<::System::Collections::IDictionary*>(value));
}
constexpr ::System::Collections::IDictionary* Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__get_mCurrentInboundFlight()  {
return ::cordl_internals::getInstanceField<::System::Collections::IDictionary*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__get_mCurrentInboundFlight() const {
return ::cordl_internals::getInstanceField<::System::Collections::IDictionary*, 0x28>(this);
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__set_mPreviousInboundFlight(::System::Collections::IDictionary*  value)  {
::cordl_internals::setInstanceField<::System::Collections::IDictionary*, 0x30>(this, std::forward<::System::Collections::IDictionary*>(value));
}
constexpr ::System::Collections::IDictionary* Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__get_mPreviousInboundFlight()  {
return ::cordl_internals::getInstanceField<::System::Collections::IDictionary*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__get_mPreviousInboundFlight() const {
return ::cordl_internals::getInstanceField<::System::Collections::IDictionary*, 0x30>(this);
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__set_mOutboundFlight(::System::Collections::IList*  value)  {
::cordl_internals::setInstanceField<::System::Collections::IList*, 0x38>(this, std::forward<::System::Collections::IList*>(value));
}
constexpr ::System::Collections::IList* Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__get_mOutboundFlight()  {
return ::cordl_internals::getInstanceField<::System::Collections::IList*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__get_mOutboundFlight() const {
return ::cordl_internals::getInstanceField<::System::Collections::IList*, 0x38>(this);
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__set_mResendMillis(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this, std::forward<int32_t>(value));
}
constexpr int32_t& Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__get_mResendMillis()  {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this);
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__get_mResendMillis() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this);
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__set_mResendTimeout(::Org::BouncyCastle::Crypto::Tls::Timeout*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Tls::Timeout*, 0x48>(this, std::forward<::Org::BouncyCastle::Crypto::Tls::Timeout*>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::Timeout* Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__get_mResendTimeout()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::Timeout*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::Timeout*> Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__get_mResendTimeout() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::Timeout*, 0x48>(this);
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__set_mMessageSeq(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x50>(this, std::forward<int32_t>(value));
}
constexpr int32_t& Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__get_mMessageSeq()  {
return ::cordl_internals::getInstanceField<int32_t, 0x50>(this);
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__get_mMessageSeq() const {
return ::cordl_internals::getInstanceField<int32_t, 0x50>(this);
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__set_mNextReceiveSeq(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x54>(this, std::forward<int32_t>(value));
}
constexpr int32_t& Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__get_mNextReceiveSeq()  {
return ::cordl_internals::getInstanceField<int32_t, 0x54>(this);
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__get_mNextReceiveSeq() const {
return ::cordl_internals::getInstanceField<int32_t, 0x54>(this);
}
inline ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake* Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext*  context, ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*  transport, int32_t  timeoutMillis)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>(context, transport, timeoutMillis));
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::_ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext*  context, ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*  transport, int32_t  timeoutMillis)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsContext*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, context, transport, timeoutMillis);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::NotifyHelloComplete()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(),
                            "NotifyHelloComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::get_HandshakeHash()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(),
                            "get_HandshakeHash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::PrepareToFinish()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(),
                            "PrepareToFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*, false>(*this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::SendMessage(uint8_t  msg_type, ::ArrayW<uint8_t,::Array<uint8_t>*>  body)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(),
                            "SendMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, msg_type, body);
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::ReceiveMessageBody(uint8_t  msg_type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(),
                            "ReceiveMessageBody",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(*this, ___internal_method, msg_type);
}
inline ::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message* Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::ReceiveMessage()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(),
                            "ReceiveMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message*, false>(*this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::Finish()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(),
                            "Finish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::ResetHandshakeMessagesDigest()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(),
                            "ResetHandshakeMessagesDigest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::BackOff(int32_t  timeoutMillis)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(),
                            "BackOff",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, timeoutMillis);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::CheckInboundFlight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(),
                            "CheckInboundFlight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message* Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::GetPendingMessage()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(),
                            "GetPendingMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message*, false>(*this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::PrepareInboundFlight(::System::Collections::IDictionary*  nextFlight)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(),
                            "PrepareInboundFlight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, nextFlight);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::ProcessRecord(int32_t  windowSize, int32_t  epoch, ::ArrayW<uint8_t,::Array<uint8_t>*>  buf, int32_t  off, int32_t  len)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(),
                            "ProcessRecord",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, windowSize, epoch, buf, off, len);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::ResendOutboundFlight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(),
                            "ResendOutboundFlight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message* Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::UpdateHandshakeMessagesDigest(::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message*  message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(),
                            "UpdateHandshakeMessagesDigest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message*, false>(*this, ___internal_method, message);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::WriteMessage(::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message*  message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(),
                            "WriteMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, message);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::WriteHandshakeFragment(::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message*  message, int32_t  fragment_offset, int32_t  fragment_length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(),
                            "WriteHandshakeFragment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, message, fragment_offset, fragment_length);
}
inline bool Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::CheckAll(::System::Collections::IDictionary*  inboundFlight)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(),
                            "CheckAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, inboundFlight);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::ResetAll(::System::Collections::IDictionary*  inboundFlight)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(),
                            "ResetAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, inboundFlight);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
