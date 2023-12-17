#pragma once
#include "OVR/OpenVR/zzzz__EVRNotificationError_def.hpp"
constexpr void OVR::OpenVR::EVRNotificationError::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& OVR::OpenVR::EVRNotificationError::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& OVR::OpenVR::EVRNotificationError::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EVRNotificationError::EVRNotificationError(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::OVR::OpenVR::EVRNotificationError  OVR::OpenVR::EVRNotificationError::OK{static_cast<int32_t>(0x0)};
constexpr ::OVR::OpenVR::EVRNotificationError  OVR::OpenVR::EVRNotificationError::InvalidNotificationId{static_cast<int32_t>(0x64)};
constexpr ::OVR::OpenVR::EVRNotificationError  OVR::OpenVR::EVRNotificationError::NotificationQueueFull{static_cast<int32_t>(0x65)};
constexpr ::OVR::OpenVR::EVRNotificationError  OVR::OpenVR::EVRNotificationError::InvalidOverlayHandle{static_cast<int32_t>(0x66)};
constexpr ::OVR::OpenVR::EVRNotificationError  OVR::OpenVR::EVRNotificationError::SystemWithUserValueAlreadyExists{static_cast<int32_t>(0x67)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
