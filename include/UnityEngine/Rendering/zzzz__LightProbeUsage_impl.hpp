#pragma once
#include "UnityEngine/Rendering/zzzz__LightProbeUsage_def.hpp"
constexpr void UnityEngine::Rendering::LightProbeUsage::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::Rendering::LightProbeUsage::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::Rendering::LightProbeUsage::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::LightProbeUsage::LightProbeUsage(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::Rendering::LightProbeUsage  UnityEngine::Rendering::LightProbeUsage::Off{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Rendering::LightProbeUsage  UnityEngine::Rendering::LightProbeUsage::BlendProbes{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Rendering::LightProbeUsage  UnityEngine::Rendering::LightProbeUsage::UseProxyVolume{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Rendering::LightProbeUsage  UnityEngine::Rendering::LightProbeUsage::CustomProvided{static_cast<int32_t>(0x4)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
