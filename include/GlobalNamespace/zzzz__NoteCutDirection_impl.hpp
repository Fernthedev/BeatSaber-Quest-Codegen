#pragma once
#include "GlobalNamespace/zzzz__NoteCutDirection_def.hpp"
constexpr void GlobalNamespace::NoteCutDirection::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::NoteCutDirection::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::NoteCutDirection::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::NoteCutDirection::NoteCutDirection(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::NoteCutDirection  GlobalNamespace::NoteCutDirection::Up{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::NoteCutDirection  GlobalNamespace::NoteCutDirection::Down{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::NoteCutDirection  GlobalNamespace::NoteCutDirection::Left{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::NoteCutDirection  GlobalNamespace::NoteCutDirection::Right{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::NoteCutDirection  GlobalNamespace::NoteCutDirection::UpLeft{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::NoteCutDirection  GlobalNamespace::NoteCutDirection::UpRight{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::NoteCutDirection  GlobalNamespace::NoteCutDirection::DownLeft{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::NoteCutDirection  GlobalNamespace::NoteCutDirection::DownRight{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::NoteCutDirection  GlobalNamespace::NoteCutDirection::Any{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::NoteCutDirection  GlobalNamespace::NoteCutDirection::None{static_cast<int32_t>(0x9)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
