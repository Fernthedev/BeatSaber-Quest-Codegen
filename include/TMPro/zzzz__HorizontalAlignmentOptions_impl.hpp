#pragma once
#include "TMPro/zzzz__HorizontalAlignmentOptions_def.hpp"
constexpr void TMPro::HorizontalAlignmentOptions::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& TMPro::HorizontalAlignmentOptions::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& TMPro::HorizontalAlignmentOptions::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::HorizontalAlignmentOptions::HorizontalAlignmentOptions(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::TMPro::HorizontalAlignmentOptions  TMPro::HorizontalAlignmentOptions::Left{static_cast<int32_t>(0x1)};
constexpr ::TMPro::HorizontalAlignmentOptions  TMPro::HorizontalAlignmentOptions::Center{static_cast<int32_t>(0x2)};
constexpr ::TMPro::HorizontalAlignmentOptions  TMPro::HorizontalAlignmentOptions::Right{static_cast<int32_t>(0x4)};
constexpr ::TMPro::HorizontalAlignmentOptions  TMPro::HorizontalAlignmentOptions::Justified{static_cast<int32_t>(0x8)};
constexpr ::TMPro::HorizontalAlignmentOptions  TMPro::HorizontalAlignmentOptions::Flush{static_cast<int32_t>(0x10)};
constexpr ::TMPro::HorizontalAlignmentOptions  TMPro::HorizontalAlignmentOptions::Geometry{static_cast<int32_t>(0x20)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
