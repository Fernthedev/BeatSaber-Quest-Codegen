#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ThreadPoolWorkQueue)
namespace System::Threading {
class ThreadPoolWorkQueueThreadLocals;
}
namespace System::Threading {
class __ThreadPoolWorkQueue__QueueSegment;
}
namespace System::Threading {
class IThreadPoolWorkItem;
}
namespace System::Threading {
template<typename T>
class __ThreadPoolWorkQueue__SparseArray_1;
}
namespace System::Threading {
class __ThreadPoolWorkQueue__WorkStealingQueue;
}
namespace System::Threading {
struct SpinLock;
}
// Forward declare root types
namespace System::Threading {
template<typename T>
class __ThreadPoolWorkQueue__SparseArray_1;
}
namespace System::Threading {
class ThreadPoolWorkQueue;
}
namespace System::Threading {
class __ThreadPoolWorkQueue__QueueSegment;
}
namespace System::Threading {
template<::il2cpp_utils::il2cpp_reference_type T>
class __ThreadPoolWorkQueue__SparseArray_1<T>;
}
namespace System::Threading {
class __ThreadPoolWorkQueue__WorkStealingQueue;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Threading::__ThreadPoolWorkQueue__SparseArray_1);
MARK_REF_PTR_T(::System::Threading::ThreadPoolWorkQueue);
MARK_REF_PTR_T(::System::Threading::__ThreadPoolWorkQueue__QueueSegment);
MARK_REF_PTR_T(::System::Threading::__ThreadPoolWorkQueue__WorkStealingQueue);
// Type: ::SparseArray`1
// Type: ::WorkStealingQueue
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2732))
// CS Name: ::ThreadPoolWorkQueue::WorkStealingQueue*
class CORDL_TYPE __ThreadPoolWorkQueue__WorkStealingQueue : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field m_array offset 0x10
 __declspec(property(get=__get_m_array, put=__set_m_array)) ::ArrayW<::System::Threading::IThreadPoolWorkItem*,::Array<::System::Threading::IThreadPoolWorkItem*>*>  m_array;

/// @brief Field m_mask offset 0x18
 __declspec(property(get=__get_m_mask, put=__set_m_mask)) int32_t  m_mask;

/// @brief Field m_headIndex offset 0x1c
 __declspec(property(get=__get_m_headIndex, put=__set_m_headIndex)) int32_t  m_headIndex;

/// @brief Field m_tailIndex offset 0x20
 __declspec(property(get=__get_m_tailIndex, put=__set_m_tailIndex)) int32_t  m_tailIndex;

/// @brief Field m_foreignLock offset 0x24
 __declspec(property(get=__get_m_foreignLock, put=__set_m_foreignLock)) ::System::Threading::SpinLock  m_foreignLock;

constexpr void __set_m_array(::ArrayW<::System::Threading::IThreadPoolWorkItem*,::Array<::System::Threading::IThreadPoolWorkItem*>*>  value) ;

constexpr ::ArrayW<::System::Threading::IThreadPoolWorkItem*,::Array<::System::Threading::IThreadPoolWorkItem*>*>& __get_m_array() ;

constexpr ::ArrayW<::System::Threading::IThreadPoolWorkItem*,::Array<::System::Threading::IThreadPoolWorkItem*>*> const& __get_m_array() const;

constexpr void __set_m_mask(int32_t  value) ;

constexpr int32_t& __get_m_mask() ;

constexpr int32_t const& __get_m_mask() const;

constexpr void __set_m_headIndex(int32_t  value) ;

constexpr int32_t& __get_m_headIndex() ;

constexpr int32_t const& __get_m_headIndex() const;

constexpr void __set_m_tailIndex(int32_t  value) ;

constexpr int32_t& __get_m_tailIndex() ;

constexpr int32_t const& __get_m_tailIndex() const;

constexpr void __set_m_foreignLock(::System::Threading::SpinLock  value) ;

constexpr ::System::Threading::SpinLock& __get_m_foreignLock() ;

constexpr ::System::Threading::SpinLock const& __get_m_foreignLock() const;

