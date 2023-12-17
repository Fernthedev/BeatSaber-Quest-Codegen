#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LinqExtensions)
namespace ModestTree {
template<typename T>
class __LinqExtensions____c__8_1;
}
namespace ModestTree {
template<typename T>
class __LinqExtensions___Yield_d__0_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace ModestTree {
template<typename T>
class __LinqExtensions____c__DisplayClass10_0_1;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace System {
class IDisposable;
}
namespace System::Linq {
template<typename TKey,typename TElement>
class IGrouping_2;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace ModestTree {
template<typename T>
class __LinqExtensions___Yield_d__0_1;
}
namespace ModestTree {
template<typename T>
class __LinqExtensions____c__8_1;
}
namespace ModestTree {
template<typename T>
class __LinqExtensions____c__DisplayClass10_0_1;
}
namespace ModestTree {
class LinqExtensions;
}
namespace ModestTree {
template<>
class __LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>;
}
namespace ModestTree {
template<::il2cpp_utils::il2cpp_reference_type T>
class __LinqExtensions___Yield_d__0_1<T>;
}
namespace ModestTree {
template<::il2cpp_utils::il2cpp_reference_type T>
class __LinqExtensions____c__8_1<T>;
}
namespace ModestTree {
template<::il2cpp_utils::il2cpp_reference_type T>
class __LinqExtensions____c__DisplayClass10_0_1<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::ModestTree::__LinqExtensions___Yield_d__0_1);
MARK_GEN_REF_PTR_T(::ModestTree::__LinqExtensions____c__8_1);
MARK_GEN_REF_PTR_T(::ModestTree::__LinqExtensions____c__DisplayClass10_0_1);
MARK_REF_PTR_T(::ModestTree::LinqExtensions);
// Type: ::<Yield>d__0`1
// Type: ::<>c__8`1
// Type: ::<>c__DisplayClass10_0`1
// Type: ModestTree::LinqExtensions
namespace ModestTree {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10613))
// CS Name: ::ModestTree::LinqExtensions*
class CORDL_TYPE LinqExtensions : public ::System::Object {
public:
// Declarations
template<typename T>
using __c__DisplayClass10_0_1 = ::ModestTree::__LinqExtensions____c__DisplayClass10_0_1<T>;

template<typename T>
using __c__8_1 = ::ModestTree::__LinqExtensions____c__8_1<T>;

template<typename T>
using _Yield_d__0_1 = ::ModestTree::__LinqExtensions___Yield_d__0_1<T>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method Yield addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline ::System::Collections::Generic::IEnumerable_1<T>* Yield(T  item) ;

/// @brief Method OnlyOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TSource>
static inline TSource OnlyOrDefault(::System::Collections::Generic::IEnumerable_1<TSource>*  source) ;

/// @brief Method HasAtLeast addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline bool HasAtLeast(::System::Collections::Generic::IEnumerable_1<T>*  enumerable, int32_t  amount) ;

/// @brief Method HasMoreThan addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline bool HasMoreThan(::System::Collections::Generic::IEnumerable_1<T>*  enumerable, int32_t  amount) ;

/// @brief Method HasLessThan addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline bool HasLessThan(::System::Collections::Generic::IEnumerable_1<T>*  enumerable, int32_t  amount) ;

/// @brief Method HasAtMost addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline bool HasAtMost(::System::Collections::Generic::IEnumerable_1<T>*  enumerable, int32_t  amount) ;

/// @brief Method IsEmpty addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline bool IsEmpty(::System::Collections::Generic::List_1<T>*  list) ;

/// @brief Method IsEmpty addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline bool IsEmpty(::System::Collections::Generic::IEnumerable_1<T>*  enumerable) ;

/// @brief Method GetDuplicates addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline ::System::Collections::Generic::IEnumerable_1<T>* GetDuplicates(::System::Collections::Generic::IEnumerable_1<T>*  list) ;

/// @brief Method Except addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline ::System::Collections::Generic::IEnumerable_1<T>* Except(::System::Collections::Generic::IEnumerable_1<T>*  list, T  item) ;

/// @brief Method ContainsItem addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline bool ContainsItem(::System::Collections::Generic::IEnumerable_1<T>*  list, T  value) ;

// Ctor Parameters [CppParam { name: "", ty: "LinqExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LinqExtensions(LinqExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LinqExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LinqExtensions(LinqExtensions const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LinqExtensions()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ModestTree::LinqExtensions, 0x10>, "Size mismatch!");

} // namespace end def ModestTree
// Type: ::<Yield>d__0`1
namespace ModestTree {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10610)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10610), inst: 3121 })
// CS Name: ::LinqExtensions::<Yield>d__0`1<T>*
class CORDL_TYPE __LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field <>1__state offset 0x10
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current offset 0x14
 __declspec(property(get=__get___2__current, put=__set___2__current)) ::UnityEngine::SceneManagement::Scene  __2__current;

