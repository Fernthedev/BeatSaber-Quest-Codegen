#pragma once
#include "System/Globalization/zzzz__DateTimeStyles_def.hpp"
constexpr void System::Globalization::DateTimeStyles::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Globalization::DateTimeStyles::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Globalization::DateTimeStyles::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Globalization::DateTimeStyles::DateTimeStyles(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Globalization::DateTimeStyles  System::Globalization::DateTimeStyles::None{static_cast<int32_t>(0x0)};
constexpr ::System::Globalization::DateTimeStyles  System::Globalization::DateTimeStyles::AllowLeadingWhite{static_cast<int32_t>(0x1)};
constexpr ::System::Globalization::DateTimeStyles  System::Globalization::DateTimeStyles::AllowTrailingWhite{static_cast<int32_t>(0x2)};
constexpr ::System::Globalization::DateTimeStyles  System::Globalization::DateTimeStyles::AllowInnerWhite{static_cast<int32_t>(0x4)};
constexpr ::System::Globalization::DateTimeStyles  System::Globalization::DateTimeStyles::AllowWhiteSpaces{static_cast<int32_t>(0x7)};
constexpr ::System::Globalization::DateTimeStyles  System::Globalization::DateTimeStyles::NoCurrentDateDefault{static_cast<int32_t>(0x8)};
constexpr ::System::Globalization::DateTimeStyles  System::Globalization::DateTimeStyles::AdjustToUniversal{static_cast<int32_t>(0x10)};
constexpr ::System::Globalization::DateTimeStyles  System::Globalization::DateTimeStyles::AssumeLocal{static_cast<int32_t>(0x20)};
constexpr ::System::Globalization::DateTimeStyles  System::Globalization::DateTimeStyles::AssumeUniversal{static_cast<int32_t>(0x40)};
constexpr ::System::Globalization::DateTimeStyles  System::Globalization::DateTimeStyles::RoundtripKind{static_cast<int32_t>(0x80)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
