#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ClipCaps)
// Forward declare root types
namespace UnityEngine::Timeline {
struct ClipCaps;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Timeline::ClipCaps);
// Type: UnityEngine.Timeline::ClipCaps
namespace UnityEngine::Timeline {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13871))
// CS Name: ::UnityEngine.Timeline::ClipCaps
struct CORDL_TYPE ClipCaps : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ClipCaps_Unwrapped
enum struct __ClipCaps_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Looping = static_cast<int32_t>(0x1),
__E_Extrapolation = static_cast<int32_t>(0x2),
__E_ClipIn = static_cast<int32_t>(0x4),
__E_SpeedMultiplier = static_cast<int32_t>(0x8),
__E_Blending = static_cast<int32_t>(0x10),
__E_AutoScale = static_cast<int32_t>(0x28),
__E_All = static_cast<int32_t>(0xffffffff),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::UnityEngine::Timeline::ClipCaps const None;

/// @brief Field Looping value: static_cast<int32_t>(0x1)
static ::UnityEngine::Timeline::ClipCaps const Looping;

/// @brief Field Extrapolation value: static_cast<int32_t>(0x2)
static ::UnityEngine::Timeline::ClipCaps const Extrapolation;

/// @brief Field ClipIn value: static_cast<int32_t>(0x4)
static ::UnityEngine::Timeline::ClipCaps const ClipIn;

/// @brief Field SpeedMultiplier value: static_cast<int32_t>(0x8)
static ::UnityEngine::Timeline::ClipCaps const SpeedMultiplier;

/// @brief Field Blending value: static_cast<int32_t>(0x10)
static ::UnityEngine::Timeline::ClipCaps const Blending;

/// @brief Field AutoScale value: static_cast<int32_t>(0x28)
static ::UnityEngine::Timeline::ClipCaps const AutoScale;

/// @brief Field All value: static_cast<int32_t>(0xffffffff)
static ::UnityEngine::Timeline::ClipCaps const All;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __ClipCaps_Unwrapped () const noexcept {
return std::bit_cast<__ClipCaps_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ClipCaps(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ClipCaps(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ClipCaps()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::ClipCaps, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::Timeline
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::ClipCaps, "UnityEngine.Timeline", "ClipCaps");
