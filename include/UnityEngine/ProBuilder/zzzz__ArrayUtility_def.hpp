#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ArrayUtility)
namespace UnityEngine::ProBuilder {
template<typename TSource,typename TKey>
class __ArrayUtility____c__DisplayClass21_0_2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace UnityEngine::ProBuilder {
struct __ArrayUtility__SearchRange;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::ProBuilder {
template<typename T>
class __ArrayUtility____c__23_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine::ProBuilder {
struct Edge;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
template<typename T>
class __ArrayUtility____c__23_1;
}
namespace UnityEngine::ProBuilder {
template<typename TSource,typename TKey>
class __ArrayUtility____c__DisplayClass21_0_2;
}
namespace UnityEngine::ProBuilder {
class ArrayUtility;
}
namespace UnityEngine::ProBuilder {
template<::il2cpp_utils::il2cpp_reference_type T>
class __ArrayUtility____c__23_1<T>;
}
namespace UnityEngine::ProBuilder {
template<>
class __ArrayUtility____c__23_1<int32_t>;
}
namespace UnityEngine::ProBuilder {
template<::il2cpp_utils::il2cpp_reference_type TSource>
class __ArrayUtility____c__DisplayClass21_0_2<TSource,::UnityEngine::ProBuilder::Edge>;
}
namespace UnityEngine::ProBuilder {
template<::il2cpp_utils::il2cpp_reference_type TSource,::il2cpp_utils::il2cpp_reference_type TKey>
class __ArrayUtility____c__DisplayClass21_0_2<TSource,TKey>;
}
namespace UnityEngine::ProBuilder {
struct __ArrayUtility__SearchRange;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::ProBuilder::__ArrayUtility____c__23_1);
MARK_GEN_REF_PTR_T(::UnityEngine::ProBuilder::__ArrayUtility____c__DisplayClass21_0_2);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::ArrayUtility);
MARK_VAL_T(::UnityEngine::ProBuilder::__ArrayUtility__SearchRange);
// Type: ::SearchRange
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12094))
// CS Name: ::ArrayUtility::SearchRange
struct CORDL_TYPE __ArrayUtility__SearchRange : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field begin offset 0x0
 __declspec(property(get=__get_begin, put=__set_begin)) int32_t  begin;

/// @brief Field end offset 0x4
 __declspec(property(get=__get_end, put=__set_end)) int32_t  end;

constexpr void __set_begin(int32_t  value) ;

constexpr int32_t& __get_begin() ;

constexpr int32_t const& __get_begin() const;

constexpr void __set_end(int32_t  value) ;

constexpr int32_t& __get_end() ;

constexpr int32_t const& __get_end() const;

/// @brief Method .ctor addr 0x2b3698c size 0x8 virtual false final false
inline void _ctor(int32_t  begin, int32_t  end) ;

/// @brief Method Valid addr 0x2b36994 size 0x14 virtual false final false
inline bool Valid() ;

/// @brief Method Center addr 0x2b369a8 size 0x18 virtual false final false
inline int32_t Center() ;

