#pragma once
#include "UnityEngine/InputSystem/zzzz__InputDeviceChange_def.hpp"
constexpr void UnityEngine::InputSystem::InputDeviceChange::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::InputDeviceChange::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::InputSystem::InputDeviceChange::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::InputDeviceChange::InputDeviceChange(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::InputSystem::InputDeviceChange  UnityEngine::InputSystem::InputDeviceChange::Added{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::InputSystem::InputDeviceChange  UnityEngine::InputSystem::InputDeviceChange::Removed{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::InputSystem::InputDeviceChange  UnityEngine::InputSystem::InputDeviceChange::Disconnected{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::InputSystem::InputDeviceChange  UnityEngine::InputSystem::InputDeviceChange::Reconnected{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::InputSystem::InputDeviceChange  UnityEngine::InputSystem::InputDeviceChange::Enabled{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::InputSystem::InputDeviceChange  UnityEngine::InputSystem::InputDeviceChange::Disabled{static_cast<int32_t>(0x5)};
constexpr ::UnityEngine::InputSystem::InputDeviceChange  UnityEngine::InputSystem::InputDeviceChange::UsageChanged{static_cast<int32_t>(0x6)};
constexpr ::UnityEngine::InputSystem::InputDeviceChange  UnityEngine::InputSystem::InputDeviceChange::ConfigurationChanged{static_cast<int32_t>(0x7)};
constexpr ::UnityEngine::InputSystem::InputDeviceChange  UnityEngine::InputSystem::InputDeviceChange::SoftReset{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::InputSystem::InputDeviceChange  UnityEngine::InputSystem::InputDeviceChange::HardReset{static_cast<int32_t>(0x9)};
constexpr ::UnityEngine::InputSystem::InputDeviceChange  UnityEngine::InputSystem::InputDeviceChange::Destroyed{static_cast<int32_t>(0xa)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
