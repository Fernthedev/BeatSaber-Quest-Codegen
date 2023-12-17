#pragma once
#include "UnityEngine/InputSystem/Android/LowLevel/zzzz__AndroidInputSource_def.hpp"
constexpr void UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource::AndroidInputSource(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource  UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource::Keyboard{static_cast<int32_t>(0x101)};
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource  UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource::Dpad{static_cast<int32_t>(0x201)};
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource  UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource::Gamepad{static_cast<int32_t>(0x401)};
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource  UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource::Touchscreen{static_cast<int32_t>(0x1002)};
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource  UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource::Mouse{static_cast<int32_t>(0x2002)};
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource  UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource::Stylus{static_cast<int32_t>(0x4002)};
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource  UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource::Trackball{static_cast<int32_t>(0x10004)};
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource  UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource::Touchpad{static_cast<int32_t>(0x100008)};
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource  UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource::Joystick{static_cast<int32_t>(0x1000010)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
