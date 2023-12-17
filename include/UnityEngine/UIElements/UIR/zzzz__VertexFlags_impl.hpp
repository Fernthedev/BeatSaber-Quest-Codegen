#pragma once
#include "UnityEngine/UIElements/UIR/zzzz__VertexFlags_def.hpp"
constexpr void UnityEngine::UIElements::UIR::VertexFlags::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::UIElements::UIR::VertexFlags::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::UIElements::UIR::VertexFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::VertexFlags::VertexFlags(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::UIElements::UIR::VertexFlags  UnityEngine::UIElements::UIR::VertexFlags::IsSolid{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::UIElements::UIR::VertexFlags  UnityEngine::UIElements::UIR::VertexFlags::IsText{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::UIElements::UIR::VertexFlags  UnityEngine::UIElements::UIR::VertexFlags::IsTextured{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::UIElements::UIR::VertexFlags  UnityEngine::UIElements::UIR::VertexFlags::IsDynamic{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::UIElements::UIR::VertexFlags  UnityEngine::UIElements::UIR::VertexFlags::IsSvgGradients{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::UIElements::UIR::VertexFlags  UnityEngine::UIElements::UIR::VertexFlags::LastType{static_cast<int32_t>(0xa)};
constexpr ::UnityEngine::UIElements::UIR::VertexFlags  UnityEngine::UIElements::UIR::VertexFlags::IsGraphViewEdge{static_cast<int32_t>(0xa)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
