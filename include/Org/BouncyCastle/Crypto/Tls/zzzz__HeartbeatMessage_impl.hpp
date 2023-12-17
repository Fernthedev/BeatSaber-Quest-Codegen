#pragma once
#include "System/IO/zzzz__MemoryStream_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__HeartbeatMessage_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__HeartbeatMessage_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsContext_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::__HeartbeatMessage__PayloadBuffer.ToTruncatedByteArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Tls::__HeartbeatMessage__PayloadBuffer::*)(int32_t)>(&::Org::BouncyCastle::Crypto::Tls::__HeartbeatMessage__PayloadBuffer::ToTruncatedByteArray)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xf91dec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::__HeartbeatMessage__PayloadBuffer*>::get(),
                            "ToTruncatedByteArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::__HeartbeatMessage__PayloadBuffer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::__HeartbeatMessage__PayloadBuffer::*)()>(&::Org::BouncyCastle::Crypto::Tls::__HeartbeatMessage__PayloadBuffer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf91de4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::__HeartbeatMessage__PayloadBuffer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Org::BouncyCastle::Crypto::Tls::__HeartbeatMessage__PayloadBuffer::ToTruncatedByteArray(int32_t  payloadLength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::__HeartbeatMessage__PayloadBuffer*>::get(),
                            "ToTruncatedByteArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(*this, ___internal_method, payloadLength);
}
inline ::Org::BouncyCastle::Crypto::Tls::__HeartbeatMessage__PayloadBuffer* Org::BouncyCastle::Crypto::Tls::__HeartbeatMessage__PayloadBuffer::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Tls::__HeartbeatMessage__PayloadBuffer*>());
}
inline void Org::BouncyCastle::Crypto::Tls::__HeartbeatMessage__PayloadBuffer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::__HeartbeatMessage__PayloadBuffer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage::*)(uint8_t, ::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t)>(&::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xf918dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage.Encode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage::*)(::Org::BouncyCastle::Crypto::Tls::TlsContext*, ::System::IO::Stream*)>(&::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage::Encode)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0xf91a20;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage.Parse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage* (*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage::Parse)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0xf91c1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage*>::get(),
                            "Parse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Crypto::Tls::HeartbeatMessage::__set_mType(uint8_t  value)  {
::cordl_internals::setInstanceField<uint8_t, 0x10>(this, std::forward<uint8_t>(value));
}
constexpr uint8_t& Org::BouncyCastle::Crypto::Tls::HeartbeatMessage::__get_mType()  {
return ::cordl_internals::getInstanceField<uint8_t, 0x10>(this);
}
constexpr uint8_t const& Org::BouncyCastle::Crypto::Tls::HeartbeatMessage::__get_mType() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x10>(this);
}
constexpr void Org::BouncyCastle::Crypto::Tls::HeartbeatMessage::__set_mPayload(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x18>(this, std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Tls::HeartbeatMessage::__get_mPayload()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x18>(this);
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Tls::HeartbeatMessage::__get_mPayload() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x18>(this);
}
constexpr void Org::BouncyCastle::Crypto::Tls::HeartbeatMessage::__set_mPaddingLength(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this, std::forward<int32_t>(value));
}
constexpr int32_t& Org::BouncyCastle::Crypto::Tls::HeartbeatMessage::__get_mPaddingLength()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Tls::HeartbeatMessage::__get_mPaddingLength() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
inline ::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage* Org::BouncyCastle::Crypto::Tls::HeartbeatMessage::New_ctor(uint8_t  type, ::ArrayW<uint8_t,::Array<uint8_t>*>  payload, int32_t  paddingLength)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage*>(type, payload, paddingLength));
}
inline void Org::BouncyCastle::Crypto::Tls::HeartbeatMessage::_ctor(uint8_t  type, ::ArrayW<uint8_t,::Array<uint8_t>*>  payload, int32_t  paddingLength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, type, payload, paddingLength);
}
inline void Org::BouncyCastle::Crypto::Tls::HeartbeatMessage::Encode(::Org::BouncyCastle::Crypto::Tls::TlsContext*  context, ::System::IO::Stream*  output)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage*>::get(),
                            "Encode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsContext*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, context, output);
}
inline ::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage* Org::BouncyCastle::Crypto::Tls::HeartbeatMessage::Parse(::System::IO::Stream*  input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage*>::get(),
                            "Parse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage*, false>(nullptr, ___internal_method, input);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
