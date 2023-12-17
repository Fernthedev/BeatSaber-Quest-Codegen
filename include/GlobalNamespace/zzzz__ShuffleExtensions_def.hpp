#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ShuffleExtensions)
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace System {
class Random;
}
namespace GlobalNamespace {
template<typename T>
class __ShuffleExtensions___TakeWithTombstone_d__2_1;
}
namespace GlobalNamespace {
template<typename T1,typename T2>
class __ShuffleExtensions___ZipSkipTombstone_d__3_2;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace GlobalNamespace {
template<typename T>
class __ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class __ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1;
}
namespace GlobalNamespace {
template<typename T>
class __ShuffleExtensions___TakeWithTombstone_d__2_1;
}
namespace GlobalNamespace {
template<typename T1,typename T2>
class __ShuffleExtensions___ZipSkipTombstone_d__3_2;
}
namespace GlobalNamespace {
class ShuffleExtensions;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type T>
class __ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>;
}
namespace GlobalNamespace {
template<>
class __ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type T>
class __ShuffleExtensions___TakeWithTombstone_d__2_1<T>;
}
namespace GlobalNamespace {
template<>
class __ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
class __ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>;
}
namespace GlobalNamespace {
template<>
class __ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1);
MARK_GEN_REF_PTR_T(::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1);
MARK_GEN_REF_PTR_T(::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2);
MARK_REF_PTR_T(::GlobalNamespace::ShuffleExtensions);
// Type: ::<PickRandomElementsWithTombstone>d__1`1
// Type: ::<TakeWithTombstone>d__2`1
// Type: ::<ZipSkipTombstone>d__3`2
// Type: ::ShuffleExtensions
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15830))
// CS Name: ::ShuffleExtensions*
class CORDL_TYPE ShuffleExtensions : public ::System::Object {
public:
// Declarations
template<typename T1,typename T2>
using _ZipSkipTombstone_d__3_2 = ::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1, T2>;

template<typename T>
using _TakeWithTombstone_d__2_1 = ::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>;

template<typename T>
using _PickRandomElementsWithTombstone_d__1_1 = ::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method Shuffle addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline ::System::Collections::Generic::IEnumerable_1<T>* Shuffle(::System::Collections::Generic::IEnumerable_1<T>*  source, ::System::Random*  random) ;

/// @brief Method PickRandomElementsWithTombstone addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline ::System::Collections::Generic::IEnumerable_1<T>* PickRandomElementsWithTombstone(::System::Collections::Generic::IEnumerable_1<T>*  source, int32_t  limit, int32_t  count, ::System::Random*  random, T  tombstone) ;

/// @brief Method TakeWithTombstone addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline ::System::Collections::Generic::IEnumerable_1<T>* TakeWithTombstone(::System::Collections::Generic::IEnumerable_1<T>*  source, int32_t  limit, T  tombstone) ;

/// @brief Method ZipSkipTombstone addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T1,typename T2>
static inline ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<T1,T2>>* ZipSkipTombstone(::System::Collections::Generic::IEnumerable_1<T1>*  collection1, ::System::Collections::Generic::IEnumerable_1<T2>*  collection2, T2  collection2Tombstone) ;

/// @brief Method ShuffleInPlace addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline void ShuffleInPlace(::System::Collections::Generic::IList_1<T>*  list, ::System::Random*  random) ;

// Ctor Parameters [CppParam { name: "", ty: "ShuffleExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ShuffleExtensions(ShuffleExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShuffleExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShuffleExtensions(ShuffleExtensions const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ShuffleExtensions()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ShuffleExtensions, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<PickRandomElementsWithTombstone>d__1`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15827)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15827), inst: 98 })
// CS Name: ::ShuffleExtensions::<PickRandomElementsWithTombstone>d__1`1<T>*
class CORDL_TYPE __ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x68};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x68 - sizeof(::System::Object)]{};

/// @brief Field <>1__state offset 0x10
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current offset 0x14
 __declspec(property(get=__get___2__current, put=__set___2__current)) int32_t  __2__current;

/// @brief Field <>l__initialThreadId offset 0x18
 __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field source offset 0x20
 __declspec(property(get=__get_source, put=__set_source)) ::System::Collections::Generic::IEnumerable_1<int32_t>*  source;

/// @brief Field <>3__source offset 0x28
 __declspec(property(get=__get___3__source, put=__set___3__source)) ::System::Collections::Generic::IEnumerable_1<int32_t>*  __3__source;

/// @brief Field count offset 0x30
 __declspec(property(get=__get_count, put=__set_count)) int32_t  count;

