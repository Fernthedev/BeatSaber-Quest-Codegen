#pragma once
#include "System/Xml/Schema/zzzz__XsdDateTimeFlags_def.hpp"
constexpr void System::Xml::Schema::XsdDateTimeFlags::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Xml::Schema::XsdDateTimeFlags::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Xml::Schema::XsdDateTimeFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::Schema::XsdDateTimeFlags::XsdDateTimeFlags(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Xml::Schema::XsdDateTimeFlags  System::Xml::Schema::XsdDateTimeFlags::DateTime{static_cast<int32_t>(0x1)};
constexpr ::System::Xml::Schema::XsdDateTimeFlags  System::Xml::Schema::XsdDateTimeFlags::Time{static_cast<int32_t>(0x2)};
constexpr ::System::Xml::Schema::XsdDateTimeFlags  System::Xml::Schema::XsdDateTimeFlags::Date{static_cast<int32_t>(0x4)};
constexpr ::System::Xml::Schema::XsdDateTimeFlags  System::Xml::Schema::XsdDateTimeFlags::GYearMonth{static_cast<int32_t>(0x8)};
constexpr ::System::Xml::Schema::XsdDateTimeFlags  System::Xml::Schema::XsdDateTimeFlags::GYear{static_cast<int32_t>(0x10)};
constexpr ::System::Xml::Schema::XsdDateTimeFlags  System::Xml::Schema::XsdDateTimeFlags::GMonthDay{static_cast<int32_t>(0x20)};
constexpr ::System::Xml::Schema::XsdDateTimeFlags  System::Xml::Schema::XsdDateTimeFlags::GDay{static_cast<int32_t>(0x40)};
constexpr ::System::Xml::Schema::XsdDateTimeFlags  System::Xml::Schema::XsdDateTimeFlags::GMonth{static_cast<int32_t>(0x80)};
constexpr ::System::Xml::Schema::XsdDateTimeFlags  System::Xml::Schema::XsdDateTimeFlags::XdrDateTimeNoTz{static_cast<int32_t>(0x100)};
constexpr ::System::Xml::Schema::XsdDateTimeFlags  System::Xml::Schema::XsdDateTimeFlags::XdrDateTime{static_cast<int32_t>(0x200)};
constexpr ::System::Xml::Schema::XsdDateTimeFlags  System::Xml::Schema::XsdDateTimeFlags::XdrTimeNoTz{static_cast<int32_t>(0x400)};
constexpr ::System::Xml::Schema::XsdDateTimeFlags  System::Xml::Schema::XsdDateTimeFlags::AllXsd{static_cast<int32_t>(0xff)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
