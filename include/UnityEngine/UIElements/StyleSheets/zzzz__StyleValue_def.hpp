#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(StyleValue)
namespace UnityEngine::UIElements {
struct Length;
}
namespace UnityEngine::UIElements {
struct StyleKeyword;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyId;
}
namespace System::Runtime::InteropServices {
struct GCHandle;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
struct StyleValue;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleSheets::StyleValue);
// Type: UnityEngine.UIElements.StyleSheets::StyleValue
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7466))
// CS Name: ::UnityEngine.UIElements.StyleSheets::StyleValue
struct CORDL_TYPE StyleValue : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field id offset 0x0
 __declspec(property(get=__get_id, put=__set_id)) ::UnityEngine::UIElements::StyleSheets::StylePropertyId  id;

/// @brief Field keyword offset 0x4
 __declspec(property(get=__get_keyword, put=__set_keyword)) ::UnityEngine::UIElements::StyleKeyword  keyword;

/// @brief Field number offset 0x8
 __declspec(property(get=__get_number, put=__set_number)) float_t  number;

/// @brief Field length offset 0x8
 __declspec(property(get=__get_length, put=__set_length)) ::UnityEngine::UIElements::Length  length;

/// @brief Field color offset 0x8
 __declspec(property(get=__get_color, put=__set_color)) ::UnityEngine::Color  color;

/// @brief Field resource offset 0x8
 __declspec(property(get=__get_resource, put=__set_resource)) ::System::Runtime::InteropServices::GCHandle  resource;

constexpr void __set_id(::UnityEngine::UIElements::StyleSheets::StylePropertyId  value) ;

constexpr ::UnityEngine::UIElements::StyleSheets::StylePropertyId& __get_id() ;

constexpr ::UnityEngine::UIElements::StyleSheets::StylePropertyId const& __get_id() const;

constexpr void __set_keyword(::UnityEngine::UIElements::StyleKeyword  value) ;

constexpr ::UnityEngine::UIElements::StyleKeyword& __get_keyword() ;

constexpr ::UnityEngine::UIElements::StyleKeyword const& __get_keyword() const;

constexpr void __set_number(float_t  value) ;

constexpr float_t& __get_number() ;

constexpr float_t const& __get_number() const;

constexpr void __set_length(::UnityEngine::UIElements::Length  value) ;

constexpr ::UnityEngine::UIElements::Length& __get_length() ;

constexpr ::UnityEngine::UIElements::Length const& __get_length() const;

constexpr void __set_color(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_color() ;

constexpr ::UnityEngine::Color const& __get_color() const;

constexpr void __set_resource(::System::Runtime::InteropServices::GCHandle  value) ;

constexpr ::System::Runtime::InteropServices::GCHandle& __get_resource() ;

constexpr ::System::Runtime::InteropServices::GCHandle const& __get_resource() const;

// Ctor Parameters [CppParam { name: "id", ty: "::UnityEngine::UIElements::StyleSheets::StylePropertyId", modifiers: "", def_value: None }, CppParam { name: "keyword", ty: "::UnityEngine::UIElements::StyleKeyword", modifiers: "", def_value: None }, CppParam { name: "number", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "length", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "resource", ty: "::System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: None }]
constexpr StyleValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId  id, ::UnityEngine::UIElements::StyleKeyword  keyword, float_t  number, ::UnityEngine::UIElements::Length  length, ::UnityEngine::Color  color, ::System::Runtime::InteropServices::GCHandle  resource) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit StyleValue(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 StyleValue()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::StyleValue, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::StyleSheets
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::StyleValue, "UnityEngine.UIElements.StyleSheets", "StyleValue");
