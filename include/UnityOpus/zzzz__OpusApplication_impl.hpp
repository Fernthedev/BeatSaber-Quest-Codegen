#pragma once
#include "UnityOpus/zzzz__OpusApplication_def.hpp"
constexpr void UnityOpus::OpusApplication::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityOpus::OpusApplication::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityOpus::OpusApplication::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityOpus::OpusApplication::OpusApplication(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityOpus::OpusApplication  UnityOpus::OpusApplication::VoIP{static_cast<int32_t>(0x800)};
constexpr ::UnityOpus::OpusApplication  UnityOpus::OpusApplication::Audio{static_cast<int32_t>(0x801)};
constexpr ::UnityOpus::OpusApplication  UnityOpus::OpusApplication::RestrictedLowDelay{static_cast<int32_t>(0x803)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
