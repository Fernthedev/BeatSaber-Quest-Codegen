#pragma once
#include "GlobalNamespace/zzzz__GameplayModifierMask_def.hpp"
constexpr void GlobalNamespace::GameplayModifierMask::__set_value__(uint16_t  value)  {
::cordl_internals::setInstanceField<uint16_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint16_t>(value));
}
constexpr uint16_t& GlobalNamespace::GameplayModifierMask::__get_value__()  {
return ::cordl_internals::getInstanceField<uint16_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint16_t const& GlobalNamespace::GameplayModifierMask::__get_value__() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "uint16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::GameplayModifierMask::GameplayModifierMask(uint16_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x2>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::GameplayModifierMask  GlobalNamespace::GameplayModifierMask::None{static_cast<uint16_t>(0x0u)};
constexpr ::GlobalNamespace::GameplayModifierMask  GlobalNamespace::GameplayModifierMask::BatteryEnergy{static_cast<uint16_t>(0x1u)};
constexpr ::GlobalNamespace::GameplayModifierMask  GlobalNamespace::GameplayModifierMask::NoFail{static_cast<uint16_t>(0x2u)};
constexpr ::GlobalNamespace::GameplayModifierMask  GlobalNamespace::GameplayModifierMask::InstaFail{static_cast<uint16_t>(0x4u)};
constexpr ::GlobalNamespace::GameplayModifierMask  GlobalNamespace::GameplayModifierMask::NoObstacles{static_cast<uint16_t>(0x8u)};
constexpr ::GlobalNamespace::GameplayModifierMask  GlobalNamespace::GameplayModifierMask::NoBombs{static_cast<uint16_t>(0x10u)};
constexpr ::GlobalNamespace::GameplayModifierMask  GlobalNamespace::GameplayModifierMask::FastNotes{static_cast<uint16_t>(0x20u)};
constexpr ::GlobalNamespace::GameplayModifierMask  GlobalNamespace::GameplayModifierMask::StrictAngles{static_cast<uint16_t>(0x40u)};
constexpr ::GlobalNamespace::GameplayModifierMask  GlobalNamespace::GameplayModifierMask::DisappearingArrows{static_cast<uint16_t>(0x80u)};
constexpr ::GlobalNamespace::GameplayModifierMask  GlobalNamespace::GameplayModifierMask::FasterSong{static_cast<uint16_t>(0x100u)};
constexpr ::GlobalNamespace::GameplayModifierMask  GlobalNamespace::GameplayModifierMask::SlowerSong{static_cast<uint16_t>(0x200u)};
constexpr ::GlobalNamespace::GameplayModifierMask  GlobalNamespace::GameplayModifierMask::NoArrows{static_cast<uint16_t>(0x400u)};
constexpr ::GlobalNamespace::GameplayModifierMask  GlobalNamespace::GameplayModifierMask::GhostNotes{static_cast<uint16_t>(0x800u)};
constexpr ::GlobalNamespace::GameplayModifierMask  GlobalNamespace::GameplayModifierMask::SuperFastSong{static_cast<uint16_t>(0x1000u)};
constexpr ::GlobalNamespace::GameplayModifierMask  GlobalNamespace::GameplayModifierMask::ProMode{static_cast<uint16_t>(0x2000u)};
constexpr ::GlobalNamespace::GameplayModifierMask  GlobalNamespace::GameplayModifierMask::ZenMode{static_cast<uint16_t>(0x4000u)};
constexpr ::GlobalNamespace::GameplayModifierMask  GlobalNamespace::GameplayModifierMask::SmallCubes{static_cast<uint16_t>(0x8000u)};
constexpr ::GlobalNamespace::GameplayModifierMask  GlobalNamespace::GameplayModifierMask::All{static_cast<uint16_t>(0xffffu)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
