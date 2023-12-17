#pragma once
#include "System/Xml/zzzz__ElementProperties_def.hpp"
constexpr void System::Xml::ElementProperties::__set_value__(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t& System::Xml::ElementProperties::__get_value__()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint32_t const& System::Xml::ElementProperties::__get_value__() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::ElementProperties::ElementProperties(uint32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Xml::ElementProperties  System::Xml::ElementProperties::DEFAULT{static_cast<uint32_t>(0x4020100u)};
constexpr ::System::Xml::ElementProperties  System::Xml::ElementProperties::URI_PARENT{static_cast<uint32_t>(0x8040201u)};
constexpr ::System::Xml::ElementProperties  System::Xml::ElementProperties::BOOL_PARENT{static_cast<uint32_t>(0x10080402u)};
constexpr ::System::Xml::ElementProperties  System::Xml::ElementProperties::NAME_PARENT{static_cast<uint32_t>(0x20100804u)};
constexpr ::System::Xml::ElementProperties  System::Xml::ElementProperties::EMPTY{static_cast<uint32_t>(0x40201008u)};
constexpr ::System::Xml::ElementProperties  System::Xml::ElementProperties::NO_ENTITIES{static_cast<uint32_t>(0x80402010u)};
constexpr ::System::Xml::ElementProperties  System::Xml::ElementProperties::HEAD{static_cast<uint32_t>(0x80804020u)};
constexpr ::System::Xml::ElementProperties  System::Xml::ElementProperties::BLOCK_WS{static_cast<uint32_t>(0x808040u)};
constexpr ::System::Xml::ElementProperties  System::Xml::ElementProperties::HAS_NS{static_cast<uint32_t>(0x1008080u)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
