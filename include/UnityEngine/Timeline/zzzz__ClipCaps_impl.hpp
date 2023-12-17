#pragma once
#include "UnityEngine/Timeline/zzzz__ClipCaps_def.hpp"
constexpr void UnityEngine::Timeline::ClipCaps::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::Timeline::ClipCaps::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::Timeline::ClipCaps::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Timeline::ClipCaps::ClipCaps(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::Timeline::ClipCaps  UnityEngine::Timeline::ClipCaps::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Timeline::ClipCaps  UnityEngine::Timeline::ClipCaps::Looping{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Timeline::ClipCaps  UnityEngine::Timeline::ClipCaps::Extrapolation{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Timeline::ClipCaps  UnityEngine::Timeline::ClipCaps::ClipIn{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::Timeline::ClipCaps  UnityEngine::Timeline::ClipCaps::SpeedMultiplier{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::Timeline::ClipCaps  UnityEngine::Timeline::ClipCaps::Blending{static_cast<int32_t>(0x10)};
constexpr ::UnityEngine::Timeline::ClipCaps  UnityEngine::Timeline::ClipCaps::AutoScale{static_cast<int32_t>(0x28)};
constexpr ::UnityEngine::Timeline::ClipCaps  UnityEngine::Timeline::ClipCaps::All{static_cast<int32_t>(0xffffffff)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
