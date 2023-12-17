#pragma once
#include "OVR/OpenVR/zzzz__VREvent_PerformanceTest_t_def.hpp"
constexpr void OVR::OpenVR::VREvent_PerformanceTest_t::__set_m_nFidelityLevel(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t& OVR::OpenVR::VREvent_PerformanceTest_t::__get_m_nFidelityLevel()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint32_t const& OVR::OpenVR::VREvent_PerformanceTest_t::__get_m_nFidelityLevel() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "m_nFidelityLevel", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VREvent_PerformanceTest_t::VREvent_PerformanceTest_t(uint32_t  m_nFidelityLevel) noexcept : ::bs_hook::ValueTypeWrapper<0x4>() {this->m_nFidelityLevel = m_nFidelityLevel;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
