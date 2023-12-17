#pragma once
#include "System/Xml/XPath/zzzz__XPathNodeType_def.hpp"
constexpr void System::Xml::XPath::XPathNodeType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Xml::XPath::XPathNodeType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Xml::XPath::XPathNodeType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::XPath::XPathNodeType::XPathNodeType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Xml::XPath::XPathNodeType  System::Xml::XPath::XPathNodeType::Root{static_cast<int32_t>(0x0)};
constexpr ::System::Xml::XPath::XPathNodeType  System::Xml::XPath::XPathNodeType::Element{static_cast<int32_t>(0x1)};
constexpr ::System::Xml::XPath::XPathNodeType  System::Xml::XPath::XPathNodeType::Attribute{static_cast<int32_t>(0x2)};
constexpr ::System::Xml::XPath::XPathNodeType  System::Xml::XPath::XPathNodeType::Namespace{static_cast<int32_t>(0x3)};
constexpr ::System::Xml::XPath::XPathNodeType  System::Xml::XPath::XPathNodeType::Text{static_cast<int32_t>(0x4)};
constexpr ::System::Xml::XPath::XPathNodeType  System::Xml::XPath::XPathNodeType::SignificantWhitespace{static_cast<int32_t>(0x5)};
constexpr ::System::Xml::XPath::XPathNodeType  System::Xml::XPath::XPathNodeType::Whitespace{static_cast<int32_t>(0x6)};
constexpr ::System::Xml::XPath::XPathNodeType  System::Xml::XPath::XPathNodeType::ProcessingInstruction{static_cast<int32_t>(0x7)};
constexpr ::System::Xml::XPath::XPathNodeType  System::Xml::XPath::XPathNodeType::Comment{static_cast<int32_t>(0x8)};
constexpr ::System::Xml::XPath::XPathNodeType  System::Xml::XPath::XPathNodeType::All{static_cast<int32_t>(0x9)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
