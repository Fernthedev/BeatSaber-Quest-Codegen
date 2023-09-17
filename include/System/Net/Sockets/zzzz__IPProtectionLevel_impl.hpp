#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Net/Sockets/zzzz__IPProtectionLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::Sockets::IPProtectionLevel::IPProtectionLevel(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Net::Sockets::IPProtectionLevel::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::Sockets::IPProtectionLevel::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Net::Sockets::IPProtectionLevel  ::System::Net::Sockets::IPProtectionLevel::Unspecified{-1};
constexpr ::System::Net::Sockets::IPProtectionLevel  ::System::Net::Sockets::IPProtectionLevel::Unrestricted{10};
constexpr ::System::Net::Sockets::IPProtectionLevel  ::System::Net::Sockets::IPProtectionLevel::EdgeRestricted{20};
constexpr ::System::Net::Sockets::IPProtectionLevel  ::System::Net::Sockets::IPProtectionLevel::Restricted{30};
} // end anonymous namespace
