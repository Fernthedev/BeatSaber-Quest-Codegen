#pragma once
#include "System/Threading/Tasks/zzzz__TaskCreationOptions_def.hpp"
constexpr void System::Threading::Tasks::TaskCreationOptions::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Threading::Tasks::TaskCreationOptions::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Threading::Tasks::TaskCreationOptions::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Threading::Tasks::TaskCreationOptions::TaskCreationOptions(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Threading::Tasks::TaskCreationOptions  System::Threading::Tasks::TaskCreationOptions::None{static_cast<int32_t>(0x0)};
constexpr ::System::Threading::Tasks::TaskCreationOptions  System::Threading::Tasks::TaskCreationOptions::PreferFairness{static_cast<int32_t>(0x1)};
constexpr ::System::Threading::Tasks::TaskCreationOptions  System::Threading::Tasks::TaskCreationOptions::LongRunning{static_cast<int32_t>(0x2)};
constexpr ::System::Threading::Tasks::TaskCreationOptions  System::Threading::Tasks::TaskCreationOptions::AttachedToParent{static_cast<int32_t>(0x4)};
constexpr ::System::Threading::Tasks::TaskCreationOptions  System::Threading::Tasks::TaskCreationOptions::DenyChildAttach{static_cast<int32_t>(0x8)};
constexpr ::System::Threading::Tasks::TaskCreationOptions  System::Threading::Tasks::TaskCreationOptions::HideScheduler{static_cast<int32_t>(0x10)};
constexpr ::System::Threading::Tasks::TaskCreationOptions  System::Threading::Tasks::TaskCreationOptions::RunContinuationsAsynchronously{static_cast<int32_t>(0x40)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
