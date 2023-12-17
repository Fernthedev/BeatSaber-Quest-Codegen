#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsAuthenticatedData_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__AttributeTable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Set_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__RecipientInformationStore_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__ContentInfo_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthenticatedData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsAuthenticatedData::*)(::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::Org::BouncyCastle::Cms::CmsAuthenticatedData::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x11d836c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthenticatedData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsAuthenticatedData::*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Cms::CmsAuthenticatedData::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x11d84f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthenticatedData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsAuthenticatedData::*)(::Org::BouncyCastle::Asn1::Cms::ContentInfo*)>(&::Org::BouncyCastle::Cms::CmsAuthenticatedData::_ctor)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x11d8390;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::ContentInfo*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthenticatedData.GetMac
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (::Org::BouncyCastle::Cms::CmsAuthenticatedData::*)()>(&::Org::BouncyCastle::Cms::CmsAuthenticatedData::GetMac)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x11d851c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedData*>::get(),
                            "GetMac",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthenticatedData.get_MacAlgorithmID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (::Org::BouncyCastle::Cms::CmsAuthenticatedData::*)()>(&::Org::BouncyCastle::Cms::CmsAuthenticatedData::get_MacAlgorithmID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11d8578;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedData*>::get(),
                            "get_MacAlgorithmID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthenticatedData.get_MacAlgOid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::Cms::CmsAuthenticatedData::*)()>(&::Org::BouncyCastle::Cms::CmsAuthenticatedData::get_MacAlgOid)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x11d8580;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedData*>::get(),
                            "get_MacAlgOid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthenticatedData.GetRecipientInfos
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Cms::RecipientInformationStore* (::Org::BouncyCastle::Cms::CmsAuthenticatedData::*)()>(&::Org::BouncyCastle::Cms::CmsAuthenticatedData::GetRecipientInfos)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11d85ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedData*>::get(),
                            "GetRecipientInfos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthenticatedData.get_ContentInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Cms::ContentInfo* (::Org::BouncyCastle::Cms::CmsAuthenticatedData::*)()>(&::Org::BouncyCastle::Cms::CmsAuthenticatedData::get_ContentInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11d85b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedData*>::get(),
                            "get_ContentInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthenticatedData.GetAuthAttrs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Cms::AttributeTable* (::Org::BouncyCastle::Cms::CmsAuthenticatedData::*)()>(&::Org::BouncyCastle::Cms::CmsAuthenticatedData::GetAuthAttrs)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x11d85bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedData*>::get(),
                            "GetAuthAttrs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthenticatedData.GetUnauthAttrs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Cms::AttributeTable* (::Org::BouncyCastle::Cms::CmsAuthenticatedData::*)()>(&::Org::BouncyCastle::Cms::CmsAuthenticatedData::GetUnauthAttrs)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x11d8630;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedData*>::get(),
                            "GetUnauthAttrs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthenticatedData.GetEncoded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (::Org::BouncyCastle::Cms::CmsAuthenticatedData::*)()>(&::Org::BouncyCastle::Cms::CmsAuthenticatedData::GetEncoded)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x11d86a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedData*>::get(),
                            "GetEncoded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Cms::CmsAuthenticatedData::__set_recipientInfoStore(::Org::BouncyCastle::Cms::RecipientInformationStore*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Cms::RecipientInformationStore*, 0x10>(this, std::forward<::Org::BouncyCastle::Cms::RecipientInformationStore*>(value));
}
constexpr ::Org::BouncyCastle::Cms::RecipientInformationStore* Org::BouncyCastle::Cms::CmsAuthenticatedData::__get_recipientInfoStore()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Cms::RecipientInformationStore*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::RecipientInformationStore*> Org::BouncyCastle::Cms::CmsAuthenticatedData::__get_recipientInfoStore() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Cms::RecipientInformationStore*, 0x10>(this);
}
constexpr void Org::BouncyCastle::Cms::CmsAuthenticatedData::__set_contentInfo(::Org::BouncyCastle::Asn1::Cms::ContentInfo*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::Cms::ContentInfo*, 0x18>(this, std::forward<::Org::BouncyCastle::Asn1::Cms::ContentInfo*>(value));
}
constexpr ::Org::BouncyCastle::Asn1::Cms::ContentInfo* Org::BouncyCastle::Cms::CmsAuthenticatedData::__get_contentInfo()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::Cms::ContentInfo*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::ContentInfo*> Org::BouncyCastle::Cms::CmsAuthenticatedData::__get_contentInfo() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::Cms::ContentInfo*, 0x18>(this);
}
constexpr void Org::BouncyCastle::Cms::CmsAuthenticatedData::__set_macAlg(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, 0x20>(this, std::forward<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(value));
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Cms::CmsAuthenticatedData::__get_macAlg()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> Org::BouncyCastle::Cms::CmsAuthenticatedData::__get_macAlg() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, 0x20>(this);
}
constexpr void Org::BouncyCastle::Cms::CmsAuthenticatedData::__set_authAttrs(::Org::BouncyCastle::Asn1::Asn1Set*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::Asn1Set*, 0x28>(this, std::forward<::Org::BouncyCastle::Asn1::Asn1Set*>(value));
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Set* Org::BouncyCastle::Cms::CmsAuthenticatedData::__get_authAttrs()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::Asn1Set*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> Org::BouncyCastle::Cms::CmsAuthenticatedData::__get_authAttrs() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::Asn1Set*, 0x28>(this);
}
constexpr void Org::BouncyCastle::Cms::CmsAuthenticatedData::__set_unauthAttrs(::Org::BouncyCastle::Asn1::Asn1Set*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::Asn1Set*, 0x30>(this, std::forward<::Org::BouncyCastle::Asn1::Asn1Set*>(value));
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Set* Org::BouncyCastle::Cms::CmsAuthenticatedData::__get_unauthAttrs()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::Asn1Set*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> Org::BouncyCastle::Cms::CmsAuthenticatedData::__get_unauthAttrs() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::Asn1Set*, 0x30>(this);
}
constexpr void Org::BouncyCastle::Cms::CmsAuthenticatedData::__set_mac(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x38>(this, std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& Org::BouncyCastle::Cms::CmsAuthenticatedData::__get_mac()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x38>(this);
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& Org::BouncyCastle::Cms::CmsAuthenticatedData::__get_mac() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x38>(this);
}
inline ::Org::BouncyCastle::Cms::CmsAuthenticatedData* Org::BouncyCastle::Cms::CmsAuthenticatedData::New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  authData)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Cms::CmsAuthenticatedData*>(authData));
}
inline void Org::BouncyCastle::Cms::CmsAuthenticatedData::_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  authData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, authData);
}
inline ::Org::BouncyCastle::Cms::CmsAuthenticatedData* Org::BouncyCastle::Cms::CmsAuthenticatedData::New_ctor(::System::IO::Stream*  authData)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Cms::CmsAuthenticatedData*>(authData));
}
inline void Org::BouncyCastle::Cms::CmsAuthenticatedData::_ctor(::System::IO::Stream*  authData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, authData);
}
inline ::Org::BouncyCastle::Cms::CmsAuthenticatedData* Org::BouncyCastle::Cms::CmsAuthenticatedData::New_ctor(::Org::BouncyCastle::Asn1::Cms::ContentInfo*  contentInfo)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Cms::CmsAuthenticatedData*>(contentInfo));
}
inline void Org::BouncyCastle::Cms::CmsAuthenticatedData::_ctor(::Org::BouncyCastle::Asn1::Cms::ContentInfo*  contentInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::ContentInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, contentInfo);
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Org::BouncyCastle::Cms::CmsAuthenticatedData::GetMac()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedData*>::get(),
                            "GetMac",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Cms::CmsAuthenticatedData::get_MacAlgorithmID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedData*>::get(),
                            "get_MacAlgorithmID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, false>(*this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Cms::CmsAuthenticatedData::get_MacAlgOid()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedData*>::get(),
                            "get_MacAlgOid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::RecipientInformationStore* Org::BouncyCastle::Cms::CmsAuthenticatedData::GetRecipientInfos()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedData*>::get(),
                            "GetRecipientInfos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::RecipientInformationStore*, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cms::ContentInfo* Org::BouncyCastle::Cms::CmsAuthenticatedData::get_ContentInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedData*>::get(),
                            "get_ContentInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::ContentInfo*, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cms::AttributeTable* Org::BouncyCastle::Cms::CmsAuthenticatedData::GetAuthAttrs()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedData*>::get(),
                            "GetAuthAttrs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::AttributeTable*, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cms::AttributeTable* Org::BouncyCastle::Cms::CmsAuthenticatedData::GetUnauthAttrs()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedData*>::get(),
                            "GetUnauthAttrs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::AttributeTable*, false>(*this, ___internal_method);
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Org::BouncyCastle::Cms::CmsAuthenticatedData::GetEncoded()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedData*>::get(),
                            "GetEncoded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
