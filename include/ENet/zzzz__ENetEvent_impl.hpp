#pragma once
#include "ENet/zzzz__ENetEvent_def.hpp"
#include "ENet/zzzz__EventType_def.hpp"
constexpr void ENet::ENetEvent::__set_type(::ENet::EventType  value)  {
::cordl_internals::setInstanceField<::ENet::EventType, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ENet::EventType>(value));
}
constexpr ::ENet::EventType& ENet::ENetEvent::__get_type()  {
return ::cordl_internals::getInstanceField<::ENet::EventType, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ENet::EventType const& ENet::ENetEvent::__get_type() const {
return ::cordl_internals::getInstanceField<::ENet::EventType, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void ENet::ENetEvent::__set_peer(::cordl_internals::intptr_t  value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t& ENet::ENetEvent::__get_peer()  {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::intptr_t const& ENet::ENetEvent::__get_peer() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void ENet::ENetEvent::__set_channelID(uint8_t  value)  {
::cordl_internals::setInstanceField<uint8_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint8_t>(value));
}
constexpr uint8_t& ENet::ENetEvent::__get_channelID()  {
return ::cordl_internals::getInstanceField<uint8_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint8_t const& ENet::ENetEvent::__get_channelID() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void ENet::ENetEvent::__set_data(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x14>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t& ENet::ENetEvent::__get_data()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x14>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint32_t const& ENet::ENetEvent::__get_data() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x14>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void ENet::ENetEvent::__set_packet(::cordl_internals::intptr_t  value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t& ENet::ENetEvent::__get_packet()  {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::intptr_t const& ENet::ENetEvent::__get_packet() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "type", ty: "::ENet::EventType", modifiers: "", def_value: Some("{}") }, CppParam { name: "peer", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "channelID", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "data", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "packet", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }]
constexpr ::ENet::ENetEvent::ENetEvent(::ENet::EventType  type, ::cordl_internals::intptr_t  peer, uint8_t  channelID, uint32_t  data, ::cordl_internals::intptr_t  packet) noexcept : ::bs_hook::ValueTypeWrapper<0x20>() {this->type = type;
this->peer = peer;
this->channelID = channelID;
this->data = data;
this->packet = packet;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
