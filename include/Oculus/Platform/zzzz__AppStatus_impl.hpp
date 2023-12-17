#pragma once
#include "Oculus/Platform/zzzz__AppStatus_def.hpp"
constexpr void Oculus::Platform::AppStatus::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& Oculus::Platform::AppStatus::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& Oculus::Platform::AppStatus::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::AppStatus::AppStatus(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::Oculus::Platform::AppStatus  Oculus::Platform::AppStatus::Unknown{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Platform::AppStatus  Oculus::Platform::AppStatus::Entitled{static_cast<int32_t>(0x1)};
constexpr ::Oculus::Platform::AppStatus  Oculus::Platform::AppStatus::DownloadQueued{static_cast<int32_t>(0x2)};
constexpr ::Oculus::Platform::AppStatus  Oculus::Platform::AppStatus::Downloading{static_cast<int32_t>(0x3)};
constexpr ::Oculus::Platform::AppStatus  Oculus::Platform::AppStatus::Installing{static_cast<int32_t>(0x4)};
constexpr ::Oculus::Platform::AppStatus  Oculus::Platform::AppStatus::Installed{static_cast<int32_t>(0x5)};
constexpr ::Oculus::Platform::AppStatus  Oculus::Platform::AppStatus::Uninstalling{static_cast<int32_t>(0x6)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
