#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpV3SignatureGenerator_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpSignature_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__PublicKeyAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__HashAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpPrivateKey_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISigner_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpOnePassSignature_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::*)(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x10ce600;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator.InitSign
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::*)(int32_t, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::InitSign)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10ce6d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator*>::get(),
                            "InitSign",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator.InitSign
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::*)(int32_t, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*, ::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::InitSign)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x10ce6e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator*>::get(),
                            "InitSign",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::*)(uint8_t)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::Update)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x10ce948;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator.doCanonicalUpdateByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::*)(uint8_t)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::doCanonicalUpdateByte)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x10ce95c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator*>::get(),
                            "doCanonicalUpdateByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator.doUpdateCRLF
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::*)()>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::doUpdateCRLF)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x10ceae8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator*>::get(),
                            "doUpdateCRLF",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator.doUpdateByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::*)(uint8_t)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::doUpdateByte)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x10ce9c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator*>::get(),
                            "doUpdateByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::*)(::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::Update)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x10ceb08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::Update)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x10cecac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator.GenerateOnePassVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::*)(bool)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::GenerateOnePassVersion)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x10cee44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator*>::get(),
                            "GenerateOnePassVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator.Generate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::*)()>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::Generate)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x10cef10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator*>::get(),
                            "Generate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::__set_keyAlgorithm(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag, 0x10>(this, std::forward<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag>(value));
}
constexpr ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag& Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::__get_keyAlgorithm()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag, 0x10>(this);
}
constexpr ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag const& Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::__get_keyAlgorithm() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag, 0x10>(this);
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::__set_hashAlgorithm(::Org::BouncyCastle::Bcpg::HashAlgorithmTag  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Bcpg::HashAlgorithmTag, 0x14>(this, std::forward<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>(value));
}
constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag& Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::__get_hashAlgorithm()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Bcpg::HashAlgorithmTag, 0x14>(this);
}
constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag const& Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::__get_hashAlgorithm() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Bcpg::HashAlgorithmTag, 0x14>(this);
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::__set_privKey(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*, 0x18>(this, std::forward<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*>(value));
}
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::__get_privKey()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*> Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::__get_privKey() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*, 0x18>(this);
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::__set_sig(::Org::BouncyCastle::Crypto::ISigner*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::ISigner*, 0x20>(this, std::forward<::Org::BouncyCastle::Crypto::ISigner*>(value));
}
constexpr ::Org::BouncyCastle::Crypto::ISigner* Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::__get_sig()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::ISigner*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::ISigner*> Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::__get_sig() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::ISigner*, 0x20>(this);
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::__set_dig(::Org::BouncyCastle::Crypto::IDigest*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::IDigest*, 0x28>(this, std::forward<::Org::BouncyCastle::Crypto::IDigest*>(value));
}
constexpr ::Org::BouncyCastle::Crypto::IDigest* Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::__get_dig()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::IDigest*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IDigest*> Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::__get_dig() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::IDigest*, 0x28>(this);
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::__set_signatureType(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this, std::forward<int32_t>(value));
}
constexpr int32_t& Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::__get_signatureType()  {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
constexpr int32_t const& Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::__get_signatureType() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::__set_lastb(uint8_t  value)  {
::cordl_internals::setInstanceField<uint8_t, 0x34>(this, std::forward<uint8_t>(value));
}
constexpr uint8_t& Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::__get_lastb()  {
return ::cordl_internals::getInstanceField<uint8_t, 0x34>(this);
}
constexpr uint8_t const& Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::__get_lastb() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x34>(this);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator* Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::New_ctor(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag  keyAlgorithm, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag  hashAlgorithm)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator*>(keyAlgorithm, hashAlgorithm));
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::_ctor(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag  keyAlgorithm, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag  hashAlgorithm)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, keyAlgorithm, hashAlgorithm);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::InitSign(int32_t  sigType, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator*>::get(),
                            "InitSign",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, sigType, key);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::InitSign(int32_t  sigType, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*  key, ::Org::BouncyCastle::Security::SecureRandom*  random)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator*>::get(),
                            "InitSign",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, sigType, key, random);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::Update(uint8_t  b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, b);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::doCanonicalUpdateByte(uint8_t  b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator*>::get(),
                            "doCanonicalUpdateByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, b);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::doUpdateCRLF()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator*>::get(),
                            "doUpdateCRLF",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::doUpdateByte(uint8_t  b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator*>::get(),
                            "doUpdateByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, b);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::Update(::ArrayW<uint8_t,::Array<uint8_t>*>  b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, b);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::Update(::ArrayW<uint8_t,::Array<uint8_t>*>  b, int32_t  off, int32_t  len)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, b, off, len);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature* Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::GenerateOnePassVersion(bool  isNested)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator*>::get(),
                            "GenerateOnePassVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature*, false>(*this, ___internal_method, isNested);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature* Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::Generate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator*>::get(),
                            "Generate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
