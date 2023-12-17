#pragma once
#include "System/Configuration/Assemblies/zzzz__AssemblyHashAlgorithm_def.hpp"
constexpr void System::Configuration::Assemblies::AssemblyHashAlgorithm::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Configuration::Assemblies::AssemblyHashAlgorithm::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Configuration::Assemblies::AssemblyHashAlgorithm::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Configuration::Assemblies::AssemblyHashAlgorithm::AssemblyHashAlgorithm(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Configuration::Assemblies::AssemblyHashAlgorithm  System::Configuration::Assemblies::AssemblyHashAlgorithm::None{static_cast<int32_t>(0x0)};
constexpr ::System::Configuration::Assemblies::AssemblyHashAlgorithm  System::Configuration::Assemblies::AssemblyHashAlgorithm::MD5{static_cast<int32_t>(0x8003)};
constexpr ::System::Configuration::Assemblies::AssemblyHashAlgorithm  System::Configuration::Assemblies::AssemblyHashAlgorithm::SHA1{static_cast<int32_t>(0x8004)};
constexpr ::System::Configuration::Assemblies::AssemblyHashAlgorithm  System::Configuration::Assemblies::AssemblyHashAlgorithm::SHA256{static_cast<int32_t>(0x800c)};
constexpr ::System::Configuration::Assemblies::AssemblyHashAlgorithm  System::Configuration::Assemblies::AssemblyHashAlgorithm::SHA384{static_cast<int32_t>(0x800d)};
constexpr ::System::Configuration::Assemblies::AssemblyHashAlgorithm  System::Configuration::Assemblies::AssemblyHashAlgorithm::SHA512{static_cast<int32_t>(0x800e)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
