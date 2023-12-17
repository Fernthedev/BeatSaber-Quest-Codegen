#pragma once
#include "System/Reflection/zzzz__AssemblyNameFlags_def.hpp"
constexpr void System::Reflection::AssemblyNameFlags::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Reflection::AssemblyNameFlags::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Reflection::AssemblyNameFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Reflection::AssemblyNameFlags::AssemblyNameFlags(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Reflection::AssemblyNameFlags  System::Reflection::AssemblyNameFlags::None{static_cast<int32_t>(0x0)};
constexpr ::System::Reflection::AssemblyNameFlags  System::Reflection::AssemblyNameFlags::PublicKey{static_cast<int32_t>(0x1)};
constexpr ::System::Reflection::AssemblyNameFlags  System::Reflection::AssemblyNameFlags::EnableJITcompileOptimizer{static_cast<int32_t>(0x4000)};
constexpr ::System::Reflection::AssemblyNameFlags  System::Reflection::AssemblyNameFlags::EnableJITcompileTracking{static_cast<int32_t>(0x8000)};
constexpr ::System::Reflection::AssemblyNameFlags  System::Reflection::AssemblyNameFlags::Retargetable{static_cast<int32_t>(0x100)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
