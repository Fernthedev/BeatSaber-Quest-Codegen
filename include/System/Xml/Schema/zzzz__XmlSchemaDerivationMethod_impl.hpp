#pragma once
#include "System/Xml/Schema/zzzz__XmlSchemaDerivationMethod_def.hpp"
constexpr void System::Xml::Schema::XmlSchemaDerivationMethod::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Xml::Schema::XmlSchemaDerivationMethod::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Xml::Schema::XmlSchemaDerivationMethod::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod::XmlSchemaDerivationMethod(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod  System::Xml::Schema::XmlSchemaDerivationMethod::Empty{static_cast<int32_t>(0x0)};
constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod  System::Xml::Schema::XmlSchemaDerivationMethod::Substitution{static_cast<int32_t>(0x1)};
constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod  System::Xml::Schema::XmlSchemaDerivationMethod::Extension{static_cast<int32_t>(0x2)};
constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod  System::Xml::Schema::XmlSchemaDerivationMethod::Restriction{static_cast<int32_t>(0x4)};
constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod  System::Xml::Schema::XmlSchemaDerivationMethod::List{static_cast<int32_t>(0x8)};
constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod  System::Xml::Schema::XmlSchemaDerivationMethod::Union{static_cast<int32_t>(0x10)};
constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod  System::Xml::Schema::XmlSchemaDerivationMethod::All{static_cast<int32_t>(0xff)};
constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod  System::Xml::Schema::XmlSchemaDerivationMethod::None{static_cast<int32_t>(0x100)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
