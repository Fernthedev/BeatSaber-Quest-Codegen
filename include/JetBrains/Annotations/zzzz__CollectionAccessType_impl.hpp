#pragma once
#include "JetBrains/Annotations/zzzz__CollectionAccessType_def.hpp"
constexpr void JetBrains::Annotations::CollectionAccessType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& JetBrains::Annotations::CollectionAccessType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& JetBrains::Annotations::CollectionAccessType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::JetBrains::Annotations::CollectionAccessType::CollectionAccessType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::JetBrains::Annotations::CollectionAccessType  JetBrains::Annotations::CollectionAccessType::None{static_cast<int32_t>(0x0)};
constexpr ::JetBrains::Annotations::CollectionAccessType  JetBrains::Annotations::CollectionAccessType::Read{static_cast<int32_t>(0x1)};
constexpr ::JetBrains::Annotations::CollectionAccessType  JetBrains::Annotations::CollectionAccessType::ModifyExistingContent{static_cast<int32_t>(0x2)};
constexpr ::JetBrains::Annotations::CollectionAccessType  JetBrains::Annotations::CollectionAccessType::UpdatedContent{static_cast<int32_t>(0x6)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
