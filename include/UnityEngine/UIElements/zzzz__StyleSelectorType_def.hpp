#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StyleSelectorType)
// Forward declare root types
namespace UnityEngine::UIElements {
struct StyleSelectorType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleSelectorType);
// Type: UnityEngine.UIElements::StyleSelectorType
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7282))
// CS Name: ::UnityEngine.UIElements::StyleSelectorType
struct CORDL_TYPE StyleSelectorType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __StyleSelectorType_Unwrapped
enum struct __StyleSelectorType_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0x0),
__E_Wildcard = static_cast<int32_t>(0x1),
__E_Type = static_cast<int32_t>(0x2),
__E_Class = static_cast<int32_t>(0x3),
__E_PseudoClass = static_cast<int32_t>(0x4),
__E_RecursivePseudoClass = static_cast<int32_t>(0x5),
__E_ID = static_cast<int32_t>(0x6),
__E_Predicate = static_cast<int32_t>(0x7),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Unknown value: static_cast<int32_t>(0x0)
static ::UnityEngine::UIElements::StyleSelectorType const Unknown;

/// @brief Field Wildcard value: static_cast<int32_t>(0x1)
static ::UnityEngine::UIElements::StyleSelectorType const Wildcard;

/// @brief Field Type value: static_cast<int32_t>(0x2)
static ::UnityEngine::UIElements::StyleSelectorType const Type;

/// @brief Field Class value: static_cast<int32_t>(0x3)
static ::UnityEngine::UIElements::StyleSelectorType const Class;

/// @brief Field PseudoClass value: static_cast<int32_t>(0x4)
static ::UnityEngine::UIElements::StyleSelectorType const PseudoClass;

/// @brief Field RecursivePseudoClass value: static_cast<int32_t>(0x5)
static ::UnityEngine::UIElements::StyleSelectorType const RecursivePseudoClass;

/// @brief Field ID value: static_cast<int32_t>(0x6)
static ::UnityEngine::UIElements::StyleSelectorType const _cordl_ID;

/// @brief Field Predicate value: static_cast<int32_t>(0x7)
static ::UnityEngine::UIElements::StyleSelectorType const Predicate;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __StyleSelectorType_Unwrapped () const noexcept {
return std::bit_cast<__StyleSelectorType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr StyleSelectorType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit StyleSelectorType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 StyleSelectorType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSelectorType, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSelectorType, "UnityEngine.UIElements", "StyleSelectorType");
