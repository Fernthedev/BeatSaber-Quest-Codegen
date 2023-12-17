#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConcurrentQueue_1)
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections::Concurrent {
template<typename T>
class IProducerConsumerCollection_1;
}
namespace System::Collections::Concurrent {
template<typename T>
class __ConcurrentQueue_1___Enumerate_d__28;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyCollection_1;
}
namespace System {
class Array;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Concurrent {
template<typename T>
class __ConcurrentQueue_1__Segment;
}
namespace GlobalNamespace {
template<typename T>
struct __ConcurrentQueue_1__Segment__Slot;
}
namespace System::Collections::Concurrent {
struct PaddedHeadAndTail;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::Collections::Concurrent {
template<typename T>
class ConcurrentQueue_1;
}
namespace System::Collections::Concurrent {
template<typename T>
class __ConcurrentQueue_1__Segment;
}
namespace System::Collections::Concurrent {
template<typename T>
class __ConcurrentQueue_1___Enumerate_d__28;
}
namespace System::Collections::Concurrent {
template<::il2cpp_utils::il2cpp_reference_type T>
class ConcurrentQueue_1<T>;
}
namespace System::Collections::Concurrent {
template<::il2cpp_utils::il2cpp_reference_type T>
class __ConcurrentQueue_1__Segment<T>;
}
namespace System::Collections::Concurrent {
template<::il2cpp_utils::il2cpp_reference_type T>
class __ConcurrentQueue_1___Enumerate_d__28<T>;
}
namespace GlobalNamespace {
template<typename T>
struct __ConcurrentQueue_1__Segment__Slot;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Collections::Concurrent::ConcurrentQueue_1);
MARK_GEN_REF_PTR_T(::System::Collections::Concurrent::__ConcurrentQueue_1__Segment);
MARK_GEN_REF_PTR_T(::System::Collections::Concurrent::__ConcurrentQueue_1___Enumerate_d__28);
MARK_GEN_VAL_T(::GlobalNamespace::__ConcurrentQueue_1__Segment__Slot);
// Type: ::Slot
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3800))
// CS Name: ::ConcurrentQueue`1::Segment::Slot<T>
struct CORDL_TYPE __ConcurrentQueue_1__Segment__Slot : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Item offset 0x0
 __declspec(property(get=__get_Item, put=__set_Item)) T  Item;

/// @brief Field SequenceNumber offset 0x8
 __declspec(property(get=__get_SequenceNumber, put=__set_SequenceNumber)) int32_t  SequenceNumber;

constexpr void __set_Item(T  value) ;

constexpr T& __get_Item() ;

constexpr T const& __get_Item() const;

constexpr void __set_SequenceNumber(int32_t  value) ;

constexpr int32_t& __get_SequenceNumber() ;

constexpr int32_t const& __get_SequenceNumber() const;

// Ctor Parameters [CppParam { name: "Item", ty: "T", modifiers: "", def_value: None }, CppParam { name: "SequenceNumber", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __ConcurrentQueue_1__Segment__Slot(T  Item, int32_t  SequenceNumber) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ConcurrentQueue_1__Segment__Slot(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ConcurrentQueue_1__Segment__Slot()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Segment
// Type: ::<Enumerate>d__28
// Type: System.Collections.Concurrent::ConcurrentQueue`1
// Type: ::Segment
namespace System::Collections::Concurrent {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(3801))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3801), inst: 2 })
// CS Name: ::ConcurrentQueue`1::Segment<T>*
class CORDL_TYPE __ConcurrentQueue_1__Segment<T> : public ::System::Object {
public:
// Declarations
using Slot = ::GlobalNamespace::__ConcurrentQueue_1__Segment__Slot<T>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x1a8};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x1a8 - sizeof(::System::Object)]{};

/// @brief Field _slots offset 0x10
 __declspec(property(get=__get__slots, put=__set__slots)) ::ArrayW<::GlobalNamespace::__ConcurrentQueue_1__Segment__Slot<T>,::Array<::GlobalNamespace::__ConcurrentQueue_1__Segment__Slot<T>>*>  _slots;

/// @brief Field _slotsMask offset 0x18
 __declspec(property(get=__get__slotsMask, put=__set__slotsMask)) int32_t  _slotsMask;

