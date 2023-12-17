#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SelectorMatchRecord)
namespace UnityEngine::UIElements {
class StyleComplexSelector;
}
namespace UnityEngine::UIElements {
class StyleSheet;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
struct SelectorMatchRecord;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord);
// Type: UnityEngine.UIElements.StyleSheets::SelectorMatchRecord
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7469))
// CS Name: ::UnityEngine.UIElements.StyleSheets::SelectorMatchRecord
struct CORDL_TYPE SelectorMatchRecord : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field sheet offset 0x0
 __declspec(property(get=__get_sheet, put=__set_sheet)) ::UnityEngine::UIElements::StyleSheet*  sheet;

/// @brief Field styleSheetIndexInStack offset 0x8
 __declspec(property(get=__get_styleSheetIndexInStack, put=__set_styleSheetIndexInStack)) int32_t  styleSheetIndexInStack;

/// @brief Field complexSelector offset 0x10
 __declspec(property(get=__get_complexSelector, put=__set_complexSelector)) ::UnityEngine::UIElements::StyleComplexSelector*  complexSelector;

constexpr void __set_sheet(::UnityEngine::UIElements::StyleSheet*  value) ;

constexpr ::UnityEngine::UIElements::StyleSheet* __get_sheet() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::StyleSheet*> __get_sheet() const;

constexpr void __set_styleSheetIndexInStack(int32_t  value) ;

constexpr int32_t& __get_styleSheetIndexInStack() ;

constexpr int32_t const& __get_styleSheetIndexInStack() const;

constexpr void __set_complexSelector(::UnityEngine::UIElements::StyleComplexSelector*  value) ;

constexpr ::UnityEngine::UIElements::StyleComplexSelector* __get_complexSelector() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::StyleComplexSelector*> __get_complexSelector() const;

/// @brief Method .ctor addr 0x2de9884 size 0x14 virtual false final false
inline void _ctor(::UnityEngine::UIElements::StyleSheet*  sheet, int32_t  styleSheetIndexInStack) ;

/// @brief Method Compare addr 0x2de9898 size 0xe8 virtual false final false
static inline int32_t Compare(::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord  a, ::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord  b) ;

// Ctor Parameters [CppParam { name: "sheet", ty: "::UnityEngine::UIElements::StyleSheet*", modifiers: "", def_value: None }, CppParam { name: "styleSheetIndexInStack", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "complexSelector", ty: "::UnityEngine::UIElements::StyleComplexSelector*", modifiers: "", def_value: None }]
constexpr SelectorMatchRecord(::UnityEngine::UIElements::StyleSheet*  sheet, int32_t  styleSheetIndexInStack, ::UnityEngine::UIElements::StyleComplexSelector*  complexSelector) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit SelectorMatchRecord(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 SelectorMatchRecord()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::StyleSheets
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord, "UnityEngine.UIElements.StyleSheets", "SelectorMatchRecord");
