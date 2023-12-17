#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UsageHints)
// Forward declare root types
namespace UnityEngine::UIElements {
struct UsageHints;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::UsageHints);
// Type: UnityEngine.UIElements::UsageHints
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6864))
// CS Name: ::UnityEngine.UIElements::UsageHints
struct CORDL_TYPE UsageHints : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __UsageHints_Unwrapped
enum struct __UsageHints_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_DynamicTransform = static_cast<int32_t>(0x1),
__E_GroupTransform = static_cast<int32_t>(0x2),
__E_MaskContainer = static_cast<int32_t>(0x4),
__E_DynamicColor = static_cast<int32_t>(0x8),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::UnityEngine::UIElements::UsageHints const None;

/// @brief Field DynamicTransform value: static_cast<int32_t>(0x1)
static ::UnityEngine::UIElements::UsageHints const DynamicTransform;

/// @brief Field GroupTransform value: static_cast<int32_t>(0x2)
static ::UnityEngine::UIElements::UsageHints const GroupTransform;

/// @brief Field MaskContainer value: static_cast<int32_t>(0x4)
static ::UnityEngine::UIElements::UsageHints const MaskContainer;

/// @brief Field DynamicColor value: static_cast<int32_t>(0x8)
static ::UnityEngine::UIElements::UsageHints const DynamicColor;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __UsageHints_Unwrapped () const noexcept {
return std::bit_cast<__UsageHints_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UsageHints(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit UsageHints(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 UsageHints()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UsageHints, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UsageHints, "UnityEngine.UIElements", "UsageHints");