/// @brief Method LocalPush addr 0x261a9c0 size 0x434 virtual false final false
inline void LocalPush(::System::Threading::IThreadPoolWorkItem*  obj) ;

/// @brief Method LocalFindAndPop addr 0x261ae64 size 0x2bc virtual false final false
inline bool LocalFindAndPop(::System::Threading::IThreadPoolWorkItem*  obj) ;

/// @brief Method LocalPop addr 0x261b2f0 size 0x274 virtual false final false
inline bool LocalPop(ByRef<::System::Threading::IThreadPoolWorkItem*>  obj) ;

/// @brief Method TrySteal addr 0x261b564 size 0x8 virtual false final false
inline bool TrySteal(ByRef<::System::Threading::IThreadPoolWorkItem*>  obj, ByRef<bool>  missedSteal) ;

/// @brief Method TrySteal addr 0x261ba4c size 0x244 virtual false final false
inline bool TrySteal(ByRef<::System::Threading::IThreadPoolWorkItem*>  obj, ByRef<bool>  missedSteal, int32_t  millisecondsTimeout) ;

static inline ::System::Threading::__ThreadPoolWorkQueue__WorkStealingQueue* New_ctor() ;

/// @brief Method .ctor addr 0x261bc90 size 0x80 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__ThreadPoolWorkQueue__WorkStealingQueue", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ThreadPoolWorkQueue__WorkStealingQueue(__ThreadPoolWorkQueue__WorkStealingQueue && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ThreadPoolWorkQueue__WorkStealingQueue", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ThreadPoolWorkQueue__WorkStealingQueue(__ThreadPoolWorkQueue__WorkStealingQueue const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ThreadPoolWorkQueue__WorkStealingQueue()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::__ThreadPoolWorkQueue__WorkStealingQueue, 0x28>, "Size mismatch!");

} // namespace end def System::Threading
// Type: ::QueueSegment
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2733))
// CS Name: ::ThreadPoolWorkQueue::QueueSegment*
class CORDL_TYPE __ThreadPoolWorkQueue__QueueSegment : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field nodes offset 0x10
 __declspec(property(get=__get_nodes, put=__set_nodes)) ::ArrayW<::System::Threading::IThreadPoolWorkItem*,::Array<::System::Threading::IThreadPoolWorkItem*>*>  nodes;

/// @brief Field indexes offset 0x18
 __declspec(property(get=__get_indexes, put=__set_indexes)) int32_t  indexes;

/// @brief Field Next offset 0x20
 __declspec(property(get=__get_Next, put=__set_Next)) ::System::Threading::__ThreadPoolWorkQueue__QueueSegment*  Next;

constexpr void __set_nodes(::ArrayW<::System::Threading::IThreadPoolWorkItem*,::Array<::System::Threading::IThreadPoolWorkItem*>*>  value) ;

constexpr ::ArrayW<::System::Threading::IThreadPoolWorkItem*,::Array<::System::Threading::IThreadPoolWorkItem*>*>& __get_nodes() ;

constexpr ::ArrayW<::System::Threading::IThreadPoolWorkItem*,::Array<::System::Threading::IThreadPoolWorkItem*>*> const& __get_nodes() const;

constexpr void __set_indexes(int32_t  value) ;

constexpr int32_t& __get_indexes() ;

constexpr int32_t const& __get_indexes() const;

constexpr void __set_Next(::System::Threading::__ThreadPoolWorkQueue__QueueSegment*  value) ;

constexpr ::System::Threading::__ThreadPoolWorkQueue__QueueSegment* __get_Next() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::__ThreadPoolWorkQueue__QueueSegment*> __get_Next() const;

/// @brief Method GetIndexes addr 0x261bd10 size 0x34 virtual false final false
inline void GetIndexes(ByRef<int32_t>  upper, ByRef<int32_t>  lower) ;

/// @brief Method CompareExchangeIndexes addr 0x261bd44 size 0x68 virtual false final false
inline bool CompareExchangeIndexes(ByRef<int32_t>  prevUpper, int32_t  newUpper, ByRef<int32_t>  prevLower, int32_t  newLower) ;

