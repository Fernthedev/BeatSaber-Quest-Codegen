#pragma once
#include "LiteNetLib/zzzz__DisconnectReason_def.hpp"
constexpr void LiteNetLib::DisconnectReason::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& LiteNetLib::DisconnectReason::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& LiteNetLib::DisconnectReason::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::LiteNetLib::DisconnectReason::DisconnectReason(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::LiteNetLib::DisconnectReason  LiteNetLib::DisconnectReason::ConnectionFailed{static_cast<int32_t>(0x0)};
constexpr ::LiteNetLib::DisconnectReason  LiteNetLib::DisconnectReason::Timeout{static_cast<int32_t>(0x1)};
constexpr ::LiteNetLib::DisconnectReason  LiteNetLib::DisconnectReason::HostUnreachable{static_cast<int32_t>(0x2)};
constexpr ::LiteNetLib::DisconnectReason  LiteNetLib::DisconnectReason::NetworkUnreachable{static_cast<int32_t>(0x3)};
constexpr ::LiteNetLib::DisconnectReason  LiteNetLib::DisconnectReason::RemoteConnectionClose{static_cast<int32_t>(0x4)};
constexpr ::LiteNetLib::DisconnectReason  LiteNetLib::DisconnectReason::DisconnectPeerCalled{static_cast<int32_t>(0x5)};
constexpr ::LiteNetLib::DisconnectReason  LiteNetLib::DisconnectReason::ConnectionRejected{static_cast<int32_t>(0x6)};
constexpr ::LiteNetLib::DisconnectReason  LiteNetLib::DisconnectReason::InvalidProtocol{static_cast<int32_t>(0x7)};
constexpr ::LiteNetLib::DisconnectReason  LiteNetLib::DisconnectReason::UnknownHost{static_cast<int32_t>(0x8)};
constexpr ::LiteNetLib::DisconnectReason  LiteNetLib::DisconnectReason::Reconnect{static_cast<int32_t>(0x9)};
constexpr ::LiteNetLib::DisconnectReason  LiteNetLib::DisconnectReason::PeerToPeerConnection{static_cast<int32_t>(0xa)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
