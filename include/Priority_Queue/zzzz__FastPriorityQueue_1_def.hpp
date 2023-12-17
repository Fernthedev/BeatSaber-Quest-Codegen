#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FastPriorityQueue_1)
namespace Priority_Queue {
template<typename T>
class __FastPriorityQueue_1___GetEnumerator_d__22;
}
namespace Priority_Queue {
template<typename TItem,typename TPriority>
class IFixedSizePriorityQueue_2;
}
namespace System::Collections {
class IEnumerator;
}
namespace Priority_Queue {
template<typename TItem,typename TPriority>
class IPriorityQueue_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
class Object;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Priority_Queue {
template<typename T>
class FastPriorityQueue_1;
}
namespace Priority_Queue {
template<typename T>
class __FastPriorityQueue_1___GetEnumerator_d__22;
}
namespace Priority_Queue {
template<::il2cpp_utils::il2cpp_reference_type T>
class FastPriorityQueue_1<T>;
}
namespace Priority_Queue {
template<::il2cpp_utils::il2cpp_reference_type T>
class __FastPriorityQueue_1___GetEnumerator_d__22<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Priority_Queue::FastPriorityQueue_1);
MARK_GEN_REF_PTR_T(::Priority_Queue::__FastPriorityQueue_1___GetEnumerator_d__22);
// Type: ::<GetEnumerator>d__22
// Type: Priority_Queue::FastPriorityQueue`1
// Type: ::<GetEnumerator>d__22
namespace Priority_Queue {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6091)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6091), inst: 2 })
// CS Name: ::FastPriorityQueue`1::<GetEnumerator>d__22<T>*
class CORDL_TYPE __FastPriorityQueue_1___GetEnumerator_d__22<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field <>1__state offset 0x10
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current offset 0x18
 __declspec(property(get=__get___2__current, put=__set___2__current)) T  __2__current;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::Priority_Queue::FastPriorityQueue_1<T>*  __4__this;

/// @brief Field <i>5__2 offset 0x28
 __declspec(property(get=__get__i_5__2, put=__set__i_5__2)) int32_t  _i_5__2;

 __declspec(property(get=System_Collections_Generic_IEnumerator_T__get_Current)) T  System_Collections_Generic_IEnumerator_T__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___2__current(T  value) ;

constexpr T& __get___2__current() ;

constexpr T const& __get___2__current() const;

constexpr void __set___4__this(::Priority_Queue::FastPriorityQueue_1<T>*  value) ;

constexpr ::Priority_Queue::FastPriorityQueue_1<T>* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::Priority_Queue::FastPriorityQueue_1<T>*> __get___4__this() const;

constexpr void __set__i_5__2(int32_t  value) ;

constexpr int32_t& __get__i_5__2() ;

constexpr int32_t const& __get__i_5__2() const;

static inline ::Priority_Queue::__FastPriorityQueue_1___GetEnumerator_d__22<T>* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<T>.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline T System_Collections_Generic_IEnumerator_T__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "", ty: "__FastPriorityQueue_1___GetEnumerator_d__22", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__FastPriorityQueue_1___GetEnumerator_d__22(__FastPriorityQueue_1___GetEnumerator_d__22 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__FastPriorityQueue_1___GetEnumerator_d__22", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__FastPriorityQueue_1___GetEnumerator_d__22(__FastPriorityQueue_1___GetEnumerator_d__22 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __FastPriorityQueue_1___GetEnumerator_d__22()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Priority_Queue
// Type: Priority_Queue::FastPriorityQueue`1
namespace Priority_Queue {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(6092))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6092), inst: 2 })
// CS Name: ::Priority_Queue::FastPriorityQueue`1<T>*
class CORDL_TYPE FastPriorityQueue_1<T> : public ::System::Object {
public:
// Declarations
using _GetEnumerator_d__22 = ::Priority_Queue::__FastPriorityQueue_1___GetEnumerator_d__22<T>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _numNodes offset 0x10
 __declspec(property(get=__get__numNodes, put=__set__numNodes)) int32_t  _numNodes;

/// @brief Field _nodes offset 0x18
 __declspec(property(get=__get__nodes, put=__set__nodes)) ::ArrayW<T,::Array<T>*>  _nodes;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_MaxSize)) int32_t  MaxSize;

 __declspec(property(get=get_First)) T  First;

/// @brief Convert operator to "::Priority_Queue::IFixedSizePriorityQueue_2<T,float_t>"
constexpr operator  ::Priority_Queue::IFixedSizePriorityQueue_2<T,float_t>*() noexcept;

/// @brief Convert operator to "::Priority_Queue::IPriorityQueue_2<T,float_t>"
constexpr operator  ::Priority_Queue::IPriorityQueue_2<T,float_t>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

constexpr void __set__numNodes(int32_t  value) ;

constexpr int32_t& __get__numNodes() ;

constexpr int32_t const& __get__numNodes() const;

constexpr void __set__nodes(::ArrayW<T,::Array<T>*>  value) ;

constexpr ::ArrayW<T,::Array<T>*>& __get__nodes() ;

constexpr ::ArrayW<T,::Array<T>*> const& __get__nodes() const;

static inline ::Priority_Queue::FastPriorityQueue_1<T>* New_ctor(int32_t  maxNodes) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  maxNodes) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method get_MaxSize addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_MaxSize() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Contains(T  node) ;

/// @brief Method Enqueue addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Enqueue(T  node, float_t  priority) ;

/// @brief Method CascadeUp addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CascadeUp(T  node) ;

/// @brief Method CascadeDown addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CascadeDown(T  node) ;

/// @brief Method HasHigherPriority addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool HasHigherPriority(T  higher, T  lower) ;

/// @brief Method HasHigherOrEqualPriority addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool HasHigherOrEqualPriority(T  higher, T  lower) ;

/// @brief Method Dequeue addr 0x0 size 0xffffffffffffffff virtual true final true
inline T Dequeue() ;

/// @brief Method Resize addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Resize(int32_t  maxNodes) ;

/// @brief Method get_First addr 0x0 size 0xffffffffffffffff virtual true final true
inline T get_First() ;

/// @brief Method UpdatePriority addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UpdatePriority(T  node, float_t  priority) ;

/// @brief Method OnNodeUpdated addr 0x0 size 0xffffffffffffffff virtual false final false
inline void OnNodeUpdated(T  node) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Remove(T  node) ;

/// @brief Method ResetNode addr 0x0 size 0xffffffffffffffff virtual true final true
inline void ResetNode(T  node) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<T>* GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method IsValidQueue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool IsValidQueue() ;

// Ctor Parameters [CppParam { name: "", ty: "FastPriorityQueue_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FastPriorityQueue_1(FastPriorityQueue_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FastPriorityQueue_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FastPriorityQueue_1(FastPriorityQueue_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FastPriorityQueue_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Priority_Queue
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Priority_Queue::FastPriorityQueue_1, "Priority_Queue", "FastPriorityQueue`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Priority_Queue::__FastPriorityQueue_1___GetEnumerator_d__22, "Priority_Queue", "FastPriorityQueue`1/<GetEnumerator>d__22");
