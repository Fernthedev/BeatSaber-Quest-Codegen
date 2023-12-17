#pragma once
#include "GlobalNamespace/zzzz__VRPlatformSDK_def.hpp"
constexpr void GlobalNamespace::VRPlatformSDK::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::VRPlatformSDK::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::VRPlatformSDK::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::VRPlatformSDK::VRPlatformSDK(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::VRPlatformSDK  GlobalNamespace::VRPlatformSDK::OpenXR{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::VRPlatformSDK  GlobalNamespace::VRPlatformSDK::Oculus{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::VRPlatformSDK  GlobalNamespace::VRPlatformSDK::Unknown{static_cast<int32_t>(0x2)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
