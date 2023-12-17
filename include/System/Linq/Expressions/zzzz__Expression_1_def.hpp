#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__LambdaExpression_def.hpp"
CORDL_MODULE_EXPORT(Expression_1)
// Forward declare root types
namespace System::Linq::Expressions {
template<typename TDelegate>
class Expression_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Linq::Expressions::Expression_1);
// Type: System.Linq.Expressions::Expression`1
namespace System::Linq::Expressions {
// cpp template
template<typename TDelegate>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14303))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14304))
// CS Name: ::System.Linq.Expressions::Expression`1<TDelegate>*
class CORDL_TYPE Expression_1 : public ::System::Linq::Expressions::LambdaExpression {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Linq::Expressions::LambdaExpression)]{};

// Ctor Parameters [CppParam { name: "", ty: "Expression_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Expression_1(Expression_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Expression_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Expression_1(Expression_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Expression_1()  = default;
public:

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq::Expressions
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::Expressions::Expression_1, "System.Linq.Expressions", "Expression`1");
