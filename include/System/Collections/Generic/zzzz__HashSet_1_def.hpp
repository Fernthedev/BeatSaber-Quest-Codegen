#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HashSet_1)
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Runtime::Serialization {
class IDeserializationCallback;
}
namespace System {
template<typename T>
class Predicate_1;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
struct Guid;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
struct __HashSet_1__Enumerator;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
struct __HashSet_1__ElementCount;
}
namespace System::Collections::Generic {
template<typename T>
struct __HashSet_1__Slot;
}
namespace System::Collections::Generic {
template<typename T>
class IEqualityComparer_1;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyCollection_1;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace UnityEngine::ProBuilder {
struct Edge;
}
namespace UnityEngine::ProBuilder {
struct EdgeLookup;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<>
class HashSet_1<::System::Guid>;
}
namespace System::Collections::Generic {
template<>
class HashSet_1<::UnityEngine::InputSystem::Utilities::InternedString>;
}
namespace System::Collections::Generic {
template<>
class HashSet_1<::UnityEngine::ProBuilder::Edge>;
}
namespace System::Collections::Generic {
template<>
class HashSet_1<::UnityEngine::ProBuilder::EdgeLookup>;
}
namespace System::Collections::Generic {
template<>
class HashSet_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>;
}
namespace System::Collections::Generic {
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
class HashSet_1<T>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type T>
class HashSet_1<T>;
}
namespace System::Collections::Generic {
template<>
class HashSet_1<int32_t>;
}
namespace System::Collections::Generic {
template<>
class HashSet_1<uint32_t>;
}
namespace System::Collections::Generic {
template<>
class HashSet_1<uint64_t>;
}
namespace System::Collections::Generic {
template<typename T>
struct __HashSet_1__Enumerator;
}
namespace System::Collections::Generic {
template<typename T>
struct __HashSet_1__ElementCount;
}
namespace System::Collections::Generic {
template<>
struct __HashSet_1__Enumerator<::System::Guid>;
}
namespace System::Collections::Generic {
template<>
struct __HashSet_1__Enumerator<::UnityEngine::InputSystem::Utilities::InternedString>;
}
namespace System::Collections::Generic {
template<>
struct __HashSet_1__Enumerator<::UnityEngine::ProBuilder::Edge>;
}
namespace System::Collections::Generic {
template<>
struct __HashSet_1__Enumerator<::UnityEngine::ProBuilder::EdgeLookup>;
}
namespace System::Collections::Generic {
template<>
struct __HashSet_1__Enumerator<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>;
}
namespace System::Collections::Generic {
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
struct __HashSet_1__Enumerator<T>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type T>
struct __HashSet_1__Enumerator<T>;
}
namespace System::Collections::Generic {
template<>
struct __HashSet_1__Enumerator<int32_t>;
}
namespace System::Collections::Generic {
template<>
struct __HashSet_1__Enumerator<uint32_t>;
}
namespace System::Collections::Generic {
template<>
struct __HashSet_1__Enumerator<uint64_t>;
}
namespace System::Collections::Generic {
template<typename T>
struct __HashSet_1__Slot;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Collections::Generic::HashSet_1);
MARK_GEN_VAL_T(::System::Collections::Generic::__HashSet_1__Enumerator);
MARK_GEN_VAL_T(::System::Collections::Generic::__HashSet_1__ElementCount);
MARK_GEN_VAL_T(::System::Collections::Generic::__HashSet_1__Slot);
// Type: ::ElementCount
namespace System::Collections::Generic {
// cpp template
template<typename T>
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14312))
// CS Name: ::HashSet`1::ElementCount<T>
struct CORDL_TYPE __HashSet_1__ElementCount : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field uniqueCount offset 0x0
 __declspec(property(get=__get_uniqueCount, put=__set_uniqueCount)) int32_t  uniqueCount;

/// @brief Field unfoundCount offset 0x4
 __declspec(property(get=__get_unfoundCount, put=__set_unfoundCount)) int32_t  unfoundCount;

constexpr void __set_uniqueCount(int32_t  value) ;

constexpr int32_t& __get_uniqueCount() ;

constexpr int32_t const& __get_uniqueCount() const;

constexpr void __set_unfoundCount(int32_t  value) ;

constexpr int32_t& __get_unfoundCount() ;

constexpr int32_t const& __get_unfoundCount() const;

// Ctor Parameters [CppParam { name: "uniqueCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "unfoundCount", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __HashSet_1__ElementCount(int32_t  uniqueCount, int32_t  unfoundCount) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __HashSet_1__ElementCount(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __HashSet_1__ElementCount()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::Slot
namespace System::Collections::Generic {
// cpp template
template<typename T>
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14313))
// CS Name: ::HashSet`1::Slot<T>
struct CORDL_TYPE __HashSet_1__Slot : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field hashCode offset 0x0
 __declspec(property(get=__get_hashCode, put=__set_hashCode)) int32_t  hashCode;

/// @brief Field next offset 0x4
 __declspec(property(get=__get_next, put=__set_next)) int32_t  next;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) T  value;

constexpr void __set_hashCode(int32_t  value) ;

constexpr int32_t& __get_hashCode() ;

constexpr int32_t const& __get_hashCode() const;

constexpr void __set_next(int32_t  value) ;

constexpr int32_t& __get_next() ;

constexpr int32_t const& __get_next() const;

constexpr void __set_value(T  value) ;

constexpr T& __get_value() ;

constexpr T const& __get_value() const;

// Ctor Parameters [CppParam { name: "hashCode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "next", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "value", ty: "T", modifiers: "", def_value: None }]
constexpr __HashSet_1__Slot(int32_t  hashCode, int32_t  next, T  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __HashSet_1__Slot(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __HashSet_1__Slot()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::Enumerator
// Type: System.Collections.Generic::HashSet`1
// Type: ::Enumerator
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14314))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14314), inst: 2598 })
// CS Name: ::HashSet`1::Enumerator<T>
struct CORDL_TYPE __HashSet_1__Enumerator<::UnityEngine::InputSystem::Utilities::InternedString> : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field _set offset 0x0
 __declspec(property(get=__get__set, put=__set__set)) ::System::Collections::Generic::HashSet_1<::UnityEngine::InputSystem::Utilities::InternedString>*  _set;

/// @brief Field _index offset 0x8
 __declspec(property(get=__get__index, put=__set__index)) int32_t  _index;

/// @brief Field _version offset 0xc
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _current offset 0x10
 __declspec(property(get=__get__current, put=__set__current)) ::UnityEngine::InputSystem::Utilities::InternedString  _current;

 __declspec(property(get=get_Current)) ::UnityEngine::InputSystem::Utilities::InternedString  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::InternedString>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::InternedString>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

constexpr void __set__set(::System::Collections::Generic::HashSet_1<::UnityEngine::InputSystem::Utilities::InternedString>*  value) ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::InputSystem::Utilities::InternedString>* __get__set() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::UnityEngine::InputSystem::Utilities::InternedString>*> __get__set() const;

constexpr void __set__index(int32_t  value) ;

constexpr int32_t& __get__index() ;

constexpr int32_t const& __get__index() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__current(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InternedString& __get__current() ;

constexpr ::UnityEngine::InputSystem::Utilities::InternedString const& __get__current() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::HashSet_1<::UnityEngine::InputSystem::Utilities::InternedString>*  set) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::InputSystem::Utilities::InternedString get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

// Ctor Parameters [CppParam { name: "_set", ty: "::System::Collections::Generic::HashSet_1<::UnityEngine::InputSystem::Utilities::InternedString>*", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_current", ty: "::UnityEngine::InputSystem::Utilities::InternedString", modifiers: "", def_value: None }]
constexpr __HashSet_1__Enumerator(::System::Collections::Generic::HashSet_1<::UnityEngine::InputSystem::Utilities::InternedString>*  _set, int32_t  _index, int32_t  _version, ::UnityEngine::InputSystem::Utilities::InternedString  _current) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __HashSet_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __HashSet_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::Enumerator
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14314))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14314), inst: 2593 })
// CS Name: ::HashSet`1::Enumerator<T>
struct CORDL_TYPE __HashSet_1__Enumerator<::UnityEngine::ProBuilder::EdgeLookup> : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field _set offset 0x0
 __declspec(property(get=__get__set, put=__set__set)) ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::EdgeLookup>*  _set;

/// @brief Field _index offset 0x8
 __declspec(property(get=__get__index, put=__set__index)) int32_t  _index;

/// @brief Field _version offset 0xc
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _current offset 0x10
 __declspec(property(get=__get__current, put=__set__current)) ::UnityEngine::ProBuilder::EdgeLookup  _current;

 __declspec(property(get=get_Current)) ::UnityEngine::ProBuilder::EdgeLookup  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::ProBuilder::EdgeLookup>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::ProBuilder::EdgeLookup>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

constexpr void __set__set(::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::EdgeLookup>*  value) ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::EdgeLookup>* __get__set() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::EdgeLookup>*> __get__set() const;

constexpr void __set__index(int32_t  value) ;

constexpr int32_t& __get__index() ;

constexpr int32_t const& __get__index() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__current(::UnityEngine::ProBuilder::EdgeLookup  value) ;

constexpr ::UnityEngine::ProBuilder::EdgeLookup& __get__current() ;

constexpr ::UnityEngine::ProBuilder::EdgeLookup const& __get__current() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::EdgeLookup>*  set) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::ProBuilder::EdgeLookup get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

// Ctor Parameters [CppParam { name: "_set", ty: "::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::EdgeLookup>*", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_current", ty: "::UnityEngine::ProBuilder::EdgeLookup", modifiers: "", def_value: None }]
constexpr __HashSet_1__Enumerator(::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::EdgeLookup>*  _set, int32_t  _index, int32_t  _version, ::UnityEngine::ProBuilder::EdgeLookup  _current) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __HashSet_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __HashSet_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::Enumerator
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14314))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14314), inst: 2592 })
// CS Name: ::HashSet`1::Enumerator<T>
struct CORDL_TYPE __HashSet_1__Enumerator<::UnityEngine::ProBuilder::Edge> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field _set offset 0x0
 __declspec(property(get=__get__set, put=__set__set)) ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Edge>*  _set;

/// @brief Field _index offset 0x8
 __declspec(property(get=__get__index, put=__set__index)) int32_t  _index;

/// @brief Field _version offset 0xc
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _current offset 0x10
 __declspec(property(get=__get__current, put=__set__current)) ::UnityEngine::ProBuilder::Edge  _current;

 __declspec(property(get=get_Current)) ::UnityEngine::ProBuilder::Edge  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::ProBuilder::Edge>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::ProBuilder::Edge>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

constexpr void __set__set(::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Edge>*  value) ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Edge>* __get__set() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Edge>*> __get__set() const;

constexpr void __set__index(int32_t  value) ;

constexpr int32_t& __get__index() ;

constexpr int32_t const& __get__index() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__current(::UnityEngine::ProBuilder::Edge  value) ;

constexpr ::UnityEngine::ProBuilder::Edge& __get__current() ;

constexpr ::UnityEngine::ProBuilder::Edge const& __get__current() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Edge>*  set) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::ProBuilder::Edge get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

// Ctor Parameters [CppParam { name: "_set", ty: "::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Edge>*", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_current", ty: "::UnityEngine::ProBuilder::Edge", modifiers: "", def_value: None }]
constexpr __HashSet_1__Enumerator(::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Edge>*  _set, int32_t  _index, int32_t  _version, ::UnityEngine::ProBuilder::Edge  _current) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __HashSet_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __HashSet_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::Enumerator
namespace System::Collections::Generic {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14314))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14314), inst: 974 })
// CS Name: ::HashSet`1::Enumerator<T>
struct CORDL_TYPE __HashSet_1__Enumerator<T> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field _set offset 0x0
 __declspec(property(get=__get__set, put=__set__set)) ::System::Collections::Generic::HashSet_1<T>*  _set;

/// @brief Field _index offset 0x8
 __declspec(property(get=__get__index, put=__set__index)) int32_t  _index;

/// @brief Field _version offset 0xc
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _current offset 0x10
 __declspec(property(get=__get__current, put=__set__current)) T  _current;

 __declspec(property(get=get_Current)) T  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<T>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

constexpr void __set__set(::System::Collections::Generic::HashSet_1<T>*  value) ;

constexpr ::System::Collections::Generic::HashSet_1<T>* __get__set() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<T>*> __get__set() const;

constexpr void __set__index(int32_t  value) ;

constexpr int32_t& __get__index() ;

constexpr int32_t const& __get__index() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__current(T  value) ;

constexpr T& __get__current() ;

constexpr T const& __get__current() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::HashSet_1<T>*  set) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline T get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

// Ctor Parameters [CppParam { name: "_set", ty: "::System::Collections::Generic::HashSet_1<T>*", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_current", ty: "T", modifiers: "", def_value: None }]
constexpr __HashSet_1__Enumerator(::System::Collections::Generic::HashSet_1<T>*  _set, int32_t  _index, int32_t  _version, T  _current) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __HashSet_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __HashSet_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::Enumerator
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14314))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14314), inst: 753 })
// CS Name: ::HashSet`1::Enumerator<T>
struct CORDL_TYPE __HashSet_1__Enumerator<uint32_t> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field _set offset 0x0
 __declspec(property(get=__get__set, put=__set__set)) ::System::Collections::Generic::HashSet_1<uint32_t>*  _set;

/// @brief Field _index offset 0x8
 __declspec(property(get=__get__index, put=__set__index)) int32_t  _index;

/// @brief Field _version offset 0xc
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _current offset 0x10
 __declspec(property(get=__get__current, put=__set__current)) uint32_t  _current;

 __declspec(property(get=get_Current)) uint32_t  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<uint32_t>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<uint32_t>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

constexpr void __set__set(::System::Collections::Generic::HashSet_1<uint32_t>*  value) ;

constexpr ::System::Collections::Generic::HashSet_1<uint32_t>* __get__set() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<uint32_t>*> __get__set() const;

constexpr void __set__index(int32_t  value) ;

constexpr int32_t& __get__index() ;

constexpr int32_t const& __get__index() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__current(uint32_t  value) ;

constexpr uint32_t& __get__current() ;

constexpr uint32_t const& __get__current() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::HashSet_1<uint32_t>*  set) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline uint32_t get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

// Ctor Parameters [CppParam { name: "_set", ty: "::System::Collections::Generic::HashSet_1<uint32_t>*", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_current", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr __HashSet_1__Enumerator(::System::Collections::Generic::HashSet_1<uint32_t>*  _set, int32_t  _index, int32_t  _version, uint32_t  _current) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __HashSet_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __HashSet_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::Enumerator
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14314))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14314), inst: 407 })
// CS Name: ::HashSet`1::Enumerator<T>
struct CORDL_TYPE __HashSet_1__Enumerator<uint64_t> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field _set offset 0x0
 __declspec(property(get=__get__set, put=__set__set)) ::System::Collections::Generic::HashSet_1<uint64_t>*  _set;

/// @brief Field _index offset 0x8
 __declspec(property(get=__get__index, put=__set__index)) int32_t  _index;

/// @brief Field _version offset 0xc
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _current offset 0x10
 __declspec(property(get=__get__current, put=__set__current)) uint64_t  _current;

 __declspec(property(get=get_Current)) uint64_t  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<uint64_t>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<uint64_t>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

