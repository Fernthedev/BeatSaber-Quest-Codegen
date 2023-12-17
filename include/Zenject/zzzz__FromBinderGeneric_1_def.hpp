#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__FromBinder_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FromBinderGeneric_1)
namespace Zenject {
class BindStatement;
}
namespace GlobalNamespace {
struct __PerformanceToolLauncher__OverrideConfig;
}
namespace Zenject {
template<typename TContract>
class ConcreteBinderGeneric_1;
}
namespace Zenject {
struct InjectSources;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
template<typename TContract,typename TFactory>
class __FromBinderGeneric_1____c__1_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace Zenject {
template<typename TContract>
class __FromBinderGeneric_1____c__DisplayClass14_0;
}
namespace Zenject {
class InjectContext;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace Zenject {
template<typename TContract>
class __FromBinderGeneric_1____c__DisplayClass15_0;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class ScopeConcreteIdArgConditionCopyNonLazyBinder;
}
namespace System {
class Object;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace Zenject {
template<typename TValue>
class IFactory_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace Zenject {
template<typename TContract>
class __FromBinderGeneric_1____c__DisplayClass3_0;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace UnityEngine {
class Component;
}
// Forward declare root types
namespace Zenject {
template<typename TContract>
class FromBinderGeneric_1;
}
namespace Zenject {
template<typename TContract,typename TFactory>
class __FromBinderGeneric_1____c__1_1;
}
namespace Zenject {
template<typename TContract>
class __FromBinderGeneric_1____c__DisplayClass14_0;
}
namespace Zenject {
template<typename TContract>
class __FromBinderGeneric_1____c__DisplayClass15_0;
}
namespace Zenject {
template<typename TContract>
class __FromBinderGeneric_1____c__DisplayClass3_0;
}
namespace Zenject {
template<>
class FromBinderGeneric_1<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>>;
}
namespace Zenject {
template<::cordl_internals::is_or_is_backed_by<int32_t> TContract>
class FromBinderGeneric_1<TContract>;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TContract>
class FromBinderGeneric_1<TContract>;
}
namespace Zenject {
template<>
class FromBinderGeneric_1<float_t>;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TContract,::il2cpp_utils::il2cpp_reference_type TFactory>
class __FromBinderGeneric_1____c__1_1<TContract,TFactory>;
}
namespace Zenject {
template<>
class __FromBinderGeneric_1____c__DisplayClass14_0<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>>;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TContract>
class __FromBinderGeneric_1____c__DisplayClass14_0<TContract>;
}
namespace Zenject {
template<::cordl_internals::is_or_is_backed_by<int32_t> TContract>
class __FromBinderGeneric_1____c__DisplayClass14_0<TContract>;
}
namespace Zenject {
template<>
class __FromBinderGeneric_1____c__DisplayClass14_0<float_t>;
}
namespace Zenject {
template<>
class __FromBinderGeneric_1____c__DisplayClass15_0<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>>;
}
namespace Zenject {
template<::cordl_internals::is_or_is_backed_by<int32_t> TContract>
class __FromBinderGeneric_1____c__DisplayClass15_0<TContract>;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TContract>
class __FromBinderGeneric_1____c__DisplayClass15_0<TContract>;
}
namespace Zenject {
template<>
class __FromBinderGeneric_1____c__DisplayClass15_0<float_t>;
}
namespace Zenject {
template<>
class __FromBinderGeneric_1____c__DisplayClass3_0<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>>;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TContract>
class __FromBinderGeneric_1____c__DisplayClass3_0<TContract>;
}
namespace Zenject {
template<::cordl_internals::is_or_is_backed_by<int32_t> TContract>
class __FromBinderGeneric_1____c__DisplayClass3_0<TContract>;
}
namespace Zenject {
template<>
class __FromBinderGeneric_1____c__DisplayClass3_0<float_t>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::FromBinderGeneric_1);
MARK_GEN_REF_PTR_T(::Zenject::__FromBinderGeneric_1____c__1_1);
MARK_GEN_REF_PTR_T(::Zenject::__FromBinderGeneric_1____c__DisplayClass14_0);
MARK_GEN_REF_PTR_T(::Zenject::__FromBinderGeneric_1____c__DisplayClass15_0);
MARK_GEN_REF_PTR_T(::Zenject::__FromBinderGeneric_1____c__DisplayClass3_0);
// Type: ::<>c__1`1
// Type: ::<>c__DisplayClass3_0
// Type: ::<>c__DisplayClass14_0
// Type: ::<>c__DisplayClass15_0
// Type: Zenject::FromBinderGeneric`1
// Type: ::<>c__1`1
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TContract,::il2cpp_utils::il2cpp_reference_type TFactory>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10910)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10910), inst: 81 })
// CS Name: ::FromBinderGeneric`1::<>c__1`1<TContract,TFactory>*
class CORDL_TYPE __FromBinderGeneric_1____c__1_1<TContract,TFactory> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::Zenject::__FromBinderGeneric_1____c__1_1<TContract,TFactory>*  value) ;

