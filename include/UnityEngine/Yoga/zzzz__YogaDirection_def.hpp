#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(YogaDirection)
// Forward declare root types
namespace UnityEngine::Yoga {
struct YogaDirection;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Yoga::YogaDirection);
// Type: UnityEngine.Yoga::YogaDirection
namespace UnityEngine::Yoga {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15355))
// CS Name: ::UnityEngine.Yoga::YogaDirection
struct CORDL_TYPE YogaDirection : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __YogaDirection_Unwrapped
enum struct __YogaDirection_Unwrapped : int32_t {
__E_Inherit = static_cast<int32_t>(0x0),
__E_LTR = static_cast<int32_t>(0x1),
__E_RTL = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Inherit value: static_cast<int32_t>(0x0)
static ::UnityEngine::Yoga::YogaDirection const Inherit;

/// @brief Field LTR value: static_cast<int32_t>(0x1)
static ::UnityEngine::Yoga::YogaDirection const LTR;

/// @brief Field RTL value: static_cast<int32_t>(0x2)
static ::UnityEngine::Yoga::YogaDirection const RTL;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __YogaDirection_Unwrapped () const noexcept {
return std::bit_cast<__YogaDirection_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr YogaDirection(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit YogaDirection(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 YogaDirection()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Yoga::YogaDirection, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::Yoga
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Yoga::YogaDirection, "UnityEngine.Yoga", "YogaDirection");
