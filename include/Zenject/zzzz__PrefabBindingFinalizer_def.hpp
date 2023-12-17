#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__ProviderBindingFinalizer_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(PrefabBindingFinalizer)
namespace Zenject {
class BindInfo;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
class __PrefabBindingFinalizer____c__DisplayClass5_0;
}
namespace System {
class Type;
}
namespace Zenject {
class GameObjectCreationParameters;
}
namespace Zenject {
class __PrefabBindingFinalizer____c__DisplayClass5_1;
}
namespace Zenject {
class __PrefabBindingFinalizer____c__DisplayClass6_1;
}
namespace Zenject {
class IProvider;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class __PrefabBindingFinalizer____c__DisplayClass6_0;
}
namespace Zenject {
class IPrefabInstantiator;
}
namespace UnityEngine {
class Object;
}
namespace System {
class Object;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class PrefabInstantiatorCached;
}
// Forward declare root types
namespace Zenject {
class PrefabBindingFinalizer;
}
namespace Zenject {
class __PrefabBindingFinalizer____c__DisplayClass5_0;
}
namespace Zenject {
class __PrefabBindingFinalizer____c__DisplayClass5_1;
}
namespace Zenject {
class __PrefabBindingFinalizer____c__DisplayClass6_0;
}
namespace Zenject {
class __PrefabBindingFinalizer____c__DisplayClass6_1;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::PrefabBindingFinalizer);
MARK_REF_PTR_T(::Zenject::__PrefabBindingFinalizer____c__DisplayClass5_0);
MARK_REF_PTR_T(::Zenject::__PrefabBindingFinalizer____c__DisplayClass5_1);
MARK_REF_PTR_T(::Zenject::__PrefabBindingFinalizer____c__DisplayClass6_0);
MARK_REF_PTR_T(::Zenject::__PrefabBindingFinalizer____c__DisplayClass6_1);
// Type: ::<>c__DisplayClass5_0
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10955))
// CS Name: ::PrefabBindingFinalizer::<>c__DisplayClass5_0*
class CORDL_TYPE __PrefabBindingFinalizer____c__DisplayClass5_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field <>4__this offset 0x10
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::Zenject::PrefabBindingFinalizer*  __4__this;

/// @brief Field container offset 0x18
 __declspec(property(get=__get_container, put=__set_container)) ::Zenject::DiContainer*  container;

/// @brief Field concreteTypes offset 0x20
 __declspec(property(get=__get_concreteTypes, put=__set_concreteTypes)) ::System::Collections::Generic::List_1<::System::Type*>*  concreteTypes;

constexpr void __set___4__this(::Zenject::PrefabBindingFinalizer*  value) ;

constexpr ::Zenject::PrefabBindingFinalizer* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::PrefabBindingFinalizer*> __get___4__this() const;

constexpr void __set_container(::Zenject::DiContainer*  value) ;

constexpr ::Zenject::DiContainer* __get_container() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> __get_container() const;

constexpr void __set_concreteTypes(::System::Collections::Generic::List_1<::System::Type*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::System::Type*>* __get_concreteTypes() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Type*>*> __get_concreteTypes() const;

static inline ::Zenject::__PrefabBindingFinalizer____c__DisplayClass5_0* New_ctor() ;

/// @brief Method .ctor addr 0x2ee266c size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <FinalizeBindingConcrete>b__0 addr 0x2ee3088 size 0x118 virtual false final false
inline ::Zenject::IProvider* _FinalizeBindingConcrete_b__0(::Zenject::DiContainer*  _, ::System::Type*  concreteType) ;

/// @brief Method __zenCreate addr 0x2ee31a0 size 0x5c virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2ee31fc size 0x1c0 virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__PrefabBindingFinalizer____c__DisplayClass5_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__PrefabBindingFinalizer____c__DisplayClass5_0(__PrefabBindingFinalizer____c__DisplayClass5_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__PrefabBindingFinalizer____c__DisplayClass5_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__PrefabBindingFinalizer____c__DisplayClass5_0(__PrefabBindingFinalizer____c__DisplayClass5_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __PrefabBindingFinalizer____c__DisplayClass5_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__PrefabBindingFinalizer____c__DisplayClass5_0, 0x28>, "Size mismatch!");

} // namespace end def Zenject
// Type: ::<>c__DisplayClass5_1
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10956))
// CS Name: ::PrefabBindingFinalizer::<>c__DisplayClass5_1*
class CORDL_TYPE __PrefabBindingFinalizer____c__DisplayClass5_1 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field prefabCreator offset 0x10
 __declspec(property(get=__get_prefabCreator, put=__set_prefabCreator)) ::Zenject::PrefabInstantiatorCached*  prefabCreator;

