#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextOverflowMode)
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct TextOverflowMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::Text::TextOverflowMode);
// Type: UnityEngine.TextCore.Text::TextOverflowMode
namespace UnityEngine::TextCore::Text {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13687))
// CS Name: ::UnityEngine.TextCore.Text::TextOverflowMode
struct CORDL_TYPE TextOverflowMode : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TextOverflowMode_Unwrapped
enum struct __TextOverflowMode_Unwrapped : int32_t {
__E_Overflow = static_cast<int32_t>(0x0),
__E_Ellipsis = static_cast<int32_t>(0x1),
__E_Masking = static_cast<int32_t>(0x2),
__E_Truncate = static_cast<int32_t>(0x3),
__E_ScrollRect = static_cast<int32_t>(0x4),
__E_Page = static_cast<int32_t>(0x5),
__E_Linked = static_cast<int32_t>(0x6),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Overflow value: static_cast<int32_t>(0x0)
static ::UnityEngine::TextCore::Text::TextOverflowMode const Overflow;

/// @brief Field Ellipsis value: static_cast<int32_t>(0x1)
static ::UnityEngine::TextCore::Text::TextOverflowMode const Ellipsis;

/// @brief Field Masking value: static_cast<int32_t>(0x2)
static ::UnityEngine::TextCore::Text::TextOverflowMode const Masking;

/// @brief Field Truncate value: static_cast<int32_t>(0x3)
static ::UnityEngine::TextCore::Text::TextOverflowMode const Truncate;

/// @brief Field ScrollRect value: static_cast<int32_t>(0x4)
static ::UnityEngine::TextCore::Text::TextOverflowMode const ScrollRect;

/// @brief Field Page value: static_cast<int32_t>(0x5)
static ::UnityEngine::TextCore::Text::TextOverflowMode const Page;

/// @brief Field Linked value: static_cast<int32_t>(0x6)
static ::UnityEngine::TextCore::Text::TextOverflowMode const Linked;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __TextOverflowMode_Unwrapped () const noexcept {
return std::bit_cast<__TextOverflowMode_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TextOverflowMode(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TextOverflowMode(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TextOverflowMode()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::TextOverflowMode, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::TextOverflowMode, "UnityEngine.TextCore.Text", "TextOverflowMode");
