#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameplayModifierMask)
// Forward declare root types
namespace GlobalNamespace {
struct GameplayModifierMask;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GameplayModifierMask);
// Type: ::GameplayModifierMask
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14997))
// CS Name: ::GameplayModifierMask
struct CORDL_TYPE GameplayModifierMask : public ::bs_hook::EnumTypeWrapper<0x2> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint16_t;

/// @brief Nested struct __GameplayModifierMask_Unwrapped
enum struct __GameplayModifierMask_Unwrapped : uint16_t {
__E_None = static_cast<uint16_t>(0x0u),
__E_BatteryEnergy = static_cast<uint16_t>(0x1u),
__E_NoFail = static_cast<uint16_t>(0x2u),
__E_InstaFail = static_cast<uint16_t>(0x4u),
__E_NoObstacles = static_cast<uint16_t>(0x8u),
__E_NoBombs = static_cast<uint16_t>(0x10u),
__E_FastNotes = static_cast<uint16_t>(0x20u),
__E_StrictAngles = static_cast<uint16_t>(0x40u),
__E_DisappearingArrows = static_cast<uint16_t>(0x80u),
__E_FasterSong = static_cast<uint16_t>(0x100u),
__E_SlowerSong = static_cast<uint16_t>(0x200u),
__E_NoArrows = static_cast<uint16_t>(0x400u),
__E_GhostNotes = static_cast<uint16_t>(0x800u),
__E_SuperFastSong = static_cast<uint16_t>(0x1000u),
__E_ProMode = static_cast<uint16_t>(0x2000u),
__E_ZenMode = static_cast<uint16_t>(0x4000u),
__E_SmallCubes = static_cast<uint16_t>(0x8000u),
__E_All = static_cast<uint16_t>(0xffffu),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2};

/// @brief Field None value: static_cast<uint16_t>(0x0u)
static ::GlobalNamespace::GameplayModifierMask const None;

/// @brief Field BatteryEnergy value: static_cast<uint16_t>(0x1u)
static ::GlobalNamespace::GameplayModifierMask const BatteryEnergy;

/// @brief Field NoFail value: static_cast<uint16_t>(0x2u)
static ::GlobalNamespace::GameplayModifierMask const NoFail;

/// @brief Field InstaFail value: static_cast<uint16_t>(0x4u)
static ::GlobalNamespace::GameplayModifierMask const InstaFail;

/// @brief Field NoObstacles value: static_cast<uint16_t>(0x8u)
static ::GlobalNamespace::GameplayModifierMask const NoObstacles;

/// @brief Field NoBombs value: static_cast<uint16_t>(0x10u)
static ::GlobalNamespace::GameplayModifierMask const NoBombs;

/// @brief Field FastNotes value: static_cast<uint16_t>(0x20u)
static ::GlobalNamespace::GameplayModifierMask const FastNotes;

/// @brief Field StrictAngles value: static_cast<uint16_t>(0x40u)
static ::GlobalNamespace::GameplayModifierMask const StrictAngles;

/// @brief Field DisappearingArrows value: static_cast<uint16_t>(0x80u)
static ::GlobalNamespace::GameplayModifierMask const DisappearingArrows;

/// @brief Field FasterSong value: static_cast<uint16_t>(0x100u)
static ::GlobalNamespace::GameplayModifierMask const FasterSong;

/// @brief Field SlowerSong value: static_cast<uint16_t>(0x200u)
static ::GlobalNamespace::GameplayModifierMask const SlowerSong;

/// @brief Field NoArrows value: static_cast<uint16_t>(0x400u)
static ::GlobalNamespace::GameplayModifierMask const NoArrows;

/// @brief Field GhostNotes value: static_cast<uint16_t>(0x800u)
static ::GlobalNamespace::GameplayModifierMask const GhostNotes;

/// @brief Field SuperFastSong value: static_cast<uint16_t>(0x1000u)
static ::GlobalNamespace::GameplayModifierMask const SuperFastSong;

/// @brief Field ProMode value: static_cast<uint16_t>(0x2000u)
static ::GlobalNamespace::GameplayModifierMask const ProMode;

/// @brief Field ZenMode value: static_cast<uint16_t>(0x4000u)
static ::GlobalNamespace::GameplayModifierMask const ZenMode;

/// @brief Field SmallCubes value: static_cast<uint16_t>(0x8000u)
static ::GlobalNamespace::GameplayModifierMask const SmallCubes;

/// @brief Field All value: static_cast<uint16_t>(0xffffu)
static ::GlobalNamespace::GameplayModifierMask const All;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) uint16_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __GameplayModifierMask_Unwrapped () const noexcept {
return std::bit_cast<__GameplayModifierMask_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x2>::instance);
}

constexpr void __set_value__(uint16_t  value) ;

constexpr uint16_t& __get_value__() ;

constexpr uint16_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "uint16_t", modifiers: "", def_value: None }]
constexpr GameplayModifierMask(uint16_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit GameplayModifierMask(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x2>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 GameplayModifierMask()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayModifierMask, 0x2>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayModifierMask, "", "GameplayModifierMask");
