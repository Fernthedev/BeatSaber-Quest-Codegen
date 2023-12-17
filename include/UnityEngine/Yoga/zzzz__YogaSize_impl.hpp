#pragma once
#include "UnityEngine/Yoga/zzzz__YogaSize_def.hpp"
constexpr void UnityEngine::Yoga::YogaSize::__set_width(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::Yoga::YogaSize::__get_width()  {
return ::cordl_internals::getInstanceField<float_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& UnityEngine::Yoga::YogaSize::__get_width() const {
return ::cordl_internals::getInstanceField<float_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::Yoga::YogaSize::__set_height(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::Yoga::YogaSize::__get_height()  {
return ::cordl_internals::getInstanceField<float_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& UnityEngine::Yoga::YogaSize::__get_height() const {
return ::cordl_internals::getInstanceField<float_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "width", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "height", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Yoga::YogaSize::YogaSize(float_t  width, float_t  height) noexcept : ::bs_hook::ValueTypeWrapper<0x8>() {this->width = width;
this->height = height;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
