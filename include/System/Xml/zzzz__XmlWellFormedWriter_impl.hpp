#pragma once
#include "System/Xml/zzzz__XmlWriter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__XmlWellFormedWriter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Xml/zzzz__XmlWellFormedWriter_def.hpp"
#include "System/Xml/zzzz__XmlStandalone_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Xml/zzzz__IXmlNamespaceResolver_def.hpp"
#include "System/Xml/zzzz__XmlCharType_def.hpp"
#include "System/Xml/zzzz__SecureStringHasher_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
#include "System/Xml/zzzz__XmlWriterSettings_def.hpp"
#include "System/Xml/zzzz__XmlException_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/Xml/zzzz__WriteState_def.hpp"
#include "System/Xml/zzzz__XmlRawWriter_def.hpp"
#include "System/Xml/zzzz__ConformanceLevel_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Xml/zzzz__XmlSpace_def.hpp"
constexpr void System::Xml::__XmlWellFormedWriter__State::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Xml::__XmlWellFormedWriter__State::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Xml::__XmlWellFormedWriter__State::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::__XmlWellFormedWriter__State::__XmlWellFormedWriter__State(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Xml::__XmlWellFormedWriter__State  System::Xml::__XmlWellFormedWriter__State::Start{static_cast<int32_t>(0x0)};
constexpr ::System::Xml::__XmlWellFormedWriter__State  System::Xml::__XmlWellFormedWriter__State::TopLevel{static_cast<int32_t>(0x1)};
constexpr ::System::Xml::__XmlWellFormedWriter__State  System::Xml::__XmlWellFormedWriter__State::Document{static_cast<int32_t>(0x2)};
constexpr ::System::Xml::__XmlWellFormedWriter__State  System::Xml::__XmlWellFormedWriter__State::Element{static_cast<int32_t>(0x3)};
constexpr ::System::Xml::__XmlWellFormedWriter__State  System::Xml::__XmlWellFormedWriter__State::Content{static_cast<int32_t>(0x4)};
constexpr ::System::Xml::__XmlWellFormedWriter__State  System::Xml::__XmlWellFormedWriter__State::B64Content{static_cast<int32_t>(0x5)};
constexpr ::System::Xml::__XmlWellFormedWriter__State  System::Xml::__XmlWellFormedWriter__State::B64Attribute{static_cast<int32_t>(0x6)};
constexpr ::System::Xml::__XmlWellFormedWriter__State  System::Xml::__XmlWellFormedWriter__State::AfterRootEle{static_cast<int32_t>(0x7)};
constexpr ::System::Xml::__XmlWellFormedWriter__State  System::Xml::__XmlWellFormedWriter__State::Attribute{static_cast<int32_t>(0x8)};
constexpr ::System::Xml::__XmlWellFormedWriter__State  System::Xml::__XmlWellFormedWriter__State::SpecialAttr{static_cast<int32_t>(0x9)};
constexpr ::System::Xml::__XmlWellFormedWriter__State  System::Xml::__XmlWellFormedWriter__State::EndDocument{static_cast<int32_t>(0xa)};
constexpr ::System::Xml::__XmlWellFormedWriter__State  System::Xml::__XmlWellFormedWriter__State::RootLevelAttr{static_cast<int32_t>(0xb)};
constexpr ::System::Xml::__XmlWellFormedWriter__State  System::Xml::__XmlWellFormedWriter__State::RootLevelSpecAttr{static_cast<int32_t>(0xc)};
constexpr ::System::Xml::__XmlWellFormedWriter__State  System::Xml::__XmlWellFormedWriter__State::RootLevelB64Attr{static_cast<int32_t>(0xd)};
constexpr ::System::Xml::__XmlWellFormedWriter__State  System::Xml::__XmlWellFormedWriter__State::AfterRootLevelAttr{static_cast<int32_t>(0xe)};
constexpr ::System::Xml::__XmlWellFormedWriter__State  System::Xml::__XmlWellFormedWriter__State::Closed{static_cast<int32_t>(0xf)};
constexpr ::System::Xml::__XmlWellFormedWriter__State  System::Xml::__XmlWellFormedWriter__State::Error{static_cast<int32_t>(0x10)};
constexpr ::System::Xml::__XmlWellFormedWriter__State  System::Xml::__XmlWellFormedWriter__State::StartContent{static_cast<int32_t>(0x65)};
constexpr ::System::Xml::__XmlWellFormedWriter__State  System::Xml::__XmlWellFormedWriter__State::StartContentEle{static_cast<int32_t>(0x66)};
constexpr ::System::Xml::__XmlWellFormedWriter__State  System::Xml::__XmlWellFormedWriter__State::StartContentB64{static_cast<int32_t>(0x67)};
constexpr ::System::Xml::__XmlWellFormedWriter__State  System::Xml::__XmlWellFormedWriter__State::StartDoc{static_cast<int32_t>(0x68)};
constexpr ::System::Xml::__XmlWellFormedWriter__State  System::Xml::__XmlWellFormedWriter__State::StartDocEle{static_cast<int32_t>(0x6a)};
constexpr ::System::Xml::__XmlWellFormedWriter__State  System::Xml::__XmlWellFormedWriter__State::EndAttrSEle{static_cast<int32_t>(0x6b)};
constexpr ::System::Xml::__XmlWellFormedWriter__State  System::Xml::__XmlWellFormedWriter__State::EndAttrEEle{static_cast<int32_t>(0x6c)};
constexpr ::System::Xml::__XmlWellFormedWriter__State  System::Xml::__XmlWellFormedWriter__State::EndAttrSCont{static_cast<int32_t>(0x6d)};
constexpr ::System::Xml::__XmlWellFormedWriter__State  System::Xml::__XmlWellFormedWriter__State::EndAttrSAttr{static_cast<int32_t>(0x6f)};
constexpr ::System::Xml::__XmlWellFormedWriter__State  System::Xml::__XmlWellFormedWriter__State::PostB64Cont{static_cast<int32_t>(0x70)};
constexpr ::System::Xml::__XmlWellFormedWriter__State  System::Xml::__XmlWellFormedWriter__State::PostB64Attr{static_cast<int32_t>(0x71)};
constexpr ::System::Xml::__XmlWellFormedWriter__State  System::Xml::__XmlWellFormedWriter__State::PostB64RootAttr{static_cast<int32_t>(0x72)};
constexpr ::System::Xml::__XmlWellFormedWriter__State  System::Xml::__XmlWellFormedWriter__State::StartFragEle{static_cast<int32_t>(0x73)};
constexpr ::System::Xml::__XmlWellFormedWriter__State  System::Xml::__XmlWellFormedWriter__State::StartFragCont{static_cast<int32_t>(0x74)};
constexpr ::System::Xml::__XmlWellFormedWriter__State  System::Xml::__XmlWellFormedWriter__State::StartFragB64{static_cast<int32_t>(0x75)};
constexpr ::System::Xml::__XmlWellFormedWriter__State  System::Xml::__XmlWellFormedWriter__State::StartRootLevelAttr{static_cast<int32_t>(0x76)};
constexpr void System::Xml::__XmlWellFormedWriter__Token::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Xml::__XmlWellFormedWriter__Token::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Xml::__XmlWellFormedWriter__Token::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::__XmlWellFormedWriter__Token::__XmlWellFormedWriter__Token(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Xml::__XmlWellFormedWriter__Token  System::Xml::__XmlWellFormedWriter__Token::StartDocument{static_cast<int32_t>(0x0)};
constexpr ::System::Xml::__XmlWellFormedWriter__Token  System::Xml::__XmlWellFormedWriter__Token::EndDocument{static_cast<int32_t>(0x1)};
constexpr ::System::Xml::__XmlWellFormedWriter__Token  System::Xml::__XmlWellFormedWriter__Token::PI{static_cast<int32_t>(0x2)};
constexpr ::System::Xml::__XmlWellFormedWriter__Token  System::Xml::__XmlWellFormedWriter__Token::Comment{static_cast<int32_t>(0x3)};
constexpr ::System::Xml::__XmlWellFormedWriter__Token  System::Xml::__XmlWellFormedWriter__Token::Dtd{static_cast<int32_t>(0x4)};
constexpr ::System::Xml::__XmlWellFormedWriter__Token  System::Xml::__XmlWellFormedWriter__Token::StartElement{static_cast<int32_t>(0x5)};
constexpr ::System::Xml::__XmlWellFormedWriter__Token  System::Xml::__XmlWellFormedWriter__Token::EndElement{static_cast<int32_t>(0x6)};
constexpr ::System::Xml::__XmlWellFormedWriter__Token  System::Xml::__XmlWellFormedWriter__Token::StartAttribute{static_cast<int32_t>(0x7)};
constexpr ::System::Xml::__XmlWellFormedWriter__Token  System::Xml::__XmlWellFormedWriter__Token::EndAttribute{static_cast<int32_t>(0x8)};
constexpr ::System::Xml::__XmlWellFormedWriter__Token  System::Xml::__XmlWellFormedWriter__Token::Text{static_cast<int32_t>(0x9)};
constexpr ::System::Xml::__XmlWellFormedWriter__Token  System::Xml::__XmlWellFormedWriter__Token::CData{static_cast<int32_t>(0xa)};
constexpr ::System::Xml::__XmlWellFormedWriter__Token  System::Xml::__XmlWellFormedWriter__Token::AtomicValue{static_cast<int32_t>(0xb)};
constexpr ::System::Xml::__XmlWellFormedWriter__Token  System::Xml::__XmlWellFormedWriter__Token::Base64{static_cast<int32_t>(0xc)};
constexpr ::System::Xml::__XmlWellFormedWriter__Token  System::Xml::__XmlWellFormedWriter__Token::RawData{static_cast<int32_t>(0xd)};
constexpr ::System::Xml::__XmlWellFormedWriter__Token  System::Xml::__XmlWellFormedWriter__Token::Whitespace{static_cast<int32_t>(0xe)};
//  Writing Method size for method: ::System::Xml::__XmlWellFormedWriter__NamespaceResolverProxy._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__XmlWellFormedWriter__NamespaceResolverProxy::*)(::System::Xml::XmlWellFormedWriter*)>(&::System::Xml::__XmlWellFormedWriter__NamespaceResolverProxy::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2878ec0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlWellFormedWriter__NamespaceResolverProxy*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlWellFormedWriter*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlWellFormedWriter__NamespaceResolverProxy.System_Xml_IXmlNamespaceResolver_LookupNamespace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::__XmlWellFormedWriter__NamespaceResolverProxy::*)(::StringW)>(&::System::Xml::__XmlWellFormedWriter__NamespaceResolverProxy::System_Xml_IXmlNamespaceResolver_LookupNamespace)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2880230;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlWellFormedWriter__NamespaceResolverProxy*>::get(),
                            "System.Xml.IXmlNamespaceResolver.LookupNamespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlWellFormedWriter__NamespaceResolverProxy.System_Xml_IXmlNamespaceResolver_LookupPrefix
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::__XmlWellFormedWriter__NamespaceResolverProxy::*)(::StringW)>(&::System::Xml::__XmlWellFormedWriter__NamespaceResolverProxy::System_Xml_IXmlNamespaceResolver_LookupPrefix)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2880248;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlWellFormedWriter__NamespaceResolverProxy*>::get(),
                            "System.Xml.IXmlNamespaceResolver.LookupPrefix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Xml::IXmlNamespaceResolver"
constexpr  System::Xml::__XmlWellFormedWriter__NamespaceResolverProxy::operator ::System::Xml::IXmlNamespaceResolver*() noexcept {
return static_cast<::System::Xml::IXmlNamespaceResolver*>(static_cast<void*>(this));
}
constexpr void System::Xml::__XmlWellFormedWriter__NamespaceResolverProxy::__set_wfWriter(::System::Xml::XmlWellFormedWriter*  value)  {
::cordl_internals::setInstanceField<::System::Xml::XmlWellFormedWriter*, 0x10>(this, std::forward<::System::Xml::XmlWellFormedWriter*>(value));
}
constexpr ::System::Xml::XmlWellFormedWriter* System::Xml::__XmlWellFormedWriter__NamespaceResolverProxy::__get_wfWriter()  {
return ::cordl_internals::getInstanceField<::System::Xml::XmlWellFormedWriter*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlWellFormedWriter*> System::Xml::__XmlWellFormedWriter__NamespaceResolverProxy::__get_wfWriter() const {
return ::cordl_internals::getInstanceField<::System::Xml::XmlWellFormedWriter*, 0x10>(this);
}
inline ::System::Xml::__XmlWellFormedWriter__NamespaceResolverProxy* System::Xml::__XmlWellFormedWriter__NamespaceResolverProxy::New_ctor(::System::Xml::XmlWellFormedWriter*  wfWriter)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Xml::__XmlWellFormedWriter__NamespaceResolverProxy*>(wfWriter));
}
inline void System::Xml::__XmlWellFormedWriter__NamespaceResolverProxy::_ctor(::System::Xml::XmlWellFormedWriter*  wfWriter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlWellFormedWriter__NamespaceResolverProxy*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlWellFormedWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, wfWriter);
}
inline ::StringW System::Xml::__XmlWellFormedWriter__NamespaceResolverProxy::System_Xml_IXmlNamespaceResolver_LookupNamespace(::StringW  prefix)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlWellFormedWriter__NamespaceResolverProxy*>::get(),
                            "System.Xml.IXmlNamespaceResolver.LookupNamespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method, prefix);
}
inline ::StringW System::Xml::__XmlWellFormedWriter__NamespaceResolverProxy::System_Xml_IXmlNamespaceResolver_LookupPrefix(::StringW  namespaceName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlWellFormedWriter__NamespaceResolverProxy*>::get(),
                            "System.Xml.IXmlNamespaceResolver.LookupPrefix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method, namespaceName);
}
//  Writing Method size for method: ::System::Xml::__XmlWellFormedWriter__ElementScope.Set
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__XmlWellFormedWriter__ElementScope::*)(::StringW, ::StringW, ::StringW, int32_t)>(&::System::Xml::__XmlWellFormedWriter__ElementScope::Set)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2878ef8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlWellFormedWriter__ElementScope>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlWellFormedWriter__ElementScope.WriteEndElement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__XmlWellFormedWriter__ElementScope::*)(::System::Xml::XmlRawWriter*)>(&::System::Xml::__XmlWellFormedWriter__ElementScope::WriteEndElement)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x287a6d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlWellFormedWriter__ElementScope>::get(),
                            "WriteEndElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlRawWriter*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlWellFormedWriter__ElementScope.WriteFullEndElement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__XmlWellFormedWriter__ElementScope::*)(::System::Xml::XmlRawWriter*)>(&::System::Xml::__XmlWellFormedWriter__ElementScope::WriteFullEndElement)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x287a9c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlWellFormedWriter__ElementScope>::get(),
                            "WriteFullEndElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlRawWriter*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Xml::__XmlWellFormedWriter__ElementScope::__set_prevNSTop(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Xml::__XmlWellFormedWriter__ElementScope::__get_prevNSTop()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Xml::__XmlWellFormedWriter__ElementScope::__get_prevNSTop() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Xml::__XmlWellFormedWriter__ElementScope::__set_prefix(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Xml::__XmlWellFormedWriter__ElementScope::__get_prefix()  {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& System::Xml::__XmlWellFormedWriter__ElementScope::__get_prefix() const {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Xml::__XmlWellFormedWriter__ElementScope::__set_localName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Xml::__XmlWellFormedWriter__ElementScope::__get_localName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& System::Xml::__XmlWellFormedWriter__ElementScope::__get_localName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Xml::__XmlWellFormedWriter__ElementScope::__set_namespaceUri(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Xml::__XmlWellFormedWriter__ElementScope::__get_namespaceUri()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& System::Xml::__XmlWellFormedWriter__ElementScope::__get_namespaceUri() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Xml::__XmlWellFormedWriter__ElementScope::__set_xmlSpace(::System::Xml::XmlSpace  value)  {
