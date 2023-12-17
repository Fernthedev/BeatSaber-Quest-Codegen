#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OrderedEnumerable_1)
namespace System::Collections {
class IEnumerable;
}
namespace System::Linq {
template<typename TElement>
class IOrderedEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Linq {
template<typename TElement>
class __OrderedEnumerable_1___GetEnumerator_d__1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Linq {
template<typename TElement>
class EnumerableSorter_1;
}
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
namespace System {
class Object;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace UnityEngine::ResourceManagement::Diagnostics {
struct DiagnosticEvent;
}
namespace UnityEngine::TextCore::LowLevel {
struct GlyphPairAdjustmentRecord;
}
namespace Zenject {
struct __DisposableManager__DisposableInfo;
}
namespace Zenject {
struct __PoolableManager__PoolableInfo;
}
namespace System {
class IDisposable;
}
namespace System::Linq {
template<typename TElement>
struct Buffer_1;
}
// Forward declare root types
namespace System::Linq {
template<typename TElement>
class OrderedEnumerable_1;
}
namespace System::Linq {
template<typename TElement>
class __OrderedEnumerable_1___GetEnumerator_d__1;
}
namespace System::Linq {
template<::il2cpp_utils::il2cpp_reference_type TValue_cordlgen_0>
class OrderedEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>;
}
namespace System::Linq {
template<>
class OrderedEnumerable_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>;
}
namespace System::Linq {
template<>
class OrderedEnumerable_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>;
}
namespace System::Linq {
template<>
class OrderedEnumerable_1<::Zenject::__DisposableManager__DisposableInfo>;
}
namespace System::Linq {
template<>
class OrderedEnumerable_1<::Zenject::__PoolableManager__PoolableInfo>;
}
namespace System::Linq {
template<::il2cpp_utils::il2cpp_reference_type TElement>
class OrderedEnumerable_1<TElement>;
}
namespace System::Linq {
template<>
class OrderedEnumerable_1<float_t>;
}
namespace System::Linq {
template<>
class OrderedEnumerable_1<int32_t>;
}
namespace System::Linq {
template<::il2cpp_utils::il2cpp_reference_type TValue_cordlgen_0>
class __OrderedEnumerable_1___GetEnumerator_d__1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>;
}
namespace System::Linq {
template<>
class __OrderedEnumerable_1___GetEnumerator_d__1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>;
}
namespace System::Linq {
template<>
class __OrderedEnumerable_1___GetEnumerator_d__1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>;
}
namespace System::Linq {
template<>
class __OrderedEnumerable_1___GetEnumerator_d__1<::Zenject::__DisposableManager__DisposableInfo>;
}
namespace System::Linq {
template<>
class __OrderedEnumerable_1___GetEnumerator_d__1<::Zenject::__PoolableManager__PoolableInfo>;
}
namespace System::Linq {
template<::il2cpp_utils::il2cpp_reference_type TElement>
class __OrderedEnumerable_1___GetEnumerator_d__1<TElement>;
}
namespace System::Linq {
template<>
class __OrderedEnumerable_1___GetEnumerator_d__1<float_t>;
}
namespace System::Linq {
template<>
class __OrderedEnumerable_1___GetEnumerator_d__1<int32_t>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Linq::OrderedEnumerable_1);
MARK_GEN_REF_PTR_T(::System::Linq::__OrderedEnumerable_1___GetEnumerator_d__1);
// Type: ::<GetEnumerator>d__1
// Type: System.Linq::OrderedEnumerable`1
// Type: ::<GetEnumerator>d__1
namespace System::Linq {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TValue_cordlgen_0>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14290)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14290), inst: 6424 })
// CS Name: ::OrderedEnumerable`1::<GetEnumerator>d__1<TElement>*
class CORDL_TYPE __OrderedEnumerable_1___GetEnumerator_d__1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::System::Object)]{};

/// @brief Field <>1__state offset 0x10
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current offset 0x18
 __declspec(property(get=__get___2__current, put=__set___2__current)) ::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>  __2__current;

/// @brief Field <>4__this offset 0x28
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::System::Linq::OrderedEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>*  __4__this;

/// @brief Field <buffer>5__2 offset 0x30
 __declspec(property(get=__get__buffer_5__2, put=__set__buffer_5__2)) ::System::Linq::Buffer_1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>  _buffer_5__2;

/// @brief Field <map>5__3 offset 0x40
 __declspec(property(get=__get__map_5__3, put=__set__map_5__3)) ::ArrayW<int32_t,::Array<int32_t>*>  _map_5__3;

/// @brief Field <i>5__4 offset 0x48
 __declspec(property(get=__get__i_5__4, put=__set__i_5__4)) int32_t  _i_5__4;

 __declspec(property(get=System_Collections_Generic_IEnumerator_TElement__get_Current)) ::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>  System_Collections_Generic_IEnumerator_TElement__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___2__current(::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>  value) ;

constexpr ::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>& __get___2__current() ;

constexpr ::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0> const& __get___2__current() const;

constexpr void __set___4__this(::System::Linq::OrderedEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>*  value) ;

constexpr ::System::Linq::OrderedEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::System::Linq::OrderedEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>*> __get___4__this() const;

constexpr void __set__buffer_5__2(::System::Linq::Buffer_1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>  value) ;

constexpr ::System::Linq::Buffer_1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>& __get__buffer_5__2() ;

constexpr ::System::Linq::Buffer_1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>> const& __get__buffer_5__2() const;

