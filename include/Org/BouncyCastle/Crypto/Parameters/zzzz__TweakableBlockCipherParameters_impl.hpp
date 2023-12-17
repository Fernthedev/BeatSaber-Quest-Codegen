#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__TweakableBlockCipherParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__KeyParameter_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters::*)(::Org::BouncyCastle::Crypto::Parameters::KeyParameter*, ::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xf3b878;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters.get_Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Parameters::KeyParameter* (::Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters::*)()>(&::Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters::get_Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf3b8f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters*>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters.get_Tweak
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters::*)()>(&::Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters::get_Tweak)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf3b900;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters*>::get(),
                            "get_Tweak",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::ICipherParameters"
constexpr  Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters::operator ::Org::BouncyCastle::Crypto::ICipherParameters*() noexcept {
return static_cast<::Org::BouncyCastle::Crypto::ICipherParameters*>(static_cast<void*>(this));
}
constexpr void Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters::__set_tweak(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x10>(this, std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters::__get_tweak()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x10>(this);
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters::__get_tweak() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x10>(this);
}
constexpr void Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters::__set_key(::Org::BouncyCastle::Crypto::Parameters::KeyParameter*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*, 0x18>(this, std::forward<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters::__get_key()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*> Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters::__get_key() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*, 0x18>(this);
}
inline ::Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters* Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters::New_ctor(::Org::BouncyCastle::Crypto::Parameters::KeyParameter*  key, ::ArrayW<uint8_t,::Array<uint8_t>*>  tweak)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters*>(key, tweak));
}
inline void Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters::_ctor(::Org::BouncyCastle::Crypto::Parameters::KeyParameter*  key, ::ArrayW<uint8_t,::Array<uint8_t>*>  tweak)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, tweak);
}
inline ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters*>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*, false>(*this, ___internal_method);
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters::get_Tweak()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters*>::get(),
                            "get_Tweak",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
