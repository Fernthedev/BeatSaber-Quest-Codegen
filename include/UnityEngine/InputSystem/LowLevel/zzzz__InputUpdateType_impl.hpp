#pragma once
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputUpdateType_def.hpp"
constexpr void UnityEngine::InputSystem::LowLevel::InputUpdateType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::LowLevel::InputUpdateType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::InputSystem::LowLevel::InputUpdateType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::InputUpdateType::InputUpdateType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputUpdateType  UnityEngine::InputSystem::LowLevel::InputUpdateType::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::InputSystem::LowLevel::InputUpdateType  UnityEngine::InputSystem::LowLevel::InputUpdateType::Dynamic{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::InputSystem::LowLevel::InputUpdateType  UnityEngine::InputSystem::LowLevel::InputUpdateType::Fixed{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::InputSystem::LowLevel::InputUpdateType  UnityEngine::InputSystem::LowLevel::InputUpdateType::BeforeRender{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::InputSystem::LowLevel::InputUpdateType  UnityEngine::InputSystem::LowLevel::InputUpdateType::Editor{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::InputSystem::LowLevel::InputUpdateType  UnityEngine::InputSystem::LowLevel::InputUpdateType::Manual{static_cast<int32_t>(0x10)};
constexpr ::UnityEngine::InputSystem::LowLevel::InputUpdateType  UnityEngine::InputSystem::LowLevel::InputUpdateType::Default{static_cast<int32_t>(0xb)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
