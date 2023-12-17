#pragma once
#include "UnityEngine/Yoga/zzzz__YogaAlign_def.hpp"
constexpr void UnityEngine::Yoga::YogaAlign::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::Yoga::YogaAlign::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::Yoga::YogaAlign::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Yoga::YogaAlign::YogaAlign(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::Yoga::YogaAlign  UnityEngine::Yoga::YogaAlign::Auto{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Yoga::YogaAlign  UnityEngine::Yoga::YogaAlign::FlexStart{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Yoga::YogaAlign  UnityEngine::Yoga::YogaAlign::Center{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Yoga::YogaAlign  UnityEngine::Yoga::YogaAlign::FlexEnd{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::Yoga::YogaAlign  UnityEngine::Yoga::YogaAlign::Stretch{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::Yoga::YogaAlign  UnityEngine::Yoga::YogaAlign::Baseline{static_cast<int32_t>(0x5)};
constexpr ::UnityEngine::Yoga::YogaAlign  UnityEngine::Yoga::YogaAlign::SpaceBetween{static_cast<int32_t>(0x6)};
constexpr ::UnityEngine::Yoga::YogaAlign  UnityEngine::Yoga::YogaAlign::SpaceAround{static_cast<int32_t>(0x7)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
