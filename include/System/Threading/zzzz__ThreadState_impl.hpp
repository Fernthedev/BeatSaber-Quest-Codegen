#pragma once
#include "System/Threading/zzzz__ThreadState_def.hpp"
constexpr void System::Threading::ThreadState::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Threading::ThreadState::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Threading::ThreadState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Threading::ThreadState::ThreadState(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Threading::ThreadState  System::Threading::ThreadState::Running{static_cast<int32_t>(0x0)};
constexpr ::System::Threading::ThreadState  System::Threading::ThreadState::StopRequested{static_cast<int32_t>(0x1)};
constexpr ::System::Threading::ThreadState  System::Threading::ThreadState::SuspendRequested{static_cast<int32_t>(0x2)};
constexpr ::System::Threading::ThreadState  System::Threading::ThreadState::Background{static_cast<int32_t>(0x4)};
constexpr ::System::Threading::ThreadState  System::Threading::ThreadState::Unstarted{static_cast<int32_t>(0x8)};
constexpr ::System::Threading::ThreadState  System::Threading::ThreadState::Stopped{static_cast<int32_t>(0x10)};
constexpr ::System::Threading::ThreadState  System::Threading::ThreadState::WaitSleepJoin{static_cast<int32_t>(0x20)};
constexpr ::System::Threading::ThreadState  System::Threading::ThreadState::Suspended{static_cast<int32_t>(0x40)};
constexpr ::System::Threading::ThreadState  System::Threading::ThreadState::AbortRequested{static_cast<int32_t>(0x80)};
constexpr ::System::Threading::ThreadState  System::Threading::ThreadState::Aborted{static_cast<int32_t>(0x100)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
