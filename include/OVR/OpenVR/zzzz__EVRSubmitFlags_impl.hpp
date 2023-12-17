#pragma once
#include "OVR/OpenVR/zzzz__EVRSubmitFlags_def.hpp"
constexpr void OVR::OpenVR::EVRSubmitFlags::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& OVR::OpenVR::EVRSubmitFlags::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& OVR::OpenVR::EVRSubmitFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EVRSubmitFlags::EVRSubmitFlags(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::OVR::OpenVR::EVRSubmitFlags  OVR::OpenVR::EVRSubmitFlags::Submit_Default{static_cast<int32_t>(0x0)};
constexpr ::OVR::OpenVR::EVRSubmitFlags  OVR::OpenVR::EVRSubmitFlags::Submit_LensDistortionAlreadyApplied{static_cast<int32_t>(0x1)};
constexpr ::OVR::OpenVR::EVRSubmitFlags  OVR::OpenVR::EVRSubmitFlags::Submit_GlRenderBuffer{static_cast<int32_t>(0x2)};
constexpr ::OVR::OpenVR::EVRSubmitFlags  OVR::OpenVR::EVRSubmitFlags::Submit_Reserved{static_cast<int32_t>(0x4)};
constexpr ::OVR::OpenVR::EVRSubmitFlags  OVR::OpenVR::EVRSubmitFlags::Submit_TextureWithPose{static_cast<int32_t>(0x8)};
constexpr ::OVR::OpenVR::EVRSubmitFlags  OVR::OpenVR::EVRSubmitFlags::Submit_TextureWithDepth{static_cast<int32_t>(0x10)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
