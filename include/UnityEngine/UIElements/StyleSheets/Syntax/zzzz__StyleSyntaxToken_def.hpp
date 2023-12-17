#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StyleSyntaxToken)
namespace UnityEngine::UIElements::StyleSheets::Syntax {
struct StyleSyntaxTokenType;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets::Syntax {
struct StyleSyntaxToken;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken);
// Type: UnityEngine.UIElements.StyleSheets.Syntax::StyleSyntaxToken
namespace UnityEngine::UIElements::StyleSheets::Syntax {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7489))
// CS Name: ::UnityEngine.UIElements.StyleSheets.Syntax::StyleSyntaxToken
struct CORDL_TYPE StyleSyntaxToken : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field type offset 0x0
 __declspec(property(get=__get_type, put=__set_type)) ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType  type;

/// @brief Field text offset 0x8
 __declspec(property(get=__get_text, put=__set_text)) ::StringW  text;

/// @brief Field number offset 0x10
 __declspec(property(get=__get_number, put=__set_number)) int32_t  number;

constexpr void __set_type(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType  value) ;

constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType& __get_type() ;

constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType const& __get_type() const;

constexpr void __set_text(::StringW  value) ;

constexpr ::StringW& __get_text() ;

constexpr ::StringW const& __get_text() const;

constexpr void __set_number(int32_t  value) ;

constexpr int32_t& __get_number() ;

constexpr int32_t const& __get_number() const;

/// @brief Method .ctor addr 0x2df5db4 size 0x10 virtual false final false
inline void _ctor(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType  t) ;

/// @brief Method .ctor addr 0x2df5dc4 size 0x10 virtual false final false
inline void _ctor(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType  type, ::StringW  text) ;

/// @brief Method .ctor addr 0x2df5dd4 size 0x10 virtual false final false
inline void _ctor(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType  type, int32_t  number) ;

// Ctor Parameters [CppParam { name: "type", ty: "::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType", modifiers: "", def_value: None }, CppParam { name: "text", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "number", ty: "int32_t", modifiers: "", def_value: None }]
constexpr StyleSyntaxToken(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType  type, ::StringW  text, int32_t  number) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit StyleSyntaxToken(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 StyleSyntaxToken()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::StyleSheets::Syntax
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken, "UnityEngine.UIElements.StyleSheets.Syntax", "StyleSyntaxToken");
