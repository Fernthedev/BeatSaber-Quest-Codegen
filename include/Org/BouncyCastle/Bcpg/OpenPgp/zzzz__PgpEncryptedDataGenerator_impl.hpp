#pragma once
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpEncryptedDataGenerator_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__ContainedPacket_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpEncryptedDataGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/IO/zzzz__DigestStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpEncryptedDataGenerator_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__HashAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SymmetricKeyAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__IStreamGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/IO/zzzz__CipherStream_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpPublicKey_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__KeyParameter_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgOutputStream_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBufferedCipher_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__S2k_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__EncMethod.AddSessionInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__EncMethod::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, ::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__EncMethod::AddSessionInfo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__EncMethod*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__EncMethod*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__EncMethod._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__EncMethod::*)()>(&::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__EncMethod::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10ab610;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__EncMethod*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__EncMethod::__set_sessionInfo(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x10>(this, std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__EncMethod::__get_sessionInfo()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x10>(this);
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__EncMethod::__get_sessionInfo() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x10>(this);
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__EncMethod::__set_encAlgorithm(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, 0x18>(this, std::forward<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(value));
}
constexpr ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag& Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__EncMethod::__get_encAlgorithm()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, 0x18>(this);
}
constexpr ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const& Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__EncMethod::__get_encAlgorithm() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, 0x18>(this);
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__EncMethod::__set_key(::Org::BouncyCastle::Crypto::Parameters::KeyParameter*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*, 0x20>(this, std::forward<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__EncMethod::__get_key()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*> Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__EncMethod::__get_key() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*, 0x20>(this);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__EncMethod::AddSessionInfo(::ArrayW<uint8_t,::Array<uint8_t>*>  si, ::Org::BouncyCastle::Security::SecureRandom*  random)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__EncMethod*>::get(),
                            "AddSessionInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, si, random);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__EncMethod* Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__EncMethod::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__EncMethod*>());
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__EncMethod::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__EncMethod*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PbeMethod._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PbeMethod::*)(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::Org::BouncyCastle::Bcpg::S2k*, ::Org::BouncyCastle::Crypto::Parameters::KeyParameter*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PbeMethod::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x10aa09c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PbeMethod*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::S2k*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PbeMethod.GetKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Parameters::KeyParameter* (::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PbeMethod::*)()>(&::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PbeMethod::GetKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10ab618;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PbeMethod*>::get(),
                            "GetKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PbeMethod.AddSessionInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PbeMethod::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, ::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PbeMethod::AddSessionInfo)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x10ab620;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PbeMethod*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PbeMethod*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PbeMethod.Encode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PbeMethod::*)(::Org::BouncyCastle::Bcpg::BcpgOutputStream*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PbeMethod::Encode)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x10ab8c0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PbeMethod*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PbeMethod*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PbeMethod::__set_s2k(::Org::BouncyCastle::Bcpg::S2k*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Bcpg::S2k*, 0x28>(this, std::forward<::Org::BouncyCastle::Bcpg::S2k*>(value));
}
constexpr ::Org::BouncyCastle::Bcpg::S2k* Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PbeMethod::__get_s2k()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Bcpg::S2k*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::S2k*> Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PbeMethod::__get_s2k() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Bcpg::S2k*, 0x28>(this);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PbeMethod* Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PbeMethod::New_ctor(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag  encAlgorithm, ::Org::BouncyCastle::Bcpg::S2k*  s2k, ::Org::BouncyCastle::Crypto::Parameters::KeyParameter*  key)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PbeMethod*>(encAlgorithm, s2k, key));
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PbeMethod::_ctor(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag  encAlgorithm, ::Org::BouncyCastle::Bcpg::S2k*  s2k, ::Org::BouncyCastle::Crypto::Parameters::KeyParameter*  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PbeMethod*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::S2k*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, encAlgorithm, s2k, key);
}
inline ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PbeMethod::GetKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PbeMethod*>::get(),
                            "GetKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*, false>(*this, ___internal_method);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PbeMethod::AddSessionInfo(::ArrayW<uint8_t,::Array<uint8_t>*>  si, ::Org::BouncyCastle::Security::SecureRandom*  random)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PbeMethod*>::get(),
                            "AddSessionInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, si, random);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PbeMethod::Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream*  pOut)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PbeMethod*>::get(),
                            "Encode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, pOut);
}
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PubMethod._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PubMethod::*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*, bool)>(&::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PubMethod::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x10aa280;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PubMethod*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PubMethod.AddSessionInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PubMethod::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, ::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PubMethod::AddSessionInfo)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x10ab958;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PubMethod*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PubMethod*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PubMethod.EncryptSessionInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PubMethod::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, ::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PubMethod::EncryptSessionInfo)> {
  constexpr static std::size_t size = 0x94c;
  constexpr static std::size_t addrs = 0x10ab97c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PubMethod*>::get(),
                            "EncryptSessionInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PubMethod.ProcessSessionInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::ArrayW<uint8_t,::Array<uint8_t>*>,::Array<::ArrayW<uint8_t,::Array<uint8_t>*>>*> (::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PubMethod::*)(::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PubMethod::ProcessSessionInfo)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x10ac2c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PubMethod*>::get(),
                            "ProcessSessionInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PubMethod.ConvertToEncodedMpi
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PubMethod::*)(::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PubMethod::ConvertToEncodedMpi)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x10acc10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PubMethod*>::get(),
                            "ConvertToEncodedMpi",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PubMethod.Encode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PubMethod::*)(::Org::BouncyCastle::Bcpg::BcpgOutputStream*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PubMethod::Encode)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x10acdb0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PubMethod*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PubMethod*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PubMethod::__set_pubKey(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*, 0x28>(this, std::forward<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(value));
}
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PubMethod::__get_pubKey()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*> Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PubMethod::__get_pubKey() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*, 0x28>(this);
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PubMethod::__set_sessionKeyObfuscation(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this, std::forward<bool>(value));
}
constexpr bool& Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PubMethod::__get_sessionKeyObfuscation()  {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
constexpr bool const& Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PubMethod::__get_sessionKeyObfuscation() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PubMethod::__set_data(::ArrayW<::ArrayW<uint8_t,::Array<uint8_t>*>,::Array<::ArrayW<uint8_t,::Array<uint8_t>*>>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::ArrayW<uint8_t,::Array<uint8_t>*>,::Array<::ArrayW<uint8_t,::Array<uint8_t>*>>*>, 0x38>(this, std::forward<::ArrayW<::ArrayW<uint8_t,::Array<uint8_t>*>,::Array<::ArrayW<uint8_t,::Array<uint8_t>*>>*>>(value));
}
constexpr ::ArrayW<::ArrayW<uint8_t,::Array<uint8_t>*>,::Array<::ArrayW<uint8_t,::Array<uint8_t>*>>*>& Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PubMethod::__get_data()  {
return ::cordl_internals::getInstanceField<::ArrayW<::ArrayW<uint8_t,::Array<uint8_t>*>,::Array<::ArrayW<uint8_t,::Array<uint8_t>*>>*>, 0x38>(this);
}
constexpr ::ArrayW<::ArrayW<uint8_t,::Array<uint8_t>*>,::Array<::ArrayW<uint8_t,::Array<uint8_t>*>>*> const& Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PubMethod::__get_data() const {
return ::cordl_internals::getInstanceField<::ArrayW<::ArrayW<uint8_t,::Array<uint8_t>*>,::Array<::ArrayW<uint8_t,::Array<uint8_t>*>>*>, 0x38>(this);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PubMethod* Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PubMethod::New_ctor(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*  pubKey, bool  sessionKeyObfuscation)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PubMethod*>(pubKey, sessionKeyObfuscation));
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PubMethod::_ctor(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*  pubKey, bool  sessionKeyObfuscation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PubMethod*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, pubKey, sessionKeyObfuscation);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PubMethod::AddSessionInfo(::ArrayW<uint8_t,::Array<uint8_t>*>  sessionInfo, ::Org::BouncyCastle::Security::SecureRandom*  random)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PubMethod*>::get(),
                            "AddSessionInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, sessionInfo, random);
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PubMethod::EncryptSessionInfo(::ArrayW<uint8_t,::Array<uint8_t>*>  sessionInfo, ::Org::BouncyCastle::Security::SecureRandom*  random)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PubMethod*>::get(),
                            "EncryptSessionInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(*this, ___internal_method, sessionInfo, random);
}
inline ::ArrayW<::ArrayW<uint8_t,::Array<uint8_t>*>,::Array<::ArrayW<uint8_t,::Array<uint8_t>*>>*> Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PubMethod::ProcessSessionInfo(::ArrayW<uint8_t,::Array<uint8_t>*>  encryptedSessionInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PubMethod*>::get(),
                            "ProcessSessionInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::ArrayW<uint8_t,::Array<uint8_t>*>,::Array<::ArrayW<uint8_t,::Array<uint8_t>*>>*>, false>(*this, ___internal_method, encryptedSessionInfo);
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PubMethod::ConvertToEncodedMpi(::ArrayW<uint8_t,::Array<uint8_t>*>  encryptedSessionInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PubMethod*>::get(),
                            "ConvertToEncodedMpi",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(*this, ___internal_method, encryptedSessionInfo);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PubMethod::Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream*  pOut)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PubMethod*>::get(),
                            "Encode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, pOut);
}
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::*)(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x10a9bb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::*)(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, bool)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x10a9c5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::*)(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x10a9d10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::*)(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, bool, ::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x10a9d90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::*)(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::Org::BouncyCastle::Security::SecureRandom*, bool)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x10a9e20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator.AddMethod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::*)(::ArrayW<char16_t,::Array<char16_t>*>)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::AddMethod)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x10a9eb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>::get(),
                            "AddMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t,::Array<char16_t>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator.AddMethod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::*)(::ArrayW<char16_t,::Array<char16_t>*>, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::AddMethod)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x10a9ee0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>::get(),
                            "AddMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t,::Array<char16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator.AddMethodUtf8
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::*)(::ArrayW<char16_t,::Array<char16_t>*>, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::AddMethodUtf8)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x10aa050;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>::get(),
                            "AddMethodUtf8",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t,::Array<char16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator.AddMethodRaw
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::AddMethodRaw)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x10aa090;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>::get(),
                            "AddMethodRaw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator.DoAddMethod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, bool, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::DoAddMethod)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x10a9f1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>::get(),
                            "DoAddMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator.AddMethod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::AddMethod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10aa0d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>::get(),
                            "AddMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator.AddMethod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*, bool)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::AddMethod)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x10aa0e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>::get(),
                            "AddMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator.AddCheckSum
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::*)(::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::AddCheckSum)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x10aa2b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>::get(),
                            "AddCheckSum",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator.CreateSessionInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::*)(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::Org::BouncyCastle::Crypto::Parameters::KeyParameter*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::CreateSessionInfo)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x10aa340;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>::get(),
                            "CreateSessionInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator.Open
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::*)(::System::IO::Stream*, int64_t, ::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::Open)> {
  constexpr static std::size_t size = 0xf50;
  constexpr static std::size_t addrs = 0x10aa3e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>::get(),
                            "Open",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator.Open
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::*)(::System::IO::Stream*, int64_t)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::Open)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10ab338;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>::get(),
                            "Open",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator.Open
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::*)(::System::IO::Stream*, ::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::Open)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x10ab340;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>::get(),
                            "Open",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator.Close
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::*)()>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::Close)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x10ab34c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator"
constexpr  Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::operator ::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator*() noexcept {
return static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator*>(static_cast<void*>(this));
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::__set_pOut(::Org::BouncyCastle::Bcpg::BcpgOutputStream*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Bcpg::BcpgOutputStream*, 0x10>(this, std::forward<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>(value));
}
constexpr ::Org::BouncyCastle::Bcpg::BcpgOutputStream* Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::__get_pOut()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Bcpg::BcpgOutputStream*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::BcpgOutputStream*> Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::__get_pOut() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Bcpg::BcpgOutputStream*, 0x10>(this);
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::__set_cOut(::Org::BouncyCastle::Crypto::IO::CipherStream*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::IO::CipherStream*, 0x18>(this, std::forward<::Org::BouncyCastle::Crypto::IO::CipherStream*>(value));
}
constexpr ::Org::BouncyCastle::Crypto::IO::CipherStream* Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::__get_cOut()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::IO::CipherStream*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IO::CipherStream*> Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::__get_cOut() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::IO::CipherStream*, 0x18>(this);
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::__set_c(::Org::BouncyCastle::Crypto::IBufferedCipher*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::IBufferedCipher*, 0x20>(this, std::forward<::Org::BouncyCastle::Crypto::IBufferedCipher*>(value));
}
constexpr ::Org::BouncyCastle::Crypto::IBufferedCipher* Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::__get_c()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::IBufferedCipher*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IBufferedCipher*> Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::__get_c() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::IBufferedCipher*, 0x20>(this);
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::__set_withIntegrityPacket(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this, std::forward<bool>(value));
}
constexpr bool& Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::__get_withIntegrityPacket()  {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
constexpr bool const& Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::__get_withIntegrityPacket() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::__set_oldFormat(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x29>(this, std::forward<bool>(value));
}
constexpr bool& Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::__get_oldFormat()  {
return ::cordl_internals::getInstanceField<bool, 0x29>(this);
}
constexpr bool const& Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::__get_oldFormat() const {
return ::cordl_internals::getInstanceField<bool, 0x29>(this);
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::__set_digestOut(::Org::BouncyCastle::Crypto::IO::DigestStream*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::IO::DigestStream*, 0x30>(this, std::forward<::Org::BouncyCastle::Crypto::IO::DigestStream*>(value));
}
constexpr ::Org::BouncyCastle::Crypto::IO::DigestStream* Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::__get_digestOut()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::IO::DigestStream*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IO::DigestStream*> Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::__get_digestOut() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::IO::DigestStream*, 0x30>(this);
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::__set_methods(::System::Collections::IList*  value)  {
::cordl_internals::setInstanceField<::System::Collections::IList*, 0x38>(this, std::forward<::System::Collections::IList*>(value));
}
constexpr ::System::Collections::IList* Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::__get_methods()  {
return ::cordl_internals::getInstanceField<::System::Collections::IList*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::__get_methods() const {
return ::cordl_internals::getInstanceField<::System::Collections::IList*, 0x38>(this);
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::__set_defAlgorithm(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, 0x40>(this, std::forward<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(value));
}
constexpr ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag& Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::__get_defAlgorithm()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, 0x40>(this);
}
constexpr ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const& Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::__get_defAlgorithm() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, 0x40>(this);
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::__set_rand(::Org::BouncyCastle::Security::SecureRandom*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Security::SecureRandom*, 0x48>(this, std::forward<::Org::BouncyCastle::Security::SecureRandom*>(value));
}
constexpr ::Org::BouncyCastle::Security::SecureRandom* Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::__get_rand()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Security::SecureRandom*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Security::SecureRandom*> Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::__get_rand() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Security::SecureRandom*, 0x48>(this);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator* Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::New_ctor(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag  encAlgorithm)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>(encAlgorithm));
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::_ctor(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag  encAlgorithm)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, encAlgorithm);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator* Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::New_ctor(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag  encAlgorithm, bool  withIntegrityPacket)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>(encAlgorithm, withIntegrityPacket));
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::_ctor(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag  encAlgorithm, bool  withIntegrityPacket)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, encAlgorithm, withIntegrityPacket);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator* Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::New_ctor(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag  encAlgorithm, ::Org::BouncyCastle::Security::SecureRandom*  rand)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>(encAlgorithm, rand));
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::_ctor(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag  encAlgorithm, ::Org::BouncyCastle::Security::SecureRandom*  rand)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, encAlgorithm, rand);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator* Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::New_ctor(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag  encAlgorithm, bool  withIntegrityPacket, ::Org::BouncyCastle::Security::SecureRandom*  rand)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>(encAlgorithm, withIntegrityPacket, rand));
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::_ctor(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag  encAlgorithm, bool  withIntegrityPacket, ::Org::BouncyCastle::Security::SecureRandom*  rand)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, encAlgorithm, withIntegrityPacket, rand);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator* Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::New_ctor(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag  encAlgorithm, ::Org::BouncyCastle::Security::SecureRandom*  rand, bool  oldFormat)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>(encAlgorithm, rand, oldFormat));
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::_ctor(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag  encAlgorithm, ::Org::BouncyCastle::Security::SecureRandom*  rand, bool  oldFormat)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, encAlgorithm, rand, oldFormat);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::AddMethod(::ArrayW<char16_t,::Array<char16_t>*>  passPhrase)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>::get(),
                            "AddMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t,::Array<char16_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, passPhrase);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::AddMethod(::ArrayW<char16_t,::Array<char16_t>*>  passPhrase, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag  s2kDigest)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>::get(),
                            "AddMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t,::Array<char16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, passPhrase, s2kDigest);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::AddMethodUtf8(::ArrayW<char16_t,::Array<char16_t>*>  passPhrase, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag  s2kDigest)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>::get(),
                            "AddMethodUtf8",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t,::Array<char16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, passPhrase, s2kDigest);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::AddMethodRaw(::ArrayW<uint8_t,::Array<uint8_t>*>  rawPassPhrase, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag  s2kDigest)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>::get(),
                            "AddMethodRaw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, rawPassPhrase, s2kDigest);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::DoAddMethod(::ArrayW<uint8_t,::Array<uint8_t>*>  rawPassPhrase, bool  clearPassPhrase, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag  s2kDigest)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>::get(),
                            "DoAddMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, rawPassPhrase, clearPassPhrase, s2kDigest);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::AddMethod(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>::get(),
                            "AddMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::AddMethod(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*  key, bool  sessionKeyObfuscation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>::get(),
                            "AddMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, sessionKeyObfuscation);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::AddCheckSum(::ArrayW<uint8_t,::Array<uint8_t>*>  sessionInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>::get(),
                            "AddCheckSum",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, sessionInfo);
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::CreateSessionInfo(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag  algorithm, ::Org::BouncyCastle::Crypto::Parameters::KeyParameter*  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>::get(),
                            "CreateSessionInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(*this, ___internal_method, algorithm, key);
}
inline ::System::IO::Stream* Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::Open(::System::IO::Stream*  outStr, int64_t  length, ::ArrayW<uint8_t,::Array<uint8_t>*>  buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>::get(),
                            "Open",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(*this, ___internal_method, outStr, length, buffer);
}
inline ::System::IO::Stream* Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::Open(::System::IO::Stream*  outStr, int64_t  length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>::get(),
                            "Open",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(*this, ___internal_method, outStr, length);
}
inline ::System::IO::Stream* Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::Open(::System::IO::Stream*  outStr, ::ArrayW<uint8_t,::Array<uint8_t>*>  buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>::get(),
                            "Open",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(*this, ___internal_method, outStr, buffer);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::Close()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