/// @brief Field <>3__count offset 0x34
 __declspec(property(get=__get___3__count, put=__set___3__count)) int32_t  __3__count;

/// @brief Field random offset 0x38
 __declspec(property(get=__get_random, put=__set_random)) ::System::Random*  random;

/// @brief Field <>3__random offset 0x40
 __declspec(property(get=__get___3__random, put=__set___3__random)) ::System::Random*  __3__random;

/// @brief Field limit offset 0x48
 __declspec(property(get=__get_limit, put=__set_limit)) int32_t  limit;

/// @brief Field <>3__limit offset 0x4c
 __declspec(property(get=__get___3__limit, put=__set___3__limit)) int32_t  __3__limit;

/// @brief Field tombstone offset 0x50
 __declspec(property(get=__get_tombstone, put=__set_tombstone)) int32_t  tombstone;

/// @brief Field <>3__tombstone offset 0x54
 __declspec(property(get=__get___3__tombstone, put=__set___3__tombstone)) int32_t  __3__tombstone;

/// @brief Field <index>5__2 offset 0x58
 __declspec(property(get=__get__index_5__2, put=__set__index_5__2)) int32_t  _index_5__2;

/// @brief Field <picked>5__3 offset 0x5c
 __declspec(property(get=__get__picked_5__3, put=__set__picked_5__3)) int32_t  _picked_5__3;

/// @brief Field <>7__wrap3 offset 0x60
 __declspec(property(get=__get___7__wrap3, put=__set___7__wrap3)) ::System::Collections::Generic::IEnumerator_1<int32_t>*  __7__wrap3;

 __declspec(property(get=System_Collections_Generic_IEnumerator_T__get_Current)) int32_t  System_Collections_Generic_IEnumerator_T__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<int32_t>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<int32_t>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<int32_t>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<int32_t>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___2__current(int32_t  value) ;

constexpr int32_t& __get___2__current() ;

constexpr int32_t const& __get___2__current() const;

constexpr void __set___l__initialThreadId(int32_t  value) ;

constexpr int32_t& __get___l__initialThreadId() ;

constexpr int32_t const& __get___l__initialThreadId() const;

constexpr void __set_source(::System::Collections::Generic::IEnumerable_1<int32_t>*  value) ;

constexpr ::System::Collections::Generic::IEnumerable_1<int32_t>* __get_source() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<int32_t>*> __get_source() const;

constexpr void __set___3__source(::System::Collections::Generic::IEnumerable_1<int32_t>*  value) ;

constexpr ::System::Collections::Generic::IEnumerable_1<int32_t>* __get___3__source() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<int32_t>*> __get___3__source() const;

constexpr void __set_count(int32_t  value) ;

constexpr int32_t& __get_count() ;

constexpr int32_t const& __get_count() const;

constexpr void __set___3__count(int32_t  value) ;

constexpr int32_t& __get___3__count() ;

constexpr int32_t const& __get___3__count() const;

constexpr void __set_random(::System::Random*  value) ;

constexpr ::System::Random* __get_random() ;

constexpr ::cordl_internals::to_const_pointer<::System::Random*> __get_random() const;

constexpr void __set___3__random(::System::Random*  value) ;

constexpr ::System::Random* __get___3__random() ;

constexpr ::cordl_internals::to_const_pointer<::System::Random*> __get___3__random() const;

constexpr void __set_limit(int32_t  value) ;

constexpr int32_t& __get_limit() ;

constexpr int32_t const& __get_limit() const;

constexpr void __set___3__limit(int32_t  value) ;

constexpr int32_t& __get___3__limit() ;

constexpr int32_t const& __get___3__limit() const;

constexpr void __set_tombstone(int32_t  value) ;

constexpr int32_t& __get_tombstone() ;

constexpr int32_t const& __get_tombstone() const;

constexpr void __set___3__tombstone(int32_t  value) ;

constexpr int32_t& __get___3__tombstone() ;

constexpr int32_t const& __get___3__tombstone() const;

constexpr void __set__index_5__2(int32_t  value) ;

constexpr int32_t& __get__index_5__2() ;

constexpr int32_t const& __get__index_5__2() const;

constexpr void __set__picked_5__3(int32_t  value) ;

constexpr int32_t& __get__picked_5__3() ;

constexpr int32_t const& __get__picked_5__3() const;

constexpr void __set___7__wrap3(::System::Collections::Generic::IEnumerator_1<int32_t>*  value) ;

constexpr ::System::Collections::Generic::IEnumerator_1<int32_t>* __get___7__wrap3() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<int32_t>*> __get___7__wrap3() const;

