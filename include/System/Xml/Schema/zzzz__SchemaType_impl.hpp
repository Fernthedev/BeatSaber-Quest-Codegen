#pragma once
#include "System/Xml/Schema/zzzz__SchemaType_def.hpp"
constexpr void System::Xml::Schema::SchemaType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Xml::Schema::SchemaType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Xml::Schema::SchemaType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::Schema::SchemaType::SchemaType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Xml::Schema::SchemaType  System::Xml::Schema::SchemaType::None{static_cast<int32_t>(0x0)};
constexpr ::System::Xml::Schema::SchemaType  System::Xml::Schema::SchemaType::DTD{static_cast<int32_t>(0x1)};
constexpr ::System::Xml::Schema::SchemaType  System::Xml::Schema::SchemaType::XDR{static_cast<int32_t>(0x2)};
constexpr ::System::Xml::Schema::SchemaType  System::Xml::Schema::SchemaType::XSD{static_cast<int32_t>(0x3)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