constexpr void __set__set(::System::Collections::Generic::HashSet_1<uint64_t>*  value) ;

constexpr ::System::Collections::Generic::HashSet_1<uint64_t>* __get__set() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<uint64_t>*> __get__set() const;

constexpr void __set__index(int32_t  value) ;

constexpr int32_t& __get__index() ;

constexpr int32_t const& __get__index() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__current(uint64_t  value) ;

constexpr uint64_t& __get__current() ;

constexpr uint64_t const& __get__current() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::HashSet_1<uint64_t>*  set) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline uint64_t get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

// Ctor Parameters [CppParam { name: "_set", ty: "::System::Collections::Generic::HashSet_1<uint64_t>*", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_current", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr __HashSet_1__Enumerator(::System::Collections::Generic::HashSet_1<uint64_t>*  _set, int32_t  _index, int32_t  _version, uint64_t  _current) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __HashSet_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __HashSet_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::Enumerator
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14314))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14314), inst: 314 })
// CS Name: ::HashSet`1::Enumerator<T>
struct CORDL_TYPE __HashSet_1__Enumerator<::System::Guid> : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field _set offset 0x0
 __declspec(property(get=__get__set, put=__set__set)) ::System::Collections::Generic::HashSet_1<::System::Guid>*  _set;

/// @brief Field _index offset 0x8
 __declspec(property(get=__get__index, put=__set__index)) int32_t  _index;

/// @brief Field _version offset 0xc
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _current offset 0x10
 __declspec(property(get=__get__current, put=__set__current)) ::System::Guid  _current;

 __declspec(property(get=get_Current)) ::System::Guid  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Guid>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Guid>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

constexpr void __set__set(::System::Collections::Generic::HashSet_1<::System::Guid>*  value) ;

constexpr ::System::Collections::Generic::HashSet_1<::System::Guid>* __get__set() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::System::Guid>*> __get__set() const;

constexpr void __set__index(int32_t  value) ;

constexpr int32_t& __get__index() ;

constexpr int32_t const& __get__index() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__current(::System::Guid  value) ;

constexpr ::System::Guid& __get__current() ;

constexpr ::System::Guid const& __get__current() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::HashSet_1<::System::Guid>*  set) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Guid get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

// Ctor Parameters [CppParam { name: "_set", ty: "::System::Collections::Generic::HashSet_1<::System::Guid>*", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_current", ty: "::System::Guid", modifiers: "", def_value: None }]
constexpr __HashSet_1__Enumerator(::System::Collections::Generic::HashSet_1<::System::Guid>*  _set, int32_t  _index, int32_t  _version, ::System::Guid  _current) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __HashSet_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __HashSet_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::Enumerator
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14314))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14314), inst: 275 })
// CS Name: ::HashSet`1::Enumerator<T>
struct CORDL_TYPE __HashSet_1__Enumerator<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> : public ::bs_hook::ValueTypeWrapper<0x28> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field _set offset 0x0
 __declspec(property(get=__get__set, put=__set__set)) ::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  _set;

/// @brief Field _index offset 0x8
 __declspec(property(get=__get__index, put=__set__index)) int32_t  _index;

/// @brief Field _version offset 0xc
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _current offset 0x10
 __declspec(property(get=__get__current, put=__set__current)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  _current;

 __declspec(property(get=get_Current)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

constexpr void __set__set(::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* __get__set() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> __get__set() const;

constexpr void __set__index(int32_t  value) ;

constexpr int32_t& __get__index() ;

constexpr int32_t const& __get__index() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__current(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  value) ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle& __get__current() ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle const& __get__current() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  set) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

// Ctor Parameters [CppParam { name: "_set", ty: "::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_current", ty: "::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle", modifiers: "", def_value: None }]
constexpr __HashSet_1__Enumerator(::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  _set, int32_t  _index, int32_t  _version, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  _current) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __HashSet_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x28>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __HashSet_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::Enumerator
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14314))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14314), inst: 98 })
// CS Name: ::HashSet`1::Enumerator<T>
struct CORDL_TYPE __HashSet_1__Enumerator<int32_t> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field _set offset 0x0
 __declspec(property(get=__get__set, put=__set__set)) ::System::Collections::Generic::HashSet_1<int32_t>*  _set;

/// @brief Field _index offset 0x8
 __declspec(property(get=__get__index, put=__set__index)) int32_t  _index;

/// @brief Field _version offset 0xc
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _current offset 0x10
 __declspec(property(get=__get__current, put=__set__current)) int32_t  _current;

 __declspec(property(get=get_Current)) int32_t  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<int32_t>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<int32_t>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

constexpr void __set__set(::System::Collections::Generic::HashSet_1<int32_t>*  value) ;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>* __get__set() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<int32_t>*> __get__set() const;

constexpr void __set__index(int32_t  value) ;

constexpr int32_t& __get__index() ;

constexpr int32_t const& __get__index() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__current(int32_t  value) ;

constexpr int32_t& __get__current() ;

constexpr int32_t const& __get__current() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::HashSet_1<int32_t>*  set) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

// Ctor Parameters [CppParam { name: "_set", ty: "::System::Collections::Generic::HashSet_1<int32_t>*", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_current", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __HashSet_1__Enumerator(::System::Collections::Generic::HashSet_1<int32_t>*  _set, int32_t  _index, int32_t  _version, int32_t  _current) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __HashSet_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __HashSet_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::Enumerator
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14314))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14314), inst: 2 })
// CS Name: ::HashSet`1::Enumerator<T>
struct CORDL_TYPE __HashSet_1__Enumerator<T> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field _set offset 0x0
 __declspec(property(get=__get__set, put=__set__set)) ::System::Collections::Generic::HashSet_1<T>*  _set;

/// @brief Field _index offset 0x8
 __declspec(property(get=__get__index, put=__set__index)) int32_t  _index;

/// @brief Field _version offset 0xc
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _current offset 0x10
 __declspec(property(get=__get__current, put=__set__current)) T  _current;

 __declspec(property(get=get_Current)) T  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<T>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

constexpr void __set__set(::System::Collections::Generic::HashSet_1<T>*  value) ;

constexpr ::System::Collections::Generic::HashSet_1<T>* __get__set() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<T>*> __get__set() const;

constexpr void __set__index(int32_t  value) ;

constexpr int32_t& __get__index() ;

constexpr int32_t const& __get__index() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__current(T  value) ;

constexpr T& __get__current() ;

constexpr T const& __get__current() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::HashSet_1<T>*  set) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline T get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

// Ctor Parameters [CppParam { name: "_set", ty: "::System::Collections::Generic::HashSet_1<T>*", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_current", ty: "T", modifiers: "", def_value: None }]
constexpr __HashSet_1__Enumerator(::System::Collections::Generic::HashSet_1<T>*  _set, int32_t  _index, int32_t  _version, T  _current) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __HashSet_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __HashSet_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::HashSet`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14315))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14315), inst: 2598 })
// CS Name: ::System.Collections.Generic::HashSet`1<T>*
class CORDL_TYPE HashSet_1<::UnityEngine::InputSystem::Utilities::InternedString> : public ::System::Object {
public:
// Declarations
using Enumerator = ::System::Collections::Generic::__HashSet_1__Enumerator<::UnityEngine::InputSystem::Utilities::InternedString>;

using Slot = ::System::Collections::Generic::__HashSet_1__Slot<::UnityEngine::InputSystem::Utilities::InternedString>;

using ElementCount = ::System::Collections::Generic::__HashSet_1__ElementCount<::UnityEngine::InputSystem::Utilities::InternedString>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::System::Object)]{};

/// @brief Field Lower31BitMask offset 0x0
static constexpr int32_t  Lower31BitMask{static_cast<int32_t>(0x7fffffff)};

/// @brief Field StackAllocThreshold offset 0x0
static constexpr int32_t  StackAllocThreshold{static_cast<int32_t>(0x64)};

/// @brief Field ShrinkThreshold offset 0x0
static constexpr int32_t  ShrinkThreshold{static_cast<int32_t>(0x3)};

/// @brief Field CapacityName offset 0x0
static constexpr ::ConstString  CapacityName{u"Capacity"};

/// @brief Field ElementsName offset 0x0
static constexpr ::ConstString  ElementsName{u"Elements"};

/// @brief Field ComparerName offset 0x0
static constexpr ::ConstString  ComparerName{u"Comparer"};

/// @brief Field VersionName offset 0x0
static constexpr ::ConstString  VersionName{u"Version"};

/// @brief Field _buckets offset 0x10
 __declspec(property(get=__get__buckets, put=__set__buckets)) ::ArrayW<int32_t,::Array<int32_t>*>  _buckets;

/// @brief Field _slots offset 0x18
 __declspec(property(get=__get__slots, put=__set__slots)) ::ArrayW<::System::Collections::Generic::__HashSet_1__Slot<::UnityEngine::InputSystem::Utilities::InternedString>,::Array<::System::Collections::Generic::__HashSet_1__Slot<::UnityEngine::InputSystem::Utilities::InternedString>>*>  _slots;

/// @brief Field _count offset 0x20
 __declspec(property(get=__get__count, put=__set__count)) int32_t  _count;

/// @brief Field _lastIndex offset 0x24
 __declspec(property(get=__get__lastIndex, put=__set__lastIndex)) int32_t  _lastIndex;

/// @brief Field _freeList offset 0x28
 __declspec(property(get=__get__freeList, put=__set__freeList)) int32_t  _freeList;

/// @brief Field _comparer offset 0x30
 __declspec(property(get=__get__comparer, put=__set__comparer)) ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::InputSystem::Utilities::InternedString>*  _comparer;

/// @brief Field _version offset 0x38
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _siInfo offset 0x40
 __declspec(property(get=__get__siInfo, put=__set__siInfo)) ::System::Runtime::Serialization::SerializationInfo*  _siInfo;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=System_Collections_Generic_ICollection_T__get_IsReadOnly)) bool  System_Collections_Generic_ICollection_T__IsReadOnly;

 __declspec(property(get=get_Comparer)) ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::InputSystem::Utilities::InternedString>*  Comparer;

/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::UnityEngine::InputSystem::Utilities::InternedString>"
constexpr operator  ::System::Collections::Generic::ICollection_1<::UnityEngine::InputSystem::Utilities::InternedString>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::InputSystem::Utilities::InternedString>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::InputSystem::Utilities::InternedString>*() noexcept;

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() noexcept;

/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr operator  ::System::Runtime::Serialization::IDeserializationCallback*() noexcept;

constexpr void __set__buckets(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get__buckets() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get__buckets() const;

constexpr void __set__slots(::ArrayW<::System::Collections::Generic::__HashSet_1__Slot<::UnityEngine::InputSystem::Utilities::InternedString>,::Array<::System::Collections::Generic::__HashSet_1__Slot<::UnityEngine::InputSystem::Utilities::InternedString>>*>  value) ;

constexpr ::ArrayW<::System::Collections::Generic::__HashSet_1__Slot<::UnityEngine::InputSystem::Utilities::InternedString>,::Array<::System::Collections::Generic::__HashSet_1__Slot<::UnityEngine::InputSystem::Utilities::InternedString>>*>& __get__slots() ;

constexpr ::ArrayW<::System::Collections::Generic::__HashSet_1__Slot<::UnityEngine::InputSystem::Utilities::InternedString>,::Array<::System::Collections::Generic::__HashSet_1__Slot<::UnityEngine::InputSystem::Utilities::InternedString>>*> const& __get__slots() const;

constexpr void __set__count(int32_t  value) ;

constexpr int32_t& __get__count() ;

constexpr int32_t const& __get__count() const;

constexpr void __set__lastIndex(int32_t  value) ;

constexpr int32_t& __get__lastIndex() ;

constexpr int32_t const& __get__lastIndex() const;

constexpr void __set__freeList(int32_t  value) ;

constexpr int32_t& __get__freeList() ;

constexpr int32_t const& __get__freeList() const;

constexpr void __set__comparer(::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::InputSystem::Utilities::InternedString>*  value) ;

constexpr ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::InputSystem::Utilities::InternedString>* __get__comparer() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::InputSystem::Utilities::InternedString>*> __get__comparer() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__siInfo(::System::Runtime::Serialization::SerializationInfo*  value) ;

constexpr ::System::Runtime::Serialization::SerializationInfo* __get__siInfo() ;

constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::SerializationInfo*> __get__siInfo() const;

static inline ::System::Collections::Generic::HashSet_1<::UnityEngine::InputSystem::Utilities::InternedString>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Collections::Generic::HashSet_1<::UnityEngine::InputSystem::Utilities::InternedString>* New_ctor(::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::InputSystem::Utilities::InternedString>*  comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::InputSystem::Utilities::InternedString>*  comparer) ;

static inline ::System::Collections::Generic::HashSet_1<::UnityEngine::InputSystem::Utilities::InternedString>* New_ctor(int32_t  capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity) ;

static inline ::System::Collections::Generic::HashSet_1<::UnityEngine::InputSystem::Utilities::InternedString>* New_ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>*  collection) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>*  collection) ;

static inline ::System::Collections::Generic::HashSet_1<::UnityEngine::InputSystem::Utilities::InternedString>* New_ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>*  collection, ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::InputSystem::Utilities::InternedString>*  comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>*  collection, ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::InputSystem::Utilities::InternedString>*  comparer) ;

static inline ::System::Collections::Generic::HashSet_1<::UnityEngine::InputSystem::Utilities::InternedString>* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyFrom(::System::Collections::Generic::HashSet_1<::UnityEngine::InputSystem::Utilities::InternedString>*  source) ;

static inline ::System::Collections::Generic::HashSet_1<::UnityEngine::InputSystem::Utilities::InternedString>* New_ctor(int32_t  capacity, ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::InputSystem::Utilities::InternedString>*  comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity, ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::InputSystem::Utilities::InternedString>*  comparer) ;

/// @brief Method System.Collections.Generic.ICollection<T>.Add addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_Generic_ICollection_T__Add(::UnityEngine::InputSystem::Utilities::InternedString  item) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Contains(::UnityEngine::InputSystem::Utilities::InternedString  item) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline void CopyTo(::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString,::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>  array, int32_t  arrayIndex) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Remove(::UnityEngine::InputSystem::Utilities::InternedString  item) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method System.Collections.Generic.ICollection<T>.get_IsReadOnly addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_Generic_ICollection_T__get_IsReadOnly() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::__HashSet_1__Enumerator<::UnityEngine::InputSystem::Utilities::InternedString> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::InternedString>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method GetObjectData addr 0x0 size 0xffffffffffffffff virtual true final false
inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method OnDeserialization addr 0x0 size 0xffffffffffffffff virtual true final false
inline void OnDeserialization(::System::Object*  sender) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Add(::UnityEngine::InputSystem::Utilities::InternedString  item) ;

/// @brief Method UnionWith addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnionWith(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>*  other) ;

/// @brief Method IntersectWith addr 0x0 size 0xffffffffffffffff virtual true final true
inline void IntersectWith(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>*  other) ;

/// @brief Method ExceptWith addr 0x0 size 0xffffffffffffffff virtual true final true
inline void ExceptWith(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>*  other) ;