static inline ::Zenject::__FromBinderGeneric_1____c__1_1<TContract,TFactory>* getStaticF___9() ;

static inline void setStaticF___9__1_0(::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>*>*  value) ;

static inline ::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>*>* getStaticF___9__1_0() ;

static inline ::Zenject::__FromBinderGeneric_1____c__1_1<TContract,TFactory>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <FromFactory>b__1_0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _FromFactory_b__1_0(::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>*  x) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__FromBinderGeneric_1____c__1_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__FromBinderGeneric_1____c__1_1(__FromBinderGeneric_1____c__1_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__FromBinderGeneric_1____c__1_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__FromBinderGeneric_1____c__1_1(__FromBinderGeneric_1____c__1_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __FromBinderGeneric_1____c__1_1()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__1_0


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass3_0
namespace Zenject {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10911))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10911), inst: 6140 })
// CS Name: ::FromBinderGeneric`1::<>c__DisplayClass3_0<TContract>*
class CORDL_TYPE __FromBinderGeneric_1____c__DisplayClass3_0<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field method offset 0x10
 __declspec(property(get=__get_method, put=__set_method)) ::System::Func_1<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>>*  method;

constexpr void __set_method(::System::Func_1<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>>*  value) ;

constexpr ::System::Func_1<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>>* __get_method() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_1<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>>*> __get_method() const;

static inline ::Zenject::__FromBinderGeneric_1____c__DisplayClass3_0<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <FromMethod>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig> _FromMethod_b__0(::Zenject::InjectContext*  ctx) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__FromBinderGeneric_1____c__DisplayClass3_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__FromBinderGeneric_1____c__DisplayClass3_0(__FromBinderGeneric_1____c__DisplayClass3_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__FromBinderGeneric_1____c__DisplayClass3_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__FromBinderGeneric_1____c__DisplayClass3_0(__FromBinderGeneric_1____c__DisplayClass3_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __FromBinderGeneric_1____c__DisplayClass3_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass3_0
namespace Zenject {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10911)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10911), inst: 974 })
// CS Name: ::FromBinderGeneric`1::<>c__DisplayClass3_0<TContract>*
class CORDL_TYPE __FromBinderGeneric_1____c__DisplayClass3_0<TContract> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field method offset 0x10
 __declspec(property(get=__get_method, put=__set_method)) ::System::Func_1<TContract>*  method;

constexpr void __set_method(::System::Func_1<TContract>*  value) ;

constexpr ::System::Func_1<TContract>* __get_method() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_1<TContract>*> __get_method() const;

static inline ::Zenject::__FromBinderGeneric_1____c__DisplayClass3_0<TContract>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <FromMethod>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline TContract _FromMethod_b__0(::Zenject::InjectContext*  ctx) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__FromBinderGeneric_1____c__DisplayClass3_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__FromBinderGeneric_1____c__DisplayClass3_0(__FromBinderGeneric_1____c__DisplayClass3_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__FromBinderGeneric_1____c__DisplayClass3_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__FromBinderGeneric_1____c__DisplayClass3_0(__FromBinderGeneric_1____c__DisplayClass3_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __FromBinderGeneric_1____c__DisplayClass3_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass3_0
namespace Zenject {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10911)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10911), inst: 391 })
// CS Name: ::FromBinderGeneric`1::<>c__DisplayClass3_0<TContract>*
class CORDL_TYPE __FromBinderGeneric_1____c__DisplayClass3_0<float_t> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field method offset 0x10
 __declspec(property(get=__get_method, put=__set_method)) ::System::Func_1<float_t>*  method;

constexpr void __set_method(::System::Func_1<float_t>*  value) ;

constexpr ::System::Func_1<float_t>* __get_method() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_1<float_t>*> __get_method() const;

