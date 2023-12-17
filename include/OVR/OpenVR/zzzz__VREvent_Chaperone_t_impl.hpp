#pragma once
#include "OVR/OpenVR/zzzz__VREvent_Chaperone_t_def.hpp"
constexpr void OVR::OpenVR::VREvent_Chaperone_t::__set_m_nPreviousUniverse(uint64_t  value)  {
::cordl_internals::setInstanceField<uint64_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint64_t>(value));
}
constexpr uint64_t& OVR::OpenVR::VREvent_Chaperone_t::__get_m_nPreviousUniverse()  {
return ::cordl_internals::getInstanceField<uint64_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint64_t const& OVR::OpenVR::VREvent_Chaperone_t::__get_m_nPreviousUniverse() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::VREvent_Chaperone_t::__set_m_nCurrentUniverse(uint64_t  value)  {
::cordl_internals::setInstanceField<uint64_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint64_t>(value));
}
constexpr uint64_t& OVR::OpenVR::VREvent_Chaperone_t::__get_m_nCurrentUniverse()  {
return ::cordl_internals::getInstanceField<uint64_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint64_t const& OVR::OpenVR::VREvent_Chaperone_t::__get_m_nCurrentUniverse() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "m_nPreviousUniverse", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nCurrentUniverse", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VREvent_Chaperone_t::VREvent_Chaperone_t(uint64_t  m_nPreviousUniverse, uint64_t  m_nCurrentUniverse) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->m_nPreviousUniverse = m_nPreviousUniverse;
this->m_nCurrentUniverse = m_nCurrentUniverse;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
