#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Expression)
namespace UnityEngine::UIElements::StyleSheets::Syntax {
struct DataType;
}
namespace UnityEngine::UIElements::StyleSheets::Syntax {
struct ExpressionCombinator;
}
namespace UnityEngine::UIElements::StyleSheets::Syntax {
struct ExpressionMultiplier;
}
namespace UnityEngine::UIElements::StyleSheets::Syntax {
struct ExpressionType;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets::Syntax {
class Expression;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::StyleSheets::Syntax::Expression);
// Type: UnityEngine.UIElements.StyleSheets.Syntax::Expression
namespace UnityEngine::UIElements::StyleSheets::Syntax {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7492))
// CS Name: ::UnityEngine.UIElements.StyleSheets.Syntax::Expression*
class CORDL_TYPE Expression : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Object)]{};

/// @brief Field type offset 0x10
 __declspec(property(get=__get_type, put=__set_type)) ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionType  type;

/// @brief Field multiplier offset 0x14
 __declspec(property(get=__get_multiplier, put=__set_multiplier)) ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier  multiplier;

/// @brief Field dataType offset 0x20
 __declspec(property(get=__get_dataType, put=__set_dataType)) ::UnityEngine::UIElements::StyleSheets::Syntax::DataType  dataType;

/// @brief Field combinator offset 0x24
 __declspec(property(get=__get_combinator, put=__set_combinator)) ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator  combinator;

/// @brief Field subExpressions offset 0x28
 __declspec(property(get=__get_subExpressions, put=__set_subExpressions)) ::ArrayW<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*,::Array<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>*>  subExpressions;

/// @brief Field keyword offset 0x30
 __declspec(property(get=__get_keyword, put=__set_keyword)) ::StringW  keyword;

constexpr void __set_type(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionType  value) ;

constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionType& __get_type() ;

constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionType const& __get_type() const;

constexpr void __set_multiplier(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier  value) ;

constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier& __get_multiplier() ;

constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier const& __get_multiplier() const;

constexpr void __set_dataType(::UnityEngine::UIElements::StyleSheets::Syntax::DataType  value) ;

constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::DataType& __get_dataType() ;

constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::DataType const& __get_dataType() const;

constexpr void __set_combinator(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator  value) ;

constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator& __get_combinator() ;

constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator const& __get_combinator() const;

constexpr void __set_subExpressions(::ArrayW<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*,::Array<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*,::Array<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>*>& __get_subExpressions() ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*,::Array<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>*> const& __get_subExpressions() const;

constexpr void __set_keyword(::StringW  value) ;

constexpr ::StringW& __get_keyword() ;

constexpr ::StringW const& __get_keyword() const;

static inline ::UnityEngine::UIElements::StyleSheets::Syntax::Expression* New_ctor(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionType  type) ;

/// @brief Method .ctor addr 0x2df7bc0 size 0x44 virtual false final false
inline void _ctor(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionType  type) ;

// Ctor Parameters [CppParam { name: "", ty: "Expression", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Expression(Expression && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Expression", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Expression(Expression const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Expression()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::Syntax::Expression, 0x38>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::StyleSheets::Syntax
NEED_NO_BOX(::UnityEngine::UIElements::StyleSheets::Syntax::Expression);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::Syntax::Expression*, "UnityEngine.UIElements.StyleSheets.Syntax", "Expression");
