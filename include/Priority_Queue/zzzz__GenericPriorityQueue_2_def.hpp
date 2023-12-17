#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GenericPriorityQueue_2)
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace Priority_Queue {
template<typename TItem,typename TPriority>
class IPriorityQueue_2;
}
namespace System {
template<typename T>
class Comparison_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace Priority_Queue {
template<typename TItem,typename TPriority>
class IFixedSizePriorityQueue_2;
}
namespace Priority_Queue {
template<typename TItem,typename TPriority>
class __GenericPriorityQueue_2___GetEnumerator_d__25;
}
namespace System {
class Object;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Priority_Queue {
template<typename TItem,typename TPriority>
class GenericPriorityQueue_2;
}
namespace Priority_Queue {
template<typename TItem,typename TPriority>
class __GenericPriorityQueue_2___GetEnumerator_d__25;
}
namespace Priority_Queue {
template<::il2cpp_utils::il2cpp_reference_type TItem,::il2cpp_utils::il2cpp_reference_type TPriority>
class GenericPriorityQueue_2<TItem,TPriority>;
}
namespace Priority_Queue {
template<::il2cpp_utils::il2cpp_reference_type TItem>
class GenericPriorityQueue_2<TItem,float_t>;
}
namespace Priority_Queue {
template<::il2cpp_utils::il2cpp_reference_type TItem,::il2cpp_utils::il2cpp_reference_type TPriority>
class __GenericPriorityQueue_2___GetEnumerator_d__25<TItem,TPriority>;
}
namespace Priority_Queue {
template<::il2cpp_utils::il2cpp_reference_type TItem>
class __GenericPriorityQueue_2___GetEnumerator_d__25<TItem,float_t>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Priority_Queue::GenericPriorityQueue_2);
MARK_GEN_REF_PTR_T(::Priority_Queue::__GenericPriorityQueue_2___GetEnumerator_d__25);
// Type: ::<GetEnumerator>d__25
// Type: Priority_Queue::GenericPriorityQueue`2
// Type: ::<GetEnumerator>d__25
namespace Priority_Queue {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TItem>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6094)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6094), inst: 1634 })
// CS Name: ::GenericPriorityQueue`2::<GetEnumerator>d__25<TItem,TPriority>*
class CORDL_TYPE __GenericPriorityQueue_2___GetEnumerator_d__25<TItem,float_t> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field <>1__state offset 0x10
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current offset 0x18
 __declspec(property(get=__get___2__current, put=__set___2__current)) TItem  __2__current;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::Priority_Queue::GenericPriorityQueue_2<TItem,float_t>*  __4__this;

/// @brief Field <i>5__2 offset 0x28
 __declspec(property(get=__get__i_5__2, put=__set__i_5__2)) int32_t  _i_5__2;

 __declspec(property(get=System_Collections_Generic_IEnumerator_TItem__get_Current)) TItem  System_Collections_Generic_IEnumerator_TItem__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TItem>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<TItem>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___2__current(TItem  value) ;

constexpr TItem& __get___2__current() ;

constexpr TItem const& __get___2__current() const;

constexpr void __set___4__this(::Priority_Queue::GenericPriorityQueue_2<TItem,float_t>*  value) ;

constexpr ::Priority_Queue::GenericPriorityQueue_2<TItem,float_t>* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::Priority_Queue::GenericPriorityQueue_2<TItem,float_t>*> __get___4__this() const;

constexpr void __set__i_5__2(int32_t  value) ;

constexpr int32_t& __get__i_5__2() ;

constexpr int32_t const& __get__i_5__2() const;

