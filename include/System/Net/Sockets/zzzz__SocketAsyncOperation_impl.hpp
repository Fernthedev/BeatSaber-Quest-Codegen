#pragma once
#include "System/Net/Sockets/zzzz__SocketAsyncOperation_def.hpp"
constexpr void System::Net::Sockets::SocketAsyncOperation::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Net::Sockets::SocketAsyncOperation::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Net::Sockets::SocketAsyncOperation::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::Sockets::SocketAsyncOperation::SocketAsyncOperation(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Net::Sockets::SocketAsyncOperation  System::Net::Sockets::SocketAsyncOperation::None{static_cast<int32_t>(0x0)};
constexpr ::System::Net::Sockets::SocketAsyncOperation  System::Net::Sockets::SocketAsyncOperation::Accept{static_cast<int32_t>(0x1)};
constexpr ::System::Net::Sockets::SocketAsyncOperation  System::Net::Sockets::SocketAsyncOperation::Connect{static_cast<int32_t>(0x2)};
constexpr ::System::Net::Sockets::SocketAsyncOperation  System::Net::Sockets::SocketAsyncOperation::Disconnect{static_cast<int32_t>(0x3)};
constexpr ::System::Net::Sockets::SocketAsyncOperation  System::Net::Sockets::SocketAsyncOperation::Receive{static_cast<int32_t>(0x4)};
constexpr ::System::Net::Sockets::SocketAsyncOperation  System::Net::Sockets::SocketAsyncOperation::ReceiveFrom{static_cast<int32_t>(0x5)};
constexpr ::System::Net::Sockets::SocketAsyncOperation  System::Net::Sockets::SocketAsyncOperation::ReceiveMessageFrom{static_cast<int32_t>(0x6)};
constexpr ::System::Net::Sockets::SocketAsyncOperation  System::Net::Sockets::SocketAsyncOperation::Send{static_cast<int32_t>(0x7)};
constexpr ::System::Net::Sockets::SocketAsyncOperation  System::Net::Sockets::SocketAsyncOperation::SendPackets{static_cast<int32_t>(0x8)};
constexpr ::System::Net::Sockets::SocketAsyncOperation  System::Net::Sockets::SocketAsyncOperation::SendTo{static_cast<int32_t>(0x9)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
