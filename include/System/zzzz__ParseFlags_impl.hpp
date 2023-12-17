#pragma once
#include "System/zzzz__ParseFlags_def.hpp"
constexpr void System::ParseFlags::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::ParseFlags::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::ParseFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::ParseFlags::ParseFlags(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::ParseFlags  System::ParseFlags::HaveYear{static_cast<int32_t>(0x1)};
constexpr ::System::ParseFlags  System::ParseFlags::HaveMonth{static_cast<int32_t>(0x2)};
constexpr ::System::ParseFlags  System::ParseFlags::HaveDay{static_cast<int32_t>(0x4)};
constexpr ::System::ParseFlags  System::ParseFlags::HaveHour{static_cast<int32_t>(0x8)};
constexpr ::System::ParseFlags  System::ParseFlags::HaveMinute{static_cast<int32_t>(0x10)};
constexpr ::System::ParseFlags  System::ParseFlags::HaveSecond{static_cast<int32_t>(0x20)};
constexpr ::System::ParseFlags  System::ParseFlags::HaveTime{static_cast<int32_t>(0x40)};
constexpr ::System::ParseFlags  System::ParseFlags::HaveDate{static_cast<int32_t>(0x80)};
constexpr ::System::ParseFlags  System::ParseFlags::TimeZoneUsed{static_cast<int32_t>(0x100)};
constexpr ::System::ParseFlags  System::ParseFlags::TimeZoneUtc{static_cast<int32_t>(0x200)};
constexpr ::System::ParseFlags  System::ParseFlags::ParsedMonthName{static_cast<int32_t>(0x400)};
constexpr ::System::ParseFlags  System::ParseFlags::CaptureOffset{static_cast<int32_t>(0x800)};
constexpr ::System::ParseFlags  System::ParseFlags::YearDefault{static_cast<int32_t>(0x1000)};
constexpr ::System::ParseFlags  System::ParseFlags::Rfc1123Pattern{static_cast<int32_t>(0x2000)};
constexpr ::System::ParseFlags  System::ParseFlags::UtcSortPattern{static_cast<int32_t>(0x4000)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
