#pragma once
#include "OVR/OpenVR/zzzz__EVRApplicationType_def.hpp"
constexpr void OVR::OpenVR::EVRApplicationType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& OVR::OpenVR::EVRApplicationType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& OVR::OpenVR::EVRApplicationType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EVRApplicationType::EVRApplicationType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::OVR::OpenVR::EVRApplicationType  OVR::OpenVR::EVRApplicationType::VRApplication_Other{static_cast<int32_t>(0x0)};
constexpr ::OVR::OpenVR::EVRApplicationType  OVR::OpenVR::EVRApplicationType::VRApplication_Scene{static_cast<int32_t>(0x1)};
constexpr ::OVR::OpenVR::EVRApplicationType  OVR::OpenVR::EVRApplicationType::VRApplication_Overlay{static_cast<int32_t>(0x2)};
constexpr ::OVR::OpenVR::EVRApplicationType  OVR::OpenVR::EVRApplicationType::VRApplication_Background{static_cast<int32_t>(0x3)};
constexpr ::OVR::OpenVR::EVRApplicationType  OVR::OpenVR::EVRApplicationType::VRApplication_Utility{static_cast<int32_t>(0x4)};
constexpr ::OVR::OpenVR::EVRApplicationType  OVR::OpenVR::EVRApplicationType::VRApplication_VRMonitor{static_cast<int32_t>(0x5)};
constexpr ::OVR::OpenVR::EVRApplicationType  OVR::OpenVR::EVRApplicationType::VRApplication_SteamWatchdog{static_cast<int32_t>(0x6)};
constexpr ::OVR::OpenVR::EVRApplicationType  OVR::OpenVR::EVRApplicationType::VRApplication_Bootstrapper{static_cast<int32_t>(0x7)};
constexpr ::OVR::OpenVR::EVRApplicationType  OVR::OpenVR::EVRApplicationType::VRApplication_Max{static_cast<int32_t>(0x8)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
