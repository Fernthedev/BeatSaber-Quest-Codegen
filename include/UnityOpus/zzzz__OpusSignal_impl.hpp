#pragma once
#include "UnityOpus/zzzz__OpusSignal_def.hpp"
constexpr void UnityOpus::OpusSignal::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityOpus::OpusSignal::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityOpus::OpusSignal::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityOpus::OpusSignal::OpusSignal(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityOpus::OpusSignal  UnityOpus::OpusSignal::Auto{static_cast<int32_t>(0xfffffc18)};
constexpr ::UnityOpus::OpusSignal  UnityOpus::OpusSignal::Voice{static_cast<int32_t>(0xbb9)};
constexpr ::UnityOpus::OpusSignal  UnityOpus::OpusSignal::Music{static_cast<int32_t>(0xbba)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
