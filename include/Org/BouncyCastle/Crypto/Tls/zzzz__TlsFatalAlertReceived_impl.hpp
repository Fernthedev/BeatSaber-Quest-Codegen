#pragma once
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsException_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsFatalAlertReceived_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived::*)(uint8_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xfae00c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived.get_AlertDescription
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived::get_AlertDescription)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xfae04c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived::__set_alertDescription(uint8_t  value)  {
::cordl_internals::setInstanceField<uint8_t, 0x8c>(this, std::forward<uint8_t>(value));
}
constexpr uint8_t& Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived::__get_alertDescription()  {
return ::cordl_internals::getInstanceField<uint8_t, 0x8c>(this);
}
constexpr uint8_t const& Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived::__get_alertDescription() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x8c>(this);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived* Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived::New_ctor(uint8_t  alertDescription)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived*>(alertDescription));
}
inline void Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived::_ctor(uint8_t  alertDescription)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, alertDescription);
}
inline uint8_t Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived::get_AlertDescription()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived*>::get(),
                            "get_AlertDescription",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
