#pragma once
#include "System/Net/NetworkInformation/zzzz__ifa_ifu_def.hpp"
constexpr void System::Net::NetworkInformation::ifa_ifu::__set_ifu_broadaddr(::cordl_internals::intptr_t  value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t& System::Net::NetworkInformation::ifa_ifu::__get_ifu_broadaddr()  {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::intptr_t const& System::Net::NetworkInformation::ifa_ifu::__get_ifu_broadaddr() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Net::NetworkInformation::ifa_ifu::__set_ifu_dstaddr(::cordl_internals::intptr_t  value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t& System::Net::NetworkInformation::ifa_ifu::__get_ifu_dstaddr()  {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::intptr_t const& System::Net::NetworkInformation::ifa_ifu::__get_ifu_dstaddr() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "ifu_broadaddr", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ifu_dstaddr", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::NetworkInformation::ifa_ifu::ifa_ifu(::cordl_internals::intptr_t  ifu_broadaddr, ::cordl_internals::intptr_t  ifu_dstaddr) noexcept : ::bs_hook::ValueTypeWrapper<0x8>() {this->ifu_broadaddr = ifu_broadaddr;
this->ifu_dstaddr = ifu_dstaddr;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
