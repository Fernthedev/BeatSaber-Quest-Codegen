#pragma once
#include "GlobalNamespace/zzzz__OVRTextureQualityFiltering_def.hpp"
constexpr void GlobalNamespace::OVRTextureQualityFiltering::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::OVRTextureQualityFiltering::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::OVRTextureQualityFiltering::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRTextureQualityFiltering::OVRTextureQualityFiltering(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::OVRTextureQualityFiltering  GlobalNamespace::OVRTextureQualityFiltering::None{static_cast<int32_t>(0xffffffff)};
constexpr ::GlobalNamespace::OVRTextureQualityFiltering  GlobalNamespace::OVRTextureQualityFiltering::Bilinear{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OVRTextureQualityFiltering  GlobalNamespace::OVRTextureQualityFiltering::Trilinear{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OVRTextureQualityFiltering  GlobalNamespace::OVRTextureQualityFiltering::Aniso2x{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::OVRTextureQualityFiltering  GlobalNamespace::OVRTextureQualityFiltering::Aniso4x{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::OVRTextureQualityFiltering  GlobalNamespace::OVRTextureQualityFiltering::Aniso8x{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::OVRTextureQualityFiltering  GlobalNamespace::OVRTextureQualityFiltering::Aniso16x{static_cast<int32_t>(0x5)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
