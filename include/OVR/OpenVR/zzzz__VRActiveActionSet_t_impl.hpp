#pragma once
#include "OVR/OpenVR/zzzz__VRActiveActionSet_t_def.hpp"
constexpr void OVR::OpenVR::VRActiveActionSet_t::__set_ulActionSet(uint64_t  value)  {
::cordl_internals::setInstanceField<uint64_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint64_t>(value));
}
constexpr uint64_t& OVR::OpenVR::VRActiveActionSet_t::__get_ulActionSet()  {
return ::cordl_internals::getInstanceField<uint64_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint64_t const& OVR::OpenVR::VRActiveActionSet_t::__get_ulActionSet() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::VRActiveActionSet_t::__set_ulRestrictedToDevice(uint64_t  value)  {
::cordl_internals::setInstanceField<uint64_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint64_t>(value));
}
constexpr uint64_t& OVR::OpenVR::VRActiveActionSet_t::__get_ulRestrictedToDevice()  {
return ::cordl_internals::getInstanceField<uint64_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint64_t const& OVR::OpenVR::VRActiveActionSet_t::__get_ulRestrictedToDevice() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::VRActiveActionSet_t::__set_ulSecondaryActionSet(uint64_t  value)  {
::cordl_internals::setInstanceField<uint64_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint64_t>(value));
}
constexpr uint64_t& OVR::OpenVR::VRActiveActionSet_t::__get_ulSecondaryActionSet()  {
return ::cordl_internals::getInstanceField<uint64_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint64_t const& OVR::OpenVR::VRActiveActionSet_t::__get_ulSecondaryActionSet() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::VRActiveActionSet_t::__set_unPadding(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t& OVR::OpenVR::VRActiveActionSet_t::__get_unPadding()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint32_t const& OVR::OpenVR::VRActiveActionSet_t::__get_unPadding() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::VRActiveActionSet_t::__set_nPriority(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& OVR::OpenVR::VRActiveActionSet_t::__get_nPriority()  {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& OVR::OpenVR::VRActiveActionSet_t::__get_nPriority() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "ulActionSet", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ulRestrictedToDevice", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ulSecondaryActionSet", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "unPadding", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "nPriority", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VRActiveActionSet_t::VRActiveActionSet_t(uint64_t  ulActionSet, uint64_t  ulRestrictedToDevice, uint64_t  ulSecondaryActionSet, uint32_t  unPadding, int32_t  nPriority) noexcept : ::bs_hook::ValueTypeWrapper<0x20>() {this->ulActionSet = ulActionSet;
this->ulRestrictedToDevice = ulRestrictedToDevice;
this->ulSecondaryActionSet = ulSecondaryActionSet;
this->unPadding = unPadding;
this->nPriority = nPriority;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
