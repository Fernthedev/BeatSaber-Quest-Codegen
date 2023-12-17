#pragma once
#include "UnityEngine/InputSystem/zzzz__TouchPhase_def.hpp"
constexpr void UnityEngine::InputSystem::TouchPhase::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::TouchPhase::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::InputSystem::TouchPhase::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::TouchPhase::TouchPhase(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::InputSystem::TouchPhase  UnityEngine::InputSystem::TouchPhase::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::InputSystem::TouchPhase  UnityEngine::InputSystem::TouchPhase::Began{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::InputSystem::TouchPhase  UnityEngine::InputSystem::TouchPhase::Moved{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::InputSystem::TouchPhase  UnityEngine::InputSystem::TouchPhase::Ended{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::InputSystem::TouchPhase  UnityEngine::InputSystem::TouchPhase::Canceled{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::InputSystem::TouchPhase  UnityEngine::InputSystem::TouchPhase::Stationary{static_cast<int32_t>(0x5)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
