#pragma once
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Icao/zzzz__CscaMasterList_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509CertificateStructure_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Icao::CscaMasterList.GetInstance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Icao::CscaMasterList* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Icao::CscaMasterList::GetInstance)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xf742b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Icao::CscaMasterList*>::get(),
                            "GetInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Icao::CscaMasterList._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::Icao::CscaMasterList::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(&::Org::BouncyCastle::Asn1::Icao::CscaMasterList::_ctor)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0xf74358;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Icao::CscaMasterList*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Icao::CscaMasterList._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::Icao::CscaMasterList::*)(::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*,::Array<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>*>)>(&::Org::BouncyCastle::Asn1::Icao::CscaMasterList::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xf745e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Icao::CscaMasterList*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*,::Array<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Icao::CscaMasterList.get_Version
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Asn1::Icao::CscaMasterList::*)()>(&::Org::BouncyCastle::Asn1::Icao::CscaMasterList::get_Version)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xf746e0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Icao::CscaMasterList*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Icao::CscaMasterList*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Icao::CscaMasterList.GetCertStructs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*,::Array<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>*> (::Org::BouncyCastle::Asn1::Icao::CscaMasterList::*)()>(&::Org::BouncyCastle::Asn1::Icao::CscaMasterList::GetCertStructs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf746fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Icao::CscaMasterList*>::get(),
                            "GetCertStructs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Icao::CscaMasterList.CopyCertList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*,::Array<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>*> (*)(::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*,::Array<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>*>)>(&::Org::BouncyCastle::Asn1::Icao::CscaMasterList::CopyCertList)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xf74668;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Icao::CscaMasterList*>::get(),
                            "CopyCertList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*,::Array<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Icao::CscaMasterList.ToAsn1Object
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Icao::CscaMasterList::*)()>(&::Org::BouncyCastle::Asn1::Icao::CscaMasterList::ToAsn1Object)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xf74704;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Icao::CscaMasterList*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Icao::CscaMasterList*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Asn1::Icao::CscaMasterList::__set_version(::Org::BouncyCastle::Asn1::DerInteger*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::DerInteger*, 0x10>(this, std::forward<::Org::BouncyCastle::Asn1::DerInteger*>(value));
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Asn1::Icao::CscaMasterList::__get_version()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::DerInteger*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> Org::BouncyCastle::Asn1::Icao::CscaMasterList::__get_version() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::DerInteger*, 0x10>(this);
}
constexpr void Org::BouncyCastle::Asn1::Icao::CscaMasterList::__set_certList(::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*,::Array<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*,::Array<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>*>, 0x18>(this, std::forward<::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*,::Array<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>*>>(value));
}
constexpr ::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*,::Array<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>*>& Org::BouncyCastle::Asn1::Icao::CscaMasterList::__get_certList()  {
return ::cordl_internals::getInstanceField<::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*,::Array<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>*>, 0x18>(this);
}
constexpr ::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*,::Array<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>*> const& Org::BouncyCastle::Asn1::Icao::CscaMasterList::__get_certList() const {
return ::cordl_internals::getInstanceField<::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*,::Array<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>*>, 0x18>(this);
}
inline ::Org::BouncyCastle::Asn1::Icao::CscaMasterList* Org::BouncyCastle::Asn1::Icao::CscaMasterList::GetInstance(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Icao::CscaMasterList*>::get(),
                            "GetInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Icao::CscaMasterList*, false>(nullptr, ___internal_method, obj);
}
inline ::Org::BouncyCastle::Asn1::Icao::CscaMasterList* Org::BouncyCastle::Asn1::Icao::CscaMasterList::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Asn1::Icao::CscaMasterList*>(seq));
}
inline void Org::BouncyCastle::Asn1::Icao::CscaMasterList::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Icao::CscaMasterList*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::Icao::CscaMasterList* Org::BouncyCastle::Asn1::Icao::CscaMasterList::New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*,::Array<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>*>  certStructs)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Asn1::Icao::CscaMasterList*>(certStructs));
}
inline void Org::BouncyCastle::Asn1::Icao::CscaMasterList::_ctor(::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*,::Array<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>*>  certStructs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Icao::CscaMasterList*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*,::Array<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, certStructs);
}
inline int32_t Org::BouncyCastle::Asn1::Icao::CscaMasterList::get_Version()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Icao::CscaMasterList*>::get(),
                            "get_Version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*,::Array<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>*> Org::BouncyCastle::Asn1::Icao::CscaMasterList::GetCertStructs()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Icao::CscaMasterList*>::get(),
                            "GetCertStructs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*,::Array<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>*>, false>(*this, ___internal_method);
}
inline ::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*,::Array<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>*> Org::BouncyCastle::Asn1::Icao::CscaMasterList::CopyCertList(::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*,::Array<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>*>  orig)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Icao::CscaMasterList*>::get(),
                            "CopyCertList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*,::Array<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*,::Array<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>*>, false>(nullptr, ___internal_method, orig);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Icao::CscaMasterList::ToAsn1Object()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Icao::CscaMasterList*>::get(),
                            "ToAsn1Object",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