::cordl_internals::setInstanceField<::System::Xml::XmlSpace, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Xml::XmlSpace>(value));
}
constexpr ::System::Xml::XmlSpace& System::Xml::__XmlWellFormedWriter__ElementScope::__get_xmlSpace()  {
return ::cordl_internals::getInstanceField<::System::Xml::XmlSpace, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Xml::XmlSpace const& System::Xml::__XmlWellFormedWriter__ElementScope::__get_xmlSpace() const {
return ::cordl_internals::getInstanceField<::System::Xml::XmlSpace, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Xml::__XmlWellFormedWriter__ElementScope::__set_xmlLang(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Xml::__XmlWellFormedWriter__ElementScope::__get_xmlLang()  {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& System::Xml::__XmlWellFormedWriter__ElementScope::__get_xmlLang() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::Xml::__XmlWellFormedWriter__ElementScope::Set(::StringW  prefix, ::StringW  localName, ::StringW  namespaceUri, int32_t  prevNSTop)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlWellFormedWriter__ElementScope>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, prefix, localName, namespaceUri, prevNSTop);
}
inline void System::Xml::__XmlWellFormedWriter__ElementScope::WriteEndElement(::System::Xml::XmlRawWriter*  rawWriter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlWellFormedWriter__ElementScope>::get(),
                            "WriteEndElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlRawWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, rawWriter);
}
inline void System::Xml::__XmlWellFormedWriter__ElementScope::WriteFullEndElement(::System::Xml::XmlRawWriter*  rawWriter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlWellFormedWriter__ElementScope>::get(),
                            "WriteFullEndElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlRawWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, rawWriter);
}
// Ctor Parameters [CppParam { name: "prevNSTop", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "prefix", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "localName", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "namespaceUri", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "xmlSpace", ty: "::System::Xml::XmlSpace", modifiers: "", def_value: Some("{}") }, CppParam { name: "xmlLang", ty: "::StringW", modifiers: "", def_value: Some("csnull") }]
constexpr ::System::Xml::__XmlWellFormedWriter__ElementScope::__XmlWellFormedWriter__ElementScope(int32_t  prevNSTop, ::StringW  prefix, ::StringW  localName, ::StringW  namespaceUri, ::System::Xml::XmlSpace  xmlSpace, ::StringW  xmlLang) noexcept : ::bs_hook::ValueTypeWrapper<0x30>() {this->prevNSTop = prevNSTop;
this->prefix = prefix;
this->localName = localName;
this->namespaceUri = namespaceUri;
this->xmlSpace = xmlSpace;
this->xmlLang = xmlLang;
}
constexpr void System::Xml::__XmlWellFormedWriter__NamespaceKind::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Xml::__XmlWellFormedWriter__NamespaceKind::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Xml::__XmlWellFormedWriter__NamespaceKind::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::__XmlWellFormedWriter__NamespaceKind::__XmlWellFormedWriter__NamespaceKind(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Xml::__XmlWellFormedWriter__NamespaceKind  System::Xml::__XmlWellFormedWriter__NamespaceKind::Written{static_cast<int32_t>(0x0)};
constexpr ::System::Xml::__XmlWellFormedWriter__NamespaceKind  System::Xml::__XmlWellFormedWriter__NamespaceKind::NeedToWrite{static_cast<int32_t>(0x1)};
constexpr ::System::Xml::__XmlWellFormedWriter__NamespaceKind  System::Xml::__XmlWellFormedWriter__NamespaceKind::Implied{static_cast<int32_t>(0x2)};
constexpr ::System::Xml::__XmlWellFormedWriter__NamespaceKind  System::Xml::__XmlWellFormedWriter__NamespaceKind::Special{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::System::Xml::__XmlWellFormedWriter__Namespace.Set
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__XmlWellFormedWriter__Namespace::*)(::StringW, ::StringW, ::System::Xml::__XmlWellFormedWriter__NamespaceKind)>(&::System::Xml::__XmlWellFormedWriter__Namespace::Set)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2878ee8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlWellFormedWriter__Namespace>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::__XmlWellFormedWriter__NamespaceKind>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlWellFormedWriter__Namespace.WriteDecl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__XmlWellFormedWriter__Namespace::*)(::System::Xml::XmlWriter*, ::System::Xml::XmlRawWriter*)>(&::System::Xml::__XmlWellFormedWriter__Namespace::WriteDecl)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x287f46c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlWellFormedWriter__Namespace>::get(),
                            "WriteDecl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlRawWriter*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Xml::__XmlWellFormedWriter__Namespace::__set_prefix(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Xml::__XmlWellFormedWriter__Namespace::__get_prefix()  {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& System::Xml::__XmlWellFormedWriter__Namespace::__get_prefix() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Xml::__XmlWellFormedWriter__Namespace::__set_namespaceUri(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Xml::__XmlWellFormedWriter__Namespace::__get_namespaceUri()  {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& System::Xml::__XmlWellFormedWriter__Namespace::__get_namespaceUri() const {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Xml::__XmlWellFormedWriter__Namespace::__set_kind(::System::Xml::__XmlWellFormedWriter__NamespaceKind  value)  {
::cordl_internals::setInstanceField<::System::Xml::__XmlWellFormedWriter__NamespaceKind, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Xml::__XmlWellFormedWriter__NamespaceKind>(value));
}
constexpr ::System::Xml::__XmlWellFormedWriter__NamespaceKind& System::Xml::__XmlWellFormedWriter__Namespace::__get_kind()  {
return ::cordl_internals::getInstanceField<::System::Xml::__XmlWellFormedWriter__NamespaceKind, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Xml::__XmlWellFormedWriter__NamespaceKind const& System::Xml::__XmlWellFormedWriter__Namespace::__get_kind() const {
return ::cordl_internals::getInstanceField<::System::Xml::__XmlWellFormedWriter__NamespaceKind, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Xml::__XmlWellFormedWriter__Namespace::__set_prevNsIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Xml::__XmlWellFormedWriter__Namespace::__get_prevNsIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Xml::__XmlWellFormedWriter__Namespace::__get_prevNsIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::Xml::__XmlWellFormedWriter__Namespace::Set(::StringW  prefix, ::StringW  namespaceUri, ::System::Xml::__XmlWellFormedWriter__NamespaceKind  kind)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlWellFormedWriter__Namespace>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::__XmlWellFormedWriter__NamespaceKind>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, prefix, namespaceUri, kind);
}
inline void System::Xml::__XmlWellFormedWriter__Namespace::WriteDecl(::System::Xml::XmlWriter*  writer, ::System::Xml::XmlRawWriter*  rawWriter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlWellFormedWriter__Namespace>::get(),
                            "WriteDecl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlRawWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, writer, rawWriter);
}
// Ctor Parameters [CppParam { name: "prefix", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "namespaceUri", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "kind", ty: "::System::Xml::__XmlWellFormedWriter__NamespaceKind", modifiers: "", def_value: Some("{}") }, CppParam { name: "prevNsIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::__XmlWellFormedWriter__Namespace::__XmlWellFormedWriter__Namespace(::StringW  prefix, ::StringW  namespaceUri, ::System::Xml::__XmlWellFormedWriter__NamespaceKind  kind, int32_t  prevNsIndex) noexcept : ::bs_hook::ValueTypeWrapper<0x18>() {this->prefix = prefix;
this->namespaceUri = namespaceUri;
this->kind = kind;
this->prevNsIndex = prevNsIndex;
}
//  Writing Method size for method: ::System::Xml::__XmlWellFormedWriter__AttrName.Set
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__XmlWellFormedWriter__AttrName::*)(::StringW, ::StringW, ::StringW)>(&::System::Xml::__XmlWellFormedWriter__AttrName::Set)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x287f718;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlWellFormedWriter__AttrName>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlWellFormedWriter__AttrName.IsDuplicate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::__XmlWellFormedWriter__AttrName::*)(::StringW, ::StringW, ::StringW)>(&::System::Xml::__XmlWellFormedWriter__AttrName::IsDuplicate)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x287f728;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlWellFormedWriter__AttrName>::get(),
                            "IsDuplicate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Xml::__XmlWellFormedWriter__AttrName::__set_prefix(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Xml::__XmlWellFormedWriter__AttrName::__get_prefix()  {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& System::Xml::__XmlWellFormedWriter__AttrName::__get_prefix() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Xml::__XmlWellFormedWriter__AttrName::__set_namespaceUri(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Xml::__XmlWellFormedWriter__AttrName::__get_namespaceUri()  {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& System::Xml::__XmlWellFormedWriter__AttrName::__get_namespaceUri() const {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Xml::__XmlWellFormedWriter__AttrName::__set_localName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Xml::__XmlWellFormedWriter__AttrName::__get_localName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& System::Xml::__XmlWellFormedWriter__AttrName::__get_localName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Xml::__XmlWellFormedWriter__AttrName::__set_prev(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Xml::__XmlWellFormedWriter__AttrName::__get_prev()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Xml::__XmlWellFormedWriter__AttrName::__get_prev() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::Xml::__XmlWellFormedWriter__AttrName::Set(::StringW  prefix, ::StringW  localName, ::StringW  namespaceUri)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlWellFormedWriter__AttrName>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, prefix, localName, namespaceUri);
}
inline bool System::Xml::__XmlWellFormedWriter__AttrName::IsDuplicate(::StringW  prefix, ::StringW  localName, ::StringW  namespaceUri)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlWellFormedWriter__AttrName>::get(),
                            "IsDuplicate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, prefix, localName, namespaceUri);
}
// Ctor Parameters [CppParam { name: "prefix", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "namespaceUri", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "localName", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "prev", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::__XmlWellFormedWriter__AttrName::__XmlWellFormedWriter__AttrName(::StringW  prefix, ::StringW  namespaceUri, ::StringW  localName, int32_t  prev) noexcept : ::bs_hook::ValueTypeWrapper<0x20>() {this->prefix = prefix;
this->namespaceUri = namespaceUri;
this->localName = localName;
this->prev = prev;
}
constexpr void System::Xml::__XmlWellFormedWriter__SpecialAttribute::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Xml::__XmlWellFormedWriter__SpecialAttribute::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Xml::__XmlWellFormedWriter__SpecialAttribute::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::__XmlWellFormedWriter__SpecialAttribute::__XmlWellFormedWriter__SpecialAttribute(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Xml::__XmlWellFormedWriter__SpecialAttribute  System::Xml::__XmlWellFormedWriter__SpecialAttribute::No{static_cast<int32_t>(0x0)};
constexpr ::System::Xml::__XmlWellFormedWriter__SpecialAttribute  System::Xml::__XmlWellFormedWriter__SpecialAttribute::DefaultXmlns{static_cast<int32_t>(0x1)};
constexpr ::System::Xml::__XmlWellFormedWriter__SpecialAttribute  System::Xml::__XmlWellFormedWriter__SpecialAttribute::PrefixedXmlns{static_cast<int32_t>(0x2)};
constexpr ::System::Xml::__XmlWellFormedWriter__SpecialAttribute  System::Xml::__XmlWellFormedWriter__SpecialAttribute::XmlSpace{static_cast<int32_t>(0x3)};
constexpr ::System::Xml::__XmlWellFormedWriter__SpecialAttribute  System::Xml::__XmlWellFormedWriter__SpecialAttribute::XmlLang{static_cast<int32_t>(0x4)};
constexpr void GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType::__XmlWellFormedWriter__AttributeValueCache__ItemType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType  GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType::EntityRef{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType  GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType::CharEntity{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType  GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType::SurrogateCharEntity{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType  GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType::Whitespace{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType  GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType::String{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType  GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType::StringChars{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType  GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType::Raw{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType  GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType::RawChars{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType  GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType::ValueString{static_cast<int32_t>(0x8)};
//  Writing Method size for method: ::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__Item._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__Item::*)()>(&::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__Item::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2880458;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__Item*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__Item.Set
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__Item::*)(::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType, ::System::Object*)>(&::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__Item::Set)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2880460;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__Item*>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__Item::__set_type(::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType, 0x10>(this, std::forward<::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType>(value));
}
constexpr ::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType& GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__Item::__get_type()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType, 0x10>(this);
}
constexpr ::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType const& GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__Item::__get_type() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType, 0x10>(this);
}
constexpr void GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__Item::__set_data(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x18>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__Item::__get_data()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__Item::__get_data() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
inline ::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__Item* GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__Item::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__Item*>());
}
inline void GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__Item::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__Item*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__Item::Set(::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType  type, ::System::Object*  data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__Item*>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, type, data);
}
//  Writing Method size for method: ::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__BufferChunk._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__BufferChunk::*)(::ArrayW<char16_t,::Array<char16_t>*>, int32_t, int32_t)>(&::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__BufferChunk::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x288041c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__BufferChunk*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t,::Array<char16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__BufferChunk::__set_buffer(::ArrayW<char16_t,::Array<char16_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<char16_t,::Array<char16_t>*>, 0x10>(this, std::forward<::ArrayW<char16_t,::Array<char16_t>*>>(value));
}
constexpr ::ArrayW<char16_t,::Array<char16_t>*>& GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__BufferChunk::__get_buffer()  {
return ::cordl_internals::getInstanceField<::ArrayW<char16_t,::Array<char16_t>*>, 0x10>(this);
}
constexpr ::ArrayW<char16_t,::Array<char16_t>*> const& GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__BufferChunk::__get_buffer() const {
return ::cordl_internals::getInstanceField<::ArrayW<char16_t,::Array<char16_t>*>, 0x10>(this);
}
constexpr void GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__BufferChunk::__set_index(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__BufferChunk::__get_index()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__BufferChunk::__get_index() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr void GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__BufferChunk::__set_count(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__BufferChunk::__get_count()  {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
constexpr int32_t const& GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__BufferChunk::__get_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
inline ::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__BufferChunk* GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__BufferChunk::New_ctor(::ArrayW<char16_t,::Array<char16_t>*>  buffer, int32_t  index, int32_t  count)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__BufferChunk*>(buffer, index, count));
}
inline void GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__BufferChunk::_ctor(::ArrayW<char16_t,::Array<char16_t>*>  buffer, int32_t  index, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__BufferChunk*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t,::Array<char16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, buffer, index, count);
}
//  Writing Method size for method: ::System::Xml::__XmlWellFormedWriter__AttributeValueCache.get_StringValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::__XmlWellFormedWriter__AttributeValueCache::*)()>(&::System::Xml::__XmlWellFormedWriter__AttributeValueCache::get_StringValue)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x287be00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlWellFormedWriter__AttributeValueCache*>::get(),
                            "get_StringValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlWellFormedWriter__AttributeValueCache.WriteEntityRef
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__XmlWellFormedWriter__AttributeValueCache::*)(::StringW)>(&::System::Xml::__XmlWellFormedWriter__AttributeValueCache::WriteEntityRef)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x287d0f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlWellFormedWriter__AttributeValueCache*>::get(),
                            "WriteEntityRef",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlWellFormedWriter__AttributeValueCache.WriteCharEntity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__XmlWellFormedWriter__AttributeValueCache::*)(char16_t)>(&::System::Xml::__XmlWellFormedWriter__AttributeValueCache::WriteCharEntity)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x287d440;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlWellFormedWriter__AttributeValueCache*>::get(),
                            "WriteCharEntity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlWellFormedWriter__AttributeValueCache.WriteSurrogateCharEntity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__XmlWellFormedWriter__AttributeValueCache::*)(char16_t, char16_t)>(&::System::Xml::__XmlWellFormedWriter__AttributeValueCache::WriteSurrogateCharEntity)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x287d678;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlWellFormedWriter__AttributeValueCache*>::get(),
                            "WriteSurrogateCharEntity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlWellFormedWriter__AttributeValueCache.WriteWhitespace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__XmlWellFormedWriter__AttributeValueCache::*)(::StringW)>(&::System::Xml::__XmlWellFormedWriter__AttributeValueCache::WriteWhitespace)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x287d8fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlWellFormedWriter__AttributeValueCache*>::get(),
                            "WriteWhitespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlWellFormedWriter__AttributeValueCache.WriteString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__XmlWellFormedWriter__AttributeValueCache::*)(::StringW)>(&::System::Xml::__XmlWellFormedWriter__AttributeValueCache::WriteString)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x287da3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlWellFormedWriter__AttributeValueCache*>::get(),
                            "WriteString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlWellFormedWriter__AttributeValueCache.WriteChars
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__XmlWellFormedWriter__AttributeValueCache::*)(::ArrayW<char16_t,::Array<char16_t>*>, int32_t, int32_t)>(&::System::Xml::__XmlWellFormedWriter__AttributeValueCache::WriteChars)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x287dd28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlWellFormedWriter__AttributeValueCache*>::get(),
                            "WriteChars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t,::Array<char16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlWellFormedWriter__AttributeValueCache.WriteRaw
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__XmlWellFormedWriter__AttributeValueCache::*)(::ArrayW<char16_t,::Array<char16_t>*>, int32_t, int32_t)>(&::System::Xml::__XmlWellFormedWriter__AttributeValueCache::WriteRaw)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x287e054;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlWellFormedWriter__AttributeValueCache*>::get(),
                            "WriteRaw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t,::Array<char16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlWellFormedWriter__AttributeValueCache.WriteRaw
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__XmlWellFormedWriter__AttributeValueCache::*)(::StringW)>(&::System::Xml::__XmlWellFormedWriter__AttributeValueCache::WriteRaw)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x287e1f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlWellFormedWriter__AttributeValueCache*>::get(),
                            "WriteRaw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlWellFormedWriter__AttributeValueCache.WriteValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__XmlWellFormedWriter__AttributeValueCache::*)(::StringW)>(&::System::Xml::__XmlWellFormedWriter__AttributeValueCache::WriteValue)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x287eab0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlWellFormedWriter__AttributeValueCache*>::get(),
                            "WriteValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlWellFormedWriter__AttributeValueCache.Replay
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__XmlWellFormedWriter__AttributeValueCache::*)(::System::Xml::XmlWriter*)>(&::System::Xml::__XmlWellFormedWriter__AttributeValueCache::Replay)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x287c310;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlWellFormedWriter__AttributeValueCache*>::get(),
                            "Replay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlWriter*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlWellFormedWriter__AttributeValueCache.Trim
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__XmlWellFormedWriter__AttributeValueCache::*)()>(&::System::Xml::__XmlWellFormedWriter__AttributeValueCache::Trim)> {
  constexpr static std::size_t size = 0x454;
  constexpr static std::size_t addrs = 0x287c634;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlWellFormedWriter__AttributeValueCache*>::get(),
                            "Trim",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlWellFormedWriter__AttributeValueCache.Clear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__XmlWellFormedWriter__AttributeValueCache::*)()>(&::System::Xml::__XmlWellFormedWriter__AttributeValueCache::Clear)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x287ca88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlWellFormedWriter__AttributeValueCache*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlWellFormedWriter__AttributeValueCache.StartComplexValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__XmlWellFormedWriter__AttributeValueCache::*)()>(&::System::Xml::__XmlWellFormedWriter__AttributeValueCache::StartComplexValue)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x288026c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlWellFormedWriter__AttributeValueCache*>::get(),
                            "StartComplexValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlWellFormedWriter__AttributeValueCache.AddItem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__XmlWellFormedWriter__AttributeValueCache::*)(::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType, ::System::Object*)>(&::System::Xml::__XmlWellFormedWriter__AttributeValueCache::AddItem)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x28802a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlWellFormedWriter__AttributeValueCache*>::get(),
                            "AddItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlWellFormedWriter__AttributeValueCache._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__XmlWellFormedWriter__AttributeValueCache::*)()>(&::System::Xml::__XmlWellFormedWriter__AttributeValueCache::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x287ec68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlWellFormedWriter__AttributeValueCache*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Xml::__XmlWellFormedWriter__AttributeValueCache::__set_stringValue(::System::Text::StringBuilder*  value)  {