static inline ::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method <>m__Finally1 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void __m__Finally1() ;

/// @brief Method System.Collections.Generic.IEnumerator<T>.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_Collections_Generic_IEnumerator_T__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<int32_t>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

// Ctor Parameters [CppParam { name: "", ty: "__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1(__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1(__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<PickRandomElementsWithTombstone>d__1`1
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15827)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15827), inst: 2 })
// CS Name: ::ShuffleExtensions::<PickRandomElementsWithTombstone>d__1`1<T>*
class CORDL_TYPE __ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x78};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x78 - sizeof(::System::Object)]{};

/// @brief Field <>1__state offset 0x10
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current offset 0x18
 __declspec(property(get=__get___2__current, put=__set___2__current)) T  __2__current;

/// @brief Field <>l__initialThreadId offset 0x20
 __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field source offset 0x28
 __declspec(property(get=__get_source, put=__set_source)) ::System::Collections::Generic::IEnumerable_1<T>*  source;

/// @brief Field <>3__source offset 0x30
 __declspec(property(get=__get___3__source, put=__set___3__source)) ::System::Collections::Generic::IEnumerable_1<T>*  __3__source;

/// @brief Field count offset 0x38
 __declspec(property(get=__get_count, put=__set_count)) int32_t  count;

/// @brief Field <>3__count offset 0x3c
 __declspec(property(get=__get___3__count, put=__set___3__count)) int32_t  __3__count;

/// @brief Field random offset 0x40
 __declspec(property(get=__get_random, put=__set_random)) ::System::Random*  random;

/// @brief Field <>3__random offset 0x48
 __declspec(property(get=__get___3__random, put=__set___3__random)) ::System::Random*  __3__random;

/// @brief Field limit offset 0x50
 __declspec(property(get=__get_limit, put=__set_limit)) int32_t  limit;

/// @brief Field <>3__limit offset 0x54
 __declspec(property(get=__get___3__limit, put=__set___3__limit)) int32_t  __3__limit;

/// @brief Field tombstone offset 0x58
 __declspec(property(get=__get_tombstone, put=__set_tombstone)) T  tombstone;

/// @brief Field <>3__tombstone offset 0x60
 __declspec(property(get=__get___3__tombstone, put=__set___3__tombstone)) T  __3__tombstone;

/// @brief Field <index>5__2 offset 0x68
 __declspec(property(get=__get__index_5__2, put=__set__index_5__2)) int32_t  _index_5__2;

/// @brief Field <picked>5__3 offset 0x6c
 __declspec(property(get=__get__picked_5__3, put=__set__picked_5__3)) int32_t  _picked_5__3;

/// @brief Field <>7__wrap3 offset 0x70
 __declspec(property(get=__get___7__wrap3, put=__set___7__wrap3)) ::System::Collections::Generic::IEnumerator_1<T>*  __7__wrap3;

 __declspec(property(get=System_Collections_Generic_IEnumerator_T__get_Current)) T  System_Collections_Generic_IEnumerator_T__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

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

constexpr void __set___l__initialThreadId(int32_t  value) ;

constexpr int32_t& __get___l__initialThreadId() ;

constexpr int32_t const& __get___l__initialThreadId() const;

constexpr void __set_source(::System::Collections::Generic::IEnumerable_1<T>*  value) ;

constexpr ::System::Collections::Generic::IEnumerable_1<T>* __get_source() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<T>*> __get_source() const;

constexpr void __set___3__source(::System::Collections::Generic::IEnumerable_1<T>*  value) ;

constexpr ::System::Collections::Generic::IEnumerable_1<T>* __get___3__source() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<T>*> __get___3__source() const;

constexpr void __set_count(int32_t  value) ;

constexpr int32_t& __get_count() ;

constexpr int32_t const& __get_count() const;

constexpr void __set___3__count(int32_t  value) ;

constexpr int32_t& __get___3__count() ;

constexpr int32_t const& __get___3__count() const;

constexpr void __set_random(::System::Random*  value) ;

constexpr ::System::Random* __get_random() ;

constexpr ::cordl_internals::to_const_pointer<::System::Random*> __get_random() const;

constexpr void __set___3__random(::System::Random*  value) ;

constexpr ::System::Random* __get___3__random() ;

constexpr ::cordl_internals::to_const_pointer<::System::Random*> __get___3__random() const;

constexpr void __set_limit(int32_t  value) ;

constexpr int32_t& __get_limit() ;

constexpr int32_t const& __get_limit() const;

