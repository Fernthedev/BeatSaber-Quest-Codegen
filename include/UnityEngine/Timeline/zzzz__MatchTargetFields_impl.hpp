#pragma once
#include "UnityEngine/Timeline/zzzz__MatchTargetFields_def.hpp"
constexpr void UnityEngine::Timeline::MatchTargetFields::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::Timeline::MatchTargetFields::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::Timeline::MatchTargetFields::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Timeline::MatchTargetFields::MatchTargetFields(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::Timeline::MatchTargetFields  UnityEngine::Timeline::MatchTargetFields::PositionX{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Timeline::MatchTargetFields  UnityEngine::Timeline::MatchTargetFields::PositionY{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Timeline::MatchTargetFields  UnityEngine::Timeline::MatchTargetFields::PositionZ{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::Timeline::MatchTargetFields  UnityEngine::Timeline::MatchTargetFields::RotationX{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::Timeline::MatchTargetFields  UnityEngine::Timeline::MatchTargetFields::RotationY{static_cast<int32_t>(0x10)};
constexpr ::UnityEngine::Timeline::MatchTargetFields  UnityEngine::Timeline::MatchTargetFields::RotationZ{static_cast<int32_t>(0x20)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
