#pragma once
#include "UnityEngine/UIElements/zzzz__Justify_def.hpp"
constexpr void UnityEngine::UIElements::Justify::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::UIElements::Justify::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::UIElements::Justify::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::Justify::Justify(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::UIElements::Justify  UnityEngine::UIElements::Justify::FlexStart{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::UIElements::Justify  UnityEngine::UIElements::Justify::Center{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::UIElements::Justify  UnityEngine::UIElements::Justify::FlexEnd{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::UIElements::Justify  UnityEngine::UIElements::Justify::SpaceBetween{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::UIElements::Justify  UnityEngine::UIElements::Justify::SpaceAround{static_cast<int32_t>(0x4)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
