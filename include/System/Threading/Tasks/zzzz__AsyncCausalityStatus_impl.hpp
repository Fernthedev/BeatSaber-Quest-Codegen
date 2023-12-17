#pragma once
#include "System/Threading/Tasks/zzzz__AsyncCausalityStatus_def.hpp"
constexpr void System::Threading::Tasks::AsyncCausalityStatus::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Threading::Tasks::AsyncCausalityStatus::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Threading::Tasks::AsyncCausalityStatus::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Threading::Tasks::AsyncCausalityStatus::AsyncCausalityStatus(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Threading::Tasks::AsyncCausalityStatus  System::Threading::Tasks::AsyncCausalityStatus::Started{static_cast<int32_t>(0x0)};
constexpr ::System::Threading::Tasks::AsyncCausalityStatus  System::Threading::Tasks::AsyncCausalityStatus::Completed{static_cast<int32_t>(0x1)};
constexpr ::System::Threading::Tasks::AsyncCausalityStatus  System::Threading::Tasks::AsyncCausalityStatus::Canceled{static_cast<int32_t>(0x2)};
constexpr ::System::Threading::Tasks::AsyncCausalityStatus  System::Threading::Tasks::AsyncCausalityStatus::Error{static_cast<int32_t>(0x3)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