static inline ::Priority_Queue::__GenericPriorityQueue_2___GetEnumerator_d__25<TItem,float_t>* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<TItem>.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline TItem System_Collections_Generic_IEnumerator_TItem__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "", ty: "__GenericPriorityQueue_2___GetEnumerator_d__25", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__GenericPriorityQueue_2___GetEnumerator_d__25(__GenericPriorityQueue_2___GetEnumerator_d__25 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__GenericPriorityQueue_2___GetEnumerator_d__25", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__GenericPriorityQueue_2___GetEnumerator_d__25(__GenericPriorityQueue_2___GetEnumerator_d__25 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __GenericPriorityQueue_2___GetEnumerator_d__25()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Priority_Queue
// Type: ::<GetEnumerator>d__25
namespace Priority_Queue {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TItem,::il2cpp_utils::il2cpp_reference_type TPriority>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6094)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6094), inst: 81 })
// CS Name: ::GenericPriorityQueue`2::<GetEnumerator>d__25<TItem,TPriority>*
class CORDL_TYPE __GenericPriorityQueue_2___GetEnumerator_d__25<TItem,TPriority> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field <>1__state offset 0x10
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current offset 0x18
 __declspec(property(get=__get___2__current, put=__set___2__current)) TItem  __2__current;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::Priority_Queue::GenericPriorityQueue_2<TItem,TPriority>*  __4__this;

/// @brief Field <i>5__2 offset 0x28
 __declspec(property(get=__get__i_5__2, put=__set__i_5__2)) int32_t  _i_5__2;

 __declspec(property(get=System_Collections_Generic_IEnumerator_TItem__get_Current)) TItem  System_Collections_Generic_IEnumerator_TItem__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TItem>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<TItem>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___2__current(TItem  value) ;

constexpr TItem& __get___2__current() ;

constexpr TItem const& __get___2__current() const;

constexpr void __set___4__this(::Priority_Queue::GenericPriorityQueue_2<TItem,TPriority>*  value) ;

constexpr ::Priority_Queue::GenericPriorityQueue_2<TItem,TPriority>* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::Priority_Queue::GenericPriorityQueue_2<TItem,TPriority>*> __get___4__this() const;

constexpr void __set__i_5__2(int32_t  value) ;

constexpr int32_t& __get__i_5__2() ;

constexpr int32_t const& __get__i_5__2() const;

static inline ::Priority_Queue::__GenericPriorityQueue_2___GetEnumerator_d__25<TItem,TPriority>* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<TItem>.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline TItem System_Collections_Generic_IEnumerator_TItem__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "", ty: "__GenericPriorityQueue_2___GetEnumerator_d__25", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__GenericPriorityQueue_2___GetEnumerator_d__25(__GenericPriorityQueue_2___GetEnumerator_d__25 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__GenericPriorityQueue_2___GetEnumerator_d__25", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__GenericPriorityQueue_2___GetEnumerator_d__25(__GenericPriorityQueue_2___GetEnumerator_d__25 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __GenericPriorityQueue_2___GetEnumerator_d__25()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Priority_Queue
// Type: Priority_Queue::GenericPriorityQueue`2
namespace Priority_Queue {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TItem>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6095)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6095), inst: 1634 })
// CS Name: ::Priority_Queue::GenericPriorityQueue`2<TItem,TPriority>*
class CORDL_TYPE GenericPriorityQueue_2<TItem,float_t> : public ::System::Object {
public:
// Declarations
using _GetEnumerator_d__25 = ::Priority_Queue::__GenericPriorityQueue_2___GetEnumerator_d__25<TItem, float_t>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field _numNodes offset 0x10
 __declspec(property(get=__get__numNodes, put=__set__numNodes)) int32_t  _numNodes;

/// @brief Field _nodes offset 0x18
 __declspec(property(get=__get__nodes, put=__set__nodes)) ::ArrayW<TItem,::Array<TItem>*>  _nodes;

/// @brief Field _numNodesEverEnqueued offset 0x20
 __declspec(property(get=__get__numNodesEverEnqueued, put=__set__numNodesEverEnqueued)) int64_t  _numNodesEverEnqueued;

/// @brief Field _comparer offset 0x28
 __declspec(property(get=__get__comparer, put=__set__comparer)) ::System::Comparison_1<float_t>*  _comparer;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_MaxSize)) int32_t  MaxSize;

 __declspec(property(get=get_First)) TItem  First;

/// @brief Convert operator to "::Priority_Queue::IFixedSizePriorityQueue_2<TItem,float_t>"
constexpr operator  ::Priority_Queue::IFixedSizePriorityQueue_2<TItem,float_t>*() noexcept;

/// @brief Convert operator to "::Priority_Queue::IPriorityQueue_2<TItem,float_t>"
constexpr operator  ::Priority_Queue::IPriorityQueue_2<TItem,float_t>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TItem>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<TItem>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

