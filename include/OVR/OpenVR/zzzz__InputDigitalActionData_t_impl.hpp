#pragma once
#include "OVR/OpenVR/zzzz__InputDigitalActionData_t_def.hpp"
constexpr void OVR::OpenVR::InputDigitalActionData_t::__set_bActive(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& OVR::OpenVR::InputDigitalActionData_t::__get_bActive()  {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& OVR::OpenVR::InputDigitalActionData_t::__get_bActive() const {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::InputDigitalActionData_t::__set_activeOrigin(uint64_t  value)  {
::cordl_internals::setInstanceField<uint64_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint64_t>(value));
}
constexpr uint64_t& OVR::OpenVR::InputDigitalActionData_t::__get_activeOrigin()  {
return ::cordl_internals::getInstanceField<uint64_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint64_t const& OVR::OpenVR::InputDigitalActionData_t::__get_activeOrigin() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::InputDigitalActionData_t::__set_bState(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& OVR::OpenVR::InputDigitalActionData_t::__get_bState()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& OVR::OpenVR::InputDigitalActionData_t::__get_bState() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::InputDigitalActionData_t::__set_bChanged(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x11>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& OVR::OpenVR::InputDigitalActionData_t::__get_bChanged()  {
return ::cordl_internals::getInstanceField<bool, 0x11>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& OVR::OpenVR::InputDigitalActionData_t::__get_bChanged() const {
return ::cordl_internals::getInstanceField<bool, 0x11>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::InputDigitalActionData_t::__set_fUpdateTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& OVR::OpenVR::InputDigitalActionData_t::__get_fUpdateTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& OVR::OpenVR::InputDigitalActionData_t::__get_fUpdateTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "bActive", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "activeOrigin", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "bState", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "bChanged", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "fUpdateTime", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::InputDigitalActionData_t::InputDigitalActionData_t(bool  bActive, uint64_t  activeOrigin, bool  bState, bool  bChanged, float_t  fUpdateTime) noexcept : ::bs_hook::ValueTypeWrapper<0x18>() {this->bActive = bActive;
this->activeOrigin = activeOrigin;
this->bState = bState;
this->bChanged = bChanged;
this->fUpdateTime = fUpdateTime;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