static inline ::Zenject::__FromBinderGeneric_1____c__DisplayClass3_0<float_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <FromMethod>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline float_t _FromMethod_b__0(::Zenject::InjectContext*  ctx) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__FromBinderGeneric_1____c__DisplayClass3_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__FromBinderGeneric_1____c__DisplayClass3_0(__FromBinderGeneric_1____c__DisplayClass3_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__FromBinderGeneric_1____c__DisplayClass3_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__FromBinderGeneric_1____c__DisplayClass3_0(__FromBinderGeneric_1____c__DisplayClass3_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __FromBinderGeneric_1____c__DisplayClass3_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass3_0
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10911))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10911), inst: 2 })
// CS Name: ::FromBinderGeneric`1::<>c__DisplayClass3_0<TContract>*
class CORDL_TYPE __FromBinderGeneric_1____c__DisplayClass3_0<TContract> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field method offset 0x10
 __declspec(property(get=__get_method, put=__set_method)) ::System::Func_1<TContract>*  method;

constexpr void __set_method(::System::Func_1<TContract>*  value) ;

constexpr ::System::Func_1<TContract>* __get_method() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_1<TContract>*> __get_method() const;

static inline ::Zenject::__FromBinderGeneric_1____c__DisplayClass3_0<TContract>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <FromMethod>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline TContract _FromMethod_b__0(::Zenject::InjectContext*  ctx) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__FromBinderGeneric_1____c__DisplayClass3_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__FromBinderGeneric_1____c__DisplayClass3_0(__FromBinderGeneric_1____c__DisplayClass3_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__FromBinderGeneric_1____c__DisplayClass3_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__FromBinderGeneric_1____c__DisplayClass3_0(__FromBinderGeneric_1____c__DisplayClass3_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __FromBinderGeneric_1____c__DisplayClass3_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass14_0
namespace Zenject {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10912))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10912), inst: 6140 })
// CS Name: ::FromBinderGeneric`1::<>c__DisplayClass14_0<TContract>*
class CORDL_TYPE __FromBinderGeneric_1____c__DisplayClass14_0<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field predicate offset 0x10
 __declspec(property(get=__get_predicate, put=__set_predicate)) ::System::Func_2<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>,bool>*  predicate;

constexpr void __set_predicate(::System::Func_2<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>,bool>*  value) ;

constexpr ::System::Func_2<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>,bool>* __get_predicate() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>,bool>*> __get_predicate() const;

static inline ::Zenject::__FromBinderGeneric_1____c__DisplayClass14_0<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <FromComponentsInChildren>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool _FromComponentsInChildren_b__0(::UnityEngine::Component*  component) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__FromBinderGeneric_1____c__DisplayClass14_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__FromBinderGeneric_1____c__DisplayClass14_0(__FromBinderGeneric_1____c__DisplayClass14_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__FromBinderGeneric_1____c__DisplayClass14_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__FromBinderGeneric_1____c__DisplayClass14_0(__FromBinderGeneric_1____c__DisplayClass14_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __FromBinderGeneric_1____c__DisplayClass14_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass14_0
namespace Zenject {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10912))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10912), inst: 974 })
// CS Name: ::FromBinderGeneric`1::<>c__DisplayClass14_0<TContract>*
class CORDL_TYPE __FromBinderGeneric_1____c__DisplayClass14_0<TContract> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field predicate offset 0x10
 __declspec(property(get=__get_predicate, put=__set_predicate)) ::System::Func_2<TContract,bool>*  predicate;

constexpr void __set_predicate(::System::Func_2<TContract,bool>*  value) ;

constexpr ::System::Func_2<TContract,bool>* __get_predicate() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TContract,bool>*> __get_predicate() const;

static inline ::Zenject::__FromBinderGeneric_1____c__DisplayClass14_0<TContract>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <FromComponentsInChildren>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool _FromComponentsInChildren_b__0(::UnityEngine::Component*  component) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__FromBinderGeneric_1____c__DisplayClass14_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__FromBinderGeneric_1____c__DisplayClass14_0(__FromBinderGeneric_1____c__DisplayClass14_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__FromBinderGeneric_1____c__DisplayClass14_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__FromBinderGeneric_1____c__DisplayClass14_0(__FromBinderGeneric_1____c__DisplayClass14_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __FromBinderGeneric_1____c__DisplayClass14_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass14_0
namespace Zenject {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10912)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10912), inst: 391 })
// CS Name: ::FromBinderGeneric`1::<>c__DisplayClass14_0<TContract>*
class CORDL_TYPE __FromBinderGeneric_1____c__DisplayClass14_0<float_t> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field predicate offset 0x10
 __declspec(property(get=__get_predicate, put=__set_predicate)) ::System::Func_2<float_t,bool>*  predicate;

constexpr void __set_predicate(::System::Func_2<float_t,bool>*  value) ;

