#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVREnumerable_1)
namespace GlobalNamespace {
template<typename T>
struct __OVREnumerable_1__Enumerator;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
struct Guid;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
struct __Queue_1__Enumerator;
}
namespace GlobalNamespace {
template<typename T>
struct __OVREnumerable_1__Enumerator__CollectionType;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System {
class Object;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
struct __HashSet_1__Enumerator;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct __OVREnumerable_1__Enumerator__CollectionType;
}
namespace GlobalNamespace {
template<typename T>
struct OVREnumerable_1;
}
namespace GlobalNamespace {
template<typename T>
struct __OVREnumerable_1__Enumerator;
}
namespace GlobalNamespace {
template<>
struct OVREnumerable_1<::System::Guid>;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type T>
struct OVREnumerable_1<T>;
}
namespace GlobalNamespace {
template<>
struct __OVREnumerable_1__Enumerator<::System::Guid>;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type T>
struct __OVREnumerable_1__Enumerator<T>;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType);
MARK_GEN_VAL_T(::GlobalNamespace::OVREnumerable_1);
MARK_GEN_VAL_T(::GlobalNamespace::__OVREnumerable_1__Enumerator);
// Type: ::CollectionType
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8104))
// CS Name: ::OVREnumerable`1::Enumerator::CollectionType<T>
struct CORDL_TYPE __OVREnumerable_1__Enumerator__CollectionType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____OVREnumerable_1__Enumerator__CollectionType_Unwrapped
enum struct ____OVREnumerable_1__Enumerator__CollectionType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_List = static_cast<int32_t>(0x1),
__E_Set = static_cast<int32_t>(0x2),
__E_Queue = static_cast<int32_t>(0x3),
__E_Enumerable = static_cast<int32_t>(0x4),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<T> const None;

/// @brief Field List value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<T> const List;

/// @brief Field Set value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<T> const Set;

/// @brief Field Queue value: static_cast<int32_t>(0x3)
static ::GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<T> const Queue;

/// @brief Field Enumerable value: static_cast<int32_t>(0x4)
static ::GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<T> const Enumerable;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____OVREnumerable_1__Enumerator__CollectionType_Unwrapped () const noexcept {
return std::bit_cast<____OVREnumerable_1__Enumerator__CollectionType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __OVREnumerable_1__Enumerator__CollectionType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVREnumerable_1__Enumerator__CollectionType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVREnumerable_1__Enumerator__CollectionType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Enumerator
// Type: ::OVREnumerable`1
// Type: ::Enumerator
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8105))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8105), inst: 314 })
// CS Name: ::OVREnumerable`1::Enumerator<T>
struct CORDL_TYPE __OVREnumerable_1__Enumerator<::System::Guid> : public ::bs_hook::ValueTypeWrapper<0x60> {
public:
// Declarations
using CollectionType = ::GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<::System::Guid>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field _listIndex offset 0x0
 __declspec(property(get=__get__listIndex, put=__set__listIndex)) int32_t  _listIndex;

/// @brief Field _type offset 0x4
 __declspec(property(get=__get__type, put=__set__type)) ::GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<::System::Guid>  _type;

/// @brief Field _listCount offset 0x8
 __declspec(property(get=__get__listCount, put=__set__listCount)) int32_t  _listCount;

/// @brief Field _enumerator offset 0x10
 __declspec(property(get=__get__enumerator, put=__set__enumerator)) ::System::Collections::Generic::IEnumerator_1<::System::Guid>*  _enumerator;

/// @brief Field _list offset 0x18
 __declspec(property(get=__get__list, put=__set__list)) ::System::Collections::Generic::IReadOnlyList_1<::System::Guid>*  _list;

/// @brief Field _setEnumerator offset 0x20
 __declspec(property(get=__get__setEnumerator, put=__set__setEnumerator)) ::System::Collections::Generic::__HashSet_1__Enumerator<::System::Guid>  _setEnumerator;

/// @brief Field _queueEnumerator offset 0x40
 __declspec(property(get=__get__queueEnumerator, put=__set__queueEnumerator)) ::System::Collections::Generic::__Queue_1__Enumerator<::System::Guid>  _queueEnumerator;

