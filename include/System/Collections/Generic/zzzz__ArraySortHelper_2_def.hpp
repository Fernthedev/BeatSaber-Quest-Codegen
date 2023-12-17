#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ArraySortHelper_2)
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
// Forward declare root types
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class ArraySortHelper_2;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
class ArraySortHelper_2<TKey,TValue>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type TValue>
class ArraySortHelper_2<uint64_t,TValue>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Collections::Generic::ArraySortHelper_2);
// Type: System.Collections.Generic::ArraySortHelper`2
// Type: System.Collections.Generic::ArraySortHelper`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3864)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3864), inst: 1661 })
// CS Name: ::System.Collections.Generic::ArraySortHelper`2<TKey,TValue>*
class CORDL_TYPE ArraySortHelper_2<uint64_t,TValue> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_s_defaultArraySortHelper(::System::Collections::Generic::ArraySortHelper_2<uint64_t,TValue>*  value) ;

static inline ::System::Collections::Generic::ArraySortHelper_2<uint64_t,TValue>* getStaticF_s_defaultArraySortHelper() ;

/// @brief Method Sort addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Sort(::ArrayW<uint64_t,::Array<uint64_t>*>  keys, ::ArrayW<TValue,::Array<TValue>*>  values, int32_t  index, int32_t  length, ::System::Collections::Generic::IComparer_1<uint64_t>*  comparer) ;

/// @brief Method SwapIfGreaterWithItems addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void SwapIfGreaterWithItems(::ArrayW<uint64_t,::Array<uint64_t>*>  keys, ::ArrayW<TValue,::Array<TValue>*>  values, ::System::Collections::Generic::IComparer_1<uint64_t>*  comparer, int32_t  a, int32_t  b) ;

/// @brief Method Swap addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Swap(::ArrayW<uint64_t,::Array<uint64_t>*>  keys, ::ArrayW<TValue,::Array<TValue>*>  values, int32_t  i, int32_t  j) ;

/// @brief Method IntrospectiveSort addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void IntrospectiveSort(::ArrayW<uint64_t,::Array<uint64_t>*>  keys, ::ArrayW<TValue,::Array<TValue>*>  values, int32_t  left, int32_t  length, ::System::Collections::Generic::IComparer_1<uint64_t>*  comparer) ;

/// @brief Method IntroSort addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void IntroSort(::ArrayW<uint64_t,::Array<uint64_t>*>  keys, ::ArrayW<TValue,::Array<TValue>*>  values, int32_t  lo, int32_t  hi, int32_t  depthLimit, ::System::Collections::Generic::IComparer_1<uint64_t>*  comparer) ;

/// @brief Method PickPivotAndPartition addr 0x0 size 0xffffffffffffffff virtual false final false
static inline int32_t PickPivotAndPartition(::ArrayW<uint64_t,::Array<uint64_t>*>  keys, ::ArrayW<TValue,::Array<TValue>*>  values, int32_t  lo, int32_t  hi, ::System::Collections::Generic::IComparer_1<uint64_t>*  comparer) ;

/// @brief Method Heapsort addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Heapsort(::ArrayW<uint64_t,::Array<uint64_t>*>  keys, ::ArrayW<TValue,::Array<TValue>*>  values, int32_t  lo, int32_t  hi, ::System::Collections::Generic::IComparer_1<uint64_t>*  comparer) ;

/// @brief Method DownHeap addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void DownHeap(::ArrayW<uint64_t,::Array<uint64_t>*>  keys, ::ArrayW<TValue,::Array<TValue>*>  values, int32_t  i, int32_t  n, int32_t  lo, ::System::Collections::Generic::IComparer_1<uint64_t>*  comparer) ;

/// @brief Method InsertionSort addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void InsertionSort(::ArrayW<uint64_t,::Array<uint64_t>*>  keys, ::ArrayW<TValue,::Array<TValue>*>  values, int32_t  lo, int32_t  hi, ::System::Collections::Generic::IComparer_1<uint64_t>*  comparer) ;

/// @brief Method get_Default addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Collections::Generic::ArraySortHelper_2<uint64_t,TValue>* get_Default() ;

