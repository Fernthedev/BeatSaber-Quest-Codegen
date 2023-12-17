#pragma once
#include "JetBrains/Annotations/zzzz__AssertionConditionType_def.hpp"
constexpr void JetBrains::Annotations::AssertionConditionType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& JetBrains::Annotations::AssertionConditionType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& JetBrains::Annotations::AssertionConditionType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::JetBrains::Annotations::AssertionConditionType::AssertionConditionType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::JetBrains::Annotations::AssertionConditionType  JetBrains::Annotations::AssertionConditionType::IS_TRUE{static_cast<int32_t>(0x0)};
constexpr ::JetBrains::Annotations::AssertionConditionType  JetBrains::Annotations::AssertionConditionType::IS_FALSE{static_cast<int32_t>(0x1)};
constexpr ::JetBrains::Annotations::AssertionConditionType  JetBrains::Annotations::AssertionConditionType::IS_NULL{static_cast<int32_t>(0x2)};
constexpr ::JetBrains::Annotations::AssertionConditionType  JetBrains::Annotations::AssertionConditionType::IS_NOT_NULL{static_cast<int32_t>(0x3)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
