#pragma once
#include "OVR/OpenVR/zzzz__VREvent_HapticVibration_t_def.hpp"
constexpr void OVR::OpenVR::VREvent_HapticVibration_t::__set_containerHandle(uint64_t  value)  {
::cordl_internals::setInstanceField<uint64_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint64_t>(value));
}
constexpr uint64_t& OVR::OpenVR::VREvent_HapticVibration_t::__get_containerHandle()  {
return ::cordl_internals::getInstanceField<uint64_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint64_t const& OVR::OpenVR::VREvent_HapticVibration_t::__get_containerHandle() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::VREvent_HapticVibration_t::__set_componentHandle(uint64_t  value)  {
::cordl_internals::setInstanceField<uint64_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint64_t>(value));
}
constexpr uint64_t& OVR::OpenVR::VREvent_HapticVibration_t::__get_componentHandle()  {
return ::cordl_internals::getInstanceField<uint64_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint64_t const& OVR::OpenVR::VREvent_HapticVibration_t::__get_componentHandle() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::VREvent_HapticVibration_t::__set_fDurationSeconds(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& OVR::OpenVR::VREvent_HapticVibration_t::__get_fDurationSeconds()  {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& OVR::OpenVR::VREvent_HapticVibration_t::__get_fDurationSeconds() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::VREvent_HapticVibration_t::__set_fFrequency(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& OVR::OpenVR::VREvent_HapticVibration_t::__get_fFrequency()  {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& OVR::OpenVR::VREvent_HapticVibration_t::__get_fFrequency() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::VREvent_HapticVibration_t::__set_fAmplitude(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& OVR::OpenVR::VREvent_HapticVibration_t::__get_fAmplitude()  {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& OVR::OpenVR::VREvent_HapticVibration_t::__get_fAmplitude() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "containerHandle", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "componentHandle", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "fDurationSeconds", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "fFrequency", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "fAmplitude", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VREvent_HapticVibration_t::VREvent_HapticVibration_t(uint64_t  containerHandle, uint64_t  componentHandle, float_t  fDurationSeconds, float_t  fFrequency, float_t  fAmplitude) noexcept : ::bs_hook::ValueTypeWrapper<0x20>() {this->containerHandle = containerHandle;
this->componentHandle = componentHandle;
this->fDurationSeconds = fDurationSeconds;
this->fFrequency = fFrequency;
this->fAmplitude = fAmplitude;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
