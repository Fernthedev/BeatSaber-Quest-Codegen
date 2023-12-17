#pragma once
#include "TMPro/zzzz__TMP_VertexDataUpdateFlags_def.hpp"
constexpr void TMPro::TMP_VertexDataUpdateFlags::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& TMPro::TMP_VertexDataUpdateFlags::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& TMPro::TMP_VertexDataUpdateFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::TMP_VertexDataUpdateFlags::TMP_VertexDataUpdateFlags(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::TMPro::TMP_VertexDataUpdateFlags  TMPro::TMP_VertexDataUpdateFlags::None{static_cast<int32_t>(0x0)};
constexpr ::TMPro::TMP_VertexDataUpdateFlags  TMPro::TMP_VertexDataUpdateFlags::Vertices{static_cast<int32_t>(0x1)};
constexpr ::TMPro::TMP_VertexDataUpdateFlags  TMPro::TMP_VertexDataUpdateFlags::Uv0{static_cast<int32_t>(0x2)};
constexpr ::TMPro::TMP_VertexDataUpdateFlags  TMPro::TMP_VertexDataUpdateFlags::Uv2{static_cast<int32_t>(0x4)};
constexpr ::TMPro::TMP_VertexDataUpdateFlags  TMPro::TMP_VertexDataUpdateFlags::Uv4{static_cast<int32_t>(0x8)};
constexpr ::TMPro::TMP_VertexDataUpdateFlags  TMPro::TMP_VertexDataUpdateFlags::Colors32{static_cast<int32_t>(0x10)};
constexpr ::TMPro::TMP_VertexDataUpdateFlags  TMPro::TMP_VertexDataUpdateFlags::All{static_cast<int32_t>(0xff)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
