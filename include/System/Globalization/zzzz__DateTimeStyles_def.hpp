#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DateTimeStyles)
// Forward declare root types
namespace System::Globalization {
struct DateTimeStyles;
}
// Write type traits
MARK_VAL_T(::System::Globalization::DateTimeStyles);
// Type: System.Globalization::DateTimeStyles
namespace System::Globalization {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3670))
// CS Name: ::System.Globalization::DateTimeStyles
struct CORDL_TYPE DateTimeStyles : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DateTimeStyles_Unwrapped
enum struct __DateTimeStyles_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_AllowLeadingWhite = static_cast<int32_t>(0x1),
__E_AllowTrailingWhite = static_cast<int32_t>(0x2),
__E_AllowInnerWhite = static_cast<int32_t>(0x4),
__E_AllowWhiteSpaces = static_cast<int32_t>(0x7),
__E_NoCurrentDateDefault = static_cast<int32_t>(0x8),
__E_AdjustToUniversal = static_cast<int32_t>(0x10),
__E_AssumeLocal = static_cast<int32_t>(0x20),
__E_AssumeUniversal = static_cast<int32_t>(0x40),
__E_RoundtripKind = static_cast<int32_t>(0x80),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::System::Globalization::DateTimeStyles const None;

/// @brief Field AllowLeadingWhite value: static_cast<int32_t>(0x1)
static ::System::Globalization::DateTimeStyles const AllowLeadingWhite;

/// @brief Field AllowTrailingWhite value: static_cast<int32_t>(0x2)
static ::System::Globalization::DateTimeStyles const AllowTrailingWhite;

/// @brief Field AllowInnerWhite value: static_cast<int32_t>(0x4)
static ::System::Globalization::DateTimeStyles const AllowInnerWhite;

/// @brief Field AllowWhiteSpaces value: static_cast<int32_t>(0x7)
static ::System::Globalization::DateTimeStyles const AllowWhiteSpaces;

/// @brief Field NoCurrentDateDefault value: static_cast<int32_t>(0x8)
static ::System::Globalization::DateTimeStyles const NoCurrentDateDefault;

/// @brief Field AdjustToUniversal value: static_cast<int32_t>(0x10)
static ::System::Globalization::DateTimeStyles const AdjustToUniversal;

/// @brief Field AssumeLocal value: static_cast<int32_t>(0x20)
static ::System::Globalization::DateTimeStyles const AssumeLocal;

/// @brief Field AssumeUniversal value: static_cast<int32_t>(0x40)
static ::System::Globalization::DateTimeStyles const AssumeUniversal;

/// @brief Field RoundtripKind value: static_cast<int32_t>(0x80)
static ::System::Globalization::DateTimeStyles const RoundtripKind;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __DateTimeStyles_Unwrapped () const noexcept {
return std::bit_cast<__DateTimeStyles_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DateTimeStyles(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit DateTimeStyles(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 DateTimeStyles()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::DateTimeStyles, 0x4>, "Size mismatch!");

} // namespace end def System::Globalization
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::DateTimeStyles, "System.Globalization", "DateTimeStyles");