constexpr ::System::Func_2<float_t,bool>* __get_predicate() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<float_t,bool>*> __get_predicate() const;

static inline ::Zenject::__FromBinderGeneric_1____c__DisplayClass14_0<float_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <FromComponentsInChildren>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool _FromComponentsInChildren_b__0(::UnityEngine::Component*  component) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__FromBinderGeneric_1____c__DisplayClass14_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__FromBinderGeneric_1____c__DisplayClass14_0(__FromBinderGeneric_1____c__DisplayClass14_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__FromBinderGeneric_1____c__DisplayClass14_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__FromBinderGeneric_1____c__DisplayClass14_0(__FromBinderGeneric_1____c__DisplayClass14_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __FromBinderGeneric_1____c__DisplayClass14_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass14_0
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10912)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10912), inst: 2 })
// CS Name: ::FromBinderGeneric`1::<>c__DisplayClass14_0<TContract>*
class CORDL_TYPE __FromBinderGeneric_1____c__DisplayClass14_0<TContract> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field predicate offset 0x10
 __declspec(property(get=__get_predicate, put=__set_predicate)) ::System::Func_2<TContract,bool>*  predicate;

constexpr void __set_predicate(::System::Func_2<TContract,bool>*  value) ;

constexpr ::System::Func_2<TContract,bool>* __get_predicate() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TContract,bool>*> __get_predicate() const;

static inline ::Zenject::__FromBinderGeneric_1____c__DisplayClass14_0<TContract>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <FromComponentsInChildren>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool _FromComponentsInChildren_b__0(::UnityEngine::Component*  component) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__FromBinderGeneric_1____c__DisplayClass14_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__FromBinderGeneric_1____c__DisplayClass14_0(__FromBinderGeneric_1____c__DisplayClass14_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__FromBinderGeneric_1____c__DisplayClass14_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__FromBinderGeneric_1____c__DisplayClass14_0(__FromBinderGeneric_1____c__DisplayClass14_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __FromBinderGeneric_1____c__DisplayClass14_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass15_0
namespace Zenject {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10913))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10913), inst: 6140 })
// CS Name: ::FromBinderGeneric`1::<>c__DisplayClass15_0<TContract>*
class CORDL_TYPE __FromBinderGeneric_1____c__DisplayClass15_0<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field predicate offset 0x10
 __declspec(property(get=__get_predicate, put=__set_predicate)) ::System::Func_2<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>,bool>*  predicate;

constexpr void __set_predicate(::System::Func_2<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>,bool>*  value) ;

constexpr ::System::Func_2<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>,bool>* __get_predicate() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>,bool>*> __get_predicate() const;

static inline ::Zenject::__FromBinderGeneric_1____c__DisplayClass15_0<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <FromComponentsInHierarchy>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool _FromComponentsInHierarchy_b__0(::UnityEngine::Component*  component) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__FromBinderGeneric_1____c__DisplayClass15_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__FromBinderGeneric_1____c__DisplayClass15_0(__FromBinderGeneric_1____c__DisplayClass15_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__FromBinderGeneric_1____c__DisplayClass15_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__FromBinderGeneric_1____c__DisplayClass15_0(__FromBinderGeneric_1____c__DisplayClass15_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __FromBinderGeneric_1____c__DisplayClass15_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass15_0
namespace Zenject {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10913)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10913), inst: 974 })
// CS Name: ::FromBinderGeneric`1::<>c__DisplayClass15_0<TContract>*
class CORDL_TYPE __FromBinderGeneric_1____c__DisplayClass15_0<TContract> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field predicate offset 0x10
 __declspec(property(get=__get_predicate, put=__set_predicate)) ::System::Func_2<TContract,bool>*  predicate;

constexpr void __set_predicate(::System::Func_2<TContract,bool>*  value) ;

constexpr ::System::Func_2<TContract,bool>* __get_predicate() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TContract,bool>*> __get_predicate() const;

static inline ::Zenject::__FromBinderGeneric_1____c__DisplayClass15_0<TContract>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <FromComponentsInHierarchy>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool _FromComponentsInHierarchy_b__0(::UnityEngine::Component*  component) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__FromBinderGeneric_1____c__DisplayClass15_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__FromBinderGeneric_1____c__DisplayClass15_0(__FromBinderGeneric_1____c__DisplayClass15_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__FromBinderGeneric_1____c__DisplayClass15_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__FromBinderGeneric_1____c__DisplayClass15_0(__FromBinderGeneric_1____c__DisplayClass15_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __FromBinderGeneric_1____c__DisplayClass15_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass15_0
namespace Zenject {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10913))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10913), inst: 391 })
// CS Name: ::FromBinderGeneric`1::<>c__DisplayClass15_0<TContract>*
class CORDL_TYPE __FromBinderGeneric_1____c__DisplayClass15_0<float_t> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field predicate offset 0x10
 __declspec(property(get=__get_predicate, put=__set_predicate)) ::System::Func_2<float_t,bool>*  predicate;

