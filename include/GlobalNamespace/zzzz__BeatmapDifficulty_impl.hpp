#pragma once
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
constexpr void GlobalNamespace::BeatmapDifficulty::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::BeatmapDifficulty::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::BeatmapDifficulty::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BeatmapDifficulty::BeatmapDifficulty(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::BeatmapDifficulty  GlobalNamespace::BeatmapDifficulty::Easy{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::BeatmapDifficulty  GlobalNamespace::BeatmapDifficulty::Normal{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::BeatmapDifficulty  GlobalNamespace::BeatmapDifficulty::Hard{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::BeatmapDifficulty  GlobalNamespace::BeatmapDifficulty::Expert{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::BeatmapDifficulty  GlobalNamespace::BeatmapDifficulty::ExpertPlus{static_cast<int32_t>(0x4)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
