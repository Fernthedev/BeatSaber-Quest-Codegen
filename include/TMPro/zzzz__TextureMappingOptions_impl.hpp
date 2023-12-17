#pragma once
#include "TMPro/zzzz__TextureMappingOptions_def.hpp"
constexpr void TMPro::TextureMappingOptions::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& TMPro::TextureMappingOptions::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& TMPro::TextureMappingOptions::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::TextureMappingOptions::TextureMappingOptions(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::TMPro::TextureMappingOptions  TMPro::TextureMappingOptions::Character{static_cast<int32_t>(0x0)};
constexpr ::TMPro::TextureMappingOptions  TMPro::TextureMappingOptions::Line{static_cast<int32_t>(0x1)};
constexpr ::TMPro::TextureMappingOptions  TMPro::TextureMappingOptions::Paragraph{static_cast<int32_t>(0x2)};
constexpr ::TMPro::TextureMappingOptions  TMPro::TextureMappingOptions::MatchAspect{static_cast<int32_t>(0x3)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
