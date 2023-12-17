#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextOverflowModes)
// Forward declare root types
namespace TMPro {
struct TextOverflowModes;
}
// Write type traits
MARK_VAL_T(::TMPro::TextOverflowModes);
// Type: TMPro::TextOverflowModes
namespace TMPro {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12435))
// CS Name: ::TMPro::TextOverflowModes
struct CORDL_TYPE TextOverflowModes : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TextOverflowModes_Unwrapped
enum struct __TextOverflowModes_Unwrapped : int32_t {
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
static ::TMPro::TextOverflowModes const Overflow;

/// @brief Field Ellipsis value: static_cast<int32_t>(0x1)
static ::TMPro::TextOverflowModes const Ellipsis;

/// @brief Field Masking value: static_cast<int32_t>(0x2)
static ::TMPro::TextOverflowModes const Masking;

/// @brief Field Truncate value: static_cast<int32_t>(0x3)
static ::TMPro::TextOverflowModes const Truncate;

/// @brief Field ScrollRect value: static_cast<int32_t>(0x4)
static ::TMPro::TextOverflowModes const ScrollRect;

/// @brief Field Page value: static_cast<int32_t>(0x5)
static ::TMPro::TextOverflowModes const Page;

/// @brief Field Linked value: static_cast<int32_t>(0x6)
static ::TMPro::TextOverflowModes const Linked;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __TextOverflowModes_Unwrapped () const noexcept {
return std::bit_cast<__TextOverflowModes_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TextOverflowModes(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TextOverflowModes(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TextOverflowModes()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TextOverflowModes, 0x4>, "Size mismatch!");

} // namespace end def TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TextOverflowModes, "TMPro", "TextOverflowModes");
