#pragma once
#include "System/Configuration/Assemblies/zzzz__AssemblyVersionCompatibility_def.hpp"
constexpr void System::Configuration::Assemblies::AssemblyVersionCompatibility::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Configuration::Assemblies::AssemblyVersionCompatibility::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Configuration::Assemblies::AssemblyVersionCompatibility::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Configuration::Assemblies::AssemblyVersionCompatibility::AssemblyVersionCompatibility(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Configuration::Assemblies::AssemblyVersionCompatibility  System::Configuration::Assemblies::AssemblyVersionCompatibility::SameMachine{static_cast<int32_t>(0x1)};
constexpr ::System::Configuration::Assemblies::AssemblyVersionCompatibility  System::Configuration::Assemblies::AssemblyVersionCompatibility::SameProcess{static_cast<int32_t>(0x2)};
constexpr ::System::Configuration::Assemblies::AssemblyVersionCompatibility  System::Configuration::Assemblies::AssemblyVersionCompatibility::SameDomain{static_cast<int32_t>(0x3)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