/// @brief Field CS$<>8__locals1 offset 0x18
 __declspec(property(get=__get_CS$__8__locals1, put=__set_CS$__8__locals1)) ::Zenject::__PrefabBindingFinalizer____c__DisplayClass5_0*  CS$__8__locals1;

constexpr void __set_prefabCreator(::Zenject::PrefabInstantiatorCached*  value) ;

constexpr ::Zenject::PrefabInstantiatorCached* __get_prefabCreator() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::PrefabInstantiatorCached*> __get_prefabCreator() const;

constexpr void __set_CS$__8__locals1(::Zenject::__PrefabBindingFinalizer____c__DisplayClass5_0*  value) ;

constexpr ::Zenject::__PrefabBindingFinalizer____c__DisplayClass5_0* __get_CS$__8__locals1() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::__PrefabBindingFinalizer____c__DisplayClass5_0*> __get_CS$__8__locals1() const;

static inline ::Zenject::__PrefabBindingFinalizer____c__DisplayClass5_1* New_ctor() ;

/// @brief Method .ctor addr 0x2ee2e5c size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <FinalizeBindingConcrete>b__1 addr 0x2ee33bc size 0x40 virtual false final false
inline ::Zenject::IProvider* _FinalizeBindingConcrete_b__1(::Zenject::DiContainer*  _, ::System::Type*  concreteType) ;

/// @brief Method __zenCreate addr 0x2ee33fc size 0x5c virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2ee3458 size 0x1c0 virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__PrefabBindingFinalizer____c__DisplayClass5_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__PrefabBindingFinalizer____c__DisplayClass5_1(__PrefabBindingFinalizer____c__DisplayClass5_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__PrefabBindingFinalizer____c__DisplayClass5_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__PrefabBindingFinalizer____c__DisplayClass5_1(__PrefabBindingFinalizer____c__DisplayClass5_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __PrefabBindingFinalizer____c__DisplayClass5_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__PrefabBindingFinalizer____c__DisplayClass5_1, 0x20>, "Size mismatch!");

} // namespace end def Zenject
// Type: ::<>c__DisplayClass6_0
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10957))
// CS Name: ::PrefabBindingFinalizer::<>c__DisplayClass6_0*
class CORDL_TYPE __PrefabBindingFinalizer____c__DisplayClass6_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field <>4__this offset 0x10
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::Zenject::PrefabBindingFinalizer*  __4__this;

/// @brief Field container offset 0x18
 __declspec(property(get=__get_container, put=__set_container)) ::Zenject::DiContainer*  container;

constexpr void __set___4__this(::Zenject::PrefabBindingFinalizer*  value) ;

constexpr ::Zenject::PrefabBindingFinalizer* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::PrefabBindingFinalizer*> __get___4__this() const;

constexpr void __set_container(::Zenject::DiContainer*  value) ;

constexpr ::Zenject::DiContainer* __get_container() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> __get_container() const;

static inline ::Zenject::__PrefabBindingFinalizer____c__DisplayClass6_0* New_ctor() ;

/// @brief Method .ctor addr 0x2ee2e64 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <FinalizeBindingSelf>b__0 addr 0x2ee3618 size 0x11c virtual false final false
inline ::Zenject::IProvider* _FinalizeBindingSelf_b__0(::Zenject::DiContainer*  _, ::System::Type*  contractType) ;