 __declspec(property(get=get_Current)) ::System::Guid  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Guid>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Guid>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set__listIndex(int32_t  value) ;

constexpr int32_t& __get__listIndex() ;

constexpr int32_t const& __get__listIndex() const;

constexpr void __set__type(::GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<::System::Guid>  value) ;

constexpr ::GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<::System::Guid>& __get__type() ;

constexpr ::GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<::System::Guid> const& __get__type() const;

constexpr void __set__listCount(int32_t  value) ;

constexpr int32_t& __get__listCount() ;

constexpr int32_t const& __get__listCount() const;

constexpr void __set__enumerator(::System::Collections::Generic::IEnumerator_1<::System::Guid>*  value) ;

constexpr ::System::Collections::Generic::IEnumerator_1<::System::Guid>* __get__enumerator() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::System::Guid>*> __get__enumerator() const;

constexpr void __set__list(::System::Collections::Generic::IReadOnlyList_1<::System::Guid>*  value) ;

constexpr ::System::Collections::Generic::IReadOnlyList_1<::System::Guid>* __get__list() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::System::Guid>*> __get__list() const;

constexpr void __set__setEnumerator(::System::Collections::Generic::__HashSet_1__Enumerator<::System::Guid>  value) ;

constexpr ::System::Collections::Generic::__HashSet_1__Enumerator<::System::Guid>& __get__setEnumerator() ;

constexpr ::System::Collections::Generic::__HashSet_1__Enumerator<::System::Guid> const& __get__setEnumerator() const;

constexpr void __set__queueEnumerator(::System::Collections::Generic::__Queue_1__Enumerator<::System::Guid>  value) ;

constexpr ::System::Collections::Generic::__Queue_1__Enumerator<::System::Guid>& __get__queueEnumerator() ;

constexpr ::System::Collections::Generic::__Queue_1__Enumerator<::System::Guid> const& __get__queueEnumerator() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<::System::Guid>*  enumerable) ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method MoveNextList addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool MoveNextList() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Guid get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method ValidateAndThrow addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ValidateAndThrow() ;

// Ctor Parameters [CppParam { name: "_listIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_type", ty: "::GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<::System::Guid>", modifiers: "", def_value: None }, CppParam { name: "_listCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_enumerator", ty: "::System::Collections::Generic::IEnumerator_1<::System::Guid>*", modifiers: "", def_value: None }, CppParam { name: "_list", ty: "::System::Collections::Generic::IReadOnlyList_1<::System::Guid>*", modifiers: "", def_value: None }, CppParam { name: "_setEnumerator", ty: "::System::Collections::Generic::__HashSet_1__Enumerator<::System::Guid>", modifiers: "", def_value: None }, CppParam { name: "_queueEnumerator", ty: "::System::Collections::Generic::__Queue_1__Enumerator<::System::Guid>", modifiers: "", def_value: None }]
constexpr __OVREnumerable_1__Enumerator(int32_t  _listIndex, ::GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<::System::Guid>  _type, int32_t  _listCount, ::System::Collections::Generic::IEnumerator_1<::System::Guid>*  _enumerator, ::System::Collections::Generic::IReadOnlyList_1<::System::Guid>*  _list, ::System::Collections::Generic::__HashSet_1__Enumerator<::System::Guid>  _setEnumerator, ::System::Collections::Generic::__Queue_1__Enumerator<::System::Guid>  _queueEnumerator) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVREnumerable_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x60>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVREnumerable_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Enumerator
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8105))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8105), inst: 2 })
// CS Name: ::OVREnumerable`1::Enumerator<T>
struct CORDL_TYPE __OVREnumerable_1__Enumerator<T> : public ::bs_hook::ValueTypeWrapper<0x50> {
public:
// Declarations
using CollectionType = ::GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<T>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field _listIndex offset 0x0
 __declspec(property(get=__get__listIndex, put=__set__listIndex)) int32_t  _listIndex;

/// @brief Field _type offset 0x4
 __declspec(property(get=__get__type, put=__set__type)) ::GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<T>  _type;

/// @brief Field _listCount offset 0x8
 __declspec(property(get=__get__listCount, put=__set__listCount)) int32_t  _listCount;

/// @brief Field _enumerator offset 0x10
 __declspec(property(get=__get__enumerator, put=__set__enumerator)) ::System::Collections::Generic::IEnumerator_1<T>*  _enumerator;

/// @brief Field _list offset 0x18
 __declspec(property(get=__get__list, put=__set__list)) ::System::Collections::Generic::IReadOnlyList_1<T>*  _list;

/// @brief Field _setEnumerator offset 0x20
 __declspec(property(get=__get__setEnumerator, put=__set__setEnumerator)) ::System::Collections::Generic::__HashSet_1__Enumerator<T>  _setEnumerator;

/// @brief Field _queueEnumerator offset 0x38
 __declspec(property(get=__get__queueEnumerator, put=__set__queueEnumerator)) ::System::Collections::Generic::__Queue_1__Enumerator<T>  _queueEnumerator;

