#pragma once
#include "Zenject/zzzz__BindingInheritanceMethods_def.hpp"
constexpr void Zenject::BindingInheritanceMethods::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& Zenject::BindingInheritanceMethods::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& Zenject::BindingInheritanceMethods::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Zenject::BindingInheritanceMethods::BindingInheritanceMethods(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::Zenject::BindingInheritanceMethods  Zenject::BindingInheritanceMethods::None{static_cast<int32_t>(0x0)};
constexpr ::Zenject::BindingInheritanceMethods  Zenject::BindingInheritanceMethods::CopyIntoAll{static_cast<int32_t>(0x1)};
constexpr ::Zenject::BindingInheritanceMethods  Zenject::BindingInheritanceMethods::CopyDirectOnly{static_cast<int32_t>(0x2)};
constexpr ::Zenject::BindingInheritanceMethods  Zenject::BindingInheritanceMethods::MoveIntoAll{static_cast<int32_t>(0x3)};
constexpr ::Zenject::BindingInheritanceMethods  Zenject::BindingInheritanceMethods::MoveDirectOnly{static_cast<int32_t>(0x4)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
