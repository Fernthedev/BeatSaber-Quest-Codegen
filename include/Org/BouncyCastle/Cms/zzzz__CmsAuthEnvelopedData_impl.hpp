#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsAuthEnvelopedData_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__RecipientInformationStore_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsAuthEnvelopedData_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Set_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__ContentInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__OriginatorInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__KeyParameter_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsSecureReadable_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsReadable_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable::*)(::Org::BouncyCastle::Cms::CmsAuthEnvelopedData*)>(&::Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x11dc4b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsAuthEnvelopedData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable.get_Algorithm
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (::Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable::*)()>(&::Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable::get_Algorithm)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x11dc4d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable*>::get(),
                            "get_Algorithm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable.get_CryptoObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable::*)()>(&::Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable::get_CryptoObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11dc4f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable*>::get(),
                            "get_CryptoObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable.GetReadable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Cms::CmsReadable* (::Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable::*)(::Org::BouncyCastle::Crypto::Parameters::KeyParameter*)>(&::Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable::GetReadable)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x11dc4fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable*>::get(),
                            "GetReadable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Cms::CmsSecureReadable"
constexpr  Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable::operator ::Org::BouncyCastle::Cms::CmsSecureReadable*() noexcept {
return static_cast<::Org::BouncyCastle::Cms::CmsSecureReadable*>(static_cast<void*>(this));
}
constexpr void Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable::__set_parent(::Org::BouncyCastle::Cms::CmsAuthEnvelopedData*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Cms::CmsAuthEnvelopedData*, 0x10>(this, std::forward<::Org::BouncyCastle::Cms::CmsAuthEnvelopedData*>(value));
}
constexpr ::Org::BouncyCastle::Cms::CmsAuthEnvelopedData* Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable::__get_parent()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Cms::CmsAuthEnvelopedData*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::CmsAuthEnvelopedData*> Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable::__get_parent() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Cms::CmsAuthEnvelopedData*, 0x10>(this);
}
inline ::Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable* Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable::New_ctor(::Org::BouncyCastle::Cms::CmsAuthEnvelopedData*  parent)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable*>(parent));
}
inline void Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable::_ctor(::Org::BouncyCastle::Cms::CmsAuthEnvelopedData*  parent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsAuthEnvelopedData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, parent);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable::get_Algorithm()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable*>::get(),
                            "get_Algorithm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, false>(*this, ___internal_method);
}
inline ::System::Object* Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable::get_CryptoObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable*>::get(),
                            "get_CryptoObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::CmsReadable* Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable::GetReadable(::Org::BouncyCastle::Crypto::Parameters::KeyParameter*  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable*>::get(),
                            "GetReadable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::CmsReadable*, false>(*this, ___internal_method, key);
}
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthEnvelopedData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsAuthEnvelopedData::*)(::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::Org::BouncyCastle::Cms::CmsAuthEnvelopedData::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x11dc358;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthEnvelopedData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthEnvelopedData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsAuthEnvelopedData::*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Cms::CmsAuthEnvelopedData::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x11dc48c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthEnvelopedData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthEnvelopedData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsAuthEnvelopedData::*)(::Org::BouncyCastle::Asn1::Cms::ContentInfo*)>(&::Org::BouncyCastle::Cms::CmsAuthEnvelopedData::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x11dc37c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthEnvelopedData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::ContentInfo*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Cms::CmsAuthEnvelopedData::__set_recipientInfoStore(::Org::BouncyCastle::Cms::RecipientInformationStore*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Cms::RecipientInformationStore*, 0x10>(this, std::forward<::Org::BouncyCastle::Cms::RecipientInformationStore*>(value));
}
constexpr ::Org::BouncyCastle::Cms::RecipientInformationStore* Org::BouncyCastle::Cms::CmsAuthEnvelopedData::__get_recipientInfoStore()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Cms::RecipientInformationStore*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::RecipientInformationStore*> Org::BouncyCastle::Cms::CmsAuthEnvelopedData::__get_recipientInfoStore() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Cms::RecipientInformationStore*, 0x10>(this);
}
constexpr void Org::BouncyCastle::Cms::CmsAuthEnvelopedData::__set_contentInfo(::Org::BouncyCastle::Asn1::Cms::ContentInfo*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::Cms::ContentInfo*, 0x18>(this, std::forward<::Org::BouncyCastle::Asn1::Cms::ContentInfo*>(value));
}
constexpr ::Org::BouncyCastle::Asn1::Cms::ContentInfo* Org::BouncyCastle::Cms::CmsAuthEnvelopedData::__get_contentInfo()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::Cms::ContentInfo*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::ContentInfo*> Org::BouncyCastle::Cms::CmsAuthEnvelopedData::__get_contentInfo() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::Cms::ContentInfo*, 0x18>(this);
}
constexpr void Org::BouncyCastle::Cms::CmsAuthEnvelopedData::__set_originator(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*, 0x20>(this, std::forward<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*>(value));
}
constexpr ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* Org::BouncyCastle::Cms::CmsAuthEnvelopedData::__get_originator()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*> Org::BouncyCastle::Cms::CmsAuthEnvelopedData::__get_originator() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*, 0x20>(this);
}
constexpr void Org::BouncyCastle::Cms::CmsAuthEnvelopedData::__set_authEncAlg(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, 0x28>(this, std::forward<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(value));
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Cms::CmsAuthEnvelopedData::__get_authEncAlg()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> Org::BouncyCastle::Cms::CmsAuthEnvelopedData::__get_authEncAlg() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, 0x28>(this);
}
constexpr void Org::BouncyCastle::Cms::CmsAuthEnvelopedData::__set_authAttrs(::Org::BouncyCastle::Asn1::Asn1Set*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::Asn1Set*, 0x30>(this, std::forward<::Org::BouncyCastle::Asn1::Asn1Set*>(value));
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Set* Org::BouncyCastle::Cms::CmsAuthEnvelopedData::__get_authAttrs()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::Asn1Set*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> Org::BouncyCastle::Cms::CmsAuthEnvelopedData::__get_authAttrs() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::Asn1Set*, 0x30>(this);
}
constexpr void Org::BouncyCastle::Cms::CmsAuthEnvelopedData::__set_mac(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x38>(this, std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& Org::BouncyCastle::Cms::CmsAuthEnvelopedData::__get_mac()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x38>(this);
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& Org::BouncyCastle::Cms::CmsAuthEnvelopedData::__get_mac() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x38>(this);
}
constexpr void Org::BouncyCastle::Cms::CmsAuthEnvelopedData::__set_unauthAttrs(::Org::BouncyCastle::Asn1::Asn1Set*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::Asn1Set*, 0x40>(this, std::forward<::Org::BouncyCastle::Asn1::Asn1Set*>(value));
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Set* Org::BouncyCastle::Cms::CmsAuthEnvelopedData::__get_unauthAttrs()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::Asn1Set*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> Org::BouncyCastle::Cms::CmsAuthEnvelopedData::__get_unauthAttrs() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::Asn1Set*, 0x40>(this);
}
inline ::Org::BouncyCastle::Cms::CmsAuthEnvelopedData* Org::BouncyCastle::Cms::CmsAuthEnvelopedData::New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  authEnvData)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Cms::CmsAuthEnvelopedData*>(authEnvData));
}
inline void Org::BouncyCastle::Cms::CmsAuthEnvelopedData::_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  authEnvData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthEnvelopedData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, authEnvData);
}
inline ::Org::BouncyCastle::Cms::CmsAuthEnvelopedData* Org::BouncyCastle::Cms::CmsAuthEnvelopedData::New_ctor(::System::IO::Stream*  authEnvData)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Cms::CmsAuthEnvelopedData*>(authEnvData));
}
inline void Org::BouncyCastle::Cms::CmsAuthEnvelopedData::_ctor(::System::IO::Stream*  authEnvData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthEnvelopedData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, authEnvData);
}
inline ::Org::BouncyCastle::Cms::CmsAuthEnvelopedData* Org::BouncyCastle::Cms::CmsAuthEnvelopedData::New_ctor(::Org::BouncyCastle::Asn1::Cms::ContentInfo*  contentInfo)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Cms::CmsAuthEnvelopedData*>(contentInfo));
}
inline void Org::BouncyCastle::Cms::CmsAuthEnvelopedData::_ctor(::Org::BouncyCastle::Asn1::Cms::ContentInfo*  contentInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthEnvelopedData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::ContentInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, contentInfo);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
