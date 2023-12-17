#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Base64FormattingOptions)
// Forward declare root types
namespace System {
struct Base64FormattingOptions;
}
// Write type traits
MARK_VAL_T(::System::Base64FormattingOptions);
// Type: System::Base64FormattingOptions
namespace System {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2365))
// CS Name: ::System::Base64FormattingOptions
struct CORDL_TYPE Base64FormattingOptions : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Base64FormattingOptions_Unwrapped
enum struct __Base64FormattingOptions_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_InsertLineBreaks = static_cast<int32_t>(0x1),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::System::Base64FormattingOptions const None;

/// @brief Field InsertLineBreaks value: static_cast<int32_t>(0x1)
static ::System::Base64FormattingOptions const InsertLineBreaks;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __Base64FormattingOptions_Unwrapped () const noexcept {
return std::bit_cast<__Base64FormattingOptions_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Base64FormattingOptions(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Base64FormattingOptions(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Base64FormattingOptions()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Base64FormattingOptions, 0x4>, "Size mismatch!");

} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(::System::Base64FormattingOptions, "System", "Base64FormattingOptions");
