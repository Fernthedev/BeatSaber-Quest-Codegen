#pragma once
#include "System/Security/AccessControl/zzzz__ResourceType_def.hpp"
constexpr void System::Security::AccessControl::ResourceType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Security::AccessControl::ResourceType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Security::AccessControl::ResourceType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::AccessControl::ResourceType::ResourceType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Security::AccessControl::ResourceType  System::Security::AccessControl::ResourceType::Unknown{static_cast<int32_t>(0x0)};
constexpr ::System::Security::AccessControl::ResourceType  System::Security::AccessControl::ResourceType::FileObject{static_cast<int32_t>(0x1)};
constexpr ::System::Security::AccessControl::ResourceType  System::Security::AccessControl::ResourceType::Service{static_cast<int32_t>(0x2)};
constexpr ::System::Security::AccessControl::ResourceType  System::Security::AccessControl::ResourceType::Printer{static_cast<int32_t>(0x3)};
constexpr ::System::Security::AccessControl::ResourceType  System::Security::AccessControl::ResourceType::RegistryKey{static_cast<int32_t>(0x4)};
constexpr ::System::Security::AccessControl::ResourceType  System::Security::AccessControl::ResourceType::LMShare{static_cast<int32_t>(0x5)};
constexpr ::System::Security::AccessControl::ResourceType  System::Security::AccessControl::ResourceType::KernelObject{static_cast<int32_t>(0x6)};
constexpr ::System::Security::AccessControl::ResourceType  System::Security::AccessControl::ResourceType::WindowObject{static_cast<int32_t>(0x7)};
constexpr ::System::Security::AccessControl::ResourceType  System::Security::AccessControl::ResourceType::DSObject{static_cast<int32_t>(0x8)};
constexpr ::System::Security::AccessControl::ResourceType  System::Security::AccessControl::ResourceType::DSObjectAll{static_cast<int32_t>(0x9)};
constexpr ::System::Security::AccessControl::ResourceType  System::Security::AccessControl::ResourceType::ProviderDefined{static_cast<int32_t>(0xa)};
constexpr ::System::Security::AccessControl::ResourceType  System::Security::AccessControl::ResourceType::WmiGuidObject{static_cast<int32_t>(0xb)};
constexpr ::System::Security::AccessControl::ResourceType  System::Security::AccessControl::ResourceType::RegistryWow6432Key{static_cast<int32_t>(0xc)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
