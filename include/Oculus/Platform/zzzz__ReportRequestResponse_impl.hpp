#pragma once
#include "Oculus/Platform/zzzz__ReportRequestResponse_def.hpp"
constexpr void Oculus::Platform::ReportRequestResponse::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& Oculus::Platform::ReportRequestResponse::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& Oculus::Platform::ReportRequestResponse::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::ReportRequestResponse::ReportRequestResponse(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::Oculus::Platform::ReportRequestResponse  Oculus::Platform::ReportRequestResponse::Unknown{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Platform::ReportRequestResponse  Oculus::Platform::ReportRequestResponse::Handled{static_cast<int32_t>(0x1)};
constexpr ::Oculus::Platform::ReportRequestResponse  Oculus::Platform::ReportRequestResponse::Unhandled{static_cast<int32_t>(0x2)};
constexpr ::Oculus::Platform::ReportRequestResponse  Oculus::Platform::ReportRequestResponse::Unavailable{static_cast<int32_t>(0x3)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
