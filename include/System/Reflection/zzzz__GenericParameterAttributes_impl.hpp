#pragma once
#include "System/Reflection/zzzz__GenericParameterAttributes_def.hpp"
constexpr void System::Reflection::GenericParameterAttributes::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Reflection::GenericParameterAttributes::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Reflection::GenericParameterAttributes::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Reflection::GenericParameterAttributes::GenericParameterAttributes(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Reflection::GenericParameterAttributes  System::Reflection::GenericParameterAttributes::None{static_cast<int32_t>(0x0)};
constexpr ::System::Reflection::GenericParameterAttributes  System::Reflection::GenericParameterAttributes::VarianceMask{static_cast<int32_t>(0x3)};
constexpr ::System::Reflection::GenericParameterAttributes  System::Reflection::GenericParameterAttributes::Covariant{static_cast<int32_t>(0x1)};
constexpr ::System::Reflection::GenericParameterAttributes  System::Reflection::GenericParameterAttributes::Contravariant{static_cast<int32_t>(0x2)};
constexpr ::System::Reflection::GenericParameterAttributes  System::Reflection::GenericParameterAttributes::SpecialConstraintMask{static_cast<int32_t>(0x1c)};
constexpr ::System::Reflection::GenericParameterAttributes  System::Reflection::GenericParameterAttributes::ReferenceTypeConstraint{static_cast<int32_t>(0x4)};
constexpr ::System::Reflection::GenericParameterAttributes  System::Reflection::GenericParameterAttributes::NotNullableValueTypeConstraint{static_cast<int32_t>(0x8)};
constexpr ::System::Reflection::GenericParameterAttributes  System::Reflection::GenericParameterAttributes::DefaultConstructorConstraint{static_cast<int32_t>(0x10)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
