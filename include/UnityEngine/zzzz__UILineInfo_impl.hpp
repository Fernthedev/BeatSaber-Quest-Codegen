#pragma once
#include "UnityEngine/zzzz__UILineInfo_def.hpp"
constexpr void UnityEngine::UILineInfo::__set_startCharIdx(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::UILineInfo::__get_startCharIdx()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::UILineInfo::__get_startCharIdx() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::UILineInfo::__set_height(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::UILineInfo::__get_height()  {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::UILineInfo::__get_height() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::UILineInfo::__set_topY(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::UILineInfo::__get_topY()  {
return ::cordl_internals::getInstanceField<float_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& UnityEngine::UILineInfo::__get_topY() const {
return ::cordl_internals::getInstanceField<float_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::UILineInfo::__set_leading(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::UILineInfo::__get_leading()  {
return ::cordl_internals::getInstanceField<float_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& UnityEngine::UILineInfo::__get_leading() const {
return ::cordl_internals::getInstanceField<float_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "startCharIdx", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "topY", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "leading", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UILineInfo::UILineInfo(int32_t  startCharIdx, int32_t  height, float_t  topY, float_t  leading) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->startCharIdx = startCharIdx;
this->height = height;
this->topY = topY;
this->leading = leading;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