constexpr void __set___3__limit(int32_t  value) ;

constexpr int32_t& __get___3__limit() ;

constexpr int32_t const& __get___3__limit() const;

constexpr void __set_tombstone(T  value) ;

constexpr T& __get_tombstone() ;

constexpr T const& __get_tombstone() const;

constexpr void __set___3__tombstone(T  value) ;

constexpr T& __get___3__tombstone() ;

constexpr T const& __get___3__tombstone() const;

constexpr void __set__index_5__2(int32_t  value) ;

constexpr int32_t& __get__index_5__2() ;

constexpr int32_t const& __get__index_5__2() const;

constexpr void __set__picked_5__3(int32_t  value) ;

constexpr int32_t& __get__picked_5__3() ;

constexpr int32_t const& __get__picked_5__3() const;

constexpr void __set___7__wrap3(::System::Collections::Generic::IEnumerator_1<T>*  value) ;

constexpr ::System::Collections::Generic::IEnumerator_1<T>* __get___7__wrap3() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<T>*> __get___7__wrap3() const;

static inline ::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method <>m__Finally1 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void __m__Finally1() ;

/// @brief Method System.Collections.Generic.IEnumerator<T>.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline T System_Collections_Generic_IEnumerator_T__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

// Ctor Parameters [CppParam { name: "", ty: "__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1(__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1(__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<TakeWithTombstone>d__2`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15828)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15828), inst: 98 })
// CS Name: ::ShuffleExtensions::<TakeWithTombstone>d__2`1<T>*
class CORDL_TYPE __ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::System::Object)]{};

/// @brief Field <>1__state offset 0x10
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current offset 0x14
 __declspec(property(get=__get___2__current, put=__set___2__current)) int32_t  __2__current;

/// @brief Field <>l__initialThreadId offset 0x18
 __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field source offset 0x20
 __declspec(property(get=__get_source, put=__set_source)) ::System::Collections::Generic::IEnumerable_1<int32_t>*  source;

/// @brief Field <>3__source offset 0x28
 __declspec(property(get=__get___3__source, put=__set___3__source)) ::System::Collections::Generic::IEnumerable_1<int32_t>*  __3__source;

/// @brief Field limit offset 0x30
 __declspec(property(get=__get_limit, put=__set_limit)) int32_t  limit;

/// @brief Field <>3__limit offset 0x34
 __declspec(property(get=__get___3__limit, put=__set___3__limit)) int32_t  __3__limit;

/// @brief Field tombstone offset 0x38
 __declspec(property(get=__get_tombstone, put=__set_tombstone)) int32_t  tombstone;

/// @brief Field <>3__tombstone offset 0x3c
 __declspec(property(get=__get___3__tombstone, put=__set___3__tombstone)) int32_t  __3__tombstone;

/// @brief Field <enumerator>5__2 offset 0x40
 __declspec(property(get=__get__enumerator_5__2, put=__set__enumerator_5__2)) ::System::Collections::Generic::IEnumerator_1<int32_t>*  _enumerator_5__2;

/// @brief Field <index>5__3 offset 0x48
 __declspec(property(get=__get__index_5__3, put=__set__index_5__3)) int32_t  _index_5__3;

 __declspec(property(get=System_Collections_Generic_IEnumerator_T__get_Current)) int32_t  System_Collections_Generic_IEnumerator_T__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<int32_t>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<int32_t>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<int32_t>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<int32_t>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___2__current(int32_t  value) ;

constexpr int32_t& __get___2__current() ;

constexpr int32_t const& __get___2__current() const;

constexpr void __set___l__initialThreadId(int32_t  value) ;

constexpr int32_t& __get___l__initialThreadId() ;

constexpr int32_t const& __get___l__initialThreadId() const;

constexpr void __set_source(::System::Collections::Generic::IEnumerable_1<int32_t>*  value) ;

constexpr ::System::Collections::Generic::IEnumerable_1<int32_t>* __get_source() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<int32_t>*> __get_source() const;

constexpr void __set___3__source(::System::Collections::Generic::IEnumerable_1<int32_t>*  value) ;

constexpr ::System::Collections::Generic::IEnumerable_1<int32_t>* __get___3__source() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<int32_t>*> __get___3__source() const;

constexpr void __set_limit(int32_t  value) ;

constexpr int32_t& __get_limit() ;

constexpr int32_t const& __get_limit() const;

constexpr void __set___3__limit(int32_t  value) ;

constexpr int32_t& __get___3__limit() ;

constexpr int32_t const& __get___3__limit() const;

constexpr void __set_tombstone(int32_t  value) ;