/// @brief Field <>l__initialThreadId offset 0x18
 __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field item offset 0x1c
 __declspec(property(get=__get_item, put=__set_item)) ::UnityEngine::SceneManagement::Scene  item;

/// @brief Field <>3__item offset 0x20
 __declspec(property(get=__get___3__item, put=__set___3__item)) ::UnityEngine::SceneManagement::Scene  __3__item;

 __declspec(property(get=System_Collections_Generic_IEnumerator_T__get_Current)) ::UnityEngine::SceneManagement::Scene  System_Collections_Generic_IEnumerator_T__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::SceneManagement::Scene>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::SceneManagement::Scene>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::SceneManagement::Scene>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::SceneManagement::Scene>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___2__current(::UnityEngine::SceneManagement::Scene  value) ;

constexpr ::UnityEngine::SceneManagement::Scene& __get___2__current() ;

constexpr ::UnityEngine::SceneManagement::Scene const& __get___2__current() const;

constexpr void __set___l__initialThreadId(int32_t  value) ;

constexpr int32_t& __get___l__initialThreadId() ;

constexpr int32_t const& __get___l__initialThreadId() const;

constexpr void __set_item(::UnityEngine::SceneManagement::Scene  value) ;

constexpr ::UnityEngine::SceneManagement::Scene& __get_item() ;

constexpr ::UnityEngine::SceneManagement::Scene const& __get_item() const;

constexpr void __set___3__item(::UnityEngine::SceneManagement::Scene  value) ;

constexpr ::UnityEngine::SceneManagement::Scene& __get___3__item() ;

constexpr ::UnityEngine::SceneManagement::Scene const& __get___3__item() const;

static inline ::ModestTree::__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<T>.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::SceneManagement::Scene System_Collections_Generic_IEnumerator_T__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::SceneManagement::Scene>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

// Ctor Parameters [CppParam { name: "", ty: "__LinqExtensions___Yield_d__0_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__LinqExtensions___Yield_d__0_1(__LinqExtensions___Yield_d__0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__LinqExtensions___Yield_d__0_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__LinqExtensions___Yield_d__0_1(__LinqExtensions___Yield_d__0_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __LinqExtensions___Yield_d__0_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def ModestTree
// Type: ::<Yield>d__0`1
namespace ModestTree {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10610), inst: 2 })
// CS Name: ::LinqExtensions::<Yield>d__0`1<T>*
class CORDL_TYPE __LinqExtensions___Yield_d__0_1<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Object)]{};

/// @brief Field <>1__state offset 0x10
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current offset 0x18
 __declspec(property(get=__get___2__current, put=__set___2__current)) T  __2__current;

/// @brief Field <>l__initialThreadId offset 0x20
 __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field item offset 0x28
 __declspec(property(get=__get_item, put=__set_item)) T  item;

/// @brief Field <>3__item offset 0x30
 __declspec(property(get=__get___3__item, put=__set___3__item)) T  __3__item;

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

constexpr void __set_item(T  value) ;

constexpr T& __get_item() ;

constexpr T const& __get_item() const;

constexpr void __set___3__item(T  value) ;

constexpr T& __get___3__item() ;

constexpr T const& __get___3__item() const;

static inline ::ModestTree::__LinqExtensions___Yield_d__0_1<T>* New_ctor(int32_t  __1__state) ;

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

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

