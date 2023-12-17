#pragma once
#include "OVR/OpenVR/zzzz__EVRTrackedCameraFrameLayout_def.hpp"
constexpr void OVR::OpenVR::EVRTrackedCameraFrameLayout::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& OVR::OpenVR::EVRTrackedCameraFrameLayout::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& OVR::OpenVR::EVRTrackedCameraFrameLayout::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EVRTrackedCameraFrameLayout::EVRTrackedCameraFrameLayout(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::OVR::OpenVR::EVRTrackedCameraFrameLayout  OVR::OpenVR::EVRTrackedCameraFrameLayout::Mono{static_cast<int32_t>(0x1)};
constexpr ::OVR::OpenVR::EVRTrackedCameraFrameLayout  OVR::OpenVR::EVRTrackedCameraFrameLayout::Stereo{static_cast<int32_t>(0x2)};
constexpr ::OVR::OpenVR::EVRTrackedCameraFrameLayout  OVR::OpenVR::EVRTrackedCameraFrameLayout::VerticalLayout{static_cast<int32_t>(0x10)};
constexpr ::OVR::OpenVR::EVRTrackedCameraFrameLayout  OVR::OpenVR::EVRTrackedCameraFrameLayout::HorizontalLayout{static_cast<int32_t>(0x20)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
