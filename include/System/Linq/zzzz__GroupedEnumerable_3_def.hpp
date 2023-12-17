#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GroupedEnumerable_3)
namespace System::Linq {
template<typename TKey,typename TElement>
class IGrouping_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEqualityComparer_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IEnumerable;
}
// Forward declare root types
namespace System::Linq {
template<typename TSource,typename TKey,typename TElement>
class GroupedEnumerable_3;
}
namespace System::Linq {
template<::il2cpp_utils::il2cpp_reference_type TSource,::cordl_internals::is_or_is_backed_by<int32_t> TKey,::il2cpp_utils::il2cpp_reference_type TElement>
class GroupedEnumerable_3<TSource,TKey,TElement>;
}
namespace System::Linq {
template<::il2cpp_utils::il2cpp_reference_type TSource,::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TElement>
class GroupedEnumerable_3<TSource,TKey,TElement>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Linq::GroupedEnumerable_3);
// Type: System.Linq::GroupedEnumerable`3
// Type: System.Linq::GroupedEnumerable`3
namespace System::Linq {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TSource,::cordl_internals::is_or_is_backed_by<int32_t> TKey,::il2cpp_utils::il2cpp_reference_type TElement>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14289)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14289), inst: 6142 })
// CS Name: ::System.Linq::GroupedEnumerable`3<TSource,TKey,TElement>*
class CORDL_TYPE GroupedEnumerable_3<TSource,TKey,TElement> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field source offset 0x10
 __declspec(property(get=__get_source, put=__set_source)) ::System::Collections::Generic::IEnumerable_1<TSource>*  source;

/// @brief Field keySelector offset 0x18
 __declspec(property(get=__get_keySelector, put=__set_keySelector)) ::System::Func_2<TSource,TKey>*  keySelector;

/// @brief Field elementSelector offset 0x20
 __declspec(property(get=__get_elementSelector, put=__set_elementSelector)) ::System::Func_2<TSource,TElement>*  elementSelector;

/// @brief Field comparer offset 0x28
 __declspec(property(get=__get_comparer, put=__set_comparer)) ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Linq::IGrouping_2<TKey,TElement>*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::Linq::IGrouping_2<TKey,TElement>*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

constexpr void __set_source(::System::Collections::Generic::IEnumerable_1<TSource>*  value) ;

constexpr ::System::Collections::Generic::IEnumerable_1<TSource>* __get_source() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<TSource>*> __get_source() const;

constexpr void __set_keySelector(::System::Func_2<TSource,TKey>*  value) ;

constexpr ::System::Func_2<TSource,TKey>* __get_keySelector() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TSource,TKey>*> __get_keySelector() const;

constexpr void __set_elementSelector(::System::Func_2<TSource,TElement>*  value) ;

constexpr ::System::Func_2<TSource,TElement>* __get_elementSelector() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TSource,TElement>*> __get_elementSelector() const;

constexpr void __set_comparer(::System::Collections::Generic::IEqualityComparer_1<TKey>*  value) ;

constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>* __get_comparer() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEqualityComparer_1<TKey>*> __get_comparer() const;

static inline ::System::Linq::GroupedEnumerable_3<TSource,TKey,TElement>* New_ctor(::System::Collections::Generic::IEnumerable_1<TSource>*  source, ::System::Func_2<TSource,TKey>*  keySelector, ::System::Func_2<TSource,TElement>*  elementSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<TSource>*  source, ::System::Func_2<TSource,TKey>*  keySelector, ::System::Func_2<TSource,TElement>*  elementSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::System::Linq::IGrouping_2<TKey,TElement>*>* GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

// Ctor Parameters [CppParam { name: "", ty: "GroupedEnumerable_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GroupedEnumerable_3(GroupedEnumerable_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GroupedEnumerable_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GroupedEnumerable_3(GroupedEnumerable_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GroupedEnumerable_3()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::GroupedEnumerable`3
namespace System::Linq {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TSource,::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TElement>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14289))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14289), inst: 5330 })
// CS Name: ::System.Linq::GroupedEnumerable`3<TSource,TKey,TElement>*
class CORDL_TYPE GroupedEnumerable_3<TSource,TKey,TElement> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field source offset 0x10
 __declspec(property(get=__get_source, put=__set_source)) ::System::Collections::Generic::IEnumerable_1<TSource>*  source;

/// @brief Field keySelector offset 0x18
 __declspec(property(get=__get_keySelector, put=__set_keySelector)) ::System::Func_2<TSource,TKey>*  keySelector;

/// @brief Field elementSelector offset 0x20
 __declspec(property(get=__get_elementSelector, put=__set_elementSelector)) ::System::Func_2<TSource,TElement>*  elementSelector;

/// @brief Field comparer offset 0x28
 __declspec(property(get=__get_comparer, put=__set_comparer)) ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Linq::IGrouping_2<TKey,TElement>*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::Linq::IGrouping_2<TKey,TElement>*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

constexpr void __set_source(::System::Collections::Generic::IEnumerable_1<TSource>*  value) ;

constexpr ::System::Collections::Generic::IEnumerable_1<TSource>* __get_source() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<TSource>*> __get_source() const;

constexpr void __set_keySelector(::System::Func_2<TSource,TKey>*  value) ;

constexpr ::System::Func_2<TSource,TKey>* __get_keySelector() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TSource,TKey>*> __get_keySelector() const;

constexpr void __set_elementSelector(::System::Func_2<TSource,TElement>*  value) ;

constexpr ::System::Func_2<TSource,TElement>* __get_elementSelector() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TSource,TElement>*> __get_elementSelector() const;

constexpr void __set_comparer(::System::Collections::Generic::IEqualityComparer_1<TKey>*  value) ;

constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>* __get_comparer() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEqualityComparer_1<TKey>*> __get_comparer() const;

static inline ::System::Linq::GroupedEnumerable_3<TSource,TKey,TElement>* New_ctor(::System::Collections::Generic::IEnumerable_1<TSource>*  source, ::System::Func_2<TSource,TKey>*  keySelector, ::System::Func_2<TSource,TElement>*  elementSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<TSource>*  source, ::System::Func_2<TSource,TKey>*  keySelector, ::System::Func_2<TSource,TElement>*  elementSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::System::Linq::IGrouping_2<TKey,TElement>*>* GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

// Ctor Parameters [CppParam { name: "", ty: "GroupedEnumerable_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GroupedEnumerable_3(GroupedEnumerable_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GroupedEnumerable_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GroupedEnumerable_3(GroupedEnumerable_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GroupedEnumerable_3()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::GroupedEnumerable_3, "System.Linq", "GroupedEnumerable`3");