constexpr int32_t& __get_tombstone() ;

constexpr int32_t const& __get_tombstone() const;

constexpr void __set___3__tombstone(int32_t  value) ;

constexpr int32_t& __get___3__tombstone() ;

constexpr int32_t const& __get___3__tombstone() const;

constexpr void __set__enumerator_5__2(::System::Collections::Generic::IEnumerator_1<int32_t>*  value) ;

constexpr ::System::Collections::Generic::IEnumerator_1<int32_t>* __get__enumerator_5__2() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<int32_t>*> __get__enumerator_5__2() const;

constexpr void __set__index_5__3(int32_t  value) ;

constexpr int32_t& __get__index_5__3() ;

constexpr int32_t const& __get__index_5__3() const;

static inline ::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method <>m__Finally1 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void __m__Finally1() ;

/// @brief Method System.Collections.Generic.IEnumerator<T>.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_Collections_Generic_IEnumerator_T__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<int32_t>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

// Ctor Parameters [CppParam { name: "", ty: "__ShuffleExtensions___TakeWithTombstone_d__2_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ShuffleExtensions___TakeWithTombstone_d__2_1(__ShuffleExtensions___TakeWithTombstone_d__2_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ShuffleExtensions___TakeWithTombstone_d__2_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ShuffleExtensions___TakeWithTombstone_d__2_1(__ShuffleExtensions___TakeWithTombstone_d__2_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ShuffleExtensions___TakeWithTombstone_d__2_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<TakeWithTombstone>d__2`1
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15828)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15828), inst: 2 })
// CS Name: ::ShuffleExtensions::<TakeWithTombstone>d__2`1<T>*
class CORDL_TYPE __ShuffleExtensions___TakeWithTombstone_d__2_1<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x60};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x60 - sizeof(::System::Object)]{};

/// @brief Field <>1__state offset 0x10
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current offset 0x18
 __declspec(property(get=__get___2__current, put=__set___2__current)) T  __2__current;

/// @brief Field <>l__initialThreadId offset 0x20
 __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field source offset 0x28
 __declspec(property(get=__get_source, put=__set_source)) ::System::Collections::Generic::IEnumerable_1<T>*  source;

/// @brief Field <>3__source offset 0x30
 __declspec(property(get=__get___3__source, put=__set___3__source)) ::System::Collections::Generic::IEnumerable_1<T>*  __3__source;

/// @brief Field limit offset 0x38
 __declspec(property(get=__get_limit, put=__set_limit)) int32_t  limit;

/// @brief Field <>3__limit offset 0x3c
 __declspec(property(get=__get___3__limit, put=__set___3__limit)) int32_t  __3__limit;

/// @brief Field tombstone offset 0x40
 __declspec(property(get=__get_tombstone, put=__set_tombstone)) T  tombstone;

/// @brief Field <>3__tombstone offset 0x48
 __declspec(property(get=__get___3__tombstone, put=__set___3__tombstone)) T  __3__tombstone;

/// @brief Field <enumerator>5__2 offset 0x50
 __declspec(property(get=__get__enumerator_5__2, put=__set__enumerator_5__2)) ::System::Collections::Generic::IEnumerator_1<T>*  _enumerator_5__2;

/// @brief Field <index>5__3 offset 0x58
 __declspec(property(get=__get__index_5__3, put=__set__index_5__3)) int32_t  _index_5__3;

 __declspec(property(get=System_Collections_Generic_IEnumerator_T__get_Current)) T  System_Collections_Generic_IEnumerator_T__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

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

constexpr void __set___l__initialThreadId(int32_t  value) ;

constexpr int32_t& __get___l__initialThreadId() ;

constexpr int32_t const& __get___l__initialThreadId() const;

constexpr void __set_source(::System::Collections::Generic::IEnumerable_1<T>*  value) ;

constexpr ::System::Collections::Generic::IEnumerable_1<T>* __get_source() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<T>*> __get_source() const;

constexpr void __set___3__source(::System::Collections::Generic::IEnumerable_1<T>*  value) ;

constexpr ::System::Collections::Generic::IEnumerable_1<T>* __get___3__source() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<T>*> __get___3__source() const;

constexpr void __set_limit(int32_t  value) ;

constexpr int32_t& __get_limit() ;

constexpr int32_t const& __get_limit() const;

constexpr void __set___3__limit(int32_t  value) ;

constexpr int32_t& __get___3__limit() ;

constexpr int32_t const& __get___3__limit() const;

constexpr void __set_tombstone(T  value) ;

constexpr T& __get_tombstone() ;

