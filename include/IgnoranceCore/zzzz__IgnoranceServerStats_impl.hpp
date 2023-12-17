#pragma once
#include "IgnoranceCore/zzzz__IgnoranceServerStats_def.hpp"
#include "IgnoranceCore/zzzz__IgnoranceClientStats_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
constexpr void IgnoranceCore::IgnoranceServerStats::__set_BytesReceived(uint64_t  value)  {
::cordl_internals::setInstanceField<uint64_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint64_t>(value));
}
constexpr uint64_t& IgnoranceCore::IgnoranceServerStats::__get_BytesReceived()  {
return ::cordl_internals::getInstanceField<uint64_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint64_t const& IgnoranceCore::IgnoranceServerStats::__get_BytesReceived() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void IgnoranceCore::IgnoranceServerStats::__set_BytesSent(uint64_t  value)  {
::cordl_internals::setInstanceField<uint64_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint64_t>(value));
}
constexpr uint64_t& IgnoranceCore::IgnoranceServerStats::__get_BytesSent()  {
return ::cordl_internals::getInstanceField<uint64_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint64_t const& IgnoranceCore::IgnoranceServerStats::__get_BytesSent() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void IgnoranceCore::IgnoranceServerStats::__set_PacketsReceived(uint64_t  value)  {
::cordl_internals::setInstanceField<uint64_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint64_t>(value));
}
constexpr uint64_t& IgnoranceCore::IgnoranceServerStats::__get_PacketsReceived()  {
return ::cordl_internals::getInstanceField<uint64_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint64_t const& IgnoranceCore::IgnoranceServerStats::__get_PacketsReceived() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void IgnoranceCore::IgnoranceServerStats::__set_PacketsSent(uint64_t  value)  {
::cordl_internals::setInstanceField<uint64_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint64_t>(value));
}
constexpr uint64_t& IgnoranceCore::IgnoranceServerStats::__get_PacketsSent()  {
return ::cordl_internals::getInstanceField<uint64_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint64_t const& IgnoranceCore::IgnoranceServerStats::__get_PacketsSent() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void IgnoranceCore::IgnoranceServerStats::__set_PeersCount(uint64_t  value)  {
::cordl_internals::setInstanceField<uint64_t, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint64_t>(value));
}
constexpr uint64_t& IgnoranceCore::IgnoranceServerStats::__get_PeersCount()  {
return ::cordl_internals::getInstanceField<uint64_t, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint64_t const& IgnoranceCore::IgnoranceServerStats::__get_PeersCount() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void IgnoranceCore::IgnoranceServerStats::__set_PeerStats(::System::Collections::Generic::Dictionary_2<int32_t,::IgnoranceCore::IgnoranceClientStats>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<int32_t,::IgnoranceCore::IgnoranceClientStats>*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::IgnoranceCore::IgnoranceClientStats>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::IgnoranceCore::IgnoranceClientStats>* IgnoranceCore::IgnoranceServerStats::__get_PeerStats()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<int32_t,::IgnoranceCore::IgnoranceClientStats>*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t,::IgnoranceCore::IgnoranceClientStats>*> IgnoranceCore::IgnoranceServerStats::__get_PeerStats() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<int32_t,::IgnoranceCore::IgnoranceClientStats>*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "BytesReceived", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "BytesSent", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "PacketsReceived", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "PacketsSent", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "PeersCount", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "PeerStats", ty: "::System::Collections::Generic::Dictionary_2<int32_t,::IgnoranceCore::IgnoranceClientStats>*", modifiers: "", def_value: Some("csnull") }]
constexpr ::IgnoranceCore::IgnoranceServerStats::IgnoranceServerStats(uint64_t  BytesReceived, uint64_t  BytesSent, uint64_t  PacketsReceived, uint64_t  PacketsSent, uint64_t  PeersCount, ::System::Collections::Generic::Dictionary_2<int32_t,::IgnoranceCore::IgnoranceClientStats>*  PeerStats) noexcept : ::bs_hook::ValueTypeWrapper<0x30>() {this->BytesReceived = BytesReceived;
this->BytesSent = BytesSent;
this->PacketsReceived = PacketsReceived;
this->PacketsSent = PacketsSent;
this->PeersCount = PeersCount;
this->PeerStats = PeerStats;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
