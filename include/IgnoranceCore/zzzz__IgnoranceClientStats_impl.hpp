#pragma once
#include "IgnoranceCore/zzzz__IgnoranceClientStats_def.hpp"
constexpr void IgnoranceCore::IgnoranceClientStats::__set_RTT(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t& IgnoranceCore::IgnoranceClientStats::__get_RTT()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint32_t const& IgnoranceCore::IgnoranceClientStats::__get_RTT() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void IgnoranceCore::IgnoranceClientStats::__set_BytesReceived(uint64_t  value)  {
::cordl_internals::setInstanceField<uint64_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint64_t>(value));
}
constexpr uint64_t& IgnoranceCore::IgnoranceClientStats::__get_BytesReceived()  {
return ::cordl_internals::getInstanceField<uint64_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint64_t const& IgnoranceCore::IgnoranceClientStats::__get_BytesReceived() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void IgnoranceCore::IgnoranceClientStats::__set_BytesSent(uint64_t  value)  {
::cordl_internals::setInstanceField<uint64_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint64_t>(value));
}
constexpr uint64_t& IgnoranceCore::IgnoranceClientStats::__get_BytesSent()  {
return ::cordl_internals::getInstanceField<uint64_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint64_t const& IgnoranceCore::IgnoranceClientStats::__get_BytesSent() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void IgnoranceCore::IgnoranceClientStats::__set_PacketsReceived(uint64_t  value)  {
::cordl_internals::setInstanceField<uint64_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint64_t>(value));
}
constexpr uint64_t& IgnoranceCore::IgnoranceClientStats::__get_PacketsReceived()  {
return ::cordl_internals::getInstanceField<uint64_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint64_t const& IgnoranceCore::IgnoranceClientStats::__get_PacketsReceived() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void IgnoranceCore::IgnoranceClientStats::__set_PacketsSent(uint64_t  value)  {
::cordl_internals::setInstanceField<uint64_t, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint64_t>(value));
}
constexpr uint64_t& IgnoranceCore::IgnoranceClientStats::__get_PacketsSent()  {
return ::cordl_internals::getInstanceField<uint64_t, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint64_t const& IgnoranceCore::IgnoranceClientStats::__get_PacketsSent() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void IgnoranceCore::IgnoranceClientStats::__set_PacketsLost(uint64_t  value)  {
::cordl_internals::setInstanceField<uint64_t, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint64_t>(value));
}
constexpr uint64_t& IgnoranceCore::IgnoranceClientStats::__get_PacketsLost()  {
return ::cordl_internals::getInstanceField<uint64_t, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint64_t const& IgnoranceCore::IgnoranceClientStats::__get_PacketsLost() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "RTT", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "BytesReceived", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "BytesSent", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "PacketsReceived", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "PacketsSent", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "PacketsLost", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::IgnoranceCore::IgnoranceClientStats::IgnoranceClientStats(uint32_t  RTT, uint64_t  BytesReceived, uint64_t  BytesSent, uint64_t  PacketsReceived, uint64_t  PacketsSent, uint64_t  PacketsLost) noexcept : ::bs_hook::ValueTypeWrapper<0x30>() {this->RTT = RTT;
this->BytesReceived = BytesReceived;
this->BytesSent = BytesSent;
this->PacketsReceived = PacketsReceived;
this->PacketsSent = PacketsSent;
this->PacketsLost = PacketsLost;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
