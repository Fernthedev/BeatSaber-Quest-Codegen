#pragma once
#include "TMPro/zzzz__TextOverflowModes_def.hpp"
constexpr void TMPro::TextOverflowModes::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& TMPro::TextOverflowModes::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& TMPro::TextOverflowModes::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::TextOverflowModes::TextOverflowModes(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::TMPro::TextOverflowModes  TMPro::TextOverflowModes::Overflow{static_cast<int32_t>(0x0)};
constexpr ::TMPro::TextOverflowModes  TMPro::TextOverflowModes::Ellipsis{static_cast<int32_t>(0x1)};
constexpr ::TMPro::TextOverflowModes  TMPro::TextOverflowModes::Masking{static_cast<int32_t>(0x2)};
constexpr ::TMPro::TextOverflowModes  TMPro::TextOverflowModes::Truncate{static_cast<int32_t>(0x3)};
constexpr ::TMPro::TextOverflowModes  TMPro::TextOverflowModes::ScrollRect{static_cast<int32_t>(0x4)};
constexpr ::TMPro::TextOverflowModes  TMPro::TextOverflowModes::Page{static_cast<int32_t>(0x5)};
constexpr ::TMPro::TextOverflowModes  TMPro::TextOverflowModes::Linked{static_cast<int32_t>(0x6)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
