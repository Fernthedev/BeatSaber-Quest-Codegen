#pragma once
#include "System/Xml/Schema/zzzz__XmlSchemaContentProcessing_def.hpp"
constexpr void System::Xml::Schema::XmlSchemaContentProcessing::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Xml::Schema::XmlSchemaContentProcessing::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Xml::Schema::XmlSchemaContentProcessing::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::Schema::XmlSchemaContentProcessing::XmlSchemaContentProcessing(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Xml::Schema::XmlSchemaContentProcessing  System::Xml::Schema::XmlSchemaContentProcessing::None{static_cast<int32_t>(0x0)};
constexpr ::System::Xml::Schema::XmlSchemaContentProcessing  System::Xml::Schema::XmlSchemaContentProcessing::Skip{static_cast<int32_t>(0x1)};
constexpr ::System::Xml::Schema::XmlSchemaContentProcessing  System::Xml::Schema::XmlSchemaContentProcessing::Lax{static_cast<int32_t>(0x2)};
constexpr ::System::Xml::Schema::XmlSchemaContentProcessing  System::Xml::Schema::XmlSchemaContentProcessing::Strict{static_cast<int32_t>(0x3)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