/// @brief Method ToString addr 0x2b369c0 size 0x1fc virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "begin", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "end", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __ArrayUtility__SearchRange(int32_t  begin, int32_t  end) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ArrayUtility__SearchRange(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ArrayUtility__SearchRange()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::__ArrayUtility__SearchRange, 0x8>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder
// Type: ::<>c__DisplayClass21_0`2
// Type: ::<>c__23`1
// Type: UnityEngine.ProBuilder::ArrayUtility
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12097))
// CS Name: ::UnityEngine.ProBuilder::ArrayUtility*
class CORDL_TYPE ArrayUtility : public ::System::Object {
public:
// Declarations
template<typename T>
using __c__23_1 = ::UnityEngine::ProBuilder::__ArrayUtility____c__23_1<T>;

template<typename TSource,typename TKey>
using __c__DisplayClass21_0_2 = ::UnityEngine::ProBuilder::__ArrayUtility____c__DisplayClass21_0_2<TSource, TKey>;

using SearchRange = ::UnityEngine::ProBuilder::__ArrayUtility__SearchRange;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method ValuesWithIndexes addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline ::ArrayW<T,::Array<T>*> ValuesWithIndexes(::ArrayW<T,::Array<T>*>  arr, ::ArrayW<int32_t,::Array<int32_t>*>  indexes) ;

/// @brief Method ValuesWithIndexes addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline ::System::Collections::Generic::List_1<T>* ValuesWithIndexes(::System::Collections::Generic::List_1<T>*  arr, ::System::Collections::Generic::IList_1<int32_t>*  indexes) ;

/// @brief Method AllIndexesOf addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline ::System::Collections::Generic::IEnumerable_1<int32_t>* AllIndexesOf(::System::Collections::Generic::IList_1<T>*  list, ::System::Func_2<T,bool>*  lambda) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline ::ArrayW<T,::Array<T>*> Add(::ArrayW<T,::Array<T>*>  arr, T  val) ;

/// @brief Method AddRange addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline ::ArrayW<T,::Array<T>*> AddRange(::ArrayW<T,::Array<T>*>  arr, ::ArrayW<T,::Array<T>*>  val) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline ::ArrayW<T,::Array<T>*> Remove(::ArrayW<T,::Array<T>*>  arr, T  val) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline ::ArrayW<T,::Array<T>*> Remove(::ArrayW<T,::Array<T>*>  arr, ::System::Collections::Generic::IEnumerable_1<T>*  val) ;

/// @brief Method RemoveAt addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline ::ArrayW<T,::Array<T>*> RemoveAt(::ArrayW<T,::Array<T>*>  arr, int32_t  index) ;

/// @brief Method RemoveAt addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline ::ArrayW<T,::Array<T>*> RemoveAt(::System::Collections::Generic::IList_1<T>*  list, ::System::Collections::Generic::IEnumerable_1<int32_t>*  indexes) ;

/// @brief Method SortedRemoveAt addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline ::ArrayW<T,::Array<T>*> SortedRemoveAt(::System::Collections::Generic::IList_1<T>*  list, ::System::Collections::Generic::IList_1<int32_t>*  sorted) ;

/// @brief Method NearestIndexPriorToValue addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline int32_t NearestIndexPriorToValue(::System::Collections::Generic::IList_1<T>*  sorted_list, T  value) ;

/// @brief Method Fill addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline ::System::Collections::Generic::List_1<T>* Fill(::System::Func_2<int32_t,T>*  ctor, int32_t  length) ;

/// @brief Method Fill addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline ::ArrayW<T,::Array<T>*> Fill(T  val, int32_t  length) ;

/// @brief Method ContainsMatch addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline bool ContainsMatch(::ArrayW<T,::Array<T>*>  a, ::ArrayW<T,::Array<T>*>  b) ;

/// @brief Method ContainsMatch addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline bool ContainsMatch(::ArrayW<T,::Array<T>*>  a, ::ArrayW<T,::Array<T>*>  b, ByRef<int32_t>  index_a, ByRef<int32_t>  index_b) ;

/// @brief Method Concat addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline ::ArrayW<T,::Array<T>*> Concat(::ArrayW<T,::Array<T>*>  x, ::ArrayW<T,::Array<T>*>  y) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline int32_t IndexOf(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<T>*>*  InList, T  InValue) ;

/// @brief Method Fill addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline ::ArrayW<T,::Array<T>*> Fill(int32_t  count, ::System::Func_2<int32_t,T>*  ctor) ;

/// @brief Method AddOrAppend addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T,typename K>
static inline void AddOrAppend(::System::Collections::Generic::Dictionary_2<T,::System::Collections::Generic::List_1<K>*>*  dictionary, T  key, K  value) ;

/// @brief Method AddOrAppendRange addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T,typename K>
static inline void AddOrAppendRange(::System::Collections::Generic::Dictionary_2<T,::System::Collections::Generic::List_1<K>*>*  dictionary, T  key, ::System::Collections::Generic::List_1<K>*  value) ;

/// @brief Method DistinctBy addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TSource,typename TKey>
static inline ::System::Collections::Generic::IEnumerable_1<TSource>* DistinctBy(::System::Collections::Generic::IEnumerable_1<TSource>*  source, ::System::Func_2<TSource,TKey>*  keySelector) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TKey,typename TValue>
static inline ::StringW ToString(::System::Collections::Generic::Dictionary_2<TKey,TValue>*  dict) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline ::StringW ToString(::System::Collections::Generic::IEnumerable_1<T>*  arr, ::StringW  separator) ;

// Ctor Parameters [CppParam { name: "", ty: "ArrayUtility", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ArrayUtility(ArrayUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ArrayUtility", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ArrayUtility(ArrayUtility const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ArrayUtility()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::ArrayUtility, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder
// Type: ::<>c__DisplayClass21_0`2
namespace UnityEngine::ProBuilder {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TSource>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12095)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12095), inst: 4974 })
// CS Name: ::ArrayUtility::<>c__DisplayClass21_0`2<TSource,TKey>*
class CORDL_TYPE __ArrayUtility____c__DisplayClass21_0_2<TSource,::UnityEngine::ProBuilder::Edge> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field knownKeys offset 0x10
 __declspec(property(get=__get_knownKeys, put=__set_knownKeys)) ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Edge>*  knownKeys;