constexpr void __set__map_5__3(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get__map_5__3() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get__map_5__3() const;

constexpr void __set__i_5__4(int32_t  value) ;

constexpr int32_t& __get__i_5__4() ;

constexpr int32_t const& __get__i_5__4() const;

static inline ::System::Linq::__OrderedEnumerable_1___GetEnumerator_d__1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<TElement>.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0> System_Collections_Generic_IEnumerator_TElement__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "", ty: "__OrderedEnumerable_1___GetEnumerator_d__1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__OrderedEnumerable_1___GetEnumerator_d__1(__OrderedEnumerable_1___GetEnumerator_d__1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__OrderedEnumerable_1___GetEnumerator_d__1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__OrderedEnumerable_1___GetEnumerator_d__1(__OrderedEnumerable_1___GetEnumerator_d__1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __OrderedEnumerable_1___GetEnumerator_d__1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: ::<GetEnumerator>d__1
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14290)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14290), inst: 6152 })
// CS Name: ::OrderedEnumerable`1::<GetEnumerator>d__1<TElement>*
class CORDL_TYPE __OrderedEnumerable_1___GetEnumerator_d__1<::Zenject::__PoolableManager__PoolableInfo> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::System::Object)]{};

/// @brief Field <>1__state offset 0x10
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current offset 0x18
 __declspec(property(get=__get___2__current, put=__set___2__current)) ::Zenject::__PoolableManager__PoolableInfo  __2__current;

/// @brief Field <>4__this offset 0x28
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::System::Linq::OrderedEnumerable_1<::Zenject::__PoolableManager__PoolableInfo>*  __4__this;

/// @brief Field <buffer>5__2 offset 0x30
 __declspec(property(get=__get__buffer_5__2, put=__set__buffer_5__2)) ::System::Linq::Buffer_1<::Zenject::__PoolableManager__PoolableInfo>  _buffer_5__2;

/// @brief Field <map>5__3 offset 0x40
 __declspec(property(get=__get__map_5__3, put=__set__map_5__3)) ::ArrayW<int32_t,::Array<int32_t>*>  _map_5__3;

/// @brief Field <i>5__4 offset 0x48
 __declspec(property(get=__get__i_5__4, put=__set__i_5__4)) int32_t  _i_5__4;

 __declspec(property(get=System_Collections_Generic_IEnumerator_TElement__get_Current)) ::Zenject::__PoolableManager__PoolableInfo  System_Collections_Generic_IEnumerator_TElement__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Zenject::__PoolableManager__PoolableInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Zenject::__PoolableManager__PoolableInfo>*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___2__current(::Zenject::__PoolableManager__PoolableInfo  value) ;

constexpr ::Zenject::__PoolableManager__PoolableInfo& __get___2__current() ;

constexpr ::Zenject::__PoolableManager__PoolableInfo const& __get___2__current() const;

constexpr void __set___4__this(::System::Linq::OrderedEnumerable_1<::Zenject::__PoolableManager__PoolableInfo>*  value) ;

constexpr ::System::Linq::OrderedEnumerable_1<::Zenject::__PoolableManager__PoolableInfo>* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::System::Linq::OrderedEnumerable_1<::Zenject::__PoolableManager__PoolableInfo>*> __get___4__this() const;

constexpr void __set__buffer_5__2(::System::Linq::Buffer_1<::Zenject::__PoolableManager__PoolableInfo>  value) ;

constexpr ::System::Linq::Buffer_1<::Zenject::__PoolableManager__PoolableInfo>& __get__buffer_5__2() ;

constexpr ::System::Linq::Buffer_1<::Zenject::__PoolableManager__PoolableInfo> const& __get__buffer_5__2() const;

constexpr void __set__map_5__3(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get__map_5__3() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get__map_5__3() const;

constexpr void __set__i_5__4(int32_t  value) ;

constexpr int32_t& __get__i_5__4() ;

constexpr int32_t const& __get__i_5__4() const;

static inline ::System::Linq::__OrderedEnumerable_1___GetEnumerator_d__1<::Zenject::__PoolableManager__PoolableInfo>* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<TElement>.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::Zenject::__PoolableManager__PoolableInfo System_Collections_Generic_IEnumerator_TElement__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "", ty: "__OrderedEnumerable_1___GetEnumerator_d__1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__OrderedEnumerable_1___GetEnumerator_d__1(__OrderedEnumerable_1___GetEnumerator_d__1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__OrderedEnumerable_1___GetEnumerator_d__1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__OrderedEnumerable_1___GetEnumerator_d__1(__OrderedEnumerable_1___GetEnumerator_d__1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __OrderedEnumerable_1___GetEnumerator_d__1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: ::<GetEnumerator>d__1
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14290))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14290), inst: 4356 })
// CS Name: ::OrderedEnumerable`1::<GetEnumerator>d__1<TElement>*
class CORDL_TYPE __OrderedEnumerable_1___GetEnumerator_d__1<::Zenject::__DisposableManager__DisposableInfo> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::System::Object)]{};

/// @brief Field <>1__state offset 0x10
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current offset 0x18
 __declspec(property(get=__get___2__current, put=__set___2__current)) ::Zenject::__DisposableManager__DisposableInfo  __2__current;

/// @brief Field <>4__this offset 0x28
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::System::Linq::OrderedEnumerable_1<::Zenject::__DisposableManager__DisposableInfo>*  __4__this;

/// @brief Field <buffer>5__2 offset 0x30
 __declspec(property(get=__get__buffer_5__2, put=__set__buffer_5__2)) ::System::Linq::Buffer_1<::Zenject::__DisposableManager__DisposableInfo>  _buffer_5__2;

