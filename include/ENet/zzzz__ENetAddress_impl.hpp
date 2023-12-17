#pragma once
#include "ENet/zzzz__ENetAddress_def.hpp"
constexpr void ENet::ENetAddress::__set_port(uint16_t  value)  {
::cordl_internals::setInstanceField<uint16_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint16_t>(value));
}
constexpr uint16_t& ENet::ENetAddress::__get_port()  {
return ::cordl_internals::getInstanceField<uint16_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint16_t const& ENet::ENetAddress::__get_port() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "port", ty: "uint16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::ENet::ENetAddress::ENetAddress(uint16_t  port) noexcept : ::bs_hook::ValueTypeWrapper<0x12>() {this->port = port;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
