#pragma once
#include "GlobalNamespace/zzzz__SongPackDataType_def.hpp"
constexpr void GlobalNamespace::SongPackDataType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::SongPackDataType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::SongPackDataType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::SongPackDataType::SongPackDataType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::SongPackDataType  GlobalNamespace::SongPackDataType::SingleBeatmapLevelPack{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::SongPackDataType  GlobalNamespace::SongPackDataType::MultipleBeatmapLevelPacks{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::SongPackDataType  GlobalNamespace::SongPackDataType::SinglePreviewBeatmapLevelPack{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::SongPackDataType  GlobalNamespace::SongPackDataType::MultiplePreviewBeatmapLevelPacks{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::SongPackDataType  GlobalNamespace::SongPackDataType::SingleBeatmapLevelPackCollection{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::SongPackDataType  GlobalNamespace::SongPackDataType::MultipleBeatmapLevelPackCollections{static_cast<int32_t>(0x5)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