/// @brief Method SetEquals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool SetEquals(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>*  other) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyTo(::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString,::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>  array) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyTo(::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString,::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>  array, int32_t  arrayIndex, int32_t  count) ;

/// @brief Method RemoveWhere addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t RemoveWhere(::System::Predicate_1<::UnityEngine::InputSystem::Utilities::InternedString>*  match) ;

/// @brief Method get_Comparer addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::InputSystem::Utilities::InternedString>* get_Comparer() ;

/// @brief Method TrimExcess addr 0x0 size 0xffffffffffffffff virtual false final false
inline void TrimExcess() ;

/// @brief Method Initialize addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t Initialize(int32_t  capacity) ;

/// @brief Method IncreaseCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void IncreaseCapacity() ;

/// @brief Method SetCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetCapacity(int32_t  newSize) ;

/// @brief Method AddIfNotPresent addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool AddIfNotPresent(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

/// @brief Method AddValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddValue(int32_t  index, int32_t  hashCode, ::UnityEngine::InputSystem::Utilities::InternedString  value) ;

/// @brief Method ContainsAllElements addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool ContainsAllElements(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>*  other) ;

/// @brief Method IntersectWithHashSetWithSameEC addr 0x0 size 0xffffffffffffffff virtual false final false
inline void IntersectWithHashSetWithSameEC(::System::Collections::Generic::HashSet_1<::UnityEngine::InputSystem::Utilities::InternedString>*  other) ;

/// @brief Method IntersectWithEnumerable addr 0x0 size 0xffffffffffffffff virtual false final false
inline void IntersectWithEnumerable(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>*  other) ;

/// @brief Method InternalIndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t InternalIndexOf(::UnityEngine::InputSystem::Utilities::InternedString  item) ;

/// @brief Method CheckUniqueAndUnfoundElements addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::__HashSet_1__ElementCount<::UnityEngine::InputSystem::Utilities::InternedString> CheckUniqueAndUnfoundElements(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>*  other, bool  returnIfUnfound) ;

/// @brief Method AreEqualityComparersEqual addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool AreEqualityComparersEqual(::System::Collections::Generic::HashSet_1<::UnityEngine::InputSystem::Utilities::InternedString>*  set1, ::System::Collections::Generic::HashSet_1<::UnityEngine::InputSystem::Utilities::InternedString>*  set2) ;

/// @brief Method InternalGetHashCode addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t InternalGetHashCode(::UnityEngine::InputSystem::Utilities::InternedString  item) ;

// Ctor Parameters [CppParam { name: "", ty: "HashSet_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HashSet_1(HashSet_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HashSet_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HashSet_1(HashSet_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HashSet_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::HashSet`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14315))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14315), inst: 2593 })
// CS Name: ::System.Collections.Generic::HashSet`1<T>*
class CORDL_TYPE HashSet_1<::UnityEngine::ProBuilder::EdgeLookup> : public ::System::Object {
public:
// Declarations
using Enumerator = ::System::Collections::Generic::__HashSet_1__Enumerator<::UnityEngine::ProBuilder::EdgeLookup>;

using Slot = ::System::Collections::Generic::__HashSet_1__Slot<::UnityEngine::ProBuilder::EdgeLookup>;

using ElementCount = ::System::Collections::Generic::__HashSet_1__ElementCount<::UnityEngine::ProBuilder::EdgeLookup>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::System::Object)]{};

/// @brief Field Lower31BitMask offset 0x0
static constexpr int32_t  Lower31BitMask{static_cast<int32_t>(0x7fffffff)};

/// @brief Field StackAllocThreshold offset 0x0
static constexpr int32_t  StackAllocThreshold{static_cast<int32_t>(0x64)};

/// @brief Field ShrinkThreshold offset 0x0
static constexpr int32_t  ShrinkThreshold{static_cast<int32_t>(0x3)};

/// @brief Field CapacityName offset 0x0
static constexpr ::ConstString  CapacityName{u"Capacity"};

/// @brief Field ElementsName offset 0x0
static constexpr ::ConstString  ElementsName{u"Elements"};

/// @brief Field ComparerName offset 0x0
static constexpr ::ConstString  ComparerName{u"Comparer"};

/// @brief Field VersionName offset 0x0
static constexpr ::ConstString  VersionName{u"Version"};

/// @brief Field _buckets offset 0x10
 __declspec(property(get=__get__buckets, put=__set__buckets)) ::ArrayW<int32_t,::Array<int32_t>*>  _buckets;

/// @brief Field _slots offset 0x18
 __declspec(property(get=__get__slots, put=__set__slots)) ::ArrayW<::System::Collections::Generic::__HashSet_1__Slot<::UnityEngine::ProBuilder::EdgeLookup>,::Array<::System::Collections::Generic::__HashSet_1__Slot<::UnityEngine::ProBuilder::EdgeLookup>>*>  _slots;

/// @brief Field _count offset 0x20
 __declspec(property(get=__get__count, put=__set__count)) int32_t  _count;

/// @brief Field _lastIndex offset 0x24
 __declspec(property(get=__get__lastIndex, put=__set__lastIndex)) int32_t  _lastIndex;

/// @brief Field _freeList offset 0x28
 __declspec(property(get=__get__freeList, put=__set__freeList)) int32_t  _freeList;

/// @brief Field _comparer offset 0x30
 __declspec(property(get=__get__comparer, put=__set__comparer)) ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::EdgeLookup>*  _comparer;

/// @brief Field _version offset 0x38
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _siInfo offset 0x40
 __declspec(property(get=__get__siInfo, put=__set__siInfo)) ::System::Runtime::Serialization::SerializationInfo*  _siInfo;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=System_Collections_Generic_ICollection_T__get_IsReadOnly)) bool  System_Collections_Generic_ICollection_T__IsReadOnly;

 __declspec(property(get=get_Comparer)) ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::EdgeLookup>*  Comparer;

/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::UnityEngine::ProBuilder::EdgeLookup>"
constexpr operator  ::System::Collections::Generic::ICollection_1<::UnityEngine::ProBuilder::EdgeLookup>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::EdgeLookup>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::EdgeLookup>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::ProBuilder::EdgeLookup>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::ProBuilder::EdgeLookup>*() noexcept;

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() noexcept;

/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr operator  ::System::Runtime::Serialization::IDeserializationCallback*() noexcept;

constexpr void __set__buckets(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get__buckets() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get__buckets() const;

constexpr void __set__slots(::ArrayW<::System::Collections::Generic::__HashSet_1__Slot<::UnityEngine::ProBuilder::EdgeLookup>,::Array<::System::Collections::Generic::__HashSet_1__Slot<::UnityEngine::ProBuilder::EdgeLookup>>*>  value) ;

constexpr ::ArrayW<::System::Collections::Generic::__HashSet_1__Slot<::UnityEngine::ProBuilder::EdgeLookup>,::Array<::System::Collections::Generic::__HashSet_1__Slot<::UnityEngine::ProBuilder::EdgeLookup>>*>& __get__slots() ;

constexpr ::ArrayW<::System::Collections::Generic::__HashSet_1__Slot<::UnityEngine::ProBuilder::EdgeLookup>,::Array<::System::Collections::Generic::__HashSet_1__Slot<::UnityEngine::ProBuilder::EdgeLookup>>*> const& __get__slots() const;

constexpr void __set__count(int32_t  value) ;

constexpr int32_t& __get__count() ;

constexpr int32_t const& __get__count() const;

constexpr void __set__lastIndex(int32_t  value) ;

constexpr int32_t& __get__lastIndex() ;

constexpr int32_t const& __get__lastIndex() const;

constexpr void __set__freeList(int32_t  value) ;

constexpr int32_t& __get__freeList() ;

constexpr int32_t const& __get__freeList() const;

constexpr void __set__comparer(::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::EdgeLookup>*  value) ;

constexpr ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::EdgeLookup>* __get__comparer() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::EdgeLookup>*> __get__comparer() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__siInfo(::System::Runtime::Serialization::SerializationInfo*  value) ;

constexpr ::System::Runtime::Serialization::SerializationInfo* __get__siInfo() ;

constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::SerializationInfo*> __get__siInfo() const;

static inline ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::EdgeLookup>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::EdgeLookup>* New_ctor(::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::EdgeLookup>*  comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::EdgeLookup>*  comparer) ;

static inline ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::EdgeLookup>* New_ctor(int32_t  capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity) ;

static inline ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::EdgeLookup>* New_ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::EdgeLookup>*  collection) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::EdgeLookup>*  collection) ;

static inline ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::EdgeLookup>* New_ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::EdgeLookup>*  collection, ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::EdgeLookup>*  comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::EdgeLookup>*  collection, ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::EdgeLookup>*  comparer) ;

static inline ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::EdgeLookup>* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyFrom(::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::EdgeLookup>*  source) ;

static inline ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::EdgeLookup>* New_ctor(int32_t  capacity, ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::EdgeLookup>*  comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity, ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::EdgeLookup>*  comparer) ;

/// @brief Method System.Collections.Generic.ICollection<T>.Add addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_Generic_ICollection_T__Add(::UnityEngine::ProBuilder::EdgeLookup  item) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Contains(::UnityEngine::ProBuilder::EdgeLookup  item) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline void CopyTo(::ArrayW<::UnityEngine::ProBuilder::EdgeLookup,::Array<::UnityEngine::ProBuilder::EdgeLookup>*>  array, int32_t  arrayIndex) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Remove(::UnityEngine::ProBuilder::EdgeLookup  item) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method System.Collections.Generic.ICollection<T>.get_IsReadOnly addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_Generic_ICollection_T__get_IsReadOnly() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::__HashSet_1__Enumerator<::UnityEngine::ProBuilder::EdgeLookup> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::ProBuilder::EdgeLookup>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method GetObjectData addr 0x0 size 0xffffffffffffffff virtual true final false
inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method OnDeserialization addr 0x0 size 0xffffffffffffffff virtual true final false
inline void OnDeserialization(::System::Object*  sender) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Add(::UnityEngine::ProBuilder::EdgeLookup  item) ;

/// @brief Method UnionWith addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnionWith(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::EdgeLookup>*  other) ;

/// @brief Method IntersectWith addr 0x0 size 0xffffffffffffffff virtual true final true
inline void IntersectWith(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::EdgeLookup>*  other) ;

/// @brief Method ExceptWith addr 0x0 size 0xffffffffffffffff virtual true final true
inline void ExceptWith(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::EdgeLookup>*  other) ;

/// @brief Method SetEquals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool SetEquals(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::EdgeLookup>*  other) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyTo(::ArrayW<::UnityEngine::ProBuilder::EdgeLookup,::Array<::UnityEngine::ProBuilder::EdgeLookup>*>  array) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyTo(::ArrayW<::UnityEngine::ProBuilder::EdgeLookup,::Array<::UnityEngine::ProBuilder::EdgeLookup>*>  array, int32_t  arrayIndex, int32_t  count) ;

/// @brief Method RemoveWhere addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t RemoveWhere(::System::Predicate_1<::UnityEngine::ProBuilder::EdgeLookup>*  match) ;

/// @brief Method get_Comparer addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::EdgeLookup>* get_Comparer() ;

/// @brief Method TrimExcess addr 0x0 size 0xffffffffffffffff virtual false final false
inline void TrimExcess() ;

/// @brief Method Initialize addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t Initialize(int32_t  capacity) ;

/// @brief Method IncreaseCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void IncreaseCapacity() ;

/// @brief Method SetCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetCapacity(int32_t  newSize) ;

/// @brief Method AddIfNotPresent addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool AddIfNotPresent(::UnityEngine::ProBuilder::EdgeLookup  value) ;

/// @brief Method AddValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddValue(int32_t  index, int32_t  hashCode, ::UnityEngine::ProBuilder::EdgeLookup  value) ;

/// @brief Method ContainsAllElements addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool ContainsAllElements(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::EdgeLookup>*  other) ;

/// @brief Method IntersectWithHashSetWithSameEC addr 0x0 size 0xffffffffffffffff virtual false final false
inline void IntersectWithHashSetWithSameEC(::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::EdgeLookup>*  other) ;

/// @brief Method IntersectWithEnumerable addr 0x0 size 0xffffffffffffffff virtual false final false
inline void IntersectWithEnumerable(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::EdgeLookup>*  other) ;

/// @brief Method InternalIndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t InternalIndexOf(::UnityEngine::ProBuilder::EdgeLookup  item) ;

/// @brief Method CheckUniqueAndUnfoundElements addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::__HashSet_1__ElementCount<::UnityEngine::ProBuilder::EdgeLookup> CheckUniqueAndUnfoundElements(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::EdgeLookup>*  other, bool  returnIfUnfound) ;

/// @brief Method AreEqualityComparersEqual addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool AreEqualityComparersEqual(::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::EdgeLookup>*  set1, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::EdgeLookup>*  set2) ;

/// @brief Method InternalGetHashCode addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t InternalGetHashCode(::UnityEngine::ProBuilder::EdgeLookup  item) ;

// Ctor Parameters [CppParam { name: "", ty: "HashSet_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HashSet_1(HashSet_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HashSet_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HashSet_1(HashSet_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HashSet_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::HashSet`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14315))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14315), inst: 2592 })
// CS Name: ::System.Collections.Generic::HashSet`1<T>*
class CORDL_TYPE HashSet_1<::UnityEngine::ProBuilder::Edge> : public ::System::Object {
public:
// Declarations
using Enumerator = ::System::Collections::Generic::__HashSet_1__Enumerator<::UnityEngine::ProBuilder::Edge>;

using Slot = ::System::Collections::Generic::__HashSet_1__Slot<::UnityEngine::ProBuilder::Edge>;

using ElementCount = ::System::Collections::Generic::__HashSet_1__ElementCount<::UnityEngine::ProBuilder::Edge>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::System::Object)]{};

/// @brief Field Lower31BitMask offset 0x0
static constexpr int32_t  Lower31BitMask{static_cast<int32_t>(0x7fffffff)};

/// @brief Field StackAllocThreshold offset 0x0
static constexpr int32_t  StackAllocThreshold{static_cast<int32_t>(0x64)};

/// @brief Field ShrinkThreshold offset 0x0
static constexpr int32_t  ShrinkThreshold{static_cast<int32_t>(0x3)};

/// @brief Field CapacityName offset 0x0
static constexpr ::ConstString  CapacityName{u"Capacity"};

/// @brief Field ElementsName offset 0x0
static constexpr ::ConstString  ElementsName{u"Elements"};

/// @brief Field ComparerName offset 0x0
static constexpr ::ConstString  ComparerName{u"Comparer"};

/// @brief Field VersionName offset 0x0
static constexpr ::ConstString  VersionName{u"Version"};

/// @brief Field _buckets offset 0x10
 __declspec(property(get=__get__buckets, put=__set__buckets)) ::ArrayW<int32_t,::Array<int32_t>*>  _buckets;

/// @brief Field _slots offset 0x18
 __declspec(property(get=__get__slots, put=__set__slots)) ::ArrayW<::System::Collections::Generic::__HashSet_1__Slot<::UnityEngine::ProBuilder::Edge>,::Array<::System::Collections::Generic::__HashSet_1__Slot<::UnityEngine::ProBuilder::Edge>>*>  _slots;

/// @brief Field _count offset 0x20
 __declspec(property(get=__get__count, put=__set__count)) int32_t  _count;

