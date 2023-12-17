#pragma once
#include "LIV/SDK/Unity/zzzz__INVALIDATION_FLAGS_def.hpp"
constexpr void LIV::SDK::Unity::INVALIDATION_FLAGS::__set_value__(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t& LIV::SDK::Unity::INVALIDATION_FLAGS::__get_value__()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint32_t const& LIV::SDK::Unity::INVALIDATION_FLAGS::__get_value__() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::LIV::SDK::Unity::INVALIDATION_FLAGS::INVALIDATION_FLAGS(uint32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::LIV::SDK::Unity::INVALIDATION_FLAGS  LIV::SDK::Unity::INVALIDATION_FLAGS::NONE{static_cast<uint32_t>(0x4020100u)};
constexpr ::LIV::SDK::Unity::INVALIDATION_FLAGS  LIV::SDK::Unity::INVALIDATION_FLAGS::HMD_CAMERA{static_cast<uint32_t>(0x8040201u)};
constexpr ::LIV::SDK::Unity::INVALIDATION_FLAGS  LIV::SDK::Unity::INVALIDATION_FLAGS::STAGE{static_cast<uint32_t>(0x80402u)};
constexpr ::LIV::SDK::Unity::INVALIDATION_FLAGS  LIV::SDK::Unity::INVALIDATION_FLAGS::MR_CAMERA_PREFAB{static_cast<uint32_t>(0x804u)};
constexpr ::LIV::SDK::Unity::INVALIDATION_FLAGS  LIV::SDK::Unity::INVALIDATION_FLAGS::EXCLUDE_BEHAVIOURS{static_cast<uint32_t>(0x70000008u)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
