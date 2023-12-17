#pragma once
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphRenderMode_def.hpp"
constexpr void UnityEngine::TextCore::LowLevel::GlyphRenderMode::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::TextCore::LowLevel::GlyphRenderMode::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::TextCore::LowLevel::GlyphRenderMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextCore::LowLevel::GlyphRenderMode::GlyphRenderMode(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::TextCore::LowLevel::GlyphRenderMode  UnityEngine::TextCore::LowLevel::GlyphRenderMode::SMOOTH_HINTED{static_cast<int32_t>(0x1019)};
constexpr ::UnityEngine::TextCore::LowLevel::GlyphRenderMode  UnityEngine::TextCore::LowLevel::GlyphRenderMode::SMOOTH{static_cast<int32_t>(0x1015)};
constexpr ::UnityEngine::TextCore::LowLevel::GlyphRenderMode  UnityEngine::TextCore::LowLevel::GlyphRenderMode::COLOR_HINTED{static_cast<int32_t>(0x11018)};
constexpr ::UnityEngine::TextCore::LowLevel::GlyphRenderMode  UnityEngine::TextCore::LowLevel::GlyphRenderMode::COLOR{static_cast<int32_t>(0x11014)};
constexpr ::UnityEngine::TextCore::LowLevel::GlyphRenderMode  UnityEngine::TextCore::LowLevel::GlyphRenderMode::RASTER_HINTED{static_cast<int32_t>(0x101a)};
constexpr ::UnityEngine::TextCore::LowLevel::GlyphRenderMode  UnityEngine::TextCore::LowLevel::GlyphRenderMode::RASTER{static_cast<int32_t>(0x1016)};
constexpr ::UnityEngine::TextCore::LowLevel::GlyphRenderMode  UnityEngine::TextCore::LowLevel::GlyphRenderMode::SDF{static_cast<int32_t>(0x1026)};
constexpr ::UnityEngine::TextCore::LowLevel::GlyphRenderMode  UnityEngine::TextCore::LowLevel::GlyphRenderMode::SDF8{static_cast<int32_t>(0x2026)};
constexpr ::UnityEngine::TextCore::LowLevel::GlyphRenderMode  UnityEngine::TextCore::LowLevel::GlyphRenderMode::SDF16{static_cast<int32_t>(0x4026)};
constexpr ::UnityEngine::TextCore::LowLevel::GlyphRenderMode  UnityEngine::TextCore::LowLevel::GlyphRenderMode::SDF32{static_cast<int32_t>(0x8026)};
constexpr ::UnityEngine::TextCore::LowLevel::GlyphRenderMode  UnityEngine::TextCore::LowLevel::GlyphRenderMode::SDFAA_HINTED{static_cast<int32_t>(0x1049)};
constexpr ::UnityEngine::TextCore::LowLevel::GlyphRenderMode  UnityEngine::TextCore::LowLevel::GlyphRenderMode::SDFAA{static_cast<int32_t>(0x1045)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
