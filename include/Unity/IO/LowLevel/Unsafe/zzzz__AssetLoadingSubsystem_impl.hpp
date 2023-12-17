#pragma once
#include "Unity/IO/LowLevel/Unsafe/zzzz__AssetLoadingSubsystem_def.hpp"
constexpr void Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem::AssetLoadingSubsystem(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem  Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem::Other{static_cast<int32_t>(0x0)};
constexpr ::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem  Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem::Texture{static_cast<int32_t>(0x1)};
constexpr ::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem  Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem::VirtualTexture{static_cast<int32_t>(0x2)};
constexpr ::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem  Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem::Mesh{static_cast<int32_t>(0x3)};
constexpr ::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem  Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem::Audio{static_cast<int32_t>(0x4)};
constexpr ::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem  Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem::Scripts{static_cast<int32_t>(0x5)};
constexpr ::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem  Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem::EntitiesScene{static_cast<int32_t>(0x6)};
constexpr ::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem  Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem::EntitiesStreamBinaryReader{static_cast<int32_t>(0x7)};
constexpr ::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem  Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem::FileInfo{static_cast<int32_t>(0x8)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
