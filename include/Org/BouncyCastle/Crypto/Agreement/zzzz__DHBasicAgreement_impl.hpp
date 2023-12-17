#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Agreement/zzzz__DHBasicAgreement_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__DHPrivateKeyParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBasicAgreement_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__DHParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement::*)(::Org::BouncyCastle::Crypto::ICipherParameters*)>(&::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement::Init)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x121994c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement.GetFieldSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement::*)()>(&::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement::GetFieldSize)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x1219a88;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement.CalculateAgreement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement::*)(::Org::BouncyCastle::Crypto::ICipherParameters*)>(&::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement::CalculateAgreement)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x1219acc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement::*)()>(&::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1219d48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBasicAgreement"
constexpr  Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement::operator ::Org::BouncyCastle::Crypto::IBasicAgreement*() noexcept {
return static_cast<::Org::BouncyCastle::Crypto::IBasicAgreement*>(static_cast<void*>(this));
}
constexpr void Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement::__set_key(::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters*, 0x10>(this, std::forward<::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters*>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters* Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement::__get_key()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters*> Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement::__get_key() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters*, 0x10>(this);
}
constexpr void Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement::__set_dhParams(::Org::BouncyCastle::Crypto::Parameters::DHParameters*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Parameters::DHParameters*, 0x18>(this, std::forward<::Org::BouncyCastle::Crypto::Parameters::DHParameters*>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::DHParameters* Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement::__get_dhParams()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Parameters::DHParameters*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::DHParameters*> Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement::__get_dhParams() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Parameters::DHParameters*, 0x18>(this);
}
inline void Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement::Init(::Org::BouncyCastle::Crypto::ICipherParameters*  parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherParameters*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, parameters);
}
inline int32_t Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement::GetFieldSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement*>::get(),
                            "GetFieldSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement::CalculateAgreement(::Org::BouncyCastle::Crypto::ICipherParameters*  pubKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement*>::get(),
                            "CalculateAgreement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherParameters*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*, false>(*this, ___internal_method, pubKey);
}
inline ::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement* Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement*>());
}
inline void Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