/// @brief Field _lastIndex offset 0x24
 __declspec(property(get=__get__lastIndex, put=__set__lastIndex)) int32_t  _lastIndex;

/// @brief Field _freeList offset 0x28
 __declspec(property(get=__get__freeList, put=__set__freeList)) int32_t  _freeList;

/// @brief Field _comparer offset 0x30
 __declspec(property(get=__get__comparer, put=__set__comparer)) ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::Edge>*  _comparer;

/// @brief Field _version offset 0x38
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _siInfo offset 0x40
 __declspec(property(get=__get__siInfo, put=__set__siInfo)) ::System::Runtime::Serialization::SerializationInfo*  _siInfo;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=System_Collections_Generic_ICollection_T__get_IsReadOnly)) bool  System_Collections_Generic_ICollection_T__IsReadOnly;

 __declspec(property(get=get_Comparer)) ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::Edge>*  Comparer;

/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::UnityEngine::ProBuilder::Edge>"
constexpr operator  ::System::Collections::Generic::ICollection_1<::UnityEngine::ProBuilder::Edge>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::ProBuilder::Edge>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::ProBuilder::Edge>*() noexcept;

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() noexcept;

/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr operator  ::System::Runtime::Serialization::IDeserializationCallback*() noexcept;

constexpr void __set__buckets(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get__buckets() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get__buckets() const;

constexpr void __set__slots(::ArrayW<::System::Collections::Generic::__HashSet_1__Slot<::UnityEngine::ProBuilder::Edge>,::Array<::System::Collections::Generic::__HashSet_1__Slot<::UnityEngine::ProBuilder::Edge>>*>  value) ;

constexpr ::ArrayW<::System::Collections::Generic::__HashSet_1__Slot<::UnityEngine::ProBuilder::Edge>,::Array<::System::Collections::Generic::__HashSet_1__Slot<::UnityEngine::ProBuilder::Edge>>*>& __get__slots() ;

constexpr ::ArrayW<::System::Collections::Generic::__HashSet_1__Slot<::UnityEngine::ProBuilder::Edge>,::Array<::System::Collections::Generic::__HashSet_1__Slot<::UnityEngine::ProBuilder::Edge>>*> const& __get__slots() const;

constexpr void __set__count(int32_t  value) ;

constexpr int32_t& __get__count() ;

constexpr int32_t const& __get__count() const;

constexpr void __set__lastIndex(int32_t  value) ;

constexpr int32_t& __get__lastIndex() ;

constexpr int32_t const& __get__lastIndex() const;

constexpr void __set__freeList(int32_t  value) ;

constexpr int32_t& __get__freeList() ;

constexpr int32_t const& __get__freeList() const;

constexpr void __set__comparer(::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::Edge>*  value) ;

constexpr ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::Edge>* __get__comparer() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::Edge>*> __get__comparer() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__siInfo(::System::Runtime::Serialization::SerializationInfo*  value) ;

constexpr ::System::Runtime::Serialization::SerializationInfo* __get__siInfo() ;

constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::SerializationInfo*> __get__siInfo() const;

static inline ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Edge>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Edge>* New_ctor(::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::Edge>*  comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::Edge>*  comparer) ;

static inline ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Edge>* New_ctor(int32_t  capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity) ;

static inline ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Edge>* New_ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*  collection) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*  collection) ;

static inline ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Edge>* New_ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*  collection, ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::Edge>*  comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*  collection, ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::Edge>*  comparer) ;

static inline ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Edge>* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyFrom(::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Edge>*  source) ;

static inline ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Edge>* New_ctor(int32_t  capacity, ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::Edge>*  comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity, ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::Edge>*  comparer) ;

/// @brief Method System.Collections.Generic.ICollection<T>.Add addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_Generic_ICollection_T__Add(::UnityEngine::ProBuilder::Edge  item) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Contains(::UnityEngine::ProBuilder::Edge  item) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline void CopyTo(::ArrayW<::UnityEngine::ProBuilder::Edge,::Array<::UnityEngine::ProBuilder::Edge>*>  array, int32_t  arrayIndex) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Remove(::UnityEngine::ProBuilder::Edge  item) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method System.Collections.Generic.ICollection<T>.get_IsReadOnly addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_Generic_ICollection_T__get_IsReadOnly() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::__HashSet_1__Enumerator<::UnityEngine::ProBuilder::Edge> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::ProBuilder::Edge>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method GetObjectData addr 0x0 size 0xffffffffffffffff virtual true final false
inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method OnDeserialization addr 0x0 size 0xffffffffffffffff virtual true final false
inline void OnDeserialization(::System::Object*  sender) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Add(::UnityEngine::ProBuilder::Edge  item) ;

/// @brief Method UnionWith addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnionWith(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*  other) ;

/// @brief Method IntersectWith addr 0x0 size 0xffffffffffffffff virtual true final true
inline void IntersectWith(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*  other) ;

/// @brief Method ExceptWith addr 0x0 size 0xffffffffffffffff virtual true final true
inline void ExceptWith(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*  other) ;

/// @brief Method SetEquals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool SetEquals(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*  other) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyTo(::ArrayW<::UnityEngine::ProBuilder::Edge,::Array<::UnityEngine::ProBuilder::Edge>*>  array) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyTo(::ArrayW<::UnityEngine::ProBuilder::Edge,::Array<::UnityEngine::ProBuilder::Edge>*>  array, int32_t  arrayIndex, int32_t  count) ;

/// @brief Method RemoveWhere addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t RemoveWhere(::System::Predicate_1<::UnityEngine::ProBuilder::Edge>*  match) ;

/// @brief Method get_Comparer addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::Edge>* get_Comparer() ;

/// @brief Method TrimExcess addr 0x0 size 0xffffffffffffffff virtual false final false
inline void TrimExcess() ;

/// @brief Method Initialize addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t Initialize(int32_t  capacity) ;

/// @brief Method IncreaseCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void IncreaseCapacity() ;

/// @brief Method SetCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetCapacity(int32_t  newSize) ;

/// @brief Method AddIfNotPresent addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool AddIfNotPresent(::UnityEngine::ProBuilder::Edge  value) ;

/// @brief Method AddValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddValue(int32_t  index, int32_t  hashCode, ::UnityEngine::ProBuilder::Edge  value) ;

/// @brief Method ContainsAllElements addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool ContainsAllElements(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*  other) ;

/// @brief Method IntersectWithHashSetWithSameEC addr 0x0 size 0xffffffffffffffff virtual false final false
inline void IntersectWithHashSetWithSameEC(::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Edge>*  other) ;

/// @brief Method IntersectWithEnumerable addr 0x0 size 0xffffffffffffffff virtual false final false
inline void IntersectWithEnumerable(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*  other) ;

/// @brief Method InternalIndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t InternalIndexOf(::UnityEngine::ProBuilder::Edge  item) ;

/// @brief Method CheckUniqueAndUnfoundElements addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::__HashSet_1__ElementCount<::UnityEngine::ProBuilder::Edge> CheckUniqueAndUnfoundElements(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*  other, bool  returnIfUnfound) ;

/// @brief Method AreEqualityComparersEqual addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool AreEqualityComparersEqual(::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Edge>*  set1, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Edge>*  set2) ;

/// @brief Method InternalGetHashCode addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t InternalGetHashCode(::UnityEngine::ProBuilder::Edge  item) ;

// Ctor Parameters [CppParam { name: "", ty: "HashSet_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HashSet_1(HashSet_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HashSet_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HashSet_1(HashSet_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HashSet_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::HashSet`1
namespace System::Collections::Generic {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14315))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14315), inst: 974 })
// CS Name: ::System.Collections.Generic::HashSet`1<T>*
class CORDL_TYPE HashSet_1<T> : public ::System::Object {
public:
// Declarations
using Enumerator = ::System::Collections::Generic::__HashSet_1__Enumerator<T>;

using Slot = ::System::Collections::Generic::__HashSet_1__Slot<T>;

using ElementCount = ::System::Collections::Generic::__HashSet_1__ElementCount<T>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::System::Object)]{};

/// @brief Field Lower31BitMask offset 0x0
static constexpr int32_t  Lower31BitMask{static_cast<int32_t>(0x7fffffff)};

/// @brief Field StackAllocThreshold offset 0x0
static constexpr int32_t  StackAllocThreshold{static_cast<int32_t>(0x64)};

/// @brief Field ShrinkThreshold offset 0x0
static constexpr int32_t  ShrinkThreshold{static_cast<int32_t>(0x3)};

/// @brief Field CapacityName offset 0x0
static constexpr ::ConstString  CapacityName{u"Capacity"};

/// @brief Field ElementsName offset 0x0
static constexpr ::ConstString  ElementsName{u"Elements"};

/// @brief Field ComparerName offset 0x0
static constexpr ::ConstString  ComparerName{u"Comparer"};

/// @brief Field VersionName offset 0x0
static constexpr ::ConstString  VersionName{u"Version"};

/// @brief Field _buckets offset 0x10
 __declspec(property(get=__get__buckets, put=__set__buckets)) ::ArrayW<int32_t,::Array<int32_t>*>  _buckets;

/// @brief Field _slots offset 0x18
 __declspec(property(get=__get__slots, put=__set__slots)) ::ArrayW<::System::Collections::Generic::__HashSet_1__Slot<T>,::Array<::System::Collections::Generic::__HashSet_1__Slot<T>>*>  _slots;

/// @brief Field _count offset 0x20
 __declspec(property(get=__get__count, put=__set__count)) int32_t  _count;

/// @brief Field _lastIndex offset 0x24
 __declspec(property(get=__get__lastIndex, put=__set__lastIndex)) int32_t  _lastIndex;

/// @brief Field _freeList offset 0x28
 __declspec(property(get=__get__freeList, put=__set__freeList)) int32_t  _freeList;

/// @brief Field _comparer offset 0x30
 __declspec(property(get=__get__comparer, put=__set__comparer)) ::System::Collections::Generic::IEqualityComparer_1<T>*  _comparer;

/// @brief Field _version offset 0x38
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _siInfo offset 0x40
 __declspec(property(get=__get__siInfo, put=__set__siInfo)) ::System::Runtime::Serialization::SerializationInfo*  _siInfo;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=System_Collections_Generic_ICollection_T__get_IsReadOnly)) bool  System_Collections_Generic_ICollection_T__IsReadOnly;

 __declspec(property(get=get_Comparer)) ::System::Collections::Generic::IEqualityComparer_1<T>*  Comparer;

/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<T>"
constexpr operator  ::System::Collections::Generic::ICollection_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<T>*() noexcept;

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() noexcept;

/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr operator  ::System::Runtime::Serialization::IDeserializationCallback*() noexcept;

constexpr void __set__buckets(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get__buckets() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get__buckets() const;

constexpr void __set__slots(::ArrayW<::System::Collections::Generic::__HashSet_1__Slot<T>,::Array<::System::Collections::Generic::__HashSet_1__Slot<T>>*>  value) ;

constexpr ::ArrayW<::System::Collections::Generic::__HashSet_1__Slot<T>,::Array<::System::Collections::Generic::__HashSet_1__Slot<T>>*>& __get__slots() ;

constexpr ::ArrayW<::System::Collections::Generic::__HashSet_1__Slot<T>,::Array<::System::Collections::Generic::__HashSet_1__Slot<T>>*> const& __get__slots() const;

constexpr void __set__count(int32_t  value) ;

constexpr int32_t& __get__count() ;

constexpr int32_t const& __get__count() const;

constexpr void __set__lastIndex(int32_t  value) ;

constexpr int32_t& __get__lastIndex() ;

constexpr int32_t const& __get__lastIndex() const;

constexpr void __set__freeList(int32_t  value) ;

constexpr int32_t& __get__freeList() ;

constexpr int32_t const& __get__freeList() const;

constexpr void __set__comparer(::System::Collections::Generic::IEqualityComparer_1<T>*  value) ;

constexpr ::System::Collections::Generic::IEqualityComparer_1<T>* __get__comparer() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEqualityComparer_1<T>*> __get__comparer() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__siInfo(::System::Runtime::Serialization::SerializationInfo*  value) ;

constexpr ::System::Runtime::Serialization::SerializationInfo* __get__siInfo() ;

constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::SerializationInfo*> __get__siInfo() const;

static inline ::System::Collections::Generic::HashSet_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Collections::Generic::HashSet_1<T>* New_ctor(::System::Collections::Generic::IEqualityComparer_1<T>*  comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEqualityComparer_1<T>*  comparer) ;

static inline ::System::Collections::Generic::HashSet_1<T>* New_ctor(int32_t  capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity) ;

static inline ::System::Collections::Generic::HashSet_1<T>* New_ctor(::System::Collections::Generic::IEnumerable_1<T>*  collection) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<T>*  collection) ;

static inline ::System::Collections::Generic::HashSet_1<T>* New_ctor(::System::Collections::Generic::IEnumerable_1<T>*  collection, ::System::Collections::Generic::IEqualityComparer_1<T>*  comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<T>*  collection, ::System::Collections::Generic::IEqualityComparer_1<T>*  comparer) ;

static inline ::System::Collections::Generic::HashSet_1<T>* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyFrom(::System::Collections::Generic::HashSet_1<T>*  source) ;

static inline ::System::Collections::Generic::HashSet_1<T>* New_ctor(int32_t  capacity, ::System::Collections::Generic::IEqualityComparer_1<T>*  comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity, ::System::Collections::Generic::IEqualityComparer_1<T>*  comparer) ;

/// @brief Method System.Collections.Generic.ICollection<T>.Add addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_Generic_ICollection_T__Add(T  item) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Contains(T  item) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline void CopyTo(::ArrayW<T,::Array<T>*>  array, int32_t  arrayIndex) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Remove(T  item) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method System.Collections.Generic.ICollection<T>.get_IsReadOnly addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_Generic_ICollection_T__get_IsReadOnly() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::__HashSet_1__Enumerator<T> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method GetObjectData addr 0x0 size 0xffffffffffffffff virtual true final false
inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method OnDeserialization addr 0x0 size 0xffffffffffffffff virtual true final false
inline void OnDeserialization(::System::Object*  sender) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Add(T  item) ;

/// @brief Method UnionWith addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnionWith(::System::Collections::Generic::IEnumerable_1<T>*  other) ;

/// @brief Method IntersectWith addr 0x0 size 0xffffffffffffffff virtual true final true
inline void IntersectWith(::System::Collections::Generic::IEnumerable_1<T>*  other) ;

/// @brief Method ExceptWith addr 0x0 size 0xffffffffffffffff virtual true final true
inline void ExceptWith(::System::Collections::Generic::IEnumerable_1<T>*  other) ;

/// @brief Method SetEquals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool SetEquals(::System::Collections::Generic::IEnumerable_1<T>*  other) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyTo(::ArrayW<T,::Array<T>*>  array) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyTo(::ArrayW<T,::Array<T>*>  array, int32_t  arrayIndex, int32_t  count) ;

/// @brief Method RemoveWhere addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t RemoveWhere(::System::Predicate_1<T>*  match) ;

/// @brief Method get_Comparer addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::IEqualityComparer_1<T>* get_Comparer() ;

/// @brief Method TrimExcess addr 0x0 size 0xffffffffffffffff virtual false final false
inline void TrimExcess() ;

