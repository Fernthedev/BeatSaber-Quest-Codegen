#pragma once
#include "Oculus/Platform/zzzz__PlatformInitializeResult_def.hpp"
constexpr void Oculus::Platform::PlatformInitializeResult::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& Oculus::Platform::PlatformInitializeResult::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& Oculus::Platform::PlatformInitializeResult::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::PlatformInitializeResult::PlatformInitializeResult(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::Oculus::Platform::PlatformInitializeResult  Oculus::Platform::PlatformInitializeResult::Success{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Platform::PlatformInitializeResult  Oculus::Platform::PlatformInitializeResult::Uninitialized{static_cast<int32_t>(0xffffffff)};
constexpr ::Oculus::Platform::PlatformInitializeResult  Oculus::Platform::PlatformInitializeResult::PreLoaded{static_cast<int32_t>(0xfffffffe)};
constexpr ::Oculus::Platform::PlatformInitializeResult  Oculus::Platform::PlatformInitializeResult::FileInvalid{static_cast<int32_t>(0xfffffffd)};
constexpr ::Oculus::Platform::PlatformInitializeResult  Oculus::Platform::PlatformInitializeResult::SignatureInvalid{static_cast<int32_t>(0xfffffffc)};
constexpr ::Oculus::Platform::PlatformInitializeResult  Oculus::Platform::PlatformInitializeResult::UnableToVerify{static_cast<int32_t>(0xfffffffb)};
constexpr ::Oculus::Platform::PlatformInitializeResult  Oculus::Platform::PlatformInitializeResult::VersionMismatch{static_cast<int32_t>(0xfffffffa)};
constexpr ::Oculus::Platform::PlatformInitializeResult  Oculus::Platform::PlatformInitializeResult::Unknown{static_cast<int32_t>(0xfffffff9)};
constexpr ::Oculus::Platform::PlatformInitializeResult  Oculus::Platform::PlatformInitializeResult::InvalidCredentials{static_cast<int32_t>(0xfffffff8)};
constexpr ::Oculus::Platform::PlatformInitializeResult  Oculus::Platform::PlatformInitializeResult::NotEntitled{static_cast<int32_t>(0xfffffff7)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
