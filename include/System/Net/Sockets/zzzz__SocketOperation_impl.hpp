#pragma once
#include "System/Net/Sockets/zzzz__SocketOperation_def.hpp"
constexpr void System::Net::Sockets::SocketOperation::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Net::Sockets::SocketOperation::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Net::Sockets::SocketOperation::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::Sockets::SocketOperation::SocketOperation(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Net::Sockets::SocketOperation  System::Net::Sockets::SocketOperation::Accept{static_cast<int32_t>(0x0)};
constexpr ::System::Net::Sockets::SocketOperation  System::Net::Sockets::SocketOperation::Connect{static_cast<int32_t>(0x1)};
constexpr ::System::Net::Sockets::SocketOperation  System::Net::Sockets::SocketOperation::Receive{static_cast<int32_t>(0x2)};
constexpr ::System::Net::Sockets::SocketOperation  System::Net::Sockets::SocketOperation::ReceiveFrom{static_cast<int32_t>(0x3)};
constexpr ::System::Net::Sockets::SocketOperation  System::Net::Sockets::SocketOperation::Send{static_cast<int32_t>(0x4)};
constexpr ::System::Net::Sockets::SocketOperation  System::Net::Sockets::SocketOperation::SendTo{static_cast<int32_t>(0x5)};
constexpr ::System::Net::Sockets::SocketOperation  System::Net::Sockets::SocketOperation::RecvJustCallback{static_cast<int32_t>(0x6)};
constexpr ::System::Net::Sockets::SocketOperation  System::Net::Sockets::SocketOperation::SendJustCallback{static_cast<int32_t>(0x7)};
constexpr ::System::Net::Sockets::SocketOperation  System::Net::Sockets::SocketOperation::Disconnect{static_cast<int32_t>(0x8)};
constexpr ::System::Net::Sockets::SocketOperation  System::Net::Sockets::SocketOperation::AcceptReceive{static_cast<int32_t>(0x9)};
constexpr ::System::Net::Sockets::SocketOperation  System::Net::Sockets::SocketOperation::ReceiveGeneric{static_cast<int32_t>(0xa)};
constexpr ::System::Net::Sockets::SocketOperation  System::Net::Sockets::SocketOperation::SendGeneric{static_cast<int32_t>(0xb)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
