#pragma once
#include "UnityEngine/ProBuilder/zzzz__SelectMode_def.hpp"
constexpr void UnityEngine::ProBuilder::SelectMode::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::ProBuilder::SelectMode::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::ProBuilder::SelectMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ProBuilder::SelectMode::SelectMode(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::ProBuilder::SelectMode  UnityEngine::ProBuilder::SelectMode::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::ProBuilder::SelectMode  UnityEngine::ProBuilder::SelectMode::Object{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::ProBuilder::SelectMode  UnityEngine::ProBuilder::SelectMode::Vertex{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::ProBuilder::SelectMode  UnityEngine::ProBuilder::SelectMode::Edge{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::ProBuilder::SelectMode  UnityEngine::ProBuilder::SelectMode::Face{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::ProBuilder::SelectMode  UnityEngine::ProBuilder::SelectMode::TextureFace{static_cast<int32_t>(0x10)};
constexpr ::UnityEngine::ProBuilder::SelectMode  UnityEngine::ProBuilder::SelectMode::TextureEdge{static_cast<int32_t>(0x20)};
constexpr ::UnityEngine::ProBuilder::SelectMode  UnityEngine::ProBuilder::SelectMode::TextureVertex{static_cast<int32_t>(0x40)};
constexpr ::UnityEngine::ProBuilder::SelectMode  UnityEngine::ProBuilder::SelectMode::InputTool{static_cast<int32_t>(0x80)};
constexpr ::UnityEngine::ProBuilder::SelectMode  UnityEngine::ProBuilder::SelectMode::Any{static_cast<int32_t>(0xffff)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
