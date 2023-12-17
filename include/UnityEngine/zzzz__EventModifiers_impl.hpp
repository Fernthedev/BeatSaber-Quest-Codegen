#pragma once
#include "UnityEngine/zzzz__EventModifiers_def.hpp"
constexpr void UnityEngine::EventModifiers::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::EventModifiers::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::EventModifiers::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::EventModifiers::EventModifiers(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::EventModifiers  UnityEngine::EventModifiers::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::EventModifiers  UnityEngine::EventModifiers::Shift{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::EventModifiers  UnityEngine::EventModifiers::Control{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::EventModifiers  UnityEngine::EventModifiers::Alt{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::EventModifiers  UnityEngine::EventModifiers::Command{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::EventModifiers  UnityEngine::EventModifiers::Numeric{static_cast<int32_t>(0x10)};
constexpr ::UnityEngine::EventModifiers  UnityEngine::EventModifiers::CapsLock{static_cast<int32_t>(0x20)};
constexpr ::UnityEngine::EventModifiers  UnityEngine::EventModifiers::FunctionKey{static_cast<int32_t>(0x40)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
