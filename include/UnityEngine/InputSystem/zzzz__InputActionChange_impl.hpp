#pragma once
#include "UnityEngine/InputSystem/zzzz__InputActionChange_def.hpp"
constexpr void UnityEngine::InputSystem::InputActionChange::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::InputActionChange::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::InputSystem::InputActionChange::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::InputActionChange::InputActionChange(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::InputSystem::InputActionChange  UnityEngine::InputSystem::InputActionChange::ActionEnabled{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::InputSystem::InputActionChange  UnityEngine::InputSystem::InputActionChange::ActionDisabled{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::InputSystem::InputActionChange  UnityEngine::InputSystem::InputActionChange::ActionMapEnabled{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::InputSystem::InputActionChange  UnityEngine::InputSystem::InputActionChange::ActionMapDisabled{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::InputSystem::InputActionChange  UnityEngine::InputSystem::InputActionChange::ActionStarted{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::InputSystem::InputActionChange  UnityEngine::InputSystem::InputActionChange::ActionPerformed{static_cast<int32_t>(0x5)};
constexpr ::UnityEngine::InputSystem::InputActionChange  UnityEngine::InputSystem::InputActionChange::ActionCanceled{static_cast<int32_t>(0x6)};
constexpr ::UnityEngine::InputSystem::InputActionChange  UnityEngine::InputSystem::InputActionChange::BoundControlsAboutToChange{static_cast<int32_t>(0x7)};
constexpr ::UnityEngine::InputSystem::InputActionChange  UnityEngine::InputSystem::InputActionChange::BoundControlsChanged{static_cast<int32_t>(0x8)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
