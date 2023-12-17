#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VerticalAlignmentOptions)
// Forward declare root types
namespace TMPro {
struct VerticalAlignmentOptions;
}
// Write type traits
MARK_VAL_T(::TMPro::VerticalAlignmentOptions);
// Type: TMPro::VerticalAlignmentOptions
namespace TMPro {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12431))
// CS Name: ::TMPro::VerticalAlignmentOptions
struct CORDL_TYPE VerticalAlignmentOptions : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __VerticalAlignmentOptions_Unwrapped
enum struct __VerticalAlignmentOptions_Unwrapped : int32_t {
__E_Top = static_cast<int32_t>(0x100),
__E_Middle = static_cast<int32_t>(0x200),
__E_Bottom = static_cast<int32_t>(0x400),
__E_Baseline = static_cast<int32_t>(0x800),
__E_Geometry = static_cast<int32_t>(0x1000),
__E_Capline = static_cast<int32_t>(0x2000),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Top value: static_cast<int32_t>(0x100)
static ::TMPro::VerticalAlignmentOptions const Top;

/// @brief Field Middle value: static_cast<int32_t>(0x200)
static ::TMPro::VerticalAlignmentOptions const Middle;

/// @brief Field Bottom value: static_cast<int32_t>(0x400)
static ::TMPro::VerticalAlignmentOptions const Bottom;

/// @brief Field Baseline value: static_cast<int32_t>(0x800)
static ::TMPro::VerticalAlignmentOptions const Baseline;

/// @brief Field Geometry value: static_cast<int32_t>(0x1000)
static ::TMPro::VerticalAlignmentOptions const Geometry;

/// @brief Field Capline value: static_cast<int32_t>(0x2000)
static ::TMPro::VerticalAlignmentOptions const Capline;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __VerticalAlignmentOptions_Unwrapped () const noexcept {
return std::bit_cast<__VerticalAlignmentOptions_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr VerticalAlignmentOptions(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit VerticalAlignmentOptions(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 VerticalAlignmentOptions()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::VerticalAlignmentOptions, 0x4>, "Size mismatch!");

} // namespace end def TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::VerticalAlignmentOptions, "TMPro", "VerticalAlignmentOptions");
