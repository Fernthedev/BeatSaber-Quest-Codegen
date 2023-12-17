#pragma once
#include "OVR/OpenVR/zzzz__VREvent_EditingCameraSurface_t_def.hpp"
constexpr void OVR::OpenVR::VREvent_EditingCameraSurface_t::__set_overlayHandle(uint64_t  value)  {
::cordl_internals::setInstanceField<uint64_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint64_t>(value));
}
constexpr uint64_t& OVR::OpenVR::VREvent_EditingCameraSurface_t::__get_overlayHandle()  {
return ::cordl_internals::getInstanceField<uint64_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint64_t const& OVR::OpenVR::VREvent_EditingCameraSurface_t::__get_overlayHandle() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::VREvent_EditingCameraSurface_t::__set_nVisualMode(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t& OVR::OpenVR::VREvent_EditingCameraSurface_t::__get_nVisualMode()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint32_t const& OVR::OpenVR::VREvent_EditingCameraSurface_t::__get_nVisualMode() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "overlayHandle", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "nVisualMode", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VREvent_EditingCameraSurface_t::VREvent_EditingCameraSurface_t(uint64_t  overlayHandle, uint32_t  nVisualMode) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->overlayHandle = overlayHandle;
this->nVisualMode = nVisualMode;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
