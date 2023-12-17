#pragma once
#include "Org/BouncyCastle/Cms/zzzz__CmsContentInfoParser_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsSignedDataParser_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsSignedHelper_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__SignerInformationStore_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Set_def.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__IX509Store_def.hpp"
#include "Org/BouncyCastle/Utilities/Collections/zzzz__ISet_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsTypedStream_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__SignedDataParser_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1SetParser_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataParser._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedDataParser::*)(::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::Org::BouncyCastle::Cms::CmsSignedDataParser::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x11ed8c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataParser*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataParser._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedDataParser::*)(::Org::BouncyCastle::Cms::CmsTypedStream*, ::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::Org::BouncyCastle::Cms::CmsSignedDataParser::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x11ed950;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataParser*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsTypedStream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataParser._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedDataParser::*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Cms::CmsSignedDataParser::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x11ed944;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataParser*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataParser._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedDataParser::*)(::Org::BouncyCastle::Cms::CmsTypedStream*, ::System::IO::Stream*)>(&::Org::BouncyCastle::Cms::CmsSignedDataParser::_ctor)> {
  constexpr static std::size_t size = 0x784;
  constexpr static std::size_t addrs = 0x11ed9d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataParser*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsTypedStream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataParser.get_Version
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Cms::CmsSignedDataParser::*)()>(&::Org::BouncyCastle::Cms::CmsSignedDataParser::get_Version)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x11ee1c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataParser*>::get(),
                            "get_Version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataParser.get_DigestOids
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet* (::Org::BouncyCastle::Cms::CmsSignedDataParser::*)()>(&::Org::BouncyCastle::Cms::CmsSignedDataParser::get_DigestOids)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x11ee1e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataParser*>::get(),
                            "get_DigestOids",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataParser.GetSignerInfos
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Cms::SignerInformationStore* (::Org::BouncyCastle::Cms::CmsSignedDataParser::*)()>(&::Org::BouncyCastle::Cms::CmsSignedDataParser::GetSignerInfos)> {
  constexpr static std::size_t size = 0x9b8;
  constexpr static std::size_t addrs = 0x11ee250;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataParser*>::get(),
                            "GetSignerInfos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataParser.GetAttributeCertificates
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::X509::Store::IX509Store* (::Org::BouncyCastle::Cms::CmsSignedDataParser::*)(::StringW)>(&::Org::BouncyCastle::Cms::CmsSignedDataParser::GetAttributeCertificates)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x11eed80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataParser*>::get(),
                            "GetAttributeCertificates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataParser.GetCertificates
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::X509::Store::IX509Store* (::Org::BouncyCastle::Cms::CmsSignedDataParser::*)(::StringW)>(&::Org::BouncyCastle::Cms::CmsSignedDataParser::GetCertificates)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x11eee08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataParser*>::get(),
                            "GetCertificates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataParser.GetCrls
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::X509::Store::IX509Store* (::Org::BouncyCastle::Cms::CmsSignedDataParser::*)(::StringW)>(&::Org::BouncyCastle::Cms::CmsSignedDataParser::GetCrls)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x11eee90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataParser*>::get(),
                            "GetCrls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataParser.PopulateCertCrlSets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedDataParser::*)()>(&::Org::BouncyCastle::Cms::CmsSignedDataParser::PopulateCertCrlSets)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x11eec08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataParser*>::get(),
                            "PopulateCertCrlSets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataParser.get_SignedContentType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::DerObjectIdentifier* (::Org::BouncyCastle::Cms::CmsSignedDataParser::*)()>(&::Org::BouncyCastle::Cms::CmsSignedDataParser::get_SignedContentType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11eefc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataParser*>::get(),
                            "get_SignedContentType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataParser.GetSignedContent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Cms::CmsTypedStream* (::Org::BouncyCastle::Cms::CmsSignedDataParser::*)()>(&::Org::BouncyCastle::Cms::CmsSignedDataParser::GetSignedContent)> {
  constexpr static std::size_t size = 0x464;
  constexpr static std::size_t addrs = 0x11eefd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataParser*>::get(),
                            "GetSignedContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataParser.ReplaceSigners
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (*)(::System::IO::Stream*, ::Org::BouncyCastle::Cms::SignerInformationStore*, ::System::IO::Stream*)>(&::Org::BouncyCastle::Cms::CmsSignedDataParser::ReplaceSigners)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x11ef434;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataParser*>::get(),
                            "ReplaceSigners",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::SignerInformationStore*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataParser.ReplaceCertificatesAndCrls
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (*)(::System::IO::Stream*, ::Org::BouncyCastle::X509::Store::IX509Store*, ::Org::BouncyCastle::X509::Store::IX509Store*, ::Org::BouncyCastle::X509::Store::IX509Store*, ::System::IO::Stream*)>(&::Org::BouncyCastle::Cms::CmsSignedDataParser::ReplaceCertificatesAndCrls)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x11ef6ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataParser*>::get(),
                            "ReplaceCertificatesAndCrls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::Store::IX509Store*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::Store::IX509Store*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::Store::IX509Store*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataParser.GetAsn1Set
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Set* (*)(::Org::BouncyCastle::Asn1::Asn1SetParser*)>(&::Org::BouncyCastle::Cms::CmsSignedDataParser::GetAsn1Set)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x11eef18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataParser*>::get(),
                            "GetAsn1Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1SetParser*>::get()}
                        )));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Cms::CmsSignedDataParser::setStaticF_Helper(::Org::BouncyCastle::Cms::CmsSignedHelper*  value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Cms::CmsSignedHelper*, "Helper", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataParser*>::get>(std::forward<::Org::BouncyCastle::Cms::CmsSignedHelper*>(value));
}
inline ::Org::BouncyCastle::Cms::CmsSignedHelper* Org::BouncyCastle::Cms::CmsSignedDataParser::getStaticF_Helper()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Cms::CmsSignedHelper*, "Helper", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataParser*>::get>();
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataParser::__set__signedData(::Org::BouncyCastle::Asn1::Cms::SignedDataParser*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::Cms::SignedDataParser*, 0x20>(this, std::forward<::Org::BouncyCastle::Asn1::Cms::SignedDataParser*>(value));
}
constexpr ::Org::BouncyCastle::Asn1::Cms::SignedDataParser* Org::BouncyCastle::Cms::CmsSignedDataParser::__get__signedData()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::Cms::SignedDataParser*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::SignedDataParser*> Org::BouncyCastle::Cms::CmsSignedDataParser::__get__signedData() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::Cms::SignedDataParser*, 0x20>(this);
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataParser::__set__signedContentType(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, 0x28>(this, std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Cms::CmsSignedDataParser::__get__signedContentType()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> Org::BouncyCastle::Cms::CmsSignedDataParser::__get__signedContentType() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, 0x28>(this);
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataParser::__set__signedContent(::Org::BouncyCastle::Cms::CmsTypedStream*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Cms::CmsTypedStream*, 0x30>(this, std::forward<::Org::BouncyCastle::Cms::CmsTypedStream*>(value));
}
constexpr ::Org::BouncyCastle::Cms::CmsTypedStream* Org::BouncyCastle::Cms::CmsSignedDataParser::__get__signedContent()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Cms::CmsTypedStream*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::CmsTypedStream*> Org::BouncyCastle::Cms::CmsSignedDataParser::__get__signedContent() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Cms::CmsTypedStream*, 0x30>(this);
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataParser::__set__digests(::System::Collections::IDictionary*  value)  {
::cordl_internals::setInstanceField<::System::Collections::IDictionary*, 0x38>(this, std::forward<::System::Collections::IDictionary*>(value));
}
constexpr ::System::Collections::IDictionary* Org::BouncyCastle::Cms::CmsSignedDataParser::__get__digests()  {
return ::cordl_internals::getInstanceField<::System::Collections::IDictionary*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> Org::BouncyCastle::Cms::CmsSignedDataParser::__get__digests() const {
return ::cordl_internals::getInstanceField<::System::Collections::IDictionary*, 0x38>(this);
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataParser::__set__digestOids(::Org::BouncyCastle::Utilities::Collections::ISet*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Utilities::Collections::ISet*, 0x40>(this, std::forward<::Org::BouncyCastle::Utilities::Collections::ISet*>(value));
}
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::Cms::CmsSignedDataParser::__get__digestOids()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Utilities::Collections::ISet*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Collections::ISet*> Org::BouncyCastle::Cms::CmsSignedDataParser::__get__digestOids() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Utilities::Collections::ISet*, 0x40>(this);
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataParser::__set__signerInfoStore(::Org::BouncyCastle::Cms::SignerInformationStore*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Cms::SignerInformationStore*, 0x48>(this, std::forward<::Org::BouncyCastle::Cms::SignerInformationStore*>(value));
}
constexpr ::Org::BouncyCastle::Cms::SignerInformationStore* Org::BouncyCastle::Cms::CmsSignedDataParser::__get__signerInfoStore()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Cms::SignerInformationStore*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::SignerInformationStore*> Org::BouncyCastle::Cms::CmsSignedDataParser::__get__signerInfoStore() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Cms::SignerInformationStore*, 0x48>(this);
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataParser::__set__certSet(::Org::BouncyCastle::Asn1::Asn1Set*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::Asn1Set*, 0x50>(this, std::forward<::Org::BouncyCastle::Asn1::Asn1Set*>(value));
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Set* Org::BouncyCastle::Cms::CmsSignedDataParser::__get__certSet()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::Asn1Set*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> Org::BouncyCastle::Cms::CmsSignedDataParser::__get__certSet() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::Asn1Set*, 0x50>(this);
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataParser::__set__crlSet(::Org::BouncyCastle::Asn1::Asn1Set*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::Asn1Set*, 0x58>(this, std::forward<::Org::BouncyCastle::Asn1::Asn1Set*>(value));
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Set* Org::BouncyCastle::Cms::CmsSignedDataParser::__get__crlSet()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::Asn1Set*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> Org::BouncyCastle::Cms::CmsSignedDataParser::__get__crlSet() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::Asn1Set*, 0x58>(this);
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataParser::__set__isCertCrlParsed(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x60>(this, std::forward<bool>(value));
}
constexpr bool& Org::BouncyCastle::Cms::CmsSignedDataParser::__get__isCertCrlParsed()  {
return ::cordl_internals::getInstanceField<bool, 0x60>(this);
}
constexpr bool const& Org::BouncyCastle::Cms::CmsSignedDataParser::__get__isCertCrlParsed() const {
return ::cordl_internals::getInstanceField<bool, 0x60>(this);
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataParser::__set__attributeStore(::Org::BouncyCastle::X509::Store::IX509Store*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::X509::Store::IX509Store*, 0x68>(this, std::forward<::Org::BouncyCastle::X509::Store::IX509Store*>(value));
}
constexpr ::Org::BouncyCastle::X509::Store::IX509Store* Org::BouncyCastle::Cms::CmsSignedDataParser::__get__attributeStore()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::X509::Store::IX509Store*, 0x68>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::X509::Store::IX509Store*> Org::BouncyCastle::Cms::CmsSignedDataParser::__get__attributeStore() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::X509::Store::IX509Store*, 0x68>(this);
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataParser::__set__certificateStore(::Org::BouncyCastle::X509::Store::IX509Store*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::X509::Store::IX509Store*, 0x70>(this, std::forward<::Org::BouncyCastle::X509::Store::IX509Store*>(value));
}
constexpr ::Org::BouncyCastle::X509::Store::IX509Store* Org::BouncyCastle::Cms::CmsSignedDataParser::__get__certificateStore()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::X509::Store::IX509Store*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::X509::Store::IX509Store*> Org::BouncyCastle::Cms::CmsSignedDataParser::__get__certificateStore() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::X509::Store::IX509Store*, 0x70>(this);
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataParser::__set__crlStore(::Org::BouncyCastle::X509::Store::IX509Store*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::X509::Store::IX509Store*, 0x78>(this, std::forward<::Org::BouncyCastle::X509::Store::IX509Store*>(value));
}
constexpr ::Org::BouncyCastle::X509::Store::IX509Store* Org::BouncyCastle::Cms::CmsSignedDataParser::__get__crlStore()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::X509::Store::IX509Store*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::X509::Store::IX509Store*> Org::BouncyCastle::Cms::CmsSignedDataParser::__get__crlStore() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::X509::Store::IX509Store*, 0x78>(this);
}
inline ::Org::BouncyCastle::Cms::CmsSignedDataParser* Org::BouncyCastle::Cms::CmsSignedDataParser::New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  sigBlock)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Cms::CmsSignedDataParser*>(sigBlock));
}
inline void Org::BouncyCastle::Cms::CmsSignedDataParser::_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  sigBlock)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataParser*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, sigBlock);
}
inline ::Org::BouncyCastle::Cms::CmsSignedDataParser* Org::BouncyCastle::Cms::CmsSignedDataParser::New_ctor(::Org::BouncyCastle::Cms::CmsTypedStream*  signedContent, ::ArrayW<uint8_t,::Array<uint8_t>*>  sigBlock)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Cms::CmsSignedDataParser*>(signedContent, sigBlock));
}
inline void Org::BouncyCastle::Cms::CmsSignedDataParser::_ctor(::Org::BouncyCastle::Cms::CmsTypedStream*  signedContent, ::ArrayW<uint8_t,::Array<uint8_t>*>  sigBlock)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataParser*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsTypedStream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, signedContent, sigBlock);
}
inline ::Org::BouncyCastle::Cms::CmsSignedDataParser* Org::BouncyCastle::Cms::CmsSignedDataParser::New_ctor(::System::IO::Stream*  sigData)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Cms::CmsSignedDataParser*>(sigData));
}
inline void Org::BouncyCastle::Cms::CmsSignedDataParser::_ctor(::System::IO::Stream*  sigData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataParser*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, sigData);
}
inline ::Org::BouncyCastle::Cms::CmsSignedDataParser* Org::BouncyCastle::Cms::CmsSignedDataParser::New_ctor(::Org::BouncyCastle::Cms::CmsTypedStream*  signedContent, ::System::IO::Stream*  sigData)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Cms::CmsSignedDataParser*>(signedContent, sigData));
}
inline void Org::BouncyCastle::Cms::CmsSignedDataParser::_ctor(::Org::BouncyCastle::Cms::CmsTypedStream*  signedContent, ::System::IO::Stream*  sigData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataParser*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsTypedStream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, signedContent, sigData);
}
inline int32_t Org::BouncyCastle::Cms::CmsSignedDataParser::get_Version()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataParser*>::get(),
                            "get_Version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::Cms::CmsSignedDataParser::get_DigestOids()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataParser*>::get(),
                            "get_DigestOids",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet*, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::SignerInformationStore* Org::BouncyCastle::Cms::CmsSignedDataParser::GetSignerInfos()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataParser*>::get(),
                            "GetSignerInfos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::SignerInformationStore*, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::X509::Store::IX509Store* Org::BouncyCastle::Cms::CmsSignedDataParser::GetAttributeCertificates(::StringW  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataParser*>::get(),
                            "GetAttributeCertificates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::Store::IX509Store*, false>(*this, ___internal_method, type);
}
inline ::Org::BouncyCastle::X509::Store::IX509Store* Org::BouncyCastle::Cms::CmsSignedDataParser::GetCertificates(::StringW  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataParser*>::get(),
                            "GetCertificates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::Store::IX509Store*, false>(*this, ___internal_method, type);
}
inline ::Org::BouncyCastle::X509::Store::IX509Store* Org::BouncyCastle::Cms::CmsSignedDataParser::GetCrls(::StringW  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataParser*>::get(),
                            "GetCrls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::Store::IX509Store*, false>(*this, ___internal_method, type);
}
inline void Org::BouncyCastle::Cms::CmsSignedDataParser::PopulateCertCrlSets()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataParser*>::get(),
                            "PopulateCertCrlSets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Cms::CmsSignedDataParser::get_SignedContentType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataParser*>::get(),
                            "get_SignedContentType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::CmsTypedStream* Org::BouncyCastle::Cms::CmsSignedDataParser::GetSignedContent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataParser*>::get(),
                            "GetSignedContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::CmsTypedStream*, false>(*this, ___internal_method);
}
inline ::System::IO::Stream* Org::BouncyCastle::Cms::CmsSignedDataParser::ReplaceSigners(::System::IO::Stream*  original, ::Org::BouncyCastle::Cms::SignerInformationStore*  signerInformationStore, ::System::IO::Stream*  outStr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataParser*>::get(),
                            "ReplaceSigners",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::SignerInformationStore*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(nullptr, ___internal_method, original, signerInformationStore, outStr);
}
inline ::System::IO::Stream* Org::BouncyCastle::Cms::CmsSignedDataParser::ReplaceCertificatesAndCrls(::System::IO::Stream*  original, ::Org::BouncyCastle::X509::Store::IX509Store*  x509Certs, ::Org::BouncyCastle::X509::Store::IX509Store*  x509Crls, ::Org::BouncyCastle::X509::Store::IX509Store*  x509AttrCerts, ::System::IO::Stream*  outStr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataParser*>::get(),
                            "ReplaceCertificatesAndCrls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::Store::IX509Store*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::Store::IX509Store*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::Store::IX509Store*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(nullptr, ___internal_method, original, x509Certs, x509Crls, x509AttrCerts, outStr);
}
inline ::Org::BouncyCastle::Asn1::Asn1Set* Org::BouncyCastle::Cms::CmsSignedDataParser::GetAsn1Set(::Org::BouncyCastle::Asn1::Asn1SetParser*  asn1SetParser)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataParser*>::get(),
                            "GetAsn1Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1SetParser*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Set*, false>(nullptr, ___internal_method, asn1SetParser);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
