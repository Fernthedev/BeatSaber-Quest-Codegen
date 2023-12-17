#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(YogaAlign)
// Forward declare root types
namespace UnityEngine::Yoga {
struct YogaAlign;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Yoga::YogaAlign);
// Type: UnityEngine.Yoga::YogaAlign
namespace UnityEngine::Yoga {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15356))
// CS Name: ::UnityEngine.Yoga::YogaAlign
struct CORDL_TYPE YogaAlign : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __YogaAlign_Unwrapped
enum struct __YogaAlign_Unwrapped : int32_t {
__E_Auto = static_cast<int32_t>(0x0),
__E_FlexStart = static_cast<int32_t>(0x1),
__E_Center = static_cast<int32_t>(0x2),
__E_FlexEnd = static_cast<int32_t>(0x3),
__E_Stretch = static_cast<int32_t>(0x4),
__E_Baseline = static_cast<int32_t>(0x5),
__E_SpaceBetween = static_cast<int32_t>(0x6),
__E_SpaceAround = static_cast<int32_t>(0x7),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Auto value: static_cast<int32_t>(0x0)
static ::UnityEngine::Yoga::YogaAlign const Auto;

/// @brief Field FlexStart value: static_cast<int32_t>(0x1)
static ::UnityEngine::Yoga::YogaAlign const FlexStart;

/// @brief Field Center value: static_cast<int32_t>(0x2)
static ::UnityEngine::Yoga::YogaAlign const Center;

/// @brief Field FlexEnd value: static_cast<int32_t>(0x3)
static ::UnityEngine::Yoga::YogaAlign const FlexEnd;

/// @brief Field Stretch value: static_cast<int32_t>(0x4)
static ::UnityEngine::Yoga::YogaAlign const Stretch;

/// @brief Field Baseline value: static_cast<int32_t>(0x5)
static ::UnityEngine::Yoga::YogaAlign const Baseline;

/// @brief Field SpaceBetween value: static_cast<int32_t>(0x6)
static ::UnityEngine::Yoga::YogaAlign const SpaceBetween;

/// @brief Field SpaceAround value: static_cast<int32_t>(0x7)
static ::UnityEngine::Yoga::YogaAlign const SpaceAround;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __YogaAlign_Unwrapped () const noexcept {
return std::bit_cast<__YogaAlign_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr YogaAlign(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit YogaAlign(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 YogaAlign()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Yoga::YogaAlign, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::Yoga
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Yoga::YogaAlign, "UnityEngine.Yoga", "YogaAlign");
