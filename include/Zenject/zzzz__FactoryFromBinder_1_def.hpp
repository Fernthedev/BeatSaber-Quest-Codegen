#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__FactoryFromBinderBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(FactoryFromBinder_1)
namespace Zenject {
template<typename TContract>
class __FactoryFromBinder_1____c__DisplayClass4_0;
}
namespace Zenject {
class ArgConditionCopyNonLazyBinder;
}
namespace Zenject {
class ConditionCopyNonLazyBinder;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
template<typename TContract>
class __FactoryFromBinder_1____c;
}
namespace Zenject {
struct InjectSources;
}
namespace Zenject {
template<typename TContract>
class FactorySubContainerBinder_1;
}
namespace Zenject {
template<typename TContract,typename TSubFactory>
class __FactoryFromBinder_1____c__5_1;
}
namespace System {
class Object;
}
namespace Zenject {
template<typename TContract>
class __FactoryFromBinder_1____c__DisplayClass8_0;
}
namespace Zenject {
class FactoryBindInfo;
}
namespace Zenject {
template<typename TContract,typename TObj>
class __FactoryFromBinder_1____c__DisplayClass3_0_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
template<typename TContract>
class ConcreteBinderGeneric_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace Zenject {
template<typename TValue>
class IFactory_1;
}
namespace Zenject {
class IProvider;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Zenject {
template<typename TContract>
class FactoryFromBinder_1;
}
namespace Zenject {
template<typename TContract>
class __FactoryFromBinder_1____c;
}
namespace Zenject {
template<typename TContract,typename TSubFactory>
class __FactoryFromBinder_1____c__5_1;
}
namespace Zenject {
template<typename TContract,typename TObj>
class __FactoryFromBinder_1____c__DisplayClass3_0_1;
}
namespace Zenject {
template<typename TContract>
class __FactoryFromBinder_1____c__DisplayClass4_0;
}
namespace Zenject {
template<typename TContract>
class __FactoryFromBinder_1____c__DisplayClass8_0;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TContract>
class FactoryFromBinder_1<TContract>;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TContract>
class __FactoryFromBinder_1____c<TContract>;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TContract,::il2cpp_utils::il2cpp_reference_type TSubFactory>
class __FactoryFromBinder_1____c__5_1<TContract,TSubFactory>;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TContract,::il2cpp_utils::il2cpp_reference_type TObj>
class __FactoryFromBinder_1____c__DisplayClass3_0_1<TContract,TObj>;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TContract>
class __FactoryFromBinder_1____c__DisplayClass4_0<TContract>;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TContract>
class __FactoryFromBinder_1____c__DisplayClass8_0<TContract>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::FactoryFromBinder_1);
MARK_GEN_REF_PTR_T(::Zenject::__FactoryFromBinder_1____c);
MARK_GEN_REF_PTR_T(::Zenject::__FactoryFromBinder_1____c__5_1);
MARK_GEN_REF_PTR_T(::Zenject::__FactoryFromBinder_1____c__DisplayClass3_0_1);
MARK_GEN_REF_PTR_T(::Zenject::__FactoryFromBinder_1____c__DisplayClass4_0);
MARK_GEN_REF_PTR_T(::Zenject::__FactoryFromBinder_1____c__DisplayClass8_0);
// Type: ::<>c__DisplayClass3_0`1
// Type: ::<>c__DisplayClass4_0
// Type: ::<>c__5`1
// Type: ::<>c__DisplayClass8_0
// Type: ::<>c
// Type: Zenject::FactoryFromBinder`1
// Type: ::<>c__DisplayClass3_0`1
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TContract,::il2cpp_utils::il2cpp_reference_type TObj>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10711)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10711), inst: 81 })
// CS Name: ::FactoryFromBinder`1::<>c__DisplayClass3_0`1<TContract,TObj>*
class CORDL_TYPE __FactoryFromBinder_1____c__DisplayClass3_0_1<TContract,TObj> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field subIdentifier offset 0x10
 __declspec(property(get=__get_subIdentifier, put=__set_subIdentifier)) ::System::Object*  subIdentifier;

/// @brief Field method offset 0x18
 __declspec(property(get=__get_method, put=__set_method)) ::System::Func_2<TObj,TContract>*  method;

/// @brief Field source offset 0x20
 __declspec(property(get=__get_source, put=__set_source)) ::Zenject::InjectSources  source;

constexpr void __set_subIdentifier(::System::Object*  value) ;

constexpr ::System::Object* __get_subIdentifier() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get_subIdentifier() const;

constexpr void __set_method(::System::Func_2<TObj,TContract>*  value) ;

constexpr ::System::Func_2<TObj,TContract>* __get_method() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TObj,TContract>*> __get_method() const;

constexpr void __set_source(::Zenject::InjectSources  value) ;

constexpr ::Zenject::InjectSources& __get_source() ;

constexpr ::Zenject::InjectSources const& __get_source() const;

