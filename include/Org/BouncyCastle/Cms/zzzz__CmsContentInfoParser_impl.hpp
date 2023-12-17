#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsContentInfoParser_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__ContentInfoParser_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsContentInfoParser._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsContentInfoParser::*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Cms::CmsContentInfoParser::_ctor)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x11da548;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsContentInfoParser*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsContentInfoParser.Close
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsContentInfoParser::*)()>(&::Org::BouncyCastle::Cms::CmsContentInfoParser::Close)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x11da790;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsContentInfoParser*>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Cms::CmsContentInfoParser::__set_contentInfo(::Org::BouncyCastle::Asn1::Cms::ContentInfoParser*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::Cms::ContentInfoParser*, 0x10>(this, std::forward<::Org::BouncyCastle::Asn1::Cms::ContentInfoParser*>(value));
}
constexpr ::Org::BouncyCastle::Asn1::Cms::ContentInfoParser* Org::BouncyCastle::Cms::CmsContentInfoParser::__get_contentInfo()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::Cms::ContentInfoParser*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::ContentInfoParser*> Org::BouncyCastle::Cms::CmsContentInfoParser::__get_contentInfo() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::Cms::ContentInfoParser*, 0x10>(this);
}
constexpr void Org::BouncyCastle::Cms::CmsContentInfoParser::__set_data(::System::IO::Stream*  value)  {
::cordl_internals::setInstanceField<::System::IO::Stream*, 0x18>(this, std::forward<::System::IO::Stream*>(value));
}
constexpr ::System::IO::Stream* Org::BouncyCastle::Cms::CmsContentInfoParser::__get_data()  {
return ::cordl_internals::getInstanceField<::System::IO::Stream*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> Org::BouncyCastle::Cms::CmsContentInfoParser::__get_data() const {
return ::cordl_internals::getInstanceField<::System::IO::Stream*, 0x18>(this);
}
inline ::Org::BouncyCastle::Cms::CmsContentInfoParser* Org::BouncyCastle::Cms::CmsContentInfoParser::New_ctor(::System::IO::Stream*  data)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Cms::CmsContentInfoParser*>(data));
}
inline void Org::BouncyCastle::Cms::CmsContentInfoParser::_ctor(::System::IO::Stream*  data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsContentInfoParser*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, data);
}
inline void Org::BouncyCastle::Cms::CmsContentInfoParser::Close()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsContentInfoParser*>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
