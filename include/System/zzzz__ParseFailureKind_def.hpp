#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParseFailureKind)
// Forward declare root types
namespace System {
struct ParseFailureKind;
}
// Write type traits
MARK_VAL_T(::System::ParseFailureKind);
// Type: System::ParseFailureKind
namespace System {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2397))
// CS Name: ::System::ParseFailureKind
struct CORDL_TYPE ParseFailureKind : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ParseFailureKind_Unwrapped
enum struct __ParseFailureKind_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_ArgumentNull = static_cast<int32_t>(0x1),
__E_Format = static_cast<int32_t>(0x2),
__E_FormatWithParameter = static_cast<int32_t>(0x3),
__E_FormatWithOriginalDateTime = static_cast<int32_t>(0x4),
__E_FormatWithFormatSpecifier = static_cast<int32_t>(0x5),
__E_FormatWithOriginalDateTimeAndParameter = static_cast<int32_t>(0x6),
__E_FormatBadDateTimeCalendar = static_cast<int32_t>(0x7),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::System::ParseFailureKind const None;

/// @brief Field ArgumentNull value: static_cast<int32_t>(0x1)
static ::System::ParseFailureKind const ArgumentNull;

/// @brief Field Format value: static_cast<int32_t>(0x2)
static ::System::ParseFailureKind const Format;

/// @brief Field FormatWithParameter value: static_cast<int32_t>(0x3)
static ::System::ParseFailureKind const FormatWithParameter;

/// @brief Field FormatWithOriginalDateTime value: static_cast<int32_t>(0x4)
static ::System::ParseFailureKind const FormatWithOriginalDateTime;

/// @brief Field FormatWithFormatSpecifier value: static_cast<int32_t>(0x5)
static ::System::ParseFailureKind const FormatWithFormatSpecifier;

/// @brief Field FormatWithOriginalDateTimeAndParameter value: static_cast<int32_t>(0x6)
static ::System::ParseFailureKind const FormatWithOriginalDateTimeAndParameter;

/// @brief Field FormatBadDateTimeCalendar value: static_cast<int32_t>(0x7)
static ::System::ParseFailureKind const FormatBadDateTimeCalendar;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __ParseFailureKind_Unwrapped () const noexcept {
return std::bit_cast<__ParseFailureKind_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ParseFailureKind(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ParseFailureKind(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ParseFailureKind()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ParseFailureKind, 0x4>, "Size mismatch!");

} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(::System::ParseFailureKind, "System", "ParseFailureKind");
