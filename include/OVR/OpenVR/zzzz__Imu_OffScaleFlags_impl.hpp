#pragma once
#include "OVR/OpenVR/zzzz__Imu_OffScaleFlags_def.hpp"
constexpr void OVR::OpenVR::Imu_OffScaleFlags::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& OVR::OpenVR::Imu_OffScaleFlags::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& OVR::OpenVR::Imu_OffScaleFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::Imu_OffScaleFlags::Imu_OffScaleFlags(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::OVR::OpenVR::Imu_OffScaleFlags  OVR::OpenVR::Imu_OffScaleFlags::OffScale_AccelX{static_cast<int32_t>(0x1)};
constexpr ::OVR::OpenVR::Imu_OffScaleFlags  OVR::OpenVR::Imu_OffScaleFlags::OffScale_AccelY{static_cast<int32_t>(0x2)};
constexpr ::OVR::OpenVR::Imu_OffScaleFlags  OVR::OpenVR::Imu_OffScaleFlags::OffScale_AccelZ{static_cast<int32_t>(0x4)};
constexpr ::OVR::OpenVR::Imu_OffScaleFlags  OVR::OpenVR::Imu_OffScaleFlags::OffScale_GyroX{static_cast<int32_t>(0x8)};
constexpr ::OVR::OpenVR::Imu_OffScaleFlags  OVR::OpenVR::Imu_OffScaleFlags::OffScale_GyroY{static_cast<int32_t>(0x10)};
constexpr ::OVR::OpenVR::Imu_OffScaleFlags  OVR::OpenVR::Imu_OffScaleFlags::OffScale_GyroZ{static_cast<int32_t>(0x20)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
