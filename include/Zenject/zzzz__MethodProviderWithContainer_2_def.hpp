#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MethodProviderWithContainer_2)
namespace System {
class Type;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace Zenject {
class IProvider;
}
namespace Zenject {
struct TypeValuePair;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Object;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class InjectContext;
}
namespace System {
class Action;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TValue>
class MethodProviderWithContainer_2;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TValue>
class MethodProviderWithContainer_2<TParam1,TValue>;
}
namespace Zenject {
template<::cordl_internals::is_or_is_backed_by<int32_t> TParam1,::il2cpp_utils::il2cpp_reference_type TValue>
class MethodProviderWithContainer_2<TParam1,TValue>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::MethodProviderWithContainer_2);
// Type: Zenject::MethodProviderWithContainer`2
// Type: Zenject::MethodProviderWithContainer`2
namespace Zenject {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> TParam1,::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(11212))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11212), inst: 1614 })
// CS Name: ::Zenject::MethodProviderWithContainer`2<TParam1,TValue>*
class CORDL_TYPE MethodProviderWithContainer_2<TParam1,TValue> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field _method offset 0x10
 __declspec(property(get=__get__method, put=__set__method)) ::System::Func_3<::Zenject::DiContainer*,TParam1,TValue>*  _method;

 __declspec(property(get=get_IsCached)) bool  IsCached;

 __declspec(property(get=get_TypeVariesBasedOnMemberType)) bool  TypeVariesBasedOnMemberType;

/// @brief Convert operator to "::Zenject::IProvider"
constexpr operator  ::Zenject::IProvider*() noexcept;

constexpr void __set__method(::System::Func_3<::Zenject::DiContainer*,TParam1,TValue>*  value) ;

constexpr ::System::Func_3<::Zenject::DiContainer*,TParam1,TValue>* __get__method() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_3<::Zenject::DiContainer*,TParam1,TValue>*> __get__method() const;

static inline ::Zenject::MethodProviderWithContainer_2<TParam1,TValue>* New_ctor(::System::Func_3<::Zenject::DiContainer*,TParam1,TValue>*  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_3<::Zenject::DiContainer*,TParam1,TValue>*  method) ;

/// @brief Method get_IsCached addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool get_IsCached() ;

/// @brief Method get_TypeVariesBasedOnMemberType addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool get_TypeVariesBasedOnMemberType() ;

/// @brief Method GetInstanceType addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Type* GetInstanceType(::Zenject::InjectContext*  context) ;

/// @brief Method GetAllInstancesWithInjectSplit addr 0x0 size 0xffffffffffffffff virtual true final true
inline void GetAllInstancesWithInjectSplit(::Zenject::InjectContext*  context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  args, ByRef<::System::Action*>  injectAction, ::System::Collections::Generic::List_1<::System::Object*>*  buffer) ;

// Ctor Parameters [CppParam { name: "", ty: "MethodProviderWithContainer_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MethodProviderWithContainer_2(MethodProviderWithContainer_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MethodProviderWithContainer_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MethodProviderWithContainer_2(MethodProviderWithContainer_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MethodProviderWithContainer_2()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::MethodProviderWithContainer`2
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11212)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11212), inst: 81 })
// CS Name: ::Zenject::MethodProviderWithContainer`2<TParam1,TValue>*
class CORDL_TYPE MethodProviderWithContainer_2<TParam1,TValue> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field _method offset 0x10
 __declspec(property(get=__get__method, put=__set__method)) ::System::Func_3<::Zenject::DiContainer*,TParam1,TValue>*  _method;

 __declspec(property(get=get_IsCached)) bool  IsCached;

 __declspec(property(get=get_TypeVariesBasedOnMemberType)) bool  TypeVariesBasedOnMemberType;

/// @brief Convert operator to "::Zenject::IProvider"
constexpr operator  ::Zenject::IProvider*() noexcept;

constexpr void __set__method(::System::Func_3<::Zenject::DiContainer*,TParam1,TValue>*  value) ;

constexpr ::System::Func_3<::Zenject::DiContainer*,TParam1,TValue>* __get__method() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_3<::Zenject::DiContainer*,TParam1,TValue>*> __get__method() const;

static inline ::Zenject::MethodProviderWithContainer_2<TParam1,TValue>* New_ctor(::System::Func_3<::Zenject::DiContainer*,TParam1,TValue>*  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_3<::Zenject::DiContainer*,TParam1,TValue>*  method) ;

/// @brief Method get_IsCached addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool get_IsCached() ;

/// @brief Method get_TypeVariesBasedOnMemberType addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool get_TypeVariesBasedOnMemberType() ;

/// @brief Method GetInstanceType addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Type* GetInstanceType(::Zenject::InjectContext*  context) ;

/// @brief Method GetAllInstancesWithInjectSplit addr 0x0 size 0xffffffffffffffff virtual true final true
inline void GetAllInstancesWithInjectSplit(::Zenject::InjectContext*  context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  args, ByRef<::System::Action*>  injectAction, ::System::Collections::Generic::List_1<::System::Object*>*  buffer) ;

// Ctor Parameters [CppParam { name: "", ty: "MethodProviderWithContainer_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MethodProviderWithContainer_2(MethodProviderWithContainer_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MethodProviderWithContainer_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MethodProviderWithContainer_2(MethodProviderWithContainer_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MethodProviderWithContainer_2()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::MethodProviderWithContainer_2, "Zenject", "MethodProviderWithContainer`2");
