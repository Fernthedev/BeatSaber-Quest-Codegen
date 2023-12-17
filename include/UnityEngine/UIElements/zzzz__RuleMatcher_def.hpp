#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(RuleMatcher)
namespace UnityEngine::UIElements {
class StyleSheet;
}
namespace UnityEngine::UIElements {
class StyleComplexSelector;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct RuleMatcher;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::RuleMatcher);
// Type: UnityEngine.UIElements::RuleMatcher
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6919))
// CS Name: ::UnityEngine.UIElements::RuleMatcher
struct CORDL_TYPE RuleMatcher : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field sheet offset 0x0
 __declspec(property(get=__get_sheet, put=__set_sheet)) ::UnityEngine::UIElements::StyleSheet*  sheet;

/// @brief Field complexSelector offset 0x8
 __declspec(property(get=__get_complexSelector, put=__set_complexSelector)) ::UnityEngine::UIElements::StyleComplexSelector*  complexSelector;

constexpr void __set_sheet(::UnityEngine::UIElements::StyleSheet*  value) ;

constexpr ::UnityEngine::UIElements::StyleSheet* __get_sheet() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::StyleSheet*> __get_sheet() const;

constexpr void __set_complexSelector(::UnityEngine::UIElements::StyleComplexSelector*  value) ;

constexpr ::UnityEngine::UIElements::StyleComplexSelector* __get_complexSelector() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::StyleComplexSelector*> __get_complexSelector() const;

/// @brief Method ToString addr 0x2e04684 size 0x20 virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "sheet", ty: "::UnityEngine::UIElements::StyleSheet*", modifiers: "", def_value: None }, CppParam { name: "complexSelector", ty: "::UnityEngine::UIElements::StyleComplexSelector*", modifiers: "", def_value: None }]
constexpr RuleMatcher(::UnityEngine::UIElements::StyleSheet*  sheet, ::UnityEngine::UIElements::StyleComplexSelector*  complexSelector) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit RuleMatcher(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 RuleMatcher()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::RuleMatcher, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::RuleMatcher, "UnityEngine.UIElements", "RuleMatcher");