constexpr T const& __get_tombstone() const;

constexpr void __set___3__tombstone(T  value) ;

constexpr T& __get___3__tombstone() ;

constexpr T const& __get___3__tombstone() const;

constexpr void __set__enumerator_5__2(::System::Collections::Generic::IEnumerator_1<T>*  value) ;

constexpr ::System::Collections::Generic::IEnumerator_1<T>* __get__enumerator_5__2() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<T>*> __get__enumerator_5__2() const;

constexpr void __set__index_5__3(int32_t  value) ;

constexpr int32_t& __get__index_5__3() ;

constexpr int32_t const& __get__index_5__3() const;

static inline ::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method <>m__Finally1 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void __m__Finally1() ;

/// @brief Method System.Collections.Generic.IEnumerator<T>.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline T System_Collections_Generic_IEnumerator_T__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

// Ctor Parameters [CppParam { name: "", ty: "__ShuffleExtensions___TakeWithTombstone_d__2_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ShuffleExtensions___TakeWithTombstone_d__2_1(__ShuffleExtensions___TakeWithTombstone_d__2_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ShuffleExtensions___TakeWithTombstone_d__2_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ShuffleExtensions___TakeWithTombstone_d__2_1(__ShuffleExtensions___TakeWithTombstone_d__2_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ShuffleExtensions___TakeWithTombstone_d__2_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<ZipSkipTombstone>d__3`2
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15829)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15829), inst: 533 })
// CS Name: ::ShuffleExtensions::<ZipSkipTombstone>d__3`2<T1,T2>*
class CORDL_TYPE __ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::System::Object)]{};

/// @brief Field <>1__state offset 0x10
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current offset 0x14
 __declspec(property(get=__get___2__current, put=__set___2__current)) ::System::ValueTuple_2<int32_t,int32_t>  __2__current;

/// @brief Field <>l__initialThreadId offset 0x1c
 __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field collection1 offset 0x20
 __declspec(property(get=__get_collection1, put=__set_collection1)) ::System::Collections::Generic::IEnumerable_1<int32_t>*  collection1;

/// @brief Field <>3__collection1 offset 0x28
 __declspec(property(get=__get___3__collection1, put=__set___3__collection1)) ::System::Collections::Generic::IEnumerable_1<int32_t>*  __3__collection1;

/// @brief Field collection2 offset 0x30
 __declspec(property(get=__get_collection2, put=__set_collection2)) ::System::Collections::Generic::IEnumerable_1<int32_t>*  collection2;

/// @brief Field <>3__collection2 offset 0x38
 __declspec(property(get=__get___3__collection2, put=__set___3__collection2)) ::System::Collections::Generic::IEnumerable_1<int32_t>*  __3__collection2;

/// @brief Field collection2Tombstone offset 0x40
 __declspec(property(get=__get_collection2Tombstone, put=__set_collection2Tombstone)) int32_t  collection2Tombstone;

/// @brief Field <>3__collection2Tombstone offset 0x44
 __declspec(property(get=__get___3__collection2Tombstone, put=__set___3__collection2Tombstone)) int32_t  __3__collection2Tombstone;

/// @brief Field <enum1>5__2 offset 0x48
 __declspec(property(get=__get__enum1_5__2, put=__set__enum1_5__2)) ::System::Collections::Generic::IEnumerator_1<int32_t>*  _enum1_5__2;

/// @brief Field <enum2>5__3 offset 0x50
 __declspec(property(get=__get__enum2_5__3, put=__set__enum2_5__3)) ::System::Collections::Generic::IEnumerator_1<int32_t>*  _enum2_5__3;

 __declspec(property(get=System_Collections_Generic_IEnumerator__T1_T2___get_Current)) ::System::ValueTuple_2<int32_t,int32_t>  System_Collections_Generic_IEnumerator__T1_T2___Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<int32_t,int32_t>>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<int32_t,int32_t>>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<int32_t,int32_t>>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<int32_t,int32_t>>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___2__current(::System::ValueTuple_2<int32_t,int32_t>  value) ;

constexpr ::System::ValueTuple_2<int32_t,int32_t>& __get___2__current() ;

constexpr ::System::ValueTuple_2<int32_t,int32_t> const& __get___2__current() const;

constexpr void __set___l__initialThreadId(int32_t  value) ;

constexpr int32_t& __get___l__initialThreadId() ;

constexpr int32_t const& __get___l__initialThreadId() const;

constexpr void __set_collection1(::System::Collections::Generic::IEnumerable_1<int32_t>*  value) ;

