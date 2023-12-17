#pragma once
#include "System/Collections/Generic/zzzz__NodeColor_def.hpp"
constexpr void System::Collections::Generic::NodeColor::__set_value__(uint8_t  value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint8_t>(value));
}
constexpr uint8_t& System::Collections::Generic::NodeColor::__get_value__()  {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint8_t const& System::Collections::Generic::NodeColor::__get_value__() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Collections::Generic::NodeColor::NodeColor(uint8_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x1>() {this->value__ = value__;
}
constexpr ::System::Collections::Generic::NodeColor  System::Collections::Generic::NodeColor::Black{static_cast<uint8_t>(0x0u)};
constexpr ::System::Collections::Generic::NodeColor  System::Collections::Generic::NodeColor::Red{static_cast<uint8_t>(0x1u)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
