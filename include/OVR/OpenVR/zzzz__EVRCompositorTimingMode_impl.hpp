#pragma once
#include "OVR/OpenVR/zzzz__EVRCompositorTimingMode_def.hpp"
constexpr void OVR::OpenVR::EVRCompositorTimingMode::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& OVR::OpenVR::EVRCompositorTimingMode::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& OVR::OpenVR::EVRCompositorTimingMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EVRCompositorTimingMode::EVRCompositorTimingMode(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::OVR::OpenVR::EVRCompositorTimingMode  OVR::OpenVR::EVRCompositorTimingMode::Implicit{static_cast<int32_t>(0x0)};
constexpr ::OVR::OpenVR::EVRCompositorTimingMode  OVR::OpenVR::EVRCompositorTimingMode::Explicit_RuntimePerformsPostPresentHandoff{static_cast<int32_t>(0x1)};
constexpr ::OVR::OpenVR::EVRCompositorTimingMode  OVR::OpenVR::EVRCompositorTimingMode::Explicit_ApplicationPerformsPostPresentHandoff{static_cast<int32_t>(0x2)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
