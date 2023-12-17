#pragma once
#include "TMPro/zzzz__TextContainerAnchors_def.hpp"
constexpr void TMPro::TextContainerAnchors::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& TMPro::TextContainerAnchors::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& TMPro::TextContainerAnchors::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::TextContainerAnchors::TextContainerAnchors(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::TMPro::TextContainerAnchors  TMPro::TextContainerAnchors::TopLeft{static_cast<int32_t>(0x0)};
constexpr ::TMPro::TextContainerAnchors  TMPro::TextContainerAnchors::Top{static_cast<int32_t>(0x1)};
constexpr ::TMPro::TextContainerAnchors  TMPro::TextContainerAnchors::TopRight{static_cast<int32_t>(0x2)};
constexpr ::TMPro::TextContainerAnchors  TMPro::TextContainerAnchors::Left{static_cast<int32_t>(0x3)};
constexpr ::TMPro::TextContainerAnchors  TMPro::TextContainerAnchors::Middle{static_cast<int32_t>(0x4)};
constexpr ::TMPro::TextContainerAnchors  TMPro::TextContainerAnchors::Right{static_cast<int32_t>(0x5)};
constexpr ::TMPro::TextContainerAnchors  TMPro::TextContainerAnchors::BottomLeft{static_cast<int32_t>(0x6)};
constexpr ::TMPro::TextContainerAnchors  TMPro::TextContainerAnchors::Bottom{static_cast<int32_t>(0x7)};
constexpr ::TMPro::TextContainerAnchors  TMPro::TextContainerAnchors::BottomRight{static_cast<int32_t>(0x8)};
constexpr ::TMPro::TextContainerAnchors  TMPro::TextContainerAnchors::Custom{static_cast<int32_t>(0x9)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
