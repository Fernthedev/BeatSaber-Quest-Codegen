#pragma once
#include "LiteNetLib/zzzz__ConnectionState_def.hpp"
constexpr void LiteNetLib::ConnectionState::__set_value__(uint8_t  value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint8_t>(value));
}
constexpr uint8_t& LiteNetLib::ConnectionState::__get_value__()  {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint8_t const& LiteNetLib::ConnectionState::__get_value__() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::LiteNetLib::ConnectionState::ConnectionState(uint8_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x1>() {this->value__ = value__;
}
constexpr ::LiteNetLib::ConnectionState  LiteNetLib::ConnectionState::Outgoing{static_cast<uint8_t>(0x2u)};
constexpr ::LiteNetLib::ConnectionState  LiteNetLib::ConnectionState::Connected{static_cast<uint8_t>(0x4u)};
constexpr ::LiteNetLib::ConnectionState  LiteNetLib::ConnectionState::ShutdownRequested{static_cast<uint8_t>(0x8u)};
constexpr ::LiteNetLib::ConnectionState  LiteNetLib::ConnectionState::Disconnected{static_cast<uint8_t>(0x10u)};
constexpr ::LiteNetLib::ConnectionState  LiteNetLib::ConnectionState::Any{static_cast<uint8_t>(0xeu)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
