#pragma once
#include "System/Net/NetworkInformation/zzzz__in6_addr_def.hpp"
constexpr void System::Net::NetworkInformation::in6_addr::__set_u6_addr8(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& System::Net::NetworkInformation::in6_addr::__get_u6_addr8()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& System::Net::NetworkInformation::in6_addr::__get_u6_addr8() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "u6_addr8", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("csnull") }]
constexpr ::System::Net::NetworkInformation::in6_addr::in6_addr(::ArrayW<uint8_t,::Array<uint8_t>*>  u6_addr8) noexcept : ::bs_hook::ValueTypeWrapper<0x8>() {this->u6_addr8 = u6_addr8;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
