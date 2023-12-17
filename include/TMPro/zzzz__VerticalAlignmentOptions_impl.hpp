#pragma once
#include "TMPro/zzzz__VerticalAlignmentOptions_def.hpp"
constexpr void TMPro::VerticalAlignmentOptions::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& TMPro::VerticalAlignmentOptions::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& TMPro::VerticalAlignmentOptions::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::VerticalAlignmentOptions::VerticalAlignmentOptions(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::TMPro::VerticalAlignmentOptions  TMPro::VerticalAlignmentOptions::Top{static_cast<int32_t>(0x100)};
constexpr ::TMPro::VerticalAlignmentOptions  TMPro::VerticalAlignmentOptions::Middle{static_cast<int32_t>(0x200)};
constexpr ::TMPro::VerticalAlignmentOptions  TMPro::VerticalAlignmentOptions::Bottom{static_cast<int32_t>(0x400)};
constexpr ::TMPro::VerticalAlignmentOptions  TMPro::VerticalAlignmentOptions::Baseline{static_cast<int32_t>(0x800)};
constexpr ::TMPro::VerticalAlignmentOptions  TMPro::VerticalAlignmentOptions::Geometry{static_cast<int32_t>(0x1000)};
constexpr ::TMPro::VerticalAlignmentOptions  TMPro::VerticalAlignmentOptions::Capline{static_cast<int32_t>(0x2000)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
