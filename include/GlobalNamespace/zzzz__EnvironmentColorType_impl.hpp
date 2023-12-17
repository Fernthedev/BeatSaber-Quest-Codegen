#pragma once
#include "GlobalNamespace/zzzz__EnvironmentColorType_def.hpp"
constexpr void GlobalNamespace::EnvironmentColorType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::EnvironmentColorType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::EnvironmentColorType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::EnvironmentColorType::EnvironmentColorType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::EnvironmentColorType  GlobalNamespace::EnvironmentColorType::None{static_cast<int32_t>(0xffffffff)};
constexpr ::GlobalNamespace::EnvironmentColorType  GlobalNamespace::EnvironmentColorType::Color0{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::EnvironmentColorType  GlobalNamespace::EnvironmentColorType::Color1{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::EnvironmentColorType  GlobalNamespace::EnvironmentColorType::ColorW{static_cast<int32_t>(0x2)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
