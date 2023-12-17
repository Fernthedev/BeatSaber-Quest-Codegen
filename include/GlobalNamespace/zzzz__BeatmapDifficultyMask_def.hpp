#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapDifficultyMask)
// Forward declare root types
namespace GlobalNamespace {
struct BeatmapDifficultyMask;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BeatmapDifficultyMask);
// Type: ::BeatmapDifficultyMask
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14719))
// CS Name: ::BeatmapDifficultyMask
struct CORDL_TYPE BeatmapDifficultyMask : public ::bs_hook::EnumTypeWrapper<0x1> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __BeatmapDifficultyMask_Unwrapped
enum struct __BeatmapDifficultyMask_Unwrapped : uint8_t {
__E_Easy = static_cast<uint8_t>(0x1u),
__E_Normal = static_cast<uint8_t>(0x2u),
__E_Hard = static_cast<uint8_t>(0x4u),
__E_Expert = static_cast<uint8_t>(0x8u),
__E_ExpertPlus = static_cast<uint8_t>(0x10u),
__E_All = static_cast<uint8_t>(0x1fu),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field Easy value: static_cast<uint8_t>(0x1u)
static ::GlobalNamespace::BeatmapDifficultyMask const Easy;

/// @brief Field Normal value: static_cast<uint8_t>(0x2u)
static ::GlobalNamespace::BeatmapDifficultyMask const Normal;

/// @brief Field Hard value: static_cast<uint8_t>(0x4u)
static ::GlobalNamespace::BeatmapDifficultyMask const Hard;

/// @brief Field Expert value: static_cast<uint8_t>(0x8u)
static ::GlobalNamespace::BeatmapDifficultyMask const Expert;

/// @brief Field ExpertPlus value: static_cast<uint8_t>(0x10u)
static ::GlobalNamespace::BeatmapDifficultyMask const ExpertPlus;

/// @brief Field All value: static_cast<uint8_t>(0x1fu)
static ::GlobalNamespace::BeatmapDifficultyMask const All;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) uint8_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __BeatmapDifficultyMask_Unwrapped () const noexcept {
return std::bit_cast<__BeatmapDifficultyMask_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x1>::instance);
}

constexpr void __set_value__(uint8_t  value) ;

constexpr uint8_t& __get_value__() ;

constexpr uint8_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr BeatmapDifficultyMask(uint8_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit BeatmapDifficultyMask(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 BeatmapDifficultyMask()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapDifficultyMask, 0x1>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDifficultyMask, "", "BeatmapDifficultyMask");
