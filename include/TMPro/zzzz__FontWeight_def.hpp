#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FontWeight)
// Forward declare root types
namespace TMPro {
struct FontWeight;
}
// Write type traits
MARK_VAL_T(::TMPro::FontWeight);
// Type: TMPro::FontWeight
namespace TMPro {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12439))
// CS Name: ::TMPro::FontWeight
struct CORDL_TYPE FontWeight : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FontWeight_Unwrapped
enum struct __FontWeight_Unwrapped : int32_t {
__E_Thin = static_cast<int32_t>(0x64),
__E_ExtraLight = static_cast<int32_t>(0xc8),
__E_Light = static_cast<int32_t>(0x12c),
__E_Regular = static_cast<int32_t>(0x190),
__E_Medium = static_cast<int32_t>(0x1f4),
__E_SemiBold = static_cast<int32_t>(0x258),
__E_Bold = static_cast<int32_t>(0x2bc),
__E_Heavy = static_cast<int32_t>(0x320),
__E_Black = static_cast<int32_t>(0x384),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Thin value: static_cast<int32_t>(0x64)
static ::TMPro::FontWeight const Thin;

/// @brief Field ExtraLight value: static_cast<int32_t>(0xc8)
static ::TMPro::FontWeight const ExtraLight;

/// @brief Field Light value: static_cast<int32_t>(0x12c)
static ::TMPro::FontWeight const Light;

/// @brief Field Regular value: static_cast<int32_t>(0x190)
static ::TMPro::FontWeight const Regular;

/// @brief Field Medium value: static_cast<int32_t>(0x1f4)
static ::TMPro::FontWeight const Medium;

/// @brief Field SemiBold value: static_cast<int32_t>(0x258)
static ::TMPro::FontWeight const SemiBold;

/// @brief Field Bold value: static_cast<int32_t>(0x2bc)
static ::TMPro::FontWeight const Bold;

/// @brief Field Heavy value: static_cast<int32_t>(0x320)
static ::TMPro::FontWeight const Heavy;

/// @brief Field Black value: static_cast<int32_t>(0x384)
static ::TMPro::FontWeight const Black;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __FontWeight_Unwrapped () const noexcept {
return std::bit_cast<__FontWeight_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FontWeight(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit FontWeight(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 FontWeight()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::FontWeight, 0x4>, "Size mismatch!");

} // namespace end def TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::FontWeight, "TMPro", "FontWeight");
