#pragma once
#include "UnityEngine/UIElements/zzzz__StyleValueType_def.hpp"
constexpr void UnityEngine::UIElements::StyleValueType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::UIElements::StyleValueType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::UIElements::StyleValueType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::StyleValueType::StyleValueType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::UIElements::StyleValueType  UnityEngine::UIElements::StyleValueType::Invalid{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::UIElements::StyleValueType  UnityEngine::UIElements::StyleValueType::Keyword{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::UIElements::StyleValueType  UnityEngine::UIElements::StyleValueType::Float{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::UIElements::StyleValueType  UnityEngine::UIElements::StyleValueType::Dimension{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::UIElements::StyleValueType  UnityEngine::UIElements::StyleValueType::Color{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::UIElements::StyleValueType  UnityEngine::UIElements::StyleValueType::ResourcePath{static_cast<int32_t>(0x5)};
constexpr ::UnityEngine::UIElements::StyleValueType  UnityEngine::UIElements::StyleValueType::AssetReference{static_cast<int32_t>(0x6)};
constexpr ::UnityEngine::UIElements::StyleValueType  UnityEngine::UIElements::StyleValueType::Enum{static_cast<int32_t>(0x7)};
constexpr ::UnityEngine::UIElements::StyleValueType  UnityEngine::UIElements::StyleValueType::Variable{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::UIElements::StyleValueType  UnityEngine::UIElements::StyleValueType::String{static_cast<int32_t>(0x9)};
constexpr ::UnityEngine::UIElements::StyleValueType  UnityEngine::UIElements::StyleValueType::Function{static_cast<int32_t>(0xa)};
constexpr ::UnityEngine::UIElements::StyleValueType  UnityEngine::UIElements::StyleValueType::CommaSeparator{static_cast<int32_t>(0xb)};
constexpr ::UnityEngine::UIElements::StyleValueType  UnityEngine::UIElements::StyleValueType::ScalableImage{static_cast<int32_t>(0xc)};
constexpr ::UnityEngine::UIElements::StyleValueType  UnityEngine::UIElements::StyleValueType::MissingAssetReference{static_cast<int32_t>(0xd)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
