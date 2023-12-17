#pragma once
#include "GlobalNamespace/zzzz__EnvironmentEffectsFilterPreset_def.hpp"
constexpr void GlobalNamespace::EnvironmentEffectsFilterPreset::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::EnvironmentEffectsFilterPreset::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::EnvironmentEffectsFilterPreset::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::EnvironmentEffectsFilterPreset::EnvironmentEffectsFilterPreset(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::EnvironmentEffectsFilterPreset  GlobalNamespace::EnvironmentEffectsFilterPreset::AllEffects{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::EnvironmentEffectsFilterPreset  GlobalNamespace::EnvironmentEffectsFilterPreset::StrobeFilter{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::EnvironmentEffectsFilterPreset  GlobalNamespace::EnvironmentEffectsFilterPreset::NoEffects{static_cast<int32_t>(0xa)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
