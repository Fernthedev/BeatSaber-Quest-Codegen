#pragma once
#include "OVR/OpenVR/zzzz__VREvent_Reserved_t_def.hpp"
constexpr void OVR::OpenVR::VREvent_Reserved_t::__set_reserved0(uint64_t  value)  {
::cordl_internals::setInstanceField<uint64_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint64_t>(value));
}
constexpr uint64_t& OVR::OpenVR::VREvent_Reserved_t::__get_reserved0()  {
return ::cordl_internals::getInstanceField<uint64_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint64_t const& OVR::OpenVR::VREvent_Reserved_t::__get_reserved0() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::VREvent_Reserved_t::__set_reserved1(uint64_t  value)  {
::cordl_internals::setInstanceField<uint64_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint64_t>(value));
}
constexpr uint64_t& OVR::OpenVR::VREvent_Reserved_t::__get_reserved1()  {
return ::cordl_internals::getInstanceField<uint64_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint64_t const& OVR::OpenVR::VREvent_Reserved_t::__get_reserved1() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::VREvent_Reserved_t::__set_reserved2(uint64_t  value)  {
::cordl_internals::setInstanceField<uint64_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint64_t>(value));
}
constexpr uint64_t& OVR::OpenVR::VREvent_Reserved_t::__get_reserved2()  {
return ::cordl_internals::getInstanceField<uint64_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint64_t const& OVR::OpenVR::VREvent_Reserved_t::__get_reserved2() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::VREvent_Reserved_t::__set_reserved3(uint64_t  value)  {
::cordl_internals::setInstanceField<uint64_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint64_t>(value));
}
constexpr uint64_t& OVR::OpenVR::VREvent_Reserved_t::__get_reserved3()  {
return ::cordl_internals::getInstanceField<uint64_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint64_t const& OVR::OpenVR::VREvent_Reserved_t::__get_reserved3() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "reserved0", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "reserved1", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "reserved2", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "reserved3", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VREvent_Reserved_t::VREvent_Reserved_t(uint64_t  reserved0, uint64_t  reserved1, uint64_t  reserved2, uint64_t  reserved3) noexcept : ::bs_hook::ValueTypeWrapper<0x20>() {this->reserved0 = reserved0;
this->reserved1 = reserved1;
this->reserved2 = reserved2;
this->reserved3 = reserved3;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
