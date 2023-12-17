#pragma once
#include "System/Threading/Tasks/zzzz__InternalTaskOptions_def.hpp"
constexpr void System::Threading::Tasks::InternalTaskOptions::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Threading::Tasks::InternalTaskOptions::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Threading::Tasks::InternalTaskOptions::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Threading::Tasks::InternalTaskOptions::InternalTaskOptions(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Threading::Tasks::InternalTaskOptions  System::Threading::Tasks::InternalTaskOptions::None{static_cast<int32_t>(0x0)};
constexpr ::System::Threading::Tasks::InternalTaskOptions  System::Threading::Tasks::InternalTaskOptions::InternalOptionsMask{static_cast<int32_t>(0xff00)};
constexpr ::System::Threading::Tasks::InternalTaskOptions  System::Threading::Tasks::InternalTaskOptions::ContinuationTask{static_cast<int32_t>(0x200)};
constexpr ::System::Threading::Tasks::InternalTaskOptions  System::Threading::Tasks::InternalTaskOptions::PromiseTask{static_cast<int32_t>(0x400)};
constexpr ::System::Threading::Tasks::InternalTaskOptions  System::Threading::Tasks::InternalTaskOptions::LazyCancellation{static_cast<int32_t>(0x1000)};
constexpr ::System::Threading::Tasks::InternalTaskOptions  System::Threading::Tasks::InternalTaskOptions::QueuedByRuntime{static_cast<int32_t>(0x2000)};
constexpr ::System::Threading::Tasks::InternalTaskOptions  System::Threading::Tasks::InternalTaskOptions::DoNotDispose{static_cast<int32_t>(0x4000)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
