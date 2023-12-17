#pragma once
#include "System/Diagnostics/zzzz__TraceOptions_def.hpp"
constexpr void System::Diagnostics::TraceOptions::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Diagnostics::TraceOptions::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Diagnostics::TraceOptions::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Diagnostics::TraceOptions::TraceOptions(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Diagnostics::TraceOptions  System::Diagnostics::TraceOptions::None{static_cast<int32_t>(0x0)};
constexpr ::System::Diagnostics::TraceOptions  System::Diagnostics::TraceOptions::LogicalOperationStack{static_cast<int32_t>(0x1)};
constexpr ::System::Diagnostics::TraceOptions  System::Diagnostics::TraceOptions::DateTime{static_cast<int32_t>(0x2)};
constexpr ::System::Diagnostics::TraceOptions  System::Diagnostics::TraceOptions::Timestamp{static_cast<int32_t>(0x4)};
constexpr ::System::Diagnostics::TraceOptions  System::Diagnostics::TraceOptions::ProcessId{static_cast<int32_t>(0x8)};
constexpr ::System::Diagnostics::TraceOptions  System::Diagnostics::TraceOptions::ThreadId{static_cast<int32_t>(0x10)};
constexpr ::System::Diagnostics::TraceOptions  System::Diagnostics::TraceOptions::Callstack{static_cast<int32_t>(0x20)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
