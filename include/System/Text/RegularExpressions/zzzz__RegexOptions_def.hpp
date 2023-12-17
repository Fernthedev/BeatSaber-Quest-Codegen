#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RegexOptions)
// Forward declare root types
namespace System::Text::RegularExpressions {
struct RegexOptions;
}
// Write type traits
MARK_VAL_T(::System::Text::RegularExpressions::RegexOptions);
// Type: System.Text.RegularExpressions::RegexOptions
namespace System::Text::RegularExpressions {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8925))
// CS Name: ::System.Text.RegularExpressions::RegexOptions
struct CORDL_TYPE RegexOptions : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RegexOptions_Unwrapped
enum struct __RegexOptions_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_IgnoreCase = static_cast<int32_t>(0x1),
__E_Multiline = static_cast<int32_t>(0x2),
__E_ExplicitCapture = static_cast<int32_t>(0x4),
__E_Compiled = static_cast<int32_t>(0x8),
__E_Singleline = static_cast<int32_t>(0x10),
__E_IgnorePatternWhitespace = static_cast<int32_t>(0x20),
__E_RightToLeft = static_cast<int32_t>(0x40),
__E_ECMAScript = static_cast<int32_t>(0x100),
__E_CultureInvariant = static_cast<int32_t>(0x200),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::System::Text::RegularExpressions::RegexOptions const None;

/// @brief Field IgnoreCase value: static_cast<int32_t>(0x1)
static ::System::Text::RegularExpressions::RegexOptions const IgnoreCase;

/// @brief Field Multiline value: static_cast<int32_t>(0x2)
static ::System::Text::RegularExpressions::RegexOptions const Multiline;

/// @brief Field ExplicitCapture value: static_cast<int32_t>(0x4)
static ::System::Text::RegularExpressions::RegexOptions const ExplicitCapture;

/// @brief Field Compiled value: static_cast<int32_t>(0x8)
static ::System::Text::RegularExpressions::RegexOptions const Compiled;

/// @brief Field Singleline value: static_cast<int32_t>(0x10)
static ::System::Text::RegularExpressions::RegexOptions const Singleline;

/// @brief Field IgnorePatternWhitespace value: static_cast<int32_t>(0x20)
static ::System::Text::RegularExpressions::RegexOptions const IgnorePatternWhitespace;

/// @brief Field RightToLeft value: static_cast<int32_t>(0x40)
static ::System::Text::RegularExpressions::RegexOptions const RightToLeft;

/// @brief Field ECMAScript value: static_cast<int32_t>(0x100)
static ::System::Text::RegularExpressions::RegexOptions const ECMAScript;

/// @brief Field CultureInvariant value: static_cast<int32_t>(0x200)
static ::System::Text::RegularExpressions::RegexOptions const CultureInvariant;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __RegexOptions_Unwrapped () const noexcept {
return std::bit_cast<__RegexOptions_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RegexOptions(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit RegexOptions(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 RegexOptions()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::RegularExpressions::RegexOptions, 0x4>, "Size mismatch!");

} // namespace end def System::Text::RegularExpressions
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::RegexOptions, "System.Text.RegularExpressions", "RegexOptions");
