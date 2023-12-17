#pragma once
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsKeyExchange_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsDHKeyExchange_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCredentials_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__DHPublicKeyParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsContext_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__DHParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__CertificateRequest_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSigner_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__Certificate_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__DHPrivateKeyParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsAgreementCredentials_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsDHVerifier_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::*)(int32_t, ::System::Collections::IList*, ::Org::BouncyCastle::Crypto::Parameters::DHParameters*)>(&::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xfa3b30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::DHParameters*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::*)(int32_t, ::System::Collections::IList*, ::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier*, ::Org::BouncyCastle::Crypto::Parameters::DHParameters*)>(&::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::_ctor)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xfa3bbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::DHParameters*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::*)(::Org::BouncyCastle::Crypto::Tls::TlsContext*)>(&::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::Init)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xfa3d00;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange.SkipServerCredentials
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::SkipServerCredentials)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xfa3dc0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange.ProcessServerCertificate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::*)(::Org::BouncyCastle::Crypto::Tls::Certificate*)>(&::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::ProcessServerCertificate)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0xfa3e18;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange.get_RequiresServerKeyExchange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::get_RequiresServerKeyExchange)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xfa41dc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange.GenerateServerKeyExchange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::GenerateServerKeyExchange)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xfa4204;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(),
                                  25
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange.ProcessServerKeyExchange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::ProcessServerKeyExchange)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xfa44a4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(),
                                  27
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange.ValidateCertificateRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::*)(::Org::BouncyCastle::Crypto::Tls::CertificateRequest*)>(&::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::ValidateCertificateRequest)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xfa4784;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange.ProcessClientCredentials
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::*)(::Org::BouncyCastle::Crypto::Tls::TlsCredentials*)>(&::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::ProcessClientCredentials)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xfa4850;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(),
                                  30
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange.GenerateClientKeyExchange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::GenerateClientKeyExchange)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xfa4968;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(),
                                  32
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange.ProcessClientCertificate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::*)(::Org::BouncyCastle::Crypto::Tls::Certificate*)>(&::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::ProcessClientCertificate)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xfa4b84;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange.ProcessClientKeyExchange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::ProcessClientKeyExchange)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xfa4bdc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange.GeneratePremasterSecret
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::GeneratePremasterSecret)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xfa4c90;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(),
                                  34
                                ));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::__set_mTlsSigner(::Org::BouncyCastle::Crypto::Tls::TlsSigner*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsSigner*, 0x28>(this, std::forward<::Org::BouncyCastle::Crypto::Tls::TlsSigner*>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSigner* Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::__get_mTlsSigner()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsSigner*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsSigner*> Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::__get_mTlsSigner() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsSigner*, 0x28>(this);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::__set_mDHVerifier(::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier*, 0x30>(this, std::forward<::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier*>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier* Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::__get_mDHVerifier()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier*> Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::__get_mDHVerifier() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier*, 0x30>(this);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::__set_mDHParameters(::Org::BouncyCastle::Crypto::Parameters::DHParameters*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Parameters::DHParameters*, 0x38>(this, std::forward<::Org::BouncyCastle::Crypto::Parameters::DHParameters*>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::DHParameters* Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::__get_mDHParameters()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Parameters::DHParameters*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::DHParameters*> Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::__get_mDHParameters() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Parameters::DHParameters*, 0x38>(this);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::__set_mServerPublicKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, 0x40>(this, std::forward<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(value));
}
constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::__get_mServerPublicKey()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*> Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::__get_mServerPublicKey() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, 0x40>(this);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::__set_mAgreementCredentials(::Org::BouncyCastle::Crypto::Tls::TlsAgreementCredentials*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsAgreementCredentials*, 0x48>(this, std::forward<::Org::BouncyCastle::Crypto::Tls::TlsAgreementCredentials*>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsAgreementCredentials* Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::__get_mAgreementCredentials()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsAgreementCredentials*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsAgreementCredentials*> Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::__get_mAgreementCredentials() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsAgreementCredentials*, 0x48>(this);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::__set_mDHAgreePrivateKey(::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters*, 0x50>(this, std::forward<::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters*>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters* Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::__get_mDHAgreePrivateKey()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters*> Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::__get_mDHAgreePrivateKey() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters*, 0x50>(this);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::__set_mDHAgreePublicKey(::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters*, 0x58>(this, std::forward<::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters*>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters* Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::__get_mDHAgreePublicKey()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters*> Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::__get_mDHAgreePublicKey() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters*, 0x58>(this);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange* Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::New_ctor(int32_t  keyExchange, ::System::Collections::IList*  supportedSignatureAlgorithms, ::Org::BouncyCastle::Crypto::Parameters::DHParameters*  dhParameters)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>(keyExchange, supportedSignatureAlgorithms, dhParameters));
}
inline void Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::_ctor(int32_t  keyExchange, ::System::Collections::IList*  supportedSignatureAlgorithms, ::Org::BouncyCastle::Crypto::Parameters::DHParameters*  dhParameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::DHParameters*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, keyExchange, supportedSignatureAlgorithms, dhParameters);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange* Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::New_ctor(int32_t  keyExchange, ::System::Collections::IList*  supportedSignatureAlgorithms, ::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier*  dhVerifier, ::Org::BouncyCastle::Crypto::Parameters::DHParameters*  dhParameters)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>(keyExchange, supportedSignatureAlgorithms, dhVerifier, dhParameters));
}
inline void Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::_ctor(int32_t  keyExchange, ::System::Collections::IList*  supportedSignatureAlgorithms, ::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier*  dhVerifier, ::Org::BouncyCastle::Crypto::Parameters::DHParameters*  dhParameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::DHParameters*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, keyExchange, supportedSignatureAlgorithms, dhVerifier, dhParameters);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::Init(::Org::BouncyCastle::Crypto::Tls::TlsContext*  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsContext*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, context);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::SkipServerCredentials()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(),
                            "SkipServerCredentials",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::ProcessServerCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate*  serverCertificate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(),
                            "ProcessServerCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::Certificate*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, serverCertificate);
}
inline bool Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::get_RequiresServerKeyExchange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(),
                            "get_RequiresServerKeyExchange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::GenerateServerKeyExchange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(),
                            "GenerateServerKeyExchange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(*this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::ProcessServerKeyExchange(::System::IO::Stream*  input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(),
                            "ProcessServerKeyExchange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, input);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::ValidateCertificateRequest(::Org::BouncyCastle::Crypto::Tls::CertificateRequest*  certificateRequest)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(),
                            "ValidateCertificateRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::CertificateRequest*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, certificateRequest);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::ProcessClientCredentials(::Org::BouncyCastle::Crypto::Tls::TlsCredentials*  clientCredentials)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(),
                            "ProcessClientCredentials",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsCredentials*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, clientCredentials);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::GenerateClientKeyExchange(::System::IO::Stream*  output)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(),
                            "GenerateClientKeyExchange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, output);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::ProcessClientCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate*  clientCertificate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(),
                            "ProcessClientCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::Certificate*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, clientCertificate);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::ProcessClientKeyExchange(::System::IO::Stream*  input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(),
                            "ProcessClientKeyExchange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, input);
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::GeneratePremasterSecret()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(),
                            "GeneratePremasterSecret",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
