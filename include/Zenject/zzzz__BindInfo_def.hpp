#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BindInfo)
namespace Zenject {
struct ToChoices;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Type;
}
namespace System {
class IDisposable;
}
namespace Zenject {
struct BindingInheritanceMethods;
}
namespace Zenject {
class InjectContext;
}
namespace System {
class Object;
}
namespace Zenject {
struct ScopeTypes;
}
namespace Zenject {
struct InvalidBindResponses;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace Zenject {
class BindingCondition;
}
namespace Zenject {
struct TypeValuePair;
}
// Forward declare root types
namespace Zenject {
class BindInfo;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::BindInfo);
// Type: Zenject::BindInfo
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10946))
// CS Name: ::Zenject::BindInfo*
class CORDL_TYPE BindInfo : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::Object)]{};

/// @brief Field MarkAsCreationBinding offset 0x10
 __declspec(property(get=__get_MarkAsCreationBinding, put=__set_MarkAsCreationBinding)) bool  MarkAsCreationBinding;

/// @brief Field MarkAsUniqueSingleton offset 0x11
 __declspec(property(get=__get_MarkAsUniqueSingleton, put=__set_MarkAsUniqueSingleton)) bool  MarkAsUniqueSingleton;

/// @brief Field ConcreteIdentifier offset 0x18
 __declspec(property(get=__get_ConcreteIdentifier, put=__set_ConcreteIdentifier)) ::System::Object*  ConcreteIdentifier;

/// @brief Field SaveProvider offset 0x20
 __declspec(property(get=__get_SaveProvider, put=__set_SaveProvider)) bool  SaveProvider;

/// @brief Field OnlyBindIfNotBound offset 0x21
 __declspec(property(get=__get_OnlyBindIfNotBound, put=__set_OnlyBindIfNotBound)) bool  OnlyBindIfNotBound;

/// @brief Field RequireExplicitScope offset 0x22
 __declspec(property(get=__get_RequireExplicitScope, put=__set_RequireExplicitScope)) bool  RequireExplicitScope;

/// @brief Field Identifier offset 0x28
 __declspec(property(get=__get_Identifier, put=__set_Identifier)) ::System::Object*  Identifier;

/// @brief Field ContractTypes offset 0x30
 __declspec(property(get=__get_ContractTypes, put=__set_ContractTypes)) ::System::Collections::Generic::List_1<::System::Type*>*  ContractTypes;

/// @brief Field BindingInheritanceMethod offset 0x38
 __declspec(property(get=__get_BindingInheritanceMethod, put=__set_BindingInheritanceMethod)) ::Zenject::BindingInheritanceMethods  BindingInheritanceMethod;

/// @brief Field InvalidBindResponse offset 0x3c
 __declspec(property(get=__get_InvalidBindResponse, put=__set_InvalidBindResponse)) ::Zenject::InvalidBindResponses  InvalidBindResponse;

/// @brief Field NonLazy offset 0x40
 __declspec(property(get=__get_NonLazy, put=__set_NonLazy)) bool  NonLazy;

/// @brief Field Condition offset 0x48
 __declspec(property(get=__get_Condition, put=__set_Condition)) ::Zenject::BindingCondition*  Condition;

/// @brief Field ToChoice offset 0x50
 __declspec(property(get=__get_ToChoice, put=__set_ToChoice)) ::Zenject::ToChoices  ToChoice;

/// @brief Field ContextInfo offset 0x58
 __declspec(property(get=__get_ContextInfo, put=__set_ContextInfo)) ::StringW  ContextInfo;

/// @brief Field ToTypes offset 0x60
 __declspec(property(get=__get_ToTypes, put=__set_ToTypes)) ::System::Collections::Generic::List_1<::System::Type*>*  ToTypes;

/// @brief Field Scope offset 0x68
 __declspec(property(get=__get_Scope, put=__set_Scope)) ::Zenject::ScopeTypes  Scope;

/// @brief Field Arguments offset 0x70
 __declspec(property(get=__get_Arguments, put=__set_Arguments)) ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  Arguments;

/// @brief Field InstantiatedCallback offset 0x78
 __declspec(property(get=__get_InstantiatedCallback, put=__set_InstantiatedCallback)) ::System::Action_2<::Zenject::InjectContext*,::System::Object*>*  InstantiatedCallback;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set_MarkAsCreationBinding(bool  value) ;

constexpr bool& __get_MarkAsCreationBinding() ;

