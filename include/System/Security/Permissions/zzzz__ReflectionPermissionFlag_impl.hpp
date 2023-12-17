#pragma once
#include "System/Security/Permissions/zzzz__ReflectionPermissionFlag_def.hpp"
constexpr void System::Security::Permissions::ReflectionPermissionFlag::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Security::Permissions::ReflectionPermissionFlag::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Security::Permissions::ReflectionPermissionFlag::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Permissions::ReflectionPermissionFlag::ReflectionPermissionFlag(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Security::Permissions::ReflectionPermissionFlag  System::Security::Permissions::ReflectionPermissionFlag::AllFlags{static_cast<int32_t>(0x7)};
constexpr ::System::Security::Permissions::ReflectionPermissionFlag  System::Security::Permissions::ReflectionPermissionFlag::MemberAccess{static_cast<int32_t>(0x2)};
constexpr ::System::Security::Permissions::ReflectionPermissionFlag  System::Security::Permissions::ReflectionPermissionFlag::NoFlags{static_cast<int32_t>(0x0)};
constexpr ::System::Security::Permissions::ReflectionPermissionFlag  System::Security::Permissions::ReflectionPermissionFlag::ReflectionEmit{static_cast<int32_t>(0x4)};
constexpr ::System::Security::Permissions::ReflectionPermissionFlag  System::Security::Permissions::ReflectionPermissionFlag::RestrictedMemberAccess{static_cast<int32_t>(0x8)};
constexpr ::System::Security::Permissions::ReflectionPermissionFlag  System::Security::Permissions::ReflectionPermissionFlag::TypeInformation{static_cast<int32_t>(0x1)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
