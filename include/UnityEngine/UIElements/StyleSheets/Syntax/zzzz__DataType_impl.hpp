#pragma once
#include "UnityEngine/UIElements/StyleSheets/Syntax/zzzz__DataType_def.hpp"
constexpr void UnityEngine::UIElements::StyleSheets::Syntax::DataType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::UIElements::StyleSheets::Syntax::DataType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::UIElements::StyleSheets::Syntax::DataType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::DataType::DataType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::DataType  UnityEngine::UIElements::StyleSheets::Syntax::DataType::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::DataType  UnityEngine::UIElements::StyleSheets::Syntax::DataType::Number{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::DataType  UnityEngine::UIElements::StyleSheets::Syntax::DataType::Integer{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::DataType  UnityEngine::UIElements::StyleSheets::Syntax::DataType::Length{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::DataType  UnityEngine::UIElements::StyleSheets::Syntax::DataType::Percentage{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::DataType  UnityEngine::UIElements::StyleSheets::Syntax::DataType::Color{static_cast<int32_t>(0x5)};
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::DataType  UnityEngine::UIElements::StyleSheets::Syntax::DataType::Resource{static_cast<int32_t>(0x6)};
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::DataType  UnityEngine::UIElements::StyleSheets::Syntax::DataType::Url{static_cast<int32_t>(0x7)};
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::DataType  UnityEngine::UIElements::StyleSheets::Syntax::DataType::Time{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::DataType  UnityEngine::UIElements::StyleSheets::Syntax::DataType::Angle{static_cast<int32_t>(0x9)};
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::DataType  UnityEngine::UIElements::StyleSheets::Syntax::DataType::CustomIdent{static_cast<int32_t>(0xa)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
