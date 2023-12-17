#pragma once
#include "System/Threading/Tasks/zzzz__TaskContinuationOptions_def.hpp"
constexpr void System::Threading::Tasks::TaskContinuationOptions::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Threading::Tasks::TaskContinuationOptions::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Threading::Tasks::TaskContinuationOptions::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Threading::Tasks::TaskContinuationOptions::TaskContinuationOptions(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Threading::Tasks::TaskContinuationOptions  System::Threading::Tasks::TaskContinuationOptions::None{static_cast<int32_t>(0x0)};
constexpr ::System::Threading::Tasks::TaskContinuationOptions  System::Threading::Tasks::TaskContinuationOptions::PreferFairness{static_cast<int32_t>(0x1)};
constexpr ::System::Threading::Tasks::TaskContinuationOptions  System::Threading::Tasks::TaskContinuationOptions::LongRunning{static_cast<int32_t>(0x2)};
constexpr ::System::Threading::Tasks::TaskContinuationOptions  System::Threading::Tasks::TaskContinuationOptions::AttachedToParent{static_cast<int32_t>(0x4)};
constexpr ::System::Threading::Tasks::TaskContinuationOptions  System::Threading::Tasks::TaskContinuationOptions::DenyChildAttach{static_cast<int32_t>(0x8)};
constexpr ::System::Threading::Tasks::TaskContinuationOptions  System::Threading::Tasks::TaskContinuationOptions::HideScheduler{static_cast<int32_t>(0x10)};
constexpr ::System::Threading::Tasks::TaskContinuationOptions  System::Threading::Tasks::TaskContinuationOptions::LazyCancellation{static_cast<int32_t>(0x20)};
constexpr ::System::Threading::Tasks::TaskContinuationOptions  System::Threading::Tasks::TaskContinuationOptions::RunContinuationsAsynchronously{static_cast<int32_t>(0x40)};
constexpr ::System::Threading::Tasks::TaskContinuationOptions  System::Threading::Tasks::TaskContinuationOptions::NotOnRanToCompletion{static_cast<int32_t>(0x10000)};
constexpr ::System::Threading::Tasks::TaskContinuationOptions  System::Threading::Tasks::TaskContinuationOptions::NotOnFaulted{static_cast<int32_t>(0x20000)};
constexpr ::System::Threading::Tasks::TaskContinuationOptions  System::Threading::Tasks::TaskContinuationOptions::NotOnCanceled{static_cast<int32_t>(0x40000)};
constexpr ::System::Threading::Tasks::TaskContinuationOptions  System::Threading::Tasks::TaskContinuationOptions::OnlyOnRanToCompletion{static_cast<int32_t>(0x60000)};
constexpr ::System::Threading::Tasks::TaskContinuationOptions  System::Threading::Tasks::TaskContinuationOptions::OnlyOnFaulted{static_cast<int32_t>(0x50000)};
constexpr ::System::Threading::Tasks::TaskContinuationOptions  System::Threading::Tasks::TaskContinuationOptions::OnlyOnCanceled{static_cast<int32_t>(0x30000)};
constexpr ::System::Threading::Tasks::TaskContinuationOptions  System::Threading::Tasks::TaskContinuationOptions::ExecuteSynchronously{static_cast<int32_t>(0x80000)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
