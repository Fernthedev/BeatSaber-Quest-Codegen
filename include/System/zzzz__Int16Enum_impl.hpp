#pragma once
#include "System/zzzz__Int16Enum_def.hpp"
constexpr void System::Int16Enum::__set_value__(int16_t  value)  {
::cordl_internals::setInstanceField<int16_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int16_t>(value));
}
constexpr int16_t& System::Int16Enum::__get_value__()  {
return ::cordl_internals::getInstanceField<int16_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int16_t const& System::Int16Enum::__get_value__() const {
return ::cordl_internals::getInstanceField<int16_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Int16Enum::Int16Enum(int16_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x2>() {this->value__ = value__;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
