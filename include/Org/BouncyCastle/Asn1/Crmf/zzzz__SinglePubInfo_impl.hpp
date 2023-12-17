#pragma once
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/zzzz__SinglePubInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__GeneralName_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::SinglePubInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::Crmf::SinglePubInfo::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(&::Org::BouncyCastle::Asn1::Crmf::SinglePubInfo::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xe88958;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Crmf::SinglePubInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::SinglePubInfo.GetInstance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Crmf::SinglePubInfo* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Crmf::SinglePubInfo::GetInstance)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xe87308;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Crmf::SinglePubInfo*>::get(),
                            "GetInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::SinglePubInfo.get_PubLocation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::GeneralName* (::Org::BouncyCastle::Asn1::Crmf::SinglePubInfo::*)()>(&::Org::BouncyCastle::Asn1::Crmf::SinglePubInfo::get_PubLocation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe889dc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Crmf::SinglePubInfo*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Crmf::SinglePubInfo*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::SinglePubInfo.ToAsn1Object
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Crmf::SinglePubInfo::*)()>(&::Org::BouncyCastle::Asn1::Crmf::SinglePubInfo::ToAsn1Object)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xe889e4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Crmf::SinglePubInfo*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Crmf::SinglePubInfo*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Asn1::Crmf::SinglePubInfo::__set_pubMethod(::Org::BouncyCastle::Asn1::DerInteger*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::DerInteger*, 0x10>(this, std::forward<::Org::BouncyCastle::Asn1::DerInteger*>(value));
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Asn1::Crmf::SinglePubInfo::__get_pubMethod()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::DerInteger*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> Org::BouncyCastle::Asn1::Crmf::SinglePubInfo::__get_pubMethod() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::DerInteger*, 0x10>(this);
}
constexpr void Org::BouncyCastle::Asn1::Crmf::SinglePubInfo::__set_pubLocation(::Org::BouncyCastle::Asn1::X509::GeneralName*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::X509::GeneralName*, 0x18>(this, std::forward<::Org::BouncyCastle::Asn1::X509::GeneralName*>(value));
}
constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName* Org::BouncyCastle::Asn1::Crmf::SinglePubInfo::__get_pubLocation()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::X509::GeneralName*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::GeneralName*> Org::BouncyCastle::Asn1::Crmf::SinglePubInfo::__get_pubLocation() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::X509::GeneralName*, 0x18>(this);
}
inline ::Org::BouncyCastle::Asn1::Crmf::SinglePubInfo* Org::BouncyCastle::Asn1::Crmf::SinglePubInfo::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Asn1::Crmf::SinglePubInfo*>(seq));
}
inline void Org::BouncyCastle::Asn1::Crmf::SinglePubInfo::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Crmf::SinglePubInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::Crmf::SinglePubInfo* Org::BouncyCastle::Asn1::Crmf::SinglePubInfo::GetInstance(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Crmf::SinglePubInfo*>::get(),
                            "GetInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Crmf::SinglePubInfo*, false>(nullptr, ___internal_method, obj);
}
inline ::Org::BouncyCastle::Asn1::X509::GeneralName* Org::BouncyCastle::Asn1::Crmf::SinglePubInfo::get_PubLocation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Crmf::SinglePubInfo*>::get(),
                            "get_PubLocation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::GeneralName*, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Crmf::SinglePubInfo::ToAsn1Object()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Crmf::SinglePubInfo*>::get(),
                            "ToAsn1Object",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
