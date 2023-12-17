#pragma once
#include "System/Xml/zzzz__AttributeProperties_def.hpp"
constexpr void System::Xml::AttributeProperties::__set_value__(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t& System::Xml::AttributeProperties::__get_value__()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint32_t const& System::Xml::AttributeProperties::__get_value__() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::AttributeProperties::AttributeProperties(uint32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Xml::AttributeProperties  System::Xml::AttributeProperties::DEFAULT{static_cast<uint32_t>(0x4020100u)};
constexpr ::System::Xml::AttributeProperties  System::Xml::AttributeProperties::URI{static_cast<uint32_t>(0x40201u)};
constexpr ::System::Xml::AttributeProperties  System::Xml::AttributeProperties::BOOLEAN{static_cast<uint32_t>(0x2000402u)};
constexpr ::System::Xml::AttributeProperties  System::Xml::AttributeProperties::NAME{static_cast<uint32_t>(0x4020004u)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
