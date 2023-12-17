#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Operators/zzzz__DefaultSignatureResult_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBlockResult_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISigner_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult::*)(::Org::BouncyCastle::Crypto::ISigner*)>(&::Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xf2dd90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ISigner*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult.Collect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult::*)()>(&::Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult::Collect)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xf2ddb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult*>::get(),
                            "Collect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult.Collect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t)>(&::Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult::Collect)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xf2de5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult*>::get(),
                            "Collect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockResult"
constexpr  Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult::operator ::Org::BouncyCastle::Crypto::IBlockResult*() noexcept {
return static_cast<::Org::BouncyCastle::Crypto::IBlockResult*>(static_cast<void*>(this));
}
constexpr void Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult::__set_mSigner(::Org::BouncyCastle::Crypto::ISigner*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::ISigner*, 0x10>(this, std::forward<::Org::BouncyCastle::Crypto::ISigner*>(value));
}
constexpr ::Org::BouncyCastle::Crypto::ISigner* Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult::__get_mSigner()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::ISigner*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::ISigner*> Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult::__get_mSigner() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::ISigner*, 0x10>(this);
}
inline ::Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult* Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult::New_ctor(::Org::BouncyCastle::Crypto::ISigner*  signer)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult*>(signer));
}
inline void Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult::_ctor(::Org::BouncyCastle::Crypto::ISigner*  signer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ISigner*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, signer);
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult::Collect()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult*>::get(),
                            "Collect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(*this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult::Collect(::ArrayW<uint8_t,::Array<uint8_t>*>  sig, int32_t  sigOff)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult*>::get(),
                            "Collect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, sig, sigOff);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