/// @brief Method Initialize addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t Initialize(int32_t  capacity) ;

/// @brief Method IncreaseCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void IncreaseCapacity() ;

/// @brief Method SetCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetCapacity(int32_t  newSize) ;

/// @brief Method AddIfNotPresent addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool AddIfNotPresent(T  value) ;

/// @brief Method AddValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddValue(int32_t  index, int32_t  hashCode, T  value) ;

/// @brief Method ContainsAllElements addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool ContainsAllElements(::System::Collections::Generic::IEnumerable_1<T>*  other) ;

/// @brief Method IntersectWithHashSetWithSameEC addr 0x0 size 0xffffffffffffffff virtual false final false
inline void IntersectWithHashSetWithSameEC(::System::Collections::Generic::HashSet_1<T>*  other) ;

/// @brief Method IntersectWithEnumerable addr 0x0 size 0xffffffffffffffff virtual false final false
inline void IntersectWithEnumerable(::System::Collections::Generic::IEnumerable_1<T>*  other) ;

/// @brief Method InternalIndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t InternalIndexOf(T  item) ;

/// @brief Method CheckUniqueAndUnfoundElements addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::__HashSet_1__ElementCount<T> CheckUniqueAndUnfoundElements(::System::Collections::Generic::IEnumerable_1<T>*  other, bool  returnIfUnfound) ;

/// @brief Method AreEqualityComparersEqual addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool AreEqualityComparersEqual(::System::Collections::Generic::HashSet_1<T>*  set1, ::System::Collections::Generic::HashSet_1<T>*  set2) ;

/// @brief Method InternalGetHashCode addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t InternalGetHashCode(T  item) ;

// Ctor Parameters [CppParam { name: "", ty: "HashSet_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HashSet_1(HashSet_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HashSet_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HashSet_1(HashSet_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HashSet_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::HashSet`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14315))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14315), inst: 753 })
// CS Name: ::System.Collections.Generic::HashSet`1<T>*
class CORDL_TYPE HashSet_1<uint32_t> : public ::System::Object {
public:
// Declarations
using Enumerator = ::System::Collections::Generic::__HashSet_1__Enumerator<uint32_t>;

using Slot = ::System::Collections::Generic::__HashSet_1__Slot<uint32_t>;

using ElementCount = ::System::Collections::Generic::__HashSet_1__ElementCount<uint32_t>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::System::Object)]{};

/// @brief Field Lower31BitMask offset 0x0
static constexpr int32_t  Lower31BitMask{static_cast<int32_t>(0x7fffffff)};

/// @brief Field StackAllocThreshold offset 0x0
static constexpr int32_t  StackAllocThreshold{static_cast<int32_t>(0x64)};

/// @brief Field ShrinkThreshold offset 0x0
static constexpr int32_t  ShrinkThreshold{static_cast<int32_t>(0x3)};

/// @brief Field CapacityName offset 0x0
static constexpr ::ConstString  CapacityName{u"Capacity"};

/// @brief Field ElementsName offset 0x0
static constexpr ::ConstString  ElementsName{u"Elements"};

/// @brief Field ComparerName offset 0x0
static constexpr ::ConstString  ComparerName{u"Comparer"};

/// @brief Field VersionName offset 0x0
static constexpr ::ConstString  VersionName{u"Version"};

/// @brief Field _buckets offset 0x10
 __declspec(property(get=__get__buckets, put=__set__buckets)) ::ArrayW<int32_t,::Array<int32_t>*>  _buckets;

/// @brief Field _slots offset 0x18
 __declspec(property(get=__get__slots, put=__set__slots)) ::ArrayW<::System::Collections::Generic::__HashSet_1__Slot<uint32_t>,::Array<::System::Collections::Generic::__HashSet_1__Slot<uint32_t>>*>  _slots;

/// @brief Field _count offset 0x20
 __declspec(property(get=__get__count, put=__set__count)) int32_t  _count;

/// @brief Field _lastIndex offset 0x24
 __declspec(property(get=__get__lastIndex, put=__set__lastIndex)) int32_t  _lastIndex;

/// @brief Field _freeList offset 0x28
 __declspec(property(get=__get__freeList, put=__set__freeList)) int32_t  _freeList;

/// @brief Field _comparer offset 0x30
 __declspec(property(get=__get__comparer, put=__set__comparer)) ::System::Collections::Generic::IEqualityComparer_1<uint32_t>*  _comparer;

/// @brief Field _version offset 0x38
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _siInfo offset 0x40
 __declspec(property(get=__get__siInfo, put=__set__siInfo)) ::System::Runtime::Serialization::SerializationInfo*  _siInfo;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=System_Collections_Generic_ICollection_T__get_IsReadOnly)) bool  System_Collections_Generic_ICollection_T__IsReadOnly;

 __declspec(property(get=get_Comparer)) ::System::Collections::Generic::IEqualityComparer_1<uint32_t>*  Comparer;

/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<uint32_t>"
constexpr operator  ::System::Collections::Generic::ICollection_1<uint32_t>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<uint32_t>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<uint32_t>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>*() noexcept;

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() noexcept;

/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr operator  ::System::Runtime::Serialization::IDeserializationCallback*() noexcept;

constexpr void __set__buckets(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get__buckets() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get__buckets() const;

constexpr void __set__slots(::ArrayW<::System::Collections::Generic::__HashSet_1__Slot<uint32_t>,::Array<::System::Collections::Generic::__HashSet_1__Slot<uint32_t>>*>  value) ;

constexpr ::ArrayW<::System::Collections::Generic::__HashSet_1__Slot<uint32_t>,::Array<::System::Collections::Generic::__HashSet_1__Slot<uint32_t>>*>& __get__slots() ;

constexpr ::ArrayW<::System::Collections::Generic::__HashSet_1__Slot<uint32_t>,::Array<::System::Collections::Generic::__HashSet_1__Slot<uint32_t>>*> const& __get__slots() const;

constexpr void __set__count(int32_t  value) ;

constexpr int32_t& __get__count() ;

constexpr int32_t const& __get__count() const;

constexpr void __set__lastIndex(int32_t  value) ;

constexpr int32_t& __get__lastIndex() ;

constexpr int32_t const& __get__lastIndex() const;

constexpr void __set__freeList(int32_t  value) ;

constexpr int32_t& __get__freeList() ;

constexpr int32_t const& __get__freeList() const;

constexpr void __set__comparer(::System::Collections::Generic::IEqualityComparer_1<uint32_t>*  value) ;

constexpr ::System::Collections::Generic::IEqualityComparer_1<uint32_t>* __get__comparer() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEqualityComparer_1<uint32_t>*> __get__comparer() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__siInfo(::System::Runtime::Serialization::SerializationInfo*  value) ;

constexpr ::System::Runtime::Serialization::SerializationInfo* __get__siInfo() ;

constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::SerializationInfo*> __get__siInfo() const;

static inline ::System::Collections::Generic::HashSet_1<uint32_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Collections::Generic::HashSet_1<uint32_t>* New_ctor(::System::Collections::Generic::IEqualityComparer_1<uint32_t>*  comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEqualityComparer_1<uint32_t>*  comparer) ;

static inline ::System::Collections::Generic::HashSet_1<uint32_t>* New_ctor(int32_t  capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity) ;

static inline ::System::Collections::Generic::HashSet_1<uint32_t>* New_ctor(::System::Collections::Generic::IEnumerable_1<uint32_t>*  collection) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<uint32_t>*  collection) ;

static inline ::System::Collections::Generic::HashSet_1<uint32_t>* New_ctor(::System::Collections::Generic::IEnumerable_1<uint32_t>*  collection, ::System::Collections::Generic::IEqualityComparer_1<uint32_t>*  comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<uint32_t>*  collection, ::System::Collections::Generic::IEqualityComparer_1<uint32_t>*  comparer) ;

static inline ::System::Collections::Generic::HashSet_1<uint32_t>* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyFrom(::System::Collections::Generic::HashSet_1<uint32_t>*  source) ;

static inline ::System::Collections::Generic::HashSet_1<uint32_t>* New_ctor(int32_t  capacity, ::System::Collections::Generic::IEqualityComparer_1<uint32_t>*  comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity, ::System::Collections::Generic::IEqualityComparer_1<uint32_t>*  comparer) ;

/// @brief Method System.Collections.Generic.ICollection<T>.Add addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_Generic_ICollection_T__Add(uint32_t  item) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Contains(uint32_t  item) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline void CopyTo(::ArrayW<uint32_t,::Array<uint32_t>*>  array, int32_t  arrayIndex) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Remove(uint32_t  item) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method System.Collections.Generic.ICollection<T>.get_IsReadOnly addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_Generic_ICollection_T__get_IsReadOnly() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::__HashSet_1__Enumerator<uint32_t> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<uint32_t>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method GetObjectData addr 0x0 size 0xffffffffffffffff virtual true final false
inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method OnDeserialization addr 0x0 size 0xffffffffffffffff virtual true final false
inline void OnDeserialization(::System::Object*  sender) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Add(uint32_t  item) ;

/// @brief Method UnionWith addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnionWith(::System::Collections::Generic::IEnumerable_1<uint32_t>*  other) ;

/// @brief Method IntersectWith addr 0x0 size 0xffffffffffffffff virtual true final true
inline void IntersectWith(::System::Collections::Generic::IEnumerable_1<uint32_t>*  other) ;

/// @brief Method ExceptWith addr 0x0 size 0xffffffffffffffff virtual true final true
inline void ExceptWith(::System::Collections::Generic::IEnumerable_1<uint32_t>*  other) ;

/// @brief Method SetEquals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool SetEquals(::System::Collections::Generic::IEnumerable_1<uint32_t>*  other) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyTo(::ArrayW<uint32_t,::Array<uint32_t>*>  array) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyTo(::ArrayW<uint32_t,::Array<uint32_t>*>  array, int32_t  arrayIndex, int32_t  count) ;

/// @brief Method RemoveWhere addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t RemoveWhere(::System::Predicate_1<uint32_t>*  match) ;

/// @brief Method get_Comparer addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::IEqualityComparer_1<uint32_t>* get_Comparer() ;

/// @brief Method TrimExcess addr 0x0 size 0xffffffffffffffff virtual false final false
inline void TrimExcess() ;

/// @brief Method Initialize addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t Initialize(int32_t  capacity) ;

/// @brief Method IncreaseCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void IncreaseCapacity() ;

/// @brief Method SetCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetCapacity(int32_t  newSize) ;

/// @brief Method AddIfNotPresent addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool AddIfNotPresent(uint32_t  value) ;

/// @brief Method AddValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddValue(int32_t  index, int32_t  hashCode, uint32_t  value) ;

/// @brief Method ContainsAllElements addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool ContainsAllElements(::System::Collections::Generic::IEnumerable_1<uint32_t>*  other) ;

/// @brief Method IntersectWithHashSetWithSameEC addr 0x0 size 0xffffffffffffffff virtual false final false
inline void IntersectWithHashSetWithSameEC(::System::Collections::Generic::HashSet_1<uint32_t>*  other) ;

/// @brief Method IntersectWithEnumerable addr 0x0 size 0xffffffffffffffff virtual false final false
inline void IntersectWithEnumerable(::System::Collections::Generic::IEnumerable_1<uint32_t>*  other) ;

/// @brief Method InternalIndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t InternalIndexOf(uint32_t  item) ;

/// @brief Method CheckUniqueAndUnfoundElements addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::__HashSet_1__ElementCount<uint32_t> CheckUniqueAndUnfoundElements(::System::Collections::Generic::IEnumerable_1<uint32_t>*  other, bool  returnIfUnfound) ;

/// @brief Method AreEqualityComparersEqual addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool AreEqualityComparersEqual(::System::Collections::Generic::HashSet_1<uint32_t>*  set1, ::System::Collections::Generic::HashSet_1<uint32_t>*  set2) ;

/// @brief Method InternalGetHashCode addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t InternalGetHashCode(uint32_t  item) ;

// Ctor Parameters [CppParam { name: "", ty: "HashSet_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HashSet_1(HashSet_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HashSet_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HashSet_1(HashSet_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HashSet_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::HashSet`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14315))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14315), inst: 407 })
// CS Name: ::System.Collections.Generic::HashSet`1<T>*
class CORDL_TYPE HashSet_1<uint64_t> : public ::System::Object {
public:
// Declarations
using Enumerator = ::System::Collections::Generic::__HashSet_1__Enumerator<uint64_t>;

using Slot = ::System::Collections::Generic::__HashSet_1__Slot<uint64_t>;

using ElementCount = ::System::Collections::Generic::__HashSet_1__ElementCount<uint64_t>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::System::Object)]{};

/// @brief Field Lower31BitMask offset 0x0
static constexpr int32_t  Lower31BitMask{static_cast<int32_t>(0x7fffffff)};

/// @brief Field StackAllocThreshold offset 0x0
static constexpr int32_t  StackAllocThreshold{static_cast<int32_t>(0x64)};

/// @brief Field ShrinkThreshold offset 0x0
static constexpr int32_t  ShrinkThreshold{static_cast<int32_t>(0x3)};

/// @brief Field CapacityName offset 0x0
static constexpr ::ConstString  CapacityName{u"Capacity"};

/// @brief Field ElementsName offset 0x0
static constexpr ::ConstString  ElementsName{u"Elements"};

/// @brief Field ComparerName offset 0x0
static constexpr ::ConstString  ComparerName{u"Comparer"};

/// @brief Field VersionName offset 0x0
static constexpr ::ConstString  VersionName{u"Version"};

/// @brief Field _buckets offset 0x10
 __declspec(property(get=__get__buckets, put=__set__buckets)) ::ArrayW<int32_t,::Array<int32_t>*>  _buckets;

/// @brief Field _slots offset 0x18
 __declspec(property(get=__get__slots, put=__set__slots)) ::ArrayW<::System::Collections::Generic::__HashSet_1__Slot<uint64_t>,::Array<::System::Collections::Generic::__HashSet_1__Slot<uint64_t>>*>  _slots;

/// @brief Field _count offset 0x20
 __declspec(property(get=__get__count, put=__set__count)) int32_t  _count;

/// @brief Field _lastIndex offset 0x24
 __declspec(property(get=__get__lastIndex, put=__set__lastIndex)) int32_t  _lastIndex;

/// @brief Field _freeList offset 0x28
 __declspec(property(get=__get__freeList, put=__set__freeList)) int32_t  _freeList;

/// @brief Field _comparer offset 0x30
 __declspec(property(get=__get__comparer, put=__set__comparer)) ::System::Collections::Generic::IEqualityComparer_1<uint64_t>*  _comparer;

/// @brief Field _version offset 0x38
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _siInfo offset 0x40
 __declspec(property(get=__get__siInfo, put=__set__siInfo)) ::System::Runtime::Serialization::SerializationInfo*  _siInfo;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=System_Collections_Generic_ICollection_T__get_IsReadOnly)) bool  System_Collections_Generic_ICollection_T__IsReadOnly;

 __declspec(property(get=get_Comparer)) ::System::Collections::Generic::IEqualityComparer_1<uint64_t>*  Comparer;