constexpr ::System::Collections::Generic::IEnumerable_1<int32_t>* __get_collection1() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<int32_t>*> __get_collection1() const;

constexpr void __set___3__collection1(::System::Collections::Generic::IEnumerable_1<int32_t>*  value) ;

constexpr ::System::Collections::Generic::IEnumerable_1<int32_t>* __get___3__collection1() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<int32_t>*> __get___3__collection1() const;

constexpr void __set_collection2(::System::Collections::Generic::IEnumerable_1<int32_t>*  value) ;

constexpr ::System::Collections::Generic::IEnumerable_1<int32_t>* __get_collection2() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<int32_t>*> __get_collection2() const;

constexpr void __set___3__collection2(::System::Collections::Generic::IEnumerable_1<int32_t>*  value) ;

constexpr ::System::Collections::Generic::IEnumerable_1<int32_t>* __get___3__collection2() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<int32_t>*> __get___3__collection2() const;

constexpr void __set_collection2Tombstone(int32_t  value) ;

constexpr int32_t& __get_collection2Tombstone() ;

constexpr int32_t const& __get_collection2Tombstone() const;

constexpr void __set___3__collection2Tombstone(int32_t  value) ;

constexpr int32_t& __get___3__collection2Tombstone() ;

constexpr int32_t const& __get___3__collection2Tombstone() const;

constexpr void __set__enum1_5__2(::System::Collections::Generic::IEnumerator_1<int32_t>*  value) ;

constexpr ::System::Collections::Generic::IEnumerator_1<int32_t>* __get__enum1_5__2() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<int32_t>*> __get__enum1_5__2() const;

constexpr void __set__enum2_5__3(::System::Collections::Generic::IEnumerator_1<int32_t>*  value) ;

constexpr ::System::Collections::Generic::IEnumerator_1<int32_t>* __get__enum2_5__3() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<int32_t>*> __get__enum2_5__3() const;

static inline ::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method <>m__Finally1 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void __m__Finally1() ;

/// @brief Method <>m__Finally2 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void __m__Finally2() ;

/// @brief Method System.Collections.Generic.IEnumerator<(T1,T2)>.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::ValueTuple_2<int32_t,int32_t> System_Collections_Generic_IEnumerator__T1_T2___get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<(T1,T2)>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<int32_t,int32_t>>* System_Collections_Generic_IEnumerable__T1_T2___GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

// Ctor Parameters [CppParam { name: "", ty: "__ShuffleExtensions___ZipSkipTombstone_d__3_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ShuffleExtensions___ZipSkipTombstone_d__3_2(__ShuffleExtensions___ZipSkipTombstone_d__3_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ShuffleExtensions___ZipSkipTombstone_d__3_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ShuffleExtensions___ZipSkipTombstone_d__3_2(__ShuffleExtensions___ZipSkipTombstone_d__3_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ShuffleExtensions___ZipSkipTombstone_d__3_2()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<ZipSkipTombstone>d__3`2
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15829)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15829), inst: 81 })
// CS Name: ::ShuffleExtensions::<ZipSkipTombstone>d__3`2<T1,T2>*
class CORDL_TYPE __ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x70};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x70 - sizeof(::System::Object)]{};

/// @brief Field <>1__state offset 0x10
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current offset 0x18
 __declspec(property(get=__get___2__current, put=__set___2__current)) ::System::ValueTuple_2<T1,T2>  __2__current;

/// @brief Field <>l__initialThreadId offset 0x28
 __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field collection1 offset 0x30
 __declspec(property(get=__get_collection1, put=__set_collection1)) ::System::Collections::Generic::IEnumerable_1<T1>*  collection1;

/// @brief Field <>3__collection1 offset 0x38
 __declspec(property(get=__get___3__collection1, put=__set___3__collection1)) ::System::Collections::Generic::IEnumerable_1<T1>*  __3__collection1;

/// @brief Field collection2 offset 0x40
 __declspec(property(get=__get_collection2, put=__set_collection2)) ::System::Collections::Generic::IEnumerable_1<T2>*  collection2;

/// @brief Field <>3__collection2 offset 0x48
 __declspec(property(get=__get___3__collection2, put=__set___3__collection2)) ::System::Collections::Generic::IEnumerable_1<T2>*  __3__collection2;

/// @brief Field collection2Tombstone offset 0x50
 __declspec(property(get=__get_collection2Tombstone, put=__set_collection2Tombstone)) T2  collection2Tombstone;

/// @brief Field <>3__collection2Tombstone offset 0x58
 __declspec(property(get=__get___3__collection2Tombstone, put=__set___3__collection2Tombstone)) T2  __3__collection2Tombstone;

