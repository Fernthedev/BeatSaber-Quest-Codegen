#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "Oculus/Platform/zzzz__PeerConnectionState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::PeerConnectionState::PeerConnectionState(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::Oculus::Platform::PeerConnectionState::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Oculus::Platform::PeerConnectionState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::Oculus::Platform::PeerConnectionState  ::Oculus::Platform::PeerConnectionState::Unknown{0};
constexpr ::Oculus::Platform::PeerConnectionState  ::Oculus::Platform::PeerConnectionState::Connected{1};
constexpr ::Oculus::Platform::PeerConnectionState  ::Oculus::Platform::PeerConnectionState::Timeout{2};
constexpr ::Oculus::Platform::PeerConnectionState  ::Oculus::Platform::PeerConnectionState::Closed{3};
} // end anonymous namespace
