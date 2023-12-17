#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerSequenceParser_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1Convertible_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1StreamParser_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1SequenceParser_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerSequenceParser._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::DerSequenceParser::*)(::Org::BouncyCastle::Asn1::Asn1StreamParser*)>(&::Org::BouncyCastle::Asn1::DerSequenceParser::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x11ba3d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::DerSequenceParser*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1StreamParser*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerSequenceParser.ReadObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::IAsn1Convertible* (::Org::BouncyCastle::Asn1::DerSequenceParser::*)()>(&::Org::BouncyCastle::Asn1::DerSequenceParser::ReadObject)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x11c3efc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::DerSequenceParser*>::get(),
                            "ReadObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerSequenceParser.ToAsn1Object
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::DerSequenceParser::*)()>(&::Org::BouncyCastle::Asn1::DerSequenceParser::ToAsn1Object)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x11c3f1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::DerSequenceParser*>::get(),
                            "ToAsn1Object",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Asn1::Asn1SequenceParser"
constexpr  Org::BouncyCastle::Asn1::DerSequenceParser::operator ::Org::BouncyCastle::Asn1::Asn1SequenceParser*() noexcept {
return static_cast<::Org::BouncyCastle::Asn1::Asn1SequenceParser*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Convertible"
constexpr  Org::BouncyCastle::Asn1::DerSequenceParser::operator ::Org::BouncyCastle::Asn1::IAsn1Convertible*() noexcept {
return static_cast<::Org::BouncyCastle::Asn1::IAsn1Convertible*>(static_cast<void*>(this));
}
constexpr void Org::BouncyCastle::Asn1::DerSequenceParser::__set__parser(::Org::BouncyCastle::Asn1::Asn1StreamParser*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::Asn1StreamParser*, 0x10>(this, std::forward<::Org::BouncyCastle::Asn1::Asn1StreamParser*>(value));
}
constexpr ::Org::BouncyCastle::Asn1::Asn1StreamParser* Org::BouncyCastle::Asn1::DerSequenceParser::__get__parser()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::Asn1StreamParser*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1StreamParser*> Org::BouncyCastle::Asn1::DerSequenceParser::__get__parser() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::Asn1StreamParser*, 0x10>(this);
}
inline ::Org::BouncyCastle::Asn1::DerSequenceParser* Org::BouncyCastle::Asn1::DerSequenceParser::New_ctor(::Org::BouncyCastle::Asn1::Asn1StreamParser*  parser)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Asn1::DerSequenceParser*>(parser));
}
inline void Org::BouncyCastle::Asn1::DerSequenceParser::_ctor(::Org::BouncyCastle::Asn1::Asn1StreamParser*  parser)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::DerSequenceParser*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1StreamParser*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, parser);
}
inline ::Org::BouncyCastle::Asn1::IAsn1Convertible* Org::BouncyCastle::Asn1::DerSequenceParser::ReadObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::DerSequenceParser*>::get(),
                            "ReadObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::IAsn1Convertible*, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::DerSequenceParser::ToAsn1Object()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::DerSequenceParser*>::get(),
                            "ToAsn1Object",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
