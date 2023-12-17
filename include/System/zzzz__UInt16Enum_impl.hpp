#pragma once
#include "System/zzzz__UInt16Enum_def.hpp"
constexpr void System::UInt16Enum::__set_value__(uint16_t  value)  {
::cordl_internals::setInstanceField<uint16_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint16_t>(value));
}
constexpr uint16_t& System::UInt16Enum::__get_value__()  {
return ::cordl_internals::getInstanceField<uint16_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint16_t const& System::UInt16Enum::__get_value__() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "uint16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::UInt16Enum::UInt16Enum(uint16_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x2>() {this->value__ = value__;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
