#pragma once
#include "Oculus/Platform/zzzz__NetSyncDisconnectReason_def.hpp"
constexpr void Oculus::Platform::NetSyncDisconnectReason::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& Oculus::Platform::NetSyncDisconnectReason::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& Oculus::Platform::NetSyncDisconnectReason::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::NetSyncDisconnectReason::NetSyncDisconnectReason(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::Oculus::Platform::NetSyncDisconnectReason  Oculus::Platform::NetSyncDisconnectReason::Unknown{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Platform::NetSyncDisconnectReason  Oculus::Platform::NetSyncDisconnectReason::LocalTerminated{static_cast<int32_t>(0x1)};
constexpr ::Oculus::Platform::NetSyncDisconnectReason  Oculus::Platform::NetSyncDisconnectReason::ServerTerminated{static_cast<int32_t>(0x2)};
constexpr ::Oculus::Platform::NetSyncDisconnectReason  Oculus::Platform::NetSyncDisconnectReason::Failed{static_cast<int32_t>(0x3)};
constexpr ::Oculus::Platform::NetSyncDisconnectReason  Oculus::Platform::NetSyncDisconnectReason::Lost{static_cast<int32_t>(0x4)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
