#pragma once
#include "Unity/Profiling/LowLevel/zzzz__MarkerFlags_def.hpp"
constexpr void Unity::Profiling::LowLevel::MarkerFlags::__set_value__(uint16_t  value)  {
::cordl_internals::setInstanceField<uint16_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint16_t>(value));
}
constexpr uint16_t& Unity::Profiling::LowLevel::MarkerFlags::__get_value__()  {
return ::cordl_internals::getInstanceField<uint16_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint16_t const& Unity::Profiling::LowLevel::MarkerFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "uint16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Profiling::LowLevel::MarkerFlags::MarkerFlags(uint16_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x2>() {this->value__ = value__;
}
constexpr ::Unity::Profiling::LowLevel::MarkerFlags  Unity::Profiling::LowLevel::MarkerFlags::Default{static_cast<uint16_t>(0x0u)};
constexpr ::Unity::Profiling::LowLevel::MarkerFlags  Unity::Profiling::LowLevel::MarkerFlags::Script{static_cast<uint16_t>(0x2u)};
constexpr ::Unity::Profiling::LowLevel::MarkerFlags  Unity::Profiling::LowLevel::MarkerFlags::ScriptInvoke{static_cast<uint16_t>(0x20u)};
constexpr ::Unity::Profiling::LowLevel::MarkerFlags  Unity::Profiling::LowLevel::MarkerFlags::ScriptDeepProfiler{static_cast<uint16_t>(0x40u)};
constexpr ::Unity::Profiling::LowLevel::MarkerFlags  Unity::Profiling::LowLevel::MarkerFlags::AvailabilityEditor{static_cast<uint16_t>(0x4u)};
constexpr ::Unity::Profiling::LowLevel::MarkerFlags  Unity::Profiling::LowLevel::MarkerFlags::AvailabilityNonDevelopment{static_cast<uint16_t>(0x8u)};
constexpr ::Unity::Profiling::LowLevel::MarkerFlags  Unity::Profiling::LowLevel::MarkerFlags::Warning{static_cast<uint16_t>(0x10u)};
constexpr ::Unity::Profiling::LowLevel::MarkerFlags  Unity::Profiling::LowLevel::MarkerFlags::Counter{static_cast<uint16_t>(0x80u)};
constexpr ::Unity::Profiling::LowLevel::MarkerFlags  Unity::Profiling::LowLevel::MarkerFlags::SampleGPU{static_cast<uint16_t>(0x100u)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
