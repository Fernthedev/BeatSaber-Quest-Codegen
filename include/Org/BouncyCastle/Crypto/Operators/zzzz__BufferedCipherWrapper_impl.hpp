#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Operators/zzzz__BufferedCipherWrapper_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBufferedCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipher_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "Org/BouncyCastle/Crypto/IO/zzzz__CipherStream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper::*)(::Org::BouncyCastle::Crypto::IBufferedCipher*, ::System::IO::Stream*)>(&::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xf285e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IBufferedCipher*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper.GetMaxOutputSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper::*)(int32_t)>(&::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper::GetMaxOutputSize)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xf28674;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper*>::get(),
                            "GetMaxOutputSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper.GetUpdateOutputSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper::*)(int32_t)>(&::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper::GetUpdateOutputSize)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xf28720;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper*>::get(),
                            "GetUpdateOutputSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper.get_Stream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper::*)()>(&::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper::get_Stream)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf287cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper*>::get(),
                            "get_Stream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::ICipher"
constexpr  Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper::operator ::Org::BouncyCastle::Crypto::ICipher*() noexcept {
return static_cast<::Org::BouncyCastle::Crypto::ICipher*>(static_cast<void*>(this));
}
constexpr void Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper::__set_bufferedCipher(::Org::BouncyCastle::Crypto::IBufferedCipher*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::IBufferedCipher*, 0x10>(this, std::forward<::Org::BouncyCastle::Crypto::IBufferedCipher*>(value));
}
constexpr ::Org::BouncyCastle::Crypto::IBufferedCipher* Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper::__get_bufferedCipher()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::IBufferedCipher*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IBufferedCipher*> Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper::__get_bufferedCipher() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::IBufferedCipher*, 0x10>(this);
}
constexpr void Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper::__set_stream(::Org::BouncyCastle::Crypto::IO::CipherStream*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::IO::CipherStream*, 0x18>(this, std::forward<::Org::BouncyCastle::Crypto::IO::CipherStream*>(value));
}
constexpr ::Org::BouncyCastle::Crypto::IO::CipherStream* Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper::__get_stream()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::IO::CipherStream*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IO::CipherStream*> Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper::__get_stream() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::IO::CipherStream*, 0x18>(this);
}
inline ::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper* Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper::New_ctor(::Org::BouncyCastle::Crypto::IBufferedCipher*  bufferedCipher, ::System::IO::Stream*  source)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper*>(bufferedCipher, source));
}
inline void Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper::_ctor(::Org::BouncyCastle::Crypto::IBufferedCipher*  bufferedCipher, ::System::IO::Stream*  source)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IBufferedCipher*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, bufferedCipher, source);
}
inline int32_t Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper::GetMaxOutputSize(int32_t  inputLen)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper*>::get(),
                            "GetMaxOutputSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, inputLen);
}
inline int32_t Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper::GetUpdateOutputSize(int32_t  inputLen)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper*>::get(),
                            "GetUpdateOutputSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, inputLen);
}
inline ::System::IO::Stream* Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper::get_Stream()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper*>::get(),
                            "get_Stream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
