#pragma once
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseOutputStream_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__RecordStream_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__ProtocolVersion_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsProtocol_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsContext_def.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseOutputStream_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCompression_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsHandshakeHash_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__RecordStream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::__RecordStream__HandshakeHashUpdateStream._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::__RecordStream__HandshakeHashUpdateStream::*)(::Org::BouncyCastle::Crypto::Tls::RecordStream*)>(&::Org::BouncyCastle::Crypto::Tls::__RecordStream__HandshakeHashUpdateStream::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xf9383c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::__RecordStream__HandshakeHashUpdateStream*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::__RecordStream__HandshakeHashUpdateStream.Write
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::__RecordStream__HandshakeHashUpdateStream::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Tls::__RecordStream__HandshakeHashUpdateStream::Write)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xf94bc0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::__RecordStream__HandshakeHashUpdateStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::__RecordStream__HandshakeHashUpdateStream*>::get(),
                                  38
                                ));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Crypto::Tls::__RecordStream__HandshakeHashUpdateStream::__set_mOuter(::Org::BouncyCastle::Crypto::Tls::RecordStream*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Tls::RecordStream*, 0x30>(this, std::forward<::Org::BouncyCastle::Crypto::Tls::RecordStream*>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::RecordStream* Org::BouncyCastle::Crypto::Tls::__RecordStream__HandshakeHashUpdateStream::__get_mOuter()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::RecordStream*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::RecordStream*> Org::BouncyCastle::Crypto::Tls::__RecordStream__HandshakeHashUpdateStream::__get_mOuter() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::RecordStream*, 0x30>(this);
}
inline ::Org::BouncyCastle::Crypto::Tls::__RecordStream__HandshakeHashUpdateStream* Org::BouncyCastle::Crypto::Tls::__RecordStream__HandshakeHashUpdateStream::New_ctor(::Org::BouncyCastle::Crypto::Tls::RecordStream*  mOuter)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Tls::__RecordStream__HandshakeHashUpdateStream*>(mOuter));
}
inline void Org::BouncyCastle::Crypto::Tls::__RecordStream__HandshakeHashUpdateStream::_ctor(::Org::BouncyCastle::Crypto::Tls::RecordStream*  mOuter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::__RecordStream__HandshakeHashUpdateStream*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, mOuter);
}
inline void Org::BouncyCastle::Crypto::Tls::__RecordStream__HandshakeHashUpdateStream::Write(::ArrayW<uint8_t,::Array<uint8_t>*>  buf, int32_t  off, int32_t  len)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::__RecordStream__HandshakeHashUpdateStream*>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, buf, off, len);
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::__RecordStream__SequenceNumber.NextValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::Org::BouncyCastle::Crypto::Tls::__RecordStream__SequenceNumber::*)(uint8_t)>(&::Org::BouncyCastle::Crypto::Tls::__RecordStream__SequenceNumber::NextValue)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xf94418;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::__RecordStream__SequenceNumber*>::get(),
                            "NextValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::__RecordStream__SequenceNumber._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::__RecordStream__SequenceNumber::*)()>(&::Org::BouncyCastle::Crypto::Tls::__RecordStream__SequenceNumber::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xf9382c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::__RecordStream__SequenceNumber*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Crypto::Tls::__RecordStream__SequenceNumber::__set_value(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x10>(this, std::forward<int64_t>(value));
}
constexpr int64_t& Org::BouncyCastle::Crypto::Tls::__RecordStream__SequenceNumber::__get_value()  {
return ::cordl_internals::getInstanceField<int64_t, 0x10>(this);
}
constexpr int64_t const& Org::BouncyCastle::Crypto::Tls::__RecordStream__SequenceNumber::__get_value() const {
return ::cordl_internals::getInstanceField<int64_t, 0x10>(this);
}
constexpr void Org::BouncyCastle::Crypto::Tls::__RecordStream__SequenceNumber::__set_exhausted(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this, std::forward<bool>(value));
}
constexpr bool& Org::BouncyCastle::Crypto::Tls::__RecordStream__SequenceNumber::__get_exhausted()  {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
constexpr bool const& Org::BouncyCastle::Crypto::Tls::__RecordStream__SequenceNumber::__get_exhausted() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
inline int64_t Org::BouncyCastle::Crypto::Tls::__RecordStream__SequenceNumber::NextValue(uint8_t  alertDescription)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::__RecordStream__SequenceNumber*>::get(),
                            "NextValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(*this, ___internal_method, alertDescription);
}
inline ::Org::BouncyCastle::Crypto::Tls::__RecordStream__SequenceNumber* Org::BouncyCastle::Crypto::Tls::__RecordStream__SequenceNumber::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Tls::__RecordStream__SequenceNumber*>());
}
inline void Org::BouncyCastle::Crypto::Tls::__RecordStream__SequenceNumber::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::__RecordStream__SequenceNumber*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::RecordStream._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::RecordStream::*)(::Org::BouncyCastle::Crypto::Tls::TlsProtocol*, ::System::IO::Stream*, ::System::IO::Stream*)>(&::Org::BouncyCastle::Crypto::Tls::RecordStream::_ctor)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xf936c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::RecordStream.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::RecordStream::*)(::Org::BouncyCastle::Crypto::Tls::TlsContext*)>(&::Org::BouncyCastle::Crypto::Tls::RecordStream::Init)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xf93864;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::RecordStream.GetPlaintextLimit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Tls::RecordStream::*)()>(&::Org::BouncyCastle::Crypto::Tls::RecordStream::GetPlaintextLimit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf93984;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::RecordStream.SetPlaintextLimit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::RecordStream::*)(int32_t)>(&::Org::BouncyCastle::Crypto::Tls::RecordStream::SetPlaintextLimit)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xf9398c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::RecordStream.get_ReadVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* (::Org::BouncyCastle::Crypto::Tls::RecordStream::*)()>(&::Org::BouncyCastle::Crypto::Tls::RecordStream::get_ReadVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf939a8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::RecordStream.set_ReadVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::RecordStream::*)(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*)>(&::Org::BouncyCastle::Crypto::Tls::RecordStream::set_ReadVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf939b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::RecordStream.SetWriteVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::RecordStream::*)(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*)>(&::Org::BouncyCastle::Crypto::Tls::RecordStream::SetWriteVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf939b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::RecordStream.SetRestrictReadVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::RecordStream::*)(bool)>(&::Org::BouncyCastle::Crypto::Tls::RecordStream::SetRestrictReadVersion)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xf939c0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::RecordStream.SetPendingConnectionState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::RecordStream::*)(::Org::BouncyCastle::Crypto::Tls::TlsCompression*, ::Org::BouncyCastle::Crypto::Tls::TlsCipher*)>(&::Org::BouncyCastle::Crypto::Tls::RecordStream::SetPendingConnectionState)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xf939cc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::RecordStream.SentWriteCipherSpec
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::RecordStream::*)()>(&::Org::BouncyCastle::Crypto::Tls::RecordStream::SentWriteCipherSpec)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xf939d8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::RecordStream.ReceivedReadCipherSpec
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::RecordStream::*)()>(&::Org::BouncyCastle::Crypto::Tls::RecordStream::ReceivedReadCipherSpec)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xf93a98;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::RecordStream.FinaliseHandshake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::RecordStream::*)()>(&::Org::BouncyCastle::Crypto::Tls::RecordStream::FinaliseHandshake)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xf93b58;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::RecordStream.CheckRecordHeader
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::RecordStream::*)(::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::Org::BouncyCastle::Crypto::Tls::RecordStream::CheckRecordHeader)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xf93bdc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::RecordStream.ReadRecord
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Crypto::Tls::RecordStream::*)()>(&::Org::BouncyCastle::Crypto::Tls::RecordStream::ReadRecord)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0xf93dc4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::RecordStream.DecodeAndVerify
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Tls::RecordStream::*)(uint8_t, ::System::IO::Stream*, int32_t)>(&::Org::BouncyCastle::Crypto::Tls::RecordStream::DecodeAndVerify)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0xf9418c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::RecordStream.WriteRecord
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::RecordStream::*)(uint8_t, ::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Tls::RecordStream::WriteRecord)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0xf944e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::RecordStream.NotifyHelloComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::RecordStream::*)()>(&::Org::BouncyCastle::Crypto::Tls::RecordStream::NotifyHelloComplete)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xf948d0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::RecordStream.get_HandshakeHash
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* (::Org::BouncyCastle::Crypto::Tls::RecordStream::*)()>(&::Org::BouncyCastle::Crypto::Tls::RecordStream::get_HandshakeHash)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf9497c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::RecordStream.get_HandshakeHashUpdater
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (::Org::BouncyCastle::Crypto::Tls::RecordStream::*)()>(&::Org::BouncyCastle::Crypto::Tls::RecordStream::get_HandshakeHashUpdater)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf94984;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::RecordStream.PrepareToFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* (::Org::BouncyCastle::Crypto::Tls::RecordStream::*)()>(&::Org::BouncyCastle::Crypto::Tls::RecordStream::PrepareToFinish)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xf9498c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::RecordStream.SafeClose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::RecordStream::*)()>(&::Org::BouncyCastle::Crypto::Tls::RecordStream::SafeClose)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xf94a3c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::RecordStream.Flush
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::RecordStream::*)()>(&::Org::BouncyCastle::Crypto::Tls::RecordStream::Flush)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xf94b9c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::RecordStream.GetBufferContents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Tls::RecordStream::*)()>(&::Org::BouncyCastle::Crypto::Tls::RecordStream::GetBufferContents)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xf94494;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                            "GetBufferContents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::RecordStream.CheckType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint8_t, uint8_t)>(&::Org::BouncyCastle::Crypto::Tls::RecordStream::CheckType)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xf93d10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                            "CheckType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::RecordStream.CheckLength
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, int32_t, uint8_t)>(&::Org::BouncyCastle::Crypto::Tls::RecordStream::CheckLength)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xf93d6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                            "CheckLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Crypto::Tls::RecordStream::__set_mHandler(::Org::BouncyCastle::Crypto::Tls::TlsProtocol*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*, 0x10>(this, std::forward<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsProtocol* Org::BouncyCastle::Crypto::Tls::RecordStream::__get_mHandler()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*> Org::BouncyCastle::Crypto::Tls::RecordStream::__get_mHandler() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*, 0x10>(this);
}
constexpr void Org::BouncyCastle::Crypto::Tls::RecordStream::__set_mInput(::System::IO::Stream*  value)  {
::cordl_internals::setInstanceField<::System::IO::Stream*, 0x18>(this, std::forward<::System::IO::Stream*>(value));
}
constexpr ::System::IO::Stream* Org::BouncyCastle::Crypto::Tls::RecordStream::__get_mInput()  {
return ::cordl_internals::getInstanceField<::System::IO::Stream*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> Org::BouncyCastle::Crypto::Tls::RecordStream::__get_mInput() const {
return ::cordl_internals::getInstanceField<::System::IO::Stream*, 0x18>(this);
}
constexpr void Org::BouncyCastle::Crypto::Tls::RecordStream::__set_mOutput(::System::IO::Stream*  value)  {
::cordl_internals::setInstanceField<::System::IO::Stream*, 0x20>(this, std::forward<::System::IO::Stream*>(value));
}
constexpr ::System::IO::Stream* Org::BouncyCastle::Crypto::Tls::RecordStream::__get_mOutput()  {
return ::cordl_internals::getInstanceField<::System::IO::Stream*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> Org::BouncyCastle::Crypto::Tls::RecordStream::__get_mOutput() const {
return ::cordl_internals::getInstanceField<::System::IO::Stream*, 0x20>(this);
}
constexpr void Org::BouncyCastle::Crypto::Tls::RecordStream::__set_mPendingCompression(::Org::BouncyCastle::Crypto::Tls::TlsCompression*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsCompression*, 0x28>(this, std::forward<::Org::BouncyCastle::Crypto::Tls::TlsCompression*>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCompression* Org::BouncyCastle::Crypto::Tls::RecordStream::__get_mPendingCompression()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsCompression*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsCompression*> Org::BouncyCastle::Crypto::Tls::RecordStream::__get_mPendingCompression() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsCompression*, 0x28>(this);
}
constexpr void Org::BouncyCastle::Crypto::Tls::RecordStream::__set_mReadCompression(::Org::BouncyCastle::Crypto::Tls::TlsCompression*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsCompression*, 0x30>(this, std::forward<::Org::BouncyCastle::Crypto::Tls::TlsCompression*>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCompression* Org::BouncyCastle::Crypto::Tls::RecordStream::__get_mReadCompression()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsCompression*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsCompression*> Org::BouncyCastle::Crypto::Tls::RecordStream::__get_mReadCompression() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsCompression*, 0x30>(this);
}
constexpr void Org::BouncyCastle::Crypto::Tls::RecordStream::__set_mWriteCompression(::Org::BouncyCastle::Crypto::Tls::TlsCompression*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsCompression*, 0x38>(this, std::forward<::Org::BouncyCastle::Crypto::Tls::TlsCompression*>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCompression* Org::BouncyCastle::Crypto::Tls::RecordStream::__get_mWriteCompression()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsCompression*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsCompression*> Org::BouncyCastle::Crypto::Tls::RecordStream::__get_mWriteCompression() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsCompression*, 0x38>(this);
}
constexpr void Org::BouncyCastle::Crypto::Tls::RecordStream::__set_mPendingCipher(::Org::BouncyCastle::Crypto::Tls::TlsCipher*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsCipher*, 0x40>(this, std::forward<::Org::BouncyCastle::Crypto::Tls::TlsCipher*>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCipher* Org::BouncyCastle::Crypto::Tls::RecordStream::__get_mPendingCipher()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsCipher*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsCipher*> Org::BouncyCastle::Crypto::Tls::RecordStream::__get_mPendingCipher() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsCipher*, 0x40>(this);
}
constexpr void Org::BouncyCastle::Crypto::Tls::RecordStream::__set_mReadCipher(::Org::BouncyCastle::Crypto::Tls::TlsCipher*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsCipher*, 0x48>(this, std::forward<::Org::BouncyCastle::Crypto::Tls::TlsCipher*>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCipher* Org::BouncyCastle::Crypto::Tls::RecordStream::__get_mReadCipher()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsCipher*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsCipher*> Org::BouncyCastle::Crypto::Tls::RecordStream::__get_mReadCipher() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsCipher*, 0x48>(this);
}
constexpr void Org::BouncyCastle::Crypto::Tls::RecordStream::__set_mWriteCipher(::Org::BouncyCastle::Crypto::Tls::TlsCipher*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsCipher*, 0x50>(this, std::forward<::Org::BouncyCastle::Crypto::Tls::TlsCipher*>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCipher* Org::BouncyCastle::Crypto::Tls::RecordStream::__get_mWriteCipher()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsCipher*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsCipher*> Org::BouncyCastle::Crypto::Tls::RecordStream::__get_mWriteCipher() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsCipher*, 0x50>(this);
}
constexpr void Org::BouncyCastle::Crypto::Tls::RecordStream::__set_mReadSeqNo(::Org::BouncyCastle::Crypto::Tls::__RecordStream__SequenceNumber*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Tls::__RecordStream__SequenceNumber*, 0x58>(this, std::forward<::Org::BouncyCastle::Crypto::Tls::__RecordStream__SequenceNumber*>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::__RecordStream__SequenceNumber* Org::BouncyCastle::Crypto::Tls::RecordStream::__get_mReadSeqNo()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::__RecordStream__SequenceNumber*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::__RecordStream__SequenceNumber*> Org::BouncyCastle::Crypto::Tls::RecordStream::__get_mReadSeqNo() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::__RecordStream__SequenceNumber*, 0x58>(this);
}
constexpr void Org::BouncyCastle::Crypto::Tls::RecordStream::__set_mWriteSeqNo(::Org::BouncyCastle::Crypto::Tls::__RecordStream__SequenceNumber*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Tls::__RecordStream__SequenceNumber*, 0x60>(this, std::forward<::Org::BouncyCastle::Crypto::Tls::__RecordStream__SequenceNumber*>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::__RecordStream__SequenceNumber* Org::BouncyCastle::Crypto::Tls::RecordStream::__get_mWriteSeqNo()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::__RecordStream__SequenceNumber*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::__RecordStream__SequenceNumber*> Org::BouncyCastle::Crypto::Tls::RecordStream::__get_mWriteSeqNo() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::__RecordStream__SequenceNumber*, 0x60>(this);
}
constexpr void Org::BouncyCastle::Crypto::Tls::RecordStream::__set_mBuffer(::System::IO::MemoryStream*  value)  {
::cordl_internals::setInstanceField<::System::IO::MemoryStream*, 0x68>(this, std::forward<::System::IO::MemoryStream*>(value));
}
constexpr ::System::IO::MemoryStream* Org::BouncyCastle::Crypto::Tls::RecordStream::__get_mBuffer()  {
return ::cordl_internals::getInstanceField<::System::IO::MemoryStream*, 0x68>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::MemoryStream*> Org::BouncyCastle::Crypto::Tls::RecordStream::__get_mBuffer() const {
return ::cordl_internals::getInstanceField<::System::IO::MemoryStream*, 0x68>(this);
}
constexpr void Org::BouncyCastle::Crypto::Tls::RecordStream::__set_mHandshakeHash(::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*, 0x70>(this, std::forward<::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* Org::BouncyCastle::Crypto::Tls::RecordStream::__get_mHandshakeHash()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*> Org::BouncyCastle::Crypto::Tls::RecordStream::__get_mHandshakeHash() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*, 0x70>(this);
}
constexpr void Org::BouncyCastle::Crypto::Tls::RecordStream::__set_mHandshakeHashUpdater(::Org::BouncyCastle::Utilities::IO::BaseOutputStream*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Utilities::IO::BaseOutputStream*, 0x78>(this, std::forward<::Org::BouncyCastle::Utilities::IO::BaseOutputStream*>(value));
}
constexpr ::Org::BouncyCastle::Utilities::IO::BaseOutputStream* Org::BouncyCastle::Crypto::Tls::RecordStream::__get_mHandshakeHashUpdater()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Utilities::IO::BaseOutputStream*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::IO::BaseOutputStream*> Org::BouncyCastle::Crypto::Tls::RecordStream::__get_mHandshakeHashUpdater() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Utilities::IO::BaseOutputStream*, 0x78>(this);
}
constexpr void Org::BouncyCastle::Crypto::Tls::RecordStream::__set_mReadVersion(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*, 0x80>(this, std::forward<::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* Org::BouncyCastle::Crypto::Tls::RecordStream::__get_mReadVersion()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*, 0x80>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*> Org::BouncyCastle::Crypto::Tls::RecordStream::__get_mReadVersion() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*, 0x80>(this);
}
constexpr void Org::BouncyCastle::Crypto::Tls::RecordStream::__set_mWriteVersion(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*, 0x88>(this, std::forward<::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* Org::BouncyCastle::Crypto::Tls::RecordStream::__get_mWriteVersion()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*, 0x88>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*> Org::BouncyCastle::Crypto::Tls::RecordStream::__get_mWriteVersion() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*, 0x88>(this);
}
constexpr void Org::BouncyCastle::Crypto::Tls::RecordStream::__set_mRestrictReadVersion(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x90>(this, std::forward<bool>(value));
}
constexpr bool& Org::BouncyCastle::Crypto::Tls::RecordStream::__get_mRestrictReadVersion()  {
return ::cordl_internals::getInstanceField<bool, 0x90>(this);
}
constexpr bool const& Org::BouncyCastle::Crypto::Tls::RecordStream::__get_mRestrictReadVersion() const {
return ::cordl_internals::getInstanceField<bool, 0x90>(this);
}
constexpr void Org::BouncyCastle::Crypto::Tls::RecordStream::__set_mPlaintextLimit(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x94>(this, std::forward<int32_t>(value));
}
constexpr int32_t& Org::BouncyCastle::Crypto::Tls::RecordStream::__get_mPlaintextLimit()  {
return ::cordl_internals::getInstanceField<int32_t, 0x94>(this);
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Tls::RecordStream::__get_mPlaintextLimit() const {
return ::cordl_internals::getInstanceField<int32_t, 0x94>(this);
}
constexpr void Org::BouncyCastle::Crypto::Tls::RecordStream::__set_mCompressedLimit(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x98>(this, std::forward<int32_t>(value));
}
constexpr int32_t& Org::BouncyCastle::Crypto::Tls::RecordStream::__get_mCompressedLimit()  {
return ::cordl_internals::getInstanceField<int32_t, 0x98>(this);
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Tls::RecordStream::__get_mCompressedLimit() const {
return ::cordl_internals::getInstanceField<int32_t, 0x98>(this);
}
constexpr void Org::BouncyCastle::Crypto::Tls::RecordStream::__set_mCiphertextLimit(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x9c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& Org::BouncyCastle::Crypto::Tls::RecordStream::__get_mCiphertextLimit()  {
return ::cordl_internals::getInstanceField<int32_t, 0x9c>(this);
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Tls::RecordStream::__get_mCiphertextLimit() const {
return ::cordl_internals::getInstanceField<int32_t, 0x9c>(this);
}
inline ::Org::BouncyCastle::Crypto::Tls::RecordStream* Org::BouncyCastle::Crypto::Tls::RecordStream::New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsProtocol*  handler, ::System::IO::Stream*  input, ::System::IO::Stream*  output)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Tls::RecordStream*>(handler, input, output));
}
inline void Org::BouncyCastle::Crypto::Tls::RecordStream::_ctor(::Org::BouncyCastle::Crypto::Tls::TlsProtocol*  handler, ::System::IO::Stream*  input, ::System::IO::Stream*  output)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, handler, input, output);
}
inline void Org::BouncyCastle::Crypto::Tls::RecordStream::Init(::Org::BouncyCastle::Crypto::Tls::TlsContext*  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsContext*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, context);
}
inline int32_t Org::BouncyCastle::Crypto::Tls::RecordStream::GetPlaintextLimit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                            "GetPlaintextLimit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::RecordStream::SetPlaintextLimit(int32_t  plaintextLimit)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                            "SetPlaintextLimit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, plaintextLimit);
}
inline ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* Org::BouncyCastle::Crypto::Tls::RecordStream::get_ReadVersion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                            "get_ReadVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*, false>(*this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::RecordStream::set_ReadVersion(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                            "set_ReadVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void Org::BouncyCastle::Crypto::Tls::RecordStream::SetWriteVersion(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*  writeVersion)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                            "SetWriteVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, writeVersion);
}
inline void Org::BouncyCastle::Crypto::Tls::RecordStream::SetRestrictReadVersion(bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                            "SetRestrictReadVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, enabled);
}
inline void Org::BouncyCastle::Crypto::Tls::RecordStream::SetPendingConnectionState(::Org::BouncyCastle::Crypto::Tls::TlsCompression*  tlsCompression, ::Org::BouncyCastle::Crypto::Tls::TlsCipher*  tlsCipher)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                            "SetPendingConnectionState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsCompression*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsCipher*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, tlsCompression, tlsCipher);
}
inline void Org::BouncyCastle::Crypto::Tls::RecordStream::SentWriteCipherSpec()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                            "SentWriteCipherSpec",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::RecordStream::ReceivedReadCipherSpec()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                            "ReceivedReadCipherSpec",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::RecordStream::FinaliseHandshake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                            "FinaliseHandshake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::RecordStream::CheckRecordHeader(::ArrayW<uint8_t,::Array<uint8_t>*>  recordHeader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                            "CheckRecordHeader",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, recordHeader);
}
inline bool Org::BouncyCastle::Crypto::Tls::RecordStream::ReadRecord()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                            "ReadRecord",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Org::BouncyCastle::Crypto::Tls::RecordStream::DecodeAndVerify(uint8_t  type, ::System::IO::Stream*  input, int32_t  len)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                            "DecodeAndVerify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(*this, ___internal_method, type, input, len);
}
inline void Org::BouncyCastle::Crypto::Tls::RecordStream::WriteRecord(uint8_t  type, ::ArrayW<uint8_t,::Array<uint8_t>*>  plaintext, int32_t  plaintextOffset, int32_t  plaintextLength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                            "WriteRecord",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, type, plaintext, plaintextOffset, plaintextLength);
}
inline void Org::BouncyCastle::Crypto::Tls::RecordStream::NotifyHelloComplete()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                            "NotifyHelloComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* Org::BouncyCastle::Crypto::Tls::RecordStream::get_HandshakeHash()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                            "get_HandshakeHash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*, false>(*this, ___internal_method);
}
inline ::System::IO::Stream* Org::BouncyCastle::Crypto::Tls::RecordStream::get_HandshakeHashUpdater()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                            "get_HandshakeHashUpdater",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* Org::BouncyCastle::Crypto::Tls::RecordStream::PrepareToFinish()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                            "PrepareToFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*, false>(*this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::RecordStream::SafeClose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                            "SafeClose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::RecordStream::Flush()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                            "Flush",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Org::BouncyCastle::Crypto::Tls::RecordStream::GetBufferContents()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                            "GetBufferContents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(*this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::RecordStream::CheckType(uint8_t  type, uint8_t  alertDescription)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                            "CheckType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, type, alertDescription);
}
inline void Org::BouncyCastle::Crypto::Tls::RecordStream::CheckLength(int32_t  length, int32_t  limit, uint8_t  alertDescription)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                            "CheckLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, length, limit, alertDescription);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
