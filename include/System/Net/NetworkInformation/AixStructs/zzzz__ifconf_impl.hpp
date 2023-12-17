#pragma once
#include "System/Net/NetworkInformation/AixStructs/zzzz__ifconf_def.hpp"
constexpr void System::Net::NetworkInformation::AixStructs::ifconf::__set_ifc_len(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Net::NetworkInformation::AixStructs::ifconf::__get_ifc_len()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Net::NetworkInformation::AixStructs::ifconf::__get_ifc_len() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Net::NetworkInformation::AixStructs::ifconf::__set_ifc_buf(::cordl_internals::intptr_t  value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t& System::Net::NetworkInformation::AixStructs::ifconf::__get_ifc_buf()  {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::intptr_t const& System::Net::NetworkInformation::AixStructs::ifconf::__get_ifc_buf() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "ifc_len", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ifc_buf", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::NetworkInformation::AixStructs::ifconf::ifconf(int32_t  ifc_len, ::cordl_internals::intptr_t  ifc_buf) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->ifc_len = ifc_len;
this->ifc_buf = ifc_buf;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
