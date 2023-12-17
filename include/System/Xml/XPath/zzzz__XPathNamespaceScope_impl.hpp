#pragma once
#include "System/Xml/XPath/zzzz__XPathNamespaceScope_def.hpp"
constexpr void System::Xml::XPath::XPathNamespaceScope::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Xml::XPath::XPathNamespaceScope::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Xml::XPath::XPathNamespaceScope::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::XPath::XPathNamespaceScope::XPathNamespaceScope(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Xml::XPath::XPathNamespaceScope  System::Xml::XPath::XPathNamespaceScope::All{static_cast<int32_t>(0x0)};
constexpr ::System::Xml::XPath::XPathNamespaceScope  System::Xml::XPath::XPathNamespaceScope::ExcludeXml{static_cast<int32_t>(0x1)};
constexpr ::System::Xml::XPath::XPathNamespaceScope  System::Xml::XPath::XPathNamespaceScope::Local{static_cast<int32_t>(0x2)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
