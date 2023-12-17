#pragma once
#include "OVR/OpenVR/zzzz__EVRComponentProperty_def.hpp"
constexpr void OVR::OpenVR::EVRComponentProperty::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& OVR::OpenVR::EVRComponentProperty::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& OVR::OpenVR::EVRComponentProperty::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EVRComponentProperty::EVRComponentProperty(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::OVR::OpenVR::EVRComponentProperty  OVR::OpenVR::EVRComponentProperty::IsStatic{static_cast<int32_t>(0x1)};
constexpr ::OVR::OpenVR::EVRComponentProperty  OVR::OpenVR::EVRComponentProperty::IsVisible{static_cast<int32_t>(0x2)};
constexpr ::OVR::OpenVR::EVRComponentProperty  OVR::OpenVR::EVRComponentProperty::IsTouched{static_cast<int32_t>(0x4)};
constexpr ::OVR::OpenVR::EVRComponentProperty  OVR::OpenVR::EVRComponentProperty::IsPressed{static_cast<int32_t>(0x8)};
constexpr ::OVR::OpenVR::EVRComponentProperty  OVR::OpenVR::EVRComponentProperty::IsScrolled{static_cast<int32_t>(0x10)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