static inline ::Zenject::__FactoryFromBinder_1____c__DisplayClass3_0_1<TContract,TObj>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <FromResolveGetter>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::IProvider* _FromResolveGetter_b__0(::Zenject::DiContainer*  container) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder_1____c__DisplayClass3_0_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__FactoryFromBinder_1____c__DisplayClass3_0_1(__FactoryFromBinder_1____c__DisplayClass3_0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder_1____c__DisplayClass3_0_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__FactoryFromBinder_1____c__DisplayClass3_0_1(__FactoryFromBinder_1____c__DisplayClass3_0_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __FactoryFromBinder_1____c__DisplayClass3_0_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass4_0
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10712)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10712), inst: 2 })
// CS Name: ::FactoryFromBinder`1::<>c__DisplayClass4_0<TContract>*
class CORDL_TYPE __FactoryFromBinder_1____c__DisplayClass4_0<TContract> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field method offset 0x10
 __declspec(property(get=__get_method, put=__set_method)) ::System::Func_2<::Zenject::DiContainer*,TContract>*  method;

constexpr void __set_method(::System::Func_2<::Zenject::DiContainer*,TContract>*  value) ;

constexpr ::System::Func_2<::Zenject::DiContainer*,TContract>* __get_method() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::Zenject::DiContainer*,TContract>*> __get_method() const;

static inline ::Zenject::__FactoryFromBinder_1____c__DisplayClass4_0<TContract>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <FromMethod>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::IProvider* _FromMethod_b__0(::Zenject::DiContainer*  container) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder_1____c__DisplayClass4_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__FactoryFromBinder_1____c__DisplayClass4_0(__FactoryFromBinder_1____c__DisplayClass4_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder_1____c__DisplayClass4_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__FactoryFromBinder_1____c__DisplayClass4_0(__FactoryFromBinder_1____c__DisplayClass4_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __FactoryFromBinder_1____c__DisplayClass4_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__5`1
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TContract,::il2cpp_utils::il2cpp_reference_type TSubFactory>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10713))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10713), inst: 81 })
// CS Name: ::FactoryFromBinder`1::<>c__5`1<TContract,TSubFactory>*
class CORDL_TYPE __FactoryFromBinder_1____c__5_1<TContract,TSubFactory> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::Zenject::__FactoryFromBinder_1____c__5_1<TContract,TSubFactory>*  value) ;

static inline ::Zenject::__FactoryFromBinder_1____c__5_1<TContract,TSubFactory>* getStaticF___9() ;

static inline void setStaticF___9__5_0(::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>*>*  value) ;

static inline ::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>*>* getStaticF___9__5_0() ;

static inline ::Zenject::__FactoryFromBinder_1____c__5_1<TContract,TSubFactory>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <FromFactory>b__5_0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _FromFactory_b__5_0(::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>*  x) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder_1____c__5_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__FactoryFromBinder_1____c__5_1(__FactoryFromBinder_1____c__5_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder_1____c__5_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__FactoryFromBinder_1____c__5_1(__FactoryFromBinder_1____c__5_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __FactoryFromBinder_1____c__5_1()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__5_0


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass8_0
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10714)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10714), inst: 2 })
// CS Name: ::FactoryFromBinder`1::<>c__DisplayClass8_0<TContract>*
class CORDL_TYPE __FactoryFromBinder_1____c__DisplayClass8_0<TContract> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field <>4__this offset 0x10
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::Zenject::FactoryFromBinder_1<TContract>*  __4__this;

/// @brief Field includeInactive offset 0x18
 __declspec(property(get=__get_includeInactive, put=__set_includeInactive)) bool  includeInactive;

/// @brief Field <>9__1 offset 0x20
 __declspec(property(get=__get___9__1, put=__set___9__1)) ::System::Func_2<::UnityEngine::GameObject*,TContract>*  __9__1;

constexpr void __set___4__this(::Zenject::FactoryFromBinder_1<TContract>*  value) ;

constexpr ::Zenject::FactoryFromBinder_1<TContract>* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::FactoryFromBinder_1<TContract>*> __get___4__this() const;

constexpr void __set_includeInactive(bool  value) ;

constexpr bool& __get_includeInactive() ;

constexpr bool const& __get_includeInactive() const;

constexpr void __set___9__1(::System::Func_2<::UnityEngine::GameObject*,TContract>*  value) ;

constexpr ::System::Func_2<::UnityEngine::GameObject*,TContract>* __get___9__1() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::UnityEngine::GameObject*,TContract>*> __get___9__1() const;

static inline ::Zenject::__FactoryFromBinder_1____c__DisplayClass8_0<TContract>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <FromComponentInHierarchy>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline TContract _FromComponentInHierarchy_b__0(::Zenject::DiContainer*  _) ;

/// @brief Method <FromComponentInHierarchy>b__1 addr 0x0 size 0xffffffffffffffff virtual false final false
inline TContract _FromComponentInHierarchy_b__1(::UnityEngine::GameObject*  x) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder_1____c__DisplayClass8_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__FactoryFromBinder_1____c__DisplayClass8_0(__FactoryFromBinder_1____c__DisplayClass8_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder_1____c__DisplayClass8_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__FactoryFromBinder_1____c__DisplayClass8_0(__FactoryFromBinder_1____c__DisplayClass8_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __FactoryFromBinder_1____c__DisplayClass8_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10715)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10715), inst: 2 })
// CS Name: ::FactoryFromBinder`1::<>c<TContract>*
class CORDL_TYPE __FactoryFromBinder_1____c<TContract> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::Zenject::__FactoryFromBinder_1____c<TContract>*  value) ;

