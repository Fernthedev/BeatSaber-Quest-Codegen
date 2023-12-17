#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpPrivateKey_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__PublicKeyPacket_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey::*)(int64_t, ::Org::BouncyCastle::Bcpg::PublicKeyPacket*, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x10addf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::PublicKeyPacket*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey.get_KeyId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey::*)()>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey::get_KeyId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10b2e20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*>::get(),
                            "get_KeyId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey.get_PublicKeyPacket
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Bcpg::PublicKeyPacket* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey::*)()>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey::get_PublicKeyPacket)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10b2e28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*>::get(),
                            "get_PublicKeyPacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey.get_Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey::*)()>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey::get_Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10b2e30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey::__set_keyID(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x10>(this, std::forward<int64_t>(value));
}
constexpr int64_t& Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey::__get_keyID()  {
return ::cordl_internals::getInstanceField<int64_t, 0x10>(this);
}
constexpr int64_t const& Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey::__get_keyID() const {
return ::cordl_internals::getInstanceField<int64_t, 0x10>(this);
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey::__set_publicKeyPacket(::Org::BouncyCastle::Bcpg::PublicKeyPacket*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Bcpg::PublicKeyPacket*, 0x18>(this, std::forward<::Org::BouncyCastle::Bcpg::PublicKeyPacket*>(value));
}
constexpr ::Org::BouncyCastle::Bcpg::PublicKeyPacket* Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey::__get_publicKeyPacket()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Bcpg::PublicKeyPacket*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::PublicKeyPacket*> Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey::__get_publicKeyPacket() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Bcpg::PublicKeyPacket*, 0x18>(this);
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey::__set_privateKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, 0x20>(this, std::forward<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(value));
}
constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey::__get_privateKey()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*> Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey::__get_privateKey() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, 0x20>(this);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey::New_ctor(int64_t  keyID, ::Org::BouncyCastle::Bcpg::PublicKeyPacket*  publicKeyPacket, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  privateKey)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*>(keyID, publicKeyPacket, privateKey));
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey::_ctor(int64_t  keyID, ::Org::BouncyCastle::Bcpg::PublicKeyPacket*  publicKeyPacket, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  privateKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::PublicKeyPacket*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, keyID, publicKeyPacket, privateKey);
}
inline int64_t Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey::get_KeyId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*>::get(),
                            "get_KeyId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::PublicKeyPacket* Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey::get_PublicKeyPacket()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*>::get(),
                            "get_PublicKeyPacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::PublicKeyPacket*, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
