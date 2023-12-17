#pragma once
#include "Oculus/Platform/zzzz__LaunchResult_def.hpp"
constexpr void Oculus::Platform::LaunchResult::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& Oculus::Platform::LaunchResult::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& Oculus::Platform::LaunchResult::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::LaunchResult::LaunchResult(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::Oculus::Platform::LaunchResult  Oculus::Platform::LaunchResult::Unknown{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Platform::LaunchResult  Oculus::Platform::LaunchResult::Success{static_cast<int32_t>(0x1)};
constexpr ::Oculus::Platform::LaunchResult  Oculus::Platform::LaunchResult::FailedRoomFull{static_cast<int32_t>(0x2)};
constexpr ::Oculus::Platform::LaunchResult  Oculus::Platform::LaunchResult::FailedGameAlreadyStarted{static_cast<int32_t>(0x3)};
constexpr ::Oculus::Platform::LaunchResult  Oculus::Platform::LaunchResult::FailedRoomNotFound{static_cast<int32_t>(0x4)};
constexpr ::Oculus::Platform::LaunchResult  Oculus::Platform::LaunchResult::FailedUserDeclined{static_cast<int32_t>(0x5)};
constexpr ::Oculus::Platform::LaunchResult  Oculus::Platform::LaunchResult::FailedOtherReason{static_cast<int32_t>(0x6)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
