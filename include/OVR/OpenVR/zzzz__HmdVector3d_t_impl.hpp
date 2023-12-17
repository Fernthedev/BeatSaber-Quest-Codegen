#pragma once
#include "OVR/OpenVR/zzzz__HmdVector3d_t_def.hpp"
constexpr void OVR::OpenVR::HmdVector3d_t::__set_v0(double_t  value)  {
::cordl_internals::setInstanceField<double_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<double_t>(value));
}
constexpr double_t& OVR::OpenVR::HmdVector3d_t::__get_v0()  {
return ::cordl_internals::getInstanceField<double_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr double_t const& OVR::OpenVR::HmdVector3d_t::__get_v0() const {
return ::cordl_internals::getInstanceField<double_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::HmdVector3d_t::__set_v1(double_t  value)  {
::cordl_internals::setInstanceField<double_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<double_t>(value));
}
constexpr double_t& OVR::OpenVR::HmdVector3d_t::__get_v1()  {
return ::cordl_internals::getInstanceField<double_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr double_t const& OVR::OpenVR::HmdVector3d_t::__get_v1() const {
return ::cordl_internals::getInstanceField<double_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::HmdVector3d_t::__set_v2(double_t  value)  {
::cordl_internals::setInstanceField<double_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<double_t>(value));
}
constexpr double_t& OVR::OpenVR::HmdVector3d_t::__get_v2()  {
return ::cordl_internals::getInstanceField<double_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr double_t const& OVR::OpenVR::HmdVector3d_t::__get_v2() const {
return ::cordl_internals::getInstanceField<double_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "v0", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "v1", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "v2", ty: "double_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::HmdVector3d_t::HmdVector3d_t(double_t  v0, double_t  v1, double_t  v2) noexcept : ::bs_hook::ValueTypeWrapper<0x18>() {this->v0 = v0;
this->v1 = v1;
this->v2 = v2;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
