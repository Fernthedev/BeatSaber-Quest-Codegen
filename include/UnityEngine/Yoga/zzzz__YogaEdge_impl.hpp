#pragma once
#include "UnityEngine/Yoga/zzzz__YogaEdge_def.hpp"
constexpr void UnityEngine::Yoga::YogaEdge::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::Yoga::YogaEdge::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::Yoga::YogaEdge::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Yoga::YogaEdge::YogaEdge(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::Yoga::YogaEdge  UnityEngine::Yoga::YogaEdge::Left{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Yoga::YogaEdge  UnityEngine::Yoga::YogaEdge::Top{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Yoga::YogaEdge  UnityEngine::Yoga::YogaEdge::Right{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Yoga::YogaEdge  UnityEngine::Yoga::YogaEdge::Bottom{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::Yoga::YogaEdge  UnityEngine::Yoga::YogaEdge::Start{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::Yoga::YogaEdge  UnityEngine::Yoga::YogaEdge::End{static_cast<int32_t>(0x5)};
constexpr ::UnityEngine::Yoga::YogaEdge  UnityEngine::Yoga::YogaEdge::Horizontal{static_cast<int32_t>(0x6)};
constexpr ::UnityEngine::Yoga::YogaEdge  UnityEngine::Yoga::YogaEdge::Vertical{static_cast<int32_t>(0x7)};
constexpr ::UnityEngine::Yoga::YogaEdge  UnityEngine::Yoga::YogaEdge::All{static_cast<int32_t>(0x8)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
