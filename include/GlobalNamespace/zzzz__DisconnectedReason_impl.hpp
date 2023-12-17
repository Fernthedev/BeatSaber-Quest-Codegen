#pragma once
#include "GlobalNamespace/zzzz__DisconnectedReason_def.hpp"
constexpr void GlobalNamespace::DisconnectedReason::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::DisconnectedReason::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::DisconnectedReason::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::DisconnectedReason::DisconnectedReason(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::DisconnectedReason  GlobalNamespace::DisconnectedReason::Unknown{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::DisconnectedReason  GlobalNamespace::DisconnectedReason::UserInitiated{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::DisconnectedReason  GlobalNamespace::DisconnectedReason::Timeout{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::DisconnectedReason  GlobalNamespace::DisconnectedReason::Kicked{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::DisconnectedReason  GlobalNamespace::DisconnectedReason::ServerAtCapacity{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::DisconnectedReason  GlobalNamespace::DisconnectedReason::ServerConnectionClosed{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::DisconnectedReason  GlobalNamespace::DisconnectedReason::MasterServerUnreachable{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::DisconnectedReason  GlobalNamespace::DisconnectedReason::ClientConnectionClosed{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::DisconnectedReason  GlobalNamespace::DisconnectedReason::NetworkDisconnected{static_cast<int32_t>(0x9)};
constexpr ::GlobalNamespace::DisconnectedReason  GlobalNamespace::DisconnectedReason::ServerTerminated{static_cast<int32_t>(0xa)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
