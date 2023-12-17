#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OVRObjectPool)
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace GlobalNamespace {
template<typename T>
struct __OVRObjectPool__StackScope_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace GlobalNamespace {
template<typename T>
struct __OVRObjectPool__HashSetScope_1;
}
namespace GlobalNamespace {
template<typename T>
class __OVRObjectPool__Storage_1;
}
namespace GlobalNamespace {
template<typename TKey,typename TValue>
struct __OVRObjectPool__DictionaryScope_2;
}
namespace GlobalNamespace {
template<typename T>
struct __OVRObjectPool__ListScope_1;
}
namespace GlobalNamespace {
template<typename T>
struct __OVRObjectPool__QueueScope_1;
}
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
namespace GlobalNamespace {
template<typename T>
struct __OVRObjectPool__ItemScope_1;
}
namespace System {
class IDisposable;
}
namespace System {
struct Guid;
}
namespace GlobalNamespace {
struct OVRAnchor;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class __OVRObjectPool__Storage_1;
}
namespace GlobalNamespace {
class OVRObjectPool;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type T>
class __OVRObjectPool__Storage_1<T>;
}
namespace GlobalNamespace {
template<typename TKey,typename TValue>
struct __OVRObjectPool__DictionaryScope_2;
}
namespace GlobalNamespace {
template<typename T>
struct __OVRObjectPool__HashSetScope_1;
}
namespace GlobalNamespace {
template<typename T>
struct __OVRObjectPool__ItemScope_1;
}
namespace GlobalNamespace {
template<typename T>
struct __OVRObjectPool__ListScope_1;
}
namespace GlobalNamespace {
template<typename T>
struct __OVRObjectPool__QueueScope_1;
}
namespace GlobalNamespace {
template<typename T>
struct __OVRObjectPool__StackScope_1;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
struct __OVRObjectPool__DictionaryScope_2<TKey,TValue>;
}
namespace GlobalNamespace {
template<>
struct __OVRObjectPool__HashSetScope_1<::System::Guid>;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type T>
struct __OVRObjectPool__HashSetScope_1<T>;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type T>
struct __OVRObjectPool__ItemScope_1<T>;
}
namespace GlobalNamespace {
template<>
struct __OVRObjectPool__ListScope_1<::GlobalNamespace::OVRAnchor>;
}
namespace GlobalNamespace {
template<>
struct __OVRObjectPool__ListScope_1<::System::Guid>;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type T>
struct __OVRObjectPool__ListScope_1<T>;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type T>
struct __OVRObjectPool__QueueScope_1<T>;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type T>
struct __OVRObjectPool__StackScope_1<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::__OVRObjectPool__Storage_1);
MARK_REF_PTR_T(::GlobalNamespace::OVRObjectPool);
MARK_GEN_VAL_T(::GlobalNamespace::__OVRObjectPool__DictionaryScope_2);
MARK_GEN_VAL_T(::GlobalNamespace::__OVRObjectPool__HashSetScope_1);
MARK_GEN_VAL_T(::GlobalNamespace::__OVRObjectPool__ItemScope_1);
MARK_GEN_VAL_T(::GlobalNamespace::__OVRObjectPool__ListScope_1);
MARK_GEN_VAL_T(::GlobalNamespace::__OVRObjectPool__QueueScope_1);
MARK_GEN_VAL_T(::GlobalNamespace::__OVRObjectPool__StackScope_1);
// Type: ::Storage`1
// Type: ::ListScope`1
// Type: ::DictionaryScope`2
// Type: ::HashSetScope`1
// Type: ::StackScope`1
// Type: ::QueueScope`1
// Type: ::ItemScope`1
// Type: ::OVRObjectPool
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8152))
// CS Name: ::OVRObjectPool*
class CORDL_TYPE OVRObjectPool : public ::System::Object {
public:
// Declarations
template<typename T>
using ItemScope_1 = ::GlobalNamespace::__OVRObjectPool__ItemScope_1<T>;

template<typename T>
using QueueScope_1 = ::GlobalNamespace::__OVRObjectPool__QueueScope_1<T>;

template<typename T>
using StackScope_1 = ::GlobalNamespace::__OVRObjectPool__StackScope_1<T>;

template<typename T>
using HashSetScope_1 = ::GlobalNamespace::__OVRObjectPool__HashSetScope_1<T>;

template<typename TKey,typename TValue>
using DictionaryScope_2 = ::GlobalNamespace::__OVRObjectPool__DictionaryScope_2<TKey, TValue>;

template<typename T>
using ListScope_1 = ::GlobalNamespace::__OVRObjectPool__ListScope_1<T>;

template<typename T>
using Storage_1 = ::GlobalNamespace::__OVRObjectPool__Storage_1<T>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method Get addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline T Get() ;

/// @brief Method List addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline ::System::Collections::Generic::List_1<T>* List() ;

/// @brief Method Dictionary addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TKey,typename TValue>
static inline ::System::Collections::Generic::Dictionary_2<TKey,TValue>* Dictionary() ;

/// @brief Method HashSet addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline ::System::Collections::Generic::HashSet_1<T>* HashSet() ;

/// @brief Method Stack addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline ::System::Collections::Generic::Stack_1<T>* Stack() ;

/// @brief Method Queue addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline ::System::Collections::Generic::Queue_1<T>* Queue() ;

/// @brief Method Return addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline void Return(T  obj) ;

/// @brief Method Return addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline void Return(::System::Collections::Generic::HashSet_1<T>*  set) ;

/// @brief Method Return addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline void Return(::System::Collections::Generic::Stack_1<T>*  stack) ;

/// @brief Method Return addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline void Return(::System::Collections::Generic::Queue_1<T>*  queue) ;

// Ctor Parameters [CppParam { name: "", ty: "OVRObjectPool", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRObjectPool(OVRObjectPool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRObjectPool", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRObjectPool(OVRObjectPool const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OVRObjectPool()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRObjectPool, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::Storage`1
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(8145))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8145), inst: 2 })
// CS Name: ::OVRObjectPool::Storage`1<T>*
class CORDL_TYPE __OVRObjectPool__Storage_1<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_HashSet(::System::Collections::Generic::HashSet_1<T>*  value) ;

