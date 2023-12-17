#pragma once
#include "UnityOpus/zzzz__SamplingFrequency_def.hpp"
constexpr void UnityOpus::SamplingFrequency::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityOpus::SamplingFrequency::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityOpus::SamplingFrequency::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityOpus::SamplingFrequency::SamplingFrequency(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityOpus::SamplingFrequency  UnityOpus::SamplingFrequency::Frequency_8000{static_cast<int32_t>(0x1f40)};
constexpr ::UnityOpus::SamplingFrequency  UnityOpus::SamplingFrequency::Frequency_12000{static_cast<int32_t>(0x2ee0)};
constexpr ::UnityOpus::SamplingFrequency  UnityOpus::SamplingFrequency::Frequency_16000{static_cast<int32_t>(0x3e80)};
constexpr ::UnityOpus::SamplingFrequency  UnityOpus::SamplingFrequency::Frequency_24000{static_cast<int32_t>(0x5dc0)};
constexpr ::UnityOpus::SamplingFrequency  UnityOpus::SamplingFrequency::Frequency_48000{static_cast<int32_t>(0xbb80)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