/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<uint64_t>"
constexpr operator  ::System::Collections::Generic::ICollection_1<uint64_t>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<uint64_t>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<uint64_t>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<uint64_t>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<uint64_t>*() noexcept;

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() noexcept;

/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr operator  ::System::Runtime::Serialization::IDeserializationCallback*() noexcept;

constexpr void __set__buckets(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get__buckets() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get__buckets() const;

constexpr void __set__slots(::ArrayW<::System::Collections::Generic::__HashSet_1__Slot<uint64_t>,::Array<::System::Collections::Generic::__HashSet_1__Slot<uint64_t>>*>  value) ;

constexpr ::ArrayW<::System::Collections::Generic::__HashSet_1__Slot<uint64_t>,::Array<::System::Collections::Generic::__HashSet_1__Slot<uint64_t>>*>& __get__slots() ;

constexpr ::ArrayW<::System::Collections::Generic::__HashSet_1__Slot<uint64_t>,::Array<::System::Collections::Generic::__HashSet_1__Slot<uint64_t>>*> const& __get__slots() const;

constexpr void __set__count(int32_t  value) ;

constexpr int32_t& __get__count() ;

constexpr int32_t const& __get__count() const;

constexpr void __set__lastIndex(int32_t  value) ;

constexpr int32_t& __get__lastIndex() ;

constexpr int32_t const& __get__lastIndex() const;

constexpr void __set__freeList(int32_t  value) ;

constexpr int32_t& __get__freeList() ;

constexpr int32_t const& __get__freeList() const;

constexpr void __set__comparer(::System::Collections::Generic::IEqualityComparer_1<uint64_t>*  value) ;

constexpr ::System::Collections::Generic::IEqualityComparer_1<uint64_t>* __get__comparer() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEqualityComparer_1<uint64_t>*> __get__comparer() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__siInfo(::System::Runtime::Serialization::SerializationInfo*  value) ;

constexpr ::System::Runtime::Serialization::SerializationInfo* __get__siInfo() ;

constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::SerializationInfo*> __get__siInfo() const;

static inline ::System::Collections::Generic::HashSet_1<uint64_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Collections::Generic::HashSet_1<uint64_t>* New_ctor(::System::Collections::Generic::IEqualityComparer_1<uint64_t>*  comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEqualityComparer_1<uint64_t>*  comparer) ;

static inline ::System::Collections::Generic::HashSet_1<uint64_t>* New_ctor(int32_t  capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity) ;

static inline ::System::Collections::Generic::HashSet_1<uint64_t>* New_ctor(::System::Collections::Generic::IEnumerable_1<uint64_t>*  collection) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<uint64_t>*  collection) ;

static inline ::System::Collections::Generic::HashSet_1<uint64_t>* New_ctor(::System::Collections::Generic::IEnumerable_1<uint64_t>*  collection, ::System::Collections::Generic::IEqualityComparer_1<uint64_t>*  comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<uint64_t>*  collection, ::System::Collections::Generic::IEqualityComparer_1<uint64_t>*  comparer) ;

static inline ::System::Collections::Generic::HashSet_1<uint64_t>* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyFrom(::System::Collections::Generic::HashSet_1<uint64_t>*  source) ;

static inline ::System::Collections::Generic::HashSet_1<uint64_t>* New_ctor(int32_t  capacity, ::System::Collections::Generic::IEqualityComparer_1<uint64_t>*  comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity, ::System::Collections::Generic::IEqualityComparer_1<uint64_t>*  comparer) ;

/// @brief Method System.Collections.Generic.ICollection<T>.Add addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_Generic_ICollection_T__Add(uint64_t  item) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Contains(uint64_t  item) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline void CopyTo(::ArrayW<uint64_t,::Array<uint64_t>*>  array, int32_t  arrayIndex) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Remove(uint64_t  item) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method System.Collections.Generic.ICollection<T>.get_IsReadOnly addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_Generic_ICollection_T__get_IsReadOnly() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::__HashSet_1__Enumerator<uint64_t> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<uint64_t>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method GetObjectData addr 0x0 size 0xffffffffffffffff virtual true final false
inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method OnDeserialization addr 0x0 size 0xffffffffffffffff virtual true final false
inline void OnDeserialization(::System::Object*  sender) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Add(uint64_t  item) ;

/// @brief Method UnionWith addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnionWith(::System::Collections::Generic::IEnumerable_1<uint64_t>*  other) ;

/// @brief Method IntersectWith addr 0x0 size 0xffffffffffffffff virtual true final true
inline void IntersectWith(::System::Collections::Generic::IEnumerable_1<uint64_t>*  other) ;

/// @brief Method ExceptWith addr 0x0 size 0xffffffffffffffff virtual true final true
inline void ExceptWith(::System::Collections::Generic::IEnumerable_1<uint64_t>*  other) ;

/// @brief Method SetEquals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool SetEquals(::System::Collections::Generic::IEnumerable_1<uint64_t>*  other) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyTo(::ArrayW<uint64_t,::Array<uint64_t>*>  array) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyTo(::ArrayW<uint64_t,::Array<uint64_t>*>  array, int32_t  arrayIndex, int32_t  count) ;

/// @brief Method RemoveWhere addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t RemoveWhere(::System::Predicate_1<uint64_t>*  match) ;

/// @brief Method get_Comparer addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::IEqualityComparer_1<uint64_t>* get_Comparer() ;

/// @brief Method TrimExcess addr 0x0 size 0xffffffffffffffff virtual false final false
inline void TrimExcess() ;

/// @brief Method Initialize addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t Initialize(int32_t  capacity) ;

/// @brief Method IncreaseCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void IncreaseCapacity() ;

/// @brief Method SetCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetCapacity(int32_t  newSize) ;

/// @brief Method AddIfNotPresent addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool AddIfNotPresent(uint64_t  value) ;

/// @brief Method AddValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddValue(int32_t  index, int32_t  hashCode, uint64_t  value) ;

/// @brief Method ContainsAllElements addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool ContainsAllElements(::System::Collections::Generic::IEnumerable_1<uint64_t>*  other) ;

/// @brief Method IntersectWithHashSetWithSameEC addr 0x0 size 0xffffffffffffffff virtual false final false
inline void IntersectWithHashSetWithSameEC(::System::Collections::Generic::HashSet_1<uint64_t>*  other) ;

/// @brief Method IntersectWithEnumerable addr 0x0 size 0xffffffffffffffff virtual false final false
inline void IntersectWithEnumerable(::System::Collections::Generic::IEnumerable_1<uint64_t>*  other) ;

/// @brief Method InternalIndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t InternalIndexOf(uint64_t  item) ;

/// @brief Method CheckUniqueAndUnfoundElements addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::__HashSet_1__ElementCount<uint64_t> CheckUniqueAndUnfoundElements(::System::Collections::Generic::IEnumerable_1<uint64_t>*  other, bool  returnIfUnfound) ;

/// @brief Method AreEqualityComparersEqual addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool AreEqualityComparersEqual(::System::Collections::Generic::HashSet_1<uint64_t>*  set1, ::System::Collections::Generic::HashSet_1<uint64_t>*  set2) ;

/// @brief Method InternalGetHashCode addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t InternalGetHashCode(uint64_t  item) ;

// Ctor Parameters [CppParam { name: "", ty: "HashSet_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HashSet_1(HashSet_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HashSet_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HashSet_1(HashSet_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HashSet_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::HashSet`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14315))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14315), inst: 314 })
// CS Name: ::System.Collections.Generic::HashSet`1<T>*
class CORDL_TYPE HashSet_1<::System::Guid> : public ::System::Object {
public:
// Declarations
using Enumerator = ::System::Collections::Generic::__HashSet_1__Enumerator<::System::Guid>;

using Slot = ::System::Collections::Generic::__HashSet_1__Slot<::System::Guid>;

using ElementCount = ::System::Collections::Generic::__HashSet_1__ElementCount<::System::Guid>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::System::Object)]{};

/// @brief Field Lower31BitMask offset 0x0
static constexpr int32_t  Lower31BitMask{static_cast<int32_t>(0x7fffffff)};

/// @brief Field StackAllocThreshold offset 0x0
static constexpr int32_t  StackAllocThreshold{static_cast<int32_t>(0x64)};

/// @brief Field ShrinkThreshold offset 0x0
static constexpr int32_t  ShrinkThreshold{static_cast<int32_t>(0x3)};

/// @brief Field CapacityName offset 0x0
static constexpr ::ConstString  CapacityName{u"Capacity"};

/// @brief Field ElementsName offset 0x0
static constexpr ::ConstString  ElementsName{u"Elements"};

/// @brief Field ComparerName offset 0x0
static constexpr ::ConstString  ComparerName{u"Comparer"};

/// @brief Field VersionName offset 0x0
static constexpr ::ConstString  VersionName{u"Version"};

/// @brief Field _buckets offset 0x10
 __declspec(property(get=__get__buckets, put=__set__buckets)) ::ArrayW<int32_t,::Array<int32_t>*>  _buckets;

/// @brief Field _slots offset 0x18
 __declspec(property(get=__get__slots, put=__set__slots)) ::ArrayW<::System::Collections::Generic::__HashSet_1__Slot<::System::Guid>,::Array<::System::Collections::Generic::__HashSet_1__Slot<::System::Guid>>*>  _slots;

/// @brief Field _count offset 0x20
 __declspec(property(get=__get__count, put=__set__count)) int32_t  _count;

/// @brief Field _lastIndex offset 0x24
 __declspec(property(get=__get__lastIndex, put=__set__lastIndex)) int32_t  _lastIndex;

/// @brief Field _freeList offset 0x28
 __declspec(property(get=__get__freeList, put=__set__freeList)) int32_t  _freeList;

/// @brief Field _comparer offset 0x30
 __declspec(property(get=__get__comparer, put=__set__comparer)) ::System::Collections::Generic::IEqualityComparer_1<::System::Guid>*  _comparer;

/// @brief Field _version offset 0x38
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _siInfo offset 0x40
 __declspec(property(get=__get__siInfo, put=__set__siInfo)) ::System::Runtime::Serialization::SerializationInfo*  _siInfo;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=System_Collections_Generic_ICollection_T__get_IsReadOnly)) bool  System_Collections_Generic_ICollection_T__IsReadOnly;

 __declspec(property(get=get_Comparer)) ::System::Collections::Generic::IEqualityComparer_1<::System::Guid>*  Comparer;

/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::Guid>"
constexpr operator  ::System::Collections::Generic::ICollection_1<::System::Guid>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Guid>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::Guid>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::System::Guid>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<::System::Guid>*() noexcept;

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() noexcept;

/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr operator  ::System::Runtime::Serialization::IDeserializationCallback*() noexcept;

constexpr void __set__buckets(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get__buckets() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get__buckets() const;

constexpr void __set__slots(::ArrayW<::System::Collections::Generic::__HashSet_1__Slot<::System::Guid>,::Array<::System::Collections::Generic::__HashSet_1__Slot<::System::Guid>>*>  value) ;

constexpr ::ArrayW<::System::Collections::Generic::__HashSet_1__Slot<::System::Guid>,::Array<::System::Collections::Generic::__HashSet_1__Slot<::System::Guid>>*>& __get__slots() ;

constexpr ::ArrayW<::System::Collections::Generic::__HashSet_1__Slot<::System::Guid>,::Array<::System::Collections::Generic::__HashSet_1__Slot<::System::Guid>>*> const& __get__slots() const;

constexpr void __set__count(int32_t  value) ;

constexpr int32_t& __get__count() ;

constexpr int32_t const& __get__count() const;

constexpr void __set__lastIndex(int32_t  value) ;

constexpr int32_t& __get__lastIndex() ;

constexpr int32_t const& __get__lastIndex() const;

constexpr void __set__freeList(int32_t  value) ;

constexpr int32_t& __get__freeList() ;

constexpr int32_t const& __get__freeList() const;

constexpr void __set__comparer(::System::Collections::Generic::IEqualityComparer_1<::System::Guid>*  value) ;

constexpr ::System::Collections::Generic::IEqualityComparer_1<::System::Guid>* __get__comparer() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEqualityComparer_1<::System::Guid>*> __get__comparer() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__siInfo(::System::Runtime::Serialization::SerializationInfo*  value) ;

constexpr ::System::Runtime::Serialization::SerializationInfo* __get__siInfo() ;

constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::SerializationInfo*> __get__siInfo() const;

static inline ::System::Collections::Generic::HashSet_1<::System::Guid>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Collections::Generic::HashSet_1<::System::Guid>* New_ctor(::System::Collections::Generic::IEqualityComparer_1<::System::Guid>*  comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEqualityComparer_1<::System::Guid>*  comparer) ;

static inline ::System::Collections::Generic::HashSet_1<::System::Guid>* New_ctor(int32_t  capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity) ;

static inline ::System::Collections::Generic::HashSet_1<::System::Guid>* New_ctor(::System::Collections::Generic::IEnumerable_1<::System::Guid>*  collection) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<::System::Guid>*  collection) ;

static inline ::System::Collections::Generic::HashSet_1<::System::Guid>* New_ctor(::System::Collections::Generic::IEnumerable_1<::System::Guid>*  collection, ::System::Collections::Generic::IEqualityComparer_1<::System::Guid>*  comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<::System::Guid>*  collection, ::System::Collections::Generic::IEqualityComparer_1<::System::Guid>*  comparer) ;

static inline ::System::Collections::Generic::HashSet_1<::System::Guid>* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyFrom(::System::Collections::Generic::HashSet_1<::System::Guid>*  source) ;

static inline ::System::Collections::Generic::HashSet_1<::System::Guid>* New_ctor(int32_t  capacity, ::System::Collections::Generic::IEqualityComparer_1<::System::Guid>*  comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity, ::System::Collections::Generic::IEqualityComparer_1<::System::Guid>*  comparer) ;

/// @brief Method System.Collections.Generic.ICollection<T>.Add addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_Generic_ICollection_T__Add(::System::Guid  item) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Contains(::System::Guid  item) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline void CopyTo(::ArrayW<::System::Guid,::Array<::System::Guid>*>  array, int32_t  arrayIndex) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Remove(::System::Guid  item) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method System.Collections.Generic.ICollection<T>.get_IsReadOnly addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_Generic_ICollection_T__get_IsReadOnly() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::__HashSet_1__Enumerator<::System::Guid> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::System::Guid>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method GetObjectData addr 0x0 size 0xffffffffffffffff virtual true final false
inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method OnDeserialization addr 0x0 size 0xffffffffffffffff virtual true final false
inline void OnDeserialization(::System::Object*  sender) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Add(::System::Guid  item) ;

/// @brief Method UnionWith addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnionWith(::System::Collections::Generic::IEnumerable_1<::System::Guid>*  other) ;

/// @brief Method IntersectWith addr 0x0 size 0xffffffffffffffff virtual true final true
inline void IntersectWith(::System::Collections::Generic::IEnumerable_1<::System::Guid>*  other) ;

/// @brief Method ExceptWith addr 0x0 size 0xffffffffffffffff virtual true final true
inline void ExceptWith(::System::Collections::Generic::IEnumerable_1<::System::Guid>*  other) ;

