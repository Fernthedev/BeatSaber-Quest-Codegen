#pragma once
#include "UnityEngine/zzzz__CullingGroupEvent_def.hpp"
constexpr void UnityEngine::CullingGroupEvent::__set_m_Index(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::CullingGroupEvent::__get_m_Index()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::CullingGroupEvent::__get_m_Index() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::CullingGroupEvent::__set_m_PrevState(uint8_t  value)  {
::cordl_internals::setInstanceField<uint8_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint8_t>(value));
}
constexpr uint8_t& UnityEngine::CullingGroupEvent::__get_m_PrevState()  {
return ::cordl_internals::getInstanceField<uint8_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint8_t const& UnityEngine::CullingGroupEvent::__get_m_PrevState() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::CullingGroupEvent::__set_m_ThisState(uint8_t  value)  {
::cordl_internals::setInstanceField<uint8_t, 0x5>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint8_t>(value));
}
constexpr uint8_t& UnityEngine::CullingGroupEvent::__get_m_ThisState()  {
return ::cordl_internals::getInstanceField<uint8_t, 0x5>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint8_t const& UnityEngine::CullingGroupEvent::__get_m_ThisState() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x5>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PrevState", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ThisState", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::CullingGroupEvent::CullingGroupEvent(int32_t  m_Index, uint8_t  m_PrevState, uint8_t  m_ThisState) noexcept : ::bs_hook::ValueTypeWrapper<0x8>() {this->m_Index = m_Index;
this->m_PrevState = m_PrevState;
this->m_ThisState = m_ThisState;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
