#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnicodeEncodingConformance)
// Forward declare root types
namespace System::Net::Configuration {
struct UnicodeEncodingConformance;
}
// Write type traits
MARK_VAL_T(::System::Net::Configuration::UnicodeEncodingConformance);
// Type: System.Net.Configuration::UnicodeEncodingConformance
namespace System::Net::Configuration {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9314))
// CS Name: ::System.Net.Configuration::UnicodeEncodingConformance
struct CORDL_TYPE UnicodeEncodingConformance : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __UnicodeEncodingConformance_Unwrapped
enum struct __UnicodeEncodingConformance_Unwrapped : int32_t {
__E_Auto = static_cast<int32_t>(0x0),
__E_Strict = static_cast<int32_t>(0x1),
__E_Compat = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Auto value: static_cast<int32_t>(0x0)
static ::System::Net::Configuration::UnicodeEncodingConformance const Auto;

/// @brief Field Strict value: static_cast<int32_t>(0x1)
static ::System::Net::Configuration::UnicodeEncodingConformance const Strict;

/// @brief Field Compat value: static_cast<int32_t>(0x2)
static ::System::Net::Configuration::UnicodeEncodingConformance const Compat;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __UnicodeEncodingConformance_Unwrapped () const noexcept {
return std::bit_cast<__UnicodeEncodingConformance_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnicodeEncodingConformance(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit UnicodeEncodingConformance(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 UnicodeEncodingConformance()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Configuration::UnicodeEncodingConformance, 0x4>, "Size mismatch!");

} // namespace end def System::Net::Configuration
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Configuration::UnicodeEncodingConformance, "System.Net.Configuration", "UnicodeEncodingConformance");
