#pragma once
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphLoadFlags_def.hpp"
constexpr void UnityEngine::TextCore::LowLevel::GlyphLoadFlags::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::TextCore::LowLevel::GlyphLoadFlags::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::TextCore::LowLevel::GlyphLoadFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags::GlyphLoadFlags(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags  UnityEngine::TextCore::LowLevel::GlyphLoadFlags::LOAD_DEFAULT{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags  UnityEngine::TextCore::LowLevel::GlyphLoadFlags::LOAD_NO_SCALE{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags  UnityEngine::TextCore::LowLevel::GlyphLoadFlags::LOAD_NO_HINTING{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags  UnityEngine::TextCore::LowLevel::GlyphLoadFlags::LOAD_RENDER{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags  UnityEngine::TextCore::LowLevel::GlyphLoadFlags::LOAD_NO_BITMAP{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags  UnityEngine::TextCore::LowLevel::GlyphLoadFlags::LOAD_FORCE_AUTOHINT{static_cast<int32_t>(0x20)};
constexpr ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags  UnityEngine::TextCore::LowLevel::GlyphLoadFlags::LOAD_MONOCHROME{static_cast<int32_t>(0x1000)};
constexpr ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags  UnityEngine::TextCore::LowLevel::GlyphLoadFlags::LOAD_NO_AUTOHINT{static_cast<int32_t>(0x8000)};
constexpr ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags  UnityEngine::TextCore::LowLevel::GlyphLoadFlags::LOAD_COLOR{static_cast<int32_t>(0x100000)};
constexpr ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags  UnityEngine::TextCore::LowLevel::GlyphLoadFlags::LOAD_COMPUTE_METRICS{static_cast<int32_t>(0x200000)};
constexpr ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags  UnityEngine::TextCore::LowLevel::GlyphLoadFlags::LOAD_BITMAP_METRICS_ONLY{static_cast<int32_t>(0x400000)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
