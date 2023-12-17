#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StyleSyntaxTokenizer)
namespace UnityEngine::UIElements::StyleSheets::Syntax {
struct StyleSyntaxToken;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets::Syntax {
class StyleSyntaxTokenizer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer);
// Type: UnityEngine.UIElements.StyleSheets.Syntax::StyleSyntaxTokenizer
namespace UnityEngine::UIElements::StyleSheets::Syntax {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7490))
// CS Name: ::UnityEngine.UIElements.StyleSheets.Syntax::StyleSyntaxTokenizer*
class CORDL_TYPE StyleSyntaxTokenizer : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field m_Tokens offset 0x10
 __declspec(property(get=__get_m_Tokens, put=__set_m_Tokens)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken>*  m_Tokens;

/// @brief Field m_CurrentTokenIndex offset 0x18
 __declspec(property(get=__get_m_CurrentTokenIndex, put=__set_m_CurrentTokenIndex)) int32_t  m_CurrentTokenIndex;

 __declspec(property(get=get_current)) ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken  current;

constexpr void __set_m_Tokens(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken>* __get_m_Tokens() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken>*> __get_m_Tokens() const;

constexpr void __set_m_CurrentTokenIndex(int32_t  value) ;

constexpr int32_t& __get_m_CurrentTokenIndex() ;

constexpr int32_t const& __get_m_CurrentTokenIndex() const;

/// @brief Method get_current addr 0x2df5de4 size 0xac virtual false final false
inline ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken get_current() ;

/// @brief Method MoveNext addr 0x2df5e90 size 0x114 virtual false final false
inline ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken MoveNext() ;

/// @brief Method PeekNext addr 0x2df5fa4 size 0xb0 virtual false final false
inline ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken PeekNext() ;

/// @brief Method Tokenize addr 0x2df6054 size 0xcf8 virtual false final false
inline void Tokenize(::StringW  syntax) ;

/// @brief Method IsNextCharacter addr 0x2df6d88 size 0x44 virtual false final false
static inline bool IsNextCharacter(::StringW  s, int32_t  index, char16_t  c) ;

/// @brief Method IsNextLetterOrDash addr 0x2df6e64 size 0xc0 virtual false final false
static inline bool IsNextLetterOrDash(::StringW  s, int32_t  index) ;

/// @brief Method IsNextNumber addr 0x2df6dcc size 0x98 virtual false final false
static inline bool IsNextNumber(::StringW  s, int32_t  index) ;

/// @brief Method GlobCharacter addr 0x2df6d4c size 0x3c virtual false final false
static inline int32_t GlobCharacter(::StringW  s, int32_t  index, char16_t  c) ;

static inline ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer* New_ctor() ;

/// @brief Method .ctor addr 0x2df6f24 size 0x84 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "StyleSyntaxTokenizer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StyleSyntaxTokenizer(StyleSyntaxTokenizer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StyleSyntaxTokenizer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StyleSyntaxTokenizer(StyleSyntaxTokenizer const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 StyleSyntaxTokenizer()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::StyleSheets::Syntax
NEED_NO_BOX(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*, "UnityEngine.UIElements.StyleSheets.Syntax", "StyleSyntaxTokenizer");