static inline ::System::Threading::__ThreadPoolWorkQueue__QueueSegment* New_ctor() ;

/// @brief Method .ctor addr 0x261bdb0 size 0x5c virtual false final false
inline void _ctor() ;

/// @brief Method IsUsedUp addr 0x261be0c size 0x44 virtual false final false
inline bool IsUsedUp() ;

/// @brief Method TryEnqueue addr 0x261be50 size 0xac virtual false final false
inline bool TryEnqueue(::System::Threading::IThreadPoolWorkItem*  node) ;

/// @brief Method TryDequeue addr 0x261befc size 0xec virtual false final false
inline bool TryDequeue(ByRef<::System::Threading::IThreadPoolWorkItem*>  node) ;

// Ctor Parameters [CppParam { name: "", ty: "__ThreadPoolWorkQueue__QueueSegment", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ThreadPoolWorkQueue__QueueSegment(__ThreadPoolWorkQueue__QueueSegment && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ThreadPoolWorkQueue__QueueSegment", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ThreadPoolWorkQueue__QueueSegment(__ThreadPoolWorkQueue__QueueSegment const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ThreadPoolWorkQueue__QueueSegment()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::__ThreadPoolWorkQueue__QueueSegment, 0x28>, "Size mismatch!");

} // namespace end def System::Threading
// Type: System.Threading::ThreadPoolWorkQueue
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2734))
// CS Name: ::System.Threading::ThreadPoolWorkQueue*
class CORDL_TYPE ThreadPoolWorkQueue : public ::System::Object {
public:
// Declarations
using QueueSegment = ::System::Threading::__ThreadPoolWorkQueue__QueueSegment;

using WorkStealingQueue = ::System::Threading::__ThreadPoolWorkQueue__WorkStealingQueue;

template<typename T>
using SparseArray_1 = ::System::Threading::__ThreadPoolWorkQueue__SparseArray_1<T>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field queueHead offset 0x10
 __declspec(property(get=__get_queueHead, put=__set_queueHead)) ::System::Threading::__ThreadPoolWorkQueue__QueueSegment*  queueHead;

/// @brief Field queueTail offset 0x18
 __declspec(property(get=__get_queueTail, put=__set_queueTail)) ::System::Threading::__ThreadPoolWorkQueue__QueueSegment*  queueTail;

/// @brief Field numOutstandingThreadRequests offset 0x20
 __declspec(property(get=__get_numOutstandingThreadRequests, put=__set_numOutstandingThreadRequests)) int32_t  numOutstandingThreadRequests;

constexpr void __set_queueHead(::System::Threading::__ThreadPoolWorkQueue__QueueSegment*  value) ;

constexpr ::System::Threading::__ThreadPoolWorkQueue__QueueSegment* __get_queueHead() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::__ThreadPoolWorkQueue__QueueSegment*> __get_queueHead() const;

constexpr void __set_queueTail(::System::Threading::__ThreadPoolWorkQueue__QueueSegment*  value) ;

constexpr ::System::Threading::__ThreadPoolWorkQueue__QueueSegment* __get_queueTail() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::__ThreadPoolWorkQueue__QueueSegment*> __get_queueTail() const;

static inline void setStaticF_allThreadQueues(::System::Threading::__ThreadPoolWorkQueue__SparseArray_1<::System::Threading::__ThreadPoolWorkQueue__WorkStealingQueue*>*  value) ;

static inline ::System::Threading::__ThreadPoolWorkQueue__SparseArray_1<::System::Threading::__ThreadPoolWorkQueue__WorkStealingQueue*>* getStaticF_allThreadQueues() ;

constexpr void __set_numOutstandingThreadRequests(int32_t  value) ;

constexpr int32_t& __get_numOutstandingThreadRequests() ;

constexpr int32_t const& __get_numOutstandingThreadRequests() const;

static inline ::System::Threading::ThreadPoolWorkQueue* New_ctor() ;

/// @brief Method .ctor addr 0x261a690 size 0x78 virtual false final false
inline void _ctor() ;

/// @brief Method EnsureCurrentThreadHasQueue addr 0x261a708 size 0x90 virtual false final false
inline ::System::Threading::ThreadPoolWorkQueueThreadLocals* EnsureCurrentThreadHasQueue() ;

/// @brief Method EnsureThreadRequested addr 0x261a798 size 0xa0 virtual false final false
inline void EnsureThreadRequested() ;

/// @brief Method MarkThreadRequestSatisfied addr 0x261a838 size 0x4c virtual false final false
inline void MarkThreadRequestSatisfied() ;

/// @brief Method Enqueue addr 0x261a884 size 0x13c virtual false final false
inline void Enqueue(::System::Threading::IThreadPoolWorkItem*  callback, bool  forceGlobal) ;

/// @brief Method LocalFindAndPop addr 0x261adf4 size 0x70 virtual false final false
inline bool LocalFindAndPop(::System::Threading::IThreadPoolWorkItem*  callback) ;

/// @brief Method Dequeue addr 0x261b120 size 0x1d0 virtual false final false
inline void Dequeue(::System::Threading::ThreadPoolWorkQueueThreadLocals*  tl, ByRef<::System::Threading::IThreadPoolWorkItem*>  callback, ByRef<bool>  missedSteal) ;

/// @brief Method Dispatch addr 0x261b56c size 0x450 virtual false final false
static inline bool Dispatch() ;

// Ctor Parameters [CppParam { name: "", ty: "ThreadPoolWorkQueue", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ThreadPoolWorkQueue(ThreadPoolWorkQueue && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ThreadPoolWorkQueue", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ThreadPoolWorkQueue(ThreadPoolWorkQueue const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ThreadPoolWorkQueue()  = default;
public:


// Fields

// Static field allThreadQueues


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::ThreadPoolWorkQueue, 0x28>, "Size mismatch!");

} // namespace end def System::Threading
// Type: ::SparseArray`1
namespace System::Threading {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2731))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2731), inst: 2 })
// CS Name: ::ThreadPoolWorkQueue::SparseArray`1<T>*
class CORDL_TYPE __ThreadPoolWorkQueue__SparseArray_1<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field m_array offset 0x10
 __declspec(property(get=__get_m_array, put=__set_m_array)) ::ArrayW<T,::Array<T>*>  m_array;

 __declspec(property(get=get_Current)) ::ArrayW<T,::Array<T>*>  Current;

