#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__FactoryFromBinderBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FactoryFromBinder_3)
namespace Zenject {
template<typename TParam1,typename TParam2,typename TContract,typename TSubFactory>
class __FactoryFromBinder_3____c__2_1;
}
namespace System {
template<typename T1,typename T2,typename T3,typename TResult>
class Func_4;
}
namespace Zenject {
class ConditionCopyNonLazyBinder;
}
namespace Zenject {
template<typename TParam1,typename TParam2,typename TContract>
class __FactoryFromBinder_3____c__DisplayClass1_0;
}
namespace Zenject {
class FactoryBindInfo;
}
namespace Zenject {
template<typename TParam1,typename TParam2,typename TContract>
class FactorySubContainerBinder_3;
}
namespace Zenject {
class DiContainer;
}
namespace System {
class Object;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
template<typename TContract>
class ConcreteBinderGeneric_1;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
template<typename TParam1,typename TParam2,typename TValue>
class IFactory_3;
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
template<typename TParam1,typename TParam2,typename TContract>
class FactoryFromBinder_3;
}
namespace Zenject {
template<typename TParam1,typename TParam2,typename TContract,typename TSubFactory>
class __FactoryFromBinder_3____c__2_1;
}
namespace Zenject {
template<typename TParam1,typename TParam2,typename TContract>
class __FactoryFromBinder_3____c__DisplayClass1_0;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TContract>
class FactoryFromBinder_3<TParam1,TParam2,TContract>;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TParam1,::cordl_internals::is_or_is_backed_by<int32_t> TParam2,::il2cpp_utils::il2cpp_reference_type TContract>
class FactoryFromBinder_3<TParam1,TParam2,TContract>;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TContract,::il2cpp_utils::il2cpp_reference_type TSubFactory>
class __FactoryFromBinder_3____c__2_1<TParam1,TParam2,TContract,TSubFactory>;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TContract>
class __FactoryFromBinder_3____c__DisplayClass1_0<TParam1,TParam2,TContract>;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TParam1,::cordl_internals::is_or_is_backed_by<int32_t> TParam2,::il2cpp_utils::il2cpp_reference_type TContract>
class __FactoryFromBinder_3____c__DisplayClass1_0<TParam1,TParam2,TContract>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::FactoryFromBinder_3);
MARK_GEN_REF_PTR_T(::Zenject::__FactoryFromBinder_3____c__2_1);
MARK_GEN_REF_PTR_T(::Zenject::__FactoryFromBinder_3____c__DisplayClass1_0);
// Type: ::<>c__DisplayClass1_0
// Type: ::<>c__2`1
// Type: Zenject::FactoryFromBinder`3
// Type: ::<>c__DisplayClass1_0
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TParam1,::cordl_internals::is_or_is_backed_by<int32_t> TParam2,::il2cpp_utils::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10736)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10736), inst: 6142 })
// CS Name: ::FactoryFromBinder`3::<>c__DisplayClass1_0<TParam1,TParam2,TContract>*
class CORDL_TYPE __FactoryFromBinder_3____c__DisplayClass1_0<TParam1,TParam2,TContract> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field method offset 0x10
 __declspec(property(get=__get_method, put=__set_method)) ::System::Func_4<::Zenject::DiContainer*,TParam1,TParam2,TContract>*  method;

constexpr void __set_method(::System::Func_4<::Zenject::DiContainer*,TParam1,TParam2,TContract>*  value) ;

constexpr ::System::Func_4<::Zenject::DiContainer*,TParam1,TParam2,TContract>* __get_method() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_4<::Zenject::DiContainer*,TParam1,TParam2,TContract>*> __get_method() const;

