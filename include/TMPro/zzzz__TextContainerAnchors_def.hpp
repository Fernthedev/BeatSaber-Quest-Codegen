#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextContainerAnchors)
// Forward declare root types
namespace TMPro {
struct TextContainerAnchors;
}
// Write type traits
MARK_VAL_T(::TMPro::TextContainerAnchors);
// Type: TMPro::TextContainerAnchors
namespace TMPro {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12305))
// CS Name: ::TMPro::TextContainerAnchors
struct CORDL_TYPE TextContainerAnchors : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TextContainerAnchors_Unwrapped
enum struct __TextContainerAnchors_Unwrapped : int32_t {
__E_TopLeft = static_cast<int32_t>(0x0),
__E_Top = static_cast<int32_t>(0x1),
__E_TopRight = static_cast<int32_t>(0x2),
__E_Left = static_cast<int32_t>(0x3),
__E_Middle = static_cast<int32_t>(0x4),
__E_Right = static_cast<int32_t>(0x5),
__E_BottomLeft = static_cast<int32_t>(0x6),
__E_Bottom = static_cast<int32_t>(0x7),
__E_BottomRight = static_cast<int32_t>(0x8),
__E_Custom = static_cast<int32_t>(0x9),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field TopLeft value: static_cast<int32_t>(0x0)
static ::TMPro::TextContainerAnchors const TopLeft;

/// @brief Field Top value: static_cast<int32_t>(0x1)
static ::TMPro::TextContainerAnchors const Top;

/// @brief Field TopRight value: static_cast<int32_t>(0x2)
static ::TMPro::TextContainerAnchors const TopRight;

/// @brief Field Left value: static_cast<int32_t>(0x3)
static ::TMPro::TextContainerAnchors const Left;

/// @brief Field Middle value: static_cast<int32_t>(0x4)
static ::TMPro::TextContainerAnchors const Middle;

/// @brief Field Right value: static_cast<int32_t>(0x5)
static ::TMPro::TextContainerAnchors const Right;

/// @brief Field BottomLeft value: static_cast<int32_t>(0x6)
static ::TMPro::TextContainerAnchors const BottomLeft;

/// @brief Field Bottom value: static_cast<int32_t>(0x7)
static ::TMPro::TextContainerAnchors const Bottom;

/// @brief Field BottomRight value: static_cast<int32_t>(0x8)
static ::TMPro::TextContainerAnchors const BottomRight;

/// @brief Field Custom value: static_cast<int32_t>(0x9)
static ::TMPro::TextContainerAnchors const Custom;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __TextContainerAnchors_Unwrapped () const noexcept {
return std::bit_cast<__TextContainerAnchors_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TextContainerAnchors(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TextContainerAnchors(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TextContainerAnchors()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TextContainerAnchors, 0x4>, "Size mismatch!");

} // namespace end def TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TextContainerAnchors, "TMPro", "TextContainerAnchors");