/// @brief Field keySelector offset 0x18
 __declspec(property(get=__get_keySelector, put=__set_keySelector)) ::System::Func_2<TSource,::UnityEngine::ProBuilder::Edge>*  keySelector;

constexpr void __set_knownKeys(::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Edge>*  value) ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Edge>* __get_knownKeys() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Edge>*> __get_knownKeys() const;

constexpr void __set_keySelector(::System::Func_2<TSource,::UnityEngine::ProBuilder::Edge>*  value) ;

constexpr ::System::Func_2<TSource,::UnityEngine::ProBuilder::Edge>* __get_keySelector() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TSource,::UnityEngine::ProBuilder::Edge>*> __get_keySelector() const;

static inline ::UnityEngine::ProBuilder::__ArrayUtility____c__DisplayClass21_0_2<TSource,::UnityEngine::ProBuilder::Edge>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <DistinctBy>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool _DistinctBy_b__0(TSource  x) ;

// Ctor Parameters [CppParam { name: "", ty: "__ArrayUtility____c__DisplayClass21_0_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ArrayUtility____c__DisplayClass21_0_2(__ArrayUtility____c__DisplayClass21_0_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ArrayUtility____c__DisplayClass21_0_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ArrayUtility____c__DisplayClass21_0_2(__ArrayUtility____c__DisplayClass21_0_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ArrayUtility____c__DisplayClass21_0_2()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
// Type: ::<>c__DisplayClass21_0`2
namespace UnityEngine::ProBuilder {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TSource,::il2cpp_utils::il2cpp_reference_type TKey>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12095)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12095), inst: 81 })
// CS Name: ::ArrayUtility::<>c__DisplayClass21_0`2<TSource,TKey>*
class CORDL_TYPE __ArrayUtility____c__DisplayClass21_0_2<TSource,TKey> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field knownKeys offset 0x10
 __declspec(property(get=__get_knownKeys, put=__set_knownKeys)) ::System::Collections::Generic::HashSet_1<TKey>*  knownKeys;

/// @brief Field keySelector offset 0x18
 __declspec(property(get=__get_keySelector, put=__set_keySelector)) ::System::Func_2<TSource,TKey>*  keySelector;

constexpr void __set_knownKeys(::System::Collections::Generic::HashSet_1<TKey>*  value) ;

