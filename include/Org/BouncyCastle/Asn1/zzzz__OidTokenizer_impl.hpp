#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__OidTokenizer_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::OidTokenizer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::OidTokenizer::*)(::StringW)>(&::Org::BouncyCastle::Asn1::OidTokenizer::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x11c6ac8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::OidTokenizer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::OidTokenizer.get_HasMoreTokens
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Asn1::OidTokenizer::*)()>(&::Org::BouncyCastle::Asn1::OidTokenizer::get_HasMoreTokens)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x11c6af0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::OidTokenizer*>::get(),
                            "get_HasMoreTokens",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::OidTokenizer.NextToken
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::Asn1::OidTokenizer::*)()>(&::Org::BouncyCastle::Asn1::OidTokenizer::NextToken)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x11c6b00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::OidTokenizer*>::get(),
                            "NextToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Asn1::OidTokenizer::__set_oid(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Org::BouncyCastle::Asn1::OidTokenizer::__get_oid()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& Org::BouncyCastle::Asn1::OidTokenizer::__get_oid() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void Org::BouncyCastle::Asn1::OidTokenizer::__set_index(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& Org::BouncyCastle::Asn1::OidTokenizer::__get_index()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& Org::BouncyCastle::Asn1::OidTokenizer::__get_index() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
inline ::Org::BouncyCastle::Asn1::OidTokenizer* Org::BouncyCastle::Asn1::OidTokenizer::New_ctor(::StringW  oid)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Asn1::OidTokenizer*>(oid));
}
inline void Org::BouncyCastle::Asn1::OidTokenizer::_ctor(::StringW  oid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::OidTokenizer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, oid);
}
inline bool Org::BouncyCastle::Asn1::OidTokenizer::get_HasMoreTokens()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::OidTokenizer*>::get(),
                            "get_HasMoreTokens",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Asn1::OidTokenizer::NextToken()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::OidTokenizer*>::get(),
                            "NextToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