/// @brief Field <enum1>5__2 offset 0x60
 __declspec(property(get=__get__enum1_5__2, put=__set__enum1_5__2)) ::System::Collections::Generic::IEnumerator_1<T1>*  _enum1_5__2;

/// @brief Field <enum2>5__3 offset 0x68
 __declspec(property(get=__get__enum2_5__3, put=__set__enum2_5__3)) ::System::Collections::Generic::IEnumerator_1<T2>*  _enum2_5__3;

 __declspec(property(get=System_Collections_Generic_IEnumerator__T1_T2___get_Current)) ::System::ValueTuple_2<T1,T2>  System_Collections_Generic_IEnumerator__T1_T2___Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<T1,T2>>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<T1,T2>>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<T1,T2>>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<T1,T2>>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___2__current(::System::ValueTuple_2<T1,T2>  value) ;

constexpr ::System::ValueTuple_2<T1,T2>& __get___2__current() ;

constexpr ::System::ValueTuple_2<T1,T2> const& __get___2__current() const;

constexpr void __set___l__initialThreadId(int32_t  value) ;

constexpr int32_t& __get___l__initialThreadId() ;

constexpr int32_t const& __get___l__initialThreadId() const;

constexpr void __set_collection1(::System::Collections::Generic::IEnumerable_1<T1>*  value) ;

constexpr ::System::Collections::Generic::IEnumerable_1<T1>* __get_collection1() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<T1>*> __get_collection1() const;

constexpr void __set___3__collection1(::System::Collections::Generic::IEnumerable_1<T1>*  value) ;

constexpr ::System::Collections::Generic::IEnumerable_1<T1>* __get___3__collection1() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<T1>*> __get___3__collection1() const;

constexpr void __set_collection2(::System::Collections::Generic::IEnumerable_1<T2>*  value) ;

constexpr ::System::Collections::Generic::IEnumerable_1<T2>* __get_collection2() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<T2>*> __get_collection2() const;

constexpr void __set___3__collection2(::System::Collections::Generic::IEnumerable_1<T2>*  value) ;

constexpr ::System::Collections::Generic::IEnumerable_1<T2>* __get___3__collection2() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<T2>*> __get___3__collection2() const;

constexpr void __set_collection2Tombstone(T2  value) ;

constexpr T2& __get_collection2Tombstone() ;

constexpr T2 const& __get_collection2Tombstone() const;

constexpr void __set___3__collection2Tombstone(T2  value) ;

constexpr T2& __get___3__collection2Tombstone() ;

constexpr T2 const& __get___3__collection2Tombstone() const;

constexpr void __set__enum1_5__2(::System::Collections::Generic::IEnumerator_1<T1>*  value) ;

constexpr ::System::Collections::Generic::IEnumerator_1<T1>* __get__enum1_5__2() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<T1>*> __get__enum1_5__2() const;

constexpr void __set__enum2_5__3(::System::Collections::Generic::IEnumerator_1<T2>*  value) ;

constexpr ::System::Collections::Generic::IEnumerator_1<T2>* __get__enum2_5__3() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<T2>*> __get__enum2_5__3() const;

static inline ::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method <>m__Finally1 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void __m__Finally1() ;

/// @brief Method <>m__Finally2 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void __m__Finally2() ;

/// @brief Method System.Collections.Generic.IEnumerator<(T1,T2)>.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::ValueTuple_2<T1,T2> System_Collections_Generic_IEnumerator__T1_T2___get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<(T1,T2)>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<T1,T2>>* System_Collections_Generic_IEnumerable__T1_T2___GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

// Ctor Parameters [CppParam { name: "", ty: "__ShuffleExtensions___ZipSkipTombstone_d__3_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ShuffleExtensions___ZipSkipTombstone_d__3_2(__ShuffleExtensions___ZipSkipTombstone_d__3_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ShuffleExtensions___ZipSkipTombstone_d__3_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ShuffleExtensions___ZipSkipTombstone_d__3_2(__ShuffleExtensions___ZipSkipTombstone_d__3_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ShuffleExtensions___ZipSkipTombstone_d__3_2()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1, "", "ShuffleExtensions/<PickRandomElementsWithTombstone>d__1`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1, "", "ShuffleExtensions/<TakeWithTombstone>d__2`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2, "", "ShuffleExtensions/<ZipSkipTombstone>d__3`2");
NEED_NO_BOX(::GlobalNamespace::ShuffleExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ShuffleExtensions*, "", "ShuffleExtensions");
