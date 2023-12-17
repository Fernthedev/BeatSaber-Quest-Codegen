#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__SignerInformation_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__SignerInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsProcessable_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsSignedHelper_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__Time_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Set_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__SignerID_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__DigestInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__AttributeTable_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__SignerInformationStore_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__IDigestCalculator_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::SignerInformation::*)(::Org::BouncyCastle::Asn1::Cms::SignerInfo*, ::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Org::BouncyCastle::Cms::CmsProcessable*, ::Org::BouncyCastle::Cms::IDigestCalculator*)>(&::Org::BouncyCastle::Cms::SignerInformation::_ctor)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x11e5fb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::SignerInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsProcessable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::IDigestCalculator*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::SignerInformation::*)(::Org::BouncyCastle::Cms::SignerInformation*)>(&::Org::BouncyCastle::Cms::SignerInformation::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1208fe4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::SignerInformation*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.get_IsCounterSignature
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Cms::SignerInformation::*)()>(&::Org::BouncyCastle::Cms::SignerInformation::get_IsCounterSignature)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1209080;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                            "get_IsCounterSignature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.get_ContentType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::DerObjectIdentifier* (::Org::BouncyCastle::Cms::SignerInformation::*)()>(&::Org::BouncyCastle::Cms::SignerInformation::get_ContentType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1209088;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                            "get_ContentType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.get_SignerID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Cms::SignerID* (::Org::BouncyCastle::Cms::SignerInformation::*)()>(&::Org::BouncyCastle::Cms::SignerInformation::get_SignerID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1209090;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                            "get_SignerID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.get_Version
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Cms::SignerInformation::*)()>(&::Org::BouncyCastle::Cms::SignerInformation::get_Version)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1209098;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                            "get_Version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.get_DigestAlgorithmID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (::Org::BouncyCastle::Cms::SignerInformation::*)()>(&::Org::BouncyCastle::Cms::SignerInformation::get_DigestAlgorithmID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12090bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                            "get_DigestAlgorithmID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.get_DigestAlgOid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::Cms::SignerInformation::*)()>(&::Org::BouncyCastle::Cms::SignerInformation::get_DigestAlgOid)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x12090c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                            "get_DigestAlgOid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.get_DigestAlgParams
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Cms::SignerInformation::*)()>(&::Org::BouncyCastle::Cms::SignerInformation::get_DigestAlgParams)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x12090f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                            "get_DigestAlgParams",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.GetContentDigest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (::Org::BouncyCastle::Cms::SignerInformation::*)()>(&::Org::BouncyCastle::Cms::SignerInformation::GetContentDigest)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1209128;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                            "GetContentDigest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.get_EncryptionAlgorithmID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (::Org::BouncyCastle::Cms::SignerInformation::*)()>(&::Org::BouncyCastle::Cms::SignerInformation::get_EncryptionAlgorithmID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12091e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                            "get_EncryptionAlgorithmID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.get_EncryptionAlgOid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::Cms::SignerInformation::*)()>(&::Org::BouncyCastle::Cms::SignerInformation::get_EncryptionAlgOid)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x12091f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                            "get_EncryptionAlgOid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.get_EncryptionAlgParams
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Cms::SignerInformation::*)()>(&::Org::BouncyCastle::Cms::SignerInformation::get_EncryptionAlgParams)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x120921c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                            "get_EncryptionAlgParams",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.get_SignedAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Cms::AttributeTable* (::Org::BouncyCastle::Cms::SignerInformation::*)()>(&::Org::BouncyCastle::Cms::SignerInformation::get_SignedAttributes)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x1209254;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                            "get_SignedAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.get_UnsignedAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Cms::AttributeTable* (::Org::BouncyCastle::Cms::SignerInformation::*)()>(&::Org::BouncyCastle::Cms::SignerInformation::get_UnsignedAttributes)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x12092cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                            "get_UnsignedAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.GetSignature
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (::Org::BouncyCastle::Cms::SignerInformation::*)()>(&::Org::BouncyCastle::Cms::SignerInformation::GetSignature)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x11ed020;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                            "GetSignature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.GetCounterSignatures
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Cms::SignerInformationStore* (::Org::BouncyCastle::Cms::SignerInformation::*)()>(&::Org::BouncyCastle::Cms::SignerInformation::GetCounterSignatures)> {
  constexpr static std::size_t size = 0x88c;
  constexpr static std::size_t addrs = 0x1209344;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                            "GetCounterSignatures",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.GetEncodedSignedAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (::Org::BouncyCastle::Cms::SignerInformation::*)()>(&::Org::BouncyCastle::Cms::SignerInformation::GetEncodedSignedAttributes)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x1209bd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                            "GetEncodedSignedAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.DoVerify
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Cms::SignerInformation::*)(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(&::Org::BouncyCastle::Cms::SignerInformation::DoVerify)> {
  constexpr static std::size_t size = 0x12f4;
  constexpr static std::size_t addrs = 0x1209c2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                            "DoVerify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.IsNull
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Cms::SignerInformation::*)(::Org::BouncyCastle::Asn1::Asn1Encodable*)>(&::Org::BouncyCastle::Cms::SignerInformation::IsNull)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x120b7c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                            "IsNull",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Encodable*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.DerDecode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::DigestInfo* (::Org::BouncyCastle::Cms::SignerInformation::*)(::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::Org::BouncyCastle::Cms::SignerInformation::DerDecode)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x120b848;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                            "DerDecode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.VerifyDigest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Cms::SignerInformation::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::Org::BouncyCastle::Cms::SignerInformation::VerifyDigest)> {
  constexpr static std::size_t size = 0x6a4;
  constexpr static std::size_t addrs = 0x120b120;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                            "VerifyDigest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.Verify
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Cms::SignerInformation::*)(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(&::Org::BouncyCastle::Cms::SignerInformation::Verify)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x120b940;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                            "Verify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.Verify
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Cms::SignerInformation::*)(::Org::BouncyCastle::X509::X509Certificate*)>(&::Org::BouncyCastle::Cms::SignerInformation::Verify)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x120bb18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                            "Verify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.ToSignerInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Cms::SignerInfo* (::Org::BouncyCastle::Cms::SignerInformation::*)()>(&::Org::BouncyCastle::Cms::SignerInformation::ToSignerInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x120bb88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                            "ToSignerInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.GetSingleValuedSignedAttribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Cms::SignerInformation::*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::StringW)>(&::Org::BouncyCastle::Cms::SignerInformation::GetSingleValuedSignedAttribute)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x120af20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                            "GetSingleValuedSignedAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.GetSigningTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Cms::Time* (::Org::BouncyCastle::Cms::SignerInformation::*)()>(&::Org::BouncyCastle::Cms::SignerInformation::GetSigningTime)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x120b9d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                            "GetSigningTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.ReplaceUnsignedAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Cms::SignerInformation* (*)(::Org::BouncyCastle::Cms::SignerInformation*, ::Org::BouncyCastle::Asn1::Cms::AttributeTable*)>(&::Org::BouncyCastle::Cms::SignerInformation::ReplaceUnsignedAttributes)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x120bb90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                            "ReplaceUnsignedAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::SignerInformation*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.AddCounterSigners
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Cms::SignerInformation* (*)(::Org::BouncyCastle::Cms::SignerInformation*, ::Org::BouncyCastle::Cms::SignerInformationStore*)>(&::Org::BouncyCastle::Cms::SignerInformation::AddCounterSigners)> {
  constexpr static std::size_t size = 0x524;
  constexpr static std::size_t addrs = 0x120bcc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                            "AddCounterSigners",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::SignerInformation*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::SignerInformationStore*>::get()}
                        )));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Cms::SignerInformation::setStaticF_Helper(::Org::BouncyCastle::Cms::CmsSignedHelper*  value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Cms::CmsSignedHelper*, "Helper", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get>(std::forward<::Org::BouncyCastle::Cms::CmsSignedHelper*>(value));
}
inline ::Org::BouncyCastle::Cms::CmsSignedHelper* Org::BouncyCastle::Cms::SignerInformation::getStaticF_Helper()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Cms::CmsSignedHelper*, "Helper", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get>();
}
constexpr void Org::BouncyCastle::Cms::SignerInformation::__set_sid(::Org::BouncyCastle::Cms::SignerID*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Cms::SignerID*, 0x10>(this, std::forward<::Org::BouncyCastle::Cms::SignerID*>(value));
}
constexpr ::Org::BouncyCastle::Cms::SignerID* Org::BouncyCastle::Cms::SignerInformation::__get_sid()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Cms::SignerID*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::SignerID*> Org::BouncyCastle::Cms::SignerInformation::__get_sid() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Cms::SignerID*, 0x10>(this);
}
constexpr void Org::BouncyCastle::Cms::SignerInformation::__set_info(::Org::BouncyCastle::Asn1::Cms::SignerInfo*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::Cms::SignerInfo*, 0x18>(this, std::forward<::Org::BouncyCastle::Asn1::Cms::SignerInfo*>(value));
}
constexpr ::Org::BouncyCastle::Asn1::Cms::SignerInfo* Org::BouncyCastle::Cms::SignerInformation::__get_info()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::Cms::SignerInfo*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::SignerInfo*> Org::BouncyCastle::Cms::SignerInformation::__get_info() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::Cms::SignerInfo*, 0x18>(this);
}
constexpr void Org::BouncyCastle::Cms::SignerInformation::__set_digestAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, 0x20>(this, std::forward<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(value));
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Cms::SignerInformation::__get_digestAlgorithm()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> Org::BouncyCastle::Cms::SignerInformation::__get_digestAlgorithm() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, 0x20>(this);
}
constexpr void Org::BouncyCastle::Cms::SignerInformation::__set_encryptionAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, 0x28>(this, std::forward<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(value));
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Cms::SignerInformation::__get_encryptionAlgorithm()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> Org::BouncyCastle::Cms::SignerInformation::__get_encryptionAlgorithm() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, 0x28>(this);
}
constexpr void Org::BouncyCastle::Cms::SignerInformation::__set_signedAttributeSet(::Org::BouncyCastle::Asn1::Asn1Set*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::Asn1Set*, 0x30>(this, std::forward<::Org::BouncyCastle::Asn1::Asn1Set*>(value));
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Set* Org::BouncyCastle::Cms::SignerInformation::__get_signedAttributeSet()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::Asn1Set*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> Org::BouncyCastle::Cms::SignerInformation::__get_signedAttributeSet() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::Asn1Set*, 0x30>(this);
}
constexpr void Org::BouncyCastle::Cms::SignerInformation::__set_unsignedAttributeSet(::Org::BouncyCastle::Asn1::Asn1Set*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::Asn1Set*, 0x38>(this, std::forward<::Org::BouncyCastle::Asn1::Asn1Set*>(value));
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Set* Org::BouncyCastle::Cms::SignerInformation::__get_unsignedAttributeSet()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::Asn1Set*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> Org::BouncyCastle::Cms::SignerInformation::__get_unsignedAttributeSet() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::Asn1Set*, 0x38>(this);
}
constexpr void Org::BouncyCastle::Cms::SignerInformation::__set_content(::Org::BouncyCastle::Cms::CmsProcessable*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Cms::CmsProcessable*, 0x40>(this, std::forward<::Org::BouncyCastle::Cms::CmsProcessable*>(value));
}
constexpr ::Org::BouncyCastle::Cms::CmsProcessable* Org::BouncyCastle::Cms::SignerInformation::__get_content()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Cms::CmsProcessable*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::CmsProcessable*> Org::BouncyCastle::Cms::SignerInformation::__get_content() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Cms::CmsProcessable*, 0x40>(this);
}
constexpr void Org::BouncyCastle::Cms::SignerInformation::__set_signature(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x48>(this, std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& Org::BouncyCastle::Cms::SignerInformation::__get_signature()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x48>(this);
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& Org::BouncyCastle::Cms::SignerInformation::__get_signature() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x48>(this);
}
constexpr void Org::BouncyCastle::Cms::SignerInformation::__set_contentType(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, 0x50>(this, std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Cms::SignerInformation::__get_contentType()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> Org::BouncyCastle::Cms::SignerInformation::__get_contentType() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, 0x50>(this);
}
constexpr void Org::BouncyCastle::Cms::SignerInformation::__set_digestCalculator(::Org::BouncyCastle::Cms::IDigestCalculator*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Cms::IDigestCalculator*, 0x58>(this, std::forward<::Org::BouncyCastle::Cms::IDigestCalculator*>(value));
}
constexpr ::Org::BouncyCastle::Cms::IDigestCalculator* Org::BouncyCastle::Cms::SignerInformation::__get_digestCalculator()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Cms::IDigestCalculator*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::IDigestCalculator*> Org::BouncyCastle::Cms::SignerInformation::__get_digestCalculator() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Cms::IDigestCalculator*, 0x58>(this);
}
constexpr void Org::BouncyCastle::Cms::SignerInformation::__set_resultDigest(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x60>(this, std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& Org::BouncyCastle::Cms::SignerInformation::__get_resultDigest()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x60>(this);
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& Org::BouncyCastle::Cms::SignerInformation::__get_resultDigest() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x60>(this);
}
constexpr void Org::BouncyCastle::Cms::SignerInformation::__set_signedAttributeTable(::Org::BouncyCastle::Asn1::Cms::AttributeTable*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::Cms::AttributeTable*, 0x68>(this, std::forward<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>(value));
}
constexpr ::Org::BouncyCastle::Asn1::Cms::AttributeTable* Org::BouncyCastle::Cms::SignerInformation::__get_signedAttributeTable()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::Cms::AttributeTable*, 0x68>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::AttributeTable*> Org::BouncyCastle::Cms::SignerInformation::__get_signedAttributeTable() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::Cms::AttributeTable*, 0x68>(this);
}
constexpr void Org::BouncyCastle::Cms::SignerInformation::__set_unsignedAttributeTable(::Org::BouncyCastle::Asn1::Cms::AttributeTable*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::Cms::AttributeTable*, 0x70>(this, std::forward<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>(value));
}
constexpr ::Org::BouncyCastle::Asn1::Cms::AttributeTable* Org::BouncyCastle::Cms::SignerInformation::__get_unsignedAttributeTable()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::Cms::AttributeTable*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::AttributeTable*> Org::BouncyCastle::Cms::SignerInformation::__get_unsignedAttributeTable() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::Cms::AttributeTable*, 0x70>(this);
}
constexpr void Org::BouncyCastle::Cms::SignerInformation::__set_isCounterSignature(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x78>(this, std::forward<bool>(value));
}
constexpr bool& Org::BouncyCastle::Cms::SignerInformation::__get_isCounterSignature()  {
return ::cordl_internals::getInstanceField<bool, 0x78>(this);
}
constexpr bool const& Org::BouncyCastle::Cms::SignerInformation::__get_isCounterSignature() const {
return ::cordl_internals::getInstanceField<bool, 0x78>(this);
}
inline ::Org::BouncyCastle::Cms::SignerInformation* Org::BouncyCastle::Cms::SignerInformation::New_ctor(::Org::BouncyCastle::Asn1::Cms::SignerInfo*  info, ::Org::BouncyCastle::Asn1::DerObjectIdentifier*  contentType, ::Org::BouncyCastle::Cms::CmsProcessable*  content, ::Org::BouncyCastle::Cms::IDigestCalculator*  digestCalculator)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Cms::SignerInformation*>(info, contentType, content, digestCalculator));
}
inline void Org::BouncyCastle::Cms::SignerInformation::_ctor(::Org::BouncyCastle::Asn1::Cms::SignerInfo*  info, ::Org::BouncyCastle::Asn1::DerObjectIdentifier*  contentType, ::Org::BouncyCastle::Cms::CmsProcessable*  content, ::Org::BouncyCastle::Cms::IDigestCalculator*  digestCalculator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::SignerInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsProcessable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::IDigestCalculator*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, info, contentType, content, digestCalculator);
}
inline ::Org::BouncyCastle::Cms::SignerInformation* Org::BouncyCastle::Cms::SignerInformation::New_ctor(::Org::BouncyCastle::Cms::SignerInformation*  baseInfo)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Cms::SignerInformation*>(baseInfo));
}
inline void Org::BouncyCastle::Cms::SignerInformation::_ctor(::Org::BouncyCastle::Cms::SignerInformation*  baseInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::SignerInformation*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, baseInfo);
}
inline bool Org::BouncyCastle::Cms::SignerInformation::get_IsCounterSignature()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                            "get_IsCounterSignature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Cms::SignerInformation::get_ContentType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                            "get_ContentType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::SignerID* Org::BouncyCastle::Cms::SignerInformation::get_SignerID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                            "get_SignerID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::SignerID*, false>(*this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Cms::SignerInformation::get_Version()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                            "get_Version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Cms::SignerInformation::get_DigestAlgorithmID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                            "get_DigestAlgorithmID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, false>(*this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Cms::SignerInformation::get_DigestAlgOid()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                            "get_DigestAlgOid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Cms::SignerInformation::get_DigestAlgParams()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                            "get_DigestAlgParams",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*, false>(*this, ___internal_method);
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Org::BouncyCastle::Cms::SignerInformation::GetContentDigest()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                            "GetContentDigest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Cms::SignerInformation::get_EncryptionAlgorithmID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                            "get_EncryptionAlgorithmID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, false>(*this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Cms::SignerInformation::get_EncryptionAlgOid()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                            "get_EncryptionAlgOid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Cms::SignerInformation::get_EncryptionAlgParams()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                            "get_EncryptionAlgParams",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cms::AttributeTable* Org::BouncyCastle::Cms::SignerInformation::get_SignedAttributes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                            "get_SignedAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::AttributeTable*, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cms::AttributeTable* Org::BouncyCastle::Cms::SignerInformation::get_UnsignedAttributes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                            "get_UnsignedAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::AttributeTable*, false>(*this, ___internal_method);
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Org::BouncyCastle::Cms::SignerInformation::GetSignature()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                            "GetSignature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::SignerInformationStore* Org::BouncyCastle::Cms::SignerInformation::GetCounterSignatures()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                            "GetCounterSignatures",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::SignerInformationStore*, false>(*this, ___internal_method);
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Org::BouncyCastle::Cms::SignerInformation::GetEncodedSignedAttributes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                            "GetEncodedSignedAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(*this, ___internal_method);
}
inline bool Org::BouncyCastle::Cms::SignerInformation::DoVerify(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                            "DoVerify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, key);
}
inline bool Org::BouncyCastle::Cms::SignerInformation::IsNull(::Org::BouncyCastle::Asn1::Asn1Encodable*  o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                            "IsNull",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Encodable*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, o);
}
inline ::Org::BouncyCastle::Asn1::X509::DigestInfo* Org::BouncyCastle::Cms::SignerInformation::DerDecode(::ArrayW<uint8_t,::Array<uint8_t>*>  encoding)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                            "DerDecode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::DigestInfo*, false>(*this, ___internal_method, encoding);
}
inline bool Org::BouncyCastle::Cms::SignerInformation::VerifyDigest(::ArrayW<uint8_t,::Array<uint8_t>*>  digest, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  key, ::ArrayW<uint8_t,::Array<uint8_t>*>  signature)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                            "VerifyDigest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, digest, key, signature);
}
inline bool Org::BouncyCastle::Cms::SignerInformation::Verify(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  pubKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                            "Verify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, pubKey);
}
inline bool Org::BouncyCastle::Cms::SignerInformation::Verify(::Org::BouncyCastle::X509::X509Certificate*  cert)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                            "Verify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, cert);
}
inline ::Org::BouncyCastle::Asn1::Cms::SignerInfo* Org::BouncyCastle::Cms::SignerInformation::ToSignerInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                            "ToSignerInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::SignerInfo*, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Cms::SignerInformation::GetSingleValuedSignedAttribute(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  attrOID, ::StringW  printableName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                            "GetSingleValuedSignedAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*, false>(*this, ___internal_method, attrOID, printableName);
}
inline ::Org::BouncyCastle::Asn1::Cms::Time* Org::BouncyCastle::Cms::SignerInformation::GetSigningTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                            "GetSigningTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::Time*, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::SignerInformation* Org::BouncyCastle::Cms::SignerInformation::ReplaceUnsignedAttributes(::Org::BouncyCastle::Cms::SignerInformation*  signerInformation, ::Org::BouncyCastle::Asn1::Cms::AttributeTable*  unsignedAttributes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                            "ReplaceUnsignedAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::SignerInformation*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::SignerInformation*, false>(nullptr, ___internal_method, signerInformation, unsignedAttributes);
}
inline ::Org::BouncyCastle::Cms::SignerInformation* Org::BouncyCastle::Cms::SignerInformation::AddCounterSigners(::Org::BouncyCastle::Cms::SignerInformation*  signerInformation, ::Org::BouncyCastle::Cms::SignerInformationStore*  counterSigners)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                            "AddCounterSigners",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::SignerInformation*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::SignerInformationStore*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::SignerInformation*, false>(nullptr, ___internal_method, signerInformation, counterSigners);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
