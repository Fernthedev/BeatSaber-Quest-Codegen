#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GlyphPackingMode)
// Forward declare root types
namespace UnityEngine::TextCore::LowLevel {
struct GlyphPackingMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::LowLevel::GlyphPackingMode);
// Type: UnityEngine.TextCore.LowLevel::GlyphPackingMode
namespace UnityEngine::TextCore::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15535))
// CS Name: ::UnityEngine.TextCore.LowLevel::GlyphPackingMode
struct CORDL_TYPE GlyphPackingMode : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GlyphPackingMode_Unwrapped
enum struct __GlyphPackingMode_Unwrapped : int32_t {
__E_BestShortSideFit = static_cast<int32_t>(0x0),
__E_BestLongSideFit = static_cast<int32_t>(0x1),
__E_BestAreaFit = static_cast<int32_t>(0x2),
__E_BottomLeftRule = static_cast<int32_t>(0x3),
__E_ContactPointRule = static_cast<int32_t>(0x4),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field BestShortSideFit value: static_cast<int32_t>(0x0)
static ::UnityEngine::TextCore::LowLevel::GlyphPackingMode const BestShortSideFit;

/// @brief Field BestLongSideFit value: static_cast<int32_t>(0x1)
static ::UnityEngine::TextCore::LowLevel::GlyphPackingMode const BestLongSideFit;

/// @brief Field BestAreaFit value: static_cast<int32_t>(0x2)
static ::UnityEngine::TextCore::LowLevel::GlyphPackingMode const BestAreaFit;

/// @brief Field BottomLeftRule value: static_cast<int32_t>(0x3)
static ::UnityEngine::TextCore::LowLevel::GlyphPackingMode const BottomLeftRule;

/// @brief Field ContactPointRule value: static_cast<int32_t>(0x4)
static ::UnityEngine::TextCore::LowLevel::GlyphPackingMode const ContactPointRule;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __GlyphPackingMode_Unwrapped () const noexcept {
return std::bit_cast<__GlyphPackingMode_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlyphPackingMode(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit GlyphPackingMode(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 GlyphPackingMode()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::LowLevel::GlyphPackingMode, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::TextCore::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::LowLevel::GlyphPackingMode, "UnityEngine.TextCore.LowLevel", "GlyphPackingMode");
