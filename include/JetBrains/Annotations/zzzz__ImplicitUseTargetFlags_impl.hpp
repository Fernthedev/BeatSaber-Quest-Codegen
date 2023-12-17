#pragma once
#include "JetBrains/Annotations/zzzz__ImplicitUseTargetFlags_def.hpp"
constexpr void JetBrains::Annotations::ImplicitUseTargetFlags::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& JetBrains::Annotations::ImplicitUseTargetFlags::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& JetBrains::Annotations::ImplicitUseTargetFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::JetBrains::Annotations::ImplicitUseTargetFlags::ImplicitUseTargetFlags(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::JetBrains::Annotations::ImplicitUseTargetFlags  JetBrains::Annotations::ImplicitUseTargetFlags::Default{static_cast<int32_t>(0x1)};
constexpr ::JetBrains::Annotations::ImplicitUseTargetFlags  JetBrains::Annotations::ImplicitUseTargetFlags::Itself{static_cast<int32_t>(0x1)};
constexpr ::JetBrains::Annotations::ImplicitUseTargetFlags  JetBrains::Annotations::ImplicitUseTargetFlags::Members{static_cast<int32_t>(0x2)};
constexpr ::JetBrains::Annotations::ImplicitUseTargetFlags  JetBrains::Annotations::ImplicitUseTargetFlags::WithMembers{static_cast<int32_t>(0x3)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
