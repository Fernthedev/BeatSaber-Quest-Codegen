#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ColorMode)
// Forward declare root types
namespace TMPro {
struct ColorMode;
}
// Write type traits
MARK_VAL_T(::TMPro::ColorMode);
// Type: TMPro::ColorMode
namespace TMPro {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12333))
// CS Name: ::TMPro::ColorMode
struct CORDL_TYPE ColorMode : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ColorMode_Unwrapped
enum struct __ColorMode_Unwrapped : int32_t {
__E_Single = static_cast<int32_t>(0x0),
__E_HorizontalGradient = static_cast<int32_t>(0x1),
__E_VerticalGradient = static_cast<int32_t>(0x2),
__E_FourCornersGradient = static_cast<int32_t>(0x3),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Single value: static_cast<int32_t>(0x0)
static ::TMPro::ColorMode const Single;

/// @brief Field HorizontalGradient value: static_cast<int32_t>(0x1)
static ::TMPro::ColorMode const HorizontalGradient;

/// @brief Field VerticalGradient value: static_cast<int32_t>(0x2)
static ::TMPro::ColorMode const VerticalGradient;

/// @brief Field FourCornersGradient value: static_cast<int32_t>(0x3)
static ::TMPro::ColorMode const FourCornersGradient;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __ColorMode_Unwrapped () const noexcept {
return std::bit_cast<__ColorMode_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ColorMode(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ColorMode(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ColorMode()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::ColorMode, 0x4>, "Size mismatch!");

} // namespace end def TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::ColorMode, "TMPro", "ColorMode");
