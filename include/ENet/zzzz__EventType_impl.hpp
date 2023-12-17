#pragma once
#include "ENet/zzzz__EventType_def.hpp"
constexpr void ENet::EventType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& ENet::EventType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& ENet::EventType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::ENet::EventType::EventType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::ENet::EventType  ENet::EventType::None{static_cast<int32_t>(0x0)};
constexpr ::ENet::EventType  ENet::EventType::Connect{static_cast<int32_t>(0x1)};
constexpr ::ENet::EventType  ENet::EventType::Disconnect{static_cast<int32_t>(0x2)};
constexpr ::ENet::EventType  ENet::EventType::Receive{static_cast<int32_t>(0x3)};
constexpr ::ENet::EventType  ENet::EventType::Timeout{static_cast<int32_t>(0x4)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
