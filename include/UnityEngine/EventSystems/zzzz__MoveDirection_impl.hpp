#pragma once
#include "UnityEngine/EventSystems/zzzz__MoveDirection_def.hpp"
constexpr void UnityEngine::EventSystems::MoveDirection::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::EventSystems::MoveDirection::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::EventSystems::MoveDirection::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::EventSystems::MoveDirection::MoveDirection(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::EventSystems::MoveDirection  UnityEngine::EventSystems::MoveDirection::Left{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::EventSystems::MoveDirection  UnityEngine::EventSystems::MoveDirection::Up{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::EventSystems::MoveDirection  UnityEngine::EventSystems::MoveDirection::Right{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::EventSystems::MoveDirection  UnityEngine::EventSystems::MoveDirection::Down{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::EventSystems::MoveDirection  UnityEngine::EventSystems::MoveDirection::None{static_cast<int32_t>(0x4)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
