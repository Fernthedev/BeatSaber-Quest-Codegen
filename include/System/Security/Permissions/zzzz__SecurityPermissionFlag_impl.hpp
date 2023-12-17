#pragma once
#include "System/Security/Permissions/zzzz__SecurityPermissionFlag_def.hpp"
constexpr void System::Security::Permissions::SecurityPermissionFlag::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Security::Permissions::SecurityPermissionFlag::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Security::Permissions::SecurityPermissionFlag::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Permissions::SecurityPermissionFlag::SecurityPermissionFlag(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Security::Permissions::SecurityPermissionFlag  System::Security::Permissions::SecurityPermissionFlag::NoFlags{static_cast<int32_t>(0x0)};
constexpr ::System::Security::Permissions::SecurityPermissionFlag  System::Security::Permissions::SecurityPermissionFlag::Assertion{static_cast<int32_t>(0x1)};
constexpr ::System::Security::Permissions::SecurityPermissionFlag  System::Security::Permissions::SecurityPermissionFlag::UnmanagedCode{static_cast<int32_t>(0x2)};
constexpr ::System::Security::Permissions::SecurityPermissionFlag  System::Security::Permissions::SecurityPermissionFlag::SkipVerification{static_cast<int32_t>(0x4)};
constexpr ::System::Security::Permissions::SecurityPermissionFlag  System::Security::Permissions::SecurityPermissionFlag::Execution{static_cast<int32_t>(0x8)};
constexpr ::System::Security::Permissions::SecurityPermissionFlag  System::Security::Permissions::SecurityPermissionFlag::ControlThread{static_cast<int32_t>(0x10)};
constexpr ::System::Security::Permissions::SecurityPermissionFlag  System::Security::Permissions::SecurityPermissionFlag::ControlEvidence{static_cast<int32_t>(0x20)};
constexpr ::System::Security::Permissions::SecurityPermissionFlag  System::Security::Permissions::SecurityPermissionFlag::ControlPolicy{static_cast<int32_t>(0x40)};
constexpr ::System::Security::Permissions::SecurityPermissionFlag  System::Security::Permissions::SecurityPermissionFlag::SerializationFormatter{static_cast<int32_t>(0x80)};
constexpr ::System::Security::Permissions::SecurityPermissionFlag  System::Security::Permissions::SecurityPermissionFlag::ControlDomainPolicy{static_cast<int32_t>(0x100)};
constexpr ::System::Security::Permissions::SecurityPermissionFlag  System::Security::Permissions::SecurityPermissionFlag::ControlPrincipal{static_cast<int32_t>(0x200)};
constexpr ::System::Security::Permissions::SecurityPermissionFlag  System::Security::Permissions::SecurityPermissionFlag::ControlAppDomain{static_cast<int32_t>(0x400)};
constexpr ::System::Security::Permissions::SecurityPermissionFlag  System::Security::Permissions::SecurityPermissionFlag::RemotingConfiguration{static_cast<int32_t>(0x800)};
constexpr ::System::Security::Permissions::SecurityPermissionFlag  System::Security::Permissions::SecurityPermissionFlag::Infrastructure{static_cast<int32_t>(0x1000)};
constexpr ::System::Security::Permissions::SecurityPermissionFlag  System::Security::Permissions::SecurityPermissionFlag::BindingRedirects{static_cast<int32_t>(0x2000)};
constexpr ::System::Security::Permissions::SecurityPermissionFlag  System::Security::Permissions::SecurityPermissionFlag::AllFlags{static_cast<int32_t>(0x3fff)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
