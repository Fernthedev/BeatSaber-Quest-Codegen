#pragma once
#include "System/Diagnostics/Tracing/zzzz__EventKeywords_def.hpp"
constexpr void System::Diagnostics::Tracing::EventKeywords::__set_value__(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int64_t>(value));
}
constexpr int64_t& System::Diagnostics::Tracing::EventKeywords::__get_value__()  {
return ::cordl_internals::getInstanceField<int64_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int64_t const& System::Diagnostics::Tracing::EventKeywords::__get_value__() const {
return ::cordl_internals::getInstanceField<int64_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Diagnostics::Tracing::EventKeywords::EventKeywords(int64_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x8>() {this->value__ = value__;
}
constexpr ::System::Diagnostics::Tracing::EventKeywords  System::Diagnostics::Tracing::EventKeywords::None{static_cast<int64_t>(0x0)};
constexpr ::System::Diagnostics::Tracing::EventKeywords  System::Diagnostics::Tracing::EventKeywords::All{static_cast<int64_t>(0xffffffffffffffff)};
constexpr ::System::Diagnostics::Tracing::EventKeywords  System::Diagnostics::Tracing::EventKeywords::MicrosoftTelemetry{static_cast<int64_t>(0x2000000000000)};
constexpr ::System::Diagnostics::Tracing::EventKeywords  System::Diagnostics::Tracing::EventKeywords::WdiContext{static_cast<int64_t>(0x2000000000000)};
constexpr ::System::Diagnostics::Tracing::EventKeywords  System::Diagnostics::Tracing::EventKeywords::WdiDiagnostic{static_cast<int64_t>(0x4000000000000)};
constexpr ::System::Diagnostics::Tracing::EventKeywords  System::Diagnostics::Tracing::EventKeywords::Sqm{static_cast<int64_t>(0x8000000000000)};
constexpr ::System::Diagnostics::Tracing::EventKeywords  System::Diagnostics::Tracing::EventKeywords::AuditFailure{static_cast<int64_t>(0x10000000000000)};
constexpr ::System::Diagnostics::Tracing::EventKeywords  System::Diagnostics::Tracing::EventKeywords::AuditSuccess{static_cast<int64_t>(0x20000000000000)};
constexpr ::System::Diagnostics::Tracing::EventKeywords  System::Diagnostics::Tracing::EventKeywords::CorrelationHint{static_cast<int64_t>(0x10000000000000)};
constexpr ::System::Diagnostics::Tracing::EventKeywords  System::Diagnostics::Tracing::EventKeywords::EventLogClassic{static_cast<int64_t>(0x80000000000000)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
