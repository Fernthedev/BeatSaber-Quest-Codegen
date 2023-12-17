#pragma once
#include "UnityEngine/InputSystem/LowLevel/zzzz__TouchFlags_def.hpp"
constexpr void UnityEngine::InputSystem::LowLevel::TouchFlags::__set_value__(uint8_t  value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint8_t>(value));
}
constexpr uint8_t& UnityEngine::InputSystem::LowLevel::TouchFlags::__get_value__()  {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint8_t const& UnityEngine::InputSystem::LowLevel::TouchFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::TouchFlags::TouchFlags(uint8_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x1>() {this->value__ = value__;
}
constexpr ::UnityEngine::InputSystem::LowLevel::TouchFlags  UnityEngine::InputSystem::LowLevel::TouchFlags::IndirectTouch{static_cast<uint8_t>(0x1u)};
constexpr ::UnityEngine::InputSystem::LowLevel::TouchFlags  UnityEngine::InputSystem::LowLevel::TouchFlags::PrimaryTouch{static_cast<uint8_t>(0x8u)};
constexpr ::UnityEngine::InputSystem::LowLevel::TouchFlags  UnityEngine::InputSystem::LowLevel::TouchFlags::TapPress{static_cast<uint8_t>(0x10u)};
constexpr ::UnityEngine::InputSystem::LowLevel::TouchFlags  UnityEngine::InputSystem::LowLevel::TouchFlags::TapRelease{static_cast<uint8_t>(0x20u)};
constexpr ::UnityEngine::InputSystem::LowLevel::TouchFlags  UnityEngine::InputSystem::LowLevel::TouchFlags::OrphanedPrimaryTouch{static_cast<uint8_t>(0x40u)};
constexpr ::UnityEngine::InputSystem::LowLevel::TouchFlags  UnityEngine::InputSystem::LowLevel::TouchFlags::BeganInSameFrame{static_cast<uint8_t>(0x80u)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