static inline ::Zenject::__FactoryFromBinder_1____c<TContract>* getStaticF___9() ;

static inline void setStaticF___9__8_2(::System::Func_2<TContract,bool>*  value) ;

static inline ::System::Func_2<TContract,bool>* getStaticF___9__8_2() ;

static inline ::Zenject::__FactoryFromBinder_1____c<TContract>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <FromComponentInHierarchy>b__8_2 addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool _FromComponentInHierarchy_b__8_2(TContract  x) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder_1____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__FactoryFromBinder_1____c(__FactoryFromBinder_1____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder_1____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__FactoryFromBinder_1____c(__FactoryFromBinder_1____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __FactoryFromBinder_1____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__8_2


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::FactoryFromBinder`1
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10716)), TypeDefinitionIndex(TypeDefinitionIndex(10846))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10716), inst: 2 })
// CS Name: ::Zenject::FactoryFromBinder`1<TContract>*
class CORDL_TYPE FactoryFromBinder_1<TContract> : public ::Zenject::FactoryFromBinderBase {
public:
// Declarations
using __c = ::Zenject::__FactoryFromBinder_1____c<TContract>;

using __c__DisplayClass8_0 = ::Zenject::__FactoryFromBinder_1____c__DisplayClass8_0<TContract>;

template<typename TSubFactory>
using __c__5_1 = ::Zenject::__FactoryFromBinder_1____c__5_1<TContract, TSubFactory>;

using __c__DisplayClass4_0 = ::Zenject::__FactoryFromBinder_1____c__DisplayClass4_0<TContract>;

template<typename TObj>
using __c__DisplayClass3_0_1 = ::Zenject::__FactoryFromBinder_1____c__DisplayClass3_0_1<TContract, TObj>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::Zenject::FactoryFromBinderBase)]{};

static inline ::Zenject::FactoryFromBinder_1<TContract>* New_ctor(::Zenject::DiContainer*  container, ::Zenject::BindInfo*  bindInfo, ::Zenject::FactoryBindInfo*  factoryBindInfo) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Zenject::DiContainer*  container, ::Zenject::BindInfo*  bindInfo, ::Zenject::FactoryBindInfo*  factoryBindInfo) ;

/// @brief Method FromResolveGetter addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObj>
inline ::Zenject::ConditionCopyNonLazyBinder* FromResolveGetter(::System::Func_2<TObj,TContract>*  method) ;

/// @brief Method FromResolveGetter addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObj>
inline ::Zenject::ConditionCopyNonLazyBinder* FromResolveGetter(::System::Object*  subIdentifier, ::System::Func_2<TObj,TContract>*  method) ;

/// @brief Method FromResolveGetter addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObj>
inline ::Zenject::ConditionCopyNonLazyBinder* FromResolveGetter(::System::Object*  subIdentifier, ::System::Func_2<TObj,TContract>*  method, ::Zenject::InjectSources  source) ;

/// @brief Method FromMethod addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::ConditionCopyNonLazyBinder* FromMethod(::System::Func_2<::Zenject::DiContainer*,TContract>*  method) ;

/// @brief Method FromFactory addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TSubFactory>
inline ::Zenject::ArgConditionCopyNonLazyBinder* FromFactory() ;

/// @brief Method FromSubContainerResolve addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::FactorySubContainerBinder_1<TContract>* FromSubContainerResolve() ;

/// @brief Method FromSubContainerResolve addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::FactorySubContainerBinder_1<TContract>* FromSubContainerResolve(::System::Object*  subIdentifier) ;

/// @brief Method FromComponentInHierarchy addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::ConditionCopyNonLazyBinder* FromComponentInHierarchy(bool  includeInactive) ;

// Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinder_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FactoryFromBinder_1(FactoryFromBinder_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinder_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FactoryFromBinder_1(FactoryFromBinder_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FactoryFromBinder_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FactoryFromBinder_1, "Zenject", "FactoryFromBinder`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__FactoryFromBinder_1____c, "Zenject", "FactoryFromBinder`1/<>c");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__FactoryFromBinder_1____c__5_1, "Zenject", "FactoryFromBinder`1/<>c__5`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__FactoryFromBinder_1____c__DisplayClass3_0_1, "Zenject", "FactoryFromBinder`1/<>c__DisplayClass3_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__FactoryFromBinder_1____c__DisplayClass4_0, "Zenject", "FactoryFromBinder`1/<>c__DisplayClass4_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__FactoryFromBinder_1____c__DisplayClass8_0, "Zenject", "FactoryFromBinder`1/<>c__DisplayClass8_0");
