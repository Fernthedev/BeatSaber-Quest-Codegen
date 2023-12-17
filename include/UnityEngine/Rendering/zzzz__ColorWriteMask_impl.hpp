#pragma once
#include "UnityEngine/Rendering/zzzz__ColorWriteMask_def.hpp"
constexpr void UnityEngine::Rendering::ColorWriteMask::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::Rendering::ColorWriteMask::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::Rendering::ColorWriteMask::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ColorWriteMask::ColorWriteMask(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::Rendering::ColorWriteMask  UnityEngine::Rendering::ColorWriteMask::Alpha{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Rendering::ColorWriteMask  UnityEngine::Rendering::ColorWriteMask::Blue{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Rendering::ColorWriteMask  UnityEngine::Rendering::ColorWriteMask::Green{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::Rendering::ColorWriteMask  UnityEngine::Rendering::ColorWriteMask::Red{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::Rendering::ColorWriteMask  UnityEngine::Rendering::ColorWriteMask::All{static_cast<int32_t>(0xf)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
