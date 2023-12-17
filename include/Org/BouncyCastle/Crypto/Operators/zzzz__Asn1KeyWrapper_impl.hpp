#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Operators/zzzz__Asn1KeyWrapper_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBlockResult_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IKeyWrapper_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper::*)(::StringW, ::Org::BouncyCastle::X509::X509Certificate*)>(&::Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xf287d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper.get_AlgorithmDetails
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper::*)()>(&::Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper::get_AlgorithmDetails)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xf28ab0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper*>::get(),
                            "get_AlgorithmDetails",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper.Wrap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::IBlockResult* (::Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper::*)(::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper::Wrap)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xf28b50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper*>::get(),
                            "Wrap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IKeyWrapper"
constexpr  Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper::operator ::Org::BouncyCastle::Crypto::IKeyWrapper*() noexcept {
return static_cast<::Org::BouncyCastle::Crypto::IKeyWrapper*>(static_cast<void*>(this));
}
constexpr void Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper::__set_algorithm(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper::__get_algorithm()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper::__get_algorithm() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper::__set_wrapper(::Org::BouncyCastle::Crypto::IKeyWrapper*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::IKeyWrapper*, 0x18>(this, std::forward<::Org::BouncyCastle::Crypto::IKeyWrapper*>(value));
}
constexpr ::Org::BouncyCastle::Crypto::IKeyWrapper* Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper::__get_wrapper()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::IKeyWrapper*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IKeyWrapper*> Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper::__get_wrapper() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::IKeyWrapper*, 0x18>(this);
}
inline ::Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper* Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper::New_ctor(::StringW  algorithm, ::Org::BouncyCastle::X509::X509Certificate*  cert)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper*>(algorithm, cert));
}
inline void Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper::_ctor(::StringW  algorithm, ::Org::BouncyCastle::X509::X509Certificate*  cert)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, algorithm, cert);
}
inline ::System::Object* Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper::get_AlgorithmDetails()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper*>::get(),
                            "get_AlgorithmDetails",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::IBlockResult* Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper::Wrap(::ArrayW<uint8_t,::Array<uint8_t>*>  keyData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper*>::get(),
                            "Wrap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IBlockResult*, false>(*this, ___internal_method, keyData);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
