#pragma once
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsProtocol_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsClientProtocol_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsContext_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsClient_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsContext_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DigitallySigned_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsAuthentication_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsKeyExchange_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__CertificateRequest_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsPeer_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsClientContextImpl_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__CertificateStatus_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::*)(::System::IO::Stream*, ::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xf9fe68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::*)(::System::IO::Stream*, ::System::IO::Stream*, ::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xf9fe88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::*)(::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xf9fea0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol.Connect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::*)(::Org::BouncyCastle::Crypto::Tls::TlsClient*)>(&::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::Connect)> {
  constexpr static std::size_t size = 0x478;
  constexpr static std::size_t addrs = 0xf9feb8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(),
                                  51
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol.CleanupHandshake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::CleanupHandshake)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xfa0330;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol.get_Context
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsContext* (::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::get_Context)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xfa0354;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol.get_ContextAdmin
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::AbstractTlsContext* (::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::get_ContextAdmin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xfa035c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol.get_Peer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsPeer* (::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::get_Peer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xfa0364;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol.HandleHandshakeMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::*)(uint8_t, ::System::IO::MemoryStream*)>(&::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::HandleHandshakeMessage)> {
  constexpr static std::size_t size = 0x1260;
  constexpr static std::size_t addrs = 0xfa036c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol.HandleSupplementalData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::*)(::System::Collections::IList*)>(&::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::HandleSupplementalData)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0xfa15cc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(),
                                  52
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol.ReceiveNewSessionTicketMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::*)(::System::IO::MemoryStream*)>(&::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::ReceiveNewSessionTicketMessage)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xfa177c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(),
                                  53
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol.ReceiveServerHelloMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::*)(::System::IO::MemoryStream*)>(&::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::ReceiveServerHelloMessage)> {
  constexpr static std::size_t size = 0xea4;
  constexpr static std::size_t addrs = 0xfa183c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(),
                                  54
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol.SendCertificateVerifyMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::*)(::Org::BouncyCastle::Crypto::Tls::DigitallySigned*)>(&::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::SendCertificateVerifyMessage)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xfa26e0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(),
                                  55
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol.SendClientHelloMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::SendClientHelloMessage)> {
  constexpr static std::size_t size = 0x6a0;
  constexpr static std::size_t addrs = 0xfa276c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(),
                                  56
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol.SendClientKeyExchangeMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::SendClientKeyExchangeMessage)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xfa2e0c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(),
                                  57
                                ));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::__set_mTlsClient(::Org::BouncyCastle::Crypto::Tls::TlsClient*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsClient*, 0xa8>(this, std::forward<::Org::BouncyCastle::Crypto::Tls::TlsClient*>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsClient* Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::__get_mTlsClient()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsClient*, 0xa8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsClient*> Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::__get_mTlsClient() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsClient*, 0xa8>(this);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::__set_mTlsClientContext(::Org::BouncyCastle::Crypto::Tls::TlsClientContextImpl*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsClientContextImpl*, 0xb0>(this, std::forward<::Org::BouncyCastle::Crypto::Tls::TlsClientContextImpl*>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsClientContextImpl* Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::__get_mTlsClientContext()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsClientContextImpl*, 0xb0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsClientContextImpl*> Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::__get_mTlsClientContext() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsClientContextImpl*, 0xb0>(this);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::__set_mSelectedSessionID(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0xb8>(this, std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::__get_mSelectedSessionID()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0xb8>(this);
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::__get_mSelectedSessionID() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0xb8>(this);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::__set_mKeyExchange(::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*, 0xc0>(this, std::forward<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::__get_mKeyExchange()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*, 0xc0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*> Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::__get_mKeyExchange() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*, 0xc0>(this);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::__set_mAuthentication(::Org::BouncyCastle::Crypto::Tls::TlsAuthentication*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsAuthentication*, 0xc8>(this, std::forward<::Org::BouncyCastle::Crypto::Tls::TlsAuthentication*>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsAuthentication* Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::__get_mAuthentication()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsAuthentication*, 0xc8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsAuthentication*> Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::__get_mAuthentication() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsAuthentication*, 0xc8>(this);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::__set_mCertificateStatus(::Org::BouncyCastle::Crypto::Tls::CertificateStatus*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Tls::CertificateStatus*, 0xd0>(this, std::forward<::Org::BouncyCastle::Crypto::Tls::CertificateStatus*>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::CertificateStatus* Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::__get_mCertificateStatus()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::CertificateStatus*, 0xd0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::CertificateStatus*> Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::__get_mCertificateStatus() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::CertificateStatus*, 0xd0>(this);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::__set_mCertificateRequest(::Org::BouncyCastle::Crypto::Tls::CertificateRequest*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Tls::CertificateRequest*, 0xd8>(this, std::forward<::Org::BouncyCastle::Crypto::Tls::CertificateRequest*>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::CertificateRequest* Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::__get_mCertificateRequest()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::CertificateRequest*, 0xd8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::CertificateRequest*> Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::__get_mCertificateRequest() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::CertificateRequest*, 0xd8>(this);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol* Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::New_ctor(::System::IO::Stream*  stream, ::Org::BouncyCastle::Security::SecureRandom*  secureRandom)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>(stream, secureRandom));
}
inline void Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::_ctor(::System::IO::Stream*  stream, ::Org::BouncyCastle::Security::SecureRandom*  secureRandom)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stream, secureRandom);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol* Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::New_ctor(::System::IO::Stream*  input, ::System::IO::Stream*  output, ::Org::BouncyCastle::Security::SecureRandom*  secureRandom)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>(input, output, secureRandom));
}
inline void Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::_ctor(::System::IO::Stream*  input, ::System::IO::Stream*  output, ::Org::BouncyCastle::Security::SecureRandom*  secureRandom)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, input, output, secureRandom);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol* Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::New_ctor(::Org::BouncyCastle::Security::SecureRandom*  secureRandom)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>(secureRandom));
}
inline void Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::_ctor(::Org::BouncyCastle::Security::SecureRandom*  secureRandom)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, secureRandom);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::Connect(::Org::BouncyCastle::Crypto::Tls::TlsClient*  tlsClient)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(),
                            "Connect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsClient*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, tlsClient);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::CleanupHandshake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(),
                            "CleanupHandshake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsContext* Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::get_Context()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(),
                            "get_Context",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsContext*, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::AbstractTlsContext* Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::get_ContextAdmin()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(),
                            "get_ContextAdmin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::AbstractTlsContext*, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsPeer* Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::get_Peer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(),
                            "get_Peer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsPeer*, false>(*this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::HandleHandshakeMessage(uint8_t  type, ::System::IO::MemoryStream*  buf)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(),
                            "HandleHandshakeMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::MemoryStream*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, type, buf);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::HandleSupplementalData(::System::Collections::IList*  serverSupplementalData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(),
                            "HandleSupplementalData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, serverSupplementalData);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::ReceiveNewSessionTicketMessage(::System::IO::MemoryStream*  buf)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(),
                            "ReceiveNewSessionTicketMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::MemoryStream*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, buf);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::ReceiveServerHelloMessage(::System::IO::MemoryStream*  buf)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(),
                            "ReceiveServerHelloMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::MemoryStream*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, buf);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::SendCertificateVerifyMessage(::Org::BouncyCastle::Crypto::Tls::DigitallySigned*  certificateVerify)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(),
                            "SendCertificateVerifyMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::DigitallySigned*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, certificateVerify);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::SendClientHelloMessage()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(),
                            "SendClientHelloMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::SendClientKeyExchangeMessage()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(),
                            "SendClientKeyExchangeMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