static inline ::Zenject::__FactoryFromBinder_3____c__DisplayClass1_0<TParam1,TParam2,TContract>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <FromMethod>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::IProvider* _FromMethod_b__0(::Zenject::DiContainer*  container) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder_3____c__DisplayClass1_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__FactoryFromBinder_3____c__DisplayClass1_0(__FactoryFromBinder_3____c__DisplayClass1_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder_3____c__DisplayClass1_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__FactoryFromBinder_3____c__DisplayClass1_0(__FactoryFromBinder_3____c__DisplayClass1_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __FactoryFromBinder_3____c__DisplayClass1_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass1_0
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10736))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10736), inst: 5330 })
// CS Name: ::FactoryFromBinder`3::<>c__DisplayClass1_0<TParam1,TParam2,TContract>*
class CORDL_TYPE __FactoryFromBinder_3____c__DisplayClass1_0<TParam1,TParam2,TContract> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field method offset 0x10
 __declspec(property(get=__get_method, put=__set_method)) ::System::Func_4<::Zenject::DiContainer*,TParam1,TParam2,TContract>*  method;

constexpr void __set_method(::System::Func_4<::Zenject::DiContainer*,TParam1,TParam2,TContract>*  value) ;

constexpr ::System::Func_4<::Zenject::DiContainer*,TParam1,TParam2,TContract>* __get_method() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_4<::Zenject::DiContainer*,TParam1,TParam2,TContract>*> __get_method() const;

static inline ::Zenject::__FactoryFromBinder_3____c__DisplayClass1_0<TParam1,TParam2,TContract>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <FromMethod>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::IProvider* _FromMethod_b__0(::Zenject::DiContainer*  container) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder_3____c__DisplayClass1_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__FactoryFromBinder_3____c__DisplayClass1_0(__FactoryFromBinder_3____c__DisplayClass1_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder_3____c__DisplayClass1_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__FactoryFromBinder_3____c__DisplayClass1_0(__FactoryFromBinder_3____c__DisplayClass1_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __FactoryFromBinder_3____c__DisplayClass1_0()  = default;
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
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TContract,::il2cpp_utils::il2cpp_reference_type TSubFactory>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10737))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10737), inst: 6124 })
// CS Name: ::FactoryFromBinder`3::<>c__2`1<TParam1,TParam2,TContract,TSubFactory>*
class CORDL_TYPE __FactoryFromBinder_3____c__2_1<TParam1,TParam2,TContract,TSubFactory> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::Zenject::__FactoryFromBinder_3____c__2_1<TParam1,TParam2,TContract,TSubFactory>*  value) ;

static inline ::Zenject::__FactoryFromBinder_3____c__2_1<TParam1,TParam2,TContract,TSubFactory>* getStaticF___9() ;

static inline void setStaticF___9__2_0(::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_3<TParam1,TParam2,TContract>*>*>*  value) ;

static inline ::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_3<TParam1,TParam2,TContract>*>*>* getStaticF___9__2_0() ;

static inline ::Zenject::__FactoryFromBinder_3____c__2_1<TParam1,TParam2,TContract,TSubFactory>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <FromFactory>b__2_0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _FromFactory_b__2_0(::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_3<TParam1,TParam2,TContract>*>*  x) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder_3____c__2_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__FactoryFromBinder_3____c__2_1(__FactoryFromBinder_3____c__2_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder_3____c__2_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__FactoryFromBinder_3____c__2_1(__FactoryFromBinder_3____c__2_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __FactoryFromBinder_3____c__2_1()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__2_0


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::FactoryFromBinder`3
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TParam1,::cordl_internals::is_or_is_backed_by<int32_t> TParam2,::il2cpp_utils::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10738)), TypeDefinitionIndex(TypeDefinitionIndex(10846))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10738), inst: 6142 })
// CS Name: ::Zenject::FactoryFromBinder`3<TParam1,TParam2,TContract>*
class CORDL_TYPE FactoryFromBinder_3<TParam1,TParam2,TContract> : public ::Zenject::FactoryFromBinderBase {
public:
// Declarations
template<typename TSubFactory>
using __c__2_1 = ::Zenject::__FactoryFromBinder_3____c__2_1<TParam1, TParam2, TContract, TSubFactory>;

using __c__DisplayClass1_0 = ::Zenject::__FactoryFromBinder_3____c__DisplayClass1_0<TParam1, TParam2, TContract>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::Zenject::FactoryFromBinderBase)]{};

static inline ::Zenject::FactoryFromBinder_3<TParam1,TParam2,TContract>* New_ctor(::Zenject::DiContainer*  container, ::Zenject::BindInfo*  bindInfo, ::Zenject::FactoryBindInfo*  factoryBindInfo) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Zenject::DiContainer*  container, ::Zenject::BindInfo*  bindInfo, ::Zenject::FactoryBindInfo*  factoryBindInfo) ;

