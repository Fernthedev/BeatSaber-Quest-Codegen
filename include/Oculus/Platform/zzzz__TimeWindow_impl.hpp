#pragma once
#include "Oculus/Platform/zzzz__TimeWindow_def.hpp"
constexpr void Oculus::Platform::TimeWindow::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& Oculus::Platform::TimeWindow::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& Oculus::Platform::TimeWindow::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::TimeWindow::TimeWindow(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::Oculus::Platform::TimeWindow  Oculus::Platform::TimeWindow::Unknown{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Platform::TimeWindow  Oculus::Platform::TimeWindow::OneHour{static_cast<int32_t>(0x1)};
constexpr ::Oculus::Platform::TimeWindow  Oculus::Platform::TimeWindow::OneDay{static_cast<int32_t>(0x2)};
constexpr ::Oculus::Platform::TimeWindow  Oculus::Platform::TimeWindow::OneWeek{static_cast<int32_t>(0x3)};
constexpr ::Oculus::Platform::TimeWindow  Oculus::Platform::TimeWindow::ThirtyDays{static_cast<int32_t>(0x4)};
constexpr ::Oculus::Platform::TimeWindow  Oculus::Platform::TimeWindow::NinetyDays{static_cast<int32_t>(0x5)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