/// @brief Method __zenCreate addr 0x2ee3734 size 0x5c virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2ee3790 size 0x1c0 virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__PrefabBindingFinalizer____c__DisplayClass6_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__PrefabBindingFinalizer____c__DisplayClass6_0(__PrefabBindingFinalizer____c__DisplayClass6_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__PrefabBindingFinalizer____c__DisplayClass6_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__PrefabBindingFinalizer____c__DisplayClass6_0(__PrefabBindingFinalizer____c__DisplayClass6_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __PrefabBindingFinalizer____c__DisplayClass6_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__PrefabBindingFinalizer____c__DisplayClass6_0, 0x20>, "Size mismatch!");

} // namespace end def Zenject
// Type: ::<>c__DisplayClass6_1
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10958))
// CS Name: ::PrefabBindingFinalizer::<>c__DisplayClass6_1*
class CORDL_TYPE __PrefabBindingFinalizer____c__DisplayClass6_1 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field prefabCreator offset 0x10
 __declspec(property(get=__get_prefabCreator, put=__set_prefabCreator)) ::Zenject::PrefabInstantiatorCached*  prefabCreator;

/// @brief Field CS$<>8__locals1 offset 0x18
 __declspec(property(get=__get_CS$__8__locals1, put=__set_CS$__8__locals1)) ::Zenject::__PrefabBindingFinalizer____c__DisplayClass6_0*  CS$__8__locals1;

constexpr void __set_prefabCreator(::Zenject::PrefabInstantiatorCached*  value) ;

constexpr ::Zenject::PrefabInstantiatorCached* __get_prefabCreator() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::PrefabInstantiatorCached*> __get_prefabCreator() const;

constexpr void __set_CS$__8__locals1(::Zenject::__PrefabBindingFinalizer____c__DisplayClass6_0*  value) ;

constexpr ::Zenject::__PrefabBindingFinalizer____c__DisplayClass6_0* __get_CS$__8__locals1() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::__PrefabBindingFinalizer____c__DisplayClass6_0*> __get_CS$__8__locals1() const;

static inline ::Zenject::__PrefabBindingFinalizer____c__DisplayClass6_1* New_ctor() ;

/// @brief Method .ctor addr 0x2ee3080 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <FinalizeBindingSelf>b__1 addr 0x2ee3950 size 0x40 virtual false final false
inline ::Zenject::IProvider* _FinalizeBindingSelf_b__1(::Zenject::DiContainer*  _, ::System::Type*  contractType) ;

/// @brief Method __zenCreate addr 0x2ee3990 size 0x5c virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2ee39ec size 0x1c0 virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__PrefabBindingFinalizer____c__DisplayClass6_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__PrefabBindingFinalizer____c__DisplayClass6_1(__PrefabBindingFinalizer____c__DisplayClass6_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__PrefabBindingFinalizer____c__DisplayClass6_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__PrefabBindingFinalizer____c__DisplayClass6_1(__PrefabBindingFinalizer____c__DisplayClass6_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __PrefabBindingFinalizer____c__DisplayClass6_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__PrefabBindingFinalizer____c__DisplayClass6_1, 0x20>, "Size mismatch!");

} // namespace end def Zenject
// Type: Zenject::PrefabBindingFinalizer
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10966))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10959))
// CS Name: ::Zenject::PrefabBindingFinalizer*
class CORDL_TYPE PrefabBindingFinalizer : public ::Zenject::ProviderBindingFinalizer {
public:
// Declarations
using __c__DisplayClass6_1 = ::Zenject::__PrefabBindingFinalizer____c__DisplayClass6_1;

using __c__DisplayClass6_0 = ::Zenject::__PrefabBindingFinalizer____c__DisplayClass6_0;

using __c__DisplayClass5_1 = ::Zenject::__PrefabBindingFinalizer____c__DisplayClass5_1;

using __c__DisplayClass5_0 = ::Zenject::__PrefabBindingFinalizer____c__DisplayClass5_0;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Zenject::ProviderBindingFinalizer)]{};

/// @brief Field _gameObjectBindInfo offset 0x18
 __declspec(property(get=__get__gameObjectBindInfo, put=__set__gameObjectBindInfo)) ::Zenject::GameObjectCreationParameters*  _gameObjectBindInfo;

/// @brief Field _prefab offset 0x20
 __declspec(property(get=__get__prefab, put=__set__prefab)) ::UnityEngine::Object*  _prefab;

