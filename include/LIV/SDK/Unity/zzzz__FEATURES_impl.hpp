#pragma once
#include "LIV/SDK/Unity/zzzz__FEATURES_def.hpp"
constexpr void LIV::SDK::Unity::FEATURES::__set_value__(uint64_t  value)  {
::cordl_internals::setInstanceField<uint64_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint64_t>(value));
}
constexpr uint64_t& LIV::SDK::Unity::FEATURES::__get_value__()  {
return ::cordl_internals::getInstanceField<uint64_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint64_t const& LIV::SDK::Unity::FEATURES::__get_value__() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::LIV::SDK::Unity::FEATURES::FEATURES(uint64_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x8>() {this->value__ = value__;
}
constexpr ::LIV::SDK::Unity::FEATURES  LIV::SDK::Unity::FEATURES::NONE{static_cast<uint64_t>(0x0u)};
constexpr ::LIV::SDK::Unity::FEATURES  LIV::SDK::Unity::FEATURES::BACKGROUND_RENDER{static_cast<uint64_t>(0x1u)};
constexpr ::LIV::SDK::Unity::FEATURES  LIV::SDK::Unity::FEATURES::FOREGROUND_RENDER{static_cast<uint64_t>(0x2u)};
constexpr ::LIV::SDK::Unity::FEATURES  LIV::SDK::Unity::FEATURES::COMPLEX_CLIP_PLANE{static_cast<uint64_t>(0x4u)};
constexpr ::LIV::SDK::Unity::FEATURES  LIV::SDK::Unity::FEATURES::BACKGROUND_DEPTH_RENDER{static_cast<uint64_t>(0x8u)};
constexpr ::LIV::SDK::Unity::FEATURES  LIV::SDK::Unity::FEATURES::OVERRIDE_POST_PROCESSING{static_cast<uint64_t>(0x10u)};
constexpr ::LIV::SDK::Unity::FEATURES  LIV::SDK::Unity::FEATURES::FIX_FOREGROUND_ALPHA{static_cast<uint64_t>(0x20u)};
constexpr ::LIV::SDK::Unity::FEATURES  LIV::SDK::Unity::FEATURES::GROUND_CLIP_PLANE{static_cast<uint64_t>(0x40u)};
constexpr ::LIV::SDK::Unity::FEATURES  LIV::SDK::Unity::FEATURES::RELEASE_CONTROL{static_cast<uint64_t>(0x8000u)};
constexpr ::LIV::SDK::Unity::FEATURES  LIV::SDK::Unity::FEATURES::OPTIMIZED_RENDER{static_cast<uint64_t>(0x10000000u)};
constexpr ::LIV::SDK::Unity::FEATURES  LIV::SDK::Unity::FEATURES::INTERLACED_RENDER{static_cast<uint64_t>(0x20000000u)};
constexpr ::LIV::SDK::Unity::FEATURES  LIV::SDK::Unity::FEATURES::DEBUG_CLIP_PLANE{static_cast<uint64_t>(0x1000000000000u)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
