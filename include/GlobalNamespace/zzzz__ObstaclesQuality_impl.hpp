#pragma once
#include "GlobalNamespace/zzzz__ObstaclesQuality_def.hpp"
constexpr void GlobalNamespace::ObstaclesQuality::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::ObstaclesQuality::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::ObstaclesQuality::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::ObstaclesQuality::ObstaclesQuality(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::ObstaclesQuality  GlobalNamespace::ObstaclesQuality::DefaultObstacleQualityBaseOnDisplacement{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::ObstaclesQuality  GlobalNamespace::ObstaclesQuality::TexturedObstacle{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::ObstaclesQuality  GlobalNamespace::ObstaclesQuality::ObstacleLW{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::ObstaclesQuality  GlobalNamespace::ObstaclesQuality::ObstacleHW{static_cast<int32_t>(0x3)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
