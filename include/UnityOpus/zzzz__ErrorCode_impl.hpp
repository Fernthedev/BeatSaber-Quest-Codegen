#pragma once
#include "UnityOpus/zzzz__ErrorCode_def.hpp"
constexpr void UnityOpus::ErrorCode::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityOpus::ErrorCode::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityOpus::ErrorCode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityOpus::ErrorCode::ErrorCode(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityOpus::ErrorCode  UnityOpus::ErrorCode::OK{static_cast<int32_t>(0x0)};
constexpr ::UnityOpus::ErrorCode  UnityOpus::ErrorCode::BadArg{static_cast<int32_t>(0xffffffff)};
constexpr ::UnityOpus::ErrorCode  UnityOpus::ErrorCode::BufferTooSmall{static_cast<int32_t>(0xfffffffe)};
constexpr ::UnityOpus::ErrorCode  UnityOpus::ErrorCode::InternalError{static_cast<int32_t>(0xfffffffd)};
constexpr ::UnityOpus::ErrorCode  UnityOpus::ErrorCode::InvalidPacket{static_cast<int32_t>(0xfffffffc)};
constexpr ::UnityOpus::ErrorCode  UnityOpus::ErrorCode::Unimplemented{static_cast<int32_t>(0xfffffffb)};
constexpr ::UnityOpus::ErrorCode  UnityOpus::ErrorCode::InvalidState{static_cast<int32_t>(0xfffffffa)};
constexpr ::UnityOpus::ErrorCode  UnityOpus::ErrorCode::AllocFail{static_cast<int32_t>(0xfffffff9)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