/// @brief Method FromMethod addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::ConditionCopyNonLazyBinder* FromMethod(::System::Func_4<::Zenject::DiContainer*,TParam1,TParam2,TContract>*  method) ;

/// @brief Method FromFactory addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TSubFactory>
inline ::Zenject::ConditionCopyNonLazyBinder* FromFactory() ;

/// @brief Method FromSubContainerResolve addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::FactorySubContainerBinder_3<TParam1,TParam2,TContract>* FromSubContainerResolve() ;

/// @brief Method FromSubContainerResolve addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::FactorySubContainerBinder_3<TParam1,TParam2,TContract>* FromSubContainerResolve(::System::Object*  subIdentifier) ;

// Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinder_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FactoryFromBinder_3(FactoryFromBinder_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinder_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FactoryFromBinder_3(FactoryFromBinder_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FactoryFromBinder_3()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::FactoryFromBinder`3
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10738)), TypeDefinitionIndex(TypeDefinitionIndex(10846))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10738), inst: 5330 })
// CS Name: ::Zenject::FactoryFromBinder`3<TParam1,TParam2,TContract>*
class CORDL_TYPE FactoryFromBinder_3<TParam1,TParam2,TContract> : public ::Zenject::FactoryFromBinderBase {
public:
// Declarations
template<typename TSubFactory>
using __c__2_1 = ::Zenject::__FactoryFromBinder_3____c__2_1<TParam1, TParam2, TContract, TSubFactory>;

using __c__DisplayClass1_0 = ::Zenject::__FactoryFromBinder_3____c__DisplayClass1_0<TParam1, TParam2, TContract>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::Zenject::FactoryFromBinderBase)]{};

static inline ::Zenject::FactoryFromBinder_3<TParam1,TParam2,TContract>* New_ctor(::Zenject::DiContainer*  container, ::Zenject::BindInfo*  bindInfo, ::Zenject::FactoryBindInfo*  factoryBindInfo) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Zenject::DiContainer*  container, ::Zenject::BindInfo*  bindInfo, ::Zenject::FactoryBindInfo*  factoryBindInfo) ;

/// @brief Method FromMethod addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::ConditionCopyNonLazyBinder* FromMethod(::System::Func_4<::Zenject::DiContainer*,TParam1,TParam2,TContract>*  method) ;

/// @brief Method FromFactory addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TSubFactory>
inline ::Zenject::ConditionCopyNonLazyBinder* FromFactory() ;

/// @brief Method FromSubContainerResolve addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::FactorySubContainerBinder_3<TParam1,TParam2,TContract>* FromSubContainerResolve() ;

/// @brief Method FromSubContainerResolve addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::FactorySubContainerBinder_3<TParam1,TParam2,TContract>* FromSubContainerResolve(::System::Object*  subIdentifier) ;

// Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinder_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FactoryFromBinder_3(FactoryFromBinder_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinder_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FactoryFromBinder_3(FactoryFromBinder_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FactoryFromBinder_3()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FactoryFromBinder_3, "Zenject", "FactoryFromBinder`3");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__FactoryFromBinder_3____c__2_1, "Zenject", "FactoryFromBinder`3/<>c__2`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__FactoryFromBinder_3____c__DisplayClass1_0, "Zenject", "FactoryFromBinder`3/<>c__DisplayClass1_0");
