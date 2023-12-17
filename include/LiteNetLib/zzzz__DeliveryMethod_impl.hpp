#pragma once
#include "LiteNetLib/zzzz__DeliveryMethod_def.hpp"
constexpr void LiteNetLib::DeliveryMethod::__set_value__(uint8_t  value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint8_t>(value));
}
constexpr uint8_t& LiteNetLib::DeliveryMethod::__get_value__()  {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint8_t const& LiteNetLib::DeliveryMethod::__get_value__() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::LiteNetLib::DeliveryMethod::DeliveryMethod(uint8_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x1>() {this->value__ = value__;
}
constexpr ::LiteNetLib::DeliveryMethod  LiteNetLib::DeliveryMethod::Unreliable{static_cast<uint8_t>(0x4u)};
constexpr ::LiteNetLib::DeliveryMethod  LiteNetLib::DeliveryMethod::ReliableUnordered{static_cast<uint8_t>(0x0u)};
constexpr ::LiteNetLib::DeliveryMethod  LiteNetLib::DeliveryMethod::Sequenced{static_cast<uint8_t>(0x1u)};
constexpr ::LiteNetLib::DeliveryMethod  LiteNetLib::DeliveryMethod::ReliableOrdered{static_cast<uint8_t>(0x2u)};
constexpr ::LiteNetLib::DeliveryMethod  LiteNetLib::DeliveryMethod::ReliableSequenced{static_cast<uint8_t>(0x3u)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
