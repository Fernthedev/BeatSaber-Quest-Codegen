#pragma once
#include "Org/BouncyCastle/Crypto/zzzz__KeyGenerationParameters_impl.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__DsaKeyGenerationParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__DsaParameters_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::DsaKeyGenerationParameters._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::DsaKeyGenerationParameters::*)(::Org::BouncyCastle::Security::SecureRandom*, ::Org::BouncyCastle::Crypto::Parameters::DsaParameters*)>(&::Org::BouncyCastle::Crypto::Parameters::DsaKeyGenerationParameters::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xf318b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::DsaKeyGenerationParameters*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::DsaParameters*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::DsaKeyGenerationParameters.get_Parameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Parameters::DsaParameters* (::Org::BouncyCastle::Crypto::Parameters::DsaKeyGenerationParameters::*)()>(&::Org::BouncyCastle::Crypto::Parameters::DsaKeyGenerationParameters::get_Parameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf31900;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::DsaKeyGenerationParameters*>::get(),
                            "get_Parameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Crypto::Parameters::DsaKeyGenerationParameters::__set_parameters(::Org::BouncyCastle::Crypto::Parameters::DsaParameters*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Parameters::DsaParameters*, 0x20>(this, std::forward<::Org::BouncyCastle::Crypto::Parameters::DsaParameters*>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::DsaParameters* Org::BouncyCastle::Crypto::Parameters::DsaKeyGenerationParameters::__get_parameters()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Parameters::DsaParameters*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::DsaParameters*> Org::BouncyCastle::Crypto::Parameters::DsaKeyGenerationParameters::__get_parameters() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Parameters::DsaParameters*, 0x20>(this);
}
inline ::Org::BouncyCastle::Crypto::Parameters::DsaKeyGenerationParameters* Org::BouncyCastle::Crypto::Parameters::DsaKeyGenerationParameters::New_ctor(::Org::BouncyCastle::Security::SecureRandom*  random, ::Org::BouncyCastle::Crypto::Parameters::DsaParameters*  parameters)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Parameters::DsaKeyGenerationParameters*>(random, parameters));
}
inline void Org::BouncyCastle::Crypto::Parameters::DsaKeyGenerationParameters::_ctor(::Org::BouncyCastle::Security::SecureRandom*  random, ::Org::BouncyCastle::Crypto::Parameters::DsaParameters*  parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::DsaKeyGenerationParameters*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::DsaParameters*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, random, parameters);
}
inline ::Org::BouncyCastle::Crypto::Parameters::DsaParameters* Org::BouncyCastle::Crypto::Parameters::DsaKeyGenerationParameters::get_Parameters()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::DsaKeyGenerationParameters*>::get(),
                            "get_Parameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::DsaParameters*, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
