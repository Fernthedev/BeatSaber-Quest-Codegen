#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MultipleSortedListsEnumerator_1)
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace GlobalNamespace {
template<typename T>
class __MultipleSortedListsEnumerator_1__HeapItem;
}
namespace GlobalNamespace {
template<typename T>
class __MultipleSortedListsEnumerator_1___GetEnumerator_d__4;
}
namespace System::Collections {
class IEnumerator;
}
namespace GlobalNamespace {
template<typename T>
class BinaryHeap_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
template<typename T>
class IComparable_1;
}
namespace System {
class Object;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class MultipleSortedListsEnumerator_1;
}
namespace GlobalNamespace {
template<typename T>
class __MultipleSortedListsEnumerator_1__HeapItem;
}
namespace GlobalNamespace {
template<typename T>
class __MultipleSortedListsEnumerator_1___GetEnumerator_d__4;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type T>
class MultipleSortedListsEnumerator_1<T>;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type T>
class __MultipleSortedListsEnumerator_1__HeapItem<T>;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type T>
class __MultipleSortedListsEnumerator_1___GetEnumerator_d__4<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::MultipleSortedListsEnumerator_1);
MARK_GEN_REF_PTR_T(::GlobalNamespace::__MultipleSortedListsEnumerator_1__HeapItem);
MARK_GEN_REF_PTR_T(::GlobalNamespace::__MultipleSortedListsEnumerator_1___GetEnumerator_d__4);
// Type: ::HeapItem
// Type: ::<GetEnumerator>d__4
// Type: ::MultipleSortedListsEnumerator`1
// Type: ::HeapItem
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14344))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14344), inst: 2 })
// CS Name: ::MultipleSortedListsEnumerator`1::HeapItem<T>*
class CORDL_TYPE __MultipleSortedListsEnumerator_1__HeapItem<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field _dataList offset 0x10
 __declspec(property(get=__get__dataList, put=__set__dataList)) ::System::Collections::Generic::IReadOnlyList_1<T>*  _dataList;

/// @brief Field _idx offset 0x18
 __declspec(property(get=__get__idx, put=__set__idx)) int32_t  _idx;

/// @brief Field _currentValue offset 0x20
 __declspec(property(get=__get__currentValue, put=__set__currentValue)) T  _currentValue;

 __declspec(property(get=get_currentValue)) T  currentValue;

/// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::__MultipleSortedListsEnumerator_1__HeapItem<T>*>"
constexpr operator  ::System::IComparable_1<::GlobalNamespace::__MultipleSortedListsEnumerator_1__HeapItem<T>*>*() noexcept;

constexpr void __set__dataList(::System::Collections::Generic::IReadOnlyList_1<T>*  value) ;

constexpr ::System::Collections::Generic::IReadOnlyList_1<T>* __get__dataList() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<T>*> __get__dataList() const;

constexpr void __set__idx(int32_t  value) ;

constexpr int32_t& __get__idx() ;

constexpr int32_t const& __get__idx() const;

constexpr void __set__currentValue(T  value) ;

constexpr T& __get__currentValue() ;

constexpr T const& __get__currentValue() const;

/// @brief Method get_currentValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline T get_currentValue() ;

static inline ::GlobalNamespace::__MultipleSortedListsEnumerator_1__HeapItem<T>* New_ctor(::System::Collections::Generic::IReadOnlyList_1<T>*  dataList) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IReadOnlyList_1<T>*  dataList) ;

/// @brief Method MoveToNextItem addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool MoveToNextItem() ;

/// @brief Method CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t CompareTo(::GlobalNamespace::__MultipleSortedListsEnumerator_1__HeapItem<T>*  heapItem) ;

