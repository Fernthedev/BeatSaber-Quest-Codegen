#pragma once
#include "Unity/Jobs/LowLevel/Unsafe/zzzz__ScheduleMode_def.hpp"
constexpr void Unity::Jobs::LowLevel::Unsafe::ScheduleMode::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& Unity::Jobs::LowLevel::Unsafe::ScheduleMode::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& Unity::Jobs::LowLevel::Unsafe::ScheduleMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Jobs::LowLevel::Unsafe::ScheduleMode::ScheduleMode(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::Unity::Jobs::LowLevel::Unsafe::ScheduleMode  Unity::Jobs::LowLevel::Unsafe::ScheduleMode::Run{static_cast<int32_t>(0x0)};
constexpr ::Unity::Jobs::LowLevel::Unsafe::ScheduleMode  Unity::Jobs::LowLevel::Unsafe::ScheduleMode::Batched{static_cast<int32_t>(0x1)};
constexpr ::Unity::Jobs::LowLevel::Unsafe::ScheduleMode  Unity::Jobs::LowLevel::Unsafe::ScheduleMode::Parallel{static_cast<int32_t>(0x1)};
constexpr ::Unity::Jobs::LowLevel::Unsafe::ScheduleMode  Unity::Jobs::LowLevel::Unsafe::ScheduleMode::Single{static_cast<int32_t>(0x2)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
