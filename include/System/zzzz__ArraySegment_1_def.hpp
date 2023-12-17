#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ArraySegment_1)
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyCollection_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
template<typename T>
struct __ArraySegment_1__Enumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
template<typename T>
struct __ArraySegment_1__Enumerator;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T>
struct ArraySegment_1<T>;
}
namespace System {
template<>
struct ArraySegment_1<uint8_t>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T>
struct __ArraySegment_1__Enumerator<T>;
}
namespace System {
template<>
struct __ArraySegment_1__Enumerator<uint8_t>;
}
// Write type traits
MARK_GEN_VAL_T(::System::ArraySegment_1);
MARK_GEN_VAL_T(::System::__ArraySegment_1__Enumerator);
// Type: ::Enumerator
// Type: System::ArraySegment`1
// Type: ::Enumerator
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2348))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2348), inst: 741 })
// CS Name: ::ArraySegment`1::Enumerator<T>
struct CORDL_TYPE __ArraySegment_1__Enumerator<uint8_t> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field _array offset 0x0
 __declspec(property(get=__get__array, put=__set__array)) ::ArrayW<uint8_t,::Array<uint8_t>*>  _array;

/// @brief Field _start offset 0x8
 __declspec(property(get=__get__start, put=__set__start)) int32_t  _start;

/// @brief Field _end offset 0xc
 __declspec(property(get=__get__end, put=__set__end)) int32_t  _end;

/// @brief Field _current offset 0x10
 __declspec(property(get=__get__current, put=__set__current)) int32_t  _current;

 __declspec(property(get=get_Current)) uint8_t  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<uint8_t>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<uint8_t>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

constexpr void __set__array(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get__array() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get__array() const;

constexpr void __set__start(int32_t  value) ;

constexpr int32_t& __get__start() ;

constexpr int32_t const& __get__start() const;

constexpr void __set__end(int32_t  value) ;

constexpr int32_t& __get__end() ;

constexpr int32_t const& __get__end() const;

constexpr void __set__current(int32_t  value) ;

constexpr int32_t& __get__current() ;

constexpr int32_t const& __get__current() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::ArraySegment_1<uint8_t>  arraySegment) ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline uint8_t get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

// Ctor Parameters [CppParam { name: "_array", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "_start", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_end", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_current", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __ArraySegment_1__Enumerator(::ArrayW<uint8_t,::Array<uint8_t>*>  _array, int32_t  _start, int32_t  _end, int32_t  _current) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ArraySegment_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ArraySegment_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: ::Enumerator
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2348))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2348), inst: 2 })
// CS Name: ::ArraySegment`1::Enumerator<T>
struct CORDL_TYPE __ArraySegment_1__Enumerator<T> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field _array offset 0x0
 __declspec(property(get=__get__array, put=__set__array)) ::ArrayW<T,::Array<T>*>  _array;

/// @brief Field _start offset 0x8
 __declspec(property(get=__get__start, put=__set__start)) int32_t  _start;

/// @brief Field _end offset 0xc
 __declspec(property(get=__get__end, put=__set__end)) int32_t  _end;

/// @brief Field _current offset 0x10
 __declspec(property(get=__get__current, put=__set__current)) int32_t  _current;

 __declspec(property(get=get_Current)) T  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<T>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

constexpr void __set__array(::ArrayW<T,::Array<T>*>  value) ;

constexpr ::ArrayW<T,::Array<T>*>& __get__array() ;

constexpr ::ArrayW<T,::Array<T>*> const& __get__array() const;

constexpr void __set__start(int32_t  value) ;

constexpr int32_t& __get__start() ;

constexpr int32_t const& __get__start() const;

constexpr void __set__end(int32_t  value) ;

constexpr int32_t& __get__end() ;

constexpr int32_t const& __get__end() const;

constexpr void __set__current(int32_t  value) ;

constexpr int32_t& __get__current() ;

constexpr int32_t const& __get__current() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::ArraySegment_1<T>  arraySegment) ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline T get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

// Ctor Parameters [CppParam { name: "_array", ty: "::ArrayW<T,::Array<T>*>", modifiers: "", def_value: None }, CppParam { name: "_start", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_end", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_current", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __ArraySegment_1__Enumerator(::ArrayW<T,::Array<T>*>  _array, int32_t  _start, int32_t  _end, int32_t  _current) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ArraySegment_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ArraySegment_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::ArraySegment`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2349))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2349), inst: 741 })
// CS Name: ::System::ArraySegment`1<T>
struct CORDL_TYPE ArraySegment_1<uint8_t> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using Enumerator = ::System::__ArraySegment_1__Enumerator<uint8_t>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _array offset 0x0
 __declspec(property(get=__get__array, put=__set__array)) ::ArrayW<uint8_t,::Array<uint8_t>*>  _array;

/// @brief Field _offset offset 0x8
 __declspec(property(get=__get__offset, put=__set__offset)) int32_t  _offset;

