#pragma once
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__RevRepContent_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PkiStatusInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/zzzz__CertId_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__CertificateList_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::RevRepContent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::Cmp::RevRepContent::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(&::Org::BouncyCastle::Asn1::Cmp::RevRepContent::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xe6ec54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cmp::RevRepContent*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::RevRepContent.GetInstance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Cmp::RevRepContent* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Cmp::RevRepContent::GetInstance)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xe698b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cmp::RevRepContent*>::get(),
                            "GetInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::RevRepContent.GetStatus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*,::Array<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*>*> (::Org::BouncyCastle::Asn1::Cmp::RevRepContent::*)()>(&::Org::BouncyCastle::Asn1::Cmp::RevRepContent::GetStatus)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xe6ed34;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cmp::RevRepContent*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cmp::RevRepContent*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::RevRepContent.GetRevCerts
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Org::BouncyCastle::Asn1::Crmf::CertId*,::Array<::Org::BouncyCastle::Asn1::Crmf::CertId*>*> (::Org::BouncyCastle::Asn1::Cmp::RevRepContent::*)()>(&::Org::BouncyCastle::Asn1::Cmp::RevRepContent::GetRevCerts)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xe6ee28;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cmp::RevRepContent*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cmp::RevRepContent*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::RevRepContent.GetCrls
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Org::BouncyCastle::Asn1::X509::CertificateList*,::Array<::Org::BouncyCastle::Asn1::X509::CertificateList*>*> (::Org::BouncyCastle::Asn1::Cmp::RevRepContent::*)()>(&::Org::BouncyCastle::Asn1::Cmp::RevRepContent::GetCrls)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xe6ef28;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cmp::RevRepContent*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cmp::RevRepContent*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::RevRepContent.ToAsn1Object
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Cmp::RevRepContent::*)()>(&::Org::BouncyCastle::Asn1::Cmp::RevRepContent::ToAsn1Object)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xe6f028;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cmp::RevRepContent*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cmp::RevRepContent*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Asn1::Cmp::RevRepContent::__set_status(::Org::BouncyCastle::Asn1::Asn1Sequence*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::Asn1Sequence*, 0x10>(this, std::forward<::Org::BouncyCastle::Asn1::Asn1Sequence*>(value));
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* Org::BouncyCastle::Asn1::Cmp::RevRepContent::__get_status()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::Asn1Sequence*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> Org::BouncyCastle::Asn1::Cmp::RevRepContent::__get_status() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::Asn1Sequence*, 0x10>(this);
}
constexpr void Org::BouncyCastle::Asn1::Cmp::RevRepContent::__set_revCerts(::Org::BouncyCastle::Asn1::Asn1Sequence*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::Asn1Sequence*, 0x18>(this, std::forward<::Org::BouncyCastle::Asn1::Asn1Sequence*>(value));
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* Org::BouncyCastle::Asn1::Cmp::RevRepContent::__get_revCerts()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::Asn1Sequence*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> Org::BouncyCastle::Asn1::Cmp::RevRepContent::__get_revCerts() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::Asn1Sequence*, 0x18>(this);
}
constexpr void Org::BouncyCastle::Asn1::Cmp::RevRepContent::__set_crls(::Org::BouncyCastle::Asn1::Asn1Sequence*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::Asn1Sequence*, 0x20>(this, std::forward<::Org::BouncyCastle::Asn1::Asn1Sequence*>(value));
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* Org::BouncyCastle::Asn1::Cmp::RevRepContent::__get_crls()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::Asn1Sequence*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> Org::BouncyCastle::Asn1::Cmp::RevRepContent::__get_crls() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::Asn1Sequence*, 0x20>(this);
}
inline ::Org::BouncyCastle::Asn1::Cmp::RevRepContent* Org::BouncyCastle::Asn1::Cmp::RevRepContent::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Asn1::Cmp::RevRepContent*>(seq));
}
inline void Org::BouncyCastle::Asn1::Cmp::RevRepContent::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cmp::RevRepContent*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::Cmp::RevRepContent* Org::BouncyCastle::Asn1::Cmp::RevRepContent::GetInstance(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cmp::RevRepContent*>::get(),
                            "GetInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::RevRepContent*, false>(nullptr, ___internal_method, obj);
}
inline ::ArrayW<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*,::Array<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*>*> Org::BouncyCastle::Asn1::Cmp::RevRepContent::GetStatus()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cmp::RevRepContent*>::get(),
                            "GetStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*,::Array<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*>*>, false>(*this, ___internal_method);
}
inline ::ArrayW<::Org::BouncyCastle::Asn1::Crmf::CertId*,::Array<::Org::BouncyCastle::Asn1::Crmf::CertId*>*> Org::BouncyCastle::Asn1::Cmp::RevRepContent::GetRevCerts()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cmp::RevRepContent*>::get(),
                            "GetRevCerts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Asn1::Crmf::CertId*,::Array<::Org::BouncyCastle::Asn1::Crmf::CertId*>*>, false>(*this, ___internal_method);
}
inline ::ArrayW<::Org::BouncyCastle::Asn1::X509::CertificateList*,::Array<::Org::BouncyCastle::Asn1::X509::CertificateList*>*> Org::BouncyCastle::Asn1::Cmp::RevRepContent::GetCrls()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cmp::RevRepContent*>::get(),
                            "GetCrls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Asn1::X509::CertificateList*,::Array<::Org::BouncyCastle::Asn1::X509::CertificateList*>*>, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Cmp::RevRepContent::ToAsn1Object()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cmp::RevRepContent*>::get(),
                            "ToAsn1Object",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