/// @brief Method SetEquals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool SetEquals(::System::Collections::Generic::IEnumerable_1<::System::Guid>*  other) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyTo(::ArrayW<::System::Guid,::Array<::System::Guid>*>  array) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyTo(::ArrayW<::System::Guid,::Array<::System::Guid>*>  array, int32_t  arrayIndex, int32_t  count) ;

/// @brief Method RemoveWhere addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t RemoveWhere(::System::Predicate_1<::System::Guid>*  match) ;

/// @brief Method get_Comparer addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::IEqualityComparer_1<::System::Guid>* get_Comparer() ;

/// @brief Method TrimExcess addr 0x0 size 0xffffffffffffffff virtual false final false
inline void TrimExcess() ;

/// @brief Method Initialize addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t Initialize(int32_t  capacity) ;

/// @brief Method IncreaseCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void IncreaseCapacity() ;

/// @brief Method SetCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetCapacity(int32_t  newSize) ;

/// @brief Method AddIfNotPresent addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool AddIfNotPresent(::System::Guid  value) ;

/// @brief Method AddValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddValue(int32_t  index, int32_t  hashCode, ::System::Guid  value) ;

/// @brief Method ContainsAllElements addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool ContainsAllElements(::System::Collections::Generic::IEnumerable_1<::System::Guid>*  other) ;

/// @brief Method IntersectWithHashSetWithSameEC addr 0x0 size 0xffffffffffffffff virtual false final false
inline void IntersectWithHashSetWithSameEC(::System::Collections::Generic::HashSet_1<::System::Guid>*  other) ;

/// @brief Method IntersectWithEnumerable addr 0x0 size 0xffffffffffffffff virtual false final false
inline void IntersectWithEnumerable(::System::Collections::Generic::IEnumerable_1<::System::Guid>*  other) ;

/// @brief Method InternalIndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t InternalIndexOf(::System::Guid  item) ;

/// @brief Method CheckUniqueAndUnfoundElements addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::__HashSet_1__ElementCount<::System::Guid> CheckUniqueAndUnfoundElements(::System::Collections::Generic::IEnumerable_1<::System::Guid>*  other, bool  returnIfUnfound) ;

/// @brief Method AreEqualityComparersEqual addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool AreEqualityComparersEqual(::System::Collections::Generic::HashSet_1<::System::Guid>*  set1, ::System::Collections::Generic::HashSet_1<::System::Guid>*  set2) ;

/// @brief Method InternalGetHashCode addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t InternalGetHashCode(::System::Guid  item) ;

// Ctor Parameters [CppParam { name: "", ty: "HashSet_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HashSet_1(HashSet_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HashSet_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HashSet_1(HashSet_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HashSet_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::HashSet`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14315)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14315), inst: 275 })
// CS Name: ::System.Collections.Generic::HashSet`1<T>*
class CORDL_TYPE HashSet_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> : public ::System::Object {
public:
// Declarations
using Enumerator = ::System::Collections::Generic::__HashSet_1__Enumerator<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>;

using Slot = ::System::Collections::Generic::__HashSet_1__Slot<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>;

using ElementCount = ::System::Collections::Generic::__HashSet_1__ElementCount<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::System::Object)]{};

/// @brief Field Lower31BitMask offset 0x0
static constexpr int32_t  Lower31BitMask{static_cast<int32_t>(0x7fffffff)};

/// @brief Field StackAllocThreshold offset 0x0
static constexpr int32_t  StackAllocThreshold{static_cast<int32_t>(0x64)};

/// @brief Field ShrinkThreshold offset 0x0
static constexpr int32_t  ShrinkThreshold{static_cast<int32_t>(0x3)};

/// @brief Field CapacityName offset 0x0
static constexpr ::ConstString  CapacityName{u"Capacity"};

/// @brief Field ElementsName offset 0x0
static constexpr ::ConstString  ElementsName{u"Elements"};

/// @brief Field ComparerName offset 0x0
static constexpr ::ConstString  ComparerName{u"Comparer"};

/// @brief Field VersionName offset 0x0
static constexpr ::ConstString  VersionName{u"Version"};

/// @brief Field _buckets offset 0x10
 __declspec(property(get=__get__buckets, put=__set__buckets)) ::ArrayW<int32_t,::Array<int32_t>*>  _buckets;

/// @brief Field _slots offset 0x18
 __declspec(property(get=__get__slots, put=__set__slots)) ::ArrayW<::System::Collections::Generic::__HashSet_1__Slot<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>,::Array<::System::Collections::Generic::__HashSet_1__Slot<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>*>  _slots;

/// @brief Field _count offset 0x20
 __declspec(property(get=__get__count, put=__set__count)) int32_t  _count;

/// @brief Field _lastIndex offset 0x24
 __declspec(property(get=__get__lastIndex, put=__set__lastIndex)) int32_t  _lastIndex;

/// @brief Field _freeList offset 0x28
 __declspec(property(get=__get__freeList, put=__set__freeList)) int32_t  _freeList;

/// @brief Field _comparer offset 0x30
 __declspec(property(get=__get__comparer, put=__set__comparer)) ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  _comparer;

/// @brief Field _version offset 0x38
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _siInfo offset 0x40
 __declspec(property(get=__get__siInfo, put=__set__siInfo)) ::System::Runtime::Serialization::SerializationInfo*  _siInfo;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=System_Collections_Generic_ICollection_T__get_IsReadOnly)) bool  System_Collections_Generic_ICollection_T__IsReadOnly;

 __declspec(property(get=get_Comparer)) ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  Comparer;

/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>"
constexpr operator  ::System::Collections::Generic::ICollection_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*() noexcept;

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() noexcept;

/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr operator  ::System::Runtime::Serialization::IDeserializationCallback*() noexcept;

constexpr void __set__buckets(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get__buckets() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get__buckets() const;

constexpr void __set__slots(::ArrayW<::System::Collections::Generic::__HashSet_1__Slot<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>,::Array<::System::Collections::Generic::__HashSet_1__Slot<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>*>  value) ;

constexpr ::ArrayW<::System::Collections::Generic::__HashSet_1__Slot<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>,::Array<::System::Collections::Generic::__HashSet_1__Slot<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>*>& __get__slots() ;

constexpr ::ArrayW<::System::Collections::Generic::__HashSet_1__Slot<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>,::Array<::System::Collections::Generic::__HashSet_1__Slot<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>*> const& __get__slots() const;

constexpr void __set__count(int32_t  value) ;

constexpr int32_t& __get__count() ;

constexpr int32_t const& __get__count() const;

constexpr void __set__lastIndex(int32_t  value) ;

constexpr int32_t& __get__lastIndex() ;

constexpr int32_t const& __get__lastIndex() const;

constexpr void __set__freeList(int32_t  value) ;

constexpr int32_t& __get__freeList() ;

constexpr int32_t const& __get__freeList() const;

constexpr void __set__comparer(::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

constexpr ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* __get__comparer() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> __get__comparer() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__siInfo(::System::Runtime::Serialization::SerializationInfo*  value) ;

constexpr ::System::Runtime::Serialization::SerializationInfo* __get__siInfo() ;

constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::SerializationInfo*> __get__siInfo() const;

static inline ::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* New_ctor(::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  comparer) ;

static inline ::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* New_ctor(int32_t  capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity) ;

static inline ::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* New_ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  collection) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  collection) ;

static inline ::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* New_ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  collection, ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  collection, ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  comparer) ;

static inline ::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyFrom(::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  source) ;

static inline ::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* New_ctor(int32_t  capacity, ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity, ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  comparer) ;

/// @brief Method System.Collections.Generic.ICollection<T>.Add addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_Generic_ICollection_T__Add(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  item) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Contains(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  item) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline void CopyTo(::ArrayW<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::Array<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>  array, int32_t  arrayIndex) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Remove(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  item) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method System.Collections.Generic.ICollection<T>.get_IsReadOnly addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_Generic_ICollection_T__get_IsReadOnly() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::__HashSet_1__Enumerator<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method GetObjectData addr 0x0 size 0xffffffffffffffff virtual true final false
inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method OnDeserialization addr 0x0 size 0xffffffffffffffff virtual true final false
inline void OnDeserialization(::System::Object*  sender) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Add(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  item) ;

/// @brief Method UnionWith addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnionWith(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  other) ;

/// @brief Method IntersectWith addr 0x0 size 0xffffffffffffffff virtual true final true
inline void IntersectWith(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  other) ;

/// @brief Method ExceptWith addr 0x0 size 0xffffffffffffffff virtual true final true
inline void ExceptWith(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  other) ;

/// @brief Method SetEquals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool SetEquals(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  other) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyTo(::ArrayW<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::Array<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>  array) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyTo(::ArrayW<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::Array<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>  array, int32_t  arrayIndex, int32_t  count) ;

/// @brief Method RemoveWhere addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t RemoveWhere(::System::Predicate_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  match) ;

/// @brief Method get_Comparer addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* get_Comparer() ;

/// @brief Method TrimExcess addr 0x0 size 0xffffffffffffffff virtual false final false
inline void TrimExcess() ;

/// @brief Method Initialize addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t Initialize(int32_t  capacity) ;

/// @brief Method IncreaseCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void IncreaseCapacity() ;

/// @brief Method SetCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetCapacity(int32_t  newSize) ;

/// @brief Method AddIfNotPresent addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool AddIfNotPresent(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  value) ;

/// @brief Method AddValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddValue(int32_t  index, int32_t  hashCode, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  value) ;

/// @brief Method ContainsAllElements addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool ContainsAllElements(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  other) ;

/// @brief Method IntersectWithHashSetWithSameEC addr 0x0 size 0xffffffffffffffff virtual false final false
inline void IntersectWithHashSetWithSameEC(::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  other) ;

/// @brief Method IntersectWithEnumerable addr 0x0 size 0xffffffffffffffff virtual false final false
inline void IntersectWithEnumerable(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  other) ;

/// @brief Method InternalIndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t InternalIndexOf(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  item) ;

/// @brief Method CheckUniqueAndUnfoundElements addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::__HashSet_1__ElementCount<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> CheckUniqueAndUnfoundElements(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  other, bool  returnIfUnfound) ;

/// @brief Method AreEqualityComparersEqual addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool AreEqualityComparersEqual(::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  set1, ::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  set2) ;

/// @brief Method InternalGetHashCode addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t InternalGetHashCode(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  item) ;

// Ctor Parameters [CppParam { name: "", ty: "HashSet_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HashSet_1(HashSet_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HashSet_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HashSet_1(HashSet_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HashSet_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::HashSet`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14315))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14315), inst: 98 })
// CS Name: ::System.Collections.Generic::HashSet`1<T>*
class CORDL_TYPE HashSet_1<int32_t> : public ::System::Object {
public:
// Declarations
using Enumerator = ::System::Collections::Generic::__HashSet_1__Enumerator<int32_t>;

using Slot = ::System::Collections::Generic::__HashSet_1__Slot<int32_t>;

using ElementCount = ::System::Collections::Generic::__HashSet_1__ElementCount<int32_t>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::System::Object)]{};

/// @brief Field Lower31BitMask offset 0x0
static constexpr int32_t  Lower31BitMask{static_cast<int32_t>(0x7fffffff)};

/// @brief Field StackAllocThreshold offset 0x0
static constexpr int32_t  StackAllocThreshold{static_cast<int32_t>(0x64)};

/// @brief Field ShrinkThreshold offset 0x0
static constexpr int32_t  ShrinkThreshold{static_cast<int32_t>(0x3)};

/// @brief Field CapacityName offset 0x0
static constexpr ::ConstString  CapacityName{u"Capacity"};

/// @brief Field ElementsName offset 0x0
static constexpr ::ConstString  ElementsName{u"Elements"};

/// @brief Field ComparerName offset 0x0
static constexpr ::ConstString  ComparerName{u"Comparer"};

/// @brief Field VersionName offset 0x0
static constexpr ::ConstString  VersionName{u"Version"};

/// @brief Field _buckets offset 0x10
 __declspec(property(get=__get__buckets, put=__set__buckets)) ::ArrayW<int32_t,::Array<int32_t>*>  _buckets;

/// @brief Field _slots offset 0x18
 __declspec(property(get=__get__slots, put=__set__slots)) ::ArrayW<::System::Collections::Generic::__HashSet_1__Slot<int32_t>,::Array<::System::Collections::Generic::__HashSet_1__Slot<int32_t>>*>  _slots;

/// @brief Field _count offset 0x20
 __declspec(property(get=__get__count, put=__set__count)) int32_t  _count;

/// @brief Field _lastIndex offset 0x24
 __declspec(property(get=__get__lastIndex, put=__set__lastIndex)) int32_t  _lastIndex;

/// @brief Field _freeList offset 0x28
 __declspec(property(get=__get__freeList, put=__set__freeList)) int32_t  _freeList;

/// @brief Field _comparer offset 0x30
 __declspec(property(get=__get__comparer, put=__set__comparer)) ::System::Collections::Generic::IEqualityComparer_1<int32_t>*  _comparer;

/// @brief Field _version offset 0x38
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _siInfo offset 0x40
 __declspec(property(get=__get__siInfo, put=__set__siInfo)) ::System::Runtime::Serialization::SerializationInfo*  _siInfo;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=System_Collections_Generic_ICollection_T__get_IsReadOnly)) bool  System_Collections_Generic_ICollection_T__IsReadOnly;

 __declspec(property(get=get_Comparer)) ::System::Collections::Generic::IEqualityComparer_1<int32_t>*  Comparer;

/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<int32_t>"
constexpr operator  ::System::Collections::Generic::ICollection_1<int32_t>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<int32_t>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<int32_t>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<int32_t>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<int32_t>*() noexcept;

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() noexcept;

/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr operator  ::System::Runtime::Serialization::IDeserializationCallback*() noexcept;

constexpr void __set__buckets(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get__buckets() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get__buckets() const;

constexpr void __set__slots(::ArrayW<::System::Collections::Generic::__HashSet_1__Slot<int32_t>,::Array<::System::Collections::Generic::__HashSet_1__Slot<int32_t>>*>  value) ;

constexpr ::ArrayW<::System::Collections::Generic::__HashSet_1__Slot<int32_t>,::Array<::System::Collections::Generic::__HashSet_1__Slot<int32_t>>*>& __get__slots() ;

constexpr ::ArrayW<::System::Collections::Generic::__HashSet_1__Slot<int32_t>,::Array<::System::Collections::Generic::__HashSet_1__Slot<int32_t>>*> const& __get__slots() const;

constexpr void __set__count(int32_t  value) ;

constexpr int32_t& __get__count() ;

constexpr int32_t const& __get__count() const;

constexpr void __set__lastIndex(int32_t  value) ;

constexpr int32_t& __get__lastIndex() ;

constexpr int32_t const& __get__lastIndex() const;

constexpr void __set__freeList(int32_t  value) ;

constexpr int32_t& __get__freeList() ;

constexpr int32_t const& __get__freeList() const;

constexpr void __set__comparer(::System::Collections::Generic::IEqualityComparer_1<int32_t>*  value) ;

constexpr ::System::Collections::Generic::IEqualityComparer_1<int32_t>* __get__comparer() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEqualityComparer_1<int32_t>*> __get__comparer() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__siInfo(::System::Runtime::Serialization::SerializationInfo*  value) ;

constexpr ::System::Runtime::Serialization::SerializationInfo* __get__siInfo() ;

constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::SerializationInfo*> __get__siInfo() const;

static inline ::System::Collections::Generic::HashSet_1<int32_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Collections::Generic::HashSet_1<int32_t>* New_ctor(::System::Collections::Generic::IEqualityComparer_1<int32_t>*  comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEqualityComparer_1<int32_t>*  comparer) ;

static inline ::System::Collections::Generic::HashSet_1<int32_t>* New_ctor(int32_t  capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity) ;

static inline ::System::Collections::Generic::HashSet_1<int32_t>* New_ctor(::System::Collections::Generic::IEnumerable_1<int32_t>*  collection) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<int32_t>*  collection) ;

