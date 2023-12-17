#pragma once
#include "System/Resources/zzzz__UltimateResourceFallbackLocation_def.hpp"
constexpr void System::Resources::UltimateResourceFallbackLocation::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Resources::UltimateResourceFallbackLocation::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Resources::UltimateResourceFallbackLocation::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Resources::UltimateResourceFallbackLocation::UltimateResourceFallbackLocation(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Resources::UltimateResourceFallbackLocation  System::Resources::UltimateResourceFallbackLocation::MainAssembly{static_cast<int32_t>(0x0)};
constexpr ::System::Resources::UltimateResourceFallbackLocation  System::Resources::UltimateResourceFallbackLocation::Satellite{static_cast<int32_t>(0x1)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
