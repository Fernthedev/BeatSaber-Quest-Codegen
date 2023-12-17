#pragma once
#include "JetBrains/Annotations/zzzz__ImplicitUseKindFlags_def.hpp"
constexpr void JetBrains::Annotations::ImplicitUseKindFlags::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& JetBrains::Annotations::ImplicitUseKindFlags::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& JetBrains::Annotations::ImplicitUseKindFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::JetBrains::Annotations::ImplicitUseKindFlags::ImplicitUseKindFlags(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::JetBrains::Annotations::ImplicitUseKindFlags  JetBrains::Annotations::ImplicitUseKindFlags::Default{static_cast<int32_t>(0x7)};
constexpr ::JetBrains::Annotations::ImplicitUseKindFlags  JetBrains::Annotations::ImplicitUseKindFlags::Access{static_cast<int32_t>(0x1)};
constexpr ::JetBrains::Annotations::ImplicitUseKindFlags  JetBrains::Annotations::ImplicitUseKindFlags::Assign{static_cast<int32_t>(0x2)};
constexpr ::JetBrains::Annotations::ImplicitUseKindFlags  JetBrains::Annotations::ImplicitUseKindFlags::InstantiatedWithFixedConstructorSignature{static_cast<int32_t>(0x4)};
constexpr ::JetBrains::Annotations::ImplicitUseKindFlags  JetBrains::Annotations::ImplicitUseKindFlags::InstantiatedNoFixedConstructorSignature{static_cast<int32_t>(0x8)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