::cordl_internals::setInstanceField<::System::Text::StringBuilder*, 0x10>(this, std::forward<::System::Text::StringBuilder*>(value));
}
constexpr ::System::Text::StringBuilder* System::Xml::__XmlWellFormedWriter__AttributeValueCache::__get_stringValue()  {
return ::cordl_internals::getInstanceField<::System::Text::StringBuilder*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> System::Xml::__XmlWellFormedWriter__AttributeValueCache::__get_stringValue() const {
return ::cordl_internals::getInstanceField<::System::Text::StringBuilder*, 0x10>(this);
}
constexpr void System::Xml::__XmlWellFormedWriter__AttributeValueCache::__set_singleStringValue(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Xml::__XmlWellFormedWriter__AttributeValueCache::__get_singleStringValue()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& System::Xml::__XmlWellFormedWriter__AttributeValueCache::__get_singleStringValue() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr void System::Xml::__XmlWellFormedWriter__AttributeValueCache::__set_items(::ArrayW<::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__Item*,::Array<::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__Item*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__Item*,::Array<::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__Item*>*>, 0x20>(this, std::forward<::ArrayW<::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__Item*,::Array<::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__Item*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__Item*,::Array<::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__Item*>*>& System::Xml::__XmlWellFormedWriter__AttributeValueCache::__get_items()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__Item*,::Array<::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__Item*>*>, 0x20>(this);
}
constexpr ::ArrayW<::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__Item*,::Array<::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__Item*>*> const& System::Xml::__XmlWellFormedWriter__AttributeValueCache::__get_items() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__Item*,::Array<::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__Item*>*>, 0x20>(this);
}
constexpr void System::Xml::__XmlWellFormedWriter__AttributeValueCache::__set_firstItem(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Xml::__XmlWellFormedWriter__AttributeValueCache::__get_firstItem()  {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr int32_t const& System::Xml::__XmlWellFormedWriter__AttributeValueCache::__get_firstItem() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr void System::Xml::__XmlWellFormedWriter__AttributeValueCache::__set_lastItem(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Xml::__XmlWellFormedWriter__AttributeValueCache::__get_lastItem()  {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this);
}
constexpr int32_t const& System::Xml::__XmlWellFormedWriter__AttributeValueCache::__get_lastItem() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this);
}
inline ::StringW System::Xml::__XmlWellFormedWriter__AttributeValueCache::get_StringValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlWellFormedWriter__AttributeValueCache*>::get(),
                            "get_StringValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void System::Xml::__XmlWellFormedWriter__AttributeValueCache::WriteEntityRef(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlWellFormedWriter__AttributeValueCache*>::get(),
                            "WriteEntityRef",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, name);
}
inline void System::Xml::__XmlWellFormedWriter__AttributeValueCache::WriteCharEntity(char16_t  ch)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlWellFormedWriter__AttributeValueCache*>::get(),
                            "WriteCharEntity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, ch);
}
inline void System::Xml::__XmlWellFormedWriter__AttributeValueCache::WriteSurrogateCharEntity(char16_t  lowChar, char16_t  highChar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlWellFormedWriter__AttributeValueCache*>::get(),
                            "WriteSurrogateCharEntity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, lowChar, highChar);
}
inline void System::Xml::__XmlWellFormedWriter__AttributeValueCache::WriteWhitespace(::StringW  ws)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlWellFormedWriter__AttributeValueCache*>::get(),
                            "WriteWhitespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, ws);
}
inline void System::Xml::__XmlWellFormedWriter__AttributeValueCache::WriteString(::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlWellFormedWriter__AttributeValueCache*>::get(),
                            "WriteString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, text);
}
inline void System::Xml::__XmlWellFormedWriter__AttributeValueCache::WriteChars(::ArrayW<char16_t,::Array<char16_t>*>  buffer, int32_t  index, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlWellFormedWriter__AttributeValueCache*>::get(),
                            "WriteChars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t,::Array<char16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, buffer, index, count);
}
inline void System::Xml::__XmlWellFormedWriter__AttributeValueCache::WriteRaw(::ArrayW<char16_t,::Array<char16_t>*>  buffer, int32_t  index, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlWellFormedWriter__AttributeValueCache*>::get(),
                            "WriteRaw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t,::Array<char16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, buffer, index, count);
}
inline void System::Xml::__XmlWellFormedWriter__AttributeValueCache::WriteRaw(::StringW  data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlWellFormedWriter__AttributeValueCache*>::get(),
                            "WriteRaw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, data);
}
inline void System::Xml::__XmlWellFormedWriter__AttributeValueCache::WriteValue(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlWellFormedWriter__AttributeValueCache*>::get(),
                            "WriteValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void System::Xml::__XmlWellFormedWriter__AttributeValueCache::Replay(::System::Xml::XmlWriter*  writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlWellFormedWriter__AttributeValueCache*>::get(),
                            "Replay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, writer);
}
inline void System::Xml::__XmlWellFormedWriter__AttributeValueCache::Trim()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlWellFormedWriter__AttributeValueCache*>::get(),
                            "Trim",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Xml::__XmlWellFormedWriter__AttributeValueCache::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlWellFormedWriter__AttributeValueCache*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Xml::__XmlWellFormedWriter__AttributeValueCache::StartComplexValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlWellFormedWriter__AttributeValueCache*>::get(),
                            "StartComplexValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Xml::__XmlWellFormedWriter__AttributeValueCache::AddItem(::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType  type, ::System::Object*  data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlWellFormedWriter__AttributeValueCache*>::get(),
                            "AddItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, type, data);
}
inline ::System::Xml::__XmlWellFormedWriter__AttributeValueCache* System::Xml::__XmlWellFormedWriter__AttributeValueCache::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Xml::__XmlWellFormedWriter__AttributeValueCache*>());
}
inline void System::Xml::__XmlWellFormedWriter__AttributeValueCache::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlWellFormedWriter__AttributeValueCache*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)(::System::Xml::XmlWriter*, ::System::Xml::XmlWriterSettings*)>(&::System::Xml::XmlWellFormedWriter::_ctor)> {
  constexpr static std::size_t size = 0x3e4;
  constexpr static std::size_t addrs = 0x2878ad4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlWriterSettings*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.get_WriteState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::WriteState (::System::Xml::XmlWellFormedWriter::*)()>(&::System::Xml::XmlWellFormedWriter::get_WriteState)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2878f14;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                  27
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.WriteStartDocument
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)()>(&::System::Xml::XmlWellFormedWriter::WriteStartDocument)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2878fa8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.WriteStartDocument
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)(bool)>(&::System::Xml::XmlWellFormedWriter::WriteStartDocument)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2879164;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.WriteEndDocument
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)()>(&::System::Xml::XmlWellFormedWriter::WriteEndDocument)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x2879180;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.WriteDocType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)(::StringW, ::StringW, ::StringW, ::StringW)>(&::System::Xml::XmlWellFormedWriter::WriteDocType)> {
  constexpr static std::size_t size = 0x4ec;
  constexpr static std::size_t addrs = 0x28795e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.WriteStartElement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)(::StringW, ::StringW, ::StringW)>(&::System::Xml::XmlWellFormedWriter::WriteStartElement)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x2879ad4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.WriteEndElement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)()>(&::System::Xml::XmlWellFormedWriter::WriteEndElement)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x287a4ec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.WriteFullEndElement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)()>(&::System::Xml::XmlWellFormedWriter::WriteFullEndElement)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x287a7dc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.WriteStartAttribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)(::StringW, ::StringW, ::StringW)>(&::System::Xml::XmlWellFormedWriter::WriteStartAttribute)> {
  constexpr static std::size_t size = 0x6d4;
  constexpr static std::size_t addrs = 0x287a9f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.WriteEndAttribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)()>(&::System::Xml::XmlWellFormedWriter::WriteEndAttribute)> {
  constexpr static std::size_t size = 0x82c;
  constexpr static std::size_t addrs = 0x287b5d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.WriteCData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)(::StringW)>(&::System::Xml::XmlWellFormedWriter::WriteCData)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x287cab8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.WriteComment
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)(::StringW)>(&::System::Xml::XmlWellFormedWriter::WriteComment)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x287cbbc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.WriteProcessingInstruction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)(::StringW, ::StringW)>(&::System::Xml::XmlWellFormedWriter::WriteProcessingInstruction)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x287ccc0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.WriteEntityRef
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)(::StringW)>(&::System::Xml::XmlWellFormedWriter::WriteEntityRef)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x287cf7c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.WriteCharEntity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)(char16_t)>(&::System::Xml::XmlWellFormedWriter::WriteCharEntity)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x287d294;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.WriteSurrogateCharEntity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)(char16_t, char16_t)>(&::System::Xml::XmlWellFormedWriter::WriteSurrogateCharEntity)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x287d4d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.WriteWhitespace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)(::StringW)>(&::System::Xml::XmlWellFormedWriter::WriteWhitespace)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x287d73c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.WriteString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)(::StringW)>(&::System::Xml::XmlWellFormedWriter::WriteString)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x287d94c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.WriteChars
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)(::ArrayW<char16_t,::Array<char16_t>*>, int32_t, int32_t)>(&::System::Xml::XmlWellFormedWriter::WriteChars)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x287daac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.WriteRaw
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)(::ArrayW<char16_t,::Array<char16_t>*>, int32_t, int32_t)>(&::System::Xml::XmlWellFormedWriter::WriteRaw)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x287ddd8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.WriteRaw
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)(::StringW)>(&::System::Xml::XmlWellFormedWriter::WriteRaw)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x287e104;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.WriteBase64
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t)>(&::System::Xml::XmlWellFormedWriter::WriteBase64)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x287e244;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                  25
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.Close
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)()>(&::System::Xml::XmlWellFormedWriter::Close)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x287e494;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.Flush
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)()>(&::System::Xml::XmlWellFormedWriter::Flush)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x287e67c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                  29
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.LookupPrefix
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlWellFormedWriter::*)(::StringW)>(&::System::Xml::XmlWellFormedWriter::LookupPrefix)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x287e730;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                  30
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.WriteValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)(::StringW)>(&::System::Xml::XmlWellFormedWriter::WriteValue)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x287e9b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.WriteBinHex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t)>(&::System::Xml::XmlWellFormedWriter::WriteBinHex)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x287eb00;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                                  26
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.get_RawWriter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlRawWriter* (::System::Xml::XmlWellFormedWriter::*)()>(&::System::Xml::XmlWellFormedWriter::get_RawWriter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x287ec60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "get_RawWriter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.get_SaveAttrValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlWellFormedWriter::*)()>(&::System::Xml::XmlWellFormedWriter::get_SaveAttrValue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x287d0e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "get_SaveAttrValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.get_InBase64
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlWellFormedWriter::*)()>(&::System::Xml::XmlWellFormedWriter::get_InBase64)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x287e650;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "get_InBase64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.SetSpecialAttribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)(::System::Xml::__XmlWellFormedWriter__SpecialAttribute)>(&::System::Xml::XmlWellFormedWriter::SetSpecialAttribute)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x287b0cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "SetSpecialAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::__XmlWellFormedWriter__SpecialAttribute>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.WriteStartDocumentImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)(::System::Xml::XmlStandalone)>(&::System::Xml::XmlWellFormedWriter::WriteStartDocumentImpl)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x2878fb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "WriteStartDocumentImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlStandalone>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.StartFragment
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)()>(&::System::Xml::XmlWellFormedWriter::StartFragment)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x287ecd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "StartFragment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.PushNamespaceImplicit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)(::StringW, ::StringW)>(&::System::Xml::XmlWellFormedWriter::PushNamespaceImplicit)> {
  constexpr static std::size_t size = 0x42c;
  constexpr static std::size_t addrs = 0x287a0c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "PushNamespaceImplicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.PushNamespaceExplicit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlWellFormedWriter::*)(::StringW, ::StringW)>(&::System::Xml::XmlWellFormedWriter::PushNamespaceExplicit)> {
  constexpr static std::size_t size = 0x4dc;
  constexpr static std::size_t addrs = 0x287be34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "PushNamespaceExplicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.AddNamespace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)(::StringW, ::StringW, ::System::Xml::__XmlWellFormedWriter__NamespaceKind)>(&::System::Xml::XmlWellFormedWriter::AddNamespace)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x287edc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "AddNamespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::__XmlWellFormedWriter__NamespaceKind>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.AddToNamespaceHashtable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)(int32_t)>(&::System::Xml::XmlWellFormedWriter::AddToNamespaceHashtable)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x287f048;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "AddToNamespaceHashtable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.LookupNamespaceIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlWellFormedWriter::*)(::StringW)>(&::System::Xml::XmlWellFormedWriter::LookupNamespaceIndex)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x287ece4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "LookupNamespaceIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.PopNamespaces
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)(int32_t, int32_t)>(&::System::Xml::XmlWellFormedWriter::PopNamespaces)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x287a708;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "PopNamespaces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.DupAttrException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlException* (*)(::StringW, ::StringW)>(&::System::Xml::XmlWellFormedWriter::DupAttrException)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x287ef3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "DupAttrException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.AdvanceState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)(::System::Xml::__XmlWellFormedWriter__Token)>(&::System::Xml::XmlWellFormedWriter::AdvanceState)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x28792dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "AdvanceState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::__XmlWellFormedWriter__Token>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.StartElementContent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)()>(&::System::Xml::XmlWellFormedWriter::StartElementContent)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x287f3a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "StartElementContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.GetStateName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Xml::__XmlWellFormedWriter__State)>(&::System::Xml::XmlWellFormedWriter::GetStateName)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x287f130;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "GetStateName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::__XmlWellFormedWriter__State>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.LookupNamespace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlWellFormedWriter::*)(::StringW)>(&::System::Xml::XmlWellFormedWriter::LookupNamespace)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2879f8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "LookupNamespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.LookupLocalNamespace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlWellFormedWriter::*)(::StringW)>(&::System::Xml::XmlWellFormedWriter::LookupLocalNamespace)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x287b290;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "LookupLocalNamespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.GeneratePrefix
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlWellFormedWriter::*)()>(&::System::Xml::XmlWellFormedWriter::GeneratePrefix)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x287b15c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "GeneratePrefix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.CheckNCName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)(::StringW)>(&::System::Xml::XmlWellFormedWriter::CheckNCName)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2879e8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "CheckNCName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.InvalidCharsException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (*)(::StringW, int32_t)>(&::System::Xml::XmlWellFormedWriter::InvalidCharsException)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x287f598;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "InvalidCharsException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.ThrowInvalidStateTransition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)(::System::Xml::__XmlWellFormedWriter__Token, ::System::Xml::__XmlWellFormedWriter__State)>(&::System::Xml::XmlWellFormedWriter::ThrowInvalidStateTransition)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x287f1d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "ThrowInvalidStateTransition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::__XmlWellFormedWriter__Token>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::__XmlWellFormedWriter__State>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.get_IsClosedOrErrorState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlWellFormedWriter::*)()>(&::System::Xml::XmlWellFormedWriter::get_IsClosedOrErrorState)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x287ec34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "get_IsClosedOrErrorState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.AddAttribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)(::StringW, ::StringW, ::StringW)>(&::System::Xml::XmlWellFormedWriter::AddAttribute)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x287b360;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "AddAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlWellFormedWriter.AddToAttrHashTable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlWellFormedWriter::*)(int32_t)>(&::System::Xml::XmlWellFormedWriter::AddToAttrHashTable)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x287f794;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "AddToAttrHashTable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Xml::XmlWellFormedWriter::__set_writer(::System::Xml::XmlWriter*  value)  {
::cordl_internals::setInstanceField<::System::Xml::XmlWriter*, 0x10>(this, std::forward<::System::Xml::XmlWriter*>(value));
}
constexpr ::System::Xml::XmlWriter* System::Xml::XmlWellFormedWriter::__get_writer()  {
return ::cordl_internals::getInstanceField<::System::Xml::XmlWriter*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlWriter*> System::Xml::XmlWellFormedWriter::__get_writer() const {
return ::cordl_internals::getInstanceField<::System::Xml::XmlWriter*, 0x10>(this);
}
constexpr void System::Xml::XmlWellFormedWriter::__set_rawWriter(::System::Xml::XmlRawWriter*  value)  {
::cordl_internals::setInstanceField<::System::Xml::XmlRawWriter*, 0x18>(this, std::forward<::System::Xml::XmlRawWriter*>(value));
}
constexpr ::System::Xml::XmlRawWriter* System::Xml::XmlWellFormedWriter::__get_rawWriter()  {
return ::cordl_internals::getInstanceField<::System::Xml::XmlRawWriter*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlRawWriter*> System::Xml::XmlWellFormedWriter::__get_rawWriter() const {
return ::cordl_internals::getInstanceField<::System::Xml::XmlRawWriter*, 0x18>(this);
}
constexpr void System::Xml::XmlWellFormedWriter::__set_predefinedNamespaces(::System::Xml::IXmlNamespaceResolver*  value)  {
::cordl_internals::setInstanceField<::System::Xml::IXmlNamespaceResolver*, 0x20>(this, std::forward<::System::Xml::IXmlNamespaceResolver*>(value));
}
constexpr ::System::Xml::IXmlNamespaceResolver* System::Xml::XmlWellFormedWriter::__get_predefinedNamespaces()  {
return ::cordl_internals::getInstanceField<::System::Xml::IXmlNamespaceResolver*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::IXmlNamespaceResolver*> System::Xml::XmlWellFormedWriter::__get_predefinedNamespaces() const {
return ::cordl_internals::getInstanceField<::System::Xml::IXmlNamespaceResolver*, 0x20>(this);
}
constexpr void System::Xml::XmlWellFormedWriter::__set_nsStack(::ArrayW<::System::Xml::__XmlWellFormedWriter__Namespace,::Array<::System::Xml::__XmlWellFormedWriter__Namespace>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Xml::__XmlWellFormedWriter__Namespace,::Array<::System::Xml::__XmlWellFormedWriter__Namespace>*>, 0x28>(this, std::forward<::ArrayW<::System::Xml::__XmlWellFormedWriter__Namespace,::Array<::System::Xml::__XmlWellFormedWriter__Namespace>*>>(value));
}
constexpr ::ArrayW<::System::Xml::__XmlWellFormedWriter__Namespace,::Array<::System::Xml::__XmlWellFormedWriter__Namespace>*>& System::Xml::XmlWellFormedWriter::__get_nsStack()  {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Xml::__XmlWellFormedWriter__Namespace,::Array<::System::Xml::__XmlWellFormedWriter__Namespace>*>, 0x28>(this);
}
constexpr ::ArrayW<::System::Xml::__XmlWellFormedWriter__Namespace,::Array<::System::Xml::__XmlWellFormedWriter__Namespace>*> const& System::Xml::XmlWellFormedWriter::__get_nsStack() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Xml::__XmlWellFormedWriter__Namespace,::Array<::System::Xml::__XmlWellFormedWriter__Namespace>*>, 0x28>(this);
}
constexpr void System::Xml::XmlWellFormedWriter::__set_nsTop(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Xml::XmlWellFormedWriter::__get_nsTop()  {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
constexpr int32_t const& System::Xml::XmlWellFormedWriter::__get_nsTop() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
constexpr void System::Xml::XmlWellFormedWriter::__set_nsHashtable(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*, 0x38>(this, std::forward<::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* System::Xml::XmlWellFormedWriter::__get_nsHashtable()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*> System::Xml::XmlWellFormedWriter::__get_nsHashtable() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*, 0x38>(this);
}
constexpr void System::Xml::XmlWellFormedWriter::__set_useNsHashtable(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x40>(this, std::forward<bool>(value));
}
constexpr bool& System::Xml::XmlWellFormedWriter::__get_useNsHashtable()  {
return ::cordl_internals::getInstanceField<bool, 0x40>(this);
}
constexpr bool const& System::Xml::XmlWellFormedWriter::__get_useNsHashtable() const {
return ::cordl_internals::getInstanceField<bool, 0x40>(this);
}
constexpr void System::Xml::XmlWellFormedWriter::__set_elemScopeStack(::ArrayW<::System::Xml::__XmlWellFormedWriter__ElementScope,::Array<::System::Xml::__XmlWellFormedWriter__ElementScope>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Xml::__XmlWellFormedWriter__ElementScope,::Array<::System::Xml::__XmlWellFormedWriter__ElementScope>*>, 0x48>(this, std::forward<::ArrayW<::System::Xml::__XmlWellFormedWriter__ElementScope,::Array<::System::Xml::__XmlWellFormedWriter__ElementScope>*>>(value));
}
constexpr ::ArrayW<::System::Xml::__XmlWellFormedWriter__ElementScope,::Array<::System::Xml::__XmlWellFormedWriter__ElementScope>*>& System::Xml::XmlWellFormedWriter::__get_elemScopeStack()  {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Xml::__XmlWellFormedWriter__ElementScope,::Array<::System::Xml::__XmlWellFormedWriter__ElementScope>*>, 0x48>(this);
}
constexpr ::ArrayW<::System::Xml::__XmlWellFormedWriter__ElementScope,::Array<::System::Xml::__XmlWellFormedWriter__ElementScope>*> const& System::Xml::XmlWellFormedWriter::__get_elemScopeStack() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Xml::__XmlWellFormedWriter__ElementScope,::Array<::System::Xml::__XmlWellFormedWriter__ElementScope>*>, 0x48>(this);
}
constexpr void System::Xml::XmlWellFormedWriter::__set_elemTop(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x50>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Xml::XmlWellFormedWriter::__get_elemTop()  {
return ::cordl_internals::getInstanceField<int32_t, 0x50>(this);
}
constexpr int32_t const& System::Xml::XmlWellFormedWriter::__get_elemTop() const {
return ::cordl_internals::getInstanceField<int32_t, 0x50>(this);
}
constexpr void System::Xml::XmlWellFormedWriter::__set_attrStack(::ArrayW<::System::Xml::__XmlWellFormedWriter__AttrName,::Array<::System::Xml::__XmlWellFormedWriter__AttrName>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Xml::__XmlWellFormedWriter__AttrName,::Array<::System::Xml::__XmlWellFormedWriter__AttrName>*>, 0x58>(this, std::forward<::ArrayW<::System::Xml::__XmlWellFormedWriter__AttrName,::Array<::System::Xml::__XmlWellFormedWriter__AttrName>*>>(value));
}
constexpr ::ArrayW<::System::Xml::__XmlWellFormedWriter__AttrName,::Array<::System::Xml::__XmlWellFormedWriter__AttrName>*>& System::Xml::XmlWellFormedWriter::__get_attrStack()  {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Xml::__XmlWellFormedWriter__AttrName,::Array<::System::Xml::__XmlWellFormedWriter__AttrName>*>, 0x58>(this);
}
constexpr ::ArrayW<::System::Xml::__XmlWellFormedWriter__AttrName,::Array<::System::Xml::__XmlWellFormedWriter__AttrName>*> const& System::Xml::XmlWellFormedWriter::__get_attrStack() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Xml::__XmlWellFormedWriter__AttrName,::Array<::System::Xml::__XmlWellFormedWriter__AttrName>*>, 0x58>(this);
}
constexpr void System::Xml::XmlWellFormedWriter::__set_attrCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x60>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Xml::XmlWellFormedWriter::__get_attrCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x60>(this);
}
constexpr int32_t const& System::Xml::XmlWellFormedWriter::__get_attrCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x60>(this);
}
constexpr void System::Xml::XmlWellFormedWriter::__set_attrHashTable(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*, 0x68>(this, std::forward<::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* System::Xml::XmlWellFormedWriter::__get_attrHashTable()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*, 0x68>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*> System::Xml::XmlWellFormedWriter::__get_attrHashTable() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*, 0x68>(this);
}
constexpr void System::Xml::XmlWellFormedWriter::__set_specAttr(::System::Xml::__XmlWellFormedWriter__SpecialAttribute  value)  {
::cordl_internals::setInstanceField<::System::Xml::__XmlWellFormedWriter__SpecialAttribute, 0x70>(this, std::forward<::System::Xml::__XmlWellFormedWriter__SpecialAttribute>(value));
}
constexpr ::System::Xml::__XmlWellFormedWriter__SpecialAttribute& System::Xml::XmlWellFormedWriter::__get_specAttr()  {
return ::cordl_internals::getInstanceField<::System::Xml::__XmlWellFormedWriter__SpecialAttribute, 0x70>(this);
}
constexpr ::System::Xml::__XmlWellFormedWriter__SpecialAttribute const& System::Xml::XmlWellFormedWriter::__get_specAttr() const {
return ::cordl_internals::getInstanceField<::System::Xml::__XmlWellFormedWriter__SpecialAttribute, 0x70>(this);
}
constexpr void System::Xml::XmlWellFormedWriter::__set_attrValueCache(::System::Xml::__XmlWellFormedWriter__AttributeValueCache*  value)  {
::cordl_internals::setInstanceField<::System::Xml::__XmlWellFormedWriter__AttributeValueCache*, 0x78>(this, std::forward<::System::Xml::__XmlWellFormedWriter__AttributeValueCache*>(value));
}
constexpr ::System::Xml::__XmlWellFormedWriter__AttributeValueCache* System::Xml::XmlWellFormedWriter::__get_attrValueCache()  {
return ::cordl_internals::getInstanceField<::System::Xml::__XmlWellFormedWriter__AttributeValueCache*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::__XmlWellFormedWriter__AttributeValueCache*> System::Xml::XmlWellFormedWriter::__get_attrValueCache() const {
return ::cordl_internals::getInstanceField<::System::Xml::__XmlWellFormedWriter__AttributeValueCache*, 0x78>(this);
}
constexpr void System::Xml::XmlWellFormedWriter::__set_curDeclPrefix(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x80>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Xml::XmlWellFormedWriter::__get_curDeclPrefix()  {
return ::cordl_internals::getInstanceField<::StringW, 0x80>(this);
}
constexpr ::StringW const& System::Xml::XmlWellFormedWriter::__get_curDeclPrefix() const {
return ::cordl_internals::getInstanceField<::StringW, 0x80>(this);
}
constexpr void System::Xml::XmlWellFormedWriter::__set_stateTable(::ArrayW<::System::Xml::__XmlWellFormedWriter__State,::Array<::System::Xml::__XmlWellFormedWriter__State>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Xml::__XmlWellFormedWriter__State,::Array<::System::Xml::__XmlWellFormedWriter__State>*>, 0x88>(this, std::forward<::ArrayW<::System::Xml::__XmlWellFormedWriter__State,::Array<::System::Xml::__XmlWellFormedWriter__State>*>>(value));
}
constexpr ::ArrayW<::System::Xml::__XmlWellFormedWriter__State,::Array<::System::Xml::__XmlWellFormedWriter__State>*>& System::Xml::XmlWellFormedWriter::__get_stateTable()  {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Xml::__XmlWellFormedWriter__State,::Array<::System::Xml::__XmlWellFormedWriter__State>*>, 0x88>(this);
}
constexpr ::ArrayW<::System::Xml::__XmlWellFormedWriter__State,::Array<::System::Xml::__XmlWellFormedWriter__State>*> const& System::Xml::XmlWellFormedWriter::__get_stateTable() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Xml::__XmlWellFormedWriter__State,::Array<::System::Xml::__XmlWellFormedWriter__State>*>, 0x88>(this);
}
constexpr void System::Xml::XmlWellFormedWriter::__set_currentState(::System::Xml::__XmlWellFormedWriter__State  value)  {
::cordl_internals::setInstanceField<::System::Xml::__XmlWellFormedWriter__State, 0x90>(this, std::forward<::System::Xml::__XmlWellFormedWriter__State>(value));
}
constexpr ::System::Xml::__XmlWellFormedWriter__State& System::Xml::XmlWellFormedWriter::__get_currentState()  {
return ::cordl_internals::getInstanceField<::System::Xml::__XmlWellFormedWriter__State, 0x90>(this);
}
constexpr ::System::Xml::__XmlWellFormedWriter__State const& System::Xml::XmlWellFormedWriter::__get_currentState() const {
return ::cordl_internals::getInstanceField<::System::Xml::__XmlWellFormedWriter__State, 0x90>(this);
}
constexpr void System::Xml::XmlWellFormedWriter::__set_checkCharacters(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x94>(this, std::forward<bool>(value));
}
constexpr bool& System::Xml::XmlWellFormedWriter::__get_checkCharacters()  {
return ::cordl_internals::getInstanceField<bool, 0x94>(this);
}
constexpr bool const& System::Xml::XmlWellFormedWriter::__get_checkCharacters() const {
return ::cordl_internals::getInstanceField<bool, 0x94>(this);
}
constexpr void System::Xml::XmlWellFormedWriter::__set_omitDuplNamespaces(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x95>(this, std::forward<bool>(value));
}
constexpr bool& System::Xml::XmlWellFormedWriter::__get_omitDuplNamespaces()  {
return ::cordl_internals::getInstanceField<bool, 0x95>(this);
}
constexpr bool const& System::Xml::XmlWellFormedWriter::__get_omitDuplNamespaces() const {
return ::cordl_internals::getInstanceField<bool, 0x95>(this);
}
constexpr void System::Xml::XmlWellFormedWriter::__set_writeEndDocumentOnClose(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x96>(this, std::forward<bool>(value));
}
constexpr bool& System::Xml::XmlWellFormedWriter::__get_writeEndDocumentOnClose()  {
return ::cordl_internals::getInstanceField<bool, 0x96>(this);
}
constexpr bool const& System::Xml::XmlWellFormedWriter::__get_writeEndDocumentOnClose() const {
return ::cordl_internals::getInstanceField<bool, 0x96>(this);
}
constexpr void System::Xml::XmlWellFormedWriter::__set_conformanceLevel(::System::Xml::ConformanceLevel  value)  {
::cordl_internals::setInstanceField<::System::Xml::ConformanceLevel, 0x98>(this, std::forward<::System::Xml::ConformanceLevel>(value));
}
constexpr ::System::Xml::ConformanceLevel& System::Xml::XmlWellFormedWriter::__get_conformanceLevel()  {
return ::cordl_internals::getInstanceField<::System::Xml::ConformanceLevel, 0x98>(this);
}
constexpr ::System::Xml::ConformanceLevel const& System::Xml::XmlWellFormedWriter::__get_conformanceLevel() const {
return ::cordl_internals::getInstanceField<::System::Xml::ConformanceLevel, 0x98>(this);
}
constexpr void System::Xml::XmlWellFormedWriter::__set_dtdWritten(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x9c>(this, std::forward<bool>(value));
}
constexpr bool& System::Xml::XmlWellFormedWriter::__get_dtdWritten()  {
return ::cordl_internals::getInstanceField<bool, 0x9c>(this);
}
constexpr bool const& System::Xml::XmlWellFormedWriter::__get_dtdWritten() const {
return ::cordl_internals::getInstanceField<bool, 0x9c>(this);
}
constexpr void System::Xml::XmlWellFormedWriter::__set_xmlDeclFollows(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x9d>(this, std::forward<bool>(value));
}
constexpr bool& System::Xml::XmlWellFormedWriter::__get_xmlDeclFollows()  {
return ::cordl_internals::getInstanceField<bool, 0x9d>(this);
}
constexpr bool const& System::Xml::XmlWellFormedWriter::__get_xmlDeclFollows() const {
return ::cordl_internals::getInstanceField<bool, 0x9d>(this);
}
constexpr void System::Xml::XmlWellFormedWriter::__set_xmlCharType(::System::Xml::XmlCharType  value)  {
::cordl_internals::setInstanceField<::System::Xml::XmlCharType, 0xa0>(this, std::forward<::System::Xml::XmlCharType>(value));
}
constexpr ::System::Xml::XmlCharType& System::Xml::XmlWellFormedWriter::__get_xmlCharType()  {
return ::cordl_internals::getInstanceField<::System::Xml::XmlCharType, 0xa0>(this);
}
constexpr ::System::Xml::XmlCharType const& System::Xml::XmlWellFormedWriter::__get_xmlCharType() const {
return ::cordl_internals::getInstanceField<::System::Xml::XmlCharType, 0xa0>(this);
}
constexpr void System::Xml::XmlWellFormedWriter::__set_hasher(::System::Xml::SecureStringHasher*  value)  {
::cordl_internals::setInstanceField<::System::Xml::SecureStringHasher*, 0xa8>(this, std::forward<::System::Xml::SecureStringHasher*>(value));
}
constexpr ::System::Xml::SecureStringHasher* System::Xml::XmlWellFormedWriter::__get_hasher()  {
return ::cordl_internals::getInstanceField<::System::Xml::SecureStringHasher*, 0xa8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::SecureStringHasher*> System::Xml::XmlWellFormedWriter::__get_hasher() const {
return ::cordl_internals::getInstanceField<::System::Xml::SecureStringHasher*, 0xa8>(this);
}
inline void System::Xml::XmlWellFormedWriter::setStaticF_stateName(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW,::Array<::StringW>*>, "stateName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get>(std::forward<::ArrayW<::StringW,::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW,::Array<::StringW>*> System::Xml::XmlWellFormedWriter::getStaticF_stateName()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW,::Array<::StringW>*>, "stateName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get>();
}
inline void System::Xml::XmlWellFormedWriter::setStaticF_tokenName(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW,::Array<::StringW>*>, "tokenName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get>(std::forward<::ArrayW<::StringW,::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW,::Array<::StringW>*> System::Xml::XmlWellFormedWriter::getStaticF_tokenName()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW,::Array<::StringW>*>, "tokenName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get>();
}
inline void System::Xml::XmlWellFormedWriter::setStaticF_state2WriteState(::ArrayW<::System::Xml::WriteState,::Array<::System::Xml::WriteState>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Xml::WriteState,::Array<::System::Xml::WriteState>*>, "state2WriteState", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get>(std::forward<::ArrayW<::System::Xml::WriteState,::Array<::System::Xml::WriteState>*>>(value));
}
inline ::ArrayW<::System::Xml::WriteState,::Array<::System::Xml::WriteState>*> System::Xml::XmlWellFormedWriter::getStaticF_state2WriteState()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::WriteState,::Array<::System::Xml::WriteState>*>, "state2WriteState", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get>();
}
inline void System::Xml::XmlWellFormedWriter::setStaticF_StateTableDocument(::ArrayW<::System::Xml::__XmlWellFormedWriter__State,::Array<::System::Xml::__XmlWellFormedWriter__State>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Xml::__XmlWellFormedWriter__State,::Array<::System::Xml::__XmlWellFormedWriter__State>*>, "StateTableDocument", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get>(std::forward<::ArrayW<::System::Xml::__XmlWellFormedWriter__State,::Array<::System::Xml::__XmlWellFormedWriter__State>*>>(value));
}
inline ::ArrayW<::System::Xml::__XmlWellFormedWriter__State,::Array<::System::Xml::__XmlWellFormedWriter__State>*> System::Xml::XmlWellFormedWriter::getStaticF_StateTableDocument()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::__XmlWellFormedWriter__State,::Array<::System::Xml::__XmlWellFormedWriter__State>*>, "StateTableDocument", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get>();
}
inline void System::Xml::XmlWellFormedWriter::setStaticF_StateTableAuto(::ArrayW<::System::Xml::__XmlWellFormedWriter__State,::Array<::System::Xml::__XmlWellFormedWriter__State>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Xml::__XmlWellFormedWriter__State,::Array<::System::Xml::__XmlWellFormedWriter__State>*>, "StateTableAuto", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get>(std::forward<::ArrayW<::System::Xml::__XmlWellFormedWriter__State,::Array<::System::Xml::__XmlWellFormedWriter__State>*>>(value));
}
inline ::ArrayW<::System::Xml::__XmlWellFormedWriter__State,::Array<::System::Xml::__XmlWellFormedWriter__State>*> System::Xml::XmlWellFormedWriter::getStaticF_StateTableAuto()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::__XmlWellFormedWriter__State,::Array<::System::Xml::__XmlWellFormedWriter__State>*>, "StateTableAuto", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get>();
}
inline ::System::Xml::XmlWellFormedWriter* System::Xml::XmlWellFormedWriter::New_ctor(::System::Xml::XmlWriter*  writer, ::System::Xml::XmlWriterSettings*  settings)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Xml::XmlWellFormedWriter*>(writer, settings));
}
inline void System::Xml::XmlWellFormedWriter::_ctor(::System::Xml::XmlWriter*  writer, ::System::Xml::XmlWriterSettings*  settings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlWriterSettings*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, writer, settings);
}
inline ::System::Xml::WriteState System::Xml::XmlWellFormedWriter::get_WriteState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "get_WriteState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::WriteState, false>(*this, ___internal_method);
}
inline void System::Xml::XmlWellFormedWriter::WriteStartDocument()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "WriteStartDocument",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Xml::XmlWellFormedWriter::WriteStartDocument(bool  standalone)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "WriteStartDocument",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, standalone);
}
inline void System::Xml::XmlWellFormedWriter::WriteEndDocument()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "WriteEndDocument",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Xml::XmlWellFormedWriter::WriteDocType(::StringW  name, ::StringW  pubid, ::StringW  sysid, ::StringW  subset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "WriteDocType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, name, pubid, sysid, subset);
}
inline void System::Xml::XmlWellFormedWriter::WriteStartElement(::StringW  prefix, ::StringW  localName, ::StringW  ns)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "WriteStartElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, prefix, localName, ns);
}
inline void System::Xml::XmlWellFormedWriter::WriteEndElement()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "WriteEndElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Xml::XmlWellFormedWriter::WriteFullEndElement()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "WriteFullEndElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Xml::XmlWellFormedWriter::WriteStartAttribute(::StringW  prefix, ::StringW  localName, ::StringW  namespaceName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "WriteStartAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, prefix, localName, namespaceName);
}
inline void System::Xml::XmlWellFormedWriter::WriteEndAttribute()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "WriteEndAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Xml::XmlWellFormedWriter::WriteCData(::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "WriteCData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, text);
}
inline void System::Xml::XmlWellFormedWriter::WriteComment(::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "WriteComment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, text);
}
inline void System::Xml::XmlWellFormedWriter::WriteProcessingInstruction(::StringW  name, ::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "WriteProcessingInstruction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, name, text);
}
inline void System::Xml::XmlWellFormedWriter::WriteEntityRef(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "WriteEntityRef",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, name);
}
inline void System::Xml::XmlWellFormedWriter::WriteCharEntity(char16_t  ch)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "WriteCharEntity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, ch);
}
inline void System::Xml::XmlWellFormedWriter::WriteSurrogateCharEntity(char16_t  lowChar, char16_t  highChar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "WriteSurrogateCharEntity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, lowChar, highChar);
}
inline void System::Xml::XmlWellFormedWriter::WriteWhitespace(::StringW  ws)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "WriteWhitespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, ws);
}
inline void System::Xml::XmlWellFormedWriter::WriteString(::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "WriteString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, text);
}
inline void System::Xml::XmlWellFormedWriter::WriteChars(::ArrayW<char16_t,::Array<char16_t>*>  buffer, int32_t  index, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "WriteChars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t,::Array<char16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, buffer, index, count);
}
inline void System::Xml::XmlWellFormedWriter::WriteRaw(::ArrayW<char16_t,::Array<char16_t>*>  buffer, int32_t  index, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "WriteRaw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t,::Array<char16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, buffer, index, count);
}
inline void System::Xml::XmlWellFormedWriter::WriteRaw(::StringW  data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "WriteRaw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, data);
}
inline void System::Xml::XmlWellFormedWriter::WriteBase64(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  index, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "WriteBase64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, buffer, index, count);
}
inline void System::Xml::XmlWellFormedWriter::Close()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Xml::XmlWellFormedWriter::Flush()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "Flush",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::StringW System::Xml::XmlWellFormedWriter::LookupPrefix(::StringW  ns)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "LookupPrefix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method, ns);
}
inline void System::Xml::XmlWellFormedWriter::WriteValue(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "WriteValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void System::Xml::XmlWellFormedWriter::WriteBinHex(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  index, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "WriteBinHex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, buffer, index, count);
}
inline ::System::Xml::XmlRawWriter* System::Xml::XmlWellFormedWriter::get_RawWriter()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "get_RawWriter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlRawWriter*, false>(*this, ___internal_method);
}
inline bool System::Xml::XmlWellFormedWriter::get_SaveAttrValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "get_SaveAttrValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool System::Xml::XmlWellFormedWriter::get_InBase64()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "get_InBase64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void System::Xml::XmlWellFormedWriter::SetSpecialAttribute(::System::Xml::__XmlWellFormedWriter__SpecialAttribute  special)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "SetSpecialAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::__XmlWellFormedWriter__SpecialAttribute>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, special);
}
inline void System::Xml::XmlWellFormedWriter::WriteStartDocumentImpl(::System::Xml::XmlStandalone  standalone)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "WriteStartDocumentImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlStandalone>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, standalone);
}
inline void System::Xml::XmlWellFormedWriter::StartFragment()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "StartFragment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Xml::XmlWellFormedWriter::PushNamespaceImplicit(::StringW  prefix, ::StringW  ns)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "PushNamespaceImplicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, prefix, ns);
}
inline bool System::Xml::XmlWellFormedWriter::PushNamespaceExplicit(::StringW  prefix, ::StringW  ns)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "PushNamespaceExplicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, prefix, ns);
}
inline void System::Xml::XmlWellFormedWriter::AddNamespace(::StringW  prefix, ::StringW  ns, ::System::Xml::__XmlWellFormedWriter__NamespaceKind  kind)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "AddNamespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::__XmlWellFormedWriter__NamespaceKind>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, prefix, ns, kind);
}
inline void System::Xml::XmlWellFormedWriter::AddToNamespaceHashtable(int32_t  namespaceIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "AddToNamespaceHashtable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, namespaceIndex);
}
inline int32_t System::Xml::XmlWellFormedWriter::LookupNamespaceIndex(::StringW  prefix)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "LookupNamespaceIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, prefix);
}
inline void System::Xml::XmlWellFormedWriter::PopNamespaces(int32_t  indexFrom, int32_t  indexTo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "PopNamespaces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, indexFrom, indexTo);
}
inline ::System::Xml::XmlException* System::Xml::XmlWellFormedWriter::DupAttrException(::StringW  prefix, ::StringW  localName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "DupAttrException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlException*, false>(nullptr, ___internal_method, prefix, localName);
}
inline void System::Xml::XmlWellFormedWriter::AdvanceState(::System::Xml::__XmlWellFormedWriter__Token  token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "AdvanceState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::__XmlWellFormedWriter__Token>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, token);
}
inline void System::Xml::XmlWellFormedWriter::StartElementContent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "StartElementContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::StringW System::Xml::XmlWellFormedWriter::GetStateName(::System::Xml::__XmlWellFormedWriter__State  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "GetStateName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::__XmlWellFormedWriter__State>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, state);
}
inline ::StringW System::Xml::XmlWellFormedWriter::LookupNamespace(::StringW  prefix)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "LookupNamespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method, prefix);
}
inline ::StringW System::Xml::XmlWellFormedWriter::LookupLocalNamespace(::StringW  prefix)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "LookupLocalNamespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method, prefix);
}
inline ::StringW System::Xml::XmlWellFormedWriter::GeneratePrefix()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "GeneratePrefix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void System::Xml::XmlWellFormedWriter::CheckNCName(::StringW  ncname)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "CheckNCName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, ncname);
}
inline ::System::Exception* System::Xml::XmlWellFormedWriter::InvalidCharsException(::StringW  name, int32_t  badCharIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "InvalidCharsException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(nullptr, ___internal_method, name, badCharIndex);
}
inline void System::Xml::XmlWellFormedWriter::ThrowInvalidStateTransition(::System::Xml::__XmlWellFormedWriter__Token  token, ::System::Xml::__XmlWellFormedWriter__State  currentState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "ThrowInvalidStateTransition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::__XmlWellFormedWriter__Token>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::__XmlWellFormedWriter__State>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, token, currentState);
}
inline bool System::Xml::XmlWellFormedWriter::get_IsClosedOrErrorState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "get_IsClosedOrErrorState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void System::Xml::XmlWellFormedWriter::AddAttribute(::StringW  prefix, ::StringW  localName, ::StringW  namespaceName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "AddAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, prefix, localName, namespaceName);
}
inline void System::Xml::XmlWellFormedWriter::AddToAttrHashTable(int32_t  attributeIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlWellFormedWriter*>::get(),
                            "AddToAttrHashTable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, attributeIndex);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
