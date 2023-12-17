#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__FactoryFromBinderBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(FactoryFromBinder_7)
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6,typename TContract,typename TSubFactory>
class __FactoryFromBinder_7____c__2_1;
}
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6,typename TContract>
class __FactoryFromBinder_7____c__DisplayClass1_0;
}
namespace Zenject {
class ConditionCopyNonLazyBinder;
}
namespace Zenject {
class DiContainer;
}
namespace System {
class Object;
}
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6,typename TContract>
class FactorySubContainerBinder_7;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class FactoryBindInfo;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename TResult>
class Func_8;
}
namespace Zenject {
template<typename TContract>
class ConcreteBinderGeneric_1;
}
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6,typename TValue>
class IFactory_7;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace System {
template<typename T>
class Action_1;
}
namespace Zenject {
class IProvider;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6,typename TContract>
class FactoryFromBinder_7;
}
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6,typename TContract,typename TSubFactory>
class __FactoryFromBinder_7____c__2_1;
}
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6,typename TContract>
class __FactoryFromBinder_7____c__DisplayClass1_0;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TParam4,::il2cpp_utils::il2cpp_reference_type TParam5,::il2cpp_utils::il2cpp_reference_type TParam6,::il2cpp_utils::il2cpp_reference_type TContract>
class FactoryFromBinder_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract>;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TParam4,::il2cpp_utils::il2cpp_reference_type TParam5,::il2cpp_utils::il2cpp_reference_type TParam6,::il2cpp_utils::il2cpp_reference_type TContract,::il2cpp_utils::il2cpp_reference_type TSubFactory>
class __FactoryFromBinder_7____c__2_1<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract,TSubFactory>;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TParam4,::il2cpp_utils::il2cpp_reference_type TParam5,::il2cpp_utils::il2cpp_reference_type TParam6,::il2cpp_utils::il2cpp_reference_type TContract>
class __FactoryFromBinder_7____c__DisplayClass1_0<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::FactoryFromBinder_7);
MARK_GEN_REF_PTR_T(::Zenject::__FactoryFromBinder_7____c__2_1);
MARK_GEN_REF_PTR_T(::Zenject::__FactoryFromBinder_7____c__DisplayClass1_0);
// Type: ::<>c__DisplayClass1_0
// Type: ::<>c__2`1
// Type: Zenject::FactoryFromBinder`7
// Type: ::<>c__DisplayClass1_0
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TParam4,::il2cpp_utils::il2cpp_reference_type TParam5,::il2cpp_utils::il2cpp_reference_type TParam6,::il2cpp_utils::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10772))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10772), inst: 6127 })
// CS Name: ::FactoryFromBinder`7::<>c__DisplayClass1_0<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract>*
class CORDL_TYPE __FactoryFromBinder_7____c__DisplayClass1_0<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field method offset 0x10
 __declspec(property(get=__get_method, put=__set_method)) ::System::Func_8<::Zenject::DiContainer*,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract>*  method;

constexpr void __set_method(::System::Func_8<::Zenject::DiContainer*,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract>*  value) ;

constexpr ::System::Func_8<::Zenject::DiContainer*,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract>* __get_method() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_8<::Zenject::DiContainer*,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract>*> __get_method() const;

static inline ::Zenject::__FactoryFromBinder_7____c__DisplayClass1_0<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <FromMethod>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::IProvider* _FromMethod_b__0(::Zenject::DiContainer*  container) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder_7____c__DisplayClass1_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__FactoryFromBinder_7____c__DisplayClass1_0(__FactoryFromBinder_7____c__DisplayClass1_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder_7____c__DisplayClass1_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__FactoryFromBinder_7____c__DisplayClass1_0(__FactoryFromBinder_7____c__DisplayClass1_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __FactoryFromBinder_7____c__DisplayClass1_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__2`1
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TParam4,::il2cpp_utils::il2cpp_reference_type TParam5,::il2cpp_utils::il2cpp_reference_type TParam6,::il2cpp_utils::il2cpp_reference_type TContract,::il2cpp_utils::il2cpp_reference_type TSubFactory>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10773)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10773), inst: 6128 })
// CS Name: ::FactoryFromBinder`7::<>c__2`1<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract,TSubFactory>*
class CORDL_TYPE __FactoryFromBinder_7____c__2_1<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract,TSubFactory> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::Zenject::__FactoryFromBinder_7____c__2_1<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract,TSubFactory>*  value) ;

static inline ::Zenject::__FactoryFromBinder_7____c__2_1<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract,TSubFactory>* getStaticF___9() ;

static inline void setStaticF___9__2_0(::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract>*>*>*  value) ;

static inline ::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract>*>*>* getStaticF___9__2_0() ;

static inline ::Zenject::__FactoryFromBinder_7____c__2_1<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract,TSubFactory>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <FromFactory>b__2_0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _FromFactory_b__2_0(::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract>*>*  x) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder_7____c__2_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__FactoryFromBinder_7____c__2_1(__FactoryFromBinder_7____c__2_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder_7____c__2_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__FactoryFromBinder_7____c__2_1(__FactoryFromBinder_7____c__2_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __FactoryFromBinder_7____c__2_1()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__2_0


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::FactoryFromBinder`7
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TParam4,::il2cpp_utils::il2cpp_reference_type TParam5,::il2cpp_utils::il2cpp_reference_type TParam6,::il2cpp_utils::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10774)), TypeDefinitionIndex(TypeDefinitionIndex(10846))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10774), inst: 6127 })
// CS Name: ::Zenject::FactoryFromBinder`7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract>*
class CORDL_TYPE FactoryFromBinder_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract> : public ::Zenject::FactoryFromBinderBase {
public:
// Declarations
template<typename TSubFactory>
using __c__2_1 = ::Zenject::__FactoryFromBinder_7____c__2_1<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TSubFactory>;

using __c__DisplayClass1_0 = ::Zenject::__FactoryFromBinder_7____c__DisplayClass1_0<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::Zenject::FactoryFromBinderBase)]{};

static inline ::Zenject::FactoryFromBinder_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract>* New_ctor(::Zenject::DiContainer*  container, ::Zenject::BindInfo*  bindInfo, ::Zenject::FactoryBindInfo*  factoryBindInfo) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Zenject::DiContainer*  container, ::Zenject::BindInfo*  bindInfo, ::Zenject::FactoryBindInfo*  factoryBindInfo) ;

/// @brief Method FromMethod addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::ConditionCopyNonLazyBinder* FromMethod(::System::Func_8<::Zenject::DiContainer*,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract>*  method) ;

/// @brief Method FromFactory addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TSubFactory>
inline ::Zenject::ConditionCopyNonLazyBinder* FromFactory() ;

/// @brief Method FromSubContainerResolve addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::FactorySubContainerBinder_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract>* FromSubContainerResolve() ;

/// @brief Method FromSubContainerResolve addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::FactorySubContainerBinder_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract>* FromSubContainerResolve(::System::Object*  subIdentifier) ;

// Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinder_7", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FactoryFromBinder_7(FactoryFromBinder_7 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinder_7", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FactoryFromBinder_7(FactoryFromBinder_7 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FactoryFromBinder_7()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FactoryFromBinder_7, "Zenject", "FactoryFromBinder`7");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__FactoryFromBinder_7____c__2_1, "Zenject", "FactoryFromBinder`7/<>c__2`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__FactoryFromBinder_7____c__DisplayClass1_0, "Zenject", "FactoryFromBinder`7/<>c__DisplayClass1_0");
