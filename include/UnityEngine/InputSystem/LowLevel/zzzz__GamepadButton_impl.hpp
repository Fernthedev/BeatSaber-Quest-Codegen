#pragma once
#include "UnityEngine/InputSystem/LowLevel/zzzz__GamepadButton_def.hpp"
constexpr void UnityEngine::InputSystem::LowLevel::GamepadButton::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::LowLevel::GamepadButton::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::InputSystem::LowLevel::GamepadButton::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::GamepadButton::GamepadButton(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::InputSystem::LowLevel::GamepadButton  UnityEngine::InputSystem::LowLevel::GamepadButton::DpadUp{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::InputSystem::LowLevel::GamepadButton  UnityEngine::InputSystem::LowLevel::GamepadButton::DpadDown{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::InputSystem::LowLevel::GamepadButton  UnityEngine::InputSystem::LowLevel::GamepadButton::DpadLeft{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::InputSystem::LowLevel::GamepadButton  UnityEngine::InputSystem::LowLevel::GamepadButton::DpadRight{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::InputSystem::LowLevel::GamepadButton  UnityEngine::InputSystem::LowLevel::GamepadButton::North{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::InputSystem::LowLevel::GamepadButton  UnityEngine::InputSystem::LowLevel::GamepadButton::East{static_cast<int32_t>(0x5)};
constexpr ::UnityEngine::InputSystem::LowLevel::GamepadButton  UnityEngine::InputSystem::LowLevel::GamepadButton::South{static_cast<int32_t>(0x6)};
constexpr ::UnityEngine::InputSystem::LowLevel::GamepadButton  UnityEngine::InputSystem::LowLevel::GamepadButton::West{static_cast<int32_t>(0x7)};
constexpr ::UnityEngine::InputSystem::LowLevel::GamepadButton  UnityEngine::InputSystem::LowLevel::GamepadButton::LeftStick{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::InputSystem::LowLevel::GamepadButton  UnityEngine::InputSystem::LowLevel::GamepadButton::RightStick{static_cast<int32_t>(0x9)};
constexpr ::UnityEngine::InputSystem::LowLevel::GamepadButton  UnityEngine::InputSystem::LowLevel::GamepadButton::LeftShoulder{static_cast<int32_t>(0xa)};
constexpr ::UnityEngine::InputSystem::LowLevel::GamepadButton  UnityEngine::InputSystem::LowLevel::GamepadButton::RightShoulder{static_cast<int32_t>(0xb)};
constexpr ::UnityEngine::InputSystem::LowLevel::GamepadButton  UnityEngine::InputSystem::LowLevel::GamepadButton::Start{static_cast<int32_t>(0xc)};
constexpr ::UnityEngine::InputSystem::LowLevel::GamepadButton  UnityEngine::InputSystem::LowLevel::GamepadButton::Select{static_cast<int32_t>(0xd)};
constexpr ::UnityEngine::InputSystem::LowLevel::GamepadButton  UnityEngine::InputSystem::LowLevel::GamepadButton::LeftTrigger{static_cast<int32_t>(0x20)};
constexpr ::UnityEngine::InputSystem::LowLevel::GamepadButton  UnityEngine::InputSystem::LowLevel::GamepadButton::RightTrigger{static_cast<int32_t>(0x21)};
constexpr ::UnityEngine::InputSystem::LowLevel::GamepadButton  UnityEngine::InputSystem::LowLevel::GamepadButton::X{static_cast<int32_t>(0x7)};
constexpr ::UnityEngine::InputSystem::LowLevel::GamepadButton  UnityEngine::InputSystem::LowLevel::GamepadButton::Y{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::InputSystem::LowLevel::GamepadButton  UnityEngine::InputSystem::LowLevel::GamepadButton::A{static_cast<int32_t>(0x6)};
constexpr ::UnityEngine::InputSystem::LowLevel::GamepadButton  UnityEngine::InputSystem::LowLevel::GamepadButton::B{static_cast<int32_t>(0x5)};
constexpr ::UnityEngine::InputSystem::LowLevel::GamepadButton  UnityEngine::InputSystem::LowLevel::GamepadButton::Cross{static_cast<int32_t>(0x6)};
constexpr ::UnityEngine::InputSystem::LowLevel::GamepadButton  UnityEngine::InputSystem::LowLevel::GamepadButton::Square{static_cast<int32_t>(0x7)};
constexpr ::UnityEngine::InputSystem::LowLevel::GamepadButton  UnityEngine::InputSystem::LowLevel::GamepadButton::Triangle{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::InputSystem::LowLevel::GamepadButton  UnityEngine::InputSystem::LowLevel::GamepadButton::Circle{static_cast<int32_t>(0x5)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
