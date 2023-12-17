#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConsoleColor)
// Forward declare root types
namespace System {
struct ConsoleColor;
}
// Write type traits
MARK_VAL_T(::System::ConsoleColor);
// Type: System::ConsoleColor
namespace System {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2518))
// CS Name: ::System::ConsoleColor
struct CORDL_TYPE ConsoleColor : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ConsoleColor_Unwrapped
enum struct __ConsoleColor_Unwrapped : int32_t {
__E_Black = static_cast<int32_t>(0x0),
__E_DarkBlue = static_cast<int32_t>(0x1),
__E_DarkGreen = static_cast<int32_t>(0x2),
__E_DarkCyan = static_cast<int32_t>(0x3),
__E_DarkRed = static_cast<int32_t>(0x4),
__E_DarkMagenta = static_cast<int32_t>(0x5),
__E_DarkYellow = static_cast<int32_t>(0x6),
__E_Gray = static_cast<int32_t>(0x7),
__E_DarkGray = static_cast<int32_t>(0x8),
__E_Blue = static_cast<int32_t>(0x9),
__E_Green = static_cast<int32_t>(0xa),
__E_Cyan = static_cast<int32_t>(0xb),
__E_Red = static_cast<int32_t>(0xc),
__E_Magenta = static_cast<int32_t>(0xd),
__E_Yellow = static_cast<int32_t>(0xe),
__E_White = static_cast<int32_t>(0xf),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Black value: static_cast<int32_t>(0x0)
static ::System::ConsoleColor const Black;

/// @brief Field DarkBlue value: static_cast<int32_t>(0x1)
static ::System::ConsoleColor const DarkBlue;

/// @brief Field DarkGreen value: static_cast<int32_t>(0x2)
static ::System::ConsoleColor const DarkGreen;

/// @brief Field DarkCyan value: static_cast<int32_t>(0x3)
static ::System::ConsoleColor const DarkCyan;

/// @brief Field DarkRed value: static_cast<int32_t>(0x4)
static ::System::ConsoleColor const DarkRed;

/// @brief Field DarkMagenta value: static_cast<int32_t>(0x5)
static ::System::ConsoleColor const DarkMagenta;

/// @brief Field DarkYellow value: static_cast<int32_t>(0x6)
static ::System::ConsoleColor const DarkYellow;

/// @brief Field Gray value: static_cast<int32_t>(0x7)
static ::System::ConsoleColor const Gray;

/// @brief Field DarkGray value: static_cast<int32_t>(0x8)
static ::System::ConsoleColor const DarkGray;

/// @brief Field Blue value: static_cast<int32_t>(0x9)
static ::System::ConsoleColor const Blue;

/// @brief Field Green value: static_cast<int32_t>(0xa)
static ::System::ConsoleColor const Green;

/// @brief Field Cyan value: static_cast<int32_t>(0xb)
static ::System::ConsoleColor const Cyan;

/// @brief Field Red value: static_cast<int32_t>(0xc)
static ::System::ConsoleColor const Red;

/// @brief Field Magenta value: static_cast<int32_t>(0xd)
static ::System::ConsoleColor const Magenta;

/// @brief Field Yellow value: static_cast<int32_t>(0xe)
static ::System::ConsoleColor const Yellow;

/// @brief Field White value: static_cast<int32_t>(0xf)
static ::System::ConsoleColor const White;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __ConsoleColor_Unwrapped () const noexcept {
return std::bit_cast<__ConsoleColor_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ConsoleColor(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ConsoleColor(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ConsoleColor()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ConsoleColor, 0x4>, "Size mismatch!");

} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(::System::ConsoleColor, "System", "ConsoleColor");
