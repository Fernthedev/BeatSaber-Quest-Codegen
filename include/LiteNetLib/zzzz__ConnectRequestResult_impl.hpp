#pragma once
#include "LiteNetLib/zzzz__ConnectRequestResult_def.hpp"
constexpr void LiteNetLib::ConnectRequestResult::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& LiteNetLib::ConnectRequestResult::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& LiteNetLib::ConnectRequestResult::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::LiteNetLib::ConnectRequestResult::ConnectRequestResult(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::LiteNetLib::ConnectRequestResult  LiteNetLib::ConnectRequestResult::None{static_cast<int32_t>(0x0)};
constexpr ::LiteNetLib::ConnectRequestResult  LiteNetLib::ConnectRequestResult::P2PLose{static_cast<int32_t>(0x1)};
constexpr ::LiteNetLib::ConnectRequestResult  LiteNetLib::ConnectRequestResult::Reconnection{static_cast<int32_t>(0x2)};
constexpr ::LiteNetLib::ConnectRequestResult  LiteNetLib::ConnectRequestResult::NewConnection{static_cast<int32_t>(0x3)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
