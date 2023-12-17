#pragma once
#include "System/Globalization/zzzz__TimeSpanStyles_def.hpp"
constexpr void System::Globalization::TimeSpanStyles::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Globalization::TimeSpanStyles::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Globalization::TimeSpanStyles::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Globalization::TimeSpanStyles::TimeSpanStyles(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Globalization::TimeSpanStyles  System::Globalization::TimeSpanStyles::None{static_cast<int32_t>(0x0)};
constexpr ::System::Globalization::TimeSpanStyles  System::Globalization::TimeSpanStyles::AssumeNegative{static_cast<int32_t>(0x1)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