/// @brief Field <map>5__3 offset 0x40
 __declspec(property(get=__get__map_5__3, put=__set__map_5__3)) ::ArrayW<int32_t,::Array<int32_t>*>  _map_5__3;

/// @brief Field <i>5__4 offset 0x48
 __declspec(property(get=__get__i_5__4, put=__set__i_5__4)) int32_t  _i_5__4;

 __declspec(property(get=System_Collections_Generic_IEnumerator_TElement__get_Current)) ::Zenject::__DisposableManager__DisposableInfo  System_Collections_Generic_IEnumerator_TElement__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Zenject::__DisposableManager__DisposableInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Zenject::__DisposableManager__DisposableInfo>*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___2__current(::Zenject::__DisposableManager__DisposableInfo  value) ;

constexpr ::Zenject::__DisposableManager__DisposableInfo& __get___2__current() ;

constexpr ::Zenject::__DisposableManager__DisposableInfo const& __get___2__current() const;

constexpr void __set___4__this(::System::Linq::OrderedEnumerable_1<::Zenject::__DisposableManager__DisposableInfo>*  value) ;

constexpr ::System::Linq::OrderedEnumerable_1<::Zenject::__DisposableManager__DisposableInfo>* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::System::Linq::OrderedEnumerable_1<::Zenject::__DisposableManager__DisposableInfo>*> __get___4__this() const;

constexpr void __set__buffer_5__2(::System::Linq::Buffer_1<::Zenject::__DisposableManager__DisposableInfo>  value) ;

constexpr ::System::Linq::Buffer_1<::Zenject::__DisposableManager__DisposableInfo>& __get__buffer_5__2() ;

constexpr ::System::Linq::Buffer_1<::Zenject::__DisposableManager__DisposableInfo> const& __get__buffer_5__2() const;

constexpr void __set__map_5__3(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get__map_5__3() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get__map_5__3() const;

constexpr void __set__i_5__4(int32_t  value) ;

constexpr int32_t& __get__i_5__4() ;

constexpr int32_t const& __get__i_5__4() const;

static inline ::System::Linq::__OrderedEnumerable_1___GetEnumerator_d__1<::Zenject::__DisposableManager__DisposableInfo>* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<TElement>.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::Zenject::__DisposableManager__DisposableInfo System_Collections_Generic_IEnumerator_TElement__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "", ty: "__OrderedEnumerable_1___GetEnumerator_d__1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__OrderedEnumerable_1___GetEnumerator_d__1(__OrderedEnumerable_1___GetEnumerator_d__1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__OrderedEnumerable_1___GetEnumerator_d__1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__OrderedEnumerable_1___GetEnumerator_d__1(__OrderedEnumerable_1___GetEnumerator_d__1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __OrderedEnumerable_1___GetEnumerator_d__1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: ::<GetEnumerator>d__1
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14290))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14290), inst: 3290 })
// CS Name: ::OrderedEnumerable`1::<GetEnumerator>d__1<TElement>*
class CORDL_TYPE __OrderedEnumerable_1___GetEnumerator_d__1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x68};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x68 - sizeof(::System::Object)]{};

/// @brief Field <>1__state offset 0x10
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current offset 0x14
 __declspec(property(get=__get___2__current, put=__set___2__current)) ::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord  __2__current;

/// @brief Field <>4__this offset 0x40
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::System::Linq::OrderedEnumerable_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*  __4__this;

/// @brief Field <buffer>5__2 offset 0x48
 __declspec(property(get=__get__buffer_5__2, put=__set__buffer_5__2)) ::System::Linq::Buffer_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>  _buffer_5__2;

/// @brief Field <map>5__3 offset 0x58
 __declspec(property(get=__get__map_5__3, put=__set__map_5__3)) ::ArrayW<int32_t,::Array<int32_t>*>  _map_5__3;

/// @brief Field <i>5__4 offset 0x60
 __declspec(property(get=__get__i_5__4, put=__set__i_5__4)) int32_t  _i_5__4;

 __declspec(property(get=System_Collections_Generic_IEnumerator_TElement__get_Current)) ::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord  System_Collections_Generic_IEnumerator_TElement__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___2__current(::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord  value) ;

constexpr ::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord& __get___2__current() ;

constexpr ::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord const& __get___2__current() const;

constexpr void __set___4__this(::System::Linq::OrderedEnumerable_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*  value) ;

constexpr ::System::Linq::OrderedEnumerable_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::System::Linq::OrderedEnumerable_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*> __get___4__this() const;

constexpr void __set__buffer_5__2(::System::Linq::Buffer_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>  value) ;

constexpr ::System::Linq::Buffer_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>& __get__buffer_5__2() ;

constexpr ::System::Linq::Buffer_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> const& __get__buffer_5__2() const;

constexpr void __set__map_5__3(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get__map_5__3() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get__map_5__3() const;

constexpr void __set__i_5__4(int32_t  value) ;

constexpr int32_t& __get__i_5__4() ;

constexpr int32_t const& __get__i_5__4() const;

static inline ::System::Linq::__OrderedEnumerable_1___GetEnumerator_d__1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<TElement>.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord System_Collections_Generic_IEnumerator_TElement__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "", ty: "__OrderedEnumerable_1___GetEnumerator_d__1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__OrderedEnumerable_1___GetEnumerator_d__1(__OrderedEnumerable_1___GetEnumerator_d__1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__OrderedEnumerable_1___GetEnumerator_d__1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__OrderedEnumerable_1___GetEnumerator_d__1(__OrderedEnumerable_1___GetEnumerator_d__1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __OrderedEnumerable_1___GetEnumerator_d__1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: ::<GetEnumerator>d__1
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14290)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14290), inst: 391 })
// CS Name: ::OrderedEnumerable`1::<GetEnumerator>d__1<TElement>*
class CORDL_TYPE __OrderedEnumerable_1___GetEnumerator_d__1<float_t> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::System::Object)]{};

