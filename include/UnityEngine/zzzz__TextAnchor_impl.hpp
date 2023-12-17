#pragma once
#include "UnityEngine/zzzz__TextAnchor_def.hpp"
constexpr void UnityEngine::TextAnchor::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::TextAnchor::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::TextAnchor::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextAnchor::TextAnchor(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::TextAnchor  UnityEngine::TextAnchor::UpperLeft{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::TextAnchor  UnityEngine::TextAnchor::UpperCenter{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::TextAnchor  UnityEngine::TextAnchor::UpperRight{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::TextAnchor  UnityEngine::TextAnchor::MiddleLeft{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::TextAnchor  UnityEngine::TextAnchor::MiddleCenter{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::TextAnchor  UnityEngine::TextAnchor::MiddleRight{static_cast<int32_t>(0x5)};
constexpr ::UnityEngine::TextAnchor  UnityEngine::TextAnchor::LowerLeft{static_cast<int32_t>(0x6)};
constexpr ::UnityEngine::TextAnchor  UnityEngine::TextAnchor::LowerCenter{static_cast<int32_t>(0x7)};
constexpr ::UnityEngine::TextAnchor  UnityEngine::TextAnchor::LowerRight{static_cast<int32_t>(0x8)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
