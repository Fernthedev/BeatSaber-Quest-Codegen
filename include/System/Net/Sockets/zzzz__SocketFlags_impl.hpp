#pragma once
#include "System/Net/Sockets/zzzz__SocketFlags_def.hpp"
constexpr void System::Net::Sockets::SocketFlags::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Net::Sockets::SocketFlags::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Net::Sockets::SocketFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::Sockets::SocketFlags::SocketFlags(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Net::Sockets::SocketFlags  System::Net::Sockets::SocketFlags::None{static_cast<int32_t>(0x0)};
constexpr ::System::Net::Sockets::SocketFlags  System::Net::Sockets::SocketFlags::OutOfBand{static_cast<int32_t>(0x1)};
constexpr ::System::Net::Sockets::SocketFlags  System::Net::Sockets::SocketFlags::Peek{static_cast<int32_t>(0x2)};
constexpr ::System::Net::Sockets::SocketFlags  System::Net::Sockets::SocketFlags::DontRoute{static_cast<int32_t>(0x4)};
constexpr ::System::Net::Sockets::SocketFlags  System::Net::Sockets::SocketFlags::MaxIOVectorLength{static_cast<int32_t>(0x10)};
constexpr ::System::Net::Sockets::SocketFlags  System::Net::Sockets::SocketFlags::Truncated{static_cast<int32_t>(0x100)};
constexpr ::System::Net::Sockets::SocketFlags  System::Net::Sockets::SocketFlags::ControlDataTruncated{static_cast<int32_t>(0x200)};
constexpr ::System::Net::Sockets::SocketFlags  System::Net::Sockets::SocketFlags::Broadcast{static_cast<int32_t>(0x400)};
constexpr ::System::Net::Sockets::SocketFlags  System::Net::Sockets::SocketFlags::Multicast{static_cast<int32_t>(0x800)};
constexpr ::System::Net::Sockets::SocketFlags  System::Net::Sockets::SocketFlags::Partial{static_cast<int32_t>(0x8000)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
