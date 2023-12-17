#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
CORDL_MODULE_EXPORT(UnaryExpression)
namespace System::Linq::Expressions {
class Expression;
}
// Forward declare root types
namespace System::Linq::Expressions {
class UnaryExpression;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::UnaryExpression);
// Type: System.Linq.Expressions::UnaryExpression
namespace System::Linq::Expressions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14300))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14307))
// CS Name: ::System.Linq.Expressions::UnaryExpression*
class CORDL_TYPE UnaryExpression : public ::System::Linq::Expressions::Expression {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Linq::Expressions::Expression)]{};

/// @brief Field <Operand>k__BackingField offset 0x10
 __declspec(property(get=__get__Operand_k__BackingField, put=__set__Operand_k__BackingField)) ::System::Linq::Expressions::Expression*  _Operand_k__BackingField;

 __declspec(property(get=get_Operand)) ::System::Linq::Expressions::Expression*  Operand;

constexpr void __set__Operand_k__BackingField(::System::Linq::Expressions::Expression*  value) ;

constexpr ::System::Linq::Expressions::Expression* __get__Operand_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Linq::Expressions::Expression*> __get__Operand_k__BackingField() const;

/// @brief Method get_Operand addr 0x2813e04 size 0x8 virtual false final false
inline ::System::Linq::Expressions::Expression* get_Operand() ;

// Ctor Parameters [CppParam { name: "", ty: "UnaryExpression", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnaryExpression(UnaryExpression && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnaryExpression", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnaryExpression(UnaryExpression const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UnaryExpression()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::UnaryExpression, 0x18>, "Size mismatch!");

} // namespace end def System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::UnaryExpression);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::UnaryExpression*, "System.Linq.Expressions", "UnaryExpression");
