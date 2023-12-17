#pragma once
#include "GlobalNamespace/zzzz__ConnectionFailedReason_def.hpp"
constexpr void GlobalNamespace::ConnectionFailedReason::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::ConnectionFailedReason::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::ConnectionFailedReason::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::ConnectionFailedReason::ConnectionFailedReason(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::ConnectionFailedReason  GlobalNamespace::ConnectionFailedReason::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::ConnectionFailedReason  GlobalNamespace::ConnectionFailedReason::Unknown{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::ConnectionFailedReason  GlobalNamespace::ConnectionFailedReason::ConnectionCanceled{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::ConnectionFailedReason  GlobalNamespace::ConnectionFailedReason::ServerUnreachable{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::ConnectionFailedReason  GlobalNamespace::ConnectionFailedReason::ServerAlreadyExists{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::ConnectionFailedReason  GlobalNamespace::ConnectionFailedReason::ServerDoesNotExist{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::ConnectionFailedReason  GlobalNamespace::ConnectionFailedReason::ServerAtCapacity{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::ConnectionFailedReason  GlobalNamespace::ConnectionFailedReason::VersionMismatch{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::ConnectionFailedReason  GlobalNamespace::ConnectionFailedReason::InvalidPassword{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::ConnectionFailedReason  GlobalNamespace::ConnectionFailedReason::MultiplayerApiUnreachable{static_cast<int32_t>(0x9)};
constexpr ::GlobalNamespace::ConnectionFailedReason  GlobalNamespace::ConnectionFailedReason::AuthenticationFailed{static_cast<int32_t>(0xa)};
constexpr ::GlobalNamespace::ConnectionFailedReason  GlobalNamespace::ConnectionFailedReason::NetworkNotConnected{static_cast<int32_t>(0xb)};
constexpr ::GlobalNamespace::ConnectionFailedReason  GlobalNamespace::ConnectionFailedReason::CertificateValidationFailed{static_cast<int32_t>(0xc)};
constexpr ::GlobalNamespace::ConnectionFailedReason  GlobalNamespace::ConnectionFailedReason::ServerIsTerminating{static_cast<int32_t>(0xd)};
constexpr ::GlobalNamespace::ConnectionFailedReason  GlobalNamespace::ConnectionFailedReason::Timeout{static_cast<int32_t>(0xe)};
constexpr ::GlobalNamespace::ConnectionFailedReason  GlobalNamespace::ConnectionFailedReason::FailedToFindMatch{static_cast<int32_t>(0xf)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
