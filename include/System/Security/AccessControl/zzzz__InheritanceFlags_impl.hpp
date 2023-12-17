#pragma once
#include "System/Security/AccessControl/zzzz__InheritanceFlags_def.hpp"
constexpr void System::Security::AccessControl::InheritanceFlags::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Security::AccessControl::InheritanceFlags::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Security::AccessControl::InheritanceFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::AccessControl::InheritanceFlags::InheritanceFlags(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Security::AccessControl::InheritanceFlags  System::Security::AccessControl::InheritanceFlags::None{static_cast<int32_t>(0x0)};
constexpr ::System::Security::AccessControl::InheritanceFlags  System::Security::AccessControl::InheritanceFlags::ContainerInherit{static_cast<int32_t>(0x1)};
constexpr ::System::Security::AccessControl::InheritanceFlags  System::Security::AccessControl::InheritanceFlags::ObjectInherit{static_cast<int32_t>(0x2)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
