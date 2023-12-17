#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BatchExtensions)
namespace GlobalNamespace {
template<typename T>
class __BatchExtensions___Batch_d__0_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class IDisposable;
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
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class __BatchExtensions___Batch_d__0_1;
}
namespace GlobalNamespace {
class BatchExtensions;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type T>
class __BatchExtensions___Batch_d__0_1<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::__BatchExtensions___Batch_d__0_1);
MARK_REF_PTR_T(::GlobalNamespace::BatchExtensions);
// Type: ::<Batch>d__0`1
// Type: ::BatchExtensions
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12685))
// CS Name: ::BatchExtensions*
class CORDL_TYPE BatchExtensions : public ::System::Object {
public:
// Declarations
template<typename T>
using _Batch_d__0_1 = ::GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method Batch addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::List_1<T>*>* Batch(::System::Collections::Generic::IEnumerable_1<T>*  enumerable, int32_t  batchSize) ;

// Ctor Parameters [CppParam { name: "", ty: "BatchExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BatchExtensions(BatchExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BatchExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BatchExtensions(BatchExtensions const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BatchExtensions()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BatchExtensions, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<Batch>d__0`1
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12684)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12684), inst: 2 })
// CS Name: ::BatchExtensions::<Batch>d__0`1<T>*
class CORDL_TYPE __BatchExtensions___Batch_d__0_1<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::System::Object)]{};

/// @brief Field <>1__state offset 0x10
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current offset 0x18
 __declspec(property(get=__get___2__current, put=__set___2__current)) ::System::Collections::Generic::List_1<T>*  __2__current;

/// @brief Field <>l__initialThreadId offset 0x20
 __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field enumerable offset 0x28
 __declspec(property(get=__get_enumerable, put=__set_enumerable)) ::System::Collections::Generic::IEnumerable_1<T>*  enumerable;

/// @brief Field <>3__enumerable offset 0x30
 __declspec(property(get=__get___3__enumerable, put=__set___3__enumerable)) ::System::Collections::Generic::IEnumerable_1<T>*  __3__enumerable;

/// @brief Field batchSize offset 0x38
 __declspec(property(get=__get_batchSize, put=__set_batchSize)) int32_t  batchSize;

/// @brief Field <>3__batchSize offset 0x3c
 __declspec(property(get=__get___3__batchSize, put=__set___3__batchSize)) int32_t  __3__batchSize;

/// @brief Field <>7__wrap1 offset 0x40
 __declspec(property(get=__get___7__wrap1, put=__set___7__wrap1)) ::System::Collections::Generic::IEnumerator_1<T>*  __7__wrap1;

 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Collections_Generic_List_T___get_Current)) ::System::Collections::Generic::List_1<T>*  System_Collections_Generic_IEnumerator_System_Collections_Generic_List_T___Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::List_1<T>*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::List_1<T>*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::List_1<T>*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::List_1<T>*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___2__current(::System::Collections::Generic::List_1<T>*  value) ;

constexpr ::System::Collections::Generic::List_1<T>* __get___2__current() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<T>*> __get___2__current() const;

constexpr void __set___l__initialThreadId(int32_t  value) ;

constexpr int32_t& __get___l__initialThreadId() ;

constexpr int32_t const& __get___l__initialThreadId() const;

constexpr void __set_enumerable(::System::Collections::Generic::IEnumerable_1<T>*  value) ;

constexpr ::System::Collections::Generic::IEnumerable_1<T>* __get_enumerable() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<T>*> __get_enumerable() const;

constexpr void __set___3__enumerable(::System::Collections::Generic::IEnumerable_1<T>*  value) ;

constexpr ::System::Collections::Generic::IEnumerable_1<T>* __get___3__enumerable() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<T>*> __get___3__enumerable() const;

constexpr void __set_batchSize(int32_t  value) ;

constexpr int32_t& __get_batchSize() ;

constexpr int32_t const& __get_batchSize() const;

constexpr void __set___3__batchSize(int32_t  value) ;

constexpr int32_t& __get___3__batchSize() ;

constexpr int32_t const& __get___3__batchSize() const;

constexpr void __set___7__wrap1(::System::Collections::Generic::IEnumerator_1<T>*  value) ;

constexpr ::System::Collections::Generic::IEnumerator_1<T>* __get___7__wrap1() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<T>*> __get___7__wrap1() const;

static inline ::GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method <>m__Finally1 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void __m__Finally1() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Collections.Generic.List<T>>.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::List_1<T>* System_Collections_Generic_IEnumerator_System_Collections_Generic_List_T___get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<System.Collections.Generic.List<T>>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::List_1<T>*>* System_Collections_Generic_IEnumerable_System_Collections_Generic_List_T___GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

// Ctor Parameters [CppParam { name: "", ty: "__BatchExtensions___Batch_d__0_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__BatchExtensions___Batch_d__0_1(__BatchExtensions___Batch_d__0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__BatchExtensions___Batch_d__0_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__BatchExtensions___Batch_d__0_1(__BatchExtensions___Batch_d__0_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __BatchExtensions___Batch_d__0_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__BatchExtensions___Batch_d__0_1, "", "BatchExtensions/<Batch>d__0`1");
NEED_NO_BOX(::GlobalNamespace::BatchExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BatchExtensions*, "", "BatchExtensions");