/// @brief Field <>1__state offset 0x10
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current offset 0x14
 __declspec(property(get=__get___2__current, put=__set___2__current)) float_t  __2__current;

/// @brief Field <>4__this offset 0x18
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::System::Linq::OrderedEnumerable_1<float_t>*  __4__this;

/// @brief Field <buffer>5__2 offset 0x20
 __declspec(property(get=__get__buffer_5__2, put=__set__buffer_5__2)) ::System::Linq::Buffer_1<float_t>  _buffer_5__2;

/// @brief Field <map>5__3 offset 0x30
 __declspec(property(get=__get__map_5__3, put=__set__map_5__3)) ::ArrayW<int32_t,::Array<int32_t>*>  _map_5__3;

/// @brief Field <i>5__4 offset 0x38
 __declspec(property(get=__get__i_5__4, put=__set__i_5__4)) int32_t  _i_5__4;

 __declspec(property(get=System_Collections_Generic_IEnumerator_TElement__get_Current)) float_t  System_Collections_Generic_IEnumerator_TElement__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<float_t>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<float_t>*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___2__current(float_t  value) ;

constexpr float_t& __get___2__current() ;

constexpr float_t const& __get___2__current() const;

constexpr void __set___4__this(::System::Linq::OrderedEnumerable_1<float_t>*  value) ;

constexpr ::System::Linq::OrderedEnumerable_1<float_t>* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::System::Linq::OrderedEnumerable_1<float_t>*> __get___4__this() const;

constexpr void __set__buffer_5__2(::System::Linq::Buffer_1<float_t>  value) ;

constexpr ::System::Linq::Buffer_1<float_t>& __get__buffer_5__2() ;

constexpr ::System::Linq::Buffer_1<float_t> const& __get__buffer_5__2() const;

constexpr void __set__map_5__3(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get__map_5__3() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get__map_5__3() const;

constexpr void __set__i_5__4(int32_t  value) ;

constexpr int32_t& __get__i_5__4() ;

constexpr int32_t const& __get__i_5__4() const;

static inline ::System::Linq::__OrderedEnumerable_1___GetEnumerator_d__1<float_t>* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<TElement>.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline float_t System_Collections_Generic_IEnumerator_TElement__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "", ty: "__OrderedEnumerable_1___GetEnumerator_d__1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__OrderedEnumerable_1___GetEnumerator_d__1(__OrderedEnumerable_1___GetEnumerator_d__1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__OrderedEnumerable_1___GetEnumerator_d__1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__OrderedEnumerable_1___GetEnumerator_d__1(__OrderedEnumerable_1___GetEnumerator_d__1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __OrderedEnumerable_1___GetEnumerator_d__1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: ::<GetEnumerator>d__1
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14290)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14290), inst: 302 })
// CS Name: ::OrderedEnumerable`1::<GetEnumerator>d__1<TElement>*
class CORDL_TYPE __OrderedEnumerable_1___GetEnumerator_d__1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x70};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x70 - sizeof(::System::Object)]{};

/// @brief Field <>1__state offset 0x10
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current offset 0x18
 __declspec(property(get=__get___2__current, put=__set___2__current)) ::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent  __2__current;

/// @brief Field <>4__this offset 0x48
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::System::Linq::OrderedEnumerable_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*  __4__this;

/// @brief Field <buffer>5__2 offset 0x50
 __declspec(property(get=__get__buffer_5__2, put=__set__buffer_5__2)) ::System::Linq::Buffer_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>  _buffer_5__2;

/// @brief Field <map>5__3 offset 0x60
 __declspec(property(get=__get__map_5__3, put=__set__map_5__3)) ::ArrayW<int32_t,::Array<int32_t>*>  _map_5__3;

/// @brief Field <i>5__4 offset 0x68
 __declspec(property(get=__get__i_5__4, put=__set__i_5__4)) int32_t  _i_5__4;

 __declspec(property(get=System_Collections_Generic_IEnumerator_TElement__get_Current)) ::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent  System_Collections_Generic_IEnumerator_TElement__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___2__current(::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent  value) ;

constexpr ::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent& __get___2__current() ;

constexpr ::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent const& __get___2__current() const;

constexpr void __set___4__this(::System::Linq::OrderedEnumerable_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*  value) ;

constexpr ::System::Linq::OrderedEnumerable_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::System::Linq::OrderedEnumerable_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*> __get___4__this() const;

constexpr void __set__buffer_5__2(::System::Linq::Buffer_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>  value) ;

constexpr ::System::Linq::Buffer_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>& __get__buffer_5__2() ;

constexpr ::System::Linq::Buffer_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> const& __get__buffer_5__2() const;

