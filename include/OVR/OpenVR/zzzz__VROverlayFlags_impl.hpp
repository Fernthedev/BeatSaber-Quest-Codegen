#pragma once
#include "OVR/OpenVR/zzzz__VROverlayFlags_def.hpp"
constexpr void OVR::OpenVR::VROverlayFlags::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& OVR::OpenVR::VROverlayFlags::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& OVR::OpenVR::VROverlayFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VROverlayFlags::VROverlayFlags(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::OVR::OpenVR::VROverlayFlags  OVR::OpenVR::VROverlayFlags::None{static_cast<int32_t>(0x0)};
constexpr ::OVR::OpenVR::VROverlayFlags  OVR::OpenVR::VROverlayFlags::Curved{static_cast<int32_t>(0x1)};
constexpr ::OVR::OpenVR::VROverlayFlags  OVR::OpenVR::VROverlayFlags::RGSS4X{static_cast<int32_t>(0x2)};
constexpr ::OVR::OpenVR::VROverlayFlags  OVR::OpenVR::VROverlayFlags::NoDashboardTab{static_cast<int32_t>(0x3)};
constexpr ::OVR::OpenVR::VROverlayFlags  OVR::OpenVR::VROverlayFlags::AcceptsGamepadEvents{static_cast<int32_t>(0x4)};
constexpr ::OVR::OpenVR::VROverlayFlags  OVR::OpenVR::VROverlayFlags::ShowGamepadFocus{static_cast<int32_t>(0x5)};
constexpr ::OVR::OpenVR::VROverlayFlags  OVR::OpenVR::VROverlayFlags::SendVRScrollEvents{static_cast<int32_t>(0x6)};
constexpr ::OVR::OpenVR::VROverlayFlags  OVR::OpenVR::VROverlayFlags::SendVRTouchpadEvents{static_cast<int32_t>(0x7)};
constexpr ::OVR::OpenVR::VROverlayFlags  OVR::OpenVR::VROverlayFlags::ShowTouchPadScrollWheel{static_cast<int32_t>(0x8)};
constexpr ::OVR::OpenVR::VROverlayFlags  OVR::OpenVR::VROverlayFlags::TransferOwnershipToInternalProcess{static_cast<int32_t>(0x9)};
constexpr ::OVR::OpenVR::VROverlayFlags  OVR::OpenVR::VROverlayFlags::SideBySide_Parallel{static_cast<int32_t>(0xa)};
constexpr ::OVR::OpenVR::VROverlayFlags  OVR::OpenVR::VROverlayFlags::SideBySide_Crossed{static_cast<int32_t>(0xb)};
constexpr ::OVR::OpenVR::VROverlayFlags  OVR::OpenVR::VROverlayFlags::Panorama{static_cast<int32_t>(0xc)};
constexpr ::OVR::OpenVR::VROverlayFlags  OVR::OpenVR::VROverlayFlags::StereoPanorama{static_cast<int32_t>(0xd)};
constexpr ::OVR::OpenVR::VROverlayFlags  OVR::OpenVR::VROverlayFlags::SortWithNonSceneOverlays{static_cast<int32_t>(0xe)};
constexpr ::OVR::OpenVR::VROverlayFlags  OVR::OpenVR::VROverlayFlags::VisibleInDashboard{static_cast<int32_t>(0xf)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
