#pragma once
#include "System/Runtime/Serialization/Formatters/zzzz__TypeFilterLevel_def.hpp"
constexpr void System::Runtime::Serialization::Formatters::TypeFilterLevel::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Runtime::Serialization::Formatters::TypeFilterLevel::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Runtime::Serialization::Formatters::TypeFilterLevel::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::Serialization::Formatters::TypeFilterLevel::TypeFilterLevel(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Runtime::Serialization::Formatters::TypeFilterLevel  System::Runtime::Serialization::Formatters::TypeFilterLevel::Low{static_cast<int32_t>(0x2)};
constexpr ::System::Runtime::Serialization::Formatters::TypeFilterLevel  System::Runtime::Serialization::Formatters::TypeFilterLevel::Full{static_cast<int32_t>(0x3)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
