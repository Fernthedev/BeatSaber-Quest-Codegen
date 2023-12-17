#pragma once
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AttributeCertificateInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Extensions_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__Holder_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AttCertIssuer_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AttCertValidityPeriod_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerBitString_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1TaggedObject_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo.GetInstance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo* (*)(::Org::BouncyCastle::Asn1::Asn1TaggedObject*, bool)>(&::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo::GetInstance)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x108487c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo*>::get(),
                            "GetInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo.GetInstance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo::GetInstance)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x10845a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo*>::get(),
                            "GetInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(&::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo::_ctor)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x1084894;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo.get_Version
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::DerInteger* (::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo::*)()>(&::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo::get_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1084c18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo*>::get(),
                            "get_Version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo.get_Holder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::Holder* (::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo::*)()>(&::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo::get_Holder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1084c20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo*>::get(),
                            "get_Holder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo.get_Issuer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::AttCertIssuer* (::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo::*)()>(&::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo::get_Issuer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1084c28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo*>::get(),
                            "get_Issuer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo.get_Signature
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo::*)()>(&::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo::get_Signature)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1084c30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo*>::get(),
                            "get_Signature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo.get_SerialNumber
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::DerInteger* (::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo::*)()>(&::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo::get_SerialNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1084c38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo*>::get(),
                            "get_SerialNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo.get_AttrCertValidityPeriod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::AttCertValidityPeriod* (::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo::*)()>(&::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo::get_AttrCertValidityPeriod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1084c40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo*>::get(),
                            "get_AttrCertValidityPeriod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo.get_Attributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Sequence* (::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo::*)()>(&::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo::get_Attributes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1084c48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo*>::get(),
                            "get_Attributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo.get_IssuerUniqueID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::DerBitString* (::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo::*)()>(&::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo::get_IssuerUniqueID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1084c50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo*>::get(),
                            "get_IssuerUniqueID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo.get_Extensions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Extensions* (::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo::*)()>(&::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo::get_Extensions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1084c58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo*>::get(),
                            "get_Extensions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo.ToAsn1Object
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo::*)()>(&::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo::ToAsn1Object)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x1084c60;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo::__set_version(::Org::BouncyCastle::Asn1::DerInteger*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::DerInteger*, 0x10>(this, std::forward<::Org::BouncyCastle::Asn1::DerInteger*>(value));
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo::__get_version()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::DerInteger*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo::__get_version() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::DerInteger*, 0x10>(this);
}
constexpr void Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo::__set_holder(::Org::BouncyCastle::Asn1::X509::Holder*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::X509::Holder*, 0x18>(this, std::forward<::Org::BouncyCastle::Asn1::X509::Holder*>(value));
}
constexpr ::Org::BouncyCastle::Asn1::X509::Holder* Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo::__get_holder()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::X509::Holder*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::Holder*> Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo::__get_holder() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::X509::Holder*, 0x18>(this);
}
constexpr void Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo::__set_issuer(::Org::BouncyCastle::Asn1::X509::AttCertIssuer*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::X509::AttCertIssuer*, 0x20>(this, std::forward<::Org::BouncyCastle::Asn1::X509::AttCertIssuer*>(value));
}
constexpr ::Org::BouncyCastle::Asn1::X509::AttCertIssuer* Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo::__get_issuer()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::X509::AttCertIssuer*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AttCertIssuer*> Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo::__get_issuer() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::X509::AttCertIssuer*, 0x20>(this);
}
constexpr void Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo::__set_signature(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, 0x28>(this, std::forward<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(value));
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo::__get_signature()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo::__get_signature() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, 0x28>(this);
}
constexpr void Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo::__set_serialNumber(::Org::BouncyCastle::Asn1::DerInteger*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::DerInteger*, 0x30>(this, std::forward<::Org::BouncyCastle::Asn1::DerInteger*>(value));
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo::__get_serialNumber()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::DerInteger*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo::__get_serialNumber() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::DerInteger*, 0x30>(this);
}
constexpr void Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo::__set_attrCertValidityPeriod(::Org::BouncyCastle::Asn1::X509::AttCertValidityPeriod*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::X509::AttCertValidityPeriod*, 0x38>(this, std::forward<::Org::BouncyCastle::Asn1::X509::AttCertValidityPeriod*>(value));
}
constexpr ::Org::BouncyCastle::Asn1::X509::AttCertValidityPeriod* Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo::__get_attrCertValidityPeriod()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::X509::AttCertValidityPeriod*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AttCertValidityPeriod*> Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo::__get_attrCertValidityPeriod() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::X509::AttCertValidityPeriod*, 0x38>(this);
}
constexpr void Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo::__set_attributes(::Org::BouncyCastle::Asn1::Asn1Sequence*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::Asn1Sequence*, 0x40>(this, std::forward<::Org::BouncyCastle::Asn1::Asn1Sequence*>(value));
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo::__get_attributes()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::Asn1Sequence*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo::__get_attributes() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::Asn1Sequence*, 0x40>(this);
}
constexpr void Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo::__set_issuerUniqueID(::Org::BouncyCastle::Asn1::DerBitString*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::DerBitString*, 0x48>(this, std::forward<::Org::BouncyCastle::Asn1::DerBitString*>(value));
}
constexpr ::Org::BouncyCastle::Asn1::DerBitString* Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo::__get_issuerUniqueID()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::DerBitString*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerBitString*> Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo::__get_issuerUniqueID() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::DerBitString*, 0x48>(this);
}
constexpr void Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo::__set_extensions(::Org::BouncyCastle::Asn1::X509::X509Extensions*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::X509::X509Extensions*, 0x50>(this, std::forward<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(value));
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions* Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo::__get_extensions()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::X509::X509Extensions*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509Extensions*> Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo::__get_extensions() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::X509::X509Extensions*, 0x50>(this);
}
inline ::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo* Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo::GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject*  obj, bool  isExplicit)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo*>::get(),
                            "GetInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo*, false>(nullptr, ___internal_method, obj, isExplicit);
}
inline ::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo* Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo::GetInstance(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo*>::get(),
                            "GetInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo*, false>(nullptr, ___internal_method, obj);
}
inline ::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo* Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo*>(seq));
}
inline void Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo::get_Version()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo*>::get(),
                            "get_Version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerInteger*, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::Holder* Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo::get_Holder()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo*>::get(),
                            "get_Holder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::Holder*, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::AttCertIssuer* Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo::get_Issuer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo*>::get(),
                            "get_Issuer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AttCertIssuer*, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo::get_Signature()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo*>::get(),
                            "get_Signature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo::get_SerialNumber()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo*>::get(),
                            "get_SerialNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerInteger*, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::AttCertValidityPeriod* Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo::get_AttrCertValidityPeriod()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo*>::get(),
                            "get_AttrCertValidityPeriod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AttCertValidityPeriod*, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Sequence* Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo::get_Attributes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo*>::get(),
                            "get_Attributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Sequence*, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerBitString* Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo::get_IssuerUniqueID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo*>::get(),
                            "get_IssuerUniqueID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerBitString*, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo::get_Extensions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo*>::get(),
                            "get_Extensions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Extensions*, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo::ToAsn1Object()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo*>::get(),
                            "ToAsn1Object",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
