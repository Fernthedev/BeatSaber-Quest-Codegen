#pragma once
#include "OVR/OpenVR/zzzz__ECollisionBoundsStyle_def.hpp"
constexpr void OVR::OpenVR::ECollisionBoundsStyle::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& OVR::OpenVR::ECollisionBoundsStyle::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& OVR::OpenVR::ECollisionBoundsStyle::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::ECollisionBoundsStyle::ECollisionBoundsStyle(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::OVR::OpenVR::ECollisionBoundsStyle  OVR::OpenVR::ECollisionBoundsStyle::COLLISION_BOUNDS_STYLE_BEGINNER{static_cast<int32_t>(0x0)};
constexpr ::OVR::OpenVR::ECollisionBoundsStyle  OVR::OpenVR::ECollisionBoundsStyle::COLLISION_BOUNDS_STYLE_INTERMEDIATE{static_cast<int32_t>(0x1)};
constexpr ::OVR::OpenVR::ECollisionBoundsStyle  OVR::OpenVR::ECollisionBoundsStyle::COLLISION_BOUNDS_STYLE_SQUARES{static_cast<int32_t>(0x2)};
constexpr ::OVR::OpenVR::ECollisionBoundsStyle  OVR::OpenVR::ECollisionBoundsStyle::COLLISION_BOUNDS_STYLE_ADVANCED{static_cast<int32_t>(0x3)};
constexpr ::OVR::OpenVR::ECollisionBoundsStyle  OVR::OpenVR::ECollisionBoundsStyle::COLLISION_BOUNDS_STYLE_NONE{static_cast<int32_t>(0x4)};
constexpr ::OVR::OpenVR::ECollisionBoundsStyle  OVR::OpenVR::ECollisionBoundsStyle::COLLISION_BOUNDS_STYLE_COUNT{static_cast<int32_t>(0x5)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
