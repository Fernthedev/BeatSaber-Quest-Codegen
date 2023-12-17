#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsStreamCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsContext_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsMac_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IStreamCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCipher_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::*)(::Org::BouncyCastle::Crypto::Tls::TlsContext*, ::Org::BouncyCastle::Crypto::IStreamCipher*, ::Org::BouncyCastle::Crypto::IStreamCipher*, ::Org::BouncyCastle::Crypto::IDigest*, ::Org::BouncyCastle::Crypto::IDigest*, int32_t, bool)>(&::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::_ctor)> {
  constexpr static std::size_t size = 0x6a0;
  constexpr static std::size_t addrs = 0xfb97ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsContext*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IStreamCipher*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IStreamCipher*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher.GetPlaintextLimit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::*)(int32_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::GetPlaintextLimit)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xfb9e4c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher.EncodePlaintext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::*)(int64_t, uint8_t, ::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::EncodePlaintext)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xfb9e78;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher.DecodeCiphertext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::*)(int64_t, uint8_t, ::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::DecodeCiphertext)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0xfba070;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher.CheckMac
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::*)(int64_t, uint8_t, ::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t, ::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::CheckMac)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xfba278;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher.UpdateIV
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::*)(::Org::BouncyCastle::Crypto::IStreamCipher*, bool, int64_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::UpdateIV)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xfba39c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsCipher"
constexpr  Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::operator ::Org::BouncyCastle::Crypto::Tls::TlsCipher*() noexcept {
return static_cast<::Org::BouncyCastle::Crypto::Tls::TlsCipher*>(static_cast<void*>(this));
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::__set_context(::Org::BouncyCastle::Crypto::Tls::TlsContext*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsContext*, 0x10>(this, std::forward<::Org::BouncyCastle::Crypto::Tls::TlsContext*>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsContext* Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::__get_context()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsContext*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsContext*> Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::__get_context() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsContext*, 0x10>(this);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::__set_encryptCipher(::Org::BouncyCastle::Crypto::IStreamCipher*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::IStreamCipher*, 0x18>(this, std::forward<::Org::BouncyCastle::Crypto::IStreamCipher*>(value));
}
constexpr ::Org::BouncyCastle::Crypto::IStreamCipher* Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::__get_encryptCipher()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::IStreamCipher*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IStreamCipher*> Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::__get_encryptCipher() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::IStreamCipher*, 0x18>(this);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::__set_decryptCipher(::Org::BouncyCastle::Crypto::IStreamCipher*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::IStreamCipher*, 0x20>(this, std::forward<::Org::BouncyCastle::Crypto::IStreamCipher*>(value));
}
constexpr ::Org::BouncyCastle::Crypto::IStreamCipher* Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::__get_decryptCipher()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::IStreamCipher*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IStreamCipher*> Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::__get_decryptCipher() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::IStreamCipher*, 0x20>(this);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::__set_writeMac(::Org::BouncyCastle::Crypto::Tls::TlsMac*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsMac*, 0x28>(this, std::forward<::Org::BouncyCastle::Crypto::Tls::TlsMac*>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsMac* Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::__get_writeMac()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsMac*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsMac*> Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::__get_writeMac() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsMac*, 0x28>(this);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::__set_readMac(::Org::BouncyCastle::Crypto::Tls::TlsMac*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsMac*, 0x30>(this, std::forward<::Org::BouncyCastle::Crypto::Tls::TlsMac*>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsMac* Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::__get_readMac()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsMac*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsMac*> Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::__get_readMac() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsMac*, 0x30>(this);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::__set_usesNonce(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this, std::forward<bool>(value));
}
constexpr bool& Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::__get_usesNonce()  {
return ::cordl_internals::getInstanceField<bool, 0x38>(this);
}
constexpr bool const& Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::__get_usesNonce() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher* Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext*  context, ::Org::BouncyCastle::Crypto::IStreamCipher*  clientWriteCipher, ::Org::BouncyCastle::Crypto::IStreamCipher*  serverWriteCipher, ::Org::BouncyCastle::Crypto::IDigest*  clientWriteDigest, ::Org::BouncyCastle::Crypto::IDigest*  serverWriteDigest, int32_t  cipherKeySize, bool  usesNonce)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher*>(context, clientWriteCipher, serverWriteCipher, clientWriteDigest, serverWriteDigest, cipherKeySize, usesNonce));
}
inline void Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::_ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext*  context, ::Org::BouncyCastle::Crypto::IStreamCipher*  clientWriteCipher, ::Org::BouncyCastle::Crypto::IStreamCipher*  serverWriteCipher, ::Org::BouncyCastle::Crypto::IDigest*  clientWriteDigest, ::Org::BouncyCastle::Crypto::IDigest*  serverWriteDigest, int32_t  cipherKeySize, bool  usesNonce)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsContext*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IStreamCipher*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IStreamCipher*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, context, clientWriteCipher, serverWriteCipher, clientWriteDigest, serverWriteDigest, cipherKeySize, usesNonce);
}
inline int32_t Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::GetPlaintextLimit(int32_t  ciphertextLimit)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher*>::get(),
                            "GetPlaintextLimit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, ciphertextLimit);
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::EncodePlaintext(int64_t  seqNo, uint8_t  type, ::ArrayW<uint8_t,::Array<uint8_t>*>  plaintext, int32_t  offset, int32_t  len)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher*>::get(),
                            "EncodePlaintext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(*this, ___internal_method, seqNo, type, plaintext, offset, len);
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::DecodeCiphertext(int64_t  seqNo, uint8_t  type, ::ArrayW<uint8_t,::Array<uint8_t>*>  ciphertext, int32_t  offset, int32_t  len)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher*>::get(),
                            "DecodeCiphertext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(*this, ___internal_method, seqNo, type, ciphertext, offset, len);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::CheckMac(int64_t  seqNo, uint8_t  type, ::ArrayW<uint8_t,::Array<uint8_t>*>  recBuf, int32_t  recStart, int32_t  recEnd, ::ArrayW<uint8_t,::Array<uint8_t>*>  calcBuf, int32_t  calcOff, int32_t  calcLen)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher*>::get(),
                            "CheckMac",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, seqNo, type, recBuf, recStart, recEnd, calcBuf, calcOff, calcLen);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::UpdateIV(::Org::BouncyCastle::Crypto::IStreamCipher*  cipher, bool  forEncryption, int64_t  seqNo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher*>::get(),
                            "UpdateIV",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IStreamCipher*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, cipher, forEncryption, seqNo);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