constexpr void __set__map_5__3(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get__map_5__3() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get__map_5__3() const;

constexpr void __set__i_5__4(int32_t  value) ;

constexpr int32_t& __get__i_5__4() ;

constexpr int32_t const& __get__i_5__4() const;

static inline ::System::Linq::__OrderedEnumerable_1___GetEnumerator_d__1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<TElement>.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent System_Collections_Generic_IEnumerator_TElement__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "", ty: "__OrderedEnumerable_1___GetEnumerator_d__1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__OrderedEnumerable_1___GetEnumerator_d__1(__OrderedEnumerable_1___GetEnumerator_d__1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__OrderedEnumerable_1___GetEnumerator_d__1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__OrderedEnumerable_1___GetEnumerator_d__1(__OrderedEnumerable_1___GetEnumerator_d__1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __OrderedEnumerable_1___GetEnumerator_d__1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: ::<GetEnumerator>d__1
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14290))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14290), inst: 98 })
// CS Name: ::OrderedEnumerable`1::<GetEnumerator>d__1<TElement>*
class CORDL_TYPE __OrderedEnumerable_1___GetEnumerator_d__1<int32_t> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::System::Object)]{};

/// @brief Field <>1__state offset 0x10
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current offset 0x14
 __declspec(property(get=__get___2__current, put=__set___2__current)) int32_t  __2__current;

/// @brief Field <>4__this offset 0x18
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::System::Linq::OrderedEnumerable_1<int32_t>*  __4__this;

/// @brief Field <buffer>5__2 offset 0x20
 __declspec(property(get=__get__buffer_5__2, put=__set__buffer_5__2)) ::System::Linq::Buffer_1<int32_t>  _buffer_5__2;

/// @brief Field <map>5__3 offset 0x30
 __declspec(property(get=__get__map_5__3, put=__set__map_5__3)) ::ArrayW<int32_t,::Array<int32_t>*>  _map_5__3;

/// @brief Field <i>5__4 offset 0x38
 __declspec(property(get=__get__i_5__4, put=__set__i_5__4)) int32_t  _i_5__4;

 __declspec(property(get=System_Collections_Generic_IEnumerator_TElement__get_Current)) int32_t  System_Collections_Generic_IEnumerator_TElement__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<int32_t>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<int32_t>*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___2__current(int32_t  value) ;

constexpr int32_t& __get___2__current() ;

constexpr int32_t const& __get___2__current() const;

constexpr void __set___4__this(::System::Linq::OrderedEnumerable_1<int32_t>*  value) ;

constexpr ::System::Linq::OrderedEnumerable_1<int32_t>* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::System::Linq::OrderedEnumerable_1<int32_t>*> __get___4__this() const;

constexpr void __set__buffer_5__2(::System::Linq::Buffer_1<int32_t>  value) ;

constexpr ::System::Linq::Buffer_1<int32_t>& __get__buffer_5__2() ;

constexpr ::System::Linq::Buffer_1<int32_t> const& __get__buffer_5__2() const;

constexpr void __set__map_5__3(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get__map_5__3() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get__map_5__3() const;

constexpr void __set__i_5__4(int32_t  value) ;

constexpr int32_t& __get__i_5__4() ;

constexpr int32_t const& __get__i_5__4() const;

static inline ::System::Linq::__OrderedEnumerable_1___GetEnumerator_d__1<int32_t>* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<TElement>.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_Collections_Generic_IEnumerator_TElement__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "", ty: "__OrderedEnumerable_1___GetEnumerator_d__1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__OrderedEnumerable_1___GetEnumerator_d__1(__OrderedEnumerable_1___GetEnumerator_d__1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__OrderedEnumerable_1___GetEnumerator_d__1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__OrderedEnumerable_1___GetEnumerator_d__1(__OrderedEnumerable_1___GetEnumerator_d__1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __OrderedEnumerable_1___GetEnumerator_d__1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: ::<GetEnumerator>d__1
namespace System::Linq {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TElement>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14290)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14290), inst: 2 })
// CS Name: ::OrderedEnumerable`1::<GetEnumerator>d__1<TElement>*
class CORDL_TYPE __OrderedEnumerable_1___GetEnumerator_d__1<TElement> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::System::Object)]{};

/// @brief Field <>1__state offset 0x10
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current offset 0x18
 __declspec(property(get=__get___2__current, put=__set___2__current)) TElement  __2__current;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::System::Linq::OrderedEnumerable_1<TElement>*  __4__this;

/// @brief Field <buffer>5__2 offset 0x28
 __declspec(property(get=__get__buffer_5__2, put=__set__buffer_5__2)) ::System::Linq::Buffer_1<TElement>  _buffer_5__2;

/// @brief Field <map>5__3 offset 0x38
 __declspec(property(get=__get__map_5__3, put=__set__map_5__3)) ::ArrayW<int32_t,::Array<int32_t>*>  _map_5__3;

/// @brief Field <i>5__4 offset 0x40
 __declspec(property(get=__get__i_5__4, put=__set__i_5__4)) int32_t  _i_5__4;

 __declspec(property(get=System_Collections_Generic_IEnumerator_TElement__get_Current)) TElement  System_Collections_Generic_IEnumerator_TElement__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TElement>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<TElement>*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___2__current(TElement  value) ;

constexpr TElement& __get___2__current() ;

constexpr TElement const& __get___2__current() const;

constexpr void __set___4__this(::System::Linq::OrderedEnumerable_1<TElement>*  value) ;

constexpr ::System::Linq::OrderedEnumerable_1<TElement>* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::System::Linq::OrderedEnumerable_1<TElement>*> __get___4__this() const;

constexpr void __set__buffer_5__2(::System::Linq::Buffer_1<TElement>  value) ;

