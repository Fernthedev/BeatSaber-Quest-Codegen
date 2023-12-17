#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MethodProviderMultiple_1)
namespace Zenject {
class InjectContext;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace Zenject {
class IProvider;
}
namespace Zenject {
class DiContainer;
}
namespace System {
class Type;
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
namespace System {
class Action;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace GlobalNamespace {
struct __PerformanceToolLauncher__OverrideConfig;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
// Forward declare root types
namespace Zenject {
template<typename TReturn>
class MethodProviderMultiple_1;
}
namespace Zenject {
template<>
class MethodProviderMultiple_1<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>>;
}
namespace Zenject {
template<::cordl_internals::is_or_is_backed_by<int32_t> TReturn>
class MethodProviderMultiple_1<TReturn>;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TReturn>
class MethodProviderMultiple_1<TReturn>;
}
namespace Zenject {
template<>
class MethodProviderMultiple_1<float_t>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::MethodProviderMultiple_1);
// Type: Zenject::MethodProviderMultiple`1
// Type: Zenject::MethodProviderMultiple`1
namespace Zenject {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11208)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11208), inst: 6140 })
// CS Name: ::Zenject::MethodProviderMultiple`1<TReturn>*
class CORDL_TYPE MethodProviderMultiple_1<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _container offset 0x10
 __declspec(property(get=__get__container, put=__set__container)) ::Zenject::DiContainer*  _container;

/// @brief Field _method offset 0x18
 __declspec(property(get=__get__method, put=__set__method)) ::System::Func_2<::Zenject::InjectContext*,::System::Collections::Generic::IEnumerable_1<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>>*>*  _method;

 __declspec(property(get=get_IsCached)) bool  IsCached;

 __declspec(property(get=get_TypeVariesBasedOnMemberType)) bool  TypeVariesBasedOnMemberType;

/// @brief Convert operator to "::Zenject::IProvider"
constexpr operator  ::Zenject::IProvider*() noexcept;

constexpr void __set__container(::Zenject::DiContainer*  value) ;

constexpr ::Zenject::DiContainer* __get__container() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> __get__container() const;

constexpr void __set__method(::System::Func_2<::Zenject::InjectContext*,::System::Collections::Generic::IEnumerable_1<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>>*>*  value) ;

constexpr ::System::Func_2<::Zenject::InjectContext*,::System::Collections::Generic::IEnumerable_1<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>>*>* __get__method() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::Zenject::InjectContext*,::System::Collections::Generic::IEnumerable_1<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>>*>*> __get__method() const;

static inline ::Zenject::MethodProviderMultiple_1<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>>* New_ctor(::System::Func_2<::Zenject::InjectContext*,::System::Collections::Generic::IEnumerable_1<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>>*>*  method, ::Zenject::DiContainer*  container) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_2<::Zenject::InjectContext*,::System::Collections::Generic::IEnumerable_1<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>>*>*  method, ::Zenject::DiContainer*  container) ;

/// @brief Method get_IsCached addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool get_IsCached() ;

/// @brief Method get_TypeVariesBasedOnMemberType addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool get_TypeVariesBasedOnMemberType() ;

/// @brief Method GetInstanceType addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Type* GetInstanceType(::Zenject::InjectContext*  context) ;

/// @brief Method GetAllInstancesWithInjectSplit addr 0x0 size 0xffffffffffffffff virtual true final true
inline void GetAllInstancesWithInjectSplit(::Zenject::InjectContext*  context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  args, ByRef<::System::Action*>  injectAction, ::System::Collections::Generic::List_1<::System::Object*>*  buffer) ;

// Ctor Parameters [CppParam { name: "", ty: "MethodProviderMultiple_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MethodProviderMultiple_1(MethodProviderMultiple_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MethodProviderMultiple_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MethodProviderMultiple_1(MethodProviderMultiple_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MethodProviderMultiple_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::MethodProviderMultiple`1
namespace Zenject {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> TReturn>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11208)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11208), inst: 974 })
// CS Name: ::Zenject::MethodProviderMultiple`1<TReturn>*
class CORDL_TYPE MethodProviderMultiple_1<TReturn> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _container offset 0x10
 __declspec(property(get=__get__container, put=__set__container)) ::Zenject::DiContainer*  _container;

