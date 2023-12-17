#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Security/Authenticode/zzzz__PrivateKey_def.hpp"
#include "System/Security/Cryptography/zzzz__RSA_def.hpp"
//  Writing Method size for method: ::Mono::Security::Authenticode::PrivateKey._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Authenticode::PrivateKey::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, ::StringW)>(&::Mono::Security::Authenticode::PrivateKey::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x240c890;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Authenticode::PrivateKey*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Authenticode::PrivateKey.get_RSA
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::RSA* (::Mono::Security::Authenticode::PrivateKey::*)()>(&::Mono::Security::Authenticode::PrivateKey::get_RSA)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x240cdc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Authenticode::PrivateKey*>::get(),
                            "get_RSA",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Authenticode::PrivateKey.DeriveKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (::Mono::Security::Authenticode::PrivateKey::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, ::StringW)>(&::Mono::Security::Authenticode::PrivateKey::DeriveKey)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x240cdcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Authenticode::PrivateKey*>::get(),
                            "DeriveKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Authenticode::PrivateKey.Decode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Security::Authenticode::PrivateKey::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, ::StringW)>(&::Mono::Security::Authenticode::PrivateKey::Decode)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0x240c974;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Authenticode::PrivateKey*>::get(),
                            "Decode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Authenticode::PrivateKey.CreateFromFile
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::Authenticode::PrivateKey* (*)(::StringW)>(&::Mono::Security::Authenticode::PrivateKey::CreateFromFile)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x240cee4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Authenticode::PrivateKey*>::get(),
                            "CreateFromFile",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Authenticode::PrivateKey.CreateFromFile
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::Authenticode::PrivateKey* (*)(::StringW, ::StringW)>(&::Mono::Security::Authenticode::PrivateKey::CreateFromFile)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x240ceec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Authenticode::PrivateKey*>::get(),
                            "CreateFromFile",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Mono::Security::Authenticode::PrivateKey::__set_encrypted(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& Mono::Security::Authenticode::PrivateKey::__get_encrypted()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& Mono::Security::Authenticode::PrivateKey::__get_encrypted() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr void Mono::Security::Authenticode::PrivateKey::__set_rsa(::System::Security::Cryptography::RSA*  value)  {
::cordl_internals::setInstanceField<::System::Security::Cryptography::RSA*, 0x18>(this, std::forward<::System::Security::Cryptography::RSA*>(value));
}
constexpr ::System::Security::Cryptography::RSA* Mono::Security::Authenticode::PrivateKey::__get_rsa()  {
return ::cordl_internals::getInstanceField<::System::Security::Cryptography::RSA*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::RSA*> Mono::Security::Authenticode::PrivateKey::__get_rsa() const {
return ::cordl_internals::getInstanceField<::System::Security::Cryptography::RSA*, 0x18>(this);
}
constexpr void Mono::Security::Authenticode::PrivateKey::__set_weak(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this, std::forward<bool>(value));
}
constexpr bool& Mono::Security::Authenticode::PrivateKey::__get_weak()  {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr bool const& Mono::Security::Authenticode::PrivateKey::__get_weak() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr void Mono::Security::Authenticode::PrivateKey::__set_keyType(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this, std::forward<int32_t>(value));
}
constexpr int32_t& Mono::Security::Authenticode::PrivateKey::__get_keyType()  {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this);
}
constexpr int32_t const& Mono::Security::Authenticode::PrivateKey::__get_keyType() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this);
}
inline ::Mono::Security::Authenticode::PrivateKey* Mono::Security::Authenticode::PrivateKey::New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  data, ::StringW  password)  {
return THROW_UNLESS(::il2cpp_utils::New<::Mono::Security::Authenticode::PrivateKey*>(data, password));
}
inline void Mono::Security::Authenticode::PrivateKey::_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  data, ::StringW  password)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Authenticode::PrivateKey*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, data, password);
}
inline ::System::Security::Cryptography::RSA* Mono::Security::Authenticode::PrivateKey::get_RSA()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Authenticode::PrivateKey*>::get(),
                            "get_RSA",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RSA*, false>(*this, ___internal_method);
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Mono::Security::Authenticode::PrivateKey::DeriveKey(::ArrayW<uint8_t,::Array<uint8_t>*>  salt, ::StringW  password)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Authenticode::PrivateKey*>::get(),
                            "DeriveKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(*this, ___internal_method, salt, password);
}
inline bool Mono::Security::Authenticode::PrivateKey::Decode(::ArrayW<uint8_t,::Array<uint8_t>*>  pvk, ::StringW  password)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Authenticode::PrivateKey*>::get(),
                            "Decode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, pvk, password);
}
inline ::Mono::Security::Authenticode::PrivateKey* Mono::Security::Authenticode::PrivateKey::CreateFromFile(::StringW  filename)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Authenticode::PrivateKey*>::get(),
                            "CreateFromFile",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::Authenticode::PrivateKey*, false>(nullptr, ___internal_method, filename);
}
inline ::Mono::Security::Authenticode::PrivateKey* Mono::Security::Authenticode::PrivateKey::CreateFromFile(::StringW  filename, ::StringW  password)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Authenticode::PrivateKey*>::get(),
                            "CreateFromFile",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::Authenticode::PrivateKey*, false>(nullptr, ___internal_method, filename, password);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