/// @brief Field _headAndTail offset 0x1c
 __declspec(property(get=__get__headAndTail, put=__set__headAndTail)) ::System::Collections::Concurrent::PaddedHeadAndTail  _headAndTail;

/// @brief Field _preservedForObservation offset 0x19c
 __declspec(property(get=__get__preservedForObservation, put=__set__preservedForObservation)) bool  _preservedForObservation;

/// @brief Field _frozenForEnqueues offset 0x19d
 __declspec(property(get=__get__frozenForEnqueues, put=__set__frozenForEnqueues)) bool  _frozenForEnqueues;

/// @brief Field _nextSegment offset 0x1a0
 __declspec(property(get=__get__nextSegment, put=__set__nextSegment)) ::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*  _nextSegment;

 __declspec(property(get=get_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_FreezeOffset)) int32_t  FreezeOffset;

constexpr void __set__slots(::ArrayW<::GlobalNamespace::__ConcurrentQueue_1__Segment__Slot<T>,::Array<::GlobalNamespace::__ConcurrentQueue_1__Segment__Slot<T>>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__ConcurrentQueue_1__Segment__Slot<T>,::Array<::GlobalNamespace::__ConcurrentQueue_1__Segment__Slot<T>>*>& __get__slots() ;

constexpr ::ArrayW<::GlobalNamespace::__ConcurrentQueue_1__Segment__Slot<T>,::Array<::GlobalNamespace::__ConcurrentQueue_1__Segment__Slot<T>>*> const& __get__slots() const;

constexpr void __set__slotsMask(int32_t  value) ;

constexpr int32_t& __get__slotsMask() ;

constexpr int32_t const& __get__slotsMask() const;

constexpr void __set__headAndTail(::System::Collections::Concurrent::PaddedHeadAndTail  value) ;

constexpr ::System::Collections::Concurrent::PaddedHeadAndTail& __get__headAndTail() ;

constexpr ::System::Collections::Concurrent::PaddedHeadAndTail const& __get__headAndTail() const;

constexpr void __set__preservedForObservation(bool  value) ;

constexpr bool& __get__preservedForObservation() ;

constexpr bool const& __get__preservedForObservation() const;

constexpr void __set__frozenForEnqueues(bool  value) ;

constexpr bool& __get__frozenForEnqueues() ;

constexpr bool const& __get__frozenForEnqueues() const;

constexpr void __set__nextSegment(::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*  value) ;

constexpr ::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>* __get__nextSegment() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*> __get__nextSegment() const;

static inline ::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>* New_ctor(int32_t  boundedLength) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  boundedLength) ;

/// @brief Method get_Capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Capacity() ;

/// @brief Method get_FreezeOffset addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_FreezeOffset() ;

/// @brief Method EnsureFrozenForEnqueues addr 0x0 size 0xffffffffffffffff virtual false final false
inline void EnsureFrozenForEnqueues() ;

/// @brief Method TryDequeue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TryDequeue(ByRef<T>  item) ;

/// @brief Method TryEnqueue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TryEnqueue(T  item) ;

// Ctor Parameters [CppParam { name: "", ty: "__ConcurrentQueue_1__Segment", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ConcurrentQueue_1__Segment(__ConcurrentQueue_1__Segment && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ConcurrentQueue_1__Segment", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ConcurrentQueue_1__Segment(__ConcurrentQueue_1__Segment const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ConcurrentQueue_1__Segment()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Concurrent
// Type: ::<Enumerate>d__28
namespace System::Collections::Concurrent {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(3802))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3802), inst: 2 })
// CS Name: ::ConcurrentQueue`1::<Enumerate>d__28<T>*
class CORDL_TYPE __ConcurrentQueue_1___Enumerate_d__28<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::System::Object)]{};

/// @brief Field <>1__state offset 0x10
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current offset 0x18
 __declspec(property(get=__get___2__current, put=__set___2__current)) T  __2__current;

/// @brief Field head offset 0x20
 __declspec(property(get=__get_head, put=__set_head)) ::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*  head;

/// @brief Field tail offset 0x28
 __declspec(property(get=__get_tail, put=__set_tail)) ::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*  tail;