static inline ::System::Collections::Generic::ArraySortHelper_2<uint64_t,TValue>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ArraySortHelper_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ArraySortHelper_2(ArraySortHelper_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ArraySortHelper_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ArraySortHelper_2(ArraySortHelper_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ArraySortHelper_2()  = default;
public:


// Fields

// Static field s_defaultArraySortHelper


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::ArraySortHelper`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3864)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3864), inst: 81 })
// CS Name: ::System.Collections.Generic::ArraySortHelper`2<TKey,TValue>*
class CORDL_TYPE ArraySortHelper_2<TKey,TValue> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_s_defaultArraySortHelper(::System::Collections::Generic::ArraySortHelper_2<TKey,TValue>*  value) ;

static inline ::System::Collections::Generic::ArraySortHelper_2<TKey,TValue>* getStaticF_s_defaultArraySortHelper() ;

/// @brief Method Sort addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Sort(::ArrayW<TKey,::Array<TKey>*>  keys, ::ArrayW<TValue,::Array<TValue>*>  values, int32_t  index, int32_t  length, ::System::Collections::Generic::IComparer_1<TKey>*  comparer) ;

/// @brief Method SwapIfGreaterWithItems addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void SwapIfGreaterWithItems(::ArrayW<TKey,::Array<TKey>*>  keys, ::ArrayW<TValue,::Array<TValue>*>  values, ::System::Collections::Generic::IComparer_1<TKey>*  comparer, int32_t  a, int32_t  b) ;

/// @brief Method Swap addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Swap(::ArrayW<TKey,::Array<TKey>*>  keys, ::ArrayW<TValue,::Array<TValue>*>  values, int32_t  i, int32_t  j) ;

/// @brief Method IntrospectiveSort addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void IntrospectiveSort(::ArrayW<TKey,::Array<TKey>*>  keys, ::ArrayW<TValue,::Array<TValue>*>  values, int32_t  left, int32_t  length, ::System::Collections::Generic::IComparer_1<TKey>*  comparer) ;

/// @brief Method IntroSort addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void IntroSort(::ArrayW<TKey,::Array<TKey>*>  keys, ::ArrayW<TValue,::Array<TValue>*>  values, int32_t  lo, int32_t  hi, int32_t  depthLimit, ::System::Collections::Generic::IComparer_1<TKey>*  comparer) ;

/// @brief Method PickPivotAndPartition addr 0x0 size 0xffffffffffffffff virtual false final false
static inline int32_t PickPivotAndPartition(::ArrayW<TKey,::Array<TKey>*>  keys, ::ArrayW<TValue,::Array<TValue>*>  values, int32_t  lo, int32_t  hi, ::System::Collections::Generic::IComparer_1<TKey>*  comparer) ;

/// @brief Method Heapsort addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Heapsort(::ArrayW<TKey,::Array<TKey>*>  keys, ::ArrayW<TValue,::Array<TValue>*>  values, int32_t  lo, int32_t  hi, ::System::Collections::Generic::IComparer_1<TKey>*  comparer) ;

/// @brief Method DownHeap addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void DownHeap(::ArrayW<TKey,::Array<TKey>*>  keys, ::ArrayW<TValue,::Array<TValue>*>  values, int32_t  i, int32_t  n, int32_t  lo, ::System::Collections::Generic::IComparer_1<TKey>*  comparer) ;

/// @brief Method InsertionSort addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void InsertionSort(::ArrayW<TKey,::Array<TKey>*>  keys, ::ArrayW<TValue,::Array<TValue>*>  values, int32_t  lo, int32_t  hi, ::System::Collections::Generic::IComparer_1<TKey>*  comparer) ;

/// @brief Method get_Default addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Collections::Generic::ArraySortHelper_2<TKey,TValue>* get_Default() ;

static inline ::System::Collections::Generic::ArraySortHelper_2<TKey,TValue>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ArraySortHelper_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ArraySortHelper_2(ArraySortHelper_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ArraySortHelper_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ArraySortHelper_2(ArraySortHelper_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ArraySortHelper_2()  = default;
public:


// Fields

// Static field s_defaultArraySortHelper


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::ArraySortHelper_2, "System.Collections.Generic", "ArraySortHelper`2");
