#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__DtdParser_def.hpp"
#include "System/Xml/zzzz__IDtdInfo_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaException_def.hpp"
#include "System/Xml/zzzz__IDtdParser_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaElementDecl_def.hpp"
#include "System/Xml/zzzz__DtdParser_def.hpp"
#include "System/Xml/Schema/zzzz__ParticleContentValidator_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSeverityType_def.hpp"
#include "System/Xml/zzzz__IDtdParserAdapter_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Xml/zzzz__XmlCharType_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaAttDef_def.hpp"
#include "System/Xml/zzzz__IDtdParserAdapterWithValidation_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaInfo_def.hpp"
#include "System/Xml/zzzz__LineInfo_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaEntity_def.hpp"
constexpr void System::Xml::__DtdParser__Token::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Xml::__DtdParser__Token::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Xml::__DtdParser__Token::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::__DtdParser__Token::__DtdParser__Token(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Xml::__DtdParser__Token  System::Xml::__DtdParser__Token::CDATA{static_cast<int32_t>(0x0)};
constexpr ::System::Xml::__DtdParser__Token  System::Xml::__DtdParser__Token::_cordl_ID{static_cast<int32_t>(0x1)};
constexpr ::System::Xml::__DtdParser__Token  System::Xml::__DtdParser__Token::IDREF{static_cast<int32_t>(0x2)};
constexpr ::System::Xml::__DtdParser__Token  System::Xml::__DtdParser__Token::IDREFS{static_cast<int32_t>(0x3)};
constexpr ::System::Xml::__DtdParser__Token  System::Xml::__DtdParser__Token::ENTITY{static_cast<int32_t>(0x4)};
constexpr ::System::Xml::__DtdParser__Token  System::Xml::__DtdParser__Token::ENTITIES{static_cast<int32_t>(0x5)};
constexpr ::System::Xml::__DtdParser__Token  System::Xml::__DtdParser__Token::NMTOKEN{static_cast<int32_t>(0x6)};
constexpr ::System::Xml::__DtdParser__Token  System::Xml::__DtdParser__Token::NMTOKENS{static_cast<int32_t>(0x7)};
constexpr ::System::Xml::__DtdParser__Token  System::Xml::__DtdParser__Token::NOTATION{static_cast<int32_t>(0x8)};
constexpr ::System::Xml::__DtdParser__Token  System::Xml::__DtdParser__Token::None{static_cast<int32_t>(0x9)};
constexpr ::System::Xml::__DtdParser__Token  System::Xml::__DtdParser__Token::PERef{static_cast<int32_t>(0xa)};
constexpr ::System::Xml::__DtdParser__Token  System::Xml::__DtdParser__Token::AttlistDecl{static_cast<int32_t>(0xb)};
constexpr ::System::Xml::__DtdParser__Token  System::Xml::__DtdParser__Token::ElementDecl{static_cast<int32_t>(0xc)};
constexpr ::System::Xml::__DtdParser__Token  System::Xml::__DtdParser__Token::EntityDecl{static_cast<int32_t>(0xd)};
constexpr ::System::Xml::__DtdParser__Token  System::Xml::__DtdParser__Token::NotationDecl{static_cast<int32_t>(0xe)};
constexpr ::System::Xml::__DtdParser__Token  System::Xml::__DtdParser__Token::Comment{static_cast<int32_t>(0xf)};
constexpr ::System::Xml::__DtdParser__Token  System::Xml::__DtdParser__Token::PI{static_cast<int32_t>(0x10)};
constexpr ::System::Xml::__DtdParser__Token  System::Xml::__DtdParser__Token::CondSectionStart{static_cast<int32_t>(0x11)};
constexpr ::System::Xml::__DtdParser__Token  System::Xml::__DtdParser__Token::CondSectionEnd{static_cast<int32_t>(0x12)};
constexpr ::System::Xml::__DtdParser__Token  System::Xml::__DtdParser__Token::Eof{static_cast<int32_t>(0x13)};
constexpr ::System::Xml::__DtdParser__Token  System::Xml::__DtdParser__Token::REQUIRED{static_cast<int32_t>(0x14)};
constexpr ::System::Xml::__DtdParser__Token  System::Xml::__DtdParser__Token::IMPLIED{static_cast<int32_t>(0x15)};
constexpr ::System::Xml::__DtdParser__Token  System::Xml::__DtdParser__Token::FIXED{static_cast<int32_t>(0x16)};
constexpr ::System::Xml::__DtdParser__Token  System::Xml::__DtdParser__Token::QName{static_cast<int32_t>(0x17)};
constexpr ::System::Xml::__DtdParser__Token  System::Xml::__DtdParser__Token::Name{static_cast<int32_t>(0x18)};
constexpr ::System::Xml::__DtdParser__Token  System::Xml::__DtdParser__Token::Nmtoken{static_cast<int32_t>(0x19)};
constexpr ::System::Xml::__DtdParser__Token  System::Xml::__DtdParser__Token::Quote{static_cast<int32_t>(0x1a)};
constexpr ::System::Xml::__DtdParser__Token  System::Xml::__DtdParser__Token::LeftParen{static_cast<int32_t>(0x1b)};
constexpr ::System::Xml::__DtdParser__Token  System::Xml::__DtdParser__Token::RightParen{static_cast<int32_t>(0x1c)};
constexpr ::System::Xml::__DtdParser__Token  System::Xml::__DtdParser__Token::GreaterThan{static_cast<int32_t>(0x1d)};
constexpr ::System::Xml::__DtdParser__Token  System::Xml::__DtdParser__Token::Or{static_cast<int32_t>(0x1e)};
constexpr ::System::Xml::__DtdParser__Token  System::Xml::__DtdParser__Token::LeftBracket{static_cast<int32_t>(0x1f)};
constexpr ::System::Xml::__DtdParser__Token  System::Xml::__DtdParser__Token::RightBracket{static_cast<int32_t>(0x20)};
constexpr ::System::Xml::__DtdParser__Token  System::Xml::__DtdParser__Token::PUBLIC{static_cast<int32_t>(0x21)};
constexpr ::System::Xml::__DtdParser__Token  System::Xml::__DtdParser__Token::SYSTEM{static_cast<int32_t>(0x22)};
constexpr ::System::Xml::__DtdParser__Token  System::Xml::__DtdParser__Token::Literal{static_cast<int32_t>(0x23)};
constexpr ::System::Xml::__DtdParser__Token  System::Xml::__DtdParser__Token::DOCTYPE{static_cast<int32_t>(0x24)};
constexpr ::System::Xml::__DtdParser__Token  System::Xml::__DtdParser__Token::NData{static_cast<int32_t>(0x25)};
constexpr ::System::Xml::__DtdParser__Token  System::Xml::__DtdParser__Token::Percent{static_cast<int32_t>(0x26)};
constexpr ::System::Xml::__DtdParser__Token  System::Xml::__DtdParser__Token::Star{static_cast<int32_t>(0x27)};
constexpr ::System::Xml::__DtdParser__Token  System::Xml::__DtdParser__Token::QMark{static_cast<int32_t>(0x28)};
constexpr ::System::Xml::__DtdParser__Token  System::Xml::__DtdParser__Token::Plus{static_cast<int32_t>(0x29)};
constexpr ::System::Xml::__DtdParser__Token  System::Xml::__DtdParser__Token::PCDATA{static_cast<int32_t>(0x2a)};
constexpr ::System::Xml::__DtdParser__Token  System::Xml::__DtdParser__Token::Comma{static_cast<int32_t>(0x2b)};
constexpr ::System::Xml::__DtdParser__Token  System::Xml::__DtdParser__Token::ANY{static_cast<int32_t>(0x2c)};
constexpr ::System::Xml::__DtdParser__Token  System::Xml::__DtdParser__Token::EMPTY{static_cast<int32_t>(0x2d)};
constexpr ::System::Xml::__DtdParser__Token  System::Xml::__DtdParser__Token::IGNORE{static_cast<int32_t>(0x2e)};
constexpr ::System::Xml::__DtdParser__Token  System::Xml::__DtdParser__Token::INCLUDE{static_cast<int32_t>(0x2f)};
constexpr void System::Xml::__DtdParser__ScanningFunction::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Xml::__DtdParser__ScanningFunction::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Xml::__DtdParser__ScanningFunction::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::__DtdParser__ScanningFunction::__DtdParser__ScanningFunction(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Xml::__DtdParser__ScanningFunction  System::Xml::__DtdParser__ScanningFunction::SubsetContent{static_cast<int32_t>(0x0)};
constexpr ::System::Xml::__DtdParser__ScanningFunction  System::Xml::__DtdParser__ScanningFunction::Name{static_cast<int32_t>(0x1)};
constexpr ::System::Xml::__DtdParser__ScanningFunction  System::Xml::__DtdParser__ScanningFunction::QName{static_cast<int32_t>(0x2)};
constexpr ::System::Xml::__DtdParser__ScanningFunction  System::Xml::__DtdParser__ScanningFunction::Nmtoken{static_cast<int32_t>(0x3)};
constexpr ::System::Xml::__DtdParser__ScanningFunction  System::Xml::__DtdParser__ScanningFunction::Doctype1{static_cast<int32_t>(0x4)};
constexpr ::System::Xml::__DtdParser__ScanningFunction  System::Xml::__DtdParser__ScanningFunction::Doctype2{static_cast<int32_t>(0x5)};
constexpr ::System::Xml::__DtdParser__ScanningFunction  System::Xml::__DtdParser__ScanningFunction::Element1{static_cast<int32_t>(0x6)};
constexpr ::System::Xml::__DtdParser__ScanningFunction  System::Xml::__DtdParser__ScanningFunction::Element2{static_cast<int32_t>(0x7)};
constexpr ::System::Xml::__DtdParser__ScanningFunction  System::Xml::__DtdParser__ScanningFunction::Element3{static_cast<int32_t>(0x8)};
constexpr ::System::Xml::__DtdParser__ScanningFunction  System::Xml::__DtdParser__ScanningFunction::Element4{static_cast<int32_t>(0x9)};
constexpr ::System::Xml::__DtdParser__ScanningFunction  System::Xml::__DtdParser__ScanningFunction::Element5{static_cast<int32_t>(0xa)};
constexpr ::System::Xml::__DtdParser__ScanningFunction  System::Xml::__DtdParser__ScanningFunction::Element6{static_cast<int32_t>(0xb)};
constexpr ::System::Xml::__DtdParser__ScanningFunction  System::Xml::__DtdParser__ScanningFunction::Element7{static_cast<int32_t>(0xc)};
constexpr ::System::Xml::__DtdParser__ScanningFunction  System::Xml::__DtdParser__ScanningFunction::Attlist1{static_cast<int32_t>(0xd)};
constexpr ::System::Xml::__DtdParser__ScanningFunction  System::Xml::__DtdParser__ScanningFunction::Attlist2{static_cast<int32_t>(0xe)};
constexpr ::System::Xml::__DtdParser__ScanningFunction  System::Xml::__DtdParser__ScanningFunction::Attlist3{static_cast<int32_t>(0xf)};
constexpr ::System::Xml::__DtdParser__ScanningFunction  System::Xml::__DtdParser__ScanningFunction::Attlist4{static_cast<int32_t>(0x10)};
constexpr ::System::Xml::__DtdParser__ScanningFunction  System::Xml::__DtdParser__ScanningFunction::Attlist5{static_cast<int32_t>(0x11)};
constexpr ::System::Xml::__DtdParser__ScanningFunction  System::Xml::__DtdParser__ScanningFunction::Attlist6{static_cast<int32_t>(0x12)};
constexpr ::System::Xml::__DtdParser__ScanningFunction  System::Xml::__DtdParser__ScanningFunction::Attlist7{static_cast<int32_t>(0x13)};
constexpr ::System::Xml::__DtdParser__ScanningFunction  System::Xml::__DtdParser__ScanningFunction::Entity1{static_cast<int32_t>(0x14)};
constexpr ::System::Xml::__DtdParser__ScanningFunction  System::Xml::__DtdParser__ScanningFunction::Entity2{static_cast<int32_t>(0x15)};
constexpr ::System::Xml::__DtdParser__ScanningFunction  System::Xml::__DtdParser__ScanningFunction::Entity3{static_cast<int32_t>(0x16)};
constexpr ::System::Xml::__DtdParser__ScanningFunction  System::Xml::__DtdParser__ScanningFunction::Notation1{static_cast<int32_t>(0x17)};
constexpr ::System::Xml::__DtdParser__ScanningFunction  System::Xml::__DtdParser__ScanningFunction::CondSection1{static_cast<int32_t>(0x18)};
constexpr ::System::Xml::__DtdParser__ScanningFunction  System::Xml::__DtdParser__ScanningFunction::CondSection2{static_cast<int32_t>(0x19)};
constexpr ::System::Xml::__DtdParser__ScanningFunction  System::Xml::__DtdParser__ScanningFunction::CondSection3{static_cast<int32_t>(0x1a)};
constexpr ::System::Xml::__DtdParser__ScanningFunction  System::Xml::__DtdParser__ScanningFunction::Literal{static_cast<int32_t>(0x1b)};
constexpr ::System::Xml::__DtdParser__ScanningFunction  System::Xml::__DtdParser__ScanningFunction::SystemId{static_cast<int32_t>(0x1c)};
constexpr ::System::Xml::__DtdParser__ScanningFunction  System::Xml::__DtdParser__ScanningFunction::PublicId1{static_cast<int32_t>(0x1d)};
constexpr ::System::Xml::__DtdParser__ScanningFunction  System::Xml::__DtdParser__ScanningFunction::PublicId2{static_cast<int32_t>(0x1e)};
constexpr ::System::Xml::__DtdParser__ScanningFunction  System::Xml::__DtdParser__ScanningFunction::ClosingTag{static_cast<int32_t>(0x1f)};
constexpr ::System::Xml::__DtdParser__ScanningFunction  System::Xml::__DtdParser__ScanningFunction::ParamEntitySpace{static_cast<int32_t>(0x20)};
constexpr ::System::Xml::__DtdParser__ScanningFunction  System::Xml::__DtdParser__ScanningFunction::None{static_cast<int32_t>(0x21)};
constexpr void System::Xml::__DtdParser__LiteralType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Xml::__DtdParser__LiteralType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Xml::__DtdParser__LiteralType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::__DtdParser__LiteralType::__DtdParser__LiteralType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Xml::__DtdParser__LiteralType  System::Xml::__DtdParser__LiteralType::AttributeValue{static_cast<int32_t>(0x0)};
constexpr ::System::Xml::__DtdParser__LiteralType  System::Xml::__DtdParser__LiteralType::EntityReplText{static_cast<int32_t>(0x1)};
constexpr ::System::Xml::__DtdParser__LiteralType  System::Xml::__DtdParser__LiteralType::SystemOrPublicID{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::System::Xml::__DtdParser__UndeclaredNotation._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__DtdParser__UndeclaredNotation::*)(::StringW, int32_t, int32_t)>(&::System::Xml::__DtdParser__UndeclaredNotation::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x289ca10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__DtdParser__UndeclaredNotation*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Xml::__DtdParser__UndeclaredNotation::__set_name(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Xml::__DtdParser__UndeclaredNotation::__get_name()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& System::Xml::__DtdParser__UndeclaredNotation::__get_name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void System::Xml::__DtdParser__UndeclaredNotation::__set_lineNo(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Xml::__DtdParser__UndeclaredNotation::__get_lineNo()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& System::Xml::__DtdParser__UndeclaredNotation::__get_lineNo() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr void System::Xml::__DtdParser__UndeclaredNotation::__set_linePos(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Xml::__DtdParser__UndeclaredNotation::__get_linePos()  {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
constexpr int32_t const& System::Xml::__DtdParser__UndeclaredNotation::__get_linePos() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
constexpr void System::Xml::__DtdParser__UndeclaredNotation::__set_next(::System::Xml::__DtdParser__UndeclaredNotation*  value)  {
::cordl_internals::setInstanceField<::System::Xml::__DtdParser__UndeclaredNotation*, 0x20>(this, std::forward<::System::Xml::__DtdParser__UndeclaredNotation*>(value));
}
constexpr ::System::Xml::__DtdParser__UndeclaredNotation* System::Xml::__DtdParser__UndeclaredNotation::__get_next()  {
return ::cordl_internals::getInstanceField<::System::Xml::__DtdParser__UndeclaredNotation*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::__DtdParser__UndeclaredNotation*> System::Xml::__DtdParser__UndeclaredNotation::__get_next() const {
return ::cordl_internals::getInstanceField<::System::Xml::__DtdParser__UndeclaredNotation*, 0x20>(this);
}
inline ::System::Xml::__DtdParser__UndeclaredNotation* System::Xml::__DtdParser__UndeclaredNotation::New_ctor(::StringW  name, int32_t  lineNo, int32_t  linePos)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Xml::__DtdParser__UndeclaredNotation*>(name, lineNo, linePos));
}
inline void System::Xml::__DtdParser__UndeclaredNotation::_ctor(::StringW  name, int32_t  lineNo, int32_t  linePos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__DtdParser__UndeclaredNotation*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, name, lineNo, linePos);
}
//  Writing Method size for method: ::System::Xml::__DtdParser__ParseElementOnlyContent_LocalFrame._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__DtdParser__ParseElementOnlyContent_LocalFrame::*)(int32_t)>(&::System::Xml::__DtdParser__ParseElementOnlyContent_LocalFrame::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x289ca50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__DtdParser__ParseElementOnlyContent_LocalFrame*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Xml::__DtdParser__ParseElementOnlyContent_LocalFrame::__set_startParenEntityId(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Xml::__DtdParser__ParseElementOnlyContent_LocalFrame::__get_startParenEntityId()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& System::Xml::__DtdParser__ParseElementOnlyContent_LocalFrame::__get_startParenEntityId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void System::Xml::__DtdParser__ParseElementOnlyContent_LocalFrame::__set_parsingSchema(::System::Xml::__DtdParser__Token  value)  {
::cordl_internals::setInstanceField<::System::Xml::__DtdParser__Token, 0x14>(this, std::forward<::System::Xml::__DtdParser__Token>(value));
}
constexpr ::System::Xml::__DtdParser__Token& System::Xml::__DtdParser__ParseElementOnlyContent_LocalFrame::__get_parsingSchema()  {
return ::cordl_internals::getInstanceField<::System::Xml::__DtdParser__Token, 0x14>(this);
}
constexpr ::System::Xml::__DtdParser__Token const& System::Xml::__DtdParser__ParseElementOnlyContent_LocalFrame::__get_parsingSchema() const {
return ::cordl_internals::getInstanceField<::System::Xml::__DtdParser__Token, 0x14>(this);
}
inline ::System::Xml::__DtdParser__ParseElementOnlyContent_LocalFrame* System::Xml::__DtdParser__ParseElementOnlyContent_LocalFrame::New_ctor(int32_t  startParentEntityIdParam)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Xml::__DtdParser__ParseElementOnlyContent_LocalFrame*>(startParentEntityIdParam));
}
inline void System::Xml::__DtdParser__ParseElementOnlyContent_LocalFrame::_ctor(int32_t  startParentEntityIdParam)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__DtdParser__ParseElementOnlyContent_LocalFrame*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, startParentEntityIdParam);
}
//  Writing Method size for method: ::System::Xml::DtdParser._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2892b4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::IDtdParser* (*)()>(&::System::Xml::DtdParser::Create)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x288d264;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.Initialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)(::System::Xml::IDtdParserAdapter*)>(&::System::Xml::DtdParser::Initialize)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x2892bd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::IDtdParserAdapter*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.InitializeFreeFloatingDtd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)(::StringW, ::StringW, ::StringW, ::StringW, ::StringW, ::System::Xml::IDtdParserAdapter*)>(&::System::Xml::DtdParser::InitializeFreeFloatingDtd)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x2892fa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "InitializeFreeFloatingDtd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::IDtdParserAdapter*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.System_Xml_IDtdParser_ParseInternalDtd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::IDtdInfo* (::System::Xml::DtdParser::*)(::System::Xml::IDtdParserAdapter*, bool)>(&::System::Xml::DtdParser::System_Xml_IDtdParser_ParseInternalDtd)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x28933f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "System.Xml.IDtdParser.ParseInternalDtd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::IDtdParserAdapter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.System_Xml_IDtdParser_ParseFreeFloatingDtd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::IDtdInfo* (::System::Xml::DtdParser::*)(::StringW, ::StringW, ::StringW, ::StringW, ::StringW, ::System::Xml::IDtdParserAdapter*)>(&::System::Xml::DtdParser::System_Xml_IDtdParser_ParseFreeFloatingDtd)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x289367c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "System.Xml.IDtdParser.ParseFreeFloatingDtd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::IDtdParserAdapter*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.get_ParsingInternalSubset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::get_ParsingInternalSubset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x28936a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "get_ParsingInternalSubset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.get_IgnoreEntityReferences
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::get_IgnoreEntityReferences)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x28936b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "get_IgnoreEntityReferences",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.get_SaveInternalSubsetValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::get_SaveInternalSubsetValue)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x28936c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "get_SaveInternalSubsetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.get_ParsingTopLevelMarkup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::get_ParsingTopLevelMarkup)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2893780;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "get_ParsingTopLevelMarkup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.get_SupportNamespaces
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::get_SupportNamespaces)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28937b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "get_SupportNamespaces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.get_Normalize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::get_Normalize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28937b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "get_Normalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.Parse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)(bool)>(&::System::Xml::DtdParser::Parse)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x2893420;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "Parse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ParseInDocumentDtd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)(bool)>(&::System::Xml::DtdParser::ParseInDocumentDtd)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2893814;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ParseInDocumentDtd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ParseFreeFloatingDtd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ParseFreeFloatingDtd)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x28937c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ParseFreeFloatingDtd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ParseInternalSubset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ParseInternalSubset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2894cc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ParseInternalSubset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ParseExternalSubset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ParseExternalSubset)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x2894ccc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ParseExternalSubset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ParseSubset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ParseSubset)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x2894e70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ParseSubset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ParseAttlistDecl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ParseAttlistDecl)> {
  constexpr static std::size_t size = 0x5c8;
  constexpr static std::size_t addrs = 0x28951cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ParseAttlistDecl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ParseAttlistType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)(::System::Xml::Schema::SchemaAttDef*, ::System::Xml::Schema::SchemaElementDecl*, bool)>(&::System::Xml::DtdParser::ParseAttlistType)> {
  constexpr static std::size_t size = 0x55c;
  constexpr static std::size_t addrs = 0x2896c00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ParseAttlistType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SchemaAttDef*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SchemaElementDecl*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ParseAttlistDefault
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)(::System::Xml::Schema::SchemaAttDef*, bool)>(&::System::Xml::DtdParser::ParseAttlistDefault)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x289715c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ParseAttlistDefault",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SchemaAttDef*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ParseElementDecl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ParseElementDecl)> {
  constexpr static std::size_t size = 0x394;
  constexpr static std::size_t addrs = 0x2895794;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ParseElementDecl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ParseElementOnlyContent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)(::System::Xml::Schema::ParticleContentValidator*, int32_t)>(&::System::Xml::DtdParser::ParseElementOnlyContent)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x28978dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ParseElementOnlyContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::ParticleContentValidator*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ParseHowMany
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)(::System::Xml::Schema::ParticleContentValidator*)>(&::System::Xml::DtdParser::ParseHowMany)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2897c2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ParseHowMany",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::ParticleContentValidator*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ParseElementMixedContent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)(::System::Xml::Schema::ParticleContentValidator*, int32_t)>(&::System::Xml::DtdParser::ParseElementMixedContent)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x2897638;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ParseElementMixedContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::ParticleContentValidator*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ParseEntityDecl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ParseEntityDecl)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x2895b28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ParseEntityDecl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ParseNotationDecl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ParseNotationDecl)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x2895e84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ParseNotationDecl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.AddUndeclaredNotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)(::StringW)>(&::System::Xml::DtdParser::AddUndeclaredNotation)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2897400;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "AddUndeclaredNotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ParseComment
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ParseComment)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x2896078;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ParseComment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ParsePI
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ParsePI)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x28962bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ParsePI",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ParseCondSection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ParseCondSection)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x2896488;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ParseCondSection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ParseExternalId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)(::System::Xml::__DtdParser__Token, ::System::Xml::__DtdParser__Token, ByRef<::StringW>, ByRef<::StringW>)>(&::System::Xml::DtdParser::ParseExternalId)> {
  constexpr static std::size_t size = 0x514;
  constexpr static std::size_t addrs = 0x28947ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ParseExternalId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::__DtdParser__Token>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::__DtdParser__Token>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.GetToken
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::__DtdParser__Token (::System::Xml::DtdParser::*)(bool)>(&::System::Xml::DtdParser::GetToken)> {
  constexpr static std::size_t size = 0x8ac;
  constexpr static std::size_t addrs = 0x2893d44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "GetToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanSubsetContent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::__DtdParser__Token (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ScanSubsetContent)> {
  constexpr static std::size_t size = 0x704;
  constexpr static std::size_t addrs = 0x289840c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanSubsetContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanNameExpected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::__DtdParser__Token (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ScanNameExpected)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x28983a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanNameExpected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanQNameExpected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::__DtdParser__Token (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ScanQNameExpected)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x28983c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanQNameExpected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanNmtokenExpected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::__DtdParser__Token (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ScanNmtokenExpected)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x28983ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanNmtokenExpected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanDoctype1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::__DtdParser__Token (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ScanDoctype1)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2898b10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanDoctype1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanDoctype2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::__DtdParser__Token (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ScanDoctype2)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2898c2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanDoctype2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanClosingTag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::__DtdParser__Token (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ScanClosingTag)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x289ae60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanClosingTag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanElement1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::__DtdParser__Token (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ScanElement1)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x2898cd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanElement1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanElement2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::__DtdParser__Token (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ScanElement2)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x2898ea4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanElement2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanElement3
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::__DtdParser__Token (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ScanElement3)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2899048;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanElement3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanElement4
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::__DtdParser__Token (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ScanElement4)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x28990c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanElement4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanElement5
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::__DtdParser__Token (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ScanElement5)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2899194;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanElement5",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanElement6
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::__DtdParser__Token (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ScanElement6)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2899280;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanElement6",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanElement7
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::__DtdParser__Token (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ScanElement7)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2899350;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanElement7",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanAttlist1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::__DtdParser__Token (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ScanAttlist1)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x28993b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanAttlist1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanAttlist2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::__DtdParser__Token (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ScanAttlist2)> {
  constexpr static std::size_t size = 0x680;
  constexpr static std::size_t addrs = 0x2899474;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanAttlist2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanAttlist3
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::__DtdParser__Token (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ScanAttlist3)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2899af4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanAttlist3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanAttlist4
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::__DtdParser__Token (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ScanAttlist4)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2899b94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanAttlist4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanAttlist5
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::__DtdParser__Token (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ScanAttlist5)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2899c64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanAttlist5",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanAttlist6
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::__DtdParser__Token (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ScanAttlist6)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x2899d34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanAttlist6",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanAttlist7
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::__DtdParser__Token (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ScanAttlist7)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x289a0a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanAttlist7",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanLiteral
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::__DtdParser__Token (::System::Xml::DtdParser::*)(::System::Xml::__DtdParser__LiteralType)>(&::System::Xml::DtdParser::ScanLiteral)> {
  constexpr static std::size_t size = 0xa88;
  constexpr static std::size_t addrs = 0x289b4a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanLiteral",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::__DtdParser__LiteralType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanEntityName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlQualifiedName* (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ScanEntityName)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x289bf2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanEntityName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanNotation1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::__DtdParser__Token (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ScanNotation1)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x289a164;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanNotation1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanSystemId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::__DtdParser__Token (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ScanSystemId)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x289a25c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanSystemId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanEntity1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::__DtdParser__Token (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ScanEntity1)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x289a42c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanEntity1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanEntity2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::__DtdParser__Token (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ScanEntity2)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x289a4a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanEntity2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanEntity3
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::__DtdParser__Token (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ScanEntity3)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x289a5cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanEntity3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanPublicId1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::__DtdParser__Token (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ScanPublicId1)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x289a310;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanPublicId1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanPublicId2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::__DtdParser__Token (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ScanPublicId2)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x289a3c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanPublicId2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanCondSection1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::__DtdParser__Token (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ScanCondSection1)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x289a6e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanCondSection1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanCondSection2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::__DtdParser__Token (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ScanCondSection2)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x289a97c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanCondSection2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanCondSection3
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::__DtdParser__Token (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ScanCondSection3)> {
  constexpr static std::size_t size = 0x44c;
  constexpr static std::size_t addrs = 0x289aa14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanCondSection3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ScanName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x289b160;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanQName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ScanQName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x289b168;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanQName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanQName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)(bool)>(&::System::Xml::DtdParser::ScanQName)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x289c28c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanQName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ReadDataInName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ReadDataInName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x289c50c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ReadDataInName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanNmtoken
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ScanNmtoken)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x289b170;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanNmtoken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.EatPublicKeyword
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::EatPublicKeyword)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x289b2dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "EatPublicKeyword",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.EatSystemKeyword
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::EatSystemKeyword)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x289b3c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "EatSystemKeyword",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.GetNameQualified
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlQualifiedName* (::System::Xml::DtdParser::*)(bool)>(&::System::Xml::DtdParser::GetNameQualified)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x289463c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "GetNameQualified",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.GetNameString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::GetNameString)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x28973e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "GetNameString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.GetNmtokenString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::GetNmtokenString)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2897560;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "GetNmtokenString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.GetValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::GetValue)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x28975dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "GetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.GetValueWithStrippedSpaces
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::GetValueWithStrippedSpaces)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x289757c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "GetValueWithStrippedSpaces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ReadData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ReadData)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x289aef4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ReadData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.LoadParsingBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::LoadParsingBuffer)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x2893bc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "LoadParsingBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.SaveParsingBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::SaveParsingBuffer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2894cc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "SaveParsingBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.SaveParsingBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)(int32_t)>(&::System::Xml::DtdParser::SaveParsingBuffer)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x2896788;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "SaveParsingBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.HandleEntityReference
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::DtdParser::*)(bool, bool, bool)>(&::System::Xml::DtdParser::HandleEntityReference)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2898298;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "HandleEntityReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.HandleEntityReference
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::DtdParser::*)(::System::Xml::XmlQualifiedName*, bool, bool, bool)>(&::System::Xml::DtdParser::HandleEntityReference)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x289c778;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "HandleEntityReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.HandleEntityEnd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::DtdParser::*)(bool)>(&::System::Xml::DtdParser::HandleEntityEnd)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x289afb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "HandleEntityEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.VerifyEntityReference
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::SchemaEntity* (::System::Xml::DtdParser::*)(::System::Xml::XmlQualifiedName*, bool, bool, bool)>(&::System::Xml::DtdParser::VerifyEntityReference)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x289c08c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "VerifyEntityReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.SendValidationEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)(int32_t, ::System::Xml::Schema::XmlSeverityType, ::StringW, ::StringW)>(&::System::Xml::DtdParser::SendValidationEvent)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x28966ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "SendValidationEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSeverityType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.SendValidationEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)(::System::Xml::Schema::XmlSeverityType, ::StringW, ::StringW)>(&::System::Xml::DtdParser::SendValidationEvent)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x289731c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "SendValidationEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSeverityType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.SendValidationEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)(::System::Xml::Schema::XmlSeverityType, ::System::Xml::Schema::XmlSchemaException*)>(&::System::Xml::DtdParser::SendValidationEvent)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x2893a88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "SendValidationEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSeverityType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaException*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.IsAttributeValueType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::DtdParser::*)(::System::Xml::__DtdParser__Token)>(&::System::Xml::DtdParser::IsAttributeValueType)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2897310;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "IsAttributeValueType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::__DtdParser__Token>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.get_LineNo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::get_LineNo)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x28968dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "get_LineNo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.get_LinePos
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::get_LinePos)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2896980;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "get_LinePos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.get_BaseUriStr
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::get_BaseUriStr)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2893964;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "get_BaseUriStr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.OnUnexpectedError
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::OnUnexpectedError)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x28945f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "OnUnexpectedError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.Throw
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)(int32_t, ::StringW)>(&::System::Xml::DtdParser::Throw)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2896420;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "Throw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.Throw
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)(int32_t, ::StringW, ::StringW)>(&::System::Xml::DtdParser::Throw)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x2897c9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "Throw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.Throw
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)(int32_t, ::StringW, ::ArrayW<::StringW,::Array<::StringW>*>)>(&::System::Xml::DtdParser::Throw)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x2898030;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "Throw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW,::Array<::StringW>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.Throw
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)(::StringW, ::StringW, int32_t, int32_t)>(&::System::Xml::DtdParser::Throw)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x2896a30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "Throw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ThrowInvalidChar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)(int32_t, ::StringW, int32_t)>(&::System::Xml::DtdParser::ThrowInvalidChar)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2893374;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ThrowInvalidChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ThrowInvalidChar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)(::ArrayW<char16_t,::Array<char16_t>*>, int32_t, int32_t)>(&::System::Xml::DtdParser::ThrowInvalidChar)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2898218;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ThrowInvalidChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t,::Array<char16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ThrowUnexpectedToken
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)(int32_t, ::StringW)>(&::System::Xml::DtdParser::ThrowUnexpectedToken)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28968d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ThrowUnexpectedToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ThrowUnexpectedToken
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)(int32_t, ::StringW, ::StringW)>(&::System::Xml::DtdParser::ThrowUnexpectedToken)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x2897e84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ThrowUnexpectedToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ParseUnexpectedToken
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::DtdParser::*)(int32_t)>(&::System::Xml::DtdParser::ParseUnexpectedToken)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x28982e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ParseUnexpectedToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.StripSpaces
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::System::Xml::DtdParser::StripSpaces)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x289c550;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "StripSpaces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Xml::IDtdParser"
constexpr  System::Xml::DtdParser::operator ::System::Xml::IDtdParser*() noexcept {
return static_cast<::System::Xml::IDtdParser*>(static_cast<void*>(this));
}
constexpr void System::Xml::DtdParser::__set_readerAdapter(::System::Xml::IDtdParserAdapter*  value)  {
::cordl_internals::setInstanceField<::System::Xml::IDtdParserAdapter*, 0x10>(this, std::forward<::System::Xml::IDtdParserAdapter*>(value));
}
constexpr ::System::Xml::IDtdParserAdapter* System::Xml::DtdParser::__get_readerAdapter()  {
return ::cordl_internals::getInstanceField<::System::Xml::IDtdParserAdapter*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::IDtdParserAdapter*> System::Xml::DtdParser::__get_readerAdapter() const {
return ::cordl_internals::getInstanceField<::System::Xml::IDtdParserAdapter*, 0x10>(this);
}
constexpr void System::Xml::DtdParser::__set_readerAdapterWithValidation(::System::Xml::IDtdParserAdapterWithValidation*  value)  {
::cordl_internals::setInstanceField<::System::Xml::IDtdParserAdapterWithValidation*, 0x18>(this, std::forward<::System::Xml::IDtdParserAdapterWithValidation*>(value));
}
constexpr ::System::Xml::IDtdParserAdapterWithValidation* System::Xml::DtdParser::__get_readerAdapterWithValidation()  {
return ::cordl_internals::getInstanceField<::System::Xml::IDtdParserAdapterWithValidation*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::IDtdParserAdapterWithValidation*> System::Xml::DtdParser::__get_readerAdapterWithValidation() const {
return ::cordl_internals::getInstanceField<::System::Xml::IDtdParserAdapterWithValidation*, 0x18>(this);
}
constexpr void System::Xml::DtdParser::__set_nameTable(::System::Xml::XmlNameTable*  value)  {
::cordl_internals::setInstanceField<::System::Xml::XmlNameTable*, 0x20>(this, std::forward<::System::Xml::XmlNameTable*>(value));
}
constexpr ::System::Xml::XmlNameTable* System::Xml::DtdParser::__get_nameTable()  {
return ::cordl_internals::getInstanceField<::System::Xml::XmlNameTable*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNameTable*> System::Xml::DtdParser::__get_nameTable() const {
return ::cordl_internals::getInstanceField<::System::Xml::XmlNameTable*, 0x20>(this);
}
constexpr void System::Xml::DtdParser::__set_schemaInfo(::System::Xml::Schema::SchemaInfo*  value)  {
::cordl_internals::setInstanceField<::System::Xml::Schema::SchemaInfo*, 0x28>(this, std::forward<::System::Xml::Schema::SchemaInfo*>(value));
}
constexpr ::System::Xml::Schema::SchemaInfo* System::Xml::DtdParser::__get_schemaInfo()  {
return ::cordl_internals::getInstanceField<::System::Xml::Schema::SchemaInfo*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::SchemaInfo*> System::Xml::DtdParser::__get_schemaInfo() const {
return ::cordl_internals::getInstanceField<::System::Xml::Schema::SchemaInfo*, 0x28>(this);
}
constexpr void System::Xml::DtdParser::__set_xmlCharType(::System::Xml::XmlCharType  value)  {
::cordl_internals::setInstanceField<::System::Xml::XmlCharType, 0x30>(this, std::forward<::System::Xml::XmlCharType>(value));
}
constexpr ::System::Xml::XmlCharType& System::Xml::DtdParser::__get_xmlCharType()  {
return ::cordl_internals::getInstanceField<::System::Xml::XmlCharType, 0x30>(this);
}
constexpr ::System::Xml::XmlCharType const& System::Xml::DtdParser::__get_xmlCharType() const {
return ::cordl_internals::getInstanceField<::System::Xml::XmlCharType, 0x30>(this);
}
constexpr void System::Xml::DtdParser::__set_systemId(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Xml::DtdParser::__get_systemId()  {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this);
}
constexpr ::StringW const& System::Xml::DtdParser::__get_systemId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this);
}
constexpr void System::Xml::DtdParser::__set_publicId(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x40>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Xml::DtdParser::__get_publicId()  {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this);
}
constexpr ::StringW const& System::Xml::DtdParser::__get_publicId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this);
}
constexpr void System::Xml::DtdParser::__set_normalize(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x48>(this, std::forward<bool>(value));
}
constexpr bool& System::Xml::DtdParser::__get_normalize()  {
return ::cordl_internals::getInstanceField<bool, 0x48>(this);
}
constexpr bool const& System::Xml::DtdParser::__get_normalize() const {
return ::cordl_internals::getInstanceField<bool, 0x48>(this);
}
constexpr void System::Xml::DtdParser::__set_validate(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x49>(this, std::forward<bool>(value));
}
constexpr bool& System::Xml::DtdParser::__get_validate()  {
return ::cordl_internals::getInstanceField<bool, 0x49>(this);
}
constexpr bool const& System::Xml::DtdParser::__get_validate() const {
return ::cordl_internals::getInstanceField<bool, 0x49>(this);
}
constexpr void System::Xml::DtdParser::__set_supportNamespaces(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x4a>(this, std::forward<bool>(value));
}
constexpr bool& System::Xml::DtdParser::__get_supportNamespaces()  {
return ::cordl_internals::getInstanceField<bool, 0x4a>(this);
}
constexpr bool const& System::Xml::DtdParser::__get_supportNamespaces() const {
return ::cordl_internals::getInstanceField<bool, 0x4a>(this);
}
constexpr void System::Xml::DtdParser::__set_v1Compat(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x4b>(this, std::forward<bool>(value));
}
constexpr bool& System::Xml::DtdParser::__get_v1Compat()  {
return ::cordl_internals::getInstanceField<bool, 0x4b>(this);
}
constexpr bool const& System::Xml::DtdParser::__get_v1Compat() const {
return ::cordl_internals::getInstanceField<bool, 0x4b>(this);
}
constexpr void System::Xml::DtdParser::__set_chars(::ArrayW<char16_t,::Array<char16_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<char16_t,::Array<char16_t>*>, 0x50>(this, std::forward<::ArrayW<char16_t,::Array<char16_t>*>>(value));
}
constexpr ::ArrayW<char16_t,::Array<char16_t>*>& System::Xml::DtdParser::__get_chars()  {
return ::cordl_internals::getInstanceField<::ArrayW<char16_t,::Array<char16_t>*>, 0x50>(this);
}
constexpr ::ArrayW<char16_t,::Array<char16_t>*> const& System::Xml::DtdParser::__get_chars() const {
return ::cordl_internals::getInstanceField<::ArrayW<char16_t,::Array<char16_t>*>, 0x50>(this);
}
constexpr void System::Xml::DtdParser::__set_charsUsed(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x58>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Xml::DtdParser::__get_charsUsed()  {
return ::cordl_internals::getInstanceField<int32_t, 0x58>(this);
}
constexpr int32_t const& System::Xml::DtdParser::__get_charsUsed() const {
return ::cordl_internals::getInstanceField<int32_t, 0x58>(this);
}
constexpr void System::Xml::DtdParser::__set_curPos(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x5c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Xml::DtdParser::__get_curPos()  {
return ::cordl_internals::getInstanceField<int32_t, 0x5c>(this);
}
constexpr int32_t const& System::Xml::DtdParser::__get_curPos() const {
return ::cordl_internals::getInstanceField<int32_t, 0x5c>(this);
}
constexpr void System::Xml::DtdParser::__set_scanningFunction(::System::Xml::__DtdParser__ScanningFunction  value)  {
::cordl_internals::setInstanceField<::System::Xml::__DtdParser__ScanningFunction, 0x60>(this, std::forward<::System::Xml::__DtdParser__ScanningFunction>(value));
}
constexpr ::System::Xml::__DtdParser__ScanningFunction& System::Xml::DtdParser::__get_scanningFunction()  {
return ::cordl_internals::getInstanceField<::System::Xml::__DtdParser__ScanningFunction, 0x60>(this);
}
constexpr ::System::Xml::__DtdParser__ScanningFunction const& System::Xml::DtdParser::__get_scanningFunction() const {
return ::cordl_internals::getInstanceField<::System::Xml::__DtdParser__ScanningFunction, 0x60>(this);
}
constexpr void System::Xml::DtdParser::__set_nextScaningFunction(::System::Xml::__DtdParser__ScanningFunction  value)  {
::cordl_internals::setInstanceField<::System::Xml::__DtdParser__ScanningFunction, 0x64>(this, std::forward<::System::Xml::__DtdParser__ScanningFunction>(value));
}
constexpr ::System::Xml::__DtdParser__ScanningFunction& System::Xml::DtdParser::__get_nextScaningFunction()  {
return ::cordl_internals::getInstanceField<::System::Xml::__DtdParser__ScanningFunction, 0x64>(this);
}
constexpr ::System::Xml::__DtdParser__ScanningFunction const& System::Xml::DtdParser::__get_nextScaningFunction() const {
return ::cordl_internals::getInstanceField<::System::Xml::__DtdParser__ScanningFunction, 0x64>(this);
}
constexpr void System::Xml::DtdParser::__set_savedScanningFunction(::System::Xml::__DtdParser__ScanningFunction  value)  {
::cordl_internals::setInstanceField<::System::Xml::__DtdParser__ScanningFunction, 0x68>(this, std::forward<::System::Xml::__DtdParser__ScanningFunction>(value));
}
constexpr ::System::Xml::__DtdParser__ScanningFunction& System::Xml::DtdParser::__get_savedScanningFunction()  {
return ::cordl_internals::getInstanceField<::System::Xml::__DtdParser__ScanningFunction, 0x68>(this);
}
constexpr ::System::Xml::__DtdParser__ScanningFunction const& System::Xml::DtdParser::__get_savedScanningFunction() const {
return ::cordl_internals::getInstanceField<::System::Xml::__DtdParser__ScanningFunction, 0x68>(this);
}
constexpr void System::Xml::DtdParser::__set_whitespaceSeen(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x6c>(this, std::forward<bool>(value));
}
constexpr bool& System::Xml::DtdParser::__get_whitespaceSeen()  {
return ::cordl_internals::getInstanceField<bool, 0x6c>(this);
}
constexpr bool const& System::Xml::DtdParser::__get_whitespaceSeen() const {
return ::cordl_internals::getInstanceField<bool, 0x6c>(this);
}
constexpr void System::Xml::DtdParser::__set_tokenStartPos(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x70>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Xml::DtdParser::__get_tokenStartPos()  {
return ::cordl_internals::getInstanceField<int32_t, 0x70>(this);
}
constexpr int32_t const& System::Xml::DtdParser::__get_tokenStartPos() const {
return ::cordl_internals::getInstanceField<int32_t, 0x70>(this);
}
constexpr void System::Xml::DtdParser::__set_colonPos(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x74>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Xml::DtdParser::__get_colonPos()  {
return ::cordl_internals::getInstanceField<int32_t, 0x74>(this);
}
constexpr int32_t const& System::Xml::DtdParser::__get_colonPos() const {
return ::cordl_internals::getInstanceField<int32_t, 0x74>(this);
}
constexpr void System::Xml::DtdParser::__set_internalSubsetValueSb(::System::Text::StringBuilder*  value)  {
::cordl_internals::setInstanceField<::System::Text::StringBuilder*, 0x78>(this, std::forward<::System::Text::StringBuilder*>(value));
}
constexpr ::System::Text::StringBuilder* System::Xml::DtdParser::__get_internalSubsetValueSb()  {
return ::cordl_internals::getInstanceField<::System::Text::StringBuilder*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> System::Xml::DtdParser::__get_internalSubsetValueSb() const {
return ::cordl_internals::getInstanceField<::System::Text::StringBuilder*, 0x78>(this);
}
constexpr void System::Xml::DtdParser::__set_externalEntitiesDepth(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x80>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Xml::DtdParser::__get_externalEntitiesDepth()  {
return ::cordl_internals::getInstanceField<int32_t, 0x80>(this);
}
constexpr int32_t const& System::Xml::DtdParser::__get_externalEntitiesDepth() const {
return ::cordl_internals::getInstanceField<int32_t, 0x80>(this);
}
constexpr void System::Xml::DtdParser::__set_currentEntityId(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x84>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Xml::DtdParser::__get_currentEntityId()  {
return ::cordl_internals::getInstanceField<int32_t, 0x84>(this);
}
constexpr int32_t const& System::Xml::DtdParser::__get_currentEntityId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x84>(this);
}
constexpr void System::Xml::DtdParser::__set_freeFloatingDtd(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x88>(this, std::forward<bool>(value));
}
constexpr bool& System::Xml::DtdParser::__get_freeFloatingDtd()  {
return ::cordl_internals::getInstanceField<bool, 0x88>(this);
}
constexpr bool const& System::Xml::DtdParser::__get_freeFloatingDtd() const {
return ::cordl_internals::getInstanceField<bool, 0x88>(this);
}
constexpr void System::Xml::DtdParser::__set_hasFreeFloatingInternalSubset(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x89>(this, std::forward<bool>(value));
}
constexpr bool& System::Xml::DtdParser::__get_hasFreeFloatingInternalSubset()  {
return ::cordl_internals::getInstanceField<bool, 0x89>(this);
}
constexpr bool const& System::Xml::DtdParser::__get_hasFreeFloatingInternalSubset() const {
return ::cordl_internals::getInstanceField<bool, 0x89>(this);
}
constexpr void System::Xml::DtdParser::__set_stringBuilder(::System::Text::StringBuilder*  value)  {
::cordl_internals::setInstanceField<::System::Text::StringBuilder*, 0x90>(this, std::forward<::System::Text::StringBuilder*>(value));
}
constexpr ::System::Text::StringBuilder* System::Xml::DtdParser::__get_stringBuilder()  {
return ::cordl_internals::getInstanceField<::System::Text::StringBuilder*, 0x90>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> System::Xml::DtdParser::__get_stringBuilder() const {
return ::cordl_internals::getInstanceField<::System::Text::StringBuilder*, 0x90>(this);
}
constexpr void System::Xml::DtdParser::__set_condSectionDepth(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x98>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Xml::DtdParser::__get_condSectionDepth()  {
return ::cordl_internals::getInstanceField<int32_t, 0x98>(this);
}
constexpr int32_t const& System::Xml::DtdParser::__get_condSectionDepth() const {
return ::cordl_internals::getInstanceField<int32_t, 0x98>(this);
}
constexpr void System::Xml::DtdParser::__set_literalLineInfo(::System::Xml::LineInfo  value)  {
::cordl_internals::setInstanceField<::System::Xml::LineInfo, 0x9c>(this, std::forward<::System::Xml::LineInfo>(value));
}
constexpr ::System::Xml::LineInfo& System::Xml::DtdParser::__get_literalLineInfo()  {
return ::cordl_internals::getInstanceField<::System::Xml::LineInfo, 0x9c>(this);
}
constexpr ::System::Xml::LineInfo const& System::Xml::DtdParser::__get_literalLineInfo() const {
return ::cordl_internals::getInstanceField<::System::Xml::LineInfo, 0x9c>(this);
}
constexpr void System::Xml::DtdParser::__set_literalQuoteChar(char16_t  value)  {
::cordl_internals::setInstanceField<char16_t, 0xa4>(this, std::forward<char16_t>(value));
}
constexpr char16_t& System::Xml::DtdParser::__get_literalQuoteChar()  {
return ::cordl_internals::getInstanceField<char16_t, 0xa4>(this);
}
constexpr char16_t const& System::Xml::DtdParser::__get_literalQuoteChar() const {
return ::cordl_internals::getInstanceField<char16_t, 0xa4>(this);
}
constexpr void System::Xml::DtdParser::__set_documentBaseUri(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0xa8>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Xml::DtdParser::__get_documentBaseUri()  {
return ::cordl_internals::getInstanceField<::StringW, 0xa8>(this);
}
constexpr ::StringW const& System::Xml::DtdParser::__get_documentBaseUri() const {
return ::cordl_internals::getInstanceField<::StringW, 0xa8>(this);
}
constexpr void System::Xml::DtdParser::__set_externalDtdBaseUri(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0xb0>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Xml::DtdParser::__get_externalDtdBaseUri()  {
return ::cordl_internals::getInstanceField<::StringW, 0xb0>(this);
}
constexpr ::StringW const& System::Xml::DtdParser::__get_externalDtdBaseUri() const {
return ::cordl_internals::getInstanceField<::StringW, 0xb0>(this);
}
constexpr void System::Xml::DtdParser::__set_undeclaredNotations(::System::Collections::Generic::Dictionary_2<::StringW,::System::Xml::__DtdParser__UndeclaredNotation*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Xml::__DtdParser__UndeclaredNotation*>*, 0xb8>(this, std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::System::Xml::__DtdParser__UndeclaredNotation*>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Xml::__DtdParser__UndeclaredNotation*>* System::Xml::DtdParser::__get_undeclaredNotations()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Xml::__DtdParser__UndeclaredNotation*>*, 0xb8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,::System::Xml::__DtdParser__UndeclaredNotation*>*> System::Xml::DtdParser::__get_undeclaredNotations() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Xml::__DtdParser__UndeclaredNotation*>*, 0xb8>(this);
}
constexpr void System::Xml::DtdParser::__set_condSectionEntityIds(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0xc0>(this, std::forward<::ArrayW<int32_t,::Array<int32_t>*>>(value));
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*>& System::Xml::DtdParser::__get_condSectionEntityIds()  {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0xc0>(this);
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& System::Xml::DtdParser::__get_condSectionEntityIds() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0xc0>(this);
}
inline ::System::Xml::DtdParser* System::Xml::DtdParser::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Xml::DtdParser*>());
}
inline void System::Xml::DtdParser::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Xml::IDtdParser* System::Xml::DtdParser::Create()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::IDtdParser*, false>(nullptr, ___internal_method);
}
inline void System::Xml::DtdParser::Initialize(::System::Xml::IDtdParserAdapter*  readerAdapter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::IDtdParserAdapter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, readerAdapter);
}
inline void System::Xml::DtdParser::InitializeFreeFloatingDtd(::StringW  baseUri, ::StringW  docTypeName, ::StringW  publicId, ::StringW  systemId, ::StringW  internalSubset, ::System::Xml::IDtdParserAdapter*  adapter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "InitializeFreeFloatingDtd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::IDtdParserAdapter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, baseUri, docTypeName, publicId, systemId, internalSubset, adapter);
}
inline ::System::Xml::IDtdInfo* System::Xml::DtdParser::System_Xml_IDtdParser_ParseInternalDtd(::System::Xml::IDtdParserAdapter*  adapter, bool  saveInternalSubset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "System.Xml.IDtdParser.ParseInternalDtd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::IDtdParserAdapter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::IDtdInfo*, false>(*this, ___internal_method, adapter, saveInternalSubset);
}
inline ::System::Xml::IDtdInfo* System::Xml::DtdParser::System_Xml_IDtdParser_ParseFreeFloatingDtd(::StringW  baseUri, ::StringW  docTypeName, ::StringW  publicId, ::StringW  systemId, ::StringW  internalSubset, ::System::Xml::IDtdParserAdapter*  adapter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "System.Xml.IDtdParser.ParseFreeFloatingDtd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::IDtdParserAdapter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::IDtdInfo*, false>(*this, ___internal_method, baseUri, docTypeName, publicId, systemId, internalSubset, adapter);
}
inline bool System::Xml::DtdParser::get_ParsingInternalSubset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "get_ParsingInternalSubset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool System::Xml::DtdParser::get_IgnoreEntityReferences()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "get_IgnoreEntityReferences",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool System::Xml::DtdParser::get_SaveInternalSubsetValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "get_SaveInternalSubsetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool System::Xml::DtdParser::get_ParsingTopLevelMarkup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "get_ParsingTopLevelMarkup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool System::Xml::DtdParser::get_SupportNamespaces()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "get_SupportNamespaces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool System::Xml::DtdParser::get_Normalize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "get_Normalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void System::Xml::DtdParser::Parse(bool  saveInternalSubset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "Parse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, saveInternalSubset);
}
inline void System::Xml::DtdParser::ParseInDocumentDtd(bool  saveInternalSubset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ParseInDocumentDtd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, saveInternalSubset);
}
inline void System::Xml::DtdParser::ParseFreeFloatingDtd()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ParseFreeFloatingDtd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Xml::DtdParser::ParseInternalSubset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ParseInternalSubset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Xml::DtdParser::ParseExternalSubset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ParseExternalSubset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Xml::DtdParser::ParseSubset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ParseSubset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Xml::DtdParser::ParseAttlistDecl()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ParseAttlistDecl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Xml::DtdParser::ParseAttlistType(::System::Xml::Schema::SchemaAttDef*  attrDef, ::System::Xml::Schema::SchemaElementDecl*  elementDecl, bool  ignoreErrors)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ParseAttlistType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SchemaAttDef*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SchemaElementDecl*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, attrDef, elementDecl, ignoreErrors);
}
inline void System::Xml::DtdParser::ParseAttlistDefault(::System::Xml::Schema::SchemaAttDef*  attrDef, bool  ignoreErrors)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ParseAttlistDefault",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SchemaAttDef*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, attrDef, ignoreErrors);
}
inline void System::Xml::DtdParser::ParseElementDecl()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ParseElementDecl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Xml::DtdParser::ParseElementOnlyContent(::System::Xml::Schema::ParticleContentValidator*  pcv, int32_t  startParenEntityId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ParseElementOnlyContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::ParticleContentValidator*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, pcv, startParenEntityId);
}
inline void System::Xml::DtdParser::ParseHowMany(::System::Xml::Schema::ParticleContentValidator*  pcv)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ParseHowMany",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::ParticleContentValidator*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, pcv);
}
inline void System::Xml::DtdParser::ParseElementMixedContent(::System::Xml::Schema::ParticleContentValidator*  pcv, int32_t  startParenEntityId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ParseElementMixedContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::ParticleContentValidator*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, pcv, startParenEntityId);
}
inline void System::Xml::DtdParser::ParseEntityDecl()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ParseEntityDecl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Xml::DtdParser::ParseNotationDecl()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ParseNotationDecl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Xml::DtdParser::AddUndeclaredNotation(::StringW  notationName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "AddUndeclaredNotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, notationName);
}
inline void System::Xml::DtdParser::ParseComment()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ParseComment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Xml::DtdParser::ParsePI()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ParsePI",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Xml::DtdParser::ParseCondSection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ParseCondSection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Xml::DtdParser::ParseExternalId(::System::Xml::__DtdParser__Token  idTokenType, ::System::Xml::__DtdParser__Token  declType, ByRef<::StringW>  publicId, ByRef<::StringW>  systemId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ParseExternalId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::__DtdParser__Token>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::__DtdParser__Token>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, idTokenType, declType, publicId, systemId);
}
inline ::System::Xml::__DtdParser__Token System::Xml::DtdParser::GetToken(bool  needWhiteSpace)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "GetToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::__DtdParser__Token, false>(*this, ___internal_method, needWhiteSpace);
}
inline ::System::Xml::__DtdParser__Token System::Xml::DtdParser::ScanSubsetContent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanSubsetContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::__DtdParser__Token, false>(*this, ___internal_method);
}
inline ::System::Xml::__DtdParser__Token System::Xml::DtdParser::ScanNameExpected()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanNameExpected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::__DtdParser__Token, false>(*this, ___internal_method);
}
inline ::System::Xml::__DtdParser__Token System::Xml::DtdParser::ScanQNameExpected()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanQNameExpected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::__DtdParser__Token, false>(*this, ___internal_method);
}
inline ::System::Xml::__DtdParser__Token System::Xml::DtdParser::ScanNmtokenExpected()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanNmtokenExpected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::__DtdParser__Token, false>(*this, ___internal_method);
}
inline ::System::Xml::__DtdParser__Token System::Xml::DtdParser::ScanDoctype1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanDoctype1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::__DtdParser__Token, false>(*this, ___internal_method);
}
inline ::System::Xml::__DtdParser__Token System::Xml::DtdParser::ScanDoctype2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanDoctype2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::__DtdParser__Token, false>(*this, ___internal_method);
}
inline ::System::Xml::__DtdParser__Token System::Xml::DtdParser::ScanClosingTag()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanClosingTag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::__DtdParser__Token, false>(*this, ___internal_method);
}
inline ::System::Xml::__DtdParser__Token System::Xml::DtdParser::ScanElement1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanElement1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::__DtdParser__Token, false>(*this, ___internal_method);
}
inline ::System::Xml::__DtdParser__Token System::Xml::DtdParser::ScanElement2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanElement2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::__DtdParser__Token, false>(*this, ___internal_method);
}
inline ::System::Xml::__DtdParser__Token System::Xml::DtdParser::ScanElement3()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanElement3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::__DtdParser__Token, false>(*this, ___internal_method);
}
inline ::System::Xml::__DtdParser__Token System::Xml::DtdParser::ScanElement4()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanElement4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::__DtdParser__Token, false>(*this, ___internal_method);
}
inline ::System::Xml::__DtdParser__Token System::Xml::DtdParser::ScanElement5()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanElement5",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::__DtdParser__Token, false>(*this, ___internal_method);
}
inline ::System::Xml::__DtdParser__Token System::Xml::DtdParser::ScanElement6()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanElement6",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::__DtdParser__Token, false>(*this, ___internal_method);
}
inline ::System::Xml::__DtdParser__Token System::Xml::DtdParser::ScanElement7()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanElement7",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::__DtdParser__Token, false>(*this, ___internal_method);
}
inline ::System::Xml::__DtdParser__Token System::Xml::DtdParser::ScanAttlist1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanAttlist1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::__DtdParser__Token, false>(*this, ___internal_method);
}
inline ::System::Xml::__DtdParser__Token System::Xml::DtdParser::ScanAttlist2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanAttlist2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::__DtdParser__Token, false>(*this, ___internal_method);
}
inline ::System::Xml::__DtdParser__Token System::Xml::DtdParser::ScanAttlist3()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanAttlist3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::__DtdParser__Token, false>(*this, ___internal_method);
}
inline ::System::Xml::__DtdParser__Token System::Xml::DtdParser::ScanAttlist4()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanAttlist4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::__DtdParser__Token, false>(*this, ___internal_method);
}
inline ::System::Xml::__DtdParser__Token System::Xml::DtdParser::ScanAttlist5()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanAttlist5",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::__DtdParser__Token, false>(*this, ___internal_method);
}
inline ::System::Xml::__DtdParser__Token System::Xml::DtdParser::ScanAttlist6()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanAttlist6",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::__DtdParser__Token, false>(*this, ___internal_method);
}
inline ::System::Xml::__DtdParser__Token System::Xml::DtdParser::ScanAttlist7()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanAttlist7",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::__DtdParser__Token, false>(*this, ___internal_method);
}
inline ::System::Xml::__DtdParser__Token System::Xml::DtdParser::ScanLiteral(::System::Xml::__DtdParser__LiteralType  literalType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanLiteral",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::__DtdParser__LiteralType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::__DtdParser__Token, false>(*this, ___internal_method, literalType);
}
inline ::System::Xml::XmlQualifiedName* System::Xml::DtdParser::ScanEntityName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanEntityName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*, false>(*this, ___internal_method);
}
inline ::System::Xml::__DtdParser__Token System::Xml::DtdParser::ScanNotation1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanNotation1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::__DtdParser__Token, false>(*this, ___internal_method);
}
inline ::System::Xml::__DtdParser__Token System::Xml::DtdParser::ScanSystemId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanSystemId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::__DtdParser__Token, false>(*this, ___internal_method);
}
inline ::System::Xml::__DtdParser__Token System::Xml::DtdParser::ScanEntity1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanEntity1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::__DtdParser__Token, false>(*this, ___internal_method);
}
inline ::System::Xml::__DtdParser__Token System::Xml::DtdParser::ScanEntity2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanEntity2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::__DtdParser__Token, false>(*this, ___internal_method);
}
inline ::System::Xml::__DtdParser__Token System::Xml::DtdParser::ScanEntity3()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanEntity3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::__DtdParser__Token, false>(*this, ___internal_method);
}
inline ::System::Xml::__DtdParser__Token System::Xml::DtdParser::ScanPublicId1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanPublicId1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::__DtdParser__Token, false>(*this, ___internal_method);
}
inline ::System::Xml::__DtdParser__Token System::Xml::DtdParser::ScanPublicId2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanPublicId2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::__DtdParser__Token, false>(*this, ___internal_method);
}
inline ::System::Xml::__DtdParser__Token System::Xml::DtdParser::ScanCondSection1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanCondSection1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::__DtdParser__Token, false>(*this, ___internal_method);
}
inline ::System::Xml::__DtdParser__Token System::Xml::DtdParser::ScanCondSection2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanCondSection2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::__DtdParser__Token, false>(*this, ___internal_method);
}
inline ::System::Xml::__DtdParser__Token System::Xml::DtdParser::ScanCondSection3()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanCondSection3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::__DtdParser__Token, false>(*this, ___internal_method);
}
inline void System::Xml::DtdParser::ScanName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Xml::DtdParser::ScanQName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanQName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Xml::DtdParser::ScanQName(bool  isQName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanQName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, isQName);
}
inline bool System::Xml::DtdParser::ReadDataInName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ReadDataInName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void System::Xml::DtdParser::ScanNmtoken()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ScanNmtoken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool System::Xml::DtdParser::EatPublicKeyword()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "EatPublicKeyword",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool System::Xml::DtdParser::EatSystemKeyword()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "EatSystemKeyword",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::System::Xml::XmlQualifiedName* System::Xml::DtdParser::GetNameQualified(bool  canHavePrefix)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "GetNameQualified",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*, false>(*this, ___internal_method, canHavePrefix);
}
inline ::StringW System::Xml::DtdParser::GetNameString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "GetNameString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::StringW System::Xml::DtdParser::GetNmtokenString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "GetNmtokenString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::StringW System::Xml::DtdParser::GetValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "GetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::StringW System::Xml::DtdParser::GetValueWithStrippedSpaces()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "GetValueWithStrippedSpaces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline int32_t System::Xml::DtdParser::ReadData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ReadData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void System::Xml::DtdParser::LoadParsingBuffer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "LoadParsingBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Xml::DtdParser::SaveParsingBuffer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "SaveParsingBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Xml::DtdParser::SaveParsingBuffer(int32_t  internalSubsetValueEndPos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "SaveParsingBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, internalSubsetValueEndPos);
}
inline bool System::Xml::DtdParser::HandleEntityReference(bool  paramEntity, bool  inLiteral, bool  inAttribute)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "HandleEntityReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, paramEntity, inLiteral, inAttribute);
}
inline bool System::Xml::DtdParser::HandleEntityReference(::System::Xml::XmlQualifiedName*  entityName, bool  paramEntity, bool  inLiteral, bool  inAttribute)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "HandleEntityReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, entityName, paramEntity, inLiteral, inAttribute);
}
inline bool System::Xml::DtdParser::HandleEntityEnd(bool  inLiteral)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "HandleEntityEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, inLiteral);
}
inline ::System::Xml::Schema::SchemaEntity* System::Xml::DtdParser::VerifyEntityReference(::System::Xml::XmlQualifiedName*  entityName, bool  paramEntity, bool  mustBeDeclared, bool  inAttribute)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "VerifyEntityReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::SchemaEntity*, false>(*this, ___internal_method, entityName, paramEntity, mustBeDeclared, inAttribute);
}
inline void System::Xml::DtdParser::SendValidationEvent(int32_t  pos, ::System::Xml::Schema::XmlSeverityType  severity, ::StringW  code, ::StringW  arg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "SendValidationEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSeverityType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, pos, severity, code, arg);
}
inline void System::Xml::DtdParser::SendValidationEvent(::System::Xml::Schema::XmlSeverityType  severity, ::StringW  code, ::StringW  arg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "SendValidationEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSeverityType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, severity, code, arg);
}
inline void System::Xml::DtdParser::SendValidationEvent(::System::Xml::Schema::XmlSeverityType  severity, ::System::Xml::Schema::XmlSchemaException*  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "SendValidationEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSeverityType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaException*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, severity, e);
}
inline bool System::Xml::DtdParser::IsAttributeValueType(::System::Xml::__DtdParser__Token  token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "IsAttributeValueType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::__DtdParser__Token>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, token);
}
inline int32_t System::Xml::DtdParser::get_LineNo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "get_LineNo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline int32_t System::Xml::DtdParser::get_LinePos()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "get_LinePos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::StringW System::Xml::DtdParser::get_BaseUriStr()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "get_BaseUriStr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void System::Xml::DtdParser::OnUnexpectedError()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "OnUnexpectedError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Xml::DtdParser::Throw(int32_t  curPos, ::StringW  res)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "Throw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, curPos, res);
}
inline void System::Xml::DtdParser::Throw(int32_t  curPos, ::StringW  res, ::StringW  arg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "Throw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, curPos, res, arg);
}
inline void System::Xml::DtdParser::Throw(int32_t  curPos, ::StringW  res, ::ArrayW<::StringW,::Array<::StringW>*>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "Throw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW,::Array<::StringW>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, curPos, res, args);
}
inline void System::Xml::DtdParser::Throw(::StringW  res, ::StringW  arg, int32_t  lineNo, int32_t  linePos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "Throw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, res, arg, lineNo, linePos);
}
inline void System::Xml::DtdParser::ThrowInvalidChar(int32_t  pos, ::StringW  data, int32_t  invCharPos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ThrowInvalidChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, pos, data, invCharPos);
}
inline void System::Xml::DtdParser::ThrowInvalidChar(::ArrayW<char16_t,::Array<char16_t>*>  data, int32_t  length, int32_t  invCharPos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ThrowInvalidChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t,::Array<char16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, data, length, invCharPos);
}
inline void System::Xml::DtdParser::ThrowUnexpectedToken(int32_t  pos, ::StringW  expectedToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ThrowUnexpectedToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, pos, expectedToken);
}
inline void System::Xml::DtdParser::ThrowUnexpectedToken(int32_t  pos, ::StringW  expectedToken1, ::StringW  expectedToken2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ThrowUnexpectedToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, pos, expectedToken1, expectedToken2);
}
inline ::StringW System::Xml::DtdParser::ParseUnexpectedToken(int32_t  startPos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "ParseUnexpectedToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method, startPos);
}
inline ::StringW System::Xml::DtdParser::StripSpaces(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(),
                            "StripSpaces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, value);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