/// @brief Field tailTail offset 0x30
 __declspec(property(get=__get_tailTail, put=__set_tailTail)) int32_t  tailTail;

/// @brief Field headHead offset 0x34
 __declspec(property(get=__get_headHead, put=__set_headHead)) int32_t  headHead;

/// @brief Field <>4__this offset 0x38
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::System::Collections::Concurrent::ConcurrentQueue_1<T>*  __4__this;

/// @brief Field <headTail>5__2 offset 0x40
 __declspec(property(get=__get__headTail_5__2, put=__set__headTail_5__2)) int32_t  _headTail_5__2;

/// @brief Field <i>5__3 offset 0x44
 __declspec(property(get=__get__i_5__3, put=__set__i_5__3)) int32_t  _i_5__3;

/// @brief Field <s>5__4 offset 0x48
 __declspec(property(get=__get__s_5__4, put=__set__s_5__4)) ::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*  _s_5__4;

/// @brief Field <i>5__5 offset 0x50
 __declspec(property(get=__get__i_5__5, put=__set__i_5__5)) int32_t  _i_5__5;

 __declspec(property(get=System_Collections_Generic_IEnumerator_T__get_Current)) T  System_Collections_Generic_IEnumerator_T__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<T>*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___2__current(T  value) ;

constexpr T& __get___2__current() ;

constexpr T const& __get___2__current() const;

constexpr void __set_head(::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*  value) ;

constexpr ::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>* __get_head() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*> __get_head() const;

constexpr void __set_tail(::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*  value) ;

constexpr ::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>* __get_tail() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*> __get_tail() const;

constexpr void __set_tailTail(int32_t  value) ;

constexpr int32_t& __get_tailTail() ;

constexpr int32_t const& __get_tailTail() const;

constexpr void __set_headHead(int32_t  value) ;

constexpr int32_t& __get_headHead() ;

constexpr int32_t const& __get_headHead() const;

constexpr void __set___4__this(::System::Collections::Concurrent::ConcurrentQueue_1<T>*  value) ;

constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<T>* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Concurrent::ConcurrentQueue_1<T>*> __get___4__this() const;

constexpr void __set__headTail_5__2(int32_t  value) ;

constexpr int32_t& __get__headTail_5__2() ;

constexpr int32_t const& __get__headTail_5__2() const;

constexpr void __set__i_5__3(int32_t  value) ;

constexpr int32_t& __get__i_5__3() ;

constexpr int32_t const& __get__i_5__3() const;

constexpr void __set__s_5__4(::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*  value) ;

constexpr ::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>* __get__s_5__4() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*> __get__s_5__4() const;

constexpr void __set__i_5__5(int32_t  value) ;

constexpr int32_t& __get__i_5__5() ;

constexpr int32_t const& __get__i_5__5() const;

static inline ::System::Collections::Concurrent::__ConcurrentQueue_1___Enumerate_d__28<T>* New_ctor(int32_t  __1__state) ;

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

// Ctor Parameters [CppParam { name: "", ty: "__ConcurrentQueue_1___Enumerate_d__28", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ConcurrentQueue_1___Enumerate_d__28(__ConcurrentQueue_1___Enumerate_d__28 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ConcurrentQueue_1___Enumerate_d__28", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ConcurrentQueue_1___Enumerate_d__28(__ConcurrentQueue_1___Enumerate_d__28 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ConcurrentQueue_1___Enumerate_d__28()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Concurrent
// Type: System.Collections.Concurrent::ConcurrentQueue`1
namespace System::Collections::Concurrent {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3803)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3803), inst: 2 })
// CS Name: ::System.Collections.Concurrent::ConcurrentQueue`1<T>*
class CORDL_TYPE ConcurrentQueue_1<T> : public ::System::Object {
public:
// Declarations
using _Enumerate_d__28 = ::System::Collections::Concurrent::__ConcurrentQueue_1___Enumerate_d__28<T>;

using Segment = ::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field _crossSegmentLock offset 0x10
 __declspec(property(get=__get__crossSegmentLock, put=__set__crossSegmentLock)) ::System::Object*  _crossSegmentLock;

/// @brief Field _tail offset 0x18
 __declspec(property(get=__get__tail, put=__set__tail)) ::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*  _tail;

/// @brief Field _head offset 0x20
 __declspec(property(get=__get__head, put=__set__head)) ::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*  _head;

