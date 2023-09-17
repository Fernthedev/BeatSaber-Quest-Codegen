#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "JetBrains/Annotations/zzzz__AssertionConditionType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::JetBrains::Annotations::AssertionConditionType::AssertionConditionType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::JetBrains::Annotations::AssertionConditionType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::JetBrains::Annotations::AssertionConditionType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::JetBrains::Annotations::AssertionConditionType  ::JetBrains::Annotations::AssertionConditionType::IS_TRUE{0};
constexpr ::JetBrains::Annotations::AssertionConditionType  ::JetBrains::Annotations::AssertionConditionType::IS_FALSE{1};
constexpr ::JetBrains::Annotations::AssertionConditionType  ::JetBrains::Annotations::AssertionConditionType::IS_NULL{2};
constexpr ::JetBrains::Annotations::AssertionConditionType  ::JetBrains::Annotations::AssertionConditionType::IS_NOT_NULL{3};
} // end anonymous namespace
