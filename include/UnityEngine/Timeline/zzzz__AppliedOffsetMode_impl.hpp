#pragma once
#include "UnityEngine/Timeline/zzzz__AppliedOffsetMode_def.hpp"
constexpr void UnityEngine::Timeline::AppliedOffsetMode::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::Timeline::AppliedOffsetMode::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::Timeline::AppliedOffsetMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Timeline::AppliedOffsetMode::AppliedOffsetMode(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::Timeline::AppliedOffsetMode  UnityEngine::Timeline::AppliedOffsetMode::NoRootTransform{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Timeline::AppliedOffsetMode  UnityEngine::Timeline::AppliedOffsetMode::TransformOffset{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Timeline::AppliedOffsetMode  UnityEngine::Timeline::AppliedOffsetMode::SceneOffset{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Timeline::AppliedOffsetMode  UnityEngine::Timeline::AppliedOffsetMode::TransformOffsetLegacy{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::Timeline::AppliedOffsetMode  UnityEngine::Timeline::AppliedOffsetMode::SceneOffsetLegacy{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::Timeline::AppliedOffsetMode  UnityEngine::Timeline::AppliedOffsetMode::SceneOffsetEditor{static_cast<int32_t>(0x5)};
constexpr ::UnityEngine::Timeline::AppliedOffsetMode  UnityEngine::Timeline::AppliedOffsetMode::SceneOffsetLegacyEditor{static_cast<int32_t>(0x6)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
