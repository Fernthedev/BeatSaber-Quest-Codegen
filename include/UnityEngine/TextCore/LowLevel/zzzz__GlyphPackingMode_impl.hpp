#pragma once
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphPackingMode_def.hpp"
constexpr void UnityEngine::TextCore::LowLevel::GlyphPackingMode::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::TextCore::LowLevel::GlyphPackingMode::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::TextCore::LowLevel::GlyphPackingMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextCore::LowLevel::GlyphPackingMode::GlyphPackingMode(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::TextCore::LowLevel::GlyphPackingMode  UnityEngine::TextCore::LowLevel::GlyphPackingMode::BestShortSideFit{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::TextCore::LowLevel::GlyphPackingMode  UnityEngine::TextCore::LowLevel::GlyphPackingMode::BestLongSideFit{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::TextCore::LowLevel::GlyphPackingMode  UnityEngine::TextCore::LowLevel::GlyphPackingMode::BestAreaFit{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::TextCore::LowLevel::GlyphPackingMode  UnityEngine::TextCore::LowLevel::GlyphPackingMode::BottomLeftRule{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::TextCore::LowLevel::GlyphPackingMode  UnityEngine::TextCore::LowLevel::GlyphPackingMode::ContactPointRule{static_cast<int32_t>(0x4)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
