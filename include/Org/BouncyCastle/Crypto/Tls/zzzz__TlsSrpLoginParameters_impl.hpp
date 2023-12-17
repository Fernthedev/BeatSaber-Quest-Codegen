#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSrpLoginParameters_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__Srp6GroupParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters::*)(::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters*, ::Org::BouncyCastle::Math::BigInteger*, ::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xfb8a24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters.get_Group
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* (::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters::get_Group)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xfb8a60;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters.get_Salt
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters::get_Salt)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xfb8a68;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters.get_Verifier
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters::get_Verifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xfb8a70;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters::__set_mGroup(::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters*, 0x10>(this, std::forward<::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters*>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters::__get_mGroup()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters*> Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters::__get_mGroup() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters*, 0x10>(this);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters::__set_mVerifier(::Org::BouncyCastle::Math::BigInteger*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Math::BigInteger*, 0x18>(this, std::forward<::Org::BouncyCastle::Math::BigInteger*>(value));
}
constexpr ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters::__get_mVerifier()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Math::BigInteger*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters::__get_mVerifier() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Math::BigInteger*, 0x18>(this);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters::__set_mSalt(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x20>(this, std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters::__get_mSalt()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x20>(this);
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters::__get_mSalt() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x20>(this);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters* Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters::New_ctor(::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters*  group, ::Org::BouncyCastle::Math::BigInteger*  verifier, ::ArrayW<uint8_t,::Array<uint8_t>*>  salt)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters*>(group, verifier, salt));
}
inline void Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters::_ctor(::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters*  group, ::Org::BouncyCastle::Math::BigInteger*  verifier, ::ArrayW<uint8_t,::Array<uint8_t>*>  salt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, group, verifier, salt);
}
inline ::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters::get_Group()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters*>::get(),
                            "get_Group",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters*, false>(*this, ___internal_method);
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters::get_Salt()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters*>::get(),
                            "get_Salt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters::get_Verifier()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters*>::get(),
                            "get_Verifier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
