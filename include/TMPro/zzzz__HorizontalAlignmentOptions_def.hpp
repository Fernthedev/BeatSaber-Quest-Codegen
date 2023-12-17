#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HorizontalAlignmentOptions)
// Forward declare root types
namespace TMPro {
struct HorizontalAlignmentOptions;
}
// Write type traits
MARK_VAL_T(::TMPro::HorizontalAlignmentOptions);
// Type: TMPro::HorizontalAlignmentOptions
namespace TMPro {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12430))
// CS Name: ::TMPro::HorizontalAlignmentOptions
struct CORDL_TYPE HorizontalAlignmentOptions : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HorizontalAlignmentOptions_Unwrapped
enum struct __HorizontalAlignmentOptions_Unwrapped : int32_t {
__E_Left = static_cast<int32_t>(0x1),
__E_Center = static_cast<int32_t>(0x2),
__E_Right = static_cast<int32_t>(0x4),
__E_Justified = static_cast<int32_t>(0x8),
__E_Flush = static_cast<int32_t>(0x10),
__E_Geometry = static_cast<int32_t>(0x20),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Left value: static_cast<int32_t>(0x1)
static ::TMPro::HorizontalAlignmentOptions const Left;

/// @brief Field Center value: static_cast<int32_t>(0x2)
static ::TMPro::HorizontalAlignmentOptions const Center;

/// @brief Field Right value: static_cast<int32_t>(0x4)
static ::TMPro::HorizontalAlignmentOptions const Right;

/// @brief Field Justified value: static_cast<int32_t>(0x8)
static ::TMPro::HorizontalAlignmentOptions const Justified;

/// @brief Field Flush value: static_cast<int32_t>(0x10)
static ::TMPro::HorizontalAlignmentOptions const Flush;

/// @brief Field Geometry value: static_cast<int32_t>(0x20)
static ::TMPro::HorizontalAlignmentOptions const Geometry;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __HorizontalAlignmentOptions_Unwrapped () const noexcept {
return std::bit_cast<__HorizontalAlignmentOptions_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HorizontalAlignmentOptions(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit HorizontalAlignmentOptions(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 HorizontalAlignmentOptions()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::HorizontalAlignmentOptions, 0x4>, "Size mismatch!");

} // namespace end def TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::HorizontalAlignmentOptions, "TMPro", "HorizontalAlignmentOptions");
