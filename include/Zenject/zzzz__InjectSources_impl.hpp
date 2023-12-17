#pragma once
#include "Zenject/zzzz__InjectSources_def.hpp"
constexpr void Zenject::InjectSources::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& Zenject::InjectSources::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& Zenject::InjectSources::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Zenject::InjectSources::InjectSources(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::Zenject::InjectSources  Zenject::InjectSources::Any{static_cast<int32_t>(0x0)};
constexpr ::Zenject::InjectSources  Zenject::InjectSources::Local{static_cast<int32_t>(0x1)};
constexpr ::Zenject::InjectSources  Zenject::InjectSources::Parent{static_cast<int32_t>(0x2)};
constexpr ::Zenject::InjectSources  Zenject::InjectSources::AnyParent{static_cast<int32_t>(0x3)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
