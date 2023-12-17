#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(YogaEdge)
// Forward declare root types
namespace UnityEngine::Yoga {
struct YogaEdge;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Yoga::YogaEdge);
// Type: UnityEngine.Yoga::YogaEdge
namespace UnityEngine::Yoga {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15365))
// CS Name: ::UnityEngine.Yoga::YogaEdge
struct CORDL_TYPE YogaEdge : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __YogaEdge_Unwrapped
enum struct __YogaEdge_Unwrapped : int32_t {
__E_Left = static_cast<int32_t>(0x0),
__E_Top = static_cast<int32_t>(0x1),
__E_Right = static_cast<int32_t>(0x2),
__E_Bottom = static_cast<int32_t>(0x3),
__E_Start = static_cast<int32_t>(0x4),
__E_End = static_cast<int32_t>(0x5),
__E_Horizontal = static_cast<int32_t>(0x6),
__E_Vertical = static_cast<int32_t>(0x7),
__E_All = static_cast<int32_t>(0x8),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Left value: static_cast<int32_t>(0x0)
static ::UnityEngine::Yoga::YogaEdge const Left;

/// @brief Field Top value: static_cast<int32_t>(0x1)
static ::UnityEngine::Yoga::YogaEdge const Top;

/// @brief Field Right value: static_cast<int32_t>(0x2)
static ::UnityEngine::Yoga::YogaEdge const Right;

/// @brief Field Bottom value: static_cast<int32_t>(0x3)
static ::UnityEngine::Yoga::YogaEdge const Bottom;

/// @brief Field Start value: static_cast<int32_t>(0x4)
static ::UnityEngine::Yoga::YogaEdge const Start;

/// @brief Field End value: static_cast<int32_t>(0x5)
static ::UnityEngine::Yoga::YogaEdge const End;

/// @brief Field Horizontal value: static_cast<int32_t>(0x6)
static ::UnityEngine::Yoga::YogaEdge const Horizontal;

/// @brief Field Vertical value: static_cast<int32_t>(0x7)
static ::UnityEngine::Yoga::YogaEdge const Vertical;

/// @brief Field All value: static_cast<int32_t>(0x8)
static ::UnityEngine::Yoga::YogaEdge const All;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __YogaEdge_Unwrapped () const noexcept {
return std::bit_cast<__YogaEdge_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr YogaEdge(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit YogaEdge(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 YogaEdge()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Yoga::YogaEdge, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::Yoga
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Yoga::YogaEdge, "UnityEngine.Yoga", "YogaEdge");
