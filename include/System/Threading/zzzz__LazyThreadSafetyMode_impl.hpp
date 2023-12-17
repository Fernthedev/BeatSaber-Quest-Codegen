#pragma once
#include "System/Threading/zzzz__LazyThreadSafetyMode_def.hpp"
constexpr void System::Threading::LazyThreadSafetyMode::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Threading::LazyThreadSafetyMode::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Threading::LazyThreadSafetyMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Threading::LazyThreadSafetyMode::LazyThreadSafetyMode(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Threading::LazyThreadSafetyMode  System::Threading::LazyThreadSafetyMode::None{static_cast<int32_t>(0x0)};
constexpr ::System::Threading::LazyThreadSafetyMode  System::Threading::LazyThreadSafetyMode::PublicationOnly{static_cast<int32_t>(0x1)};
constexpr ::System::Threading::LazyThreadSafetyMode  System::Threading::LazyThreadSafetyMode::ExecutionAndPublication{static_cast<int32_t>(0x2)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
