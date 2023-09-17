#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__FactoryFromBinderBase_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace Zenject {
class ConditionCopyNonLazyBinder;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename TResult>
class Func_6;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TContract>
class FactorySubContainerBinder_5;
}
namespace Zenject {
class FactoryBindInfo;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TValue>
class IFactory_5;
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
class IProvider;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TContract>
class FactoryFromBinder_5;
}
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TContract,typename TSubFactory>
class ____Zenject__FactoryFromBinder_5____c__2_1;
}
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TContract>
class ____Zenject__FactoryFromBinder_5____c__DisplayClass1_0;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4,::cordl_internals::il2cpp_reference_type TContract>
class FactoryFromBinder_5<TParam1,TParam2,TParam3,TParam4,TContract>;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4,::cordl_internals::il2cpp_reference_type TContract,::cordl_internals::il2cpp_reference_type TSubFactory>
class ____Zenject__FactoryFromBinder_5____c__2_1<TParam1,TParam2,TParam3,TParam4,TContract,TSubFactory>;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4,::cordl_internals::il2cpp_reference_type TContract>
class ____Zenject__FactoryFromBinder_5____c__DisplayClass1_0<TParam1,TParam2,TParam3,TParam4,TContract>;
}
// Type: ::<>c__DisplayClass1_0
// Type: ::<>c__2`1
// Type: Zenject::FactoryFromBinder`5
// Type: ::<>c__DisplayClass1_0
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4,::cordl_internals::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10696))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10696), inst: 5938 })
// CS Name: Zenject.FactoryFromBinder`5::<>c__DisplayClass1_0
class CORDL_TYPE ____Zenject__FactoryFromBinder_5____c__DisplayClass1_0<TParam1,TParam2,TParam3,TParam4,TContract> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____Zenject__FactoryFromBinder_5____c__DisplayClass1_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__FactoryFromBinder_5____c__DisplayClass1_0", modifiers: " const&", def_value: None }]
constexpr ____Zenject__FactoryFromBinder_5____c__DisplayClass1_0(____Zenject__FactoryFromBinder_5____c__DisplayClass1_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__FactoryFromBinder_5____c__DisplayClass1_0", modifiers: "&&", def_value: None }]
constexpr ____Zenject__FactoryFromBinder_5____c__DisplayClass1_0(____Zenject__FactoryFromBinder_5____c__DisplayClass1_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Zenject__FactoryFromBinder_5____c__DisplayClass1_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____Zenject__FactoryFromBinder_5____c__DisplayClass1_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Zenject__FactoryFromBinder_5____c__DisplayClass1_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Zenject__FactoryFromBinder_5____c__DisplayClass1_0& operator=(____Zenject__FactoryFromBinder_5____c__DisplayClass1_0&& o) noexcept = default;
  constexpr ____Zenject__FactoryFromBinder_5____c__DisplayClass1_0& operator=(____Zenject__FactoryFromBinder_5____c__DisplayClass1_0 const& o) noexcept = default;
                


// Fields

 ::System::Func_6<::Zenject::DiContainer,TParam1,TParam2,TParam3,TParam4,TContract> __declspec(property(get=__get_method, put=__set_method))  method;

constexpr void __set_method(::System::Func_6<::Zenject::DiContainer,TParam1,TParam2,TParam3,TParam4,TContract> value) ;

constexpr ::System::Func_6<::Zenject::DiContainer,TParam1,TParam2,TParam3,TParam4,TContract> __get_method() const;


// Methods

// Ctor Parameters []
explicit ____Zenject__FactoryFromBinder_5____c__DisplayClass1_0() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <FromMethod>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 ::Zenject::IProvider _FromMethod_b__0(::Zenject::DiContainer container) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static ::Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__2`1
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4,::cordl_internals::il2cpp_reference_type TContract,::cordl_internals::il2cpp_reference_type TSubFactory>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10697))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10697), inst: 5939 })
// CS Name: Zenject.FactoryFromBinder`5::<>c__2`1
class CORDL_TYPE ____Zenject__FactoryFromBinder_5____c__2_1<TParam1,TParam2,TParam3,TParam4,TContract,TSubFactory> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____Zenject__FactoryFromBinder_5____c__2_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__FactoryFromBinder_5____c__2_1", modifiers: " const&", def_value: None }]
constexpr ____Zenject__FactoryFromBinder_5____c__2_1(____Zenject__FactoryFromBinder_5____c__2_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__FactoryFromBinder_5____c__2_1", modifiers: "&&", def_value: None }]
constexpr ____Zenject__FactoryFromBinder_5____c__2_1(____Zenject__FactoryFromBinder_5____c__2_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Zenject__FactoryFromBinder_5____c__2_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____Zenject__FactoryFromBinder_5____c__2_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Zenject__FactoryFromBinder_5____c__2_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Zenject__FactoryFromBinder_5____c__2_1& operator=(____Zenject__FactoryFromBinder_5____c__2_1&& o) noexcept = default;
  constexpr ____Zenject__FactoryFromBinder_5____c__2_1& operator=(____Zenject__FactoryFromBinder_5____c__2_1 const& o) noexcept = default;
                


// Fields

static ::Zenject::____Zenject__FactoryFromBinder_5____c__2_1<TParam1,TParam2,TParam3,TParam4,TContract,TSubFactory> __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::Zenject::____Zenject__FactoryFromBinder_5____c__2_1<TParam1,TParam2,TParam3,TParam4,TContract,TSubFactory> value) ;

static ::Zenject::____Zenject__FactoryFromBinder_5____c__2_1<TParam1,TParam2,TParam3,TParam4,TContract,TSubFactory> __get___9() ;

static ::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_5<TParam1,TParam2,TParam3,TParam4,TContract>>> __declspec(property(get=__get___9__2_0, put=__set___9__2_0))  __9__2_0;

static void __set___9__2_0(::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_5<TParam1,TParam2,TParam3,TParam4,TContract>>> value) ;

static ::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_5<TParam1,TParam2,TParam3,TParam4,TContract>>> __get___9__2_0() ;


// Methods

// Ctor Parameters []
explicit ____Zenject__FactoryFromBinder_5____c__2_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <FromFactory>b__2_0 addr 0x0 size 0xffffffffffffffff virtual false final false
 void _FromFactory_b__2_0(::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_5<TParam1,TParam2,TParam3,TParam4,TContract>> x) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static ::Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::FactoryFromBinder`5
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4,::cordl_internals::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10698)), TypeDefinitionIndex(TypeDefinitionIndex(10788))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10698), inst: 5938 })
// CS Name: Zenject.FactoryFromBinder`5
class CORDL_TYPE FactoryFromBinder_5<TParam1,TParam2,TParam3,TParam4,TContract> : public ::Zenject::FactoryFromBinderBase {
public:
// Declarations
template<typename TSubFactory>
using __c__2_1 = ::Zenject::____Zenject__FactoryFromBinder_5____c__2_1<TParam1, TParam2, TParam3, TParam4, TContract, TParam1, TParam2, TParam3, TParam4, TContract, TSubFactory>;

using __c__DisplayClass1_0 = ::Zenject::____Zenject__FactoryFromBinder_5____c__DisplayClass1_0<TParam1, TParam2, TParam3, TParam4, TContract>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~FactoryFromBinder_5() = default;

// Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinder_5", modifiers: " const&", def_value: None }]
constexpr FactoryFromBinder_5(FactoryFromBinder_5 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinder_5", modifiers: "&&", def_value: None }]
constexpr FactoryFromBinder_5(FactoryFromBinder_5&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FactoryFromBinder_5(void* ptr) noexcept : ::Zenject::FactoryFromBinderBase(ptr) {
}


  constexpr FactoryFromBinder_5& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FactoryFromBinder_5& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FactoryFromBinder_5& operator=(FactoryFromBinder_5&& o) noexcept = default;
  constexpr FactoryFromBinder_5& operator=(FactoryFromBinder_5 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "container", ty: "::Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "bindInfo", ty: "::Zenject::BindInfo", modifiers: "", def_value: None }, CppParam { name: "factoryBindInfo", ty: "::Zenject::FactoryBindInfo", modifiers: "", def_value: None }]
explicit FactoryFromBinder_5(::Zenject::DiContainer container, ::Zenject::BindInfo bindInfo, ::Zenject::FactoryBindInfo factoryBindInfo) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::Zenject::DiContainer container, ::Zenject::BindInfo bindInfo, ::Zenject::FactoryBindInfo factoryBindInfo) ;

/// @brief Method FromMethod addr 0x0 size 0xffffffffffffffff virtual false final false
 ::Zenject::ConditionCopyNonLazyBinder FromMethod(::System::Func_6<::Zenject::DiContainer,TParam1,TParam2,TParam3,TParam4,TContract> method) ;

/// @brief Method FromFactory addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TSubFactory>
 ::Zenject::ConditionCopyNonLazyBinder FromFactory() ;

/// @brief Method FromSubContainerResolve addr 0x0 size 0xffffffffffffffff virtual false final false
 ::Zenject::FactorySubContainerBinder_5<TParam1,TParam2,TParam3,TParam4,TContract> FromSubContainerResolve() ;

/// @brief Method FromSubContainerResolve addr 0x0 size 0xffffffffffffffff virtual false final false
 ::Zenject::FactorySubContainerBinder_5<TParam1,TParam2,TParam3,TParam4,TContract> FromSubContainerResolve(::bs_hook::Il2CppWrapperType subIdentifier) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FactoryFromBinder_5, "Zenject", "FactoryFromBinder`5");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::____Zenject__FactoryFromBinder_5____c__2_1, "Zenject", "FactoryFromBinder`5/<>c__2`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::____Zenject__FactoryFromBinder_5____c__DisplayClass1_0, "Zenject", "FactoryFromBinder`5/<>c__DisplayClass1_0");
