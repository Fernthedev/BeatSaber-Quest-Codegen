#pragma once
#include "System/Xml/zzzz__ValidationType_def.hpp"
constexpr void System::Xml::ValidationType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Xml::ValidationType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Xml::ValidationType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::ValidationType::ValidationType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Xml::ValidationType  System::Xml::ValidationType::None{static_cast<int32_t>(0x0)};
constexpr ::System::Xml::ValidationType  System::Xml::ValidationType::Auto{static_cast<int32_t>(0x1)};
constexpr ::System::Xml::ValidationType  System::Xml::ValidationType::DTD{static_cast<int32_t>(0x2)};
constexpr ::System::Xml::ValidationType  System::Xml::ValidationType::XDR{static_cast<int32_t>(0x3)};
constexpr ::System::Xml::ValidationType  System::Xml::ValidationType::Schema{static_cast<int32_t>(0x4)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
