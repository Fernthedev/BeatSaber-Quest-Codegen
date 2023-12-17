#pragma once
#include "UnityEngine/zzzz__SpritePackingRotation_def.hpp"
constexpr void UnityEngine::SpritePackingRotation::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::SpritePackingRotation::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::SpritePackingRotation::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::SpritePackingRotation::SpritePackingRotation(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::SpritePackingRotation  UnityEngine::SpritePackingRotation::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::SpritePackingRotation  UnityEngine::SpritePackingRotation::FlipHorizontal{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::SpritePackingRotation  UnityEngine::SpritePackingRotation::FlipVertical{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::SpritePackingRotation  UnityEngine::SpritePackingRotation::Rotate180{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::SpritePackingRotation  UnityEngine::SpritePackingRotation::Any{static_cast<int32_t>(0xf)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
