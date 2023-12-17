#pragma once
#include "ENet/zzzz__PacketFlags_def.hpp"
constexpr void ENet::PacketFlags::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& ENet::PacketFlags::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& ENet::PacketFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::ENet::PacketFlags::PacketFlags(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::ENet::PacketFlags  ENet::PacketFlags::None{static_cast<int32_t>(0x0)};
constexpr ::ENet::PacketFlags  ENet::PacketFlags::Reliable{static_cast<int32_t>(0x1)};
constexpr ::ENet::PacketFlags  ENet::PacketFlags::Unsequenced{static_cast<int32_t>(0x2)};
constexpr ::ENet::PacketFlags  ENet::PacketFlags::NoAllocate{static_cast<int32_t>(0x4)};
constexpr ::ENet::PacketFlags  ENet::PacketFlags::UnreliableFragmented{static_cast<int32_t>(0x8)};
constexpr ::ENet::PacketFlags  ENet::PacketFlags::Instant{static_cast<int32_t>(0x10)};
constexpr ::ENet::PacketFlags  ENet::PacketFlags::Unthrottled{static_cast<int32_t>(0x20)};
constexpr ::ENet::PacketFlags  ENet::PacketFlags::Sent{static_cast<int32_t>(0x100)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
