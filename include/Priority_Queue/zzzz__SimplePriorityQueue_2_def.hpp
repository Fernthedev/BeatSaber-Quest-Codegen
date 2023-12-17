#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Priority_Queue/zzzz__GenericPriorityQueueNode_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SimplePriorityQueue_2)
namespace System::Collections {
class IEnumerator;
}
namespace Priority_Queue {
template<typename TItem,typename TPriority>
class GenericPriorityQueue_2;
}
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
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
class __SimplePriorityQueue_2__SimpleNode;
}
namespace Priority_Queue {
template<typename TItem,typename TPriority>
class IPriorityQueue_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEqualityComparer_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System {
template<typename T>
class Comparison_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
// Forward declare root types
namespace Priority_Queue {
template<typename TItem,typename TPriority>
class SimplePriorityQueue_2;
}
namespace Priority_Queue {
template<typename TItem,typename TPriority>
class __SimplePriorityQueue_2__SimpleNode;
}
namespace Priority_Queue {
template<::il2cpp_utils::il2cpp_reference_type TItem,::il2cpp_utils::il2cpp_reference_type TPriority>
class SimplePriorityQueue_2<TItem,TPriority>;
}
namespace Priority_Queue {
template<::il2cpp_utils::il2cpp_reference_type TItem>
class SimplePriorityQueue_2<TItem,float_t>;
}
namespace Priority_Queue {
template<::il2cpp_utils::il2cpp_reference_type TItem,::il2cpp_utils::il2cpp_reference_type TPriority>
class __SimplePriorityQueue_2__SimpleNode<TItem,TPriority>;
}
namespace Priority_Queue {
template<::il2cpp_utils::il2cpp_reference_type TItem>
class __SimplePriorityQueue_2__SimpleNode<TItem,float_t>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Priority_Queue::SimplePriorityQueue_2);
MARK_GEN_REF_PTR_T(::Priority_Queue::__SimplePriorityQueue_2__SimpleNode);
// Type: ::SimpleNode
// Type: Priority_Queue::SimplePriorityQueue`2
// Type: ::SimpleNode
namespace Priority_Queue {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TItem>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6096)), TypeDefinitionIndex(TypeDefinitionIndex(6099)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6096), inst: 2555 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6099), inst: 1634 })
// CS Name: ::SimplePriorityQueue`2::SimpleNode<TItem,TPriority>*
class CORDL_TYPE __SimplePriorityQueue_2__SimpleNode<TItem,float_t> : public ::Priority_Queue::GenericPriorityQueueNode_1<float_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Priority_Queue::GenericPriorityQueueNode_1<float_t>)]{};

/// @brief Field <Data>k__BackingField offset 0x20
 __declspec(property(get=__get__Data_k__BackingField, put=__set__Data_k__BackingField)) TItem  _Data_k__BackingField;

 __declspec(property(get=get_Data, put=set_Data)) TItem  Data;

constexpr void __set__Data_k__BackingField(TItem  value) ;

constexpr TItem& __get__Data_k__BackingField() ;

constexpr TItem const& __get__Data_k__BackingField() const;

/// @brief Method get_Data addr 0x0 size 0xffffffffffffffff virtual false final false
inline TItem get_Data() ;

/// @brief Method set_Data addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Data(TItem  value) ;

static inline ::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem,float_t>* New_ctor(TItem  data) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(TItem  data) ;

// Ctor Parameters [CppParam { name: "", ty: "__SimplePriorityQueue_2__SimpleNode", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__SimplePriorityQueue_2__SimpleNode(__SimplePriorityQueue_2__SimpleNode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__SimplePriorityQueue_2__SimpleNode", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__SimplePriorityQueue_2__SimpleNode(__SimplePriorityQueue_2__SimpleNode const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __SimplePriorityQueue_2__SimpleNode()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Priority_Queue
// Type: ::SimpleNode
namespace Priority_Queue {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TItem,::il2cpp_utils::il2cpp_reference_type TPriority>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6096), inst: 2555 }), TypeDefinitionIndex(TypeDefinitionIndex(6096)), TypeDefinitionIndex(TypeDefinitionIndex(6099))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6099), inst: 81 })
// CS Name: ::SimplePriorityQueue`2::SimpleNode<TItem,TPriority>*
class CORDL_TYPE __SimplePriorityQueue_2__SimpleNode<TItem,TPriority> : public ::Priority_Queue::GenericPriorityQueueNode_1<TPriority> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Priority_Queue::GenericPriorityQueueNode_1<TPriority>)]{};

/// @brief Field <Data>k__BackingField offset 0x28
 __declspec(property(get=__get__Data_k__BackingField, put=__set__Data_k__BackingField)) TItem  _Data_k__BackingField;

 __declspec(property(get=get_Data, put=set_Data)) TItem  Data;

