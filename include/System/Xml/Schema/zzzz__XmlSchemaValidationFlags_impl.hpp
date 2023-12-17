#pragma once
#include "System/Xml/Schema/zzzz__XmlSchemaValidationFlags_def.hpp"
constexpr void System::Xml::Schema::XmlSchemaValidationFlags::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Xml::Schema::XmlSchemaValidationFlags::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Xml::Schema::XmlSchemaValidationFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::Schema::XmlSchemaValidationFlags::XmlSchemaValidationFlags(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Xml::Schema::XmlSchemaValidationFlags  System::Xml::Schema::XmlSchemaValidationFlags::None{static_cast<int32_t>(0x0)};
constexpr ::System::Xml::Schema::XmlSchemaValidationFlags  System::Xml::Schema::XmlSchemaValidationFlags::ProcessInlineSchema{static_cast<int32_t>(0x1)};
constexpr ::System::Xml::Schema::XmlSchemaValidationFlags  System::Xml::Schema::XmlSchemaValidationFlags::ProcessSchemaLocation{static_cast<int32_t>(0x2)};
constexpr ::System::Xml::Schema::XmlSchemaValidationFlags  System::Xml::Schema::XmlSchemaValidationFlags::ReportValidationWarnings{static_cast<int32_t>(0x4)};
constexpr ::System::Xml::Schema::XmlSchemaValidationFlags  System::Xml::Schema::XmlSchemaValidationFlags::ProcessIdentityConstraints{static_cast<int32_t>(0x8)};
constexpr ::System::Xml::Schema::XmlSchemaValidationFlags  System::Xml::Schema::XmlSchemaValidationFlags::AllowXmlAttributes{static_cast<int32_t>(0x10)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
