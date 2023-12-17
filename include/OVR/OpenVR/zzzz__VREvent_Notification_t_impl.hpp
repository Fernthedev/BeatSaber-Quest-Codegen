#pragma once
#include "OVR/OpenVR/zzzz__VREvent_Notification_t_def.hpp"
constexpr void OVR::OpenVR::VREvent_Notification_t::__set_ulUserValue(uint64_t  value)  {
::cordl_internals::setInstanceField<uint64_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint64_t>(value));
}
constexpr uint64_t& OVR::OpenVR::VREvent_Notification_t::__get_ulUserValue()  {
return ::cordl_internals::getInstanceField<uint64_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint64_t const& OVR::OpenVR::VREvent_Notification_t::__get_ulUserValue() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::VREvent_Notification_t::__set_notificationId(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t& OVR::OpenVR::VREvent_Notification_t::__get_notificationId()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint32_t const& OVR::OpenVR::VREvent_Notification_t::__get_notificationId() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "ulUserValue", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "notificationId", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VREvent_Notification_t::VREvent_Notification_t(uint64_t  ulUserValue, uint32_t  notificationId) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->ulUserValue = ulUserValue;
this->notificationId = notificationId;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