constexpr void __set_predicate(::System::Func_2<float_t,bool>*  value) ;

constexpr ::System::Func_2<float_t,bool>* __get_predicate() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<float_t,bool>*> __get_predicate() const;

static inline ::Zenject::__FromBinderGeneric_1____c__DisplayClass15_0<float_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <FromComponentsInHierarchy>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool _FromComponentsInHierarchy_b__0(::UnityEngine::Component*  component) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__FromBinderGeneric_1____c__DisplayClass15_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__FromBinderGeneric_1____c__DisplayClass15_0(__FromBinderGeneric_1____c__DisplayClass15_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__FromBinderGeneric_1____c__DisplayClass15_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__FromBinderGeneric_1____c__DisplayClass15_0(__FromBinderGeneric_1____c__DisplayClass15_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __FromBinderGeneric_1____c__DisplayClass15_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass15_0
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10913))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10913), inst: 2 })
// CS Name: ::FromBinderGeneric`1::<>c__DisplayClass15_0<TContract>*
class CORDL_TYPE __FromBinderGeneric_1____c__DisplayClass15_0<TContract> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field predicate offset 0x10
 __declspec(property(get=__get_predicate, put=__set_predicate)) ::System::Func_2<TContract,bool>*  predicate;

constexpr void __set_predicate(::System::Func_2<TContract,bool>*  value) ;

constexpr ::System::Func_2<TContract,bool>* __get_predicate() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TContract,bool>*> __get_predicate() const;

static inline ::Zenject::__FromBinderGeneric_1____c__DisplayClass15_0<TContract>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <FromComponentsInHierarchy>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool _FromComponentsInHierarchy_b__0(::UnityEngine::Component*  component) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__FromBinderGeneric_1____c__DisplayClass15_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__FromBinderGeneric_1____c__DisplayClass15_0(__FromBinderGeneric_1____c__DisplayClass15_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__FromBinderGeneric_1____c__DisplayClass15_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__FromBinderGeneric_1____c__DisplayClass15_0(__FromBinderGeneric_1____c__DisplayClass15_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __FromBinderGeneric_1____c__DisplayClass15_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::FromBinderGeneric`1
namespace Zenject {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10909)), TypeDefinitionIndex(TypeDefinitionIndex(10914))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10914), inst: 6140 })
// CS Name: ::Zenject::FromBinderGeneric`1<TContract>*
class CORDL_TYPE FromBinderGeneric_1<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>> : public ::Zenject::FromBinder {
public:
// Declarations
using __c__DisplayClass15_0 = ::Zenject::__FromBinderGeneric_1____c__DisplayClass15_0<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>>;

using __c__DisplayClass14_0 = ::Zenject::__FromBinderGeneric_1____c__DisplayClass14_0<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>>;

using __c__DisplayClass3_0 = ::Zenject::__FromBinderGeneric_1____c__DisplayClass3_0<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>>;

template<typename TFactory>
using __c__1_1 = ::Zenject::__FromBinderGeneric_1____c__1_1<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>, TFactory>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Zenject::FromBinder)]{};

static inline ::Zenject::FromBinderGeneric_1<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>>* New_ctor(::Zenject::DiContainer*  bindContainer, ::Zenject::BindInfo*  bindInfo, ::Zenject::BindStatement*  bindStatement) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Zenject::DiContainer*  bindContainer, ::Zenject::BindInfo*  bindInfo, ::Zenject::BindStatement*  bindStatement) ;

/// @brief Method FromFactory addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TFactory>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromFactory() ;

/// @brief Method FromIFactory addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromIFactory(::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>>*>*>*  factoryBindGenerator) ;

/// @brief Method FromMethod addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromMethod(::System::Func_1<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>>*  method) ;

/// @brief Method FromMethod addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromMethod(::System::Func_2<::Zenject::InjectContext*,::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>>*  method) ;

/// @brief Method FromMethodMultiple addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromMethodMultiple(::System::Func_2<::Zenject::InjectContext*,::System::Collections::Generic::IEnumerable_1<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>>*>*  method) ;

