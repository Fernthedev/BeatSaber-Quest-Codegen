#pragma once
#include "IgnoranceCore/zzzz__PeerConnectionData_def.hpp"
constexpr void IgnoranceCore::PeerConnectionData::__set_Port(uint16_t  value)  {
::cordl_internals::setInstanceField<uint16_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint16_t>(value));
}
constexpr uint16_t& IgnoranceCore::PeerConnectionData::__get_Port()  {
return ::cordl_internals::getInstanceField<uint16_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint16_t const& IgnoranceCore::PeerConnectionData::__get_Port() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void IgnoranceCore::PeerConnectionData::__set_NativePeerId(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t& IgnoranceCore::PeerConnectionData::__get_NativePeerId()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint32_t const& IgnoranceCore::PeerConnectionData::__get_NativePeerId() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void IgnoranceCore::PeerConnectionData::__set_IP(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& IgnoranceCore::PeerConnectionData::__get_IP()  {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& IgnoranceCore::PeerConnectionData::__get_IP() const {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "Port", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "NativePeerId", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "IP", ty: "::StringW", modifiers: "", def_value: Some("csnull") }]
constexpr ::IgnoranceCore::PeerConnectionData::PeerConnectionData(uint16_t  Port, uint32_t  NativePeerId, ::StringW  IP) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->Port = Port;
this->NativePeerId = NativePeerId;
this->IP = IP;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
