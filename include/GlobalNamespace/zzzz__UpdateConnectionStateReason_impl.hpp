#pragma once
#include "GlobalNamespace/zzzz__UpdateConnectionStateReason_def.hpp"
constexpr void GlobalNamespace::UpdateConnectionStateReason::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::UpdateConnectionStateReason::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::UpdateConnectionStateReason::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::UpdateConnectionStateReason::UpdateConnectionStateReason(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::UpdateConnectionStateReason  GlobalNamespace::UpdateConnectionStateReason::Init{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::UpdateConnectionStateReason  GlobalNamespace::UpdateConnectionStateReason::PlayerOrderChanged{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::UpdateConnectionStateReason  GlobalNamespace::UpdateConnectionStateReason::Connected{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::UpdateConnectionStateReason  GlobalNamespace::UpdateConnectionStateReason::StartSession{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::UpdateConnectionStateReason  GlobalNamespace::UpdateConnectionStateReason::StartDedicatedServer{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::UpdateConnectionStateReason  GlobalNamespace::UpdateConnectionStateReason::SyncTimeInitialized{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::UpdateConnectionStateReason  GlobalNamespace::UpdateConnectionStateReason::ManualDisconnect{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::UpdateConnectionStateReason  GlobalNamespace::UpdateConnectionStateReason::RemoteDisconnect{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::UpdateConnectionStateReason  GlobalNamespace::UpdateConnectionStateReason::ConnectionFailed{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::UpdateConnectionStateReason  GlobalNamespace::UpdateConnectionStateReason::OnDestroy{static_cast<int32_t>(0x9)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