// Ctor Parameters [CppParam { name: "", ty: "__LinqExtensions___Yield_d__0_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__LinqExtensions___Yield_d__0_1(__LinqExtensions___Yield_d__0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__LinqExtensions___Yield_d__0_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__LinqExtensions___Yield_d__0_1(__LinqExtensions___Yield_d__0_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __LinqExtensions___Yield_d__0_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def ModestTree
// Type: ::<>c__8`1
namespace ModestTree {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10611), inst: 2 })
// CS Name: ::LinqExtensions::<>c__8`1<T>*
class CORDL_TYPE __LinqExtensions____c__8_1<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::ModestTree::__LinqExtensions____c__8_1<T>*  value) ;

static inline ::ModestTree::__LinqExtensions____c__8_1<T>* getStaticF___9() ;

static inline void setStaticF___9__8_0(::System::Func_2<T,T>*  value) ;

static inline ::System::Func_2<T,T>* getStaticF___9__8_0() ;

static inline void setStaticF___9__8_1(::System::Func_2<::System::Linq::IGrouping_2<T,T>*,bool>*  value) ;

static inline ::System::Func_2<::System::Linq::IGrouping_2<T,T>*,bool>* getStaticF___9__8_1() ;

static inline void setStaticF___9__8_2(::System::Func_2<::System::Linq::IGrouping_2<T,T>*,T>*  value) ;

static inline ::System::Func_2<::System::Linq::IGrouping_2<T,T>*,T>* getStaticF___9__8_2() ;

static inline ::ModestTree::__LinqExtensions____c__8_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <GetDuplicates>b__8_0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline T _GetDuplicates_b__8_0(T  x) ;

/// @brief Method <GetDuplicates>b__8_1 addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool _GetDuplicates_b__8_1(::System::Linq::IGrouping_2<T,T>*  x) ;

/// @brief Method <GetDuplicates>b__8_2 addr 0x0 size 0xffffffffffffffff virtual false final false
inline T _GetDuplicates_b__8_2(::System::Linq::IGrouping_2<T,T>*  x) ;

// Ctor Parameters [CppParam { name: "", ty: "__LinqExtensions____c__8_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__LinqExtensions____c__8_1(__LinqExtensions____c__8_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__LinqExtensions____c__8_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__LinqExtensions____c__8_1(__LinqExtensions____c__8_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __LinqExtensions____c__8_1()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__8_0

// Static field <>9__8_1

// Static field <>9__8_2


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def ModestTree
// Type: ::<>c__DisplayClass10_0`1
namespace ModestTree {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10612))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10612), inst: 2 })
// CS Name: ::LinqExtensions::<>c__DisplayClass10_0`1<T>*
class CORDL_TYPE __LinqExtensions____c__DisplayClass10_0_1<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field value offset 0x10
 __declspec(property(get=__get_value, put=__set_value)) T  value;

constexpr void __set_value(T  value) ;

constexpr T& __get_value() ;

constexpr T const& __get_value() const;

static inline ::ModestTree::__LinqExtensions____c__DisplayClass10_0_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <ContainsItem>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool _ContainsItem_b__0(T  x) ;

// Ctor Parameters [CppParam { name: "", ty: "__LinqExtensions____c__DisplayClass10_0_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__LinqExtensions____c__DisplayClass10_0_1(__LinqExtensions____c__DisplayClass10_0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__LinqExtensions____c__DisplayClass10_0_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__LinqExtensions____c__DisplayClass10_0_1(__LinqExtensions____c__DisplayClass10_0_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __LinqExtensions____c__DisplayClass10_0_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def ModestTree
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::ModestTree::__LinqExtensions___Yield_d__0_1, "ModestTree", "LinqExtensions/<Yield>d__0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::ModestTree::__LinqExtensions____c__8_1, "ModestTree", "LinqExtensions/<>c__8`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::ModestTree::__LinqExtensions____c__DisplayClass10_0_1, "ModestTree", "LinqExtensions/<>c__DisplayClass10_0`1");
NEED_NO_BOX(::ModestTree::LinqExtensions);
DEFINE_IL2CPP_ARG_TYPE(::ModestTree::LinqExtensions*, "ModestTree", "LinqExtensions");
