#pragma once
#include "LiteNetLib/zzzz__DisconnectInfo_def.hpp"
#include "LiteNetLib/zzzz__NetPacketReader_def.hpp"
#include "LiteNetLib/zzzz__DisconnectReason_def.hpp"
#include "System/Net/Sockets/zzzz__SocketError_def.hpp"
constexpr void LiteNetLib::DisconnectInfo::__set_Reason(::LiteNetLib::DisconnectReason  value)  {
::cordl_internals::setInstanceField<::LiteNetLib::DisconnectReason, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::LiteNetLib::DisconnectReason>(value));
}
constexpr ::LiteNetLib::DisconnectReason& LiteNetLib::DisconnectInfo::__get_Reason()  {
return ::cordl_internals::getInstanceField<::LiteNetLib::DisconnectReason, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::LiteNetLib::DisconnectReason const& LiteNetLib::DisconnectInfo::__get_Reason() const {
return ::cordl_internals::getInstanceField<::LiteNetLib::DisconnectReason, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void LiteNetLib::DisconnectInfo::__set_SocketErrorCode(::System::Net::Sockets::SocketError  value)  {
::cordl_internals::setInstanceField<::System::Net::Sockets::SocketError, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Net::Sockets::SocketError>(value));
}
constexpr ::System::Net::Sockets::SocketError& LiteNetLib::DisconnectInfo::__get_SocketErrorCode()  {
return ::cordl_internals::getInstanceField<::System::Net::Sockets::SocketError, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Net::Sockets::SocketError const& LiteNetLib::DisconnectInfo::__get_SocketErrorCode() const {
return ::cordl_internals::getInstanceField<::System::Net::Sockets::SocketError, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void LiteNetLib::DisconnectInfo::__set_AdditionalData(::LiteNetLib::NetPacketReader*  value)  {
::cordl_internals::setInstanceField<::LiteNetLib::NetPacketReader*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::LiteNetLib::NetPacketReader*>(value));
}
constexpr ::LiteNetLib::NetPacketReader* LiteNetLib::DisconnectInfo::__get_AdditionalData()  {
return ::cordl_internals::getInstanceField<::LiteNetLib::NetPacketReader*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetPacketReader*> LiteNetLib::DisconnectInfo::__get_AdditionalData() const {
return ::cordl_internals::getInstanceField<::LiteNetLib::NetPacketReader*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "Reason", ty: "::LiteNetLib::DisconnectReason", modifiers: "", def_value: Some("{}") }, CppParam { name: "SocketErrorCode", ty: "::System::Net::Sockets::SocketError", modifiers: "", def_value: Some("{}") }, CppParam { name: "AdditionalData", ty: "::LiteNetLib::NetPacketReader*", modifiers: "", def_value: Some("csnull") }]
constexpr ::LiteNetLib::DisconnectInfo::DisconnectInfo(::LiteNetLib::DisconnectReason  Reason, ::System::Net::Sockets::SocketError  SocketErrorCode, ::LiteNetLib::NetPacketReader*  AdditionalData) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->Reason = Reason;
this->SocketErrorCode = SocketErrorCode;
this->AdditionalData = AdditionalData;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