constexpr void __set__Data_k__BackingField(TItem  value) ;

constexpr TItem& __get__Data_k__BackingField() ;

constexpr TItem const& __get__Data_k__BackingField() const;

/// @brief Method get_Data addr 0x0 size 0xffffffffffffffff virtual false final false
inline TItem get_Data() ;

/// @brief Method set_Data addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Data(TItem  value) ;

static inline ::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem,TPriority>* New_ctor(TItem  data) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(TItem  data) ;

// Ctor Parameters [CppParam { name: "", ty: "__SimplePriorityQueue_2__SimpleNode", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__SimplePriorityQueue_2__SimpleNode(__SimplePriorityQueue_2__SimpleNode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__SimplePriorityQueue_2__SimpleNode", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__SimplePriorityQueue_2__SimpleNode(__SimplePriorityQueue_2__SimpleNode const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __SimplePriorityQueue_2__SimpleNode()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Priority_Queue
// Type: Priority_Queue::SimplePriorityQueue`2
namespace Priority_Queue {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TItem>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(6100))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6100), inst: 1634 })
// CS Name: ::Priority_Queue::SimplePriorityQueue`2<TItem,TPriority>*
class CORDL_TYPE SimplePriorityQueue_2<TItem,float_t> : public ::System::Object {
public:
// Declarations
using SimpleNode = ::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem, float_t>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field INITIAL_QUEUE_SIZE offset 0x0
static constexpr int32_t  INITIAL_QUEUE_SIZE{static_cast<int32_t>(0xa)};

/// @brief Field _queue offset 0x10
 __declspec(property(get=__get__queue, put=__set__queue)) ::Priority_Queue::GenericPriorityQueue_2<::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem,float_t>*,float_t>*  _queue;

/// @brief Field _itemToNodesCache offset 0x18
 __declspec(property(get=__get__itemToNodesCache, put=__set__itemToNodesCache)) ::System::Collections::Generic::Dictionary_2<TItem,::System::Collections::Generic::IList_1<::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem,float_t>*>*>*  _itemToNodesCache;

/// @brief Field _nullNodesCache offset 0x20
 __declspec(property(get=__get__nullNodesCache, put=__set__nullNodesCache)) ::System::Collections::Generic::IList_1<::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem,float_t>*>*  _nullNodesCache;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_First)) TItem  First;

/// @brief Convert operator to "::Priority_Queue::IPriorityQueue_2<TItem,float_t>"
constexpr operator  ::Priority_Queue::IPriorityQueue_2<TItem,float_t>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TItem>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<TItem>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

constexpr void __set__queue(::Priority_Queue::GenericPriorityQueue_2<::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem,float_t>*,float_t>*  value) ;

constexpr ::Priority_Queue::GenericPriorityQueue_2<::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem,float_t>*,float_t>* __get__queue() ;

constexpr ::cordl_internals::to_const_pointer<::Priority_Queue::GenericPriorityQueue_2<::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem,float_t>*,float_t>*> __get__queue() const;

constexpr void __set__itemToNodesCache(::System::Collections::Generic::Dictionary_2<TItem,::System::Collections::Generic::IList_1<::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem,float_t>*>*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<TItem,::System::Collections::Generic::IList_1<::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem,float_t>*>*>* __get__itemToNodesCache() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<TItem,::System::Collections::Generic::IList_1<::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem,float_t>*>*>*> __get__itemToNodesCache() const;

constexpr void __set__nullNodesCache(::System::Collections::Generic::IList_1<::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem,float_t>*>*  value) ;

constexpr ::System::Collections::Generic::IList_1<::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem,float_t>*>* __get__nullNodesCache() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IList_1<::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem,float_t>*>*> __get__nullNodesCache() const;

static inline ::Priority_Queue::SimplePriorityQueue_2<TItem,float_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::Priority_Queue::SimplePriorityQueue_2<TItem,float_t>* New_ctor(::System::Collections::Generic::IComparer_1<float_t>*  priorityComparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IComparer_1<float_t>*  priorityComparer) ;

static inline ::Priority_Queue::SimplePriorityQueue_2<TItem,float_t>* New_ctor(::System::Comparison_1<float_t>*  priorityComparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Comparison_1<float_t>*  priorityComparer) ;

static inline ::Priority_Queue::SimplePriorityQueue_2<TItem,float_t>* New_ctor(::System::Collections::Generic::IEqualityComparer_1<TItem>*  itemEquality) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEqualityComparer_1<TItem>*  itemEquality) ;

static inline ::Priority_Queue::SimplePriorityQueue_2<TItem,float_t>* New_ctor(::System::Collections::Generic::IComparer_1<float_t>*  priorityComparer, ::System::Collections::Generic::IEqualityComparer_1<TItem>*  itemEquality) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IComparer_1<float_t>*  priorityComparer, ::System::Collections::Generic::IEqualityComparer_1<TItem>*  itemEquality) ;