constexpr void __set__numNodes(int32_t  value) ;

constexpr int32_t& __get__numNodes() ;

constexpr int32_t const& __get__numNodes() const;

constexpr void __set__nodes(::ArrayW<TItem,::Array<TItem>*>  value) ;

constexpr ::ArrayW<TItem,::Array<TItem>*>& __get__nodes() ;

constexpr ::ArrayW<TItem,::Array<TItem>*> const& __get__nodes() const;

constexpr void __set__numNodesEverEnqueued(int64_t  value) ;

constexpr int64_t& __get__numNodesEverEnqueued() ;

constexpr int64_t const& __get__numNodesEverEnqueued() const;

constexpr void __set__comparer(::System::Comparison_1<float_t>*  value) ;

constexpr ::System::Comparison_1<float_t>* __get__comparer() ;

constexpr ::cordl_internals::to_const_pointer<::System::Comparison_1<float_t>*> __get__comparer() const;

static inline ::Priority_Queue::GenericPriorityQueue_2<TItem,float_t>* New_ctor(int32_t  maxNodes) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  maxNodes) ;

static inline ::Priority_Queue::GenericPriorityQueue_2<TItem,float_t>* New_ctor(int32_t  maxNodes, ::System::Collections::Generic::IComparer_1<float_t>*  comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  maxNodes, ::System::Collections::Generic::IComparer_1<float_t>*  comparer) ;

static inline ::Priority_Queue::GenericPriorityQueue_2<TItem,float_t>* New_ctor(int32_t  maxNodes, ::System::Comparison_1<float_t>*  comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  maxNodes, ::System::Comparison_1<float_t>*  comparer) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method get_MaxSize addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_MaxSize() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Contains(TItem  node) ;

/// @brief Method Enqueue addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Enqueue(TItem  node, float_t  priority) ;

/// @brief Method CascadeUp addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CascadeUp(TItem  node) ;

/// @brief Method CascadeDown addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CascadeDown(TItem  node) ;

/// @brief Method HasHigherPriority addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool HasHigherPriority(TItem  higher, TItem  lower) ;

/// @brief Method Dequeue addr 0x0 size 0xffffffffffffffff virtual true final true
inline TItem Dequeue() ;

/// @brief Method Resize addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Resize(int32_t  maxNodes) ;

/// @brief Method get_First addr 0x0 size 0xffffffffffffffff virtual true final true
inline TItem get_First() ;

/// @brief Method UpdatePriority addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UpdatePriority(TItem  node, float_t  priority) ;

/// @brief Method OnNodeUpdated addr 0x0 size 0xffffffffffffffff virtual false final false
inline void OnNodeUpdated(TItem  node) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Remove(TItem  node) ;

/// @brief Method ResetNode addr 0x0 size 0xffffffffffffffff virtual true final true
inline void ResetNode(TItem  node) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<TItem>* GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method IsValidQueue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool IsValidQueue() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericPriorityQueue_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericPriorityQueue_2(GenericPriorityQueue_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericPriorityQueue_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericPriorityQueue_2(GenericPriorityQueue_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericPriorityQueue_2()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Priority_Queue
// Type: Priority_Queue::GenericPriorityQueue`2
namespace Priority_Queue {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TItem,::il2cpp_utils::il2cpp_reference_type TPriority>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(6095))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6095), inst: 81 })
// CS Name: ::Priority_Queue::GenericPriorityQueue`2<TItem,TPriority>*
class CORDL_TYPE GenericPriorityQueue_2<TItem,TPriority> : public ::System::Object {
public:
// Declarations
using _GetEnumerator_d__25 = ::Priority_Queue::__GenericPriorityQueue_2___GetEnumerator_d__25<TItem, TPriority>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field _numNodes offset 0x10
 __declspec(property(get=__get__numNodes, put=__set__numNodes)) int32_t  _numNodes;

/// @brief Field _nodes offset 0x18
 __declspec(property(get=__get__nodes, put=__set__nodes)) ::ArrayW<TItem,::Array<TItem>*>  _nodes;

/// @brief Field _numNodesEverEnqueued offset 0x20
 __declspec(property(get=__get__numNodesEverEnqueued, put=__set__numNodesEverEnqueued)) int64_t  _numNodesEverEnqueued;

/// @brief Field _comparer offset 0x28
 __declspec(property(get=__get__comparer, put=__set__comparer)) ::System::Comparison_1<TPriority>*  _comparer;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_MaxSize)) int32_t  MaxSize;

 __declspec(property(get=get_First)) TItem  First;

