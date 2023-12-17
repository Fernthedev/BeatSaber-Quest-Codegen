#pragma once
#include "UnityEngine/zzzz__AnimationCullingType_def.hpp"
constexpr void UnityEngine::AnimationCullingType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::AnimationCullingType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::AnimationCullingType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::AnimationCullingType::AnimationCullingType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::AnimationCullingType  UnityEngine::AnimationCullingType::AlwaysAnimate{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::AnimationCullingType  UnityEngine::AnimationCullingType::BasedOnRenderers{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::AnimationCullingType  UnityEngine::AnimationCullingType::BasedOnClipBounds{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::AnimationCullingType  UnityEngine::AnimationCullingType::BasedOnUserBounds{static_cast<int32_t>(0x3)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
