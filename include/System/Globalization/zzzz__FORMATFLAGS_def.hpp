#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FORMATFLAGS)
// Forward declare root types
namespace System::Globalization {
struct FORMATFLAGS;
}
// Write type traits
MARK_VAL_T(::System::Globalization::FORMATFLAGS);
// Type: System.Globalization::FORMATFLAGS
namespace System::Globalization {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3666))
// CS Name: ::System.Globalization::FORMATFLAGS
struct CORDL_TYPE FORMATFLAGS : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FORMATFLAGS_Unwrapped
enum struct __FORMATFLAGS_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_UseGenitiveMonth = static_cast<int32_t>(0x1),
__E_UseLeapYearMonth = static_cast<int32_t>(0x2),
__E_UseSpacesInMonthNames = static_cast<int32_t>(0x4),
__E_UseHebrewParsing = static_cast<int32_t>(0x8),
__E_UseSpacesInDayNames = static_cast<int32_t>(0x10),
__E_UseDigitPrefixInTokens = static_cast<int32_t>(0x20),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::System::Globalization::FORMATFLAGS const None;

/// @brief Field UseGenitiveMonth value: static_cast<int32_t>(0x1)
static ::System::Globalization::FORMATFLAGS const UseGenitiveMonth;

/// @brief Field UseLeapYearMonth value: static_cast<int32_t>(0x2)
static ::System::Globalization::FORMATFLAGS const UseLeapYearMonth;

/// @brief Field UseSpacesInMonthNames value: static_cast<int32_t>(0x4)
static ::System::Globalization::FORMATFLAGS const UseSpacesInMonthNames;

/// @brief Field UseHebrewParsing value: static_cast<int32_t>(0x8)
static ::System::Globalization::FORMATFLAGS const UseHebrewParsing;

/// @brief Field UseSpacesInDayNames value: static_cast<int32_t>(0x10)
static ::System::Globalization::FORMATFLAGS const UseSpacesInDayNames;

/// @brief Field UseDigitPrefixInTokens value: static_cast<int32_t>(0x20)
static ::System::Globalization::FORMATFLAGS const UseDigitPrefixInTokens;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __FORMATFLAGS_Unwrapped () const noexcept {
return std::bit_cast<__FORMATFLAGS_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FORMATFLAGS(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit FORMATFLAGS(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 FORMATFLAGS()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::FORMATFLAGS, 0x4>, "Size mismatch!");

} // namespace end def System::Globalization
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::FORMATFLAGS, "System.Globalization", "FORMATFLAGS");
