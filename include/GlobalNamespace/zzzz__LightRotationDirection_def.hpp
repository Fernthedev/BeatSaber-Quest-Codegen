#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LightRotationDirection)
// Forward declare root types
namespace GlobalNamespace {
struct LightRotationDirection;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LightRotationDirection);
// Type: ::LightRotationDirection
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14736))
// CS Name: ::LightRotationDirection
struct CORDL_TYPE LightRotationDirection : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LightRotationDirection_Unwrapped
enum struct __LightRotationDirection_Unwrapped : int32_t {
__E_Automatic = static_cast<int32_t>(0x0),
__E_Clockwise = static_cast<int32_t>(0x1),
__E_Counterclockwise = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Automatic value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::LightRotationDirection const Automatic;

/// @brief Field Clockwise value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::LightRotationDirection const Clockwise;

/// @brief Field Counterclockwise value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::LightRotationDirection const Counterclockwise;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __LightRotationDirection_Unwrapped () const noexcept {
return std::bit_cast<__LightRotationDirection_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LightRotationDirection(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit LightRotationDirection(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 LightRotationDirection()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightRotationDirection, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightRotationDirection, "", "LightRotationDirection");
