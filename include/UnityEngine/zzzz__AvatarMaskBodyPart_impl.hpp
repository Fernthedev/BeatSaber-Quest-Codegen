#pragma once
#include "UnityEngine/zzzz__AvatarMaskBodyPart_def.hpp"
constexpr void UnityEngine::AvatarMaskBodyPart::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::AvatarMaskBodyPart::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::AvatarMaskBodyPart::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::AvatarMaskBodyPart::AvatarMaskBodyPart(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::AvatarMaskBodyPart  UnityEngine::AvatarMaskBodyPart::Root{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::AvatarMaskBodyPart  UnityEngine::AvatarMaskBodyPart::Body{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::AvatarMaskBodyPart  UnityEngine::AvatarMaskBodyPart::Head{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::AvatarMaskBodyPart  UnityEngine::AvatarMaskBodyPart::LeftLeg{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::AvatarMaskBodyPart  UnityEngine::AvatarMaskBodyPart::RightLeg{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::AvatarMaskBodyPart  UnityEngine::AvatarMaskBodyPart::LeftArm{static_cast<int32_t>(0x5)};
constexpr ::UnityEngine::AvatarMaskBodyPart  UnityEngine::AvatarMaskBodyPart::RightArm{static_cast<int32_t>(0x6)};
constexpr ::UnityEngine::AvatarMaskBodyPart  UnityEngine::AvatarMaskBodyPart::LeftFingers{static_cast<int32_t>(0x7)};
constexpr ::UnityEngine::AvatarMaskBodyPart  UnityEngine::AvatarMaskBodyPart::RightFingers{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::AvatarMaskBodyPart  UnityEngine::AvatarMaskBodyPart::LeftFootIK{static_cast<int32_t>(0x9)};
constexpr ::UnityEngine::AvatarMaskBodyPart  UnityEngine::AvatarMaskBodyPart::RightFootIK{static_cast<int32_t>(0xa)};
constexpr ::UnityEngine::AvatarMaskBodyPart  UnityEngine::AvatarMaskBodyPart::LeftHandIK{static_cast<int32_t>(0xb)};
constexpr ::UnityEngine::AvatarMaskBodyPart  UnityEngine::AvatarMaskBodyPart::RightHandIK{static_cast<int32_t>(0xc)};
constexpr ::UnityEngine::AvatarMaskBodyPart  UnityEngine::AvatarMaskBodyPart::LastBodyPart{static_cast<int32_t>(0xd)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
