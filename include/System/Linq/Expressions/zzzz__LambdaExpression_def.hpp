#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
CORDL_MODULE_EXPORT(LambdaExpression)
namespace System::Linq::Expressions {
class Expression;
}
// Forward declare root types
namespace System::Linq::Expressions {
class LambdaExpression;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::LambdaExpression);
// Type: System.Linq.Expressions::LambdaExpression
namespace System::Linq::Expressions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14300))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14303))
// CS Name: ::System.Linq.Expressions::LambdaExpression*
class CORDL_TYPE LambdaExpression : public ::System::Linq::Expressions::Expression {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Linq::Expressions::Expression)]{};

/// @brief Field _body offset 0x10
 __declspec(property(get=__get__body, put=__set__body)) ::System::Linq::Expressions::Expression*  _body;

 __declspec(property(get=get_Body)) ::System::Linq::Expressions::Expression*  Body;

constexpr void __set__body(::System::Linq::Expressions::Expression*  value) ;

constexpr ::System::Linq::Expressions::Expression* __get__body() ;

constexpr ::cordl_internals::to_const_pointer<::System::Linq::Expressions::Expression*> __get__body() const;

/// @brief Method get_Body addr 0x2813d58 size 0x8 virtual false final false
inline ::System::Linq::Expressions::Expression* get_Body() ;

// Ctor Parameters [CppParam { name: "", ty: "LambdaExpression", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LambdaExpression(LambdaExpression && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LambdaExpression", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LambdaExpression(LambdaExpression const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LambdaExpression()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::LambdaExpression, 0x18>, "Size mismatch!");

} // namespace end def System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::LambdaExpression);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::LambdaExpression*, "System.Linq.Expressions", "LambdaExpression");
