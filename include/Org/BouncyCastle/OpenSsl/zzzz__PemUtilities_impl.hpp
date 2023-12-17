#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/OpenSsl/zzzz__PemUtilities_def.hpp"
#include "Org/BouncyCastle/OpenSsl/zzzz__PemUtilities_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
constexpr void Org::BouncyCastle::OpenSsl::__PemUtilities__PemBaseAlg::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& Org::BouncyCastle::OpenSsl::__PemUtilities__PemBaseAlg::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& Org::BouncyCastle::OpenSsl::__PemUtilities__PemBaseAlg::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Org::BouncyCastle::OpenSsl::__PemUtilities__PemBaseAlg::__PemUtilities__PemBaseAlg(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::Org::BouncyCastle::OpenSsl::__PemUtilities__PemBaseAlg  Org::BouncyCastle::OpenSsl::__PemUtilities__PemBaseAlg::AES_128{static_cast<int32_t>(0x0)};
constexpr ::Org::BouncyCastle::OpenSsl::__PemUtilities__PemBaseAlg  Org::BouncyCastle::OpenSsl::__PemUtilities__PemBaseAlg::AES_192{static_cast<int32_t>(0x1)};
constexpr ::Org::BouncyCastle::OpenSsl::__PemUtilities__PemBaseAlg  Org::BouncyCastle::OpenSsl::__PemUtilities__PemBaseAlg::AES_256{static_cast<int32_t>(0x2)};
constexpr ::Org::BouncyCastle::OpenSsl::__PemUtilities__PemBaseAlg  Org::BouncyCastle::OpenSsl::__PemUtilities__PemBaseAlg::BF{static_cast<int32_t>(0x3)};
constexpr ::Org::BouncyCastle::OpenSsl::__PemUtilities__PemBaseAlg  Org::BouncyCastle::OpenSsl::__PemUtilities__PemBaseAlg::DES{static_cast<int32_t>(0x4)};
constexpr ::Org::BouncyCastle::OpenSsl::__PemUtilities__PemBaseAlg  Org::BouncyCastle::OpenSsl::__PemUtilities__PemBaseAlg::DES_EDE{static_cast<int32_t>(0x5)};
constexpr ::Org::BouncyCastle::OpenSsl::__PemUtilities__PemBaseAlg  Org::BouncyCastle::OpenSsl::__PemUtilities__PemBaseAlg::DES_EDE3{static_cast<int32_t>(0x6)};
constexpr ::Org::BouncyCastle::OpenSsl::__PemUtilities__PemBaseAlg  Org::BouncyCastle::OpenSsl::__PemUtilities__PemBaseAlg::RC2{static_cast<int32_t>(0x7)};
constexpr ::Org::BouncyCastle::OpenSsl::__PemUtilities__PemBaseAlg  Org::BouncyCastle::OpenSsl::__PemUtilities__PemBaseAlg::RC2_40{static_cast<int32_t>(0x8)};
constexpr ::Org::BouncyCastle::OpenSsl::__PemUtilities__PemBaseAlg  Org::BouncyCastle::OpenSsl::__PemUtilities__PemBaseAlg::RC2_64{static_cast<int32_t>(0x9)};
constexpr void Org::BouncyCastle::OpenSsl::__PemUtilities__PemMode::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& Org::BouncyCastle::OpenSsl::__PemUtilities__PemMode::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& Org::BouncyCastle::OpenSsl::__PemUtilities__PemMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Org::BouncyCastle::OpenSsl::__PemUtilities__PemMode::__PemUtilities__PemMode(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::Org::BouncyCastle::OpenSsl::__PemUtilities__PemMode  Org::BouncyCastle::OpenSsl::__PemUtilities__PemMode::CBC{static_cast<int32_t>(0x0)};
constexpr ::Org::BouncyCastle::OpenSsl::__PemUtilities__PemMode  Org::BouncyCastle::OpenSsl::__PemUtilities__PemMode::CFB{static_cast<int32_t>(0x1)};
constexpr ::Org::BouncyCastle::OpenSsl::__PemUtilities__PemMode  Org::BouncyCastle::OpenSsl::__PemUtilities__PemMode::ECB{static_cast<int32_t>(0x2)};
constexpr ::Org::BouncyCastle::OpenSsl::__PemUtilities__PemMode  Org::BouncyCastle::OpenSsl::__PemUtilities__PemMode::OFB{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::PemUtilities.ParseDekAlgName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ByRef<::Org::BouncyCastle::OpenSsl::__PemUtilities__PemBaseAlg>, ByRef<::Org::BouncyCastle::OpenSsl::__PemUtilities__PemMode>)>(&::Org::BouncyCastle::OpenSsl::PemUtilities::ParseDekAlgName)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x10d3be8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemUtilities*>::get(),
                            "ParseDekAlgName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Org::BouncyCastle::OpenSsl::__PemUtilities__PemBaseAlg>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Org::BouncyCastle::OpenSsl::__PemUtilities__PemMode>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::PemUtilities.Crypt
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (*)(bool, ::ArrayW<uint8_t,::Array<uint8_t>*>, ::ArrayW<char16_t,::Array<char16_t>*>, ::StringW, ::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::Org::BouncyCastle::OpenSsl::PemUtilities::Crypt)> {
  constexpr static std::size_t size = 0x4fc;
  constexpr static std::size_t addrs = 0x10d0f94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemUtilities*>::get(),
                            "Crypt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t,::Array<char16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::PemUtilities.GetCipherParameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::ICipherParameters* (*)(::ArrayW<char16_t,::Array<char16_t>*>, ::Org::BouncyCastle::OpenSsl::__PemUtilities__PemBaseAlg, ::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::Org::BouncyCastle::OpenSsl::PemUtilities::GetCipherParameters)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x10d3f40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemUtilities*>::get(),
                            "GetCipherParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t,::Array<char16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::OpenSsl::__PemUtilities__PemBaseAlg>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::PemUtilities._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::OpenSsl::PemUtilities::*)()>(&::Org::BouncyCastle::OpenSsl::PemUtilities::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10d4080;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemUtilities*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::OpenSsl::PemUtilities::ParseDekAlgName(::StringW  dekAlgName, ByRef<::Org::BouncyCastle::OpenSsl::__PemUtilities__PemBaseAlg>  baseAlg, ByRef<::Org::BouncyCastle::OpenSsl::__PemUtilities__PemMode>  mode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemUtilities*>::get(),
                            "ParseDekAlgName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Org::BouncyCastle::OpenSsl::__PemUtilities__PemBaseAlg>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Org::BouncyCastle::OpenSsl::__PemUtilities__PemMode>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, dekAlgName, baseAlg, mode);
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Org::BouncyCastle::OpenSsl::PemUtilities::Crypt(bool  encrypt, ::ArrayW<uint8_t,::Array<uint8_t>*>  bytes, ::ArrayW<char16_t,::Array<char16_t>*>  password, ::StringW  dekAlgName, ::ArrayW<uint8_t,::Array<uint8_t>*>  iv)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemUtilities*>::get(),
                            "Crypt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t,::Array<char16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(nullptr, ___internal_method, encrypt, bytes, password, dekAlgName, iv);
}
inline ::Org::BouncyCastle::Crypto::ICipherParameters* Org::BouncyCastle::OpenSsl::PemUtilities::GetCipherParameters(::ArrayW<char16_t,::Array<char16_t>*>  password, ::Org::BouncyCastle::OpenSsl::__PemUtilities__PemBaseAlg  baseAlg, ::ArrayW<uint8_t,::Array<uint8_t>*>  salt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemUtilities*>::get(),
                            "GetCipherParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t,::Array<char16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::OpenSsl::__PemUtilities__PemBaseAlg>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ICipherParameters*, false>(nullptr, ___internal_method, password, baseAlg, salt);
}
inline ::Org::BouncyCastle::OpenSsl::PemUtilities* Org::BouncyCastle::OpenSsl::PemUtilities::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::OpenSsl::PemUtilities*>());
}
inline void Org::BouncyCastle::OpenSsl::PemUtilities::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemUtilities*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