/// @brief Method FromResolveGetter addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObj>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolveGetter(::System::Func_2<TObj,::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>>*  method) ;

/// @brief Method FromResolveGetter addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObj>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolveGetter(::System::Object*  identifier, ::System::Func_2<TObj,::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>>*  method) ;

/// @brief Method FromResolveGetter addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObj>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolveGetter(::System::Object*  identifier, ::System::Func_2<TObj,::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>>*  method, ::Zenject::InjectSources  source) ;

/// @brief Method FromResolveAllGetter addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObj>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolveAllGetter(::System::Func_2<TObj,::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>>*  method) ;

/// @brief Method FromResolveAllGetter addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObj>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolveAllGetter(::System::Object*  identifier, ::System::Func_2<TObj,::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>>*  method) ;

/// @brief Method FromResolveAllGetter addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObj>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolveAllGetter(::System::Object*  identifier, ::System::Func_2<TObj,::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>>*  method, ::Zenject::InjectSources  source) ;

/// @brief Method FromInstance addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromInstance(::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>  instance) ;

/// @brief Method FromComponentsInChildren addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentsInChildren(::System::Func_2<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>,bool>*  predicate, bool  includeInactive) ;

/// @brief Method FromComponentsInChildren addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentsInChildren(bool  excludeSelf, ::System::Func_2<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>,bool>*  predicate, bool  includeInactive) ;

/// @brief Method FromComponentsInHierarchy addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentsInHierarchy(::System::Func_2<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>,bool>*  predicate, bool  includeInactive) ;

// Ctor Parameters [CppParam { name: "", ty: "FromBinderGeneric_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FromBinderGeneric_1(FromBinderGeneric_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FromBinderGeneric_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FromBinderGeneric_1(FromBinderGeneric_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FromBinderGeneric_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::FromBinderGeneric`1
namespace Zenject {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10909)), TypeDefinitionIndex(TypeDefinitionIndex(10914))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10914), inst: 974 })
// CS Name: ::Zenject::FromBinderGeneric`1<TContract>*
class CORDL_TYPE FromBinderGeneric_1<TContract> : public ::Zenject::FromBinder {
public:
// Declarations
using __c__DisplayClass15_0 = ::Zenject::__FromBinderGeneric_1____c__DisplayClass15_0<TContract>;

using __c__DisplayClass14_0 = ::Zenject::__FromBinderGeneric_1____c__DisplayClass14_0<TContract>;

using __c__DisplayClass3_0 = ::Zenject::__FromBinderGeneric_1____c__DisplayClass3_0<TContract>;

template<typename TFactory>
using __c__1_1 = ::Zenject::__FromBinderGeneric_1____c__1_1<TContract, TFactory>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Zenject::FromBinder)]{};

static inline ::Zenject::FromBinderGeneric_1<TContract>* New_ctor(::Zenject::DiContainer*  bindContainer, ::Zenject::BindInfo*  bindInfo, ::Zenject::BindStatement*  bindStatement) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Zenject::DiContainer*  bindContainer, ::Zenject::BindInfo*  bindInfo, ::Zenject::BindStatement*  bindStatement) ;

/// @brief Method FromFactory addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TFactory>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromFactory() ;

/// @brief Method FromIFactory addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromIFactory(::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>*>*  factoryBindGenerator) ;

/// @brief Method FromMethod addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromMethod(::System::Func_1<TContract>*  method) ;

/// @brief Method FromMethod addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromMethod(::System::Func_2<::Zenject::InjectContext*,TContract>*  method) ;

/// @brief Method FromMethodMultiple addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromMethodMultiple(::System::Func_2<::Zenject::InjectContext*,::System::Collections::Generic::IEnumerable_1<TContract>*>*  method) ;

/// @brief Method FromResolveGetter addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObj>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolveGetter(::System::Func_2<TObj,TContract>*  method) ;

/// @brief Method FromResolveGetter addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObj>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolveGetter(::System::Object*  identifier, ::System::Func_2<TObj,TContract>*  method) ;

/// @brief Method FromResolveGetter addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObj>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolveGetter(::System::Object*  identifier, ::System::Func_2<TObj,TContract>*  method, ::Zenject::InjectSources  source) ;

/// @brief Method FromResolveAllGetter addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObj>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolveAllGetter(::System::Func_2<TObj,TContract>*  method) ;

/// @brief Method FromResolveAllGetter addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObj>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolveAllGetter(::System::Object*  identifier, ::System::Func_2<TObj,TContract>*  method) ;

