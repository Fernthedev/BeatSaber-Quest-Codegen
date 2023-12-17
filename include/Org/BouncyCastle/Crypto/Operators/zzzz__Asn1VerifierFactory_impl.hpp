#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Operators/zzzz__Asn1VerifierFactory_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IVerifierFactory_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IStreamCalculator_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory::*)(::StringW, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(&::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory::_ctor)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xf2cd78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory::*)(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(&::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xf2cec8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory.get_AlgorithmDetails
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory::*)()>(&::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory::get_AlgorithmDetails)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf2cef4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory*>::get(),
                            "get_AlgorithmDetails",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory.CreateCalculator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::IStreamCalculator* (::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory::*)()>(&::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory::CreateCalculator)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xf2cefc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory*>::get(),
                            "CreateCalculator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IVerifierFactory"
constexpr  Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory::operator ::Org::BouncyCastle::Crypto::IVerifierFactory*() noexcept {
return static_cast<::Org::BouncyCastle::Crypto::IVerifierFactory*>(static_cast<void*>(this));
}
constexpr void Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory::__set_algID(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, 0x10>(this, std::forward<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(value));
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory::__get_algID()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory::__get_algID() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, 0x10>(this);
}
constexpr void Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory::__set_publicKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, 0x18>(this, std::forward<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(value));
}
constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory::__get_publicKey()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*> Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory::__get_publicKey() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, 0x18>(this);
}
inline ::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory* Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory::New_ctor(::StringW  algorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  publicKey)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory*>(algorithm, publicKey));
}
inline void Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory::_ctor(::StringW  algorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  publicKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, algorithm, publicKey);
}
inline ::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory* Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory::New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  algorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  publicKey)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory*>(algorithm, publicKey));
}
inline void Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory::_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  algorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  publicKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, algorithm, publicKey);
}
inline ::System::Object* Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory::get_AlgorithmDetails()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory*>::get(),
                            "get_AlgorithmDetails",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::IStreamCalculator* Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory::CreateCalculator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory*>::get(),
                            "CreateCalculator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IStreamCalculator*, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
