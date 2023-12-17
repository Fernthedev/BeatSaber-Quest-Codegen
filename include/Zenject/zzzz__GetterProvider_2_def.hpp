#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(GetterProvider_2)
namespace Zenject {
struct TypeValuePair;
}
namespace System {
class Type;
}
namespace System {
class Action;
}
namespace Zenject {
class IProvider;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
struct InjectSources;
}
namespace Zenject {
class DiContainer;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace Zenject {
template<typename TObj,typename TResult>
class GetterProvider_2;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TObj,::il2cpp_utils::il2cpp_reference_type TResult>
class GetterProvider_2<TObj,TResult>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::GetterProvider_2);
// Type: Zenject::GetterProvider`2
// Type: Zenject::GetterProvider`2
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TObj,::il2cpp_utils::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(11193))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11193), inst: 81 })
// CS Name: ::Zenject::GetterProvider`2<TObj,TResult>*
class CORDL_TYPE GetterProvider_2<TObj,TResult> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field _container offset 0x10
 __declspec(property(get=__get__container, put=__set__container)) ::Zenject::DiContainer*  _container;

/// @brief Field _identifier offset 0x18
 __declspec(property(get=__get__identifier, put=__set__identifier)) ::System::Object*  _identifier;

/// @brief Field _method offset 0x20
 __declspec(property(get=__get__method, put=__set__method)) ::System::Func_2<TObj,TResult>*  _method;

/// @brief Field _matchAll offset 0x28
 __declspec(property(get=__get__matchAll, put=__set__matchAll)) bool  _matchAll;

/// @brief Field _sourceType offset 0x2c
 __declspec(property(get=__get__sourceType, put=__set__sourceType)) ::Zenject::InjectSources  _sourceType;

 __declspec(property(get=get_IsCached)) bool  IsCached;

 __declspec(property(get=get_TypeVariesBasedOnMemberType)) bool  TypeVariesBasedOnMemberType;

/// @brief Convert operator to "::Zenject::IProvider"
constexpr operator  ::Zenject::IProvider*() noexcept;

constexpr void __set__container(::Zenject::DiContainer*  value) ;

constexpr ::Zenject::DiContainer* __get__container() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> __get__container() const;

constexpr void __set__identifier(::System::Object*  value) ;

constexpr ::System::Object* __get__identifier() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__identifier() const;

constexpr void __set__method(::System::Func_2<TObj,TResult>*  value) ;

constexpr ::System::Func_2<TObj,TResult>* __get__method() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TObj,TResult>*> __get__method() const;

constexpr void __set__matchAll(bool  value) ;

constexpr bool& __get__matchAll() ;

constexpr bool const& __get__matchAll() const;

constexpr void __set__sourceType(::Zenject::InjectSources  value) ;

constexpr ::Zenject::InjectSources& __get__sourceType() ;

constexpr ::Zenject::InjectSources const& __get__sourceType() const;

static inline ::Zenject::GetterProvider_2<TObj,TResult>* New_ctor(::System::Object*  identifier, ::System::Func_2<TObj,TResult>*  method, ::Zenject::DiContainer*  container, ::Zenject::InjectSources  sourceType, bool  matchAll) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  identifier, ::System::Func_2<TObj,TResult>*  method, ::Zenject::DiContainer*  container, ::Zenject::InjectSources  sourceType, bool  matchAll) ;

/// @brief Method get_IsCached addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool get_IsCached() ;

/// @brief Method get_TypeVariesBasedOnMemberType addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool get_TypeVariesBasedOnMemberType() ;

/// @brief Method GetInstanceType addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Type* GetInstanceType(::Zenject::InjectContext*  context) ;

/// @brief Method GetSubContext addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::InjectContext* GetSubContext(::Zenject::InjectContext*  parent) ;

/// @brief Method GetAllInstancesWithInjectSplit addr 0x0 size 0xffffffffffffffff virtual true final true
inline void GetAllInstancesWithInjectSplit(::Zenject::InjectContext*  context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  args, ByRef<::System::Action*>  injectAction, ::System::Collections::Generic::List_1<::System::Object*>*  buffer) ;

// Ctor Parameters [CppParam { name: "", ty: "GetterProvider_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GetterProvider_2(GetterProvider_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetterProvider_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetterProvider_2(GetterProvider_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GetterProvider_2()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::GetterProvider_2, "Zenject", "GetterProvider`2");
