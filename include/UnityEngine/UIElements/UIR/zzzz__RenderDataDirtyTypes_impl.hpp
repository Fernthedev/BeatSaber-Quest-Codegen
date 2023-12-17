#pragma once
#include "UnityEngine/UIElements/UIR/zzzz__RenderDataDirtyTypes_def.hpp"
constexpr void UnityEngine::UIElements::UIR::RenderDataDirtyTypes::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::UIElements::UIR::RenderDataDirtyTypes::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::UIElements::UIR::RenderDataDirtyTypes::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes::RenderDataDirtyTypes(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes  UnityEngine::UIElements::UIR::RenderDataDirtyTypes::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes  UnityEngine::UIElements::UIR::RenderDataDirtyTypes::Transform{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes  UnityEngine::UIElements::UIR::RenderDataDirtyTypes::ClipRectSize{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes  UnityEngine::UIElements::UIR::RenderDataDirtyTypes::Clipping{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes  UnityEngine::UIElements::UIR::RenderDataDirtyTypes::ClippingHierarchy{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes  UnityEngine::UIElements::UIR::RenderDataDirtyTypes::Visuals{static_cast<int32_t>(0x10)};
constexpr ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes  UnityEngine::UIElements::UIR::RenderDataDirtyTypes::VisualsHierarchy{static_cast<int32_t>(0x20)};
constexpr ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes  UnityEngine::UIElements::UIR::RenderDataDirtyTypes::Opacity{static_cast<int32_t>(0x40)};
constexpr ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes  UnityEngine::UIElements::UIR::RenderDataDirtyTypes::OpacityHierarchy{static_cast<int32_t>(0x80)};
constexpr ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes  UnityEngine::UIElements::UIR::RenderDataDirtyTypes::Color{static_cast<int32_t>(0x100)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
