#pragma once
#include "System/Threading/zzzz__ThreadPriority_def.hpp"
constexpr void System::Threading::ThreadPriority::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Threading::ThreadPriority::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Threading::ThreadPriority::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Threading::ThreadPriority::ThreadPriority(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Threading::ThreadPriority  System::Threading::ThreadPriority::Lowest{static_cast<int32_t>(0x0)};
constexpr ::System::Threading::ThreadPriority  System::Threading::ThreadPriority::BelowNormal{static_cast<int32_t>(0x1)};
constexpr ::System::Threading::ThreadPriority  System::Threading::ThreadPriority::Normal{static_cast<int32_t>(0x2)};
constexpr ::System::Threading::ThreadPriority  System::Threading::ThreadPriority::AboveNormal{static_cast<int32_t>(0x3)};
constexpr ::System::Threading::ThreadPriority  System::Threading::ThreadPriority::Highest{static_cast<int32_t>(0x4)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