constexpr ::System::Linq::Buffer_1<TElement>& __get__buffer_5__2() ;

constexpr ::System::Linq::Buffer_1<TElement> const& __get__buffer_5__2() const;

constexpr void __set__map_5__3(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get__map_5__3() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get__map_5__3() const;

constexpr void __set__i_5__4(int32_t  value) ;

constexpr int32_t& __get__i_5__4() ;

constexpr int32_t const& __get__i_5__4() const;

static inline ::System::Linq::__OrderedEnumerable_1___GetEnumerator_d__1<TElement>* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<TElement>.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline TElement System_Collections_Generic_IEnumerator_TElement__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "", ty: "__OrderedEnumerable_1___GetEnumerator_d__1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__OrderedEnumerable_1___GetEnumerator_d__1(__OrderedEnumerable_1___GetEnumerator_d__1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__OrderedEnumerable_1___GetEnumerator_d__1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__OrderedEnumerable_1___GetEnumerator_d__1(__OrderedEnumerable_1___GetEnumerator_d__1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __OrderedEnumerable_1___GetEnumerator_d__1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::OrderedEnumerable`1
namespace System::Linq {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TValue_cordlgen_0>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14291)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14291), inst: 6424 })
// CS Name: ::System.Linq::OrderedEnumerable`1<TElement>*
class CORDL_TYPE OrderedEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>> : public ::System::Object {
public:
// Declarations
using _GetEnumerator_d__1 = ::System::Linq::__OrderedEnumerable_1___GetEnumerator_d__1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field source offset 0x10
 __declspec(property(get=__get_source, put=__set_source)) ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>*  source;

/// @brief Convert operator to "::System::Linq::IOrderedEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>"
constexpr operator  ::System::Linq::IOrderedEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

constexpr void __set_source(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>*  value) ;

constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>* __get_source() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>*> __get_source() const;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>* GetEnumerator() ;

/// @brief Method GetEnumerableSorter addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Linq::EnumerableSorter_1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>* GetEnumerableSorter(::System::Linq::EnumerableSorter_1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>*  next) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable addr 0x0 size 0xffffffffffffffff virtual true final true
template<typename TKey>
inline ::System::Linq::IOrderedEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>* System_Linq_IOrderedEnumerable_TElement__CreateOrderedEnumerable(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>,TKey>*  keySelector, ::System::Collections::Generic::IComparer_1<TKey>*  comparer, bool  descending) ;

static inline ::System::Linq::OrderedEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OrderedEnumerable_1(OrderedEnumerable_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OrderedEnumerable_1(OrderedEnumerable_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OrderedEnumerable_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::OrderedEnumerable`1
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14291))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14291), inst: 6152 })
// CS Name: ::System.Linq::OrderedEnumerable`1<TElement>*
class CORDL_TYPE OrderedEnumerable_1<::Zenject::__PoolableManager__PoolableInfo> : public ::System::Object {
public:
// Declarations
using _GetEnumerator_d__1 = ::System::Linq::__OrderedEnumerable_1___GetEnumerator_d__1<::Zenject::__PoolableManager__PoolableInfo>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field source offset 0x10
 __declspec(property(get=__get_source, put=__set_source)) ::System::Collections::Generic::IEnumerable_1<::Zenject::__PoolableManager__PoolableInfo>*  source;

/// @brief Convert operator to "::System::Linq::IOrderedEnumerable_1<::Zenject::__PoolableManager__PoolableInfo>"
constexpr operator  ::System::Linq::IOrderedEnumerable_1<::Zenject::__PoolableManager__PoolableInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Zenject::__PoolableManager__PoolableInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Zenject::__PoolableManager__PoolableInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

constexpr void __set_source(::System::Collections::Generic::IEnumerable_1<::Zenject::__PoolableManager__PoolableInfo>*  value) ;

constexpr ::System::Collections::Generic::IEnumerable_1<::Zenject::__PoolableManager__PoolableInfo>* __get_source() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::Zenject::__PoolableManager__PoolableInfo>*> __get_source() const;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::Zenject::__PoolableManager__PoolableInfo>* GetEnumerator() ;

/// @brief Method GetEnumerableSorter addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Linq::EnumerableSorter_1<::Zenject::__PoolableManager__PoolableInfo>* GetEnumerableSorter(::System::Linq::EnumerableSorter_1<::Zenject::__PoolableManager__PoolableInfo>*  next) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable addr 0x0 size 0xffffffffffffffff virtual true final true
template<typename TKey>
inline ::System::Linq::IOrderedEnumerable_1<::Zenject::__PoolableManager__PoolableInfo>* System_Linq_IOrderedEnumerable_TElement__CreateOrderedEnumerable(::System::Func_2<::Zenject::__PoolableManager__PoolableInfo,TKey>*  keySelector, ::System::Collections::Generic::IComparer_1<TKey>*  comparer, bool  descending) ;

static inline ::System::Linq::OrderedEnumerable_1<::Zenject::__PoolableManager__PoolableInfo>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OrderedEnumerable_1(OrderedEnumerable_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OrderedEnumerable_1(OrderedEnumerable_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OrderedEnumerable_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::OrderedEnumerable`1
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14291)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14291), inst: 4356 })
// CS Name: ::System.Linq::OrderedEnumerable`1<TElement>*
class CORDL_TYPE OrderedEnumerable_1<::Zenject::__DisposableManager__DisposableInfo> : public ::System::Object {
public:
// Declarations
using _GetEnumerator_d__1 = ::System::Linq::__OrderedEnumerable_1___GetEnumerator_d__1<::Zenject::__DisposableManager__DisposableInfo>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field source offset 0x10
 __declspec(property(get=__get_source, put=__set_source)) ::System::Collections::Generic::IEnumerable_1<::Zenject::__DisposableManager__DisposableInfo>*  source;

/// @brief Convert operator to "::System::Linq::IOrderedEnumerable_1<::Zenject::__DisposableManager__DisposableInfo>"
constexpr operator  ::System::Linq::IOrderedEnumerable_1<::Zenject::__DisposableManager__DisposableInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Zenject::__DisposableManager__DisposableInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Zenject::__DisposableManager__DisposableInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

constexpr void __set_source(::System::Collections::Generic::IEnumerable_1<::Zenject::__DisposableManager__DisposableInfo>*  value) ;

constexpr ::System::Collections::Generic::IEnumerable_1<::Zenject::__DisposableManager__DisposableInfo>* __get_source() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::Zenject::__DisposableManager__DisposableInfo>*> __get_source() const;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::Zenject::__DisposableManager__DisposableInfo>* GetEnumerator() ;

/// @brief Method GetEnumerableSorter addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Linq::EnumerableSorter_1<::Zenject::__DisposableManager__DisposableInfo>* GetEnumerableSorter(::System::Linq::EnumerableSorter_1<::Zenject::__DisposableManager__DisposableInfo>*  next) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable addr 0x0 size 0xffffffffffffffff virtual true final true
template<typename TKey>
inline ::System::Linq::IOrderedEnumerable_1<::Zenject::__DisposableManager__DisposableInfo>* System_Linq_IOrderedEnumerable_TElement__CreateOrderedEnumerable(::System::Func_2<::Zenject::__DisposableManager__DisposableInfo,TKey>*  keySelector, ::System::Collections::Generic::IComparer_1<TKey>*  comparer, bool  descending) ;

static inline ::System::Linq::OrderedEnumerable_1<::Zenject::__DisposableManager__DisposableInfo>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OrderedEnumerable_1(OrderedEnumerable_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OrderedEnumerable_1(OrderedEnumerable_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OrderedEnumerable_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::OrderedEnumerable`1
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14291)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14291), inst: 3290 })
// CS Name: ::System.Linq::OrderedEnumerable`1<TElement>*
class CORDL_TYPE OrderedEnumerable_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> : public ::System::Object {
public:
// Declarations
using _GetEnumerator_d__1 = ::System::Linq::__OrderedEnumerable_1___GetEnumerator_d__1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field source offset 0x10
 __declspec(property(get=__get_source, put=__set_source)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*  source;

/// @brief Convert operator to "::System::Linq::IOrderedEnumerable_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>"
constexpr operator  ::System::Linq::IOrderedEnumerable_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

constexpr void __set_source(::System::Collections::Generic::IEnumerable_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*  value) ;

constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>* __get_source() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*> __get_source() const;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>* GetEnumerator() ;

/// @brief Method GetEnumerableSorter addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Linq::EnumerableSorter_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>* GetEnumerableSorter(::System::Linq::EnumerableSorter_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*  next) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable addr 0x0 size 0xffffffffffffffff virtual true final true
template<typename TKey>
inline ::System::Linq::IOrderedEnumerable_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>* System_Linq_IOrderedEnumerable_TElement__CreateOrderedEnumerable(::System::Func_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,TKey>*  keySelector, ::System::Collections::Generic::IComparer_1<TKey>*  comparer, bool  descending) ;

static inline ::System::Linq::OrderedEnumerable_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OrderedEnumerable_1(OrderedEnumerable_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OrderedEnumerable_1(OrderedEnumerable_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OrderedEnumerable_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::OrderedEnumerable`1
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14291)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14291), inst: 391 })
// CS Name: ::System.Linq::OrderedEnumerable`1<TElement>*
class CORDL_TYPE OrderedEnumerable_1<float_t> : public ::System::Object {
public:
// Declarations
using _GetEnumerator_d__1 = ::System::Linq::__OrderedEnumerable_1___GetEnumerator_d__1<float_t>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field source offset 0x10
 __declspec(property(get=__get_source, put=__set_source)) ::System::Collections::Generic::IEnumerable_1<float_t>*  source;

/// @brief Convert operator to "::System::Linq::IOrderedEnumerable_1<float_t>"
constexpr operator  ::System::Linq::IOrderedEnumerable_1<float_t>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<float_t>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<float_t>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

constexpr void __set_source(::System::Collections::Generic::IEnumerable_1<float_t>*  value) ;

constexpr ::System::Collections::Generic::IEnumerable_1<float_t>* __get_source() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<float_t>*> __get_source() const;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<float_t>* GetEnumerator() ;

/// @brief Method GetEnumerableSorter addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Linq::EnumerableSorter_1<float_t>* GetEnumerableSorter(::System::Linq::EnumerableSorter_1<float_t>*  next) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable addr 0x0 size 0xffffffffffffffff virtual true final true
template<typename TKey>
inline ::System::Linq::IOrderedEnumerable_1<float_t>* System_Linq_IOrderedEnumerable_TElement__CreateOrderedEnumerable(::System::Func_2<float_t,TKey>*  keySelector, ::System::Collections::Generic::IComparer_1<TKey>*  comparer, bool  descending) ;

static inline ::System::Linq::OrderedEnumerable_1<float_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OrderedEnumerable_1(OrderedEnumerable_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OrderedEnumerable_1(OrderedEnumerable_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OrderedEnumerable_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::OrderedEnumerable`1
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14291))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14291), inst: 302 })
// CS Name: ::System.Linq::OrderedEnumerable`1<TElement>*
class CORDL_TYPE OrderedEnumerable_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> : public ::System::Object {
public:
// Declarations
using _GetEnumerator_d__1 = ::System::Linq::__OrderedEnumerable_1___GetEnumerator_d__1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field source offset 0x10
 __declspec(property(get=__get_source, put=__set_source)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*  source;

/// @brief Convert operator to "::System::Linq::IOrderedEnumerable_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>"
constexpr operator  ::System::Linq::IOrderedEnumerable_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

constexpr void __set_source(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*  value) ;

constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* __get_source() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*> __get_source() const;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* GetEnumerator() ;

/// @brief Method GetEnumerableSorter addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Linq::EnumerableSorter_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* GetEnumerableSorter(::System::Linq::EnumerableSorter_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*  next) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable addr 0x0 size 0xffffffffffffffff virtual true final true
template<typename TKey>
inline ::System::Linq::IOrderedEnumerable_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* System_Linq_IOrderedEnumerable_TElement__CreateOrderedEnumerable(::System::Func_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,TKey>*  keySelector, ::System::Collections::Generic::IComparer_1<TKey>*  comparer, bool  descending) ;

static inline ::System::Linq::OrderedEnumerable_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OrderedEnumerable_1(OrderedEnumerable_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OrderedEnumerable_1(OrderedEnumerable_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OrderedEnumerable_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::OrderedEnumerable`1
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14291)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14291), inst: 98 })
// CS Name: ::System.Linq::OrderedEnumerable`1<TElement>*
class CORDL_TYPE OrderedEnumerable_1<int32_t> : public ::System::Object {
public:
// Declarations
using _GetEnumerator_d__1 = ::System::Linq::__OrderedEnumerable_1___GetEnumerator_d__1<int32_t>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field source offset 0x10
 __declspec(property(get=__get_source, put=__set_source)) ::System::Collections::Generic::IEnumerable_1<int32_t>*  source;

/// @brief Convert operator to "::System::Linq::IOrderedEnumerable_1<int32_t>"
constexpr operator  ::System::Linq::IOrderedEnumerable_1<int32_t>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<int32_t>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<int32_t>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

constexpr void __set_source(::System::Collections::Generic::IEnumerable_1<int32_t>*  value) ;

constexpr ::System::Collections::Generic::IEnumerable_1<int32_t>* __get_source() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<int32_t>*> __get_source() const;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<int32_t>* GetEnumerator() ;

/// @brief Method GetEnumerableSorter addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Linq::EnumerableSorter_1<int32_t>* GetEnumerableSorter(::System::Linq::EnumerableSorter_1<int32_t>*  next) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable addr 0x0 size 0xffffffffffffffff virtual true final true
template<typename TKey>
inline ::System::Linq::IOrderedEnumerable_1<int32_t>* System_Linq_IOrderedEnumerable_TElement__CreateOrderedEnumerable(::System::Func_2<int32_t,TKey>*  keySelector, ::System::Collections::Generic::IComparer_1<TKey>*  comparer, bool  descending) ;

static inline ::System::Linq::OrderedEnumerable_1<int32_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OrderedEnumerable_1(OrderedEnumerable_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OrderedEnumerable_1(OrderedEnumerable_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OrderedEnumerable_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::OrderedEnumerable`1
namespace System::Linq {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TElement>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14291))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14291), inst: 2 })
// CS Name: ::System.Linq::OrderedEnumerable`1<TElement>*
class CORDL_TYPE OrderedEnumerable_1<TElement> : public ::System::Object {
public:
// Declarations
using _GetEnumerator_d__1 = ::System::Linq::__OrderedEnumerable_1___GetEnumerator_d__1<TElement>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field source offset 0x10
 __declspec(property(get=__get_source, put=__set_source)) ::System::Collections::Generic::IEnumerable_1<TElement>*  source;

/// @brief Convert operator to "::System::Linq::IOrderedEnumerable_1<TElement>"
constexpr operator  ::System::Linq::IOrderedEnumerable_1<TElement>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TElement>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<TElement>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

constexpr void __set_source(::System::Collections::Generic::IEnumerable_1<TElement>*  value) ;

constexpr ::System::Collections::Generic::IEnumerable_1<TElement>* __get_source() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<TElement>*> __get_source() const;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<TElement>* GetEnumerator() ;

/// @brief Method GetEnumerableSorter addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Linq::EnumerableSorter_1<TElement>* GetEnumerableSorter(::System::Linq::EnumerableSorter_1<TElement>*  next) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable addr 0x0 size 0xffffffffffffffff virtual true final true
template<typename TKey>
inline ::System::Linq::IOrderedEnumerable_1<TElement>* System_Linq_IOrderedEnumerable_TElement__CreateOrderedEnumerable(::System::Func_2<TElement,TKey>*  keySelector, ::System::Collections::Generic::IComparer_1<TKey>*  comparer, bool  descending) ;

static inline ::System::Linq::OrderedEnumerable_1<TElement>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OrderedEnumerable_1(OrderedEnumerable_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OrderedEnumerable_1(OrderedEnumerable_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OrderedEnumerable_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::OrderedEnumerable_1, "System.Linq", "OrderedEnumerable`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::__OrderedEnumerable_1___GetEnumerator_d__1, "System.Linq", "OrderedEnumerable`1/<GetEnumerator>d__1");
