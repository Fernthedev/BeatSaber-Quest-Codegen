#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crmf/zzzz__DefaultPKMacResult_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IMac_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBlockResult_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::DefaultPKMacResult._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crmf::DefaultPKMacResult::*)(::Org::BouncyCastle::Crypto::IMac*)>(&::Org::BouncyCastle::Crmf::DefaultPKMacResult::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1211fb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::DefaultPKMacResult*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IMac*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::DefaultPKMacResult.Collect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (::Org::BouncyCastle::Crmf::DefaultPKMacResult::*)()>(&::Org::BouncyCastle::Crmf::DefaultPKMacResult::Collect)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x1212268;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::DefaultPKMacResult*>::get(),
                            "Collect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::DefaultPKMacResult.Collect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crmf::DefaultPKMacResult::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t)>(&::Org::BouncyCastle::Crmf::DefaultPKMacResult::Collect)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x12123b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::DefaultPKMacResult*>::get(),
                            "Collect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockResult"
constexpr  Org::BouncyCastle::Crmf::DefaultPKMacResult::operator ::Org::BouncyCastle::Crypto::IBlockResult*() noexcept {
return static_cast<::Org::BouncyCastle::Crypto::IBlockResult*>(static_cast<void*>(this));
}
constexpr void Org::BouncyCastle::Crmf::DefaultPKMacResult::__set_mac(::Org::BouncyCastle::Crypto::IMac*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::IMac*, 0x10>(this, std::forward<::Org::BouncyCastle::Crypto::IMac*>(value));
}
constexpr ::Org::BouncyCastle::Crypto::IMac* Org::BouncyCastle::Crmf::DefaultPKMacResult::__get_mac()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::IMac*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IMac*> Org::BouncyCastle::Crmf::DefaultPKMacResult::__get_mac() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::IMac*, 0x10>(this);
}
inline ::Org::BouncyCastle::Crmf::DefaultPKMacResult* Org::BouncyCastle::Crmf::DefaultPKMacResult::New_ctor(::Org::BouncyCastle::Crypto::IMac*  mac)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crmf::DefaultPKMacResult*>(mac));
}
inline void Org::BouncyCastle::Crmf::DefaultPKMacResult::_ctor(::Org::BouncyCastle::Crypto::IMac*  mac)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::DefaultPKMacResult*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IMac*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, mac);
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Org::BouncyCastle::Crmf::DefaultPKMacResult::Collect()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::DefaultPKMacResult*>::get(),
                            "Collect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(*this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crmf::DefaultPKMacResult::Collect(::ArrayW<uint8_t,::Array<uint8_t>*>  sig, int32_t  sigOff)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::DefaultPKMacResult*>::get(),
                            "Collect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, sig, sigOff);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