/// @brief Method FromResolveAllGetter addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObj>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolveAllGetter(::System::Object*  identifier, ::System::Func_2<TObj,TContract>*  method, ::Zenject::InjectSources  source) ;

/// @brief Method FromInstance addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromInstance(TContract  instance) ;

/// @brief Method FromComponentsInChildren addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentsInChildren(::System::Func_2<TContract,bool>*  predicate, bool  includeInactive) ;

/// @brief Method FromComponentsInChildren addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentsInChildren(bool  excludeSelf, ::System::Func_2<TContract,bool>*  predicate, bool  includeInactive) ;

/// @brief Method FromComponentsInHierarchy addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentsInHierarchy(::System::Func_2<TContract,bool>*  predicate, bool  includeInactive) ;

// Ctor Parameters [CppParam { name: "", ty: "FromBinderGeneric_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FromBinderGeneric_1(FromBinderGeneric_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FromBinderGeneric_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FromBinderGeneric_1(FromBinderGeneric_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FromBinderGeneric_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::FromBinderGeneric`1
namespace Zenject {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10914)), TypeDefinitionIndex(TypeDefinitionIndex(10909))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10914), inst: 391 })
// CS Name: ::Zenject::FromBinderGeneric`1<TContract>*
class CORDL_TYPE FromBinderGeneric_1<float_t> : public ::Zenject::FromBinder {
public:
// Declarations
using __c__DisplayClass15_0 = ::Zenject::__FromBinderGeneric_1____c__DisplayClass15_0<float_t>;

using __c__DisplayClass14_0 = ::Zenject::__FromBinderGeneric_1____c__DisplayClass14_0<float_t>;

using __c__DisplayClass3_0 = ::Zenject::__FromBinderGeneric_1____c__DisplayClass3_0<float_t>;

template<typename TFactory>
using __c__1_1 = ::Zenject::__FromBinderGeneric_1____c__1_1<float_t, TFactory>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Zenject::FromBinder)]{};

static inline ::Zenject::FromBinderGeneric_1<float_t>* New_ctor(::Zenject::DiContainer*  bindContainer, ::Zenject::BindInfo*  bindInfo, ::Zenject::BindStatement*  bindStatement) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Zenject::DiContainer*  bindContainer, ::Zenject::BindInfo*  bindInfo, ::Zenject::BindStatement*  bindStatement) ;

/// @brief Method FromFactory addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TFactory>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromFactory() ;

/// @brief Method FromIFactory addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromIFactory(::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<float_t>*>*>*  factoryBindGenerator) ;

/// @brief Method FromMethod addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromMethod(::System::Func_1<float_t>*  method) ;

/// @brief Method FromMethod addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromMethod(::System::Func_2<::Zenject::InjectContext*,float_t>*  method) ;

/// @brief Method FromMethodMultiple addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromMethodMultiple(::System::Func_2<::Zenject::InjectContext*,::System::Collections::Generic::IEnumerable_1<float_t>*>*  method) ;

/// @brief Method FromResolveGetter addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObj>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolveGetter(::System::Func_2<TObj,float_t>*  method) ;

/// @brief Method FromResolveGetter addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObj>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolveGetter(::System::Object*  identifier, ::System::Func_2<TObj,float_t>*  method) ;

/// @brief Method FromResolveGetter addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObj>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolveGetter(::System::Object*  identifier, ::System::Func_2<TObj,float_t>*  method, ::Zenject::InjectSources  source) ;

/// @brief Method FromResolveAllGetter addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObj>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolveAllGetter(::System::Func_2<TObj,float_t>*  method) ;

/// @brief Method FromResolveAllGetter addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObj>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolveAllGetter(::System::Object*  identifier, ::System::Func_2<TObj,float_t>*  method) ;

/// @brief Method FromResolveAllGetter addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObj>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolveAllGetter(::System::Object*  identifier, ::System::Func_2<TObj,float_t>*  method, ::Zenject::InjectSources  source) ;

/// @brief Method FromInstance addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromInstance(float_t  instance) ;

/// @brief Method FromComponentsInChildren addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentsInChildren(::System::Func_2<float_t,bool>*  predicate, bool  includeInactive) ;

/// @brief Method FromComponentsInChildren addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentsInChildren(bool  excludeSelf, ::System::Func_2<float_t,bool>*  predicate, bool  includeInactive) ;

/// @brief Method FromComponentsInHierarchy addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentsInHierarchy(::System::Func_2<float_t,bool>*  predicate, bool  includeInactive) ;