constexpr bool const& __get_MarkAsCreationBinding() const;

constexpr void __set_MarkAsUniqueSingleton(bool  value) ;

constexpr bool& __get_MarkAsUniqueSingleton() ;

constexpr bool const& __get_MarkAsUniqueSingleton() const;

constexpr void __set_ConcreteIdentifier(::System::Object*  value) ;

constexpr ::System::Object* __get_ConcreteIdentifier() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get_ConcreteIdentifier() const;

constexpr void __set_SaveProvider(bool  value) ;

constexpr bool& __get_SaveProvider() ;

constexpr bool const& __get_SaveProvider() const;

constexpr void __set_OnlyBindIfNotBound(bool  value) ;

constexpr bool& __get_OnlyBindIfNotBound() ;

constexpr bool const& __get_OnlyBindIfNotBound() const;

constexpr void __set_RequireExplicitScope(bool  value) ;

constexpr bool& __get_RequireExplicitScope() ;

constexpr bool const& __get_RequireExplicitScope() const;

constexpr void __set_Identifier(::System::Object*  value) ;

constexpr ::System::Object* __get_Identifier() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get_Identifier() const;

constexpr void __set_ContractTypes(::System::Collections::Generic::List_1<::System::Type*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::System::Type*>* __get_ContractTypes() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Type*>*> __get_ContractTypes() const;

constexpr void __set_BindingInheritanceMethod(::Zenject::BindingInheritanceMethods  value) ;

constexpr ::Zenject::BindingInheritanceMethods& __get_BindingInheritanceMethod() ;

constexpr ::Zenject::BindingInheritanceMethods const& __get_BindingInheritanceMethod() const;

constexpr void __set_InvalidBindResponse(::Zenject::InvalidBindResponses  value) ;

constexpr ::Zenject::InvalidBindResponses& __get_InvalidBindResponse() ;

constexpr ::Zenject::InvalidBindResponses const& __get_InvalidBindResponse() const;

constexpr void __set_NonLazy(bool  value) ;

constexpr bool& __get_NonLazy() ;

constexpr bool const& __get_NonLazy() const;

constexpr void __set_Condition(::Zenject::BindingCondition*  value) ;

constexpr ::Zenject::BindingCondition* __get_Condition() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::BindingCondition*> __get_Condition() const;

constexpr void __set_ToChoice(::Zenject::ToChoices  value) ;

constexpr ::Zenject::ToChoices& __get_ToChoice() ;

constexpr ::Zenject::ToChoices const& __get_ToChoice() const;

constexpr void __set_ContextInfo(::StringW  value) ;

constexpr ::StringW& __get_ContextInfo() ;

constexpr ::StringW const& __get_ContextInfo() const;

constexpr void __set_ToTypes(::System::Collections::Generic::List_1<::System::Type*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::System::Type*>* __get_ToTypes() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Type*>*> __get_ToTypes() const;

constexpr void __set_Scope(::Zenject::ScopeTypes  value) ;

constexpr ::Zenject::ScopeTypes& __get_Scope() ;

constexpr ::Zenject::ScopeTypes const& __get_Scope() const;

constexpr void __set_Arguments(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  value) ;

constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* __get_Arguments() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*> __get_Arguments() const;

constexpr void __set_InstantiatedCallback(::System::Action_2<::Zenject::InjectContext*,::System::Object*>*  value) ;

constexpr ::System::Action_2<::Zenject::InjectContext*,::System::Object*>* __get_InstantiatedCallback() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::Zenject::InjectContext*,::System::Object*>*> __get_InstantiatedCallback() const;

static inline ::Zenject::BindInfo* New_ctor() ;

/// @brief Method .ctor addr 0x2ede974 size 0xec virtual false final false
inline void _ctor() ;

/// @brief Method Dispose addr 0x2edeb5c size 0x58 virtual true final true
inline void Dispose() ;

/// @brief Method SetContextInfo addr 0x2edebb4 size 0x8 virtual false final false
inline void SetContextInfo(::StringW  contextInfo) ;

/// @brief Method Reset addr 0x2edea60 size 0xfc virtual false final false
inline void Reset() ;

// Ctor Parameters [CppParam { name: "", ty: "BindInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BindInfo(BindInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BindInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BindInfo(BindInfo const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BindInfo()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::BindInfo, 0x80>, "Size mismatch!");

} // namespace end def Zenject
NEED_NO_BOX(::Zenject::BindInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::BindInfo*, "Zenject", "BindInfo");
