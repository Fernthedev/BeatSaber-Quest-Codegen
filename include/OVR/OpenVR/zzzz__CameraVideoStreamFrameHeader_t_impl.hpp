#pragma once
#include "OVR/OpenVR/zzzz__CameraVideoStreamFrameHeader_t_def.hpp"
#include "OVR/OpenVR/zzzz__EVRTrackedCameraFrameType_def.hpp"
#include "OVR/OpenVR/zzzz__TrackedDevicePose_t_def.hpp"
constexpr void OVR::OpenVR::CameraVideoStreamFrameHeader_t::__set_eFrameType(::OVR::OpenVR::EVRTrackedCameraFrameType  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::EVRTrackedCameraFrameType, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::EVRTrackedCameraFrameType>(value));
}
constexpr ::OVR::OpenVR::EVRTrackedCameraFrameType& OVR::OpenVR::CameraVideoStreamFrameHeader_t::__get_eFrameType()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::EVRTrackedCameraFrameType, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::OVR::OpenVR::EVRTrackedCameraFrameType const& OVR::OpenVR::CameraVideoStreamFrameHeader_t::__get_eFrameType() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::EVRTrackedCameraFrameType, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::CameraVideoStreamFrameHeader_t::__set_nWidth(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t& OVR::OpenVR::CameraVideoStreamFrameHeader_t::__get_nWidth()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint32_t const& OVR::OpenVR::CameraVideoStreamFrameHeader_t::__get_nWidth() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::CameraVideoStreamFrameHeader_t::__set_nHeight(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t& OVR::OpenVR::CameraVideoStreamFrameHeader_t::__get_nHeight()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint32_t const& OVR::OpenVR::CameraVideoStreamFrameHeader_t::__get_nHeight() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::CameraVideoStreamFrameHeader_t::__set_nBytesPerPixel(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t& OVR::OpenVR::CameraVideoStreamFrameHeader_t::__get_nBytesPerPixel()  {
return ::cordl_internals::getInstanceField<uint32_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint32_t const& OVR::OpenVR::CameraVideoStreamFrameHeader_t::__get_nBytesPerPixel() const {
return ::cordl_internals::getInstanceField<uint32_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::CameraVideoStreamFrameHeader_t::__set_nFrameSequence(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t& OVR::OpenVR::CameraVideoStreamFrameHeader_t::__get_nFrameSequence()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint32_t const& OVR::OpenVR::CameraVideoStreamFrameHeader_t::__get_nFrameSequence() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::CameraVideoStreamFrameHeader_t::__set_standingTrackedDevicePose(::OVR::OpenVR::TrackedDevicePose_t  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::TrackedDevicePose_t, 0x14>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::TrackedDevicePose_t>(value));
}
constexpr ::OVR::OpenVR::TrackedDevicePose_t& OVR::OpenVR::CameraVideoStreamFrameHeader_t::__get_standingTrackedDevicePose()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::TrackedDevicePose_t, 0x14>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::OVR::OpenVR::TrackedDevicePose_t const& OVR::OpenVR::CameraVideoStreamFrameHeader_t::__get_standingTrackedDevicePose() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::TrackedDevicePose_t, 0x14>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "eFrameType", ty: "::OVR::OpenVR::EVRTrackedCameraFrameType", modifiers: "", def_value: Some("{}") }, CppParam { name: "nWidth", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "nHeight", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "nBytesPerPixel", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "nFrameSequence", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "standingTrackedDevicePose", ty: "::OVR::OpenVR::TrackedDevicePose_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::CameraVideoStreamFrameHeader_t::CameraVideoStreamFrameHeader_t(::OVR::OpenVR::EVRTrackedCameraFrameType  eFrameType, uint32_t  nWidth, uint32_t  nHeight, uint32_t  nBytesPerPixel, uint32_t  nFrameSequence, ::OVR::OpenVR::TrackedDevicePose_t  standingTrackedDevicePose) noexcept : ::bs_hook::ValueTypeWrapper<0x64>() {this->eFrameType = eFrameType;
this->nWidth = nWidth;
this->nHeight = nHeight;
this->nBytesPerPixel = nBytesPerPixel;
this->nFrameSequence = nFrameSequence;
this->standingTrackedDevicePose = standingTrackedDevicePose;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
