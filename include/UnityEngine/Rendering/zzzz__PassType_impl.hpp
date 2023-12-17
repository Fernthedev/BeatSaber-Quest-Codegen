#pragma once
#include "UnityEngine/Rendering/zzzz__PassType_def.hpp"
constexpr void UnityEngine::Rendering::PassType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::Rendering::PassType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::Rendering::PassType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::PassType::PassType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::Rendering::PassType  UnityEngine::Rendering::PassType::Normal{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Rendering::PassType  UnityEngine::Rendering::PassType::Vertex{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Rendering::PassType  UnityEngine::Rendering::PassType::VertexLM{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Rendering::PassType  UnityEngine::Rendering::PassType::VertexLMRGBM{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::Rendering::PassType  UnityEngine::Rendering::PassType::ForwardBase{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::Rendering::PassType  UnityEngine::Rendering::PassType::ForwardAdd{static_cast<int32_t>(0x5)};
constexpr ::UnityEngine::Rendering::PassType  UnityEngine::Rendering::PassType::LightPrePassBase{static_cast<int32_t>(0x6)};
constexpr ::UnityEngine::Rendering::PassType  UnityEngine::Rendering::PassType::LightPrePassFinal{static_cast<int32_t>(0x7)};
constexpr ::UnityEngine::Rendering::PassType  UnityEngine::Rendering::PassType::ShadowCaster{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::Rendering::PassType  UnityEngine::Rendering::PassType::Deferred{static_cast<int32_t>(0xa)};
constexpr ::UnityEngine::Rendering::PassType  UnityEngine::Rendering::PassType::Meta{static_cast<int32_t>(0xb)};
constexpr ::UnityEngine::Rendering::PassType  UnityEngine::Rendering::PassType::MotionVectors{static_cast<int32_t>(0xc)};
constexpr ::UnityEngine::Rendering::PassType  UnityEngine::Rendering::PassType::ScriptableRenderPipeline{static_cast<int32_t>(0xd)};
constexpr ::UnityEngine::Rendering::PassType  UnityEngine::Rendering::PassType::ScriptableRenderPipelineDefaultUnlit{static_cast<int32_t>(0xe)};
constexpr ::UnityEngine::Rendering::PassType  UnityEngine::Rendering::PassType::GrabPass{static_cast<int32_t>(0xf)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