/// @brief Field _method offset 0x18
 __declspec(property(get=__get__method, put=__set__method)) ::System::Func_2<::Zenject::InjectContext*,::System::Collections::Generic::IEnumerable_1<TReturn>*>*  _method;

 __declspec(property(get=get_IsCached)) bool  IsCached;

 __declspec(property(get=get_TypeVariesBasedOnMemberType)) bool  TypeVariesBasedOnMemberType;

/// @brief Convert operator to "::Zenject::IProvider"
constexpr operator  ::Zenject::IProvider*() noexcept;

constexpr void __set__container(::Zenject::DiContainer*  value) ;

constexpr ::Zenject::DiContainer* __get__container() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> __get__container() const;

constexpr void __set__method(::System::Func_2<::Zenject::InjectContext*,::System::Collections::Generic::IEnumerable_1<TReturn>*>*  value) ;

constexpr ::System::Func_2<::Zenject::InjectContext*,::System::Collections::Generic::IEnumerable_1<TReturn>*>* __get__method() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::Zenject::InjectContext*,::System::Collections::Generic::IEnumerable_1<TReturn>*>*> __get__method() const;

static inline ::Zenject::MethodProviderMultiple_1<TReturn>* New_ctor(::System::Func_2<::Zenject::InjectContext*,::System::Collections::Generic::IEnumerable_1<TReturn>*>*  method, ::Zenject::DiContainer*  container) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_2<::Zenject::InjectContext*,::System::Collections::Generic::IEnumerable_1<TReturn>*>*  method, ::Zenject::DiContainer*  container) ;

/// @brief Method get_IsCached addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool get_IsCached() ;

/// @brief Method get_TypeVariesBasedOnMemberType addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool get_TypeVariesBasedOnMemberType() ;

/// @brief Method GetInstanceType addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Type* GetInstanceType(::Zenject::InjectContext*  context) ;

/// @brief Method GetAllInstancesWithInjectSplit addr 0x0 size 0xffffffffffffffff virtual true final true
inline void GetAllInstancesWithInjectSplit(::Zenject::InjectContext*  context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  args, ByRef<::System::Action*>  injectAction, ::System::Collections::Generic::List_1<::System::Object*>*  buffer) ;

// Ctor Parameters [CppParam { name: "", ty: "MethodProviderMultiple_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MethodProviderMultiple_1(MethodProviderMultiple_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MethodProviderMultiple_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MethodProviderMultiple_1(MethodProviderMultiple_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MethodProviderMultiple_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::MethodProviderMultiple`1
namespace Zenject {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(11208))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11208), inst: 391 })
// CS Name: ::Zenject::MethodProviderMultiple`1<TReturn>*
class CORDL_TYPE MethodProviderMultiple_1<float_t> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _container offset 0x10
 __declspec(property(get=__get__container, put=__set__container)) ::Zenject::DiContainer*  _container;

/// @brief Field _method offset 0x18
 __declspec(property(get=__get__method, put=__set__method)) ::System::Func_2<::Zenject::InjectContext*,::System::Collections::Generic::IEnumerable_1<float_t>*>*  _method;

 __declspec(property(get=get_IsCached)) bool  IsCached;

 __declspec(property(get=get_TypeVariesBasedOnMemberType)) bool  TypeVariesBasedOnMemberType;

/// @brief Convert operator to "::Zenject::IProvider"
constexpr operator  ::Zenject::IProvider*() noexcept;

constexpr void __set__container(::Zenject::DiContainer*  value) ;

constexpr ::Zenject::DiContainer* __get__container() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> __get__container() const;

constexpr void __set__method(::System::Func_2<::Zenject::InjectContext*,::System::Collections::Generic::IEnumerable_1<float_t>*>*  value) ;

constexpr ::System::Func_2<::Zenject::InjectContext*,::System::Collections::Generic::IEnumerable_1<float_t>*>* __get__method() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::Zenject::InjectContext*,::System::Collections::Generic::IEnumerable_1<float_t>*>*> __get__method() const;

