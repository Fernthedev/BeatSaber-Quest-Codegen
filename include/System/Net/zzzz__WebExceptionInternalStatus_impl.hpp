#pragma once
#include "System/Net/zzzz__WebExceptionInternalStatus_def.hpp"
constexpr void System::Net::WebExceptionInternalStatus::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Net::WebExceptionInternalStatus::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Net::WebExceptionInternalStatus::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::WebExceptionInternalStatus::WebExceptionInternalStatus(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Net::WebExceptionInternalStatus  System::Net::WebExceptionInternalStatus::RequestFatal{static_cast<int32_t>(0x0)};
constexpr ::System::Net::WebExceptionInternalStatus  System::Net::WebExceptionInternalStatus::ServicePointFatal{static_cast<int32_t>(0x1)};
constexpr ::System::Net::WebExceptionInternalStatus  System::Net::WebExceptionInternalStatus::Recoverable{static_cast<int32_t>(0x2)};
constexpr ::System::Net::WebExceptionInternalStatus  System::Net::WebExceptionInternalStatus::Isolated{static_cast<int32_t>(0x3)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
