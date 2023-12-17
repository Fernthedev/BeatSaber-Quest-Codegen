#pragma once
#include "OVR/OpenVR/zzzz__EVRSpatialAnchorError_def.hpp"
constexpr void OVR::OpenVR::EVRSpatialAnchorError::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& OVR::OpenVR::EVRSpatialAnchorError::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& OVR::OpenVR::EVRSpatialAnchorError::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EVRSpatialAnchorError::EVRSpatialAnchorError(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::OVR::OpenVR::EVRSpatialAnchorError  OVR::OpenVR::EVRSpatialAnchorError::Success{static_cast<int32_t>(0x0)};
constexpr ::OVR::OpenVR::EVRSpatialAnchorError  OVR::OpenVR::EVRSpatialAnchorError::Internal{static_cast<int32_t>(0x1)};
constexpr ::OVR::OpenVR::EVRSpatialAnchorError  OVR::OpenVR::EVRSpatialAnchorError::UnknownHandle{static_cast<int32_t>(0x2)};
constexpr ::OVR::OpenVR::EVRSpatialAnchorError  OVR::OpenVR::EVRSpatialAnchorError::ArrayTooSmall{static_cast<int32_t>(0x3)};
constexpr ::OVR::OpenVR::EVRSpatialAnchorError  OVR::OpenVR::EVRSpatialAnchorError::InvalidDescriptorChar{static_cast<int32_t>(0x4)};
constexpr ::OVR::OpenVR::EVRSpatialAnchorError  OVR::OpenVR::EVRSpatialAnchorError::NotYetAvailable{static_cast<int32_t>(0x5)};
constexpr ::OVR::OpenVR::EVRSpatialAnchorError  OVR::OpenVR::EVRSpatialAnchorError::NotAvailableInThisUniverse{static_cast<int32_t>(0x6)};
constexpr ::OVR::OpenVR::EVRSpatialAnchorError  OVR::OpenVR::EVRSpatialAnchorError::PermanentlyUnavailable{static_cast<int32_t>(0x7)};
constexpr ::OVR::OpenVR::EVRSpatialAnchorError  OVR::OpenVR::EVRSpatialAnchorError::WrongDriver{static_cast<int32_t>(0x8)};
constexpr ::OVR::OpenVR::EVRSpatialAnchorError  OVR::OpenVR::EVRSpatialAnchorError::DescriptorTooLong{static_cast<int32_t>(0x9)};
constexpr ::OVR::OpenVR::EVRSpatialAnchorError  OVR::OpenVR::EVRSpatialAnchorError::Unknown{static_cast<int32_t>(0xa)};
constexpr ::OVR::OpenVR::EVRSpatialAnchorError  OVR::OpenVR::EVRSpatialAnchorError::NoRoomCalibration{static_cast<int32_t>(0xb)};
constexpr ::OVR::OpenVR::EVRSpatialAnchorError  OVR::OpenVR::EVRSpatialAnchorError::InvalidArgument{static_cast<int32_t>(0xc)};
constexpr ::OVR::OpenVR::EVRSpatialAnchorError  OVR::OpenVR::EVRSpatialAnchorError::UnknownDriver{static_cast<int32_t>(0xd)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
