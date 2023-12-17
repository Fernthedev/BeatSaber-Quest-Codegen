#pragma once
#include "LIV/SDK/Unity/zzzz__RENDERING_PIPELINE_def.hpp"
constexpr void LIV::SDK::Unity::RENDERING_PIPELINE::__set_value__(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t& LIV::SDK::Unity::RENDERING_PIPELINE::__get_value__()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint32_t const& LIV::SDK::Unity::RENDERING_PIPELINE::__get_value__() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::LIV::SDK::Unity::RENDERING_PIPELINE::RENDERING_PIPELINE(uint32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::LIV::SDK::Unity::RENDERING_PIPELINE  LIV::SDK::Unity::RENDERING_PIPELINE::UNDEFINED{static_cast<uint32_t>(0x3020100u)};
constexpr ::LIV::SDK::Unity::RENDERING_PIPELINE  LIV::SDK::Unity::RENDERING_PIPELINE::FORWARD{static_cast<uint32_t>(0x4030201u)};
constexpr ::LIV::SDK::Unity::RENDERING_PIPELINE  LIV::SDK::Unity::RENDERING_PIPELINE::DEFERRED{static_cast<uint32_t>(0x5040302u)};
constexpr ::LIV::SDK::Unity::RENDERING_PIPELINE  LIV::SDK::Unity::RENDERING_PIPELINE::VERTEX_LIT{static_cast<uint32_t>(0x50403u)};
constexpr ::LIV::SDK::Unity::RENDERING_PIPELINE  LIV::SDK::Unity::RENDERING_PIPELINE::UNIVERSAL{static_cast<uint32_t>(0x2000504u)};
constexpr ::LIV::SDK::Unity::RENDERING_PIPELINE  LIV::SDK::Unity::RENDERING_PIPELINE::HIGH_DEFINITION{static_cast<uint32_t>(0x20005u)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
