#pragma once
#include "System/zzzz__StringComparison_def.hpp"
constexpr void System::StringComparison::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::StringComparison::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::StringComparison::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::StringComparison::StringComparison(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::StringComparison  System::StringComparison::CurrentCulture{static_cast<int32_t>(0x0)};
constexpr ::System::StringComparison  System::StringComparison::CurrentCultureIgnoreCase{static_cast<int32_t>(0x1)};
constexpr ::System::StringComparison  System::StringComparison::InvariantCulture{static_cast<int32_t>(0x2)};
constexpr ::System::StringComparison  System::StringComparison::InvariantCultureIgnoreCase{static_cast<int32_t>(0x3)};
constexpr ::System::StringComparison  System::StringComparison::Ordinal{static_cast<int32_t>(0x4)};
constexpr ::System::StringComparison  System::StringComparison::OrdinalIgnoreCase{static_cast<int32_t>(0x5)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