static inline ::System::Collections::Generic::HashSet_1<T>* getStaticF_HashSet() ;

// Ctor Parameters [CppParam { name: "", ty: "__OVRObjectPool__Storage_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__OVRObjectPool__Storage_1(__OVRObjectPool__Storage_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__OVRObjectPool__Storage_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__OVRObjectPool__Storage_1(__OVRObjectPool__Storage_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __OVRObjectPool__Storage_1()  = default;
public:


// Fields

// Static field HashSet


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ListScope`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8146))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8146), inst: 980 })
// CS Name: ::OVRObjectPool::ListScope`1<T>
struct CORDL_TYPE __OVRObjectPool__ListScope_1<::GlobalNamespace::OVRAnchor> : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field _list offset 0x0
 __declspec(property(get=__get__list, put=__set__list)) ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  _list;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set__list(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* __get__list() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*> __get__list() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(ByRef<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>  list) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

// Ctor Parameters [CppParam { name: "_list", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*", modifiers: "", def_value: None }]
constexpr __OVRObjectPool__ListScope_1(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  _list) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRObjectPool__ListScope_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRObjectPool__ListScope_1()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ListScope`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8146))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8146), inst: 314 })
// CS Name: ::OVRObjectPool::ListScope`1<T>
struct CORDL_TYPE __OVRObjectPool__ListScope_1<::System::Guid> : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field _list offset 0x0
 __declspec(property(get=__get__list, put=__set__list)) ::System::Collections::Generic::List_1<::System::Guid>*  _list;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set__list(::System::Collections::Generic::List_1<::System::Guid>*  value) ;

constexpr ::System::Collections::Generic::List_1<::System::Guid>* __get__list() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Guid>*> __get__list() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(ByRef<::System::Collections::Generic::List_1<::System::Guid>*>  list) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

// Ctor Parameters [CppParam { name: "_list", ty: "::System::Collections::Generic::List_1<::System::Guid>*", modifiers: "", def_value: None }]
constexpr __OVRObjectPool__ListScope_1(::System::Collections::Generic::List_1<::System::Guid>*  _list) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRObjectPool__ListScope_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRObjectPool__ListScope_1()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ListScope`1
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8146))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8146), inst: 2 })
// CS Name: ::OVRObjectPool::ListScope`1<T>
struct CORDL_TYPE __OVRObjectPool__ListScope_1<T> : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field _list offset 0x0
 __declspec(property(get=__get__list, put=__set__list)) ::System::Collections::Generic::List_1<T>*  _list;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set__list(::System::Collections::Generic::List_1<T>*  value) ;

constexpr ::System::Collections::Generic::List_1<T>* __get__list() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<T>*> __get__list() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(ByRef<::System::Collections::Generic::List_1<T>*>  list) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

// Ctor Parameters [CppParam { name: "_list", ty: "::System::Collections::Generic::List_1<T>*", modifiers: "", def_value: None }]
constexpr __OVRObjectPool__ListScope_1(::System::Collections::Generic::List_1<T>*  _list) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRObjectPool__ListScope_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRObjectPool__ListScope_1()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::DictionaryScope`2
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8147))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8147), inst: 81 })
// CS Name: ::OVRObjectPool::DictionaryScope`2<TKey,TValue>
struct CORDL_TYPE __OVRObjectPool__DictionaryScope_2<TKey,TValue> : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field _dictionary offset 0x0
 __declspec(property(get=__get__dictionary, put=__set__dictionary)) ::System::Collections::Generic::Dictionary_2<TKey,TValue>*  _dictionary;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set__dictionary(::System::Collections::Generic::Dictionary_2<TKey,TValue>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<TKey,TValue>* __get__dictionary() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<TKey,TValue>*> __get__dictionary() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(ByRef<::System::Collections::Generic::Dictionary_2<TKey,TValue>*>  dictionary) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

// Ctor Parameters [CppParam { name: "_dictionary", ty: "::System::Collections::Generic::Dictionary_2<TKey,TValue>*", modifiers: "", def_value: None }]
constexpr __OVRObjectPool__DictionaryScope_2(::System::Collections::Generic::Dictionary_2<TKey,TValue>*  _dictionary) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRObjectPool__DictionaryScope_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRObjectPool__DictionaryScope_2()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::HashSetScope`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8148))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8148), inst: 314 })
// CS Name: ::OVRObjectPool::HashSetScope`1<T>
struct CORDL_TYPE __OVRObjectPool__HashSetScope_1<::System::Guid> : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field _set offset 0x0
 __declspec(property(get=__get__set, put=__set__set)) ::System::Collections::Generic::HashSet_1<::System::Guid>*  _set;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set__set(::System::Collections::Generic::HashSet_1<::System::Guid>*  value) ;

constexpr ::System::Collections::Generic::HashSet_1<::System::Guid>* __get__set() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::System::Guid>*> __get__set() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(ByRef<::System::Collections::Generic::HashSet_1<::System::Guid>*>  set) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

// Ctor Parameters [CppParam { name: "_set", ty: "::System::Collections::Generic::HashSet_1<::System::Guid>*", modifiers: "", def_value: None }]
constexpr __OVRObjectPool__HashSetScope_1(::System::Collections::Generic::HashSet_1<::System::Guid>*  _set) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRObjectPool__HashSetScope_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRObjectPool__HashSetScope_1()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::HashSetScope`1
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8148))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8148), inst: 2 })
// CS Name: ::OVRObjectPool::HashSetScope`1<T>
struct CORDL_TYPE __OVRObjectPool__HashSetScope_1<T> : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field _set offset 0x0
 __declspec(property(get=__get__set, put=__set__set)) ::System::Collections::Generic::HashSet_1<T>*  _set;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set__set(::System::Collections::Generic::HashSet_1<T>*  value) ;

constexpr ::System::Collections::Generic::HashSet_1<T>* __get__set() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<T>*> __get__set() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(ByRef<::System::Collections::Generic::HashSet_1<T>*>  set) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

// Ctor Parameters [CppParam { name: "_set", ty: "::System::Collections::Generic::HashSet_1<T>*", modifiers: "", def_value: None }]
constexpr __OVRObjectPool__HashSetScope_1(::System::Collections::Generic::HashSet_1<T>*  _set) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRObjectPool__HashSetScope_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRObjectPool__HashSetScope_1()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::StackScope`1
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8149))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8149), inst: 2 })
// CS Name: ::OVRObjectPool::StackScope`1<T>
struct CORDL_TYPE __OVRObjectPool__StackScope_1<T> : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field _stack offset 0x0
 __declspec(property(get=__get__stack, put=__set__stack)) ::System::Collections::Generic::Stack_1<T>*  _stack;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set__stack(::System::Collections::Generic::Stack_1<T>*  value) ;

constexpr ::System::Collections::Generic::Stack_1<T>* __get__stack() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<T>*> __get__stack() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(ByRef<::System::Collections::Generic::Stack_1<T>*>  stack) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

// Ctor Parameters [CppParam { name: "_stack", ty: "::System::Collections::Generic::Stack_1<T>*", modifiers: "", def_value: None }]
constexpr __OVRObjectPool__StackScope_1(::System::Collections::Generic::Stack_1<T>*  _stack) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRObjectPool__StackScope_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRObjectPool__StackScope_1()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::QueueScope`1
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8150))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8150), inst: 2 })
// CS Name: ::OVRObjectPool::QueueScope`1<T>
struct CORDL_TYPE __OVRObjectPool__QueueScope_1<T> : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field _queue offset 0x0
 __declspec(property(get=__get__queue, put=__set__queue)) ::System::Collections::Generic::Queue_1<T>*  _queue;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set__queue(::System::Collections::Generic::Queue_1<T>*  value) ;

constexpr ::System::Collections::Generic::Queue_1<T>* __get__queue() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<T>*> __get__queue() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(ByRef<::System::Collections::Generic::Queue_1<T>*>  queue) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

// Ctor Parameters [CppParam { name: "_queue", ty: "::System::Collections::Generic::Queue_1<T>*", modifiers: "", def_value: None }]
constexpr __OVRObjectPool__QueueScope_1(::System::Collections::Generic::Queue_1<T>*  _queue) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRObjectPool__QueueScope_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRObjectPool__QueueScope_1()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ItemScope`1
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8151))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8151), inst: 2 })
// CS Name: ::OVRObjectPool::ItemScope`1<T>
struct CORDL_TYPE __OVRObjectPool__ItemScope_1<T> : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field _item offset 0x0
 __declspec(property(get=__get__item, put=__set__item)) T  _item;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set__item(T  value) ;

constexpr T& __get__item() ;

constexpr T const& __get__item() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(ByRef<T>  item) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

// Ctor Parameters [CppParam { name: "_item", ty: "T", modifiers: "", def_value: None }]
constexpr __OVRObjectPool__ItemScope_1(T  _item) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRObjectPool__ItemScope_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRObjectPool__ItemScope_1()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__OVRObjectPool__Storage_1, "", "OVRObjectPool/Storage`1");
NEED_NO_BOX(::GlobalNamespace::OVRObjectPool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRObjectPool*, "", "OVRObjectPool");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__OVRObjectPool__DictionaryScope_2, "", "OVRObjectPool/DictionaryScope`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__OVRObjectPool__HashSetScope_1, "", "OVRObjectPool/HashSetScope`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__OVRObjectPool__ItemScope_1, "", "OVRObjectPool/ItemScope`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__OVRObjectPool__ListScope_1, "", "OVRObjectPool/ListScope`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__OVRObjectPool__QueueScope_1, "", "OVRObjectPool/QueueScope`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__OVRObjectPool__StackScope_1, "", "OVRObjectPool/StackScope`1");
