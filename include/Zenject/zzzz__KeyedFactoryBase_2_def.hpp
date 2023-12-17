#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(KeyedFactoryBase_2)
namespace ModestTree::Util {
template<typename T1,typename T2>
class ValuePair_2;
}
namespace Zenject {
class IValidatable;
}
namespace System {
class Type;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace Zenject {
template<typename TBase,typename TKey>
class __KeyedFactoryBase_2____c;
}
namespace Zenject {
class DiContainer;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace Zenject {
class ConditionCopyNonLazyBinder;
}
namespace System {
class Object;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace Zenject {
template<typename TBase,typename TKey>
class KeyedFactoryBase_2;
}
namespace Zenject {
template<typename TBase,typename TKey>
class __KeyedFactoryBase_2____c;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TBase,::il2cpp_utils::il2cpp_reference_type TKey>
class KeyedFactoryBase_2<TBase,TKey>;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TBase,::il2cpp_utils::il2cpp_reference_type TKey>
class __KeyedFactoryBase_2____c<TBase,TKey>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::KeyedFactoryBase_2);
MARK_GEN_REF_PTR_T(::Zenject::__KeyedFactoryBase_2____c);
// Type: ::<>c
// Type: Zenject::KeyedFactoryBase`2
// Type: ::<>c
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TBase,::il2cpp_utils::il2cpp_reference_type TKey>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10994))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10994), inst: 81 })
// CS Name: ::KeyedFactoryBase`2::<>c<TBase,TKey>*
class CORDL_TYPE __KeyedFactoryBase_2____c<TBase,TKey> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::Zenject::__KeyedFactoryBase_2____c<TBase,TKey>*  value) ;

static inline ::Zenject::__KeyedFactoryBase_2____c<TBase,TKey>* getStaticF___9() ;

static inline void setStaticF___9__12_0(::System::Func_2<::ModestTree::Util::ValuePair_2<TKey,::System::Type*>*,TKey>*  value) ;

static inline ::System::Func_2<::ModestTree::Util::ValuePair_2<TKey,::System::Type*>*,TKey>* getStaticF___9__12_0() ;

static inline void setStaticF___9__12_1(::System::Func_2<::ModestTree::Util::ValuePair_2<TKey,::System::Type*>*,::System::Type*>*  value) ;

static inline ::System::Func_2<::ModestTree::Util::ValuePair_2<TKey,::System::Type*>*,::System::Type*>* getStaticF___9__12_1() ;

static inline ::Zenject::__KeyedFactoryBase_2____c<TBase,TKey>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <Initialize>b__12_0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline TKey _Initialize_b__12_0(::ModestTree::Util::ValuePair_2<TKey,::System::Type*>*  x) ;

/// @brief Method <Initialize>b__12_1 addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Type* _Initialize_b__12_1(::ModestTree::Util::ValuePair_2<TKey,::System::Type*>*  x) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__KeyedFactoryBase_2____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__KeyedFactoryBase_2____c(__KeyedFactoryBase_2____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__KeyedFactoryBase_2____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__KeyedFactoryBase_2____c(__KeyedFactoryBase_2____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __KeyedFactoryBase_2____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__12_0

// Static field <>9__12_1


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::KeyedFactoryBase`2
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TBase,::il2cpp_utils::il2cpp_reference_type TKey>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10995)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10995), inst: 81 })
// CS Name: ::Zenject::KeyedFactoryBase`2<TBase,TKey>*
class CORDL_TYPE KeyedFactoryBase_2<TBase,TKey> : public ::System::Object {
public:
// Declarations
using __c = ::Zenject::__KeyedFactoryBase_2____c<TBase, TKey>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field _container offset 0x10
 __declspec(property(get=__get__container, put=__set__container)) ::Zenject::DiContainer*  _container;

/// @brief Field _typePairs offset 0x18
 __declspec(property(get=__get__typePairs, put=__set__typePairs)) ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<TKey,::System::Type*>*>*  _typePairs;

/// @brief Field _typeMap offset 0x20
 __declspec(property(get=__get__typeMap, put=__set__typeMap)) ::System::Collections::Generic::Dictionary_2<TKey,::System::Type*>*  _typeMap;

/// @brief Field _fallbackType offset 0x28
 __declspec(property(get=__get__fallbackType, put=__set__fallbackType)) ::System::Type*  _fallbackType;

 __declspec(property(get=get_Container)) ::Zenject::DiContainer*  Container;

 __declspec(property(get=get_ProvidedTypes)) ::System::Collections::Generic::IEnumerable_1<::System::Type*>*  ProvidedTypes;

 __declspec(property(get=get_Keys)) ::System::Collections::Generic::ICollection_1<TKey>*  Keys;

 __declspec(property(get=get_TypeMap)) ::System::Collections::Generic::Dictionary_2<TKey,::System::Type*>*  TypeMap;

/// @brief Convert operator to "::Zenject::IValidatable"
constexpr operator  ::Zenject::IValidatable*() noexcept;

constexpr void __set__container(::Zenject::DiContainer*  value) ;

constexpr ::Zenject::DiContainer* __get__container() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> __get__container() const;

constexpr void __set__typePairs(::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<TKey,::System::Type*>*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<TKey,::System::Type*>*>* __get__typePairs() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<TKey,::System::Type*>*>*> __get__typePairs() const;

constexpr void __set__typeMap(::System::Collections::Generic::Dictionary_2<TKey,::System::Type*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<TKey,::System::Type*>* __get__typeMap() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<TKey,::System::Type*>*> __get__typeMap() const;

constexpr void __set__fallbackType(::System::Type*  value) ;

constexpr ::System::Type* __get__fallbackType() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get__fallbackType() const;

/// @brief Method get_Container addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::DiContainer* get_Container() ;

/// @brief Method get_ProvidedTypes addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* get_ProvidedTypes() ;

/// @brief Method get_Keys addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::ICollection_1<TKey>* get_Keys() ;

/// @brief Method get_TypeMap addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::Dictionary_2<TKey,::System::Type*>* get_TypeMap() ;

/// @brief Method Initialize addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Initialize() ;

/// @brief Method HasKey addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool HasKey(TKey  key) ;

/// @brief Method GetTypeForKey addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Type* GetTypeForKey(TKey  key) ;

/// @brief Method Validate addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Validate() ;

/// @brief Method AddBindingInternal addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TDerived>
static inline ::Zenject::ConditionCopyNonLazyBinder* AddBindingInternal(::Zenject::DiContainer*  container, TKey  key) ;

static inline ::Zenject::KeyedFactoryBase_2<TBase,TKey>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method __zenFieldSetter0 addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void __zenFieldSetter0(::System::Object*  P_0, ::System::Object*  P_1) ;

/// @brief Method __zenFieldSetter1 addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void __zenFieldSetter1(::System::Object*  P_0, ::System::Object*  P_1) ;

/// @brief Method __zenFieldSetter2 addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void __zenFieldSetter2(::System::Object*  P_0, ::System::Object*  P_1) ;

/// @brief Method __zenInjectMethod0 addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void __zenInjectMethod0(::System::Object*  P_0, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_1) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "KeyedFactoryBase_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
KeyedFactoryBase_2(KeyedFactoryBase_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KeyedFactoryBase_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
KeyedFactoryBase_2(KeyedFactoryBase_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 KeyedFactoryBase_2()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::KeyedFactoryBase_2, "Zenject", "KeyedFactoryBase`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__KeyedFactoryBase_2____c, "Zenject", "KeyedFactoryBase`2/<>c");
