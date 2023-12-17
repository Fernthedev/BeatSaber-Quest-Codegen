#pragma once
#include "UnityEngine/zzzz__WrapMode_def.hpp"
constexpr void UnityEngine::WrapMode::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::WrapMode::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::WrapMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::WrapMode::WrapMode(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::WrapMode  UnityEngine::WrapMode::Once{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::WrapMode  UnityEngine::WrapMode::Loop{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::WrapMode  UnityEngine::WrapMode::PingPong{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::WrapMode  UnityEngine::WrapMode::Default{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::WrapMode  UnityEngine::WrapMode::ClampForever{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::WrapMode  UnityEngine::WrapMode::Clamp{static_cast<int32_t>(0x1)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
