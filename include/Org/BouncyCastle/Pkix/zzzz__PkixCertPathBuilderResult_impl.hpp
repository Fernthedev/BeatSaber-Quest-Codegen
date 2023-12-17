#pragma once
#include "Org/BouncyCastle/Pkix/zzzz__PkixCertPathValidatorResult_impl.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixCertPathBuilderResult_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixPolicyNode_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixCertPath_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__TrustAnchor_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult::*)(::Org::BouncyCastle::Pkix::PkixCertPath*, ::Org::BouncyCastle::Pkix::TrustAnchor*, ::Org::BouncyCastle::Pkix::PkixPolicyNode*, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(&::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x10eb440;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::TrustAnchor*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixPolicyNode*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult.get_CertPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Pkix::PkixCertPath* (::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult::*)()>(&::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult::get_CertPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10f425c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult*>::get(),
                            "get_CertPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult::*)()>(&::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult::ToString)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x10f4264;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult*>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Pkix::PkixCertPathBuilderResult::__set_certPath(::Org::BouncyCastle::Pkix::PkixCertPath*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Pkix::PkixCertPath*, 0x28>(this, std::forward<::Org::BouncyCastle::Pkix::PkixCertPath*>(value));
}
constexpr ::Org::BouncyCastle::Pkix::PkixCertPath* Org::BouncyCastle::Pkix::PkixCertPathBuilderResult::__get_certPath()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Pkix::PkixCertPath*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Pkix::PkixCertPath*> Org::BouncyCastle::Pkix::PkixCertPathBuilderResult::__get_certPath() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Pkix::PkixCertPath*, 0x28>(this);
}
inline ::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult* Org::BouncyCastle::Pkix::PkixCertPathBuilderResult::New_ctor(::Org::BouncyCastle::Pkix::PkixCertPath*  certPath, ::Org::BouncyCastle::Pkix::TrustAnchor*  trustAnchor, ::Org::BouncyCastle::Pkix::PkixPolicyNode*  policyTree, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  subjectPublicKey)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult*>(certPath, trustAnchor, policyTree, subjectPublicKey));
}
inline void Org::BouncyCastle::Pkix::PkixCertPathBuilderResult::_ctor(::Org::BouncyCastle::Pkix::PkixCertPath*  certPath, ::Org::BouncyCastle::Pkix::TrustAnchor*  trustAnchor, ::Org::BouncyCastle::Pkix::PkixPolicyNode*  policyTree, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  subjectPublicKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::TrustAnchor*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixPolicyNode*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, certPath, trustAnchor, policyTree, subjectPublicKey);
}
inline ::Org::BouncyCastle::Pkix::PkixCertPath* Org::BouncyCastle::Pkix::PkixCertPathBuilderResult::get_CertPath()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult*>::get(),
                            "get_CertPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Pkix::PkixCertPath*, false>(*this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Pkix::PkixCertPathBuilderResult::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult*>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
