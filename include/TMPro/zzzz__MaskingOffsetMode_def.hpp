#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MaskingOffsetMode)
// Forward declare root types
namespace TMPro {
struct MaskingOffsetMode;
}
// Write type traits
MARK_VAL_T(::TMPro::MaskingOffsetMode);
// Type: TMPro::MaskingOffsetMode
namespace TMPro {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12436))
// CS Name: ::TMPro::MaskingOffsetMode
struct CORDL_TYPE MaskingOffsetMode : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MaskingOffsetMode_Unwrapped
enum struct __MaskingOffsetMode_Unwrapped : int32_t {
__E_Percentage = static_cast<int32_t>(0x0),
__E_Pixel = static_cast<int32_t>(0x1),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Percentage value: static_cast<int32_t>(0x0)
static ::TMPro::MaskingOffsetMode const Percentage;

/// @brief Field Pixel value: static_cast<int32_t>(0x1)
static ::TMPro::MaskingOffsetMode const Pixel;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __MaskingOffsetMode_Unwrapped () const noexcept {
return std::bit_cast<__MaskingOffsetMode_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MaskingOffsetMode(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit MaskingOffsetMode(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 MaskingOffsetMode()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::MaskingOffsetMode, 0x4>, "Size mismatch!");

} // namespace end def TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::MaskingOffsetMode, "TMPro", "MaskingOffsetMode");
