#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cmp/zzzz__RevocationDetails_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Name_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__RevDetails_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::RevocationDetails._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cmp::RevocationDetails::*)(::Org::BouncyCastle::Asn1::Cmp::RevDetails*)>(&::Org::BouncyCastle::Cmp::RevocationDetails::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x11d7ea4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::RevocationDetails*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cmp::RevDetails*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::RevocationDetails.get_Subject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Name* (::Org::BouncyCastle::Cmp::RevocationDetails::*)()>(&::Org::BouncyCastle::Cmp::RevocationDetails::get_Subject)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x11d7ecc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::RevocationDetails*>::get(),
                            "get_Subject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::RevocationDetails.get_Issuer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Name* (::Org::BouncyCastle::Cmp::RevocationDetails::*)()>(&::Org::BouncyCastle::Cmp::RevocationDetails::get_Issuer)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x11d7efc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::RevocationDetails*>::get(),
                            "get_Issuer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::RevocationDetails.get_SerialNumber
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Cmp::RevocationDetails::*)()>(&::Org::BouncyCastle::Cmp::RevocationDetails::get_SerialNumber)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x11d7f2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::RevocationDetails*>::get(),
                            "get_SerialNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::RevocationDetails.ToASN1Structure
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Cmp::RevDetails* (::Org::BouncyCastle::Cmp::RevocationDetails::*)()>(&::Org::BouncyCastle::Cmp::RevocationDetails::ToASN1Structure)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11d7f68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::RevocationDetails*>::get(),
                            "ToASN1Structure",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Cmp::RevocationDetails::__set_revDetails(::Org::BouncyCastle::Asn1::Cmp::RevDetails*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::Cmp::RevDetails*, 0x10>(this, std::forward<::Org::BouncyCastle::Asn1::Cmp::RevDetails*>(value));
}
constexpr ::Org::BouncyCastle::Asn1::Cmp::RevDetails* Org::BouncyCastle::Cmp::RevocationDetails::__get_revDetails()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::Cmp::RevDetails*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cmp::RevDetails*> Org::BouncyCastle::Cmp::RevocationDetails::__get_revDetails() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::Cmp::RevDetails*, 0x10>(this);
}
inline ::Org::BouncyCastle::Cmp::RevocationDetails* Org::BouncyCastle::Cmp::RevocationDetails::New_ctor(::Org::BouncyCastle::Asn1::Cmp::RevDetails*  revDetails)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Cmp::RevocationDetails*>(revDetails));
}
inline void Org::BouncyCastle::Cmp::RevocationDetails::_ctor(::Org::BouncyCastle::Asn1::Cmp::RevDetails*  revDetails)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::RevocationDetails*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cmp::RevDetails*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, revDetails);
}
inline ::Org::BouncyCastle::Asn1::X509::X509Name* Org::BouncyCastle::Cmp::RevocationDetails::get_Subject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::RevocationDetails*>::get(),
                            "get_Subject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Name*, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::X509Name* Org::BouncyCastle::Cmp::RevocationDetails::get_Issuer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::RevocationDetails*>::get(),
                            "get_Issuer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Name*, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Cmp::RevocationDetails::get_SerialNumber()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::RevocationDetails*>::get(),
                            "get_SerialNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cmp::RevDetails* Org::BouncyCastle::Cmp::RevocationDetails::ToASN1Structure()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::RevocationDetails*>::get(),
                            "ToASN1Structure",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::RevDetails*, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
