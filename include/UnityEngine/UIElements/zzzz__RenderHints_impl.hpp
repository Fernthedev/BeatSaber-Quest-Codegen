#pragma once
#include "UnityEngine/UIElements/zzzz__RenderHints_def.hpp"
constexpr void UnityEngine::UIElements::RenderHints::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::UIElements::RenderHints::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::UIElements::RenderHints::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::RenderHints::RenderHints(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::UIElements::RenderHints  UnityEngine::UIElements::RenderHints::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::UIElements::RenderHints  UnityEngine::UIElements::RenderHints::GroupTransform{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::UIElements::RenderHints  UnityEngine::UIElements::RenderHints::BoneTransform{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::UIElements::RenderHints  UnityEngine::UIElements::RenderHints::ClipWithScissors{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::UIElements::RenderHints  UnityEngine::UIElements::RenderHints::MaskContainer{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::UIElements::RenderHints  UnityEngine::UIElements::RenderHints::DynamicColor{static_cast<int32_t>(0x10)};
constexpr ::UnityEngine::UIElements::RenderHints  UnityEngine::UIElements::RenderHints::DirtyOffset{static_cast<int32_t>(0x5)};
constexpr ::UnityEngine::UIElements::RenderHints  UnityEngine::UIElements::RenderHints::DirtyGroupTransform{static_cast<int32_t>(0x20)};
constexpr ::UnityEngine::UIElements::RenderHints  UnityEngine::UIElements::RenderHints::DirtyBoneTransform{static_cast<int32_t>(0x40)};
constexpr ::UnityEngine::UIElements::RenderHints  UnityEngine::UIElements::RenderHints::DirtyClipWithScissors{static_cast<int32_t>(0x80)};
constexpr ::UnityEngine::UIElements::RenderHints  UnityEngine::UIElements::RenderHints::DirtyMaskContainer{static_cast<int32_t>(0x100)};
constexpr ::UnityEngine::UIElements::RenderHints  UnityEngine::UIElements::RenderHints::DirtyAll{static_cast<int32_t>(0x1e0)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