 __declspec(property(get=get_Current)) T  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<T>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set__listIndex(int32_t  value) ;

constexpr int32_t& __get__listIndex() ;

constexpr int32_t const& __get__listIndex() const;

constexpr void __set__type(::GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<T>  value) ;

constexpr ::GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<T>& __get__type() ;

constexpr ::GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<T> const& __get__type() const;

constexpr void __set__listCount(int32_t  value) ;

constexpr int32_t& __get__listCount() ;

constexpr int32_t const& __get__listCount() const;

constexpr void __set__enumerator(::System::Collections::Generic::IEnumerator_1<T>*  value) ;

constexpr ::System::Collections::Generic::IEnumerator_1<T>* __get__enumerator() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<T>*> __get__enumerator() const;

constexpr void __set__list(::System::Collections::Generic::IReadOnlyList_1<T>*  value) ;

constexpr ::System::Collections::Generic::IReadOnlyList_1<T>* __get__list() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<T>*> __get__list() const;

constexpr void __set__setEnumerator(::System::Collections::Generic::__HashSet_1__Enumerator<T>  value) ;

constexpr ::System::Collections::Generic::__HashSet_1__Enumerator<T>& __get__setEnumerator() ;

constexpr ::System::Collections::Generic::__HashSet_1__Enumerator<T> const& __get__setEnumerator() const;

constexpr void __set__queueEnumerator(::System::Collections::Generic::__Queue_1__Enumerator<T>  value) ;

constexpr ::System::Collections::Generic::__Queue_1__Enumerator<T>& __get__queueEnumerator() ;

constexpr ::System::Collections::Generic::__Queue_1__Enumerator<T> const& __get__queueEnumerator() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<T>*  enumerable) ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method MoveNextList addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool MoveNextList() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline T get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method ValidateAndThrow addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ValidateAndThrow() ;

// Ctor Parameters [CppParam { name: "_listIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_type", ty: "::GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<T>", modifiers: "", def_value: None }, CppParam { name: "_listCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_enumerator", ty: "::System::Collections::Generic::IEnumerator_1<T>*", modifiers: "", def_value: None }, CppParam { name: "_list", ty: "::System::Collections::Generic::IReadOnlyList_1<T>*", modifiers: "", def_value: None }, CppParam { name: "_setEnumerator", ty: "::System::Collections::Generic::__HashSet_1__Enumerator<T>", modifiers: "", def_value: None }, CppParam { name: "_queueEnumerator", ty: "::System::Collections::Generic::__Queue_1__Enumerator<T>", modifiers: "", def_value: None }]
constexpr __OVREnumerable_1__Enumerator(int32_t  _listIndex, ::GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<T>  _type, int32_t  _listCount, ::System::Collections::Generic::IEnumerator_1<T>*  _enumerator, ::System::Collections::Generic::IReadOnlyList_1<T>*  _list, ::System::Collections::Generic::__HashSet_1__Enumerator<T>  _setEnumerator, ::System::Collections::Generic::__Queue_1__Enumerator<T>  _queueEnumerator) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVREnumerable_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x50>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVREnumerable_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVREnumerable`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8106))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8106), inst: 314 })
// CS Name: ::OVREnumerable`1<T>
struct CORDL_TYPE OVREnumerable_1<::System::Guid> : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
using Enumerator = ::GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field _enumerable offset 0x0
 __declspec(property(get=__get__enumerable, put=__set__enumerable)) ::System::Collections::Generic::IEnumerable_1<::System::Guid>*  _enumerable;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Guid>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::Guid>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

constexpr void __set__enumerable(::System::Collections::Generic::IEnumerable_1<::System::Guid>*  value) ;

constexpr ::System::Collections::Generic::IEnumerable_1<::System::Guid>* __get__enumerable() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::System::Guid>*> __get__enumerable() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<::System::Guid>*  enumerable) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__OVREnumerable_1__Enumerator<::System::Guid> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::System::Guid>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

// Ctor Parameters [CppParam { name: "_enumerable", ty: "::System::Collections::Generic::IEnumerable_1<::System::Guid>*", modifiers: "", def_value: None }]
constexpr OVREnumerable_1(::System::Collections::Generic::IEnumerable_1<::System::Guid>*  _enumerable) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit OVREnumerable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 OVREnumerable_1()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVREnumerable`1
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8106))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8106), inst: 2 })
// CS Name: ::OVREnumerable`1<T>
struct CORDL_TYPE OVREnumerable_1<T> : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
using Enumerator = ::GlobalNamespace::__OVREnumerable_1__Enumerator<T>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field _enumerable offset 0x0
 __declspec(property(get=__get__enumerable, put=__set__enumerable)) ::System::Collections::Generic::IEnumerable_1<T>*  _enumerable;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<T>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

constexpr void __set__enumerable(::System::Collections::Generic::IEnumerable_1<T>*  value) ;

constexpr ::System::Collections::Generic::IEnumerable_1<T>* __get__enumerable() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<T>*> __get__enumerable() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<T>*  enumerable) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__OVREnumerable_1__Enumerator<T> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

// Ctor Parameters [CppParam { name: "_enumerable", ty: "::System::Collections::Generic::IEnumerable_1<T>*", modifiers: "", def_value: None }]
constexpr OVREnumerable_1(::System::Collections::Generic::IEnumerable_1<T>*  _enumerable) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit OVREnumerable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 OVREnumerable_1()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType, "", "OVREnumerable`1/Enumerator/CollectionType");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::OVREnumerable_1, "", "OVREnumerable`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__OVREnumerable_1__Enumerator, "", "OVREnumerable`1/Enumerator");
