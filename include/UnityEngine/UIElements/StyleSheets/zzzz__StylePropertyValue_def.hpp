#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(StylePropertyValue)
namespace UnityEngine::UIElements {
struct StyleValueHandle;
}
namespace UnityEngine::UIElements {
class StyleSheet;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyValue;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleSheets::StylePropertyValue);
// Type: UnityEngine.UIElements.StyleSheets::StylePropertyValue
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7462))
// CS Name: ::UnityEngine.UIElements.StyleSheets::StylePropertyValue
struct CORDL_TYPE StylePropertyValue : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field sheet offset 0x0
 __declspec(property(get=__get_sheet, put=__set_sheet)) ::UnityEngine::UIElements::StyleSheet*  sheet;

/// @brief Field handle offset 0x8
 __declspec(property(get=__get_handle, put=__set_handle)) ::UnityEngine::UIElements::StyleValueHandle  handle;

constexpr void __set_sheet(::UnityEngine::UIElements::StyleSheet*  value) ;

constexpr ::UnityEngine::UIElements::StyleSheet* __get_sheet() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::StyleSheet*> __get_sheet() const;

constexpr void __set_handle(::UnityEngine::UIElements::StyleValueHandle  value) ;

constexpr ::UnityEngine::UIElements::StyleValueHandle& __get_handle() ;

constexpr ::UnityEngine::UIElements::StyleValueHandle const& __get_handle() const;

// Ctor Parameters [CppParam { name: "sheet", ty: "::UnityEngine::UIElements::StyleSheet*", modifiers: "", def_value: None }, CppParam { name: "handle", ty: "::UnityEngine::UIElements::StyleValueHandle", modifiers: "", def_value: None }]
constexpr StylePropertyValue(::UnityEngine::UIElements::StyleSheet*  sheet, ::UnityEngine::UIElements::StyleValueHandle  handle) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit StylePropertyValue(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 StylePropertyValue()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::StylePropertyValue, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::StyleSheets
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::StylePropertyValue, "UnityEngine.UIElements.StyleSheets", "StylePropertyValue");
