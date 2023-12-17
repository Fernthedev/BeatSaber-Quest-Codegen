#pragma once
#include "UnityEngine/InputSystem/UI/zzzz__UIPointerType_def.hpp"
constexpr void UnityEngine::InputSystem::UI::UIPointerType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::UI::UIPointerType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::InputSystem::UI::UIPointerType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::UI::UIPointerType::UIPointerType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::InputSystem::UI::UIPointerType  UnityEngine::InputSystem::UI::UIPointerType::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::InputSystem::UI::UIPointerType  UnityEngine::InputSystem::UI::UIPointerType::MouseOrPen{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::InputSystem::UI::UIPointerType  UnityEngine::InputSystem::UI::UIPointerType::Touch{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::InputSystem::UI::UIPointerType  UnityEngine::InputSystem::UI::UIPointerType::Tracked{static_cast<int32_t>(0x3)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
