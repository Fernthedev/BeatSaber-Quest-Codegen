#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AsyncCache_2)
namespace System::Collections::Concurrent {
template<typename TKey,typename TValue>
class ConcurrentDictionary_2;
}
namespace GlobalNamespace {
template<typename TKey,typename TValue>
class __AsyncCache_2____c__DisplayClass4_0;
}
namespace System {
template<typename T>
class Lazy_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TKey,typename TValue>
class AsyncCache_2;
}
namespace GlobalNamespace {
template<typename TKey,typename TValue>
class __AsyncCache_2____c__DisplayClass4_0;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
class AsyncCache_2<TKey,TValue>;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
class __AsyncCache_2____c__DisplayClass4_0<TKey,TValue>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::AsyncCache_2);
MARK_GEN_REF_PTR_T(::GlobalNamespace::__AsyncCache_2____c__DisplayClass4_0);
// Type: ::<>c__DisplayClass4_0
// Type: ::AsyncCache`2
// Type: ::<>c__DisplayClass4_0
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5904)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5904), inst: 81 })
// CS Name: ::AsyncCache`2::<>c__DisplayClass4_0<TKey,TValue>*
class CORDL_TYPE __AsyncCache_2____c__DisplayClass4_0<TKey,TValue> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field toAdd offset 0x10
 __declspec(property(get=__get_toAdd, put=__set_toAdd)) TKey  toAdd;

/// @brief Field <>4__this offset 0x18
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::AsyncCache_2<TKey,TValue>*  __4__this;

constexpr void __set_toAdd(TKey  value) ;

constexpr TKey& __get_toAdd() ;

constexpr TKey const& __get_toAdd() const;

constexpr void __set___4__this(::GlobalNamespace::AsyncCache_2<TKey,TValue>*  value) ;

constexpr ::GlobalNamespace::AsyncCache_2<TKey,TValue>* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AsyncCache_2<TKey,TValue>*> __get___4__this() const;

static inline ::GlobalNamespace::__AsyncCache_2____c__DisplayClass4_0<TKey,TValue>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <get_Item>b__1 addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<TValue>* _get_Item_b__1() ;

// Ctor Parameters [CppParam { name: "", ty: "__AsyncCache_2____c__DisplayClass4_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__AsyncCache_2____c__DisplayClass4_0(__AsyncCache_2____c__DisplayClass4_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__AsyncCache_2____c__DisplayClass4_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__AsyncCache_2____c__DisplayClass4_0(__AsyncCache_2____c__DisplayClass4_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __AsyncCache_2____c__DisplayClass4_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::AsyncCache`2
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5905)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5905), inst: 81 })
// CS Name: ::AsyncCache`2<TKey,TValue>*
class CORDL_TYPE AsyncCache_2<TKey,TValue> : public ::System::Object {
public:
// Declarations
using __c__DisplayClass4_0 = ::GlobalNamespace::__AsyncCache_2____c__DisplayClass4_0<TKey, TValue>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _valueFactory offset 0x10
 __declspec(property(get=__get__valueFactory, put=__set__valueFactory)) ::System::Func_2<TKey,::System::Threading::Tasks::Task_1<TValue>*>*  _valueFactory;

/// @brief Field _map offset 0x18
 __declspec(property(get=__get__map, put=__set__map)) ::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,::System::Lazy_1<::System::Threading::Tasks::Task_1<TValue>*>*>*  _map;

 __declspec(property(get=get_Item)) ::System::Threading::Tasks::Task_1<TValue>*  Item[];

constexpr void __set__valueFactory(::System::Func_2<TKey,::System::Threading::Tasks::Task_1<TValue>*>*  value) ;

constexpr ::System::Func_2<TKey,::System::Threading::Tasks::Task_1<TValue>*>* __get__valueFactory() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TKey,::System::Threading::Tasks::Task_1<TValue>*>*> __get__valueFactory() const;

constexpr void __set__map(::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,::System::Lazy_1<::System::Threading::Tasks::Task_1<TValue>*>*>*  value) ;

constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,::System::Lazy_1<::System::Threading::Tasks::Task_1<TValue>*>*>* __get__map() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,::System::Lazy_1<::System::Threading::Tasks::Task_1<TValue>*>*>*> __get__map() const;

static inline ::GlobalNamespace::AsyncCache_2<TKey,TValue>* New_ctor(::System::Func_2<TKey,::System::Threading::Tasks::Task_1<TValue>*>*  valueFactory) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_2<TKey,::System::Threading::Tasks::Task_1<TValue>*>*  valueFactory) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<TValue>* get_Item(TKey  key) ;

/// @brief Method RemoveKey addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveKey(TKey  key) ;

/// @brief Method <get_Item>b__4_0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Lazy_1<::System::Threading::Tasks::Task_1<TValue>*>* _get_Item_b__4_0(TKey  toAdd) ;

// Ctor Parameters [CppParam { name: "", ty: "AsyncCache_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncCache_2(AsyncCache_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncCache_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncCache_2(AsyncCache_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AsyncCache_2()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::AsyncCache_2, "", "AsyncCache`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__AsyncCache_2____c__DisplayClass4_0, "", "AsyncCache`2/<>c__DisplayClass4_0");
