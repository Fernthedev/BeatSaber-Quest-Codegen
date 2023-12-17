#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__SignedDataParser_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__ContentInfoParser_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1SequenceParser_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1SetParser_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::SignedDataParser.GetInstance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Cms::SignedDataParser* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Cms::SignedDataParser::GetInstance)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xe7ed10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::SignedDataParser*>::get(),
                            "GetInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::SignedDataParser._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::Cms::SignedDataParser::*)(::Org::BouncyCastle::Asn1::Asn1SequenceParser*)>(&::Org::BouncyCastle::Asn1::Cms::SignedDataParser::_ctor)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xe7eeac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::SignedDataParser*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1SequenceParser*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::SignedDataParser.get_Version
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::DerInteger* (::Org::BouncyCastle::Asn1::Cms::SignedDataParser::*)()>(&::Org::BouncyCastle::Asn1::Cms::SignedDataParser::get_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe7efd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::SignedDataParser*>::get(),
                            "get_Version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::SignedDataParser.GetDigestAlgorithms
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1SetParser* (::Org::BouncyCastle::Asn1::Cms::SignedDataParser::*)()>(&::Org::BouncyCastle::Asn1::Cms::SignedDataParser::GetDigestAlgorithms)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xe7efd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::SignedDataParser*>::get(),
                            "GetDigestAlgorithms",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::SignedDataParser.GetEncapContentInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Cms::ContentInfoParser* (::Org::BouncyCastle::Asn1::Cms::SignedDataParser::*)()>(&::Org::BouncyCastle::Asn1::Cms::SignedDataParser::GetEncapContentInfo)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xe7f0b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::SignedDataParser*>::get(),
                            "GetEncapContentInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::SignedDataParser.GetCertificates
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1SetParser* (::Org::BouncyCastle::Asn1::Cms::SignedDataParser::*)()>(&::Org::BouncyCastle::Asn1::Cms::SignedDataParser::GetCertificates)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0xe7f1bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::SignedDataParser*>::get(),
                            "GetCertificates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::SignedDataParser.GetCrls
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1SetParser* (::Org::BouncyCastle::Asn1::Cms::SignedDataParser::*)()>(&::Org::BouncyCastle::Asn1::Cms::SignedDataParser::GetCrls)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0xe7f414;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::SignedDataParser*>::get(),
                            "GetCrls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::SignedDataParser.GetSignerInfos
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1SetParser* (::Org::BouncyCastle::Asn1::Cms::SignedDataParser::*)()>(&::Org::BouncyCastle::Asn1::Cms::SignedDataParser::GetSignerInfos)> {
  constexpr static std::size_t size = 0x1148;
  constexpr static std::size_t addrs = 0xe7f6cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::SignedDataParser*>::get(),
                            "GetSignerInfos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Asn1::Cms::SignedDataParser::__set__seq(::Org::BouncyCastle::Asn1::Asn1SequenceParser*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::Asn1SequenceParser*, 0x10>(this, std::forward<::Org::BouncyCastle::Asn1::Asn1SequenceParser*>(value));
}
constexpr ::Org::BouncyCastle::Asn1::Asn1SequenceParser* Org::BouncyCastle::Asn1::Cms::SignedDataParser::__get__seq()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::Asn1SequenceParser*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1SequenceParser*> Org::BouncyCastle::Asn1::Cms::SignedDataParser::__get__seq() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::Asn1SequenceParser*, 0x10>(this);
}
constexpr void Org::BouncyCastle::Asn1::Cms::SignedDataParser::__set__version(::Org::BouncyCastle::Asn1::DerInteger*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::DerInteger*, 0x18>(this, std::forward<::Org::BouncyCastle::Asn1::DerInteger*>(value));
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Asn1::Cms::SignedDataParser::__get__version()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::DerInteger*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> Org::BouncyCastle::Asn1::Cms::SignedDataParser::__get__version() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::DerInteger*, 0x18>(this);
}
constexpr void Org::BouncyCastle::Asn1::Cms::SignedDataParser::__set__nextObject(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x20>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* Org::BouncyCastle::Asn1::Cms::SignedDataParser::__get__nextObject()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> Org::BouncyCastle::Asn1::Cms::SignedDataParser::__get__nextObject() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x20>(this);
}
constexpr void Org::BouncyCastle::Asn1::Cms::SignedDataParser::__set__certsCalled(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this, std::forward<bool>(value));
}
constexpr bool& Org::BouncyCastle::Asn1::Cms::SignedDataParser::__get__certsCalled()  {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
constexpr bool const& Org::BouncyCastle::Asn1::Cms::SignedDataParser::__get__certsCalled() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
constexpr void Org::BouncyCastle::Asn1::Cms::SignedDataParser::__set__crlsCalled(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x29>(this, std::forward<bool>(value));
}
constexpr bool& Org::BouncyCastle::Asn1::Cms::SignedDataParser::__get__crlsCalled()  {
return ::cordl_internals::getInstanceField<bool, 0x29>(this);
}
constexpr bool const& Org::BouncyCastle::Asn1::Cms::SignedDataParser::__get__crlsCalled() const {
return ::cordl_internals::getInstanceField<bool, 0x29>(this);
}
inline ::Org::BouncyCastle::Asn1::Cms::SignedDataParser* Org::BouncyCastle::Asn1::Cms::SignedDataParser::GetInstance(::System::Object*  o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::SignedDataParser*>::get(),
                            "GetInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::SignedDataParser*, false>(nullptr, ___internal_method, o);
}
inline ::Org::BouncyCastle::Asn1::Cms::SignedDataParser* Org::BouncyCastle::Asn1::Cms::SignedDataParser::New_ctor(::Org::BouncyCastle::Asn1::Asn1SequenceParser*  seq)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Asn1::Cms::SignedDataParser*>(seq));
}
inline void Org::BouncyCastle::Asn1::Cms::SignedDataParser::_ctor(::Org::BouncyCastle::Asn1::Asn1SequenceParser*  seq)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::SignedDataParser*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1SequenceParser*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Asn1::Cms::SignedDataParser::get_Version()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::SignedDataParser*>::get(),
                            "get_Version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerInteger*, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1SetParser* Org::BouncyCastle::Asn1::Cms::SignedDataParser::GetDigestAlgorithms()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::SignedDataParser*>::get(),
                            "GetDigestAlgorithms",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1SetParser*, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cms::ContentInfoParser* Org::BouncyCastle::Asn1::Cms::SignedDataParser::GetEncapContentInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::SignedDataParser*>::get(),
                            "GetEncapContentInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::ContentInfoParser*, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1SetParser* Org::BouncyCastle::Asn1::Cms::SignedDataParser::GetCertificates()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::SignedDataParser*>::get(),
                            "GetCertificates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1SetParser*, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1SetParser* Org::BouncyCastle::Asn1::Cms::SignedDataParser::GetCrls()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::SignedDataParser*>::get(),
                            "GetCrls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1SetParser*, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1SetParser* Org::BouncyCastle::Asn1::Cms::SignedDataParser::GetSignerInfos()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::SignedDataParser*>::get(),
                            "GetSignerInfos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1SetParser*, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
