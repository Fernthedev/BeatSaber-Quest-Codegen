#pragma once
#include "System/Diagnostics/Tracing/zzzz__EventLevel_def.hpp"
constexpr void System::Diagnostics::Tracing::EventLevel::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Diagnostics::Tracing::EventLevel::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Diagnostics::Tracing::EventLevel::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Diagnostics::Tracing::EventLevel::EventLevel(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Diagnostics::Tracing::EventLevel  System::Diagnostics::Tracing::EventLevel::LogAlways{static_cast<int32_t>(0x0)};
constexpr ::System::Diagnostics::Tracing::EventLevel  System::Diagnostics::Tracing::EventLevel::Critical{static_cast<int32_t>(0x1)};
constexpr ::System::Diagnostics::Tracing::EventLevel  System::Diagnostics::Tracing::EventLevel::Error{static_cast<int32_t>(0x2)};
constexpr ::System::Diagnostics::Tracing::EventLevel  System::Diagnostics::Tracing::EventLevel::Warning{static_cast<int32_t>(0x3)};
constexpr ::System::Diagnostics::Tracing::EventLevel  System::Diagnostics::Tracing::EventLevel::Informational{static_cast<int32_t>(0x4)};
constexpr ::System::Diagnostics::Tracing::EventLevel  System::Diagnostics::Tracing::EventLevel::Verbose{static_cast<int32_t>(0x5)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