static inline ::Priority_Queue::SimplePriorityQueue_2<TItem,float_t>* New_ctor(::System::Comparison_1<float_t>*  priorityComparer, ::System::Collections::Generic::IEqualityComparer_1<TItem>*  itemEquality) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Comparison_1<float_t>*  priorityComparer, ::System::Collections::Generic::IEqualityComparer_1<TItem>*  itemEquality) ;

/// @brief Method GetExistingNode addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem,float_t>* GetExistingNode(TItem  item) ;

/// @brief Method AddToNodeCache addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddToNodeCache(::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem,float_t>*  node) ;

/// @brief Method RemoveFromNodeCache addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveFromNodeCache(::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem,float_t>*  node) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method get_First addr 0x0 size 0xffffffffffffffff virtual true final true
inline TItem get_First() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Contains(TItem  item) ;

/// @brief Method Dequeue addr 0x0 size 0xffffffffffffffff virtual true final true
inline TItem Dequeue() ;

/// @brief Method EnqueueNoLockOrCache addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem,float_t>* EnqueueNoLockOrCache(TItem  item, float_t  priority) ;

/// @brief Method Enqueue addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Enqueue(TItem  item, float_t  priority) ;

/// @brief Method EnqueueWithoutDuplicates addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool EnqueueWithoutDuplicates(TItem  item, float_t  priority) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Remove(TItem  item) ;

/// @brief Method UpdatePriority addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UpdatePriority(TItem  item, float_t  priority) ;

/// @brief Method GetPriority addr 0x0 size 0xffffffffffffffff virtual false final false
inline float_t GetPriority(TItem  item) ;

/// @brief Method TryFirst addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TryFirst(ByRef<TItem>  first) ;

/// @brief Method TryDequeue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TryDequeue(ByRef<TItem>  first) ;

/// @brief Method TryRemove addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TryRemove(TItem  item) ;

/// @brief Method TryUpdatePriority addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TryUpdatePriority(TItem  item, float_t  priority) ;

/// @brief Method TryGetPriority addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TryGetPriority(TItem  item, ByRef<float_t>  priority) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<TItem>* GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method IsValidQueue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool IsValidQueue() ;

// Ctor Parameters [CppParam { name: "", ty: "SimplePriorityQueue_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SimplePriorityQueue_2(SimplePriorityQueue_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimplePriorityQueue_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimplePriorityQueue_2(SimplePriorityQueue_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SimplePriorityQueue_2()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Priority_Queue
// Type: Priority_Queue::SimplePriorityQueue`2
namespace Priority_Queue {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TItem,::il2cpp_utils::il2cpp_reference_type TPriority>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(6100))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6100), inst: 81 })
// CS Name: ::Priority_Queue::SimplePriorityQueue`2<TItem,TPriority>*
class CORDL_TYPE SimplePriorityQueue_2<TItem,TPriority> : public ::System::Object {
public:
// Declarations
using SimpleNode = ::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem, TPriority>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field INITIAL_QUEUE_SIZE offset 0x0
static constexpr int32_t  INITIAL_QUEUE_SIZE{static_cast<int32_t>(0xa)};

/// @brief Field _queue offset 0x10
 __declspec(property(get=__get__queue, put=__set__queue)) ::Priority_Queue::GenericPriorityQueue_2<::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem,TPriority>*,TPriority>*  _queue;

/// @brief Field _itemToNodesCache offset 0x18
 __declspec(property(get=__get__itemToNodesCache, put=__set__itemToNodesCache)) ::System::Collections::Generic::Dictionary_2<TItem,::System::Collections::Generic::IList_1<::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem,TPriority>*>*>*  _itemToNodesCache;

/// @brief Field _nullNodesCache offset 0x20
 __declspec(property(get=__get__nullNodesCache, put=__set__nullNodesCache)) ::System::Collections::Generic::IList_1<::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem,TPriority>*>*  _nullNodesCache;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_First)) TItem  First;

/// @brief Convert operator to "::Priority_Queue::IPriorityQueue_2<TItem,TPriority>"
constexpr operator  ::Priority_Queue::IPriorityQueue_2<TItem,TPriority>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TItem>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<TItem>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

constexpr void __set__queue(::Priority_Queue::GenericPriorityQueue_2<::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem,TPriority>*,TPriority>*  value) ;

constexpr ::Priority_Queue::GenericPriorityQueue_2<::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem,TPriority>*,TPriority>* __get__queue() ;

constexpr ::cordl_internals::to_const_pointer<::Priority_Queue::GenericPriorityQueue_2<::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem,TPriority>*,TPriority>*> __get__queue() const;

