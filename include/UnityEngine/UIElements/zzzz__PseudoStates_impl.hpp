#pragma once
#include "UnityEngine/UIElements/zzzz__PseudoStates_def.hpp"
constexpr void UnityEngine::UIElements::PseudoStates::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::UIElements::PseudoStates::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::UIElements::PseudoStates::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::PseudoStates::PseudoStates(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::UIElements::PseudoStates  UnityEngine::UIElements::PseudoStates::Active{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::UIElements::PseudoStates  UnityEngine::UIElements::PseudoStates::Hover{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::UIElements::PseudoStates  UnityEngine::UIElements::PseudoStates::Checked{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::UIElements::PseudoStates  UnityEngine::UIElements::PseudoStates::Disabled{static_cast<int32_t>(0x20)};
constexpr ::UnityEngine::UIElements::PseudoStates  UnityEngine::UIElements::PseudoStates::Focus{static_cast<int32_t>(0x40)};
constexpr ::UnityEngine::UIElements::PseudoStates  UnityEngine::UIElements::PseudoStates::Root{static_cast<int32_t>(0x80)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