static inline ::System::Collections::Generic::HashSet_1<int32_t>* New_ctor(::System::Collections::Generic::IEnumerable_1<int32_t>*  collection, ::System::Collections::Generic::IEqualityComparer_1<int32_t>*  comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<int32_t>*  collection, ::System::Collections::Generic::IEqualityComparer_1<int32_t>*  comparer) ;

static inline ::System::Collections::Generic::HashSet_1<int32_t>* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyFrom(::System::Collections::Generic::HashSet_1<int32_t>*  source) ;

static inline ::System::Collections::Generic::HashSet_1<int32_t>* New_ctor(int32_t  capacity, ::System::Collections::Generic::IEqualityComparer_1<int32_t>*  comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity, ::System::Collections::Generic::IEqualityComparer_1<int32_t>*  comparer) ;

/// @brief Method System.Collections.Generic.ICollection<T>.Add addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_Generic_ICollection_T__Add(int32_t  item) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Contains(int32_t  item) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline void CopyTo(::ArrayW<int32_t,::Array<int32_t>*>  array, int32_t  arrayIndex) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Remove(int32_t  item) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method System.Collections.Generic.ICollection<T>.get_IsReadOnly addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_Generic_ICollection_T__get_IsReadOnly() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::__HashSet_1__Enumerator<int32_t> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<int32_t>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method GetObjectData addr 0x0 size 0xffffffffffffffff virtual true final false
inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method OnDeserialization addr 0x0 size 0xffffffffffffffff virtual true final false
inline void OnDeserialization(::System::Object*  sender) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Add(int32_t  item) ;

/// @brief Method UnionWith addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnionWith(::System::Collections::Generic::IEnumerable_1<int32_t>*  other) ;

/// @brief Method IntersectWith addr 0x0 size 0xffffffffffffffff virtual true final true
inline void IntersectWith(::System::Collections::Generic::IEnumerable_1<int32_t>*  other) ;

/// @brief Method ExceptWith addr 0x0 size 0xffffffffffffffff virtual true final true
inline void ExceptWith(::System::Collections::Generic::IEnumerable_1<int32_t>*  other) ;

/// @brief Method SetEquals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool SetEquals(::System::Collections::Generic::IEnumerable_1<int32_t>*  other) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyTo(::ArrayW<int32_t,::Array<int32_t>*>  array) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyTo(::ArrayW<int32_t,::Array<int32_t>*>  array, int32_t  arrayIndex, int32_t  count) ;

/// @brief Method RemoveWhere addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t RemoveWhere(::System::Predicate_1<int32_t>*  match) ;

/// @brief Method get_Comparer addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::IEqualityComparer_1<int32_t>* get_Comparer() ;

/// @brief Method TrimExcess addr 0x0 size 0xffffffffffffffff virtual false final false
inline void TrimExcess() ;

/// @brief Method Initialize addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t Initialize(int32_t  capacity) ;

/// @brief Method IncreaseCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void IncreaseCapacity() ;

/// @brief Method SetCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetCapacity(int32_t  newSize) ;

/// @brief Method AddIfNotPresent addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool AddIfNotPresent(int32_t  value) ;

/// @brief Method AddValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddValue(int32_t  index, int32_t  hashCode, int32_t  value) ;

/// @brief Method ContainsAllElements addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool ContainsAllElements(::System::Collections::Generic::IEnumerable_1<int32_t>*  other) ;

/// @brief Method IntersectWithHashSetWithSameEC addr 0x0 size 0xffffffffffffffff virtual false final false
inline void IntersectWithHashSetWithSameEC(::System::Collections::Generic::HashSet_1<int32_t>*  other) ;

/// @brief Method IntersectWithEnumerable addr 0x0 size 0xffffffffffffffff virtual false final false
inline void IntersectWithEnumerable(::System::Collections::Generic::IEnumerable_1<int32_t>*  other) ;

/// @brief Method InternalIndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t InternalIndexOf(int32_t  item) ;

/// @brief Method CheckUniqueAndUnfoundElements addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::__HashSet_1__ElementCount<int32_t> CheckUniqueAndUnfoundElements(::System::Collections::Generic::IEnumerable_1<int32_t>*  other, bool  returnIfUnfound) ;

/// @brief Method AreEqualityComparersEqual addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool AreEqualityComparersEqual(::System::Collections::Generic::HashSet_1<int32_t>*  set1, ::System::Collections::Generic::HashSet_1<int32_t>*  set2) ;

/// @brief Method InternalGetHashCode addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t InternalGetHashCode(int32_t  item) ;

// Ctor Parameters [CppParam { name: "", ty: "HashSet_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HashSet_1(HashSet_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HashSet_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HashSet_1(HashSet_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HashSet_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::HashSet`1
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14315))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14315), inst: 2 })
// CS Name: ::System.Collections.Generic::HashSet`1<T>*
class CORDL_TYPE HashSet_1<T> : public ::System::Object {
public:
// Declarations
using Enumerator = ::System::Collections::Generic::__HashSet_1__Enumerator<T>;

using Slot = ::System::Collections::Generic::__HashSet_1__Slot<T>;

using ElementCount = ::System::Collections::Generic::__HashSet_1__ElementCount<T>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::System::Object)]{};

/// @brief Field Lower31BitMask offset 0x0
static constexpr int32_t  Lower31BitMask{static_cast<int32_t>(0x7fffffff)};

/// @brief Field StackAllocThreshold offset 0x0
static constexpr int32_t  StackAllocThreshold{static_cast<int32_t>(0x64)};

/// @brief Field ShrinkThreshold offset 0x0
static constexpr int32_t  ShrinkThreshold{static_cast<int32_t>(0x3)};

/// @brief Field CapacityName offset 0x0
static constexpr ::ConstString  CapacityName{u"Capacity"};

/// @brief Field ElementsName offset 0x0
static constexpr ::ConstString  ElementsName{u"Elements"};

/// @brief Field ComparerName offset 0x0
static constexpr ::ConstString  ComparerName{u"Comparer"};

/// @brief Field VersionName offset 0x0
static constexpr ::ConstString  VersionName{u"Version"};

/// @brief Field _buckets offset 0x10
 __declspec(property(get=__get__buckets, put=__set__buckets)) ::ArrayW<int32_t,::Array<int32_t>*>  _buckets;

/// @brief Field _slots offset 0x18
 __declspec(property(get=__get__slots, put=__set__slots)) ::ArrayW<::System::Collections::Generic::__HashSet_1__Slot<T>,::Array<::System::Collections::Generic::__HashSet_1__Slot<T>>*>  _slots;

/// @brief Field _count offset 0x20
 __declspec(property(get=__get__count, put=__set__count)) int32_t  _count;

/// @brief Field _lastIndex offset 0x24
 __declspec(property(get=__get__lastIndex, put=__set__lastIndex)) int32_t  _lastIndex;

/// @brief Field _freeList offset 0x28
 __declspec(property(get=__get__freeList, put=__set__freeList)) int32_t  _freeList;

/// @brief Field _comparer offset 0x30
 __declspec(property(get=__get__comparer, put=__set__comparer)) ::System::Collections::Generic::IEqualityComparer_1<T>*  _comparer;

/// @brief Field _version offset 0x38
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _siInfo offset 0x40
 __declspec(property(get=__get__siInfo, put=__set__siInfo)) ::System::Runtime::Serialization::SerializationInfo*  _siInfo;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=System_Collections_Generic_ICollection_T__get_IsReadOnly)) bool  System_Collections_Generic_ICollection_T__IsReadOnly;

 __declspec(property(get=get_Comparer)) ::System::Collections::Generic::IEqualityComparer_1<T>*  Comparer;

/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<T>"
constexpr operator  ::System::Collections::Generic::ICollection_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<T>*() noexcept;

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() noexcept;

/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr operator  ::System::Runtime::Serialization::IDeserializationCallback*() noexcept;

constexpr void __set__buckets(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get__buckets() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get__buckets() const;

constexpr void __set__slots(::ArrayW<::System::Collections::Generic::__HashSet_1__Slot<T>,::Array<::System::Collections::Generic::__HashSet_1__Slot<T>>*>  value) ;

constexpr ::ArrayW<::System::Collections::Generic::__HashSet_1__Slot<T>,::Array<::System::Collections::Generic::__HashSet_1__Slot<T>>*>& __get__slots() ;

constexpr ::ArrayW<::System::Collections::Generic::__HashSet_1__Slot<T>,::Array<::System::Collections::Generic::__HashSet_1__Slot<T>>*> const& __get__slots() const;

constexpr void __set__count(int32_t  value) ;

constexpr int32_t& __get__count() ;

constexpr int32_t const& __get__count() const;

constexpr void __set__lastIndex(int32_t  value) ;

constexpr int32_t& __get__lastIndex() ;

constexpr int32_t const& __get__lastIndex() const;

constexpr void __set__freeList(int32_t  value) ;

constexpr int32_t& __get__freeList() ;

constexpr int32_t const& __get__freeList() const;

constexpr void __set__comparer(::System::Collections::Generic::IEqualityComparer_1<T>*  value) ;

constexpr ::System::Collections::Generic::IEqualityComparer_1<T>* __get__comparer() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEqualityComparer_1<T>*> __get__comparer() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__siInfo(::System::Runtime::Serialization::SerializationInfo*  value) ;

constexpr ::System::Runtime::Serialization::SerializationInfo* __get__siInfo() ;

constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::SerializationInfo*> __get__siInfo() const;

static inline ::System::Collections::Generic::HashSet_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Collections::Generic::HashSet_1<T>* New_ctor(::System::Collections::Generic::IEqualityComparer_1<T>*  comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEqualityComparer_1<T>*  comparer) ;

static inline ::System::Collections::Generic::HashSet_1<T>* New_ctor(int32_t  capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity) ;

static inline ::System::Collections::Generic::HashSet_1<T>* New_ctor(::System::Collections::Generic::IEnumerable_1<T>*  collection) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<T>*  collection) ;

static inline ::System::Collections::Generic::HashSet_1<T>* New_ctor(::System::Collections::Generic::IEnumerable_1<T>*  collection, ::System::Collections::Generic::IEqualityComparer_1<T>*  comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<T>*  collection, ::System::Collections::Generic::IEqualityComparer_1<T>*  comparer) ;

static inline ::System::Collections::Generic::HashSet_1<T>* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyFrom(::System::Collections::Generic::HashSet_1<T>*  source) ;

static inline ::System::Collections::Generic::HashSet_1<T>* New_ctor(int32_t  capacity, ::System::Collections::Generic::IEqualityComparer_1<T>*  comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity, ::System::Collections::Generic::IEqualityComparer_1<T>*  comparer) ;

/// @brief Method System.Collections.Generic.ICollection<T>.Add addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_Generic_ICollection_T__Add(T  item) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Contains(T  item) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline void CopyTo(::ArrayW<T,::Array<T>*>  array, int32_t  arrayIndex) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Remove(T  item) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method System.Collections.Generic.ICollection<T>.get_IsReadOnly addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_Generic_ICollection_T__get_IsReadOnly() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::__HashSet_1__Enumerator<T> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method GetObjectData addr 0x0 size 0xffffffffffffffff virtual true final false
inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method OnDeserialization addr 0x0 size 0xffffffffffffffff virtual true final false
inline void OnDeserialization(::System::Object*  sender) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Add(T  item) ;

/// @brief Method UnionWith addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnionWith(::System::Collections::Generic::IEnumerable_1<T>*  other) ;

/// @brief Method IntersectWith addr 0x0 size 0xffffffffffffffff virtual true final true
inline void IntersectWith(::System::Collections::Generic::IEnumerable_1<T>*  other) ;

/// @brief Method ExceptWith addr 0x0 size 0xffffffffffffffff virtual true final true
inline void ExceptWith(::System::Collections::Generic::IEnumerable_1<T>*  other) ;

/// @brief Method SetEquals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool SetEquals(::System::Collections::Generic::IEnumerable_1<T>*  other) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyTo(::ArrayW<T,::Array<T>*>  array) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyTo(::ArrayW<T,::Array<T>*>  array, int32_t  arrayIndex, int32_t  count) ;

/// @brief Method RemoveWhere addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t RemoveWhere(::System::Predicate_1<T>*  match) ;

/// @brief Method get_Comparer addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::IEqualityComparer_1<T>* get_Comparer() ;

/// @brief Method TrimExcess addr 0x0 size 0xffffffffffffffff virtual false final false
inline void TrimExcess() ;

/// @brief Method Initialize addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t Initialize(int32_t  capacity) ;

/// @brief Method IncreaseCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void IncreaseCapacity() ;

/// @brief Method SetCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetCapacity(int32_t  newSize) ;

/// @brief Method AddIfNotPresent addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool AddIfNotPresent(T  value) ;

/// @brief Method AddValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddValue(int32_t  index, int32_t  hashCode, T  value) ;

/// @brief Method ContainsAllElements addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool ContainsAllElements(::System::Collections::Generic::IEnumerable_1<T>*  other) ;

/// @brief Method IntersectWithHashSetWithSameEC addr 0x0 size 0xffffffffffffffff virtual false final false
inline void IntersectWithHashSetWithSameEC(::System::Collections::Generic::HashSet_1<T>*  other) ;

/// @brief Method IntersectWithEnumerable addr 0x0 size 0xffffffffffffffff virtual false final false
inline void IntersectWithEnumerable(::System::Collections::Generic::IEnumerable_1<T>*  other) ;

/// @brief Method InternalIndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t InternalIndexOf(T  item) ;

/// @brief Method CheckUniqueAndUnfoundElements addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::__HashSet_1__ElementCount<T> CheckUniqueAndUnfoundElements(::System::Collections::Generic::IEnumerable_1<T>*  other, bool  returnIfUnfound) ;

/// @brief Method AreEqualityComparersEqual addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool AreEqualityComparersEqual(::System::Collections::Generic::HashSet_1<T>*  set1, ::System::Collections::Generic::HashSet_1<T>*  set2) ;

/// @brief Method InternalGetHashCode addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t InternalGetHashCode(T  item) ;

// Ctor Parameters [CppParam { name: "", ty: "HashSet_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HashSet_1(HashSet_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HashSet_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HashSet_1(HashSet_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HashSet_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::HashSet_1, "System.Collections.Generic", "HashSet`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Collections::Generic::__HashSet_1__Enumerator, "System.Collections.Generic", "HashSet`1/Enumerator");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Collections::Generic::__HashSet_1__ElementCount, "System.Collections.Generic", "HashSet`1/ElementCount");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Collections::Generic::__HashSet_1__Slot, "System.Collections.Generic", "HashSet`1/Slot");
