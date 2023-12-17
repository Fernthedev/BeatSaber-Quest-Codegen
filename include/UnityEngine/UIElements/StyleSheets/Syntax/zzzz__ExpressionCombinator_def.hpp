#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ExpressionCombinator)
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets::Syntax {
struct ExpressionCombinator;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator);
// Type: UnityEngine.UIElements.StyleSheets.Syntax::ExpressionCombinator
namespace UnityEngine::UIElements::StyleSheets::Syntax {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7495))
// CS Name: ::UnityEngine.UIElements.StyleSheets.Syntax::ExpressionCombinator
struct CORDL_TYPE ExpressionCombinator : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ExpressionCombinator_Unwrapped
enum struct __ExpressionCombinator_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Or = static_cast<int32_t>(0x1),
__E_OrOr = static_cast<int32_t>(0x2),
__E_AndAnd = static_cast<int32_t>(0x3),
__E_Juxtaposition = static_cast<int32_t>(0x4),
__E_Group = static_cast<int32_t>(0x5),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator const None;

/// @brief Field Or value: static_cast<int32_t>(0x1)
static ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator const Or;

/// @brief Field OrOr value: static_cast<int32_t>(0x2)
static ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator const OrOr;

/// @brief Field AndAnd value: static_cast<int32_t>(0x3)
static ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator const AndAnd;

/// @brief Field Juxtaposition value: static_cast<int32_t>(0x4)
static ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator const Juxtaposition;

/// @brief Field Group value: static_cast<int32_t>(0x5)
static ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator const Group;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __ExpressionCombinator_Unwrapped () const noexcept {
return std::bit_cast<__ExpressionCombinator_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ExpressionCombinator(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ExpressionCombinator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ExpressionCombinator()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::StyleSheets::Syntax
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator, "UnityEngine.UIElements.StyleSheets.Syntax", "ExpressionCombinator");