constexpr void __set__itemToNodesCache(::System::Collections::Generic::Dictionary_2<TItem,::System::Collections::Generic::IList_1<::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem,TPriority>*>*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<TItem,::System::Collections::Generic::IList_1<::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem,TPriority>*>*>* __get__itemToNodesCache() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<TItem,::System::Collections::Generic::IList_1<::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem,TPriority>*>*>*> __get__itemToNodesCache() const;

constexpr void __set__nullNodesCache(::System::Collections::Generic::IList_1<::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem,TPriority>*>*  value) ;

constexpr ::System::Collections::Generic::IList_1<::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem,TPriority>*>* __get__nullNodesCache() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IList_1<::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem,TPriority>*>*> __get__nullNodesCache() const;

static inline ::Priority_Queue::SimplePriorityQueue_2<TItem,TPriority>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::Priority_Queue::SimplePriorityQueue_2<TItem,TPriority>* New_ctor(::System::Collections::Generic::IComparer_1<TPriority>*  priorityComparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IComparer_1<TPriority>*  priorityComparer) ;

static inline ::Priority_Queue::SimplePriorityQueue_2<TItem,TPriority>* New_ctor(::System::Comparison_1<TPriority>*  priorityComparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Comparison_1<TPriority>*  priorityComparer) ;

static inline ::Priority_Queue::SimplePriorityQueue_2<TItem,TPriority>* New_ctor(::System::Collections::Generic::IEqualityComparer_1<TItem>*  itemEquality) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEqualityComparer_1<TItem>*  itemEquality) ;

static inline ::Priority_Queue::SimplePriorityQueue_2<TItem,TPriority>* New_ctor(::System::Collections::Generic::IComparer_1<TPriority>*  priorityComparer, ::System::Collections::Generic::IEqualityComparer_1<TItem>*  itemEquality) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IComparer_1<TPriority>*  priorityComparer, ::System::Collections::Generic::IEqualityComparer_1<TItem>*  itemEquality) ;

static inline ::Priority_Queue::SimplePriorityQueue_2<TItem,TPriority>* New_ctor(::System::Comparison_1<TPriority>*  priorityComparer, ::System::Collections::Generic::IEqualityComparer_1<TItem>*  itemEquality) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Comparison_1<TPriority>*  priorityComparer, ::System::Collections::Generic::IEqualityComparer_1<TItem>*  itemEquality) ;

/// @brief Method GetExistingNode addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem,TPriority>* GetExistingNode(TItem  item) ;

/// @brief Method AddToNodeCache addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddToNodeCache(::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem,TPriority>*  node) ;

/// @brief Method RemoveFromNodeCache addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveFromNodeCache(::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem,TPriority>*  node) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method get_First addr 0x0 size 0xffffffffffffffff virtual true final true
inline TItem get_First() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Contains(TItem  item) ;

/// @brief Method Dequeue addr 0x0 size 0xffffffffffffffff virtual true final true
inline TItem Dequeue() ;

/// @brief Method EnqueueNoLockOrCache addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem,TPriority>* EnqueueNoLockOrCache(TItem  item, TPriority  priority) ;

/// @brief Method Enqueue addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Enqueue(TItem  item, TPriority  priority) ;

/// @brief Method EnqueueWithoutDuplicates addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool EnqueueWithoutDuplicates(TItem  item, TPriority  priority) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Remove(TItem  item) ;

/// @brief Method UpdatePriority addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UpdatePriority(TItem  item, TPriority  priority) ;

/// @brief Method GetPriority addr 0x0 size 0xffffffffffffffff virtual false final false
inline TPriority GetPriority(TItem  item) ;

/// @brief Method TryFirst addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TryFirst(ByRef<TItem>  first) ;

/// @brief Method TryDequeue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TryDequeue(ByRef<TItem>  first) ;

/// @brief Method TryRemove addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TryRemove(TItem  item) ;

/// @brief Method TryUpdatePriority addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TryUpdatePriority(TItem  item, TPriority  priority) ;

/// @brief Method TryGetPriority addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TryGetPriority(TItem  item, ByRef<TPriority>  priority) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<TItem>* GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method IsValidQueue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool IsValidQueue() ;

// Ctor Parameters [CppParam { name: "", ty: "SimplePriorityQueue_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SimplePriorityQueue_2(SimplePriorityQueue_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimplePriorityQueue_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimplePriorityQueue_2(SimplePriorityQueue_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SimplePriorityQueue_2()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Priority_Queue
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Priority_Queue::SimplePriorityQueue_2, "Priority_Queue", "SimplePriorityQueue`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Priority_Queue::__SimplePriorityQueue_2__SimpleNode, "Priority_Queue", "SimplePriorityQueue`2/SimpleNode");
