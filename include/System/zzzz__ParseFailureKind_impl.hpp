#pragma once
#include "System/zzzz__ParseFailureKind_def.hpp"
constexpr void System::ParseFailureKind::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::ParseFailureKind::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::ParseFailureKind::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::ParseFailureKind::ParseFailureKind(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::ParseFailureKind  System::ParseFailureKind::None{static_cast<int32_t>(0x0)};
constexpr ::System::ParseFailureKind  System::ParseFailureKind::ArgumentNull{static_cast<int32_t>(0x1)};
constexpr ::System::ParseFailureKind  System::ParseFailureKind::Format{static_cast<int32_t>(0x2)};
constexpr ::System::ParseFailureKind  System::ParseFailureKind::FormatWithParameter{static_cast<int32_t>(0x3)};
constexpr ::System::ParseFailureKind  System::ParseFailureKind::FormatWithOriginalDateTime{static_cast<int32_t>(0x4)};
constexpr ::System::ParseFailureKind  System::ParseFailureKind::FormatWithFormatSpecifier{static_cast<int32_t>(0x5)};
constexpr ::System::ParseFailureKind  System::ParseFailureKind::FormatWithOriginalDateTimeAndParameter{static_cast<int32_t>(0x6)};
constexpr ::System::ParseFailureKind  System::ParseFailureKind::FormatBadDateTimeCalendar{static_cast<int32_t>(0x7)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
