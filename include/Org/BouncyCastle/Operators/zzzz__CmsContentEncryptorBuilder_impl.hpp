#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Operators/zzzz__CmsContentEncryptorBuilder_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__EnvelopedDataHelper_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherBuilderWithKey_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder.GetKeySize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(&::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder::GetKeySize)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0xf2d628;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder*>::get(),
                            "GetKeySize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder::*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(&::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xf2d7cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder::*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*, int32_t)>(&::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xf2d83c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder.Build
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::ICipherBuilderWithKey* (::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder::*)()>(&::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder::Build)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xf2d8c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder*>::get(),
                            "Build",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Operators::CmsContentEncryptorBuilder::setStaticF_KeySizes(::System::Collections::IDictionary*  value)  {
::cordl_internals::setStaticField<::System::Collections::IDictionary*, "KeySizes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder*>::get>(std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Operators::CmsContentEncryptorBuilder::getStaticF_KeySizes()  {
return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "KeySizes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder*>::get>();
}
constexpr void Org::BouncyCastle::Operators::CmsContentEncryptorBuilder::__set_encryptionOID(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, 0x10>(this, std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Operators::CmsContentEncryptorBuilder::__get_encryptionOID()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> Org::BouncyCastle::Operators::CmsContentEncryptorBuilder::__get_encryptionOID() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, 0x10>(this);
}
constexpr void Org::BouncyCastle::Operators::CmsContentEncryptorBuilder::__set_keySize(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& Org::BouncyCastle::Operators::CmsContentEncryptorBuilder::__get_keySize()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& Org::BouncyCastle::Operators::CmsContentEncryptorBuilder::__get_keySize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr void Org::BouncyCastle::Operators::CmsContentEncryptorBuilder::__set_helper(::Org::BouncyCastle::Cms::EnvelopedDataHelper*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Cms::EnvelopedDataHelper*, 0x20>(this, std::forward<::Org::BouncyCastle::Cms::EnvelopedDataHelper*>(value));
}
constexpr ::Org::BouncyCastle::Cms::EnvelopedDataHelper* Org::BouncyCastle::Operators::CmsContentEncryptorBuilder::__get_helper()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Cms::EnvelopedDataHelper*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::EnvelopedDataHelper*> Org::BouncyCastle::Operators::CmsContentEncryptorBuilder::__get_helper() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Cms::EnvelopedDataHelper*, 0x20>(this);
}
inline int32_t Org::BouncyCastle::Operators::CmsContentEncryptorBuilder::GetKeySize(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  oid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder*>::get(),
                            "GetKeySize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, oid);
}
inline ::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder* Org::BouncyCastle::Operators::CmsContentEncryptorBuilder::New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  encryptionOID)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder*>(encryptionOID));
}
inline void Org::BouncyCastle::Operators::CmsContentEncryptorBuilder::_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  encryptionOID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, encryptionOID);
}
inline ::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder* Org::BouncyCastle::Operators::CmsContentEncryptorBuilder::New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  encryptionOID, int32_t  keySize)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder*>(encryptionOID, keySize));
}
inline void Org::BouncyCastle::Operators::CmsContentEncryptorBuilder::_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  encryptionOID, int32_t  keySize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, encryptionOID, keySize);
}
inline ::Org::BouncyCastle::Crypto::ICipherBuilderWithKey* Org::BouncyCastle::Operators::CmsContentEncryptorBuilder::Build()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder*>::get(),
                            "Build",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ICipherBuilderWithKey*, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