/// @brief Field _count offset 0xc
 __declspec(property(get=__get__count, put=__set__count)) int32_t  _count;

 __declspec(property(get=get_Array)) ::ArrayW<uint8_t,::Array<uint8_t>*>  Array;

 __declspec(property(get=get_Offset)) int32_t  Offset;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=System_Collections_Generic_IList_T__get_Item, put=System_Collections_Generic_IList_T__set_Item)) uint8_t  System_Collections_Generic_IList_T__Item[];

 __declspec(property(get=System_Collections_Generic_IReadOnlyList_T__get_Item)) uint8_t  System_Collections_Generic_IReadOnlyList_T__Item[];

 __declspec(property(get=System_Collections_Generic_ICollection_T__get_IsReadOnly)) bool  System_Collections_Generic_ICollection_T__IsReadOnly;

/// @brief Convert operator to "::System::Collections::Generic::IList_1<uint8_t>"
constexpr operator  ::System::Collections::Generic::IList_1<uint8_t>*() ;

/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<uint8_t>"
constexpr operator  ::System::Collections::Generic::ICollection_1<uint8_t>*() ;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<uint8_t>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<uint8_t>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<uint8_t>"
constexpr operator  ::System::Collections::Generic::IReadOnlyList_1<uint8_t>*() ;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<uint8_t>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<uint8_t>*() ;

static inline void setStaticF__Empty_k__BackingField(::System::ArraySegment_1<uint8_t>  value) ;

static inline ::System::ArraySegment_1<uint8_t> getStaticF__Empty_k__BackingField() ;

constexpr void __set__array(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get__array() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get__array() const;

constexpr void __set__offset(int32_t  value) ;

constexpr int32_t& __get__offset() ;

constexpr int32_t const& __get__offset() const;

constexpr void __set__count(int32_t  value) ;

constexpr int32_t& __get__count() ;

constexpr int32_t const& __get__count() const;

/// @brief Method get_Empty addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::ArraySegment_1<uint8_t> get_Empty() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  array) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  array, int32_t  offset, int32_t  count) ;

/// @brief Method get_Array addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> get_Array() ;

/// @brief Method get_Offset addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Offset() ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::__ArraySegment_1__Enumerator<uint8_t> GetEnumerator() ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline void CopyTo(::ArrayW<uint8_t,::Array<uint8_t>*>  destination, int32_t  destinationIndex) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Equals(::System::ArraySegment_1<uint8_t>  obj) ;

/// @brief Method System.Collections.Generic.IList<T>.get_Item addr 0x0 size 0xffffffffffffffff virtual true final true
inline uint8_t System_Collections_Generic_IList_T__get_Item(int32_t  index) ;

/// @brief Method System.Collections.Generic.IList<T>.set_Item addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_Generic_IList_T__set_Item(int32_t  index, uint8_t  value) ;

/// @brief Method System.Collections.Generic.IList<T>.IndexOf addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_Collections_Generic_IList_T__IndexOf(uint8_t  item) ;

/// @brief Method System.Collections.Generic.IList<T>.Insert addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_Generic_IList_T__Insert(int32_t  index, uint8_t  item) ;

/// @brief Method System.Collections.Generic.IList<T>.RemoveAt addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_Generic_IList_T__RemoveAt(int32_t  index) ;

/// @brief Method System.Collections.Generic.IReadOnlyList<T>.get_Item addr 0x0 size 0xffffffffffffffff virtual true final true
inline uint8_t System_Collections_Generic_IReadOnlyList_T__get_Item(int32_t  index) ;

/// @brief Method System.Collections.Generic.ICollection<T>.get_IsReadOnly addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_Generic_ICollection_T__get_IsReadOnly() ;

/// @brief Method System.Collections.Generic.ICollection<T>.Add addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_Generic_ICollection_T__Add(uint8_t  item) ;

/// @brief Method System.Collections.Generic.ICollection<T>.Clear addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_Generic_ICollection_T__Clear() ;

/// @brief Method System.Collections.Generic.ICollection<T>.Contains addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_Generic_ICollection_T__Contains(uint8_t  item) ;

/// @brief Method System.Collections.Generic.ICollection<T>.Remove addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_Generic_ICollection_T__Remove(uint8_t  item) ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<uint8_t>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method ThrowInvalidOperationIfDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ThrowInvalidOperationIfDefault() ;

// Ctor Parameters [CppParam { name: "_array", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "_offset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_count", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ArraySegment_1(::ArrayW<uint8_t,::Array<uint8_t>*>  _array, int32_t  _offset, int32_t  _count) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ArraySegment_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ArraySegment_1()  = default;


// Fields

// Static field <Empty>k__BackingField


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::ArraySegment`1
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2349))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2349), inst: 2 })
// CS Name: ::System::ArraySegment`1<T>
struct CORDL_TYPE ArraySegment_1<T> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using Enumerator = ::System::__ArraySegment_1__Enumerator<T>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _array offset 0x0
 __declspec(property(get=__get__array, put=__set__array)) ::ArrayW<T,::Array<T>*>  _array;

/// @brief Field _offset offset 0x8
 __declspec(property(get=__get__offset, put=__set__offset)) int32_t  _offset;

/// @brief Field _count offset 0xc
 __declspec(property(get=__get__count, put=__set__count)) int32_t  _count;

 __declspec(property(get=get_Array)) ::ArrayW<T,::Array<T>*>  Array;

 __declspec(property(get=get_Offset)) int32_t  Offset;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=System_Collections_Generic_IList_T__get_Item, put=System_Collections_Generic_IList_T__set_Item)) T  System_Collections_Generic_IList_T__Item[];

 __declspec(property(get=System_Collections_Generic_IReadOnlyList_T__get_Item)) T  System_Collections_Generic_IReadOnlyList_T__Item[];

 __declspec(property(get=System_Collections_Generic_ICollection_T__get_IsReadOnly)) bool  System_Collections_Generic_ICollection_T__IsReadOnly;