/// @brief Convert operator to "::Priority_Queue::IFixedSizePriorityQueue_2<TItem,TPriority>"
constexpr operator  ::Priority_Queue::IFixedSizePriorityQueue_2<TItem,TPriority>*() noexcept;

/// @brief Convert operator to "::Priority_Queue::IPriorityQueue_2<TItem,TPriority>"
constexpr operator  ::Priority_Queue::IPriorityQueue_2<TItem,TPriority>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TItem>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<TItem>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

constexpr void __set__numNodes(int32_t  value) ;

constexpr int32_t& __get__numNodes() ;

constexpr int32_t const& __get__numNodes() const;

constexpr void __set__nodes(::ArrayW<TItem,::Array<TItem>*>  value) ;

constexpr ::ArrayW<TItem,::Array<TItem>*>& __get__nodes() ;

constexpr ::ArrayW<TItem,::Array<TItem>*> const& __get__nodes() const;

constexpr void __set__numNodesEverEnqueued(int64_t  value) ;

constexpr int64_t& __get__numNodesEverEnqueued() ;

constexpr int64_t const& __get__numNodesEverEnqueued() const;

constexpr void __set__comparer(::System::Comparison_1<TPriority>*  value) ;

constexpr ::System::Comparison_1<TPriority>* __get__comparer() ;

constexpr ::cordl_internals::to_const_pointer<::System::Comparison_1<TPriority>*> __get__comparer() const;

static inline ::Priority_Queue::GenericPriorityQueue_2<TItem,TPriority>* New_ctor(int32_t  maxNodes) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  maxNodes) ;

static inline ::Priority_Queue::GenericPriorityQueue_2<TItem,TPriority>* New_ctor(int32_t  maxNodes, ::System::Collections::Generic::IComparer_1<TPriority>*  comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  maxNodes, ::System::Collections::Generic::IComparer_1<TPriority>*  comparer) ;

static inline ::Priority_Queue::GenericPriorityQueue_2<TItem,TPriority>* New_ctor(int32_t  maxNodes, ::System::Comparison_1<TPriority>*  comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  maxNodes, ::System::Comparison_1<TPriority>*  comparer) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method get_MaxSize addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_MaxSize() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Contains(TItem  node) ;

/// @brief Method Enqueue addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Enqueue(TItem  node, TPriority  priority) ;

/// @brief Method CascadeUp addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CascadeUp(TItem  node) ;

/// @brief Method CascadeDown addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CascadeDown(TItem  node) ;

/// @brief Method HasHigherPriority addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool HasHigherPriority(TItem  higher, TItem  lower) ;

/// @brief Method Dequeue addr 0x0 size 0xffffffffffffffff virtual true final true
inline TItem Dequeue() ;

/// @brief Method Resize addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Resize(int32_t  maxNodes) ;

/// @brief Method get_First addr 0x0 size 0xffffffffffffffff virtual true final true
inline TItem get_First() ;

/// @brief Method UpdatePriority addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UpdatePriority(TItem  node, TPriority  priority) ;

/// @brief Method OnNodeUpdated addr 0x0 size 0xffffffffffffffff virtual false final false
inline void OnNodeUpdated(TItem  node) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Remove(TItem  node) ;

/// @brief Method ResetNode addr 0x0 size 0xffffffffffffffff virtual true final true
inline void ResetNode(TItem  node) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<TItem>* GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method IsValidQueue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool IsValidQueue() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericPriorityQueue_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericPriorityQueue_2(GenericPriorityQueue_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericPriorityQueue_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericPriorityQueue_2(GenericPriorityQueue_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericPriorityQueue_2()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Priority_Queue
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Priority_Queue::GenericPriorityQueue_2, "Priority_Queue", "GenericPriorityQueue`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Priority_Queue::__GenericPriorityQueue_2___GetEnumerator_d__25, "Priority_Queue", "GenericPriorityQueue`2/<GetEnumerator>d__25");
