#pragma once
#include "System/Globalization/zzzz__DateTimeFormatFlags_def.hpp"
constexpr void System::Globalization::DateTimeFormatFlags::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Globalization::DateTimeFormatFlags::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Globalization::DateTimeFormatFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Globalization::DateTimeFormatFlags::DateTimeFormatFlags(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Globalization::DateTimeFormatFlags  System::Globalization::DateTimeFormatFlags::None{static_cast<int32_t>(0x0)};
constexpr ::System::Globalization::DateTimeFormatFlags  System::Globalization::DateTimeFormatFlags::UseGenitiveMonth{static_cast<int32_t>(0x1)};
constexpr ::System::Globalization::DateTimeFormatFlags  System::Globalization::DateTimeFormatFlags::UseLeapYearMonth{static_cast<int32_t>(0x2)};
constexpr ::System::Globalization::DateTimeFormatFlags  System::Globalization::DateTimeFormatFlags::UseSpacesInMonthNames{static_cast<int32_t>(0x4)};
constexpr ::System::Globalization::DateTimeFormatFlags  System::Globalization::DateTimeFormatFlags::UseHebrewRule{static_cast<int32_t>(0x8)};
constexpr ::System::Globalization::DateTimeFormatFlags  System::Globalization::DateTimeFormatFlags::UseSpacesInDayNames{static_cast<int32_t>(0x10)};
constexpr ::System::Globalization::DateTimeFormatFlags  System::Globalization::DateTimeFormatFlags::UseDigitPrefixInTokens{static_cast<int32_t>(0x20)};
constexpr ::System::Globalization::DateTimeFormatFlags  System::Globalization::DateTimeFormatFlags::NotInitialized{static_cast<int32_t>(0xffffffff)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
