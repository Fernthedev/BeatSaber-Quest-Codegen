#pragma once
#include "UnityEngine/zzzz__AvatarTarget_def.hpp"
constexpr void UnityEngine::AvatarTarget::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::AvatarTarget::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::AvatarTarget::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::AvatarTarget::AvatarTarget(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::AvatarTarget  UnityEngine::AvatarTarget::Root{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::AvatarTarget  UnityEngine::AvatarTarget::Body{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::AvatarTarget  UnityEngine::AvatarTarget::LeftFoot{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::AvatarTarget  UnityEngine::AvatarTarget::RightFoot{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::AvatarTarget  UnityEngine::AvatarTarget::LeftHand{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::AvatarTarget  UnityEngine::AvatarTarget::RightHand{static_cast<int32_t>(0x5)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
