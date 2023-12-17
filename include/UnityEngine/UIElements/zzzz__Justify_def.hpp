#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Justify)
// Forward declare root types
namespace UnityEngine::UIElements {
struct Justify;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::Justify);
// Type: UnityEngine.UIElements::Justify
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6892))
// CS Name: ::UnityEngine.UIElements::Justify
struct CORDL_TYPE Justify : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Justify_Unwrapped
enum struct __Justify_Unwrapped : int32_t {
__E_FlexStart = static_cast<int32_t>(0x0),
__E_Center = static_cast<int32_t>(0x1),
__E_FlexEnd = static_cast<int32_t>(0x2),
__E_SpaceBetween = static_cast<int32_t>(0x3),
__E_SpaceAround = static_cast<int32_t>(0x4),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field FlexStart value: static_cast<int32_t>(0x0)
static ::UnityEngine::UIElements::Justify const FlexStart;

/// @brief Field Center value: static_cast<int32_t>(0x1)
static ::UnityEngine::UIElements::Justify const Center;

/// @brief Field FlexEnd value: static_cast<int32_t>(0x2)
static ::UnityEngine::UIElements::Justify const FlexEnd;

/// @brief Field SpaceBetween value: static_cast<int32_t>(0x3)
static ::UnityEngine::UIElements::Justify const SpaceBetween;

/// @brief Field SpaceAround value: static_cast<int32_t>(0x4)
static ::UnityEngine::UIElements::Justify const SpaceAround;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __Justify_Unwrapped () const noexcept {
return std::bit_cast<__Justify_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Justify(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Justify(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Justify()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Justify, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Justify, "UnityEngine.UIElements", "Justify");
