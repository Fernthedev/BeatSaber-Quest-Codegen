#pragma once
#include "UnityEngine/Tilemaps/zzzz__TileFlags_def.hpp"
constexpr void UnityEngine::Tilemaps::TileFlags::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::Tilemaps::TileFlags::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::Tilemaps::TileFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Tilemaps::TileFlags::TileFlags(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::Tilemaps::TileFlags  UnityEngine::Tilemaps::TileFlags::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Tilemaps::TileFlags  UnityEngine::Tilemaps::TileFlags::LockColor{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Tilemaps::TileFlags  UnityEngine::Tilemaps::TileFlags::LockTransform{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Tilemaps::TileFlags  UnityEngine::Tilemaps::TileFlags::InstantiateGameObjectRuntimeOnly{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::Tilemaps::TileFlags  UnityEngine::Tilemaps::TileFlags::KeepGameObjectRuntimeOnly{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::Tilemaps::TileFlags  UnityEngine::Tilemaps::TileFlags::LockAll{static_cast<int32_t>(0x3)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