/// @brief Field _providerFactory offset 0x28
 __declspec(property(get=__get__providerFactory, put=__set__providerFactory)) ::System::Func_3<::System::Type*,::Zenject::IPrefabInstantiator*,::Zenject::IProvider*>*  _providerFactory;

constexpr void __set__gameObjectBindInfo(::Zenject::GameObjectCreationParameters*  value) ;

constexpr ::Zenject::GameObjectCreationParameters* __get__gameObjectBindInfo() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::GameObjectCreationParameters*> __get__gameObjectBindInfo() const;

constexpr void __set__prefab(::UnityEngine::Object*  value) ;

constexpr ::UnityEngine::Object* __get__prefab() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Object*> __get__prefab() const;

constexpr void __set__providerFactory(::System::Func_3<::System::Type*,::Zenject::IPrefabInstantiator*,::Zenject::IProvider*>*  value) ;

constexpr ::System::Func_3<::System::Type*,::Zenject::IPrefabInstantiator*,::Zenject::IProvider*>* __get__providerFactory() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_3<::System::Type*,::Zenject::IPrefabInstantiator*,::Zenject::IProvider*>*> __get__providerFactory() const;

static inline ::Zenject::PrefabBindingFinalizer* New_ctor(::Zenject::BindInfo*  bindInfo, ::Zenject::GameObjectCreationParameters*  gameObjectBindInfo, ::UnityEngine::Object*  prefab, ::System::Func_3<::System::Type*,::Zenject::IPrefabInstantiator*,::Zenject::IProvider*>*  providerFactory) ;

/// @brief Method .ctor addr 0x2ee1f1c size 0x40 virtual false final false
inline void _ctor(::Zenject::BindInfo*  bindInfo, ::Zenject::GameObjectCreationParameters*  gameObjectBindInfo, ::UnityEngine::Object*  prefab, ::System::Func_3<::System::Type*,::Zenject::IPrefabInstantiator*,::Zenject::IProvider*>*  providerFactory) ;

/// @brief Method OnFinalizeBinding addr 0x2ee1f84 size 0x84 virtual true final false
inline void OnFinalizeBinding(::Zenject::DiContainer*  container) ;

/// @brief Method FinalizeBindingConcrete addr 0x2ee2338 size 0x334 virtual false final false
inline void FinalizeBindingConcrete(::Zenject::DiContainer*  container, ::System::Collections::Generic::List_1<::System::Type*>*  concreteTypes) ;

/// @brief Method FinalizeBindingSelf addr 0x2ee2008 size 0x330 virtual false final false
inline void FinalizeBindingSelf(::Zenject::DiContainer*  container) ;

// Ctor Parameters [CppParam { name: "", ty: "PrefabBindingFinalizer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PrefabBindingFinalizer(PrefabBindingFinalizer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PrefabBindingFinalizer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PrefabBindingFinalizer(PrefabBindingFinalizer const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PrefabBindingFinalizer()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::PrefabBindingFinalizer, 0x30>, "Size mismatch!");

} // namespace end def Zenject
NEED_NO_BOX(::Zenject::PrefabBindingFinalizer);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::PrefabBindingFinalizer*, "Zenject", "PrefabBindingFinalizer");
NEED_NO_BOX(::Zenject::__PrefabBindingFinalizer____c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__PrefabBindingFinalizer____c__DisplayClass5_0*, "Zenject", "PrefabBindingFinalizer/<>c__DisplayClass5_0");
NEED_NO_BOX(::Zenject::__PrefabBindingFinalizer____c__DisplayClass5_1);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__PrefabBindingFinalizer____c__DisplayClass5_1*, "Zenject", "PrefabBindingFinalizer/<>c__DisplayClass5_1");
NEED_NO_BOX(::Zenject::__PrefabBindingFinalizer____c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__PrefabBindingFinalizer____c__DisplayClass6_0*, "Zenject", "PrefabBindingFinalizer/<>c__DisplayClass6_0");
NEED_NO_BOX(::Zenject::__PrefabBindingFinalizer____c__DisplayClass6_1);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__PrefabBindingFinalizer____c__DisplayClass6_1*, "Zenject", "PrefabBindingFinalizer/<>c__DisplayClass6_1");
