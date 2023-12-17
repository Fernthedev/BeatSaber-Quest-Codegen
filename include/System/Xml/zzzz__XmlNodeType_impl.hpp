#pragma once
#include "System/Xml/zzzz__XmlNodeType_def.hpp"
constexpr void System::Xml::XmlNodeType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Xml::XmlNodeType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Xml::XmlNodeType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::XmlNodeType::XmlNodeType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Xml::XmlNodeType  System::Xml::XmlNodeType::None{static_cast<int32_t>(0x0)};
constexpr ::System::Xml::XmlNodeType  System::Xml::XmlNodeType::Element{static_cast<int32_t>(0x1)};
constexpr ::System::Xml::XmlNodeType  System::Xml::XmlNodeType::Attribute{static_cast<int32_t>(0x2)};
constexpr ::System::Xml::XmlNodeType  System::Xml::XmlNodeType::Text{static_cast<int32_t>(0x3)};
constexpr ::System::Xml::XmlNodeType  System::Xml::XmlNodeType::CDATA{static_cast<int32_t>(0x4)};
constexpr ::System::Xml::XmlNodeType  System::Xml::XmlNodeType::EntityReference{static_cast<int32_t>(0x5)};
constexpr ::System::Xml::XmlNodeType  System::Xml::XmlNodeType::Entity{static_cast<int32_t>(0x6)};
constexpr ::System::Xml::XmlNodeType  System::Xml::XmlNodeType::ProcessingInstruction{static_cast<int32_t>(0x7)};
constexpr ::System::Xml::XmlNodeType  System::Xml::XmlNodeType::Comment{static_cast<int32_t>(0x8)};
constexpr ::System::Xml::XmlNodeType  System::Xml::XmlNodeType::Document{static_cast<int32_t>(0x9)};
constexpr ::System::Xml::XmlNodeType  System::Xml::XmlNodeType::DocumentType{static_cast<int32_t>(0xa)};
constexpr ::System::Xml::XmlNodeType  System::Xml::XmlNodeType::DocumentFragment{static_cast<int32_t>(0xb)};
constexpr ::System::Xml::XmlNodeType  System::Xml::XmlNodeType::Notation{static_cast<int32_t>(0xc)};
constexpr ::System::Xml::XmlNodeType  System::Xml::XmlNodeType::Whitespace{static_cast<int32_t>(0xd)};
constexpr ::System::Xml::XmlNodeType  System::Xml::XmlNodeType::SignificantWhitespace{static_cast<int32_t>(0xe)};
constexpr ::System::Xml::XmlNodeType  System::Xml::XmlNodeType::EndElement{static_cast<int32_t>(0xf)};
constexpr ::System::Xml::XmlNodeType  System::Xml::XmlNodeType::EndEntity{static_cast<int32_t>(0x10)};
constexpr ::System::Xml::XmlNodeType  System::Xml::XmlNodeType::XmlDeclaration{static_cast<int32_t>(0x11)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