// Ctor Parameters [CppParam { name: "", ty: "FromBinderGeneric_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FromBinderGeneric_1(FromBinderGeneric_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FromBinderGeneric_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FromBinderGeneric_1(FromBinderGeneric_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FromBinderGeneric_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::FromBinderGeneric`1
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10914)), TypeDefinitionIndex(TypeDefinitionIndex(10909))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10914), inst: 2 })
// CS Name: ::Zenject::FromBinderGeneric`1<TContract>*
class CORDL_TYPE FromBinderGeneric_1<TContract> : public ::Zenject::FromBinder {
public:
// Declarations
using __c__DisplayClass15_0 = ::Zenject::__FromBinderGeneric_1____c__DisplayClass15_0<TContract>;

using __c__DisplayClass14_0 = ::Zenject::__FromBinderGeneric_1____c__DisplayClass14_0<TContract>;

using __c__DisplayClass3_0 = ::Zenject::__FromBinderGeneric_1____c__DisplayClass3_0<TContract>;

template<typename TFactory>
using __c__1_1 = ::Zenject::__FromBinderGeneric_1____c__1_1<TContract, TFactory>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Zenject::FromBinder)]{};

static inline ::Zenject::FromBinderGeneric_1<TContract>* New_ctor(::Zenject::DiContainer*  bindContainer, ::Zenject::BindInfo*  bindInfo, ::Zenject::BindStatement*  bindStatement) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Zenject::DiContainer*  bindContainer, ::Zenject::BindInfo*  bindInfo, ::Zenject::BindStatement*  bindStatement) ;

/// @brief Method FromFactory addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TFactory>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromFactory() ;

/// @brief Method FromIFactory addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromIFactory(::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>*>*  factoryBindGenerator) ;

/// @brief Method FromMethod addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromMethod(::System::Func_1<TContract>*  method) ;

/// @brief Method FromMethod addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromMethod(::System::Func_2<::Zenject::InjectContext*,TContract>*  method) ;

/// @brief Method FromMethodMultiple addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromMethodMultiple(::System::Func_2<::Zenject::InjectContext*,::System::Collections::Generic::IEnumerable_1<TContract>*>*  method) ;

/// @brief Method FromResolveGetter addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObj>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolveGetter(::System::Func_2<TObj,TContract>*  method) ;

/// @brief Method FromResolveGetter addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObj>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolveGetter(::System::Object*  identifier, ::System::Func_2<TObj,TContract>*  method) ;

/// @brief Method FromResolveGetter addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObj>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolveGetter(::System::Object*  identifier, ::System::Func_2<TObj,TContract>*  method, ::Zenject::InjectSources  source) ;

/// @brief Method FromResolveAllGetter addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObj>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolveAllGetter(::System::Func_2<TObj,TContract>*  method) ;

/// @brief Method FromResolveAllGetter addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObj>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolveAllGetter(::System::Object*  identifier, ::System::Func_2<TObj,TContract>*  method) ;

/// @brief Method FromResolveAllGetter addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObj>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolveAllGetter(::System::Object*  identifier, ::System::Func_2<TObj,TContract>*  method, ::Zenject::InjectSources  source) ;

/// @brief Method FromInstance addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromInstance(TContract  instance) ;

/// @brief Method FromComponentsInChildren addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentsInChildren(::System::Func_2<TContract,bool>*  predicate, bool  includeInactive) ;

/// @brief Method FromComponentsInChildren addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentsInChildren(bool  excludeSelf, ::System::Func_2<TContract,bool>*  predicate, bool  includeInactive) ;

/// @brief Method FromComponentsInHierarchy addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentsInHierarchy(::System::Func_2<TContract,bool>*  predicate, bool  includeInactive) ;

// Ctor Parameters [CppParam { name: "", ty: "FromBinderGeneric_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FromBinderGeneric_1(FromBinderGeneric_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FromBinderGeneric_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FromBinderGeneric_1(FromBinderGeneric_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FromBinderGeneric_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FromBinderGeneric_1, "Zenject", "FromBinderGeneric`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__FromBinderGeneric_1____c__1_1, "Zenject", "FromBinderGeneric`1/<>c__1`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__FromBinderGeneric_1____c__DisplayClass14_0, "Zenject", "FromBinderGeneric`1/<>c__DisplayClass14_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__FromBinderGeneric_1____c__DisplayClass15_0, "Zenject", "FromBinderGeneric`1/<>c__DisplayClass15_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__FromBinderGeneric_1____c__DisplayClass3_0, "Zenject", "FromBinderGeneric`1/<>c__DisplayClass3_0");
