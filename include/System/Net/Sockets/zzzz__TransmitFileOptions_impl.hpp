#pragma once
#include "System/Net/Sockets/zzzz__TransmitFileOptions_def.hpp"
constexpr void System::Net::Sockets::TransmitFileOptions::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Net::Sockets::TransmitFileOptions::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Net::Sockets::TransmitFileOptions::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::Sockets::TransmitFileOptions::TransmitFileOptions(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Net::Sockets::TransmitFileOptions  System::Net::Sockets::TransmitFileOptions::UseDefaultWorkerThread{static_cast<int32_t>(0x0)};
constexpr ::System::Net::Sockets::TransmitFileOptions  System::Net::Sockets::TransmitFileOptions::Disconnect{static_cast<int32_t>(0x1)};
constexpr ::System::Net::Sockets::TransmitFileOptions  System::Net::Sockets::TransmitFileOptions::ReuseSocket{static_cast<int32_t>(0x2)};
constexpr ::System::Net::Sockets::TransmitFileOptions  System::Net::Sockets::TransmitFileOptions::WriteBehind{static_cast<int32_t>(0x4)};
constexpr ::System::Net::Sockets::TransmitFileOptions  System::Net::Sockets::TransmitFileOptions::UseSystemThread{static_cast<int32_t>(0x10)};
constexpr ::System::Net::Sockets::TransmitFileOptions  System::Net::Sockets::TransmitFileOptions::UseKernelApc{static_cast<int32_t>(0x20)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
