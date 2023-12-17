#pragma once
#include "OVR/OpenVR/zzzz__VREvent_ScreenshotProgress_t_def.hpp"
constexpr void OVR::OpenVR::VREvent_ScreenshotProgress_t::__set_progress(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& OVR::OpenVR::VREvent_ScreenshotProgress_t::__get_progress()  {
return ::cordl_internals::getInstanceField<float_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& OVR::OpenVR::VREvent_ScreenshotProgress_t::__get_progress() const {
return ::cordl_internals::getInstanceField<float_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "progress", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VREvent_ScreenshotProgress_t::VREvent_ScreenshotProgress_t(float_t  progress) noexcept : ::bs_hook::ValueTypeWrapper<0x4>() {this->progress = progress;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