// Ctor Parameters [CppParam { name: "", ty: "__MultipleSortedListsEnumerator_1__HeapItem", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__MultipleSortedListsEnumerator_1__HeapItem(__MultipleSortedListsEnumerator_1__HeapItem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__MultipleSortedListsEnumerator_1__HeapItem", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__MultipleSortedListsEnumerator_1__HeapItem(__MultipleSortedListsEnumerator_1__HeapItem const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __MultipleSortedListsEnumerator_1__HeapItem()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<GetEnumerator>d__4
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14345))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14345), inst: 2 })
// CS Name: ::MultipleSortedListsEnumerator`1::<GetEnumerator>d__4<T>*
class CORDL_TYPE __MultipleSortedListsEnumerator_1___GetEnumerator_d__4<T> : public ::System::Object {
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
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::MultipleSortedListsEnumerator_1<T>*  __4__this;

/// @brief Field <heapItem>5__2 offset 0x28
 __declspec(property(get=__get__heapItem_5__2, put=__set__heapItem_5__2)) ::GlobalNamespace::__MultipleSortedListsEnumerator_1__HeapItem<T>*  _heapItem_5__2;

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

constexpr void __set___4__this(::GlobalNamespace::MultipleSortedListsEnumerator_1<T>*  value) ;

constexpr ::GlobalNamespace::MultipleSortedListsEnumerator_1<T>* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultipleSortedListsEnumerator_1<T>*> __get___4__this() const;

constexpr void __set__heapItem_5__2(::GlobalNamespace::__MultipleSortedListsEnumerator_1__HeapItem<T>*  value) ;

constexpr ::GlobalNamespace::__MultipleSortedListsEnumerator_1__HeapItem<T>* __get__heapItem_5__2() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MultipleSortedListsEnumerator_1__HeapItem<T>*> __get__heapItem_5__2() const;

static inline ::GlobalNamespace::__MultipleSortedListsEnumerator_1___GetEnumerator_d__4<T>* New_ctor(int32_t  __1__state) ;

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

// Ctor Parameters [CppParam { name: "", ty: "__MultipleSortedListsEnumerator_1___GetEnumerator_d__4", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__MultipleSortedListsEnumerator_1___GetEnumerator_d__4(__MultipleSortedListsEnumerator_1___GetEnumerator_d__4 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__MultipleSortedListsEnumerator_1___GetEnumerator_d__4", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__MultipleSortedListsEnumerator_1___GetEnumerator_d__4(__MultipleSortedListsEnumerator_1___GetEnumerator_d__4 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __MultipleSortedListsEnumerator_1___GetEnumerator_d__4()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MultipleSortedListsEnumerator`1
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14346))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14346), inst: 2 })
// CS Name: ::MultipleSortedListsEnumerator`1<T>*
class CORDL_TYPE MultipleSortedListsEnumerator_1<T> : public ::System::Object {
public:
// Declarations
using _GetEnumerator_d__4 = ::GlobalNamespace::__MultipleSortedListsEnumerator_1___GetEnumerator_d__4<T>;

using HeapItem = ::GlobalNamespace::__MultipleSortedListsEnumerator_1__HeapItem<T>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field _heap offset 0x10
 __declspec(property(get=__get__heap, put=__set__heap)) ::GlobalNamespace::BinaryHeap_1<::GlobalNamespace::__MultipleSortedListsEnumerator_1__HeapItem<T>*>*  _heap;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

constexpr void __set__heap(::GlobalNamespace::BinaryHeap_1<::GlobalNamespace::__MultipleSortedListsEnumerator_1__HeapItem<T>*>*  value) ;

constexpr ::GlobalNamespace::BinaryHeap_1<::GlobalNamespace::__MultipleSortedListsEnumerator_1__HeapItem<T>*>* __get__heap() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BinaryHeap_1<::GlobalNamespace::__MultipleSortedListsEnumerator_1__HeapItem<T>*>*> __get__heap() const;

static inline ::GlobalNamespace::MultipleSortedListsEnumerator_1<T>* New_ctor(::ArrayW<::System::Collections::Generic::IReadOnlyList_1<T>*,::Array<::System::Collections::Generic::IReadOnlyList_1<T>*>*>  dataList) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::System::Collections::Generic::IReadOnlyList_1<T>*,::Array<::System::Collections::Generic::IReadOnlyList_1<T>*>*>  dataList) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::IEnumerator_1<T>* GetEnumerator() ;

// Ctor Parameters [CppParam { name: "", ty: "MultipleSortedListsEnumerator_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultipleSortedListsEnumerator_1(MultipleSortedListsEnumerator_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultipleSortedListsEnumerator_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultipleSortedListsEnumerator_1(MultipleSortedListsEnumerator_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MultipleSortedListsEnumerator_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::MultipleSortedListsEnumerator_1, "", "MultipleSortedListsEnumerator`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__MultipleSortedListsEnumerator_1__HeapItem, "", "MultipleSortedListsEnumerator`1/HeapItem");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__MultipleSortedListsEnumerator_1___GetEnumerator_d__4, "", "MultipleSortedListsEnumerator`1/<GetEnumerator>d__4");