/// @brief Convert operator to "::System::Collections::Generic::IList_1<T>"
constexpr operator  ::System::Collections::Generic::IList_1<T>*() ;

/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<T>"
constexpr operator  ::System::Collections::Generic::ICollection_1<T>*() ;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<T>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<T>"
constexpr operator  ::System::Collections::Generic::IReadOnlyList_1<T>*() ;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<T>*() ;

static inline void setStaticF__Empty_k__BackingField(::System::ArraySegment_1<T>  value) ;

static inline ::System::ArraySegment_1<T> getStaticF__Empty_k__BackingField() ;

constexpr void __set__array(::ArrayW<T,::Array<T>*>  value) ;

constexpr ::ArrayW<T,::Array<T>*>& __get__array() ;

constexpr ::ArrayW<T,::Array<T>*> const& __get__array() const;

constexpr void __set__offset(int32_t  value) ;

constexpr int32_t& __get__offset() ;

constexpr int32_t const& __get__offset() const;

constexpr void __set__count(int32_t  value) ;

constexpr int32_t& __get__count() ;

constexpr int32_t const& __get__count() const;

/// @brief Method get_Empty addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::ArraySegment_1<T> get_Empty() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<T,::Array<T>*>  array) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<T,::Array<T>*>  array, int32_t  offset, int32_t  count) ;

/// @brief Method get_Array addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<T,::Array<T>*> get_Array() ;

/// @brief Method get_Offset addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Offset() ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::__ArraySegment_1__Enumerator<T> GetEnumerator() ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline void CopyTo(::ArrayW<T,::Array<T>*>  destination, int32_t  destinationIndex) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Equals(::System::ArraySegment_1<T>  obj) ;

/// @brief Method System.Collections.Generic.IList<T>.get_Item addr 0x0 size 0xffffffffffffffff virtual true final true
inline T System_Collections_Generic_IList_T__get_Item(int32_t  index) ;

/// @brief Method System.Collections.Generic.IList<T>.set_Item addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_Generic_IList_T__set_Item(int32_t  index, T  value) ;

/// @brief Method System.Collections.Generic.IList<T>.IndexOf addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_Collections_Generic_IList_T__IndexOf(T  item) ;

/// @brief Method System.Collections.Generic.IList<T>.Insert addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_Generic_IList_T__Insert(int32_t  index, T  item) ;

/// @brief Method System.Collections.Generic.IList<T>.RemoveAt addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_Generic_IList_T__RemoveAt(int32_t  index) ;

/// @brief Method System.Collections.Generic.IReadOnlyList<T>.get_Item addr 0x0 size 0xffffffffffffffff virtual true final true
inline T System_Collections_Generic_IReadOnlyList_T__get_Item(int32_t  index) ;

/// @brief Method System.Collections.Generic.ICollection<T>.get_IsReadOnly addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_Generic_ICollection_T__get_IsReadOnly() ;

/// @brief Method System.Collections.Generic.ICollection<T>.Add addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_Generic_ICollection_T__Add(T  item) ;

/// @brief Method System.Collections.Generic.ICollection<T>.Clear addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_Generic_ICollection_T__Clear() ;

/// @brief Method System.Collections.Generic.ICollection<T>.Contains addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_Generic_ICollection_T__Contains(T  item) ;

/// @brief Method System.Collections.Generic.ICollection<T>.Remove addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_Generic_ICollection_T__Remove(T  item) ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method ThrowInvalidOperationIfDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ThrowInvalidOperationIfDefault() ;

// Ctor Parameters [CppParam { name: "_array", ty: "::ArrayW<T,::Array<T>*>", modifiers: "", def_value: None }, CppParam { name: "_offset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_count", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ArraySegment_1(::ArrayW<T,::Array<T>*>  _array, int32_t  _offset, int32_t  _count) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ArraySegment_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ArraySegment_1()  = default;


// Fields

// Static field <Empty>k__BackingField


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::ArraySegment_1, "System", "ArraySegment`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::__ArraySegment_1__Enumerator, "System", "ArraySegment`1/Enumerator");
