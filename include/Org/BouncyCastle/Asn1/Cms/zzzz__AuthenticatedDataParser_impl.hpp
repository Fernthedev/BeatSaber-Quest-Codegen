#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__AuthenticatedDataParser_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1SequenceParser_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1Convertible_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1OctetString_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__OriginatorInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__ContentInfoParser_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1SetParser_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::*)(::Org::BouncyCastle::Asn1::Asn1SequenceParser*)>(&::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::_ctor)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xe72dbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1SequenceParser*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser.get_Version
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::DerInteger* (::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::*)()>(&::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::get_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe72ee0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser*>::get(),
                            "get_Version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser.GetOriginatorInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* (::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::*)()>(&::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::GetOriginatorInfo)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0xe72ee8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser*>::get(),
                            "GetOriginatorInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser.GetRecipientInfos
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1SetParser* (::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::*)()>(&::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::GetRecipientInfos)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xe73340;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser*>::get(),
                            "GetRecipientInfos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser.GetMacAlgorithm
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::*)()>(&::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::GetMacAlgorithm)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0xe73440;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser*>::get(),
                            "GetMacAlgorithm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser.GetDigestAlgorithm
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::*)()>(&::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::GetDigestAlgorithm)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xe735a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser*>::get(),
                            "GetDigestAlgorithm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser.GetEnapsulatedContentInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Cms::ContentInfoParser* (::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::*)()>(&::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::GetEnapsulatedContentInfo)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xe73744;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser*>::get(),
                            "GetEnapsulatedContentInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser.GetAuthAttrs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1SetParser* (::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::*)()>(&::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::GetAuthAttrs)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xe73a44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser*>::get(),
                            "GetAuthAttrs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser.GetMac
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1OctetString* (::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::*)()>(&::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::GetMac)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xe73bfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser*>::get(),
                            "GetMac",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser.GetUnauthAttrs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1SetParser* (::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::*)()>(&::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::GetUnauthAttrs)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0xe73d2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser*>::get(),
                            "GetUnauthAttrs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::__set_seq(::Org::BouncyCastle::Asn1::Asn1SequenceParser*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::Asn1SequenceParser*, 0x10>(this, std::forward<::Org::BouncyCastle::Asn1::Asn1SequenceParser*>(value));
}
constexpr ::Org::BouncyCastle::Asn1::Asn1SequenceParser* Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::__get_seq()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::Asn1SequenceParser*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1SequenceParser*> Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::__get_seq() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::Asn1SequenceParser*, 0x10>(this);
}
constexpr void Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::__set_version(::Org::BouncyCastle::Asn1::DerInteger*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::DerInteger*, 0x18>(this, std::forward<::Org::BouncyCastle::Asn1::DerInteger*>(value));
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::__get_version()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::DerInteger*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::__get_version() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::DerInteger*, 0x18>(this);
}
constexpr void Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::__set_nextObject(::Org::BouncyCastle::Asn1::IAsn1Convertible*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::IAsn1Convertible*, 0x20>(this, std::forward<::Org::BouncyCastle::Asn1::IAsn1Convertible*>(value));
}
constexpr ::Org::BouncyCastle::Asn1::IAsn1Convertible* Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::__get_nextObject()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::IAsn1Convertible*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::IAsn1Convertible*> Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::__get_nextObject() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::IAsn1Convertible*, 0x20>(this);
}
constexpr void Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::__set_originatorInfoCalled(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this, std::forward<bool>(value));
}
constexpr bool& Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::__get_originatorInfoCalled()  {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
constexpr bool const& Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::__get_originatorInfoCalled() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
inline ::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser* Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::New_ctor(::Org::BouncyCastle::Asn1::Asn1SequenceParser*  seq)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser*>(seq));
}
inline void Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::_ctor(::Org::BouncyCastle::Asn1::Asn1SequenceParser*  seq)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1SequenceParser*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::get_Version()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser*>::get(),
                            "get_Version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerInteger*, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::GetOriginatorInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser*>::get(),
                            "GetOriginatorInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1SetParser* Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::GetRecipientInfos()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser*>::get(),
                            "GetRecipientInfos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1SetParser*, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::GetMacAlgorithm()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser*>::get(),
                            "GetMacAlgorithm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::GetDigestAlgorithm()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser*>::get(),
                            "GetDigestAlgorithm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cms::ContentInfoParser* Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::GetEnapsulatedContentInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser*>::get(),
                            "GetEnapsulatedContentInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::ContentInfoParser*, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1SetParser* Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::GetAuthAttrs()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser*>::get(),
                            "GetAuthAttrs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1SetParser*, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1OctetString* Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::GetMac()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser*>::get(),
                            "GetMac",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1OctetString*, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1SetParser* Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::GetUnauthAttrs()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser*>::get(),
                            "GetUnauthAttrs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1SetParser*, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
