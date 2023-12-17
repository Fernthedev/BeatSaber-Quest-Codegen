#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(StyleValueManaged)
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyId;
}
namespace UnityEngine::UIElements {
struct StyleKeyword;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
struct StyleValueManaged;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleSheets::StyleValueManaged);
// Type: UnityEngine.UIElements.StyleSheets::StyleValueManaged
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7467))
// CS Name: ::UnityEngine.UIElements.StyleSheets::StyleValueManaged
struct CORDL_TYPE StyleValueManaged : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field id offset 0x0
 __declspec(property(get=__get_id, put=__set_id)) ::UnityEngine::UIElements::StyleSheets::StylePropertyId  id;

/// @brief Field keyword offset 0x4
 __declspec(property(get=__get_keyword, put=__set_keyword)) ::UnityEngine::UIElements::StyleKeyword  keyword;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) ::System::Object*  value;

constexpr void __set_id(::UnityEngine::UIElements::StyleSheets::StylePropertyId  value) ;

constexpr ::UnityEngine::UIElements::StyleSheets::StylePropertyId& __get_id() ;

constexpr ::UnityEngine::UIElements::StyleSheets::StylePropertyId const& __get_id() const;

constexpr void __set_keyword(::UnityEngine::UIElements::StyleKeyword  value) ;

constexpr ::UnityEngine::UIElements::StyleKeyword& __get_keyword() ;

constexpr ::UnityEngine::UIElements::StyleKeyword const& __get_keyword() const;

constexpr void __set_value(::System::Object*  value) ;

constexpr ::System::Object* __get_value() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get_value() const;

// Ctor Parameters [CppParam { name: "id", ty: "::UnityEngine::UIElements::StyleSheets::StylePropertyId", modifiers: "", def_value: None }, CppParam { name: "keyword", ty: "::UnityEngine::UIElements::StyleKeyword", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::System::Object*", modifiers: "", def_value: None }]
constexpr StyleValueManaged(::UnityEngine::UIElements::StyleSheets::StylePropertyId  id, ::UnityEngine::UIElements::StyleKeyword  keyword, ::System::Object*  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit StyleValueManaged(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 StyleValueManaged()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::StyleValueManaged, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::StyleSheets
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::StyleValueManaged, "UnityEngine.UIElements.StyleSheets", "StyleValueManaged");
