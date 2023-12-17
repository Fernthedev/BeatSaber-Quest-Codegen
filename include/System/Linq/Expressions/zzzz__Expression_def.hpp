#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Expression)
namespace System::Linq::Expressions {
struct ExpressionType;
}
namespace System::Linq::Expressions {
class __Expression__MemberExpressionProxy;
}
namespace System {
class Type;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Runtime::CompilerServices {
template<typename TKey,typename TValue>
class ConditionalWeakTable_2;
}
namespace System::Dynamic::Utils {
template<typename TKey,typename TValue>
class CacheDict_2;
}
namespace System::Linq::Expressions {
class __Expression__LambdaExpressionProxy;
}
namespace System::Linq::Expressions {
class __Expression__ExtensionInfo;
}
namespace System::Linq::Expressions {
class __Expression__UnaryExpressionProxy;
}
// Forward declare root types
namespace System::Linq::Expressions {
class Expression;
}
namespace System::Linq::Expressions {
class __Expression__ExtensionInfo;
}
namespace System::Linq::Expressions {
class __Expression__LambdaExpressionProxy;
}
namespace System::Linq::Expressions {
class __Expression__MemberExpressionProxy;
}
namespace System::Linq::Expressions {
class __Expression__UnaryExpressionProxy;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Expression);
MARK_REF_PTR_T(::System::Linq::Expressions::__Expression__ExtensionInfo);
MARK_REF_PTR_T(::System::Linq::Expressions::__Expression__LambdaExpressionProxy);
MARK_REF_PTR_T(::System::Linq::Expressions::__Expression__MemberExpressionProxy);
MARK_REF_PTR_T(::System::Linq::Expressions::__Expression__UnaryExpressionProxy);
// Type: ::LambdaExpressionProxy
namespace System::Linq::Expressions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14296))
// CS Name: ::Expression::LambdaExpressionProxy*
class CORDL_TYPE __Expression__LambdaExpressionProxy : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

// Ctor Parameters [CppParam { name: "", ty: "__Expression__LambdaExpressionProxy", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Expression__LambdaExpressionProxy(__Expression__LambdaExpressionProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Expression__LambdaExpressionProxy", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Expression__LambdaExpressionProxy(__Expression__LambdaExpressionProxy const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __Expression__LambdaExpressionProxy()  = default;
public:

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::__Expression__LambdaExpressionProxy, 0x10>, "Size mismatch!");

} // namespace end def System::Linq::Expressions
// Type: ::MemberExpressionProxy
namespace System::Linq::Expressions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14297))
// CS Name: ::Expression::MemberExpressionProxy*
class CORDL_TYPE __Expression__MemberExpressionProxy : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

// Ctor Parameters [CppParam { name: "", ty: "__Expression__MemberExpressionProxy", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Expression__MemberExpressionProxy(__Expression__MemberExpressionProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Expression__MemberExpressionProxy", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Expression__MemberExpressionProxy(__Expression__MemberExpressionProxy const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __Expression__MemberExpressionProxy()  = default;
public:

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::__Expression__MemberExpressionProxy, 0x10>, "Size mismatch!");

} // namespace end def System::Linq::Expressions
// Type: ::UnaryExpressionProxy
namespace System::Linq::Expressions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14298))
// CS Name: ::Expression::UnaryExpressionProxy*
class CORDL_TYPE __Expression__UnaryExpressionProxy : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

// Ctor Parameters [CppParam { name: "", ty: "__Expression__UnaryExpressionProxy", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Expression__UnaryExpressionProxy(__Expression__UnaryExpressionProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Expression__UnaryExpressionProxy", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Expression__UnaryExpressionProxy(__Expression__UnaryExpressionProxy const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __Expression__UnaryExpressionProxy()  = default;
public:

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::__Expression__UnaryExpressionProxy, 0x10>, "Size mismatch!");

} // namespace end def System::Linq::Expressions
// Type: ::ExtensionInfo
namespace System::Linq::Expressions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14299))
// CS Name: ::Expression::ExtensionInfo*
class CORDL_TYPE __Expression__ExtensionInfo : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field NodeType offset 0x10
 __declspec(property(get=__get_NodeType, put=__set_NodeType)) ::System::Linq::Expressions::ExpressionType  NodeType;

constexpr void __set_NodeType(::System::Linq::Expressions::ExpressionType  value) ;

constexpr ::System::Linq::Expressions::ExpressionType& __get_NodeType() ;

constexpr ::System::Linq::Expressions::ExpressionType const& __get_NodeType() const;

// Ctor Parameters [CppParam { name: "", ty: "__Expression__ExtensionInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Expression__ExtensionInfo(__Expression__ExtensionInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Expression__ExtensionInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Expression__ExtensionInfo(__Expression__ExtensionInfo const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __Expression__ExtensionInfo()  = default;
public:


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::__Expression__ExtensionInfo, 0x18>, "Size mismatch!");

} // namespace end def System::Linq::Expressions
// Type: System.Linq.Expressions::Expression
namespace System::Linq::Expressions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14300))
// CS Name: ::System.Linq.Expressions::Expression*
class CORDL_TYPE Expression : public ::System::Object {
public:
// Declarations
using ExtensionInfo = ::System::Linq::Expressions::__Expression__ExtensionInfo;

using UnaryExpressionProxy = ::System::Linq::Expressions::__Expression__UnaryExpressionProxy;

using MemberExpressionProxy = ::System::Linq::Expressions::__Expression__MemberExpressionProxy;

using LambdaExpressionProxy = ::System::Linq::Expressions::__Expression__LambdaExpressionProxy;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

 __declspec(property(get=get_NodeType)) ::System::Linq::Expressions::ExpressionType  NodeType;

static inline void setStaticF_s_lambdaDelegateCache(::System::Dynamic::Utils::CacheDict_2<::System::Type*,::System::Reflection::MethodInfo*>*  value) ;

static inline ::System::Dynamic::Utils::CacheDict_2<::System::Type*,::System::Reflection::MethodInfo*>* getStaticF_s_lambdaDelegateCache() ;

static inline void setStaticF_s_legacyCtorSupportTable(::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Linq::Expressions::Expression*,::System::Linq::Expressions::__Expression__ExtensionInfo*>*  value) ;

static inline ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Linq::Expressions::Expression*,::System::Linq::Expressions::__Expression__ExtensionInfo*>* getStaticF_s_legacyCtorSupportTable() ;

/// @brief Method get_NodeType addr 0x2813b1c size 0xf0 virtual true final false
inline ::System::Linq::Expressions::ExpressionType get_NodeType() ;

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

// Static field s_lambdaDelegateCache

// Static field s_legacyCtorSupportTable


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Expression, 0x10>, "Size mismatch!");

} // namespace end def System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::Expression);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Expression*, "System.Linq.Expressions", "Expression");
NEED_NO_BOX(::System::Linq::Expressions::__Expression__ExtensionInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::__Expression__ExtensionInfo*, "System.Linq.Expressions", "Expression/ExtensionInfo");
NEED_NO_BOX(::System::Linq::Expressions::__Expression__LambdaExpressionProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::__Expression__LambdaExpressionProxy*, "System.Linq.Expressions", "Expression/LambdaExpressionProxy");
NEED_NO_BOX(::System::Linq::Expressions::__Expression__MemberExpressionProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::__Expression__MemberExpressionProxy*, "System.Linq.Expressions", "Expression/MemberExpressionProxy");
NEED_NO_BOX(::System::Linq::Expressions::__Expression__UnaryExpressionProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::__Expression__UnaryExpressionProxy*, "System.Linq.Expressions", "Expression/UnaryExpressionProxy");
