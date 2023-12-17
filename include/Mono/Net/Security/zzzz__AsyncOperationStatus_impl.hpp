#pragma once
#include "Mono/Net/Security/zzzz__AsyncOperationStatus_def.hpp"
constexpr void Mono::Net::Security::AsyncOperationStatus::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& Mono::Net::Security::AsyncOperationStatus::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& Mono::Net::Security::AsyncOperationStatus::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Net::Security::AsyncOperationStatus::AsyncOperationStatus(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::Mono::Net::Security::AsyncOperationStatus  Mono::Net::Security::AsyncOperationStatus::Initialize{static_cast<int32_t>(0x0)};
constexpr ::Mono::Net::Security::AsyncOperationStatus  Mono::Net::Security::AsyncOperationStatus::Continue{static_cast<int32_t>(0x1)};
constexpr ::Mono::Net::Security::AsyncOperationStatus  Mono::Net::Security::AsyncOperationStatus::ReadDone{static_cast<int32_t>(0x2)};
constexpr ::Mono::Net::Security::AsyncOperationStatus  Mono::Net::Security::AsyncOperationStatus::Complete{static_cast<int32_t>(0x3)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
