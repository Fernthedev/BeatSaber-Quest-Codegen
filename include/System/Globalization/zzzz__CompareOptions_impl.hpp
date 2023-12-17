#pragma once
#include "System/Globalization/zzzz__CompareOptions_def.hpp"
constexpr void System::Globalization::CompareOptions::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Globalization::CompareOptions::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Globalization::CompareOptions::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Globalization::CompareOptions::CompareOptions(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Globalization::CompareOptions  System::Globalization::CompareOptions::None{static_cast<int32_t>(0x0)};
constexpr ::System::Globalization::CompareOptions  System::Globalization::CompareOptions::IgnoreCase{static_cast<int32_t>(0x1)};
constexpr ::System::Globalization::CompareOptions  System::Globalization::CompareOptions::IgnoreNonSpace{static_cast<int32_t>(0x2)};
constexpr ::System::Globalization::CompareOptions  System::Globalization::CompareOptions::IgnoreSymbols{static_cast<int32_t>(0x4)};
constexpr ::System::Globalization::CompareOptions  System::Globalization::CompareOptions::IgnoreKanaType{static_cast<int32_t>(0x8)};
constexpr ::System::Globalization::CompareOptions  System::Globalization::CompareOptions::IgnoreWidth{static_cast<int32_t>(0x10)};
constexpr ::System::Globalization::CompareOptions  System::Globalization::CompareOptions::OrdinalIgnoreCase{static_cast<int32_t>(0x10000000)};
constexpr ::System::Globalization::CompareOptions  System::Globalization::CompareOptions::StringSort{static_cast<int32_t>(0x20000000)};
constexpr ::System::Globalization::CompareOptions  System::Globalization::CompareOptions::Ordinal{static_cast<int32_t>(0x40000000)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
