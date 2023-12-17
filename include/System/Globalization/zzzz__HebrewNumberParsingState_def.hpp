#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HebrewNumberParsingState)
// Forward declare root types
namespace System::Globalization {
struct HebrewNumberParsingState;
}
// Write type traits
MARK_VAL_T(::System::Globalization::HebrewNumberParsingState);
// Type: System.Globalization::HebrewNumberParsingState
namespace System::Globalization {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3674))
// CS Name: ::System.Globalization::HebrewNumberParsingState
struct CORDL_TYPE HebrewNumberParsingState : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HebrewNumberParsingState_Unwrapped
enum struct __HebrewNumberParsingState_Unwrapped : int32_t {
__E_InvalidHebrewNumber = static_cast<int32_t>(0x0),
__E_NotHebrewDigit = static_cast<int32_t>(0x1),
__E_FoundEndOfHebrewNumber = static_cast<int32_t>(0x2),
__E_ContinueParsing = static_cast<int32_t>(0x3),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field InvalidHebrewNumber value: static_cast<int32_t>(0x0)
static ::System::Globalization::HebrewNumberParsingState const InvalidHebrewNumber;

/// @brief Field NotHebrewDigit value: static_cast<int32_t>(0x1)
static ::System::Globalization::HebrewNumberParsingState const NotHebrewDigit;

/// @brief Field FoundEndOfHebrewNumber value: static_cast<int32_t>(0x2)
static ::System::Globalization::HebrewNumberParsingState const FoundEndOfHebrewNumber;

/// @brief Field ContinueParsing value: static_cast<int32_t>(0x3)
static ::System::Globalization::HebrewNumberParsingState const ContinueParsing;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __HebrewNumberParsingState_Unwrapped () const noexcept {
return std::bit_cast<__HebrewNumberParsingState_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HebrewNumberParsingState(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit HebrewNumberParsingState(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 HebrewNumberParsingState()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::HebrewNumberParsingState, 0x4>, "Size mismatch!");

} // namespace end def System::Globalization
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::HebrewNumberParsingState, "System.Globalization", "HebrewNumberParsingState");
