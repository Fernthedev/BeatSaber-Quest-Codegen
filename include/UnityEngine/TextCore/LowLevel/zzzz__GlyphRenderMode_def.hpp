#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GlyphRenderMode)
// Forward declare root types
namespace UnityEngine::TextCore::LowLevel {
struct GlyphRenderMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::LowLevel::GlyphRenderMode);
// Type: UnityEngine.TextCore.LowLevel::GlyphRenderMode
namespace UnityEngine::TextCore::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15534))
// CS Name: ::UnityEngine.TextCore.LowLevel::GlyphRenderMode
struct CORDL_TYPE GlyphRenderMode : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GlyphRenderMode_Unwrapped
enum struct __GlyphRenderMode_Unwrapped : int32_t {
__E_SMOOTH_HINTED = static_cast<int32_t>(0x1019),
__E_SMOOTH = static_cast<int32_t>(0x1015),
__E_COLOR_HINTED = static_cast<int32_t>(0x11018),
__E_COLOR = static_cast<int32_t>(0x11014),
__E_RASTER_HINTED = static_cast<int32_t>(0x101a),
__E_RASTER = static_cast<int32_t>(0x1016),
__E_SDF = static_cast<int32_t>(0x1026),
__E_SDF8 = static_cast<int32_t>(0x2026),
__E_SDF16 = static_cast<int32_t>(0x4026),
__E_SDF32 = static_cast<int32_t>(0x8026),
__E_SDFAA_HINTED = static_cast<int32_t>(0x1049),
__E_SDFAA = static_cast<int32_t>(0x1045),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field SMOOTH_HINTED value: static_cast<int32_t>(0x1019)
static ::UnityEngine::TextCore::LowLevel::GlyphRenderMode const SMOOTH_HINTED;

/// @brief Field SMOOTH value: static_cast<int32_t>(0x1015)
static ::UnityEngine::TextCore::LowLevel::GlyphRenderMode const SMOOTH;

/// @brief Field COLOR_HINTED value: static_cast<int32_t>(0x11018)
static ::UnityEngine::TextCore::LowLevel::GlyphRenderMode const COLOR_HINTED;

/// @brief Field COLOR value: static_cast<int32_t>(0x11014)
static ::UnityEngine::TextCore::LowLevel::GlyphRenderMode const COLOR;

/// @brief Field RASTER_HINTED value: static_cast<int32_t>(0x101a)
static ::UnityEngine::TextCore::LowLevel::GlyphRenderMode const RASTER_HINTED;

/// @brief Field RASTER value: static_cast<int32_t>(0x1016)
static ::UnityEngine::TextCore::LowLevel::GlyphRenderMode const RASTER;

/// @brief Field SDF value: static_cast<int32_t>(0x1026)
static ::UnityEngine::TextCore::LowLevel::GlyphRenderMode const SDF;

/// @brief Field SDF8 value: static_cast<int32_t>(0x2026)
static ::UnityEngine::TextCore::LowLevel::GlyphRenderMode const SDF8;

/// @brief Field SDF16 value: static_cast<int32_t>(0x4026)
static ::UnityEngine::TextCore::LowLevel::GlyphRenderMode const SDF16;

/// @brief Field SDF32 value: static_cast<int32_t>(0x8026)
static ::UnityEngine::TextCore::LowLevel::GlyphRenderMode const SDF32;

/// @brief Field SDFAA_HINTED value: static_cast<int32_t>(0x1049)
static ::UnityEngine::TextCore::LowLevel::GlyphRenderMode const SDFAA_HINTED;

/// @brief Field SDFAA value: static_cast<int32_t>(0x1045)
static ::UnityEngine::TextCore::LowLevel::GlyphRenderMode const SDFAA;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __GlyphRenderMode_Unwrapped () const noexcept {
return std::bit_cast<__GlyphRenderMode_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlyphRenderMode(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit GlyphRenderMode(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 GlyphRenderMode()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::LowLevel::GlyphRenderMode, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::TextCore::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::LowLevel::GlyphRenderMode, "UnityEngine.TextCore.LowLevel", "GlyphRenderMode");
