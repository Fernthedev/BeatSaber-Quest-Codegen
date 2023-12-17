#pragma once
#include "UnityEngine/zzzz__AnimatorClipInfo_def.hpp"
constexpr void UnityEngine::AnimatorClipInfo::__set_m_ClipInstanceID(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::AnimatorClipInfo::__get_m_ClipInstanceID()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::AnimatorClipInfo::__get_m_ClipInstanceID() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::AnimatorClipInfo::__set_m_Weight(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::AnimatorClipInfo::__get_m_Weight()  {
return ::cordl_internals::getInstanceField<float_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& UnityEngine::AnimatorClipInfo::__get_m_Weight() const {
return ::cordl_internals::getInstanceField<float_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "m_ClipInstanceID", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Weight", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::AnimatorClipInfo::AnimatorClipInfo(int32_t  m_ClipInstanceID, float_t  m_Weight) noexcept : ::bs_hook::ValueTypeWrapper<0x8>() {this->m_ClipInstanceID = m_ClipInstanceID;
this->m_Weight = m_Weight;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
