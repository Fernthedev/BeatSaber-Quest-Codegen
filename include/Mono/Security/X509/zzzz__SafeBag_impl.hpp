#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Security/X509/zzzz__SafeBag_def.hpp"
#include "Mono/Security/zzzz__ASN1_def.hpp"
//  Writing Method size for method: ::Mono::Security::X509::SafeBag._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::SafeBag::*)(::StringW, ::Mono::Security::ASN1*)>(&::Mono::Security::X509::SafeBag::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x23f0550;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::SafeBag*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::ASN1*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::SafeBag.get_BagOID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Mono::Security::X509::SafeBag::*)()>(&::Mono::Security::X509::SafeBag::get_BagOID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23f057c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::SafeBag*>::get(),
                            "get_BagOID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::SafeBag.get_ASN1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::ASN1* (::Mono::Security::X509::SafeBag::*)()>(&::Mono::Security::X509::SafeBag::get_ASN1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23f0584;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::SafeBag*>::get(),
                            "get_ASN1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Mono::Security::X509::SafeBag::__set__bagOID(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Mono::Security::X509::SafeBag::__get__bagOID()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& Mono::Security::X509::SafeBag::__get__bagOID() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void Mono::Security::X509::SafeBag::__set__asn1(::Mono::Security::ASN1*  value)  {
::cordl_internals::setInstanceField<::Mono::Security::ASN1*, 0x18>(this, std::forward<::Mono::Security::ASN1*>(value));
}
constexpr ::Mono::Security::ASN1* Mono::Security::X509::SafeBag::__get__asn1()  {
return ::cordl_internals::getInstanceField<::Mono::Security::ASN1*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Security::ASN1*> Mono::Security::X509::SafeBag::__get__asn1() const {
return ::cordl_internals::getInstanceField<::Mono::Security::ASN1*, 0x18>(this);
}
inline ::Mono::Security::X509::SafeBag* Mono::Security::X509::SafeBag::New_ctor(::StringW  bagOID, ::Mono::Security::ASN1*  asn1)  {
return THROW_UNLESS(::il2cpp_utils::New<::Mono::Security::X509::SafeBag*>(bagOID, asn1));
}
inline void Mono::Security::X509::SafeBag::_ctor(::StringW  bagOID, ::Mono::Security::ASN1*  asn1)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::SafeBag*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::ASN1*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, bagOID, asn1);
}
inline ::StringW Mono::Security::X509::SafeBag::get_BagOID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::SafeBag*>::get(),
                            "get_BagOID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::Mono::Security::ASN1* Mono::Security::X509::SafeBag::get_ASN1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::SafeBag*>::get(),
                            "get_ASN1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::ASN1*, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
