#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextFontWeight)
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct TextFontWeight;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::Text::TextFontWeight);
// Type: UnityEngine.TextCore.Text::TextFontWeight
namespace UnityEngine::TextCore::Text {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13677))
// CS Name: ::UnityEngine.TextCore.Text::TextFontWeight
struct CORDL_TYPE TextFontWeight : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TextFontWeight_Unwrapped
enum struct __TextFontWeight_Unwrapped : int32_t {
__E_Thin = static_cast<int32_t>(0x64),
__E_ExtraLight = static_cast<int32_t>(0xc8),
__E_Light = static_cast<int32_t>(0x12c),
__E_Regular = static_cast<int32_t>(0x190),
__E_Medium = static_cast<int32_t>(0x1f4),
__E_SemiBold = static_cast<int32_t>(0x258),
__E_Bold = static_cast<int32_t>(0x2bc),
__E_Heavy = static_cast<int32_t>(0x320),
__E_Black = static_cast<int32_t>(0x384),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Thin value: static_cast<int32_t>(0x64)
static ::UnityEngine::TextCore::Text::TextFontWeight const Thin;

/// @brief Field ExtraLight value: static_cast<int32_t>(0xc8)
static ::UnityEngine::TextCore::Text::TextFontWeight const ExtraLight;

/// @brief Field Light value: static_cast<int32_t>(0x12c)
static ::UnityEngine::TextCore::Text::TextFontWeight const Light;

/// @brief Field Regular value: static_cast<int32_t>(0x190)
static ::UnityEngine::TextCore::Text::TextFontWeight const Regular;

/// @brief Field Medium value: static_cast<int32_t>(0x1f4)
static ::UnityEngine::TextCore::Text::TextFontWeight const Medium;

/// @brief Field SemiBold value: static_cast<int32_t>(0x258)
static ::UnityEngine::TextCore::Text::TextFontWeight const SemiBold;

/// @brief Field Bold value: static_cast<int32_t>(0x2bc)
static ::UnityEngine::TextCore::Text::TextFontWeight const Bold;

/// @brief Field Heavy value: static_cast<int32_t>(0x320)
static ::UnityEngine::TextCore::Text::TextFontWeight const Heavy;

/// @brief Field Black value: static_cast<int32_t>(0x384)
static ::UnityEngine::TextCore::Text::TextFontWeight const Black;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __TextFontWeight_Unwrapped () const noexcept {
return std::bit_cast<__TextFontWeight_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TextFontWeight(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TextFontWeight(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TextFontWeight()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::TextFontWeight, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::TextFontWeight, "UnityEngine.TextCore.Text", "TextFontWeight");