static inline ::Zenject::MethodProviderMultiple_1<float_t>* New_ctor(::System::Func_2<::Zenject::InjectContext*,::System::Collections::Generic::IEnumerable_1<float_t>*>*  method, ::Zenject::DiContainer*  container) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_2<::Zenject::InjectContext*,::System::Collections::Generic::IEnumerable_1<float_t>*>*  method, ::Zenject::DiContainer*  container) ;

/// @brief Method get_IsCached addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool get_IsCached() ;

/// @brief Method get_TypeVariesBasedOnMemberType addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool get_TypeVariesBasedOnMemberType() ;

/// @brief Method GetInstanceType addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Type* GetInstanceType(::Zenject::InjectContext*  context) ;

/// @brief Method GetAllInstancesWithInjectSplit addr 0x0 size 0xffffffffffffffff virtual true final true
inline void GetAllInstancesWithInjectSplit(::Zenject::InjectContext*  context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  args, ByRef<::System::Action*>  injectAction, ::System::Collections::Generic::List_1<::System::Object*>*  buffer) ;

// Ctor Parameters [CppParam { name: "", ty: "MethodProviderMultiple_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MethodProviderMultiple_1(MethodProviderMultiple_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MethodProviderMultiple_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MethodProviderMultiple_1(MethodProviderMultiple_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MethodProviderMultiple_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::MethodProviderMultiple`1
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TReturn>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11208)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11208), inst: 2 })
// CS Name: ::Zenject::MethodProviderMultiple`1<TReturn>*
class CORDL_TYPE MethodProviderMultiple_1<TReturn> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _container offset 0x10
 __declspec(property(get=__get__container, put=__set__container)) ::Zenject::DiContainer*  _container;

/// @brief Field _method offset 0x18
 __declspec(property(get=__get__method, put=__set__method)) ::System::Func_2<::Zenject::InjectContext*,::System::Collections::Generic::IEnumerable_1<TReturn>*>*  _method;

 __declspec(property(get=get_IsCached)) bool  IsCached;

 __declspec(property(get=get_TypeVariesBasedOnMemberType)) bool  TypeVariesBasedOnMemberType;

/// @brief Convert operator to "::Zenject::IProvider"
constexpr operator  ::Zenject::IProvider*() noexcept;

constexpr void __set__container(::Zenject::DiContainer*  value) ;

constexpr ::Zenject::DiContainer* __get__container() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> __get__container() const;

constexpr void __set__method(::System::Func_2<::Zenject::InjectContext*,::System::Collections::Generic::IEnumerable_1<TReturn>*>*  value) ;

constexpr ::System::Func_2<::Zenject::InjectContext*,::System::Collections::Generic::IEnumerable_1<TReturn>*>* __get__method() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::Zenject::InjectContext*,::System::Collections::Generic::IEnumerable_1<TReturn>*>*> __get__method() const;

static inline ::Zenject::MethodProviderMultiple_1<TReturn>* New_ctor(::System::Func_2<::Zenject::InjectContext*,::System::Collections::Generic::IEnumerable_1<TReturn>*>*  method, ::Zenject::DiContainer*  container) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_2<::Zenject::InjectContext*,::System::Collections::Generic::IEnumerable_1<TReturn>*>*  method, ::Zenject::DiContainer*  container) ;

/// @brief Method get_IsCached addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool get_IsCached() ;

/// @brief Method get_TypeVariesBasedOnMemberType addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool get_TypeVariesBasedOnMemberType() ;

/// @brief Method GetInstanceType addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Type* GetInstanceType(::Zenject::InjectContext*  context) ;

/// @brief Method GetAllInstancesWithInjectSplit addr 0x0 size 0xffffffffffffffff virtual true final true
inline void GetAllInstancesWithInjectSplit(::Zenject::InjectContext*  context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  args, ByRef<::System::Action*>  injectAction, ::System::Collections::Generic::List_1<::System::Object*>*  buffer) ;

// Ctor Parameters [CppParam { name: "", ty: "MethodProviderMultiple_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MethodProviderMultiple_1(MethodProviderMultiple_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MethodProviderMultiple_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MethodProviderMultiple_1(MethodProviderMultiple_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MethodProviderMultiple_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::MethodProviderMultiple_1, "Zenject", "MethodProviderMultiple`1");