constexpr ::System::Collections::Generic::HashSet_1<TKey>* __get_knownKeys() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<TKey>*> __get_knownKeys() const;

constexpr void __set_keySelector(::System::Func_2<TSource,TKey>*  value) ;

constexpr ::System::Func_2<TSource,TKey>* __get_keySelector() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TSource,TKey>*> __get_keySelector() const;

static inline ::UnityEngine::ProBuilder::__ArrayUtility____c__DisplayClass21_0_2<TSource,TKey>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <DistinctBy>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool _DistinctBy_b__0(TSource  x) ;

// Ctor Parameters [CppParam { name: "", ty: "__ArrayUtility____c__DisplayClass21_0_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ArrayUtility____c__DisplayClass21_0_2(__ArrayUtility____c__DisplayClass21_0_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ArrayUtility____c__DisplayClass21_0_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ArrayUtility____c__DisplayClass21_0_2(__ArrayUtility____c__DisplayClass21_0_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ArrayUtility____c__DisplayClass21_0_2()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
// Type: ::<>c__23`1
namespace UnityEngine::ProBuilder {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12096)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12096), inst: 98 })
// CS Name: ::ArrayUtility::<>c__23`1<T>*
class CORDL_TYPE __ArrayUtility____c__23_1<int32_t> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::UnityEngine::ProBuilder::__ArrayUtility____c__23_1<int32_t>*  value) ;

static inline ::UnityEngine::ProBuilder::__ArrayUtility____c__23_1<int32_t>* getStaticF___9() ;

static inline void setStaticF___9__23_0(::System::Func_2<int32_t,::StringW>*  value) ;

static inline ::System::Func_2<int32_t,::StringW>* getStaticF___9__23_0() ;

static inline ::UnityEngine::ProBuilder::__ArrayUtility____c__23_1<int32_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <ToString>b__23_0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::StringW _ToString_b__23_0(int32_t  x) ;

// Ctor Parameters [CppParam { name: "", ty: "__ArrayUtility____c__23_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ArrayUtility____c__23_1(__ArrayUtility____c__23_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ArrayUtility____c__23_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ArrayUtility____c__23_1(__ArrayUtility____c__23_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ArrayUtility____c__23_1()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__23_0


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
// Type: ::<>c__23`1
namespace UnityEngine::ProBuilder {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12096)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12096), inst: 2 })
// CS Name: ::ArrayUtility::<>c__23`1<T>*
class CORDL_TYPE __ArrayUtility____c__23_1<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::UnityEngine::ProBuilder::__ArrayUtility____c__23_1<T>*  value) ;

static inline ::UnityEngine::ProBuilder::__ArrayUtility____c__23_1<T>* getStaticF___9() ;

static inline void setStaticF___9__23_0(::System::Func_2<T,::StringW>*  value) ;

static inline ::System::Func_2<T,::StringW>* getStaticF___9__23_0() ;

static inline ::UnityEngine::ProBuilder::__ArrayUtility____c__23_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <ToString>b__23_0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::StringW _ToString_b__23_0(T  x) ;

// Ctor Parameters [CppParam { name: "", ty: "__ArrayUtility____c__23_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ArrayUtility____c__23_1(__ArrayUtility____c__23_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ArrayUtility____c__23_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ArrayUtility____c__23_1(__ArrayUtility____c__23_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ArrayUtility____c__23_1()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__23_0


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ProBuilder::__ArrayUtility____c__23_1, "UnityEngine.ProBuilder", "ArrayUtility/<>c__23`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ProBuilder::__ArrayUtility____c__DisplayClass21_0_2, "UnityEngine.ProBuilder", "ArrayUtility/<>c__DisplayClass21_0`2");
NEED_NO_BOX(::UnityEngine::ProBuilder::ArrayUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::ArrayUtility*, "UnityEngine.ProBuilder", "ArrayUtility");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::__ArrayUtility__SearchRange, "UnityEngine.ProBuilder", "ArrayUtility/SearchRange");
