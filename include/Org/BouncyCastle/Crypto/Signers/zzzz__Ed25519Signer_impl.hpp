#pragma once
#include "System/IO/zzzz__MemoryStream_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Signers/zzzz__Ed25519Signer_def.hpp"
#include "Org/BouncyCastle/Crypto/Signers/zzzz__Ed25519Signer_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__Ed25519PrivateKeyParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISigner_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__Ed25519PublicKeyParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::__Ed25519Signer__Buffer.GenerateSignature
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Signers::__Ed25519Signer__Buffer::*)(::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters*)>(&::Org::BouncyCastle::Crypto::Signers::__Ed25519Signer__Buffer::GenerateSignature)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xf4af8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::__Ed25519Signer__Buffer*>::get(),
                            "GenerateSignature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::__Ed25519Signer__Buffer.VerifySignature
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Crypto::Signers::__Ed25519Signer__Buffer::*)(::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters*, ::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::Org::BouncyCastle::Crypto::Signers::__Ed25519Signer__Buffer::VerifySignature)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0xf4b18c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::__Ed25519Signer__Buffer*>::get(),
                            "VerifySignature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::__Ed25519Signer__Buffer.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::__Ed25519Signer__Buffer::*)()>(&::Org::BouncyCastle::Crypto::Signers::__Ed25519Signer__Buffer::Reset)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xf4b358;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::__Ed25519Signer__Buffer*>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::__Ed25519Signer__Buffer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::__Ed25519Signer__Buffer::*)()>(&::Org::BouncyCastle::Crypto::Signers::__Ed25519Signer__Buffer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf4ada8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::__Ed25519Signer__Buffer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Org::BouncyCastle::Crypto::Signers::__Ed25519Signer__Buffer::GenerateSignature(::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters*  privateKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::__Ed25519Signer__Buffer*>::get(),
                            "GenerateSignature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(*this, ___internal_method, privateKey);
}
inline bool Org::BouncyCastle::Crypto::Signers::__Ed25519Signer__Buffer::VerifySignature(::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters*  publicKey, ::ArrayW<uint8_t,::Array<uint8_t>*>  signature)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::__Ed25519Signer__Buffer*>::get(),
                            "VerifySignature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, publicKey, signature);
}
inline void Org::BouncyCastle::Crypto::Signers::__Ed25519Signer__Buffer::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::__Ed25519Signer__Buffer*>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Signers::__Ed25519Signer__Buffer* Org::BouncyCastle::Crypto::Signers::__Ed25519Signer__Buffer::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Signers::__Ed25519Signer__Buffer*>());
}
inline void Org::BouncyCastle::Crypto::Signers::__Ed25519Signer__Buffer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::__Ed25519Signer__Buffer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Ed25519Signer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::Ed25519Signer::*)()>(&::Org::BouncyCastle::Crypto::Signers::Ed25519Signer::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xf4ad40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519Signer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Ed25519Signer.get_AlgorithmName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Signers::Ed25519Signer::*)()>(&::Org::BouncyCastle::Crypto::Signers::Ed25519Signer::get_AlgorithmName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xf4adb0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519Signer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519Signer*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Ed25519Signer.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::Ed25519Signer::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(&::Org::BouncyCastle::Crypto::Signers::Ed25519Signer::Init)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xf4adf0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519Signer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519Signer*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Ed25519Signer.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::Ed25519Signer::*)(uint8_t)>(&::Org::BouncyCastle::Crypto::Signers::Ed25519Signer::Update)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xf4aed0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519Signer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519Signer*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Ed25519Signer.BlockUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::Ed25519Signer::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Signers::Ed25519Signer::BlockUpdate)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xf4aef4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519Signer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519Signer*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Ed25519Signer.GenerateSignature
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Signers::Ed25519Signer::*)()>(&::Org::BouncyCastle::Crypto::Signers::Ed25519Signer::GenerateSignature)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xf4af18;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519Signer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519Signer*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Ed25519Signer.VerifySignature
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Crypto::Signers::Ed25519Signer::*)(::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::Org::BouncyCastle::Crypto::Signers::Ed25519Signer::VerifySignature)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xf4b114;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519Signer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519Signer*>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Ed25519Signer.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::Ed25519Signer::*)()>(&::Org::BouncyCastle::Crypto::Signers::Ed25519Signer::Reset)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xf4b340;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519Signer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519Signer*>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::ISigner"
constexpr  Org::BouncyCastle::Crypto::Signers::Ed25519Signer::operator ::Org::BouncyCastle::Crypto::ISigner*() noexcept {
return static_cast<::Org::BouncyCastle::Crypto::ISigner*>(static_cast<void*>(this));
}
constexpr void Org::BouncyCastle::Crypto::Signers::Ed25519Signer::__set_buffer(::Org::BouncyCastle::Crypto::Signers::__Ed25519Signer__Buffer*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Signers::__Ed25519Signer__Buffer*, 0x10>(this, std::forward<::Org::BouncyCastle::Crypto::Signers::__Ed25519Signer__Buffer*>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Signers::__Ed25519Signer__Buffer* Org::BouncyCastle::Crypto::Signers::Ed25519Signer::__get_buffer()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Signers::__Ed25519Signer__Buffer*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Signers::__Ed25519Signer__Buffer*> Org::BouncyCastle::Crypto::Signers::Ed25519Signer::__get_buffer() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Signers::__Ed25519Signer__Buffer*, 0x10>(this);
}
constexpr void Org::BouncyCastle::Crypto::Signers::Ed25519Signer::__set_forSigning(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this, std::forward<bool>(value));
}
constexpr bool& Org::BouncyCastle::Crypto::Signers::Ed25519Signer::__get_forSigning()  {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
constexpr bool const& Org::BouncyCastle::Crypto::Signers::Ed25519Signer::__get_forSigning() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
constexpr void Org::BouncyCastle::Crypto::Signers::Ed25519Signer::__set_privateKey(::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters*, 0x20>(this, std::forward<::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters*>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters* Org::BouncyCastle::Crypto::Signers::Ed25519Signer::__get_privateKey()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters*> Org::BouncyCastle::Crypto::Signers::Ed25519Signer::__get_privateKey() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters*, 0x20>(this);
}
constexpr void Org::BouncyCastle::Crypto::Signers::Ed25519Signer::__set_publicKey(::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters*, 0x28>(this, std::forward<::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters*>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters* Org::BouncyCastle::Crypto::Signers::Ed25519Signer::__get_publicKey()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters*> Org::BouncyCastle::Crypto::Signers::Ed25519Signer::__get_publicKey() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters*, 0x28>(this);
}
inline ::Org::BouncyCastle::Crypto::Signers::Ed25519Signer* Org::BouncyCastle::Crypto::Signers::Ed25519Signer::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Signers::Ed25519Signer*>());
}
inline void Org::BouncyCastle::Crypto::Signers::Ed25519Signer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519Signer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Crypto::Signers::Ed25519Signer::get_AlgorithmName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519Signer*>::get(),
                            "get_AlgorithmName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Signers::Ed25519Signer::Init(bool  forSigning, ::Org::BouncyCastle::Crypto::ICipherParameters*  parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519Signer*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherParameters*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, forSigning, parameters);
}
inline void Org::BouncyCastle::Crypto::Signers::Ed25519Signer::Update(uint8_t  b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519Signer*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, b);
}
inline void Org::BouncyCastle::Crypto::Signers::Ed25519Signer::BlockUpdate(::ArrayW<uint8_t,::Array<uint8_t>*>  buf, int32_t  off, int32_t  len)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519Signer*>::get(),
                            "BlockUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, buf, off, len);
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Org::BouncyCastle::Crypto::Signers::Ed25519Signer::GenerateSignature()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519Signer*>::get(),
                            "GenerateSignature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(*this, ___internal_method);
}
inline bool Org::BouncyCastle::Crypto::Signers::Ed25519Signer::VerifySignature(::ArrayW<uint8_t,::Array<uint8_t>*>  signature)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519Signer*>::get(),
                            "VerifySignature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, signature);
}
inline void Org::BouncyCastle::Crypto::Signers::Ed25519Signer::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519Signer*>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
