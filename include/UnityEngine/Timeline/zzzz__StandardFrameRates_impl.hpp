#pragma once
#include "UnityEngine/Timeline/zzzz__StandardFrameRates_def.hpp"
constexpr void UnityEngine::Timeline::StandardFrameRates::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::Timeline::StandardFrameRates::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::Timeline::StandardFrameRates::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Timeline::StandardFrameRates::StandardFrameRates(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::Timeline::StandardFrameRates  UnityEngine::Timeline::StandardFrameRates::Fps24{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Timeline::StandardFrameRates  UnityEngine::Timeline::StandardFrameRates::Fps23_97{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Timeline::StandardFrameRates  UnityEngine::Timeline::StandardFrameRates::Fps25{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Timeline::StandardFrameRates  UnityEngine::Timeline::StandardFrameRates::Fps30{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::Timeline::StandardFrameRates  UnityEngine::Timeline::StandardFrameRates::Fps29_97{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::Timeline::StandardFrameRates  UnityEngine::Timeline::StandardFrameRates::Fps50{static_cast<int32_t>(0x5)};
constexpr ::UnityEngine::Timeline::StandardFrameRates  UnityEngine::Timeline::StandardFrameRates::Fps60{static_cast<int32_t>(0x6)};
constexpr ::UnityEngine::Timeline::StandardFrameRates  UnityEngine::Timeline::StandardFrameRates::Fps59_94{static_cast<int32_t>(0x7)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
