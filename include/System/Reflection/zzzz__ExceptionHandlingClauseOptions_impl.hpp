#pragma once
#include "System/Reflection/zzzz__ExceptionHandlingClauseOptions_def.hpp"
constexpr void System::Reflection::ExceptionHandlingClauseOptions::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Reflection::ExceptionHandlingClauseOptions::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Reflection::ExceptionHandlingClauseOptions::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Reflection::ExceptionHandlingClauseOptions::ExceptionHandlingClauseOptions(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Reflection::ExceptionHandlingClauseOptions  System::Reflection::ExceptionHandlingClauseOptions::Clause{static_cast<int32_t>(0x0)};
constexpr ::System::Reflection::ExceptionHandlingClauseOptions  System::Reflection::ExceptionHandlingClauseOptions::Filter{static_cast<int32_t>(0x1)};
constexpr ::System::Reflection::ExceptionHandlingClauseOptions  System::Reflection::ExceptionHandlingClauseOptions::Finally{static_cast<int32_t>(0x2)};
constexpr ::System::Reflection::ExceptionHandlingClauseOptions  System::Reflection::ExceptionHandlingClauseOptions::Fault{static_cast<int32_t>(0x4)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
