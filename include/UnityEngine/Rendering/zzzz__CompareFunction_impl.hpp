#pragma once
#include "UnityEngine/Rendering/zzzz__CompareFunction_def.hpp"
constexpr void UnityEngine::Rendering::CompareFunction::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::Rendering::CompareFunction::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::Rendering::CompareFunction::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::CompareFunction::CompareFunction(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::Rendering::CompareFunction  UnityEngine::Rendering::CompareFunction::Disabled{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Rendering::CompareFunction  UnityEngine::Rendering::CompareFunction::Never{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Rendering::CompareFunction  UnityEngine::Rendering::CompareFunction::Less{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Rendering::CompareFunction  UnityEngine::Rendering::CompareFunction::Equal{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::Rendering::CompareFunction  UnityEngine::Rendering::CompareFunction::LessEqual{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::Rendering::CompareFunction  UnityEngine::Rendering::CompareFunction::Greater{static_cast<int32_t>(0x5)};
constexpr ::UnityEngine::Rendering::CompareFunction  UnityEngine::Rendering::CompareFunction::NotEqual{static_cast<int32_t>(0x6)};
constexpr ::UnityEngine::Rendering::CompareFunction  UnityEngine::Rendering::CompareFunction::GreaterEqual{static_cast<int32_t>(0x7)};
constexpr ::UnityEngine::Rendering::CompareFunction  UnityEngine::Rendering::CompareFunction::Always{static_cast<int32_t>(0x8)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