constexpr void __set_m_array(::ArrayW<T,::Array<T>*>  value) ;

constexpr ::ArrayW<T,::Array<T>*>& __get_m_array() ;

constexpr ::ArrayW<T,::Array<T>*> const& __get_m_array() const;

static inline ::System::Threading::__ThreadPoolWorkQueue__SparseArray_1<T>* New_ctor(int32_t  initialSize) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  initialSize) ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<T,::Array<T>*> get_Current() ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t Add(T  e) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Remove(T  e) ;

// Ctor Parameters [CppParam { name: "", ty: "__ThreadPoolWorkQueue__SparseArray_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ThreadPoolWorkQueue__SparseArray_1(__ThreadPoolWorkQueue__SparseArray_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ThreadPoolWorkQueue__SparseArray_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ThreadPoolWorkQueue__SparseArray_1(__ThreadPoolWorkQueue__SparseArray_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ThreadPoolWorkQueue__SparseArray_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::__ThreadPoolWorkQueue__SparseArray_1, "System.Threading", "ThreadPoolWorkQueue/SparseArray`1");
NEED_NO_BOX(::System::Threading::ThreadPoolWorkQueue);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::ThreadPoolWorkQueue*, "System.Threading", "ThreadPoolWorkQueue");
NEED_NO_BOX(::System::Threading::__ThreadPoolWorkQueue__QueueSegment);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::__ThreadPoolWorkQueue__QueueSegment*, "System.Threading", "ThreadPoolWorkQueue/QueueSegment");
NEED_NO_BOX(::System::Threading::__ThreadPoolWorkQueue__WorkStealingQueue);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::__ThreadPoolWorkQueue__WorkStealingQueue*, "System.Threading", "ThreadPoolWorkQueue/WorkStealingQueue");
