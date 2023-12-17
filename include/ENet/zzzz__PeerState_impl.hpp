#pragma once
#include "ENet/zzzz__PeerState_def.hpp"
constexpr void ENet::PeerState::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& ENet::PeerState::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& ENet::PeerState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::ENet::PeerState::PeerState(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::ENet::PeerState  ENet::PeerState::Uninitialized{static_cast<int32_t>(0xffffffff)};
constexpr ::ENet::PeerState  ENet::PeerState::Disconnected{static_cast<int32_t>(0x0)};
constexpr ::ENet::PeerState  ENet::PeerState::Connecting{static_cast<int32_t>(0x1)};
constexpr ::ENet::PeerState  ENet::PeerState::AcknowledgingConnect{static_cast<int32_t>(0x2)};
constexpr ::ENet::PeerState  ENet::PeerState::ConnectionPending{static_cast<int32_t>(0x3)};
constexpr ::ENet::PeerState  ENet::PeerState::ConnectionSucceeded{static_cast<int32_t>(0x4)};
constexpr ::ENet::PeerState  ENet::PeerState::Connected{static_cast<int32_t>(0x5)};
constexpr ::ENet::PeerState  ENet::PeerState::DisconnectLater{static_cast<int32_t>(0x6)};
constexpr ::ENet::PeerState  ENet::PeerState::Disconnecting{static_cast<int32_t>(0x7)};
constexpr ::ENet::PeerState  ENet::PeerState::AcknowledgingDisconnect{static_cast<int32_t>(0x8)};
constexpr ::ENet::PeerState  ENet::PeerState::Zombie{static_cast<int32_t>(0x9)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