 __declspec(property(get=System_Collections_ICollection_get_IsSynchronized)) bool  System_Collections_ICollection_IsSynchronized;

 __declspec(property(get=System_Collections_ICollection_get_SyncRoot)) ::System::Object*  System_Collections_ICollection_SyncRoot;

 __declspec(property(get=get_Count)) int32_t  Count;

/// @brief Convert operator to "::System::Collections::Concurrent::IProducerConsumerCollection_1<T>"
constexpr operator  ::System::Collections::Concurrent::IProducerConsumerCollection_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::ICollection"
constexpr operator  ::System::Collections::ICollection*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<T>*() noexcept;

constexpr void __set__crossSegmentLock(::System::Object*  value) ;

constexpr ::System::Object* __get__crossSegmentLock() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__crossSegmentLock() const;

constexpr void __set__tail(::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*  value) ;

constexpr ::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>* __get__tail() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*> __get__tail() const;

constexpr void __set__head(::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*  value) ;

constexpr ::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>* __get__head() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*> __get__head() const;

static inline ::System::Collections::Concurrent::ConcurrentQueue_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_ICollection_CopyTo(::System::Array*  array, int32_t  index) ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.Concurrent.IProducerConsumerCollection<T>.TryAdd addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_Concurrent_IProducerConsumerCollection_T__TryAdd(T  item) ;

/// @brief Method System.Collections.Concurrent.IProducerConsumerCollection<T>.TryTake addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_Concurrent_IProducerConsumerCollection_T__TryTake(ByRef<T>  item) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::ArrayW<T,::Array<T>*> ToArray() ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method GetCount addr 0x0 size 0xffffffffffffffff virtual false final false
static inline int32_t GetCount(::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*  s, int32_t  head, int32_t  tail) ;

/// @brief Method GetCount addr 0x0 size 0xffffffffffffffff virtual false final false
static inline int64_t GetCount(::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*  head, int32_t  headHead, ::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*  tail, int32_t  tailTail) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline void CopyTo(::ArrayW<T,::Array<T>*>  array, int32_t  index) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<T>* GetEnumerator() ;

/// @brief Method SnapForObservation addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SnapForObservation(ByRef<::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*>  head, ByRef<int32_t>  headHead, ByRef<::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*>  tail, ByRef<int32_t>  tailTail) ;

/// @brief Method GetItemWhenAvailable addr 0x0 size 0xffffffffffffffff virtual false final false
inline T GetItemWhenAvailable(::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*  segment, int32_t  i) ;

/// @brief Method Enumerate addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::IEnumerator_1<T>* Enumerate(::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*  head, int32_t  headHead, ::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*  tail, int32_t  tailTail) ;

/// @brief Method Enqueue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Enqueue(T  item) ;

/// @brief Method EnqueueSlow addr 0x0 size 0xffffffffffffffff virtual false final false
inline void EnqueueSlow(T  item) ;

/// @brief Method TryDequeue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TryDequeue(ByRef<T>  result) ;

/// @brief Method TryDequeueSlow addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TryDequeueSlow(ByRef<T>  item) ;

// Ctor Parameters [CppParam { name: "", ty: "ConcurrentQueue_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConcurrentQueue_1(ConcurrentQueue_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConcurrentQueue_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConcurrentQueue_1(ConcurrentQueue_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ConcurrentQueue_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Concurrent
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Concurrent::ConcurrentQueue_1, "System.Collections.Concurrent", "ConcurrentQueue`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Concurrent::__ConcurrentQueue_1__Segment, "System.Collections.Concurrent", "ConcurrentQueue`1/Segment");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Concurrent::__ConcurrentQueue_1___Enumerate_d__28, "System.Collections.Concurrent", "ConcurrentQueue`1/<Enumerate>d__28");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__ConcurrentQueue_1__Segment__Slot, "System.Collections.Concurrent", "ConcurrentQueue`1/Segment/Slot");
