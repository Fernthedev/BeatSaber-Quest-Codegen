#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LinkedList_1)
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System {
class Object;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Runtime::Serialization {
class IDeserializationCallback;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyCollection_1;
}
namespace System {
class Array;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Collections::Generic {
template<typename T>
class LinkedListNode_1;
}
namespace System::Collections::Generic {
template<typename T>
struct __LinkedList_1__Enumerator;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T1,typename T2,typename T3>
struct ValueTuple_3;
}
namespace UnityEngine::ResourceManagement::Util {
struct __DelayedActionManager__DelegateInfo;
}
namespace UnityEngine::UIElements::UIR {
struct __UIRenderDevice__DeviceToFree;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::Collections::Generic {
template<typename T>
class LinkedList_1;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
class LinkedList_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1,::il2cpp_utils::il2cpp_reference_type T3_cordlgen_2>
class LinkedList_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>;
}
namespace System::Collections::Generic {
template<>
class LinkedList_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>;
}
namespace System::Collections::Generic {
template<>
class LinkedList_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type T>
class LinkedList_1<T>;
}
namespace System::Collections::Generic {
template<typename T>
struct __LinkedList_1__Enumerator;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
struct __LinkedList_1__Enumerator<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1,::il2cpp_utils::il2cpp_reference_type T3_cordlgen_2>
struct __LinkedList_1__Enumerator<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>;
}
namespace System::Collections::Generic {
template<>
struct __LinkedList_1__Enumerator<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>;
}
namespace System::Collections::Generic {
template<>
struct __LinkedList_1__Enumerator<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type T>
struct __LinkedList_1__Enumerator<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Collections::Generic::LinkedList_1);
MARK_GEN_VAL_T(::System::Collections::Generic::__LinkedList_1__Enumerator);
// Type: ::Enumerator
// Type: System.Collections.Generic::LinkedList`1
// Type: ::Enumerator
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1,::il2cpp_utils::il2cpp_reference_type T3_cordlgen_2>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9533))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9533), inst: 7239 })
// CS Name: ::LinkedList`1::Enumerator<T>
struct CORDL_TYPE __LinkedList_1__Enumerator<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>> : public ::bs_hook::ValueTypeWrapper<0x38> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field _list offset 0x0
 __declspec(property(get=__get__list, put=__set__list)) ::System::Collections::Generic::LinkedList_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>*  _list;

/// @brief Field _node offset 0x8
 __declspec(property(get=__get__node, put=__set__node)) ::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>*  _node;

/// @brief Field _version offset 0x10
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _current offset 0x18
 __declspec(property(get=__get__current, put=__set__current)) ::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>  _current;

/// @brief Field _index offset 0x30
 __declspec(property(get=__get__index, put=__set__index)) int32_t  _index;

 __declspec(property(get=get_Current)) ::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() ;

/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr operator  ::System::Runtime::Serialization::IDeserializationCallback*() ;

constexpr void __set__list(::System::Collections::Generic::LinkedList_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>*  value) ;

constexpr ::System::Collections::Generic::LinkedList_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>* __get__list() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedList_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>*> __get__list() const;

constexpr void __set__node(::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>*  value) ;

constexpr ::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>* __get__node() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>*> __get__node() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__current(::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>  value) ;

constexpr ::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>& __get__current() ;

constexpr ::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2> const& __get__current() const;

constexpr void __set__index(int32_t  value) ;

constexpr int32_t& __get__index() ;

constexpr int32_t const& __get__index() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::LinkedList_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>*  list) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2> get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method System.Runtime.Serialization.IDeserializationCallback.OnDeserialization addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object*  sender) ;

// Ctor Parameters [CppParam { name: "_list", ty: "::System::Collections::Generic::LinkedList_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>*", modifiers: "", def_value: None }, CppParam { name: "_node", ty: "::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>*", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_current", ty: "::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __LinkedList_1__Enumerator(::System::Collections::Generic::LinkedList_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>*  _list, ::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>*  _node, int32_t  _version, ::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>  _current, int32_t  _index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __LinkedList_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x38>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __LinkedList_1__Enumerator()  = default;


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
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9533))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9533), inst: 5059 })
// CS Name: ::LinkedList`1::Enumerator<T>
struct CORDL_TYPE __LinkedList_1__Enumerator<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>> : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field _list offset 0x0
 __declspec(property(get=__get__list, put=__set__list)) ::System::Collections::Generic::LinkedList_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  _list;

/// @brief Field _node offset 0x8
 __declspec(property(get=__get__node, put=__set__node)) ::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  _node;

/// @brief Field _version offset 0x10
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _current offset 0x18
 __declspec(property(get=__get__current, put=__set__current)) ::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>  _current;

/// @brief Field _index offset 0x28
 __declspec(property(get=__get__index, put=__set__index)) int32_t  _index;

 __declspec(property(get=get_Current)) ::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() ;

/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr operator  ::System::Runtime::Serialization::IDeserializationCallback*() ;

constexpr void __set__list(::System::Collections::Generic::LinkedList_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  value) ;

constexpr ::System::Collections::Generic::LinkedList_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>* __get__list() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedList_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*> __get__list() const;

constexpr void __set__node(::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  value) ;

constexpr ::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>* __get__node() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*> __get__node() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__current(::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>  value) ;

constexpr ::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>& __get__current() ;

constexpr ::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1> const& __get__current() const;

constexpr void __set__index(int32_t  value) ;

constexpr int32_t& __get__index() ;

constexpr int32_t const& __get__index() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::LinkedList_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  list) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1> get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method System.Runtime.Serialization.IDeserializationCallback.OnDeserialization addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object*  sender) ;

// Ctor Parameters [CppParam { name: "_list", ty: "::System::Collections::Generic::LinkedList_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*", modifiers: "", def_value: None }, CppParam { name: "_node", ty: "::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_current", ty: "::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __LinkedList_1__Enumerator(::System::Collections::Generic::LinkedList_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  _list, ::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  _node, int32_t  _version, ::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>  _current, int32_t  _index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __LinkedList_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __LinkedList_1__Enumerator()  = default;


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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9533))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9533), inst: 3977 })
// CS Name: ::LinkedList`1::Enumerator<T>
struct CORDL_TYPE __LinkedList_1__Enumerator<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree> : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field _list offset 0x0
 __declspec(property(get=__get__list, put=__set__list)) ::System::Collections::Generic::LinkedList_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>*  _list;

/// @brief Field _node offset 0x8
 __declspec(property(get=__get__node, put=__set__node)) ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>*  _node;

/// @brief Field _version offset 0x10
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _current offset 0x18
 __declspec(property(get=__get__current, put=__set__current)) ::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree  _current;

/// @brief Field _index offset 0x28
 __declspec(property(get=__get__index, put=__set__index)) int32_t  _index;

 __declspec(property(get=get_Current)) ::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() ;

/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr operator  ::System::Runtime::Serialization::IDeserializationCallback*() ;

constexpr void __set__list(::System::Collections::Generic::LinkedList_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>*  value) ;

constexpr ::System::Collections::Generic::LinkedList_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>* __get__list() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedList_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>*> __get__list() const;

constexpr void __set__node(::System::Collections::Generic::LinkedListNode_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>*  value) ;

constexpr ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>* __get__node() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedListNode_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>*> __get__node() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__current(::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree  value) ;

constexpr ::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree& __get__current() ;

constexpr ::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree const& __get__current() const;

constexpr void __set__index(int32_t  value) ;

constexpr int32_t& __get__index() ;

constexpr int32_t const& __get__index() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::LinkedList_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>*  list) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method System.Runtime.Serialization.IDeserializationCallback.OnDeserialization addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object*  sender) ;

// Ctor Parameters [CppParam { name: "_list", ty: "::System::Collections::Generic::LinkedList_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>*", modifiers: "", def_value: None }, CppParam { name: "_node", ty: "::System::Collections::Generic::LinkedListNode_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>*", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_current", ty: "::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __LinkedList_1__Enumerator(::System::Collections::Generic::LinkedList_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>*  _list, ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>*  _node, int32_t  _version, ::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree  _current, int32_t  _index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __LinkedList_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __LinkedList_1__Enumerator()  = default;


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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9533))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9533), inst: 3970 })
// CS Name: ::LinkedList`1::Enumerator<T>
struct CORDL_TYPE __LinkedList_1__Enumerator<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo> : public ::bs_hook::ValueTypeWrapper<0x40> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field _list offset 0x0
 __declspec(property(get=__get__list, put=__set__list)) ::System::Collections::Generic::LinkedList_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>*  _list;

/// @brief Field _node offset 0x8
 __declspec(property(get=__get__node, put=__set__node)) ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>*  _node;

/// @brief Field _version offset 0x10
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _current offset 0x18
 __declspec(property(get=__get__current, put=__set__current)) ::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo  _current;

/// @brief Field _index offset 0x38
 __declspec(property(get=__get__index, put=__set__index)) int32_t  _index;

 __declspec(property(get=get_Current)) ::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() ;

/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr operator  ::System::Runtime::Serialization::IDeserializationCallback*() ;

constexpr void __set__list(::System::Collections::Generic::LinkedList_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>*  value) ;

constexpr ::System::Collections::Generic::LinkedList_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>* __get__list() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedList_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>*> __get__list() const;

constexpr void __set__node(::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>*  value) ;

constexpr ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>* __get__node() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>*> __get__node() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__current(::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo  value) ;

constexpr ::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo& __get__current() ;

constexpr ::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo const& __get__current() const;

constexpr void __set__index(int32_t  value) ;

constexpr int32_t& __get__index() ;

constexpr int32_t const& __get__index() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::LinkedList_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>*  list) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method System.Runtime.Serialization.IDeserializationCallback.OnDeserialization addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object*  sender) ;

// Ctor Parameters [CppParam { name: "_list", ty: "::System::Collections::Generic::LinkedList_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>*", modifiers: "", def_value: None }, CppParam { name: "_node", ty: "::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>*", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_current", ty: "::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __LinkedList_1__Enumerator(::System::Collections::Generic::LinkedList_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>*  _list, ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>*  _node, int32_t  _version, ::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo  _current, int32_t  _index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __LinkedList_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x40>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __LinkedList_1__Enumerator()  = default;


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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9533))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9533), inst: 2 })
// CS Name: ::LinkedList`1::Enumerator<T>
struct CORDL_TYPE __LinkedList_1__Enumerator<T> : public ::bs_hook::ValueTypeWrapper<0x28> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field _list offset 0x0
 __declspec(property(get=__get__list, put=__set__list)) ::System::Collections::Generic::LinkedList_1<T>*  _list;

/// @brief Field _node offset 0x8
 __declspec(property(get=__get__node, put=__set__node)) ::System::Collections::Generic::LinkedListNode_1<T>*  _node;

/// @brief Field _version offset 0x10
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _current offset 0x18
 __declspec(property(get=__get__current, put=__set__current)) T  _current;

/// @brief Field _index offset 0x20
 __declspec(property(get=__get__index, put=__set__index)) int32_t  _index;

 __declspec(property(get=get_Current)) T  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<T>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() ;

/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr operator  ::System::Runtime::Serialization::IDeserializationCallback*() ;

constexpr void __set__list(::System::Collections::Generic::LinkedList_1<T>*  value) ;

constexpr ::System::Collections::Generic::LinkedList_1<T>* __get__list() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedList_1<T>*> __get__list() const;

constexpr void __set__node(::System::Collections::Generic::LinkedListNode_1<T>*  value) ;

constexpr ::System::Collections::Generic::LinkedListNode_1<T>* __get__node() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedListNode_1<T>*> __get__node() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__current(T  value) ;

constexpr T& __get__current() ;

constexpr T const& __get__current() const;

constexpr void __set__index(int32_t  value) ;

constexpr int32_t& __get__index() ;

constexpr int32_t const& __get__index() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::LinkedList_1<T>*  list) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline T get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method System.Runtime.Serialization.IDeserializationCallback.OnDeserialization addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object*  sender) ;

// Ctor Parameters [CppParam { name: "_list", ty: "::System::Collections::Generic::LinkedList_1<T>*", modifiers: "", def_value: None }, CppParam { name: "_node", ty: "::System::Collections::Generic::LinkedListNode_1<T>*", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_current", ty: "T", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __LinkedList_1__Enumerator(::System::Collections::Generic::LinkedList_1<T>*  _list, ::System::Collections::Generic::LinkedListNode_1<T>*  _node, int32_t  _version, T  _current, int32_t  _index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __LinkedList_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x28>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __LinkedList_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::LinkedList`1
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1,::il2cpp_utils::il2cpp_reference_type T3_cordlgen_2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9534)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9534), inst: 7239 })
// CS Name: ::System.Collections.Generic::LinkedList`1<T>*
class CORDL_TYPE LinkedList_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>> : public ::System::Object {
public:
// Declarations
using Enumerator = ::System::Collections::Generic::__LinkedList_1__Enumerator<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field VersionName offset 0x0
static constexpr ::ConstString  VersionName{u"Version"};

/// @brief Field CountName offset 0x0
static constexpr ::ConstString  CountName{u"Count"};

/// @brief Field ValuesName offset 0x0
static constexpr ::ConstString  ValuesName{u"Data"};

/// @brief Field head offset 0x10
 __declspec(property(get=__get_head, put=__set_head)) ::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>*  head;

/// @brief Field count offset 0x18
 __declspec(property(get=__get_count, put=__set_count)) int32_t  count;

/// @brief Field version offset 0x1c
 __declspec(property(get=__get_version, put=__set_version)) int32_t  version;

/// @brief Field _syncRoot offset 0x20
 __declspec(property(get=__get__syncRoot, put=__set__syncRoot)) ::System::Object*  _syncRoot;

/// @brief Field _siInfo offset 0x28
 __declspec(property(get=__get__siInfo, put=__set__siInfo)) ::System::Runtime::Serialization::SerializationInfo*  _siInfo;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_First)) ::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>*  First;

 __declspec(property(get=get_Last)) ::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>*  Last;

 __declspec(property(get=System_Collections_Generic_ICollection_T__get_IsReadOnly)) bool  System_Collections_Generic_ICollection_T__IsReadOnly;

 __declspec(property(get=System_Collections_ICollection_get_IsSynchronized)) bool  System_Collections_ICollection_IsSynchronized;

 __declspec(property(get=System_Collections_ICollection_get_SyncRoot)) ::System::Object*  System_Collections_ICollection_SyncRoot;

/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>"
constexpr operator  ::System::Collections::Generic::ICollection_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::ICollection"
constexpr operator  ::System::Collections::ICollection*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>*() noexcept;

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() noexcept;

/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr operator  ::System::Runtime::Serialization::IDeserializationCallback*() noexcept;

constexpr void __set_head(::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>*  value) ;

constexpr ::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>* __get_head() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>*> __get_head() const;

constexpr void __set_count(int32_t  value) ;

constexpr int32_t& __get_count() ;

constexpr int32_t const& __get_count() const;

constexpr void __set_version(int32_t  value) ;

constexpr int32_t& __get_version() ;

constexpr int32_t const& __get_version() const;

constexpr void __set__syncRoot(::System::Object*  value) ;

constexpr ::System::Object* __get__syncRoot() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__syncRoot() const;

constexpr void __set__siInfo(::System::Runtime::Serialization::SerializationInfo*  value) ;

constexpr ::System::Runtime::Serialization::SerializationInfo* __get__siInfo() ;

constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::SerializationInfo*> __get__siInfo() const;

static inline ::System::Collections::Generic::LinkedList_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Collections::Generic::LinkedList_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method get_First addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>* get_First() ;

/// @brief Method get_Last addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>* get_Last() ;

/// @brief Method System.Collections.Generic.ICollection<T>.get_IsReadOnly addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_Generic_ICollection_T__get_IsReadOnly() ;

/// @brief Method System.Collections.Generic.ICollection<T>.Add addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_Generic_ICollection_T__Add(::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>  value) ;

/// @brief Method AddAfter addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddAfter(::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>*  node, ::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>*  newNode) ;

/// @brief Method AddBefore addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>* AddBefore(::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>*  node, ::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>  value) ;

/// @brief Method AddBefore addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddBefore(::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>*  node, ::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>*  newNode) ;

/// @brief Method AddFirst addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>* AddFirst(::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>  value) ;

/// @brief Method AddFirst addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddFirst(::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>*  node) ;

/// @brief Method AddLast addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>* AddLast(::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>  value) ;

/// @brief Method AddLast addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddLast(::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>*  node) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Contains(::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>  value) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline void CopyTo(::ArrayW<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>,::Array<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>*>  array, int32_t  index) ;

/// @brief Method Find addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>* Find(::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>  value) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::__LinkedList_1__Enumerator<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Remove(::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>  value) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Remove(::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>*  node) ;

/// @brief Method RemoveFirst addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveFirst() ;

/// @brief Method GetObjectData addr 0x0 size 0xffffffffffffffff virtual true final false
inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method OnDeserialization addr 0x0 size 0xffffffffffffffff virtual true final false
inline void OnDeserialization(::System::Object*  sender) ;

/// @brief Method InternalInsertNodeBefore addr 0x0 size 0xffffffffffffffff virtual false final false
inline void InternalInsertNodeBefore(::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>*  node, ::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>*  newNode) ;

/// @brief Method InternalInsertNodeToEmptyList addr 0x0 size 0xffffffffffffffff virtual false final false
inline void InternalInsertNodeToEmptyList(::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>*  newNode) ;

/// @brief Method InternalRemoveNode addr 0x0 size 0xffffffffffffffff virtual false final false
inline void InternalRemoveNode(::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>*  node) ;

/// @brief Method ValidateNewNode addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ValidateNewNode(::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>*  node) ;

/// @brief Method ValidateNode addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ValidateNode(::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>*  node) ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_ICollection_CopyTo(::System::Array*  array, int32_t  index) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

// Ctor Parameters [CppParam { name: "", ty: "LinkedList_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LinkedList_1(LinkedList_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LinkedList_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LinkedList_1(LinkedList_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LinkedList_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::LinkedList`1
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9534)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9534), inst: 5059 })
// CS Name: ::System.Collections.Generic::LinkedList`1<T>*
class CORDL_TYPE LinkedList_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>> : public ::System::Object {
public:
// Declarations
using Enumerator = ::System::Collections::Generic::__LinkedList_1__Enumerator<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field VersionName offset 0x0
static constexpr ::ConstString  VersionName{u"Version"};

/// @brief Field CountName offset 0x0
static constexpr ::ConstString  CountName{u"Count"};

/// @brief Field ValuesName offset 0x0
static constexpr ::ConstString  ValuesName{u"Data"};

/// @brief Field head offset 0x10
 __declspec(property(get=__get_head, put=__set_head)) ::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  head;

/// @brief Field count offset 0x18
 __declspec(property(get=__get_count, put=__set_count)) int32_t  count;

/// @brief Field version offset 0x1c
 __declspec(property(get=__get_version, put=__set_version)) int32_t  version;

/// @brief Field _syncRoot offset 0x20
 __declspec(property(get=__get__syncRoot, put=__set__syncRoot)) ::System::Object*  _syncRoot;

/// @brief Field _siInfo offset 0x28
 __declspec(property(get=__get__siInfo, put=__set__siInfo)) ::System::Runtime::Serialization::SerializationInfo*  _siInfo;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_First)) ::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  First;

 __declspec(property(get=get_Last)) ::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  Last;

 __declspec(property(get=System_Collections_Generic_ICollection_T__get_IsReadOnly)) bool  System_Collections_Generic_ICollection_T__IsReadOnly;

 __declspec(property(get=System_Collections_ICollection_get_IsSynchronized)) bool  System_Collections_ICollection_IsSynchronized;

 __declspec(property(get=System_Collections_ICollection_get_SyncRoot)) ::System::Object*  System_Collections_ICollection_SyncRoot;

/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>"
constexpr operator  ::System::Collections::Generic::ICollection_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::ICollection"
constexpr operator  ::System::Collections::ICollection*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*() noexcept;

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() noexcept;

/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr operator  ::System::Runtime::Serialization::IDeserializationCallback*() noexcept;

constexpr void __set_head(::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  value) ;

constexpr ::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>* __get_head() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*> __get_head() const;

constexpr void __set_count(int32_t  value) ;

constexpr int32_t& __get_count() ;

constexpr int32_t const& __get_count() const;

constexpr void __set_version(int32_t  value) ;

constexpr int32_t& __get_version() ;

constexpr int32_t const& __get_version() const;

constexpr void __set__syncRoot(::System::Object*  value) ;

constexpr ::System::Object* __get__syncRoot() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__syncRoot() const;

constexpr void __set__siInfo(::System::Runtime::Serialization::SerializationInfo*  value) ;

constexpr ::System::Runtime::Serialization::SerializationInfo* __get__siInfo() ;

constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::SerializationInfo*> __get__siInfo() const;

static inline ::System::Collections::Generic::LinkedList_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Collections::Generic::LinkedList_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method get_First addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>* get_First() ;

/// @brief Method get_Last addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>* get_Last() ;

/// @brief Method System.Collections.Generic.ICollection<T>.get_IsReadOnly addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_Generic_ICollection_T__get_IsReadOnly() ;

/// @brief Method System.Collections.Generic.ICollection<T>.Add addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_Generic_ICollection_T__Add(::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>  value) ;

/// @brief Method AddAfter addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddAfter(::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  node, ::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  newNode) ;

/// @brief Method AddBefore addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>* AddBefore(::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  node, ::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>  value) ;

/// @brief Method AddBefore addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddBefore(::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  node, ::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  newNode) ;

/// @brief Method AddFirst addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>* AddFirst(::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>  value) ;

/// @brief Method AddFirst addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddFirst(::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  node) ;

/// @brief Method AddLast addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>* AddLast(::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>  value) ;

/// @brief Method AddLast addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddLast(::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  node) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Contains(::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>  value) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline void CopyTo(::ArrayW<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>,::Array<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*>  array, int32_t  index) ;

/// @brief Method Find addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>* Find(::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>  value) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::__LinkedList_1__Enumerator<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Remove(::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>  value) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Remove(::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  node) ;

/// @brief Method RemoveFirst addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveFirst() ;

/// @brief Method GetObjectData addr 0x0 size 0xffffffffffffffff virtual true final false
inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method OnDeserialization addr 0x0 size 0xffffffffffffffff virtual true final false
inline void OnDeserialization(::System::Object*  sender) ;

/// @brief Method InternalInsertNodeBefore addr 0x0 size 0xffffffffffffffff virtual false final false
inline void InternalInsertNodeBefore(::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  node, ::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  newNode) ;

/// @brief Method InternalInsertNodeToEmptyList addr 0x0 size 0xffffffffffffffff virtual false final false
inline void InternalInsertNodeToEmptyList(::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  newNode) ;

/// @brief Method InternalRemoveNode addr 0x0 size 0xffffffffffffffff virtual false final false
inline void InternalRemoveNode(::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  node) ;

/// @brief Method ValidateNewNode addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ValidateNewNode(::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  node) ;

/// @brief Method ValidateNode addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ValidateNode(::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  node) ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_ICollection_CopyTo(::System::Array*  array, int32_t  index) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

// Ctor Parameters [CppParam { name: "", ty: "LinkedList_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LinkedList_1(LinkedList_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LinkedList_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LinkedList_1(LinkedList_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LinkedList_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::LinkedList`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(9534))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9534), inst: 3977 })
// CS Name: ::System.Collections.Generic::LinkedList`1<T>*
class CORDL_TYPE LinkedList_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree> : public ::System::Object {
public:
// Declarations
using Enumerator = ::System::Collections::Generic::__LinkedList_1__Enumerator<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field VersionName offset 0x0
static constexpr ::ConstString  VersionName{u"Version"};

/// @brief Field CountName offset 0x0
static constexpr ::ConstString  CountName{u"Count"};

/// @brief Field ValuesName offset 0x0
static constexpr ::ConstString  ValuesName{u"Data"};

/// @brief Field head offset 0x10
 __declspec(property(get=__get_head, put=__set_head)) ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>*  head;

/// @brief Field count offset 0x18
 __declspec(property(get=__get_count, put=__set_count)) int32_t  count;

/// @brief Field version offset 0x1c
 __declspec(property(get=__get_version, put=__set_version)) int32_t  version;

/// @brief Field _syncRoot offset 0x20
 __declspec(property(get=__get__syncRoot, put=__set__syncRoot)) ::System::Object*  _syncRoot;

/// @brief Field _siInfo offset 0x28
 __declspec(property(get=__get__siInfo, put=__set__siInfo)) ::System::Runtime::Serialization::SerializationInfo*  _siInfo;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_First)) ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>*  First;

 __declspec(property(get=get_Last)) ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>*  Last;

 __declspec(property(get=System_Collections_Generic_ICollection_T__get_IsReadOnly)) bool  System_Collections_Generic_ICollection_T__IsReadOnly;

 __declspec(property(get=System_Collections_ICollection_get_IsSynchronized)) bool  System_Collections_ICollection_IsSynchronized;

 __declspec(property(get=System_Collections_ICollection_get_SyncRoot)) ::System::Object*  System_Collections_ICollection_SyncRoot;

/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>"
constexpr operator  ::System::Collections::Generic::ICollection_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::ICollection"
constexpr operator  ::System::Collections::ICollection*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>*() noexcept;

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() noexcept;

/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr operator  ::System::Runtime::Serialization::IDeserializationCallback*() noexcept;

constexpr void __set_head(::System::Collections::Generic::LinkedListNode_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>*  value) ;

constexpr ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>* __get_head() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedListNode_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>*> __get_head() const;

constexpr void __set_count(int32_t  value) ;

constexpr int32_t& __get_count() ;

constexpr int32_t const& __get_count() const;

constexpr void __set_version(int32_t  value) ;

constexpr int32_t& __get_version() ;

constexpr int32_t const& __get_version() const;

constexpr void __set__syncRoot(::System::Object*  value) ;

constexpr ::System::Object* __get__syncRoot() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__syncRoot() const;

constexpr void __set__siInfo(::System::Runtime::Serialization::SerializationInfo*  value) ;

constexpr ::System::Runtime::Serialization::SerializationInfo* __get__siInfo() ;

constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::SerializationInfo*> __get__siInfo() const;

static inline ::System::Collections::Generic::LinkedList_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Collections::Generic::LinkedList_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method get_First addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>* get_First() ;

/// @brief Method get_Last addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>* get_Last() ;

/// @brief Method System.Collections.Generic.ICollection<T>.get_IsReadOnly addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_Generic_ICollection_T__get_IsReadOnly() ;

/// @brief Method System.Collections.Generic.ICollection<T>.Add addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_Generic_ICollection_T__Add(::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree  value) ;

/// @brief Method AddAfter addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddAfter(::System::Collections::Generic::LinkedListNode_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>*  node, ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>*  newNode) ;

/// @brief Method AddBefore addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>* AddBefore(::System::Collections::Generic::LinkedListNode_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>*  node, ::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree  value) ;

/// @brief Method AddBefore addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddBefore(::System::Collections::Generic::LinkedListNode_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>*  node, ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>*  newNode) ;

/// @brief Method AddFirst addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>* AddFirst(::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree  value) ;

/// @brief Method AddFirst addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddFirst(::System::Collections::Generic::LinkedListNode_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>*  node) ;

/// @brief Method AddLast addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>* AddLast(::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree  value) ;

/// @brief Method AddLast addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddLast(::System::Collections::Generic::LinkedListNode_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>*  node) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Contains(::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree  value) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline void CopyTo(::ArrayW<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree,::Array<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>*>  array, int32_t  index) ;

/// @brief Method Find addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>* Find(::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree  value) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::__LinkedList_1__Enumerator<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Remove(::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree  value) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Remove(::System::Collections::Generic::LinkedListNode_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>*  node) ;

/// @brief Method RemoveFirst addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveFirst() ;

/// @brief Method GetObjectData addr 0x0 size 0xffffffffffffffff virtual true final false
inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method OnDeserialization addr 0x0 size 0xffffffffffffffff virtual true final false
inline void OnDeserialization(::System::Object*  sender) ;

/// @brief Method InternalInsertNodeBefore addr 0x0 size 0xffffffffffffffff virtual false final false
inline void InternalInsertNodeBefore(::System::Collections::Generic::LinkedListNode_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>*  node, ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>*  newNode) ;

/// @brief Method InternalInsertNodeToEmptyList addr 0x0 size 0xffffffffffffffff virtual false final false
inline void InternalInsertNodeToEmptyList(::System::Collections::Generic::LinkedListNode_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>*  newNode) ;

/// @brief Method InternalRemoveNode addr 0x0 size 0xffffffffffffffff virtual false final false
inline void InternalRemoveNode(::System::Collections::Generic::LinkedListNode_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>*  node) ;

/// @brief Method ValidateNewNode addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ValidateNewNode(::System::Collections::Generic::LinkedListNode_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>*  node) ;

/// @brief Method ValidateNode addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ValidateNode(::System::Collections::Generic::LinkedListNode_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>*  node) ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_ICollection_CopyTo(::System::Array*  array, int32_t  index) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

// Ctor Parameters [CppParam { name: "", ty: "LinkedList_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LinkedList_1(LinkedList_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LinkedList_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LinkedList_1(LinkedList_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LinkedList_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::LinkedList`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(9534))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9534), inst: 3970 })
// CS Name: ::System.Collections.Generic::LinkedList`1<T>*
class CORDL_TYPE LinkedList_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo> : public ::System::Object {
public:
// Declarations
using Enumerator = ::System::Collections::Generic::__LinkedList_1__Enumerator<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field VersionName offset 0x0
static constexpr ::ConstString  VersionName{u"Version"};

/// @brief Field CountName offset 0x0
static constexpr ::ConstString  CountName{u"Count"};

/// @brief Field ValuesName offset 0x0
static constexpr ::ConstString  ValuesName{u"Data"};

/// @brief Field head offset 0x10
 __declspec(property(get=__get_head, put=__set_head)) ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>*  head;

/// @brief Field count offset 0x18
 __declspec(property(get=__get_count, put=__set_count)) int32_t  count;

/// @brief Field version offset 0x1c
 __declspec(property(get=__get_version, put=__set_version)) int32_t  version;

/// @brief Field _syncRoot offset 0x20
 __declspec(property(get=__get__syncRoot, put=__set__syncRoot)) ::System::Object*  _syncRoot;

/// @brief Field _siInfo offset 0x28
 __declspec(property(get=__get__siInfo, put=__set__siInfo)) ::System::Runtime::Serialization::SerializationInfo*  _siInfo;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_First)) ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>*  First;

 __declspec(property(get=get_Last)) ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>*  Last;

 __declspec(property(get=System_Collections_Generic_ICollection_T__get_IsReadOnly)) bool  System_Collections_Generic_ICollection_T__IsReadOnly;

 __declspec(property(get=System_Collections_ICollection_get_IsSynchronized)) bool  System_Collections_ICollection_IsSynchronized;

 __declspec(property(get=System_Collections_ICollection_get_SyncRoot)) ::System::Object*  System_Collections_ICollection_SyncRoot;

/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>"
constexpr operator  ::System::Collections::Generic::ICollection_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::ICollection"
constexpr operator  ::System::Collections::ICollection*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>*() noexcept;

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() noexcept;

/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr operator  ::System::Runtime::Serialization::IDeserializationCallback*() noexcept;

constexpr void __set_head(::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>*  value) ;

constexpr ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>* __get_head() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>*> __get_head() const;

constexpr void __set_count(int32_t  value) ;

constexpr int32_t& __get_count() ;

constexpr int32_t const& __get_count() const;

constexpr void __set_version(int32_t  value) ;

constexpr int32_t& __get_version() ;

constexpr int32_t const& __get_version() const;

constexpr void __set__syncRoot(::System::Object*  value) ;

constexpr ::System::Object* __get__syncRoot() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__syncRoot() const;

constexpr void __set__siInfo(::System::Runtime::Serialization::SerializationInfo*  value) ;

constexpr ::System::Runtime::Serialization::SerializationInfo* __get__siInfo() ;

constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::SerializationInfo*> __get__siInfo() const;

static inline ::System::Collections::Generic::LinkedList_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Collections::Generic::LinkedList_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method get_First addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>* get_First() ;

/// @brief Method get_Last addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>* get_Last() ;

/// @brief Method System.Collections.Generic.ICollection<T>.get_IsReadOnly addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_Generic_ICollection_T__get_IsReadOnly() ;

/// @brief Method System.Collections.Generic.ICollection<T>.Add addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_Generic_ICollection_T__Add(::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo  value) ;

/// @brief Method AddAfter addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddAfter(::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>*  node, ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>*  newNode) ;

/// @brief Method AddBefore addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>* AddBefore(::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>*  node, ::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo  value) ;

/// @brief Method AddBefore addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddBefore(::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>*  node, ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>*  newNode) ;

/// @brief Method AddFirst addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>* AddFirst(::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo  value) ;

/// @brief Method AddFirst addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddFirst(::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>*  node) ;

/// @brief Method AddLast addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>* AddLast(::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo  value) ;

/// @brief Method AddLast addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddLast(::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>*  node) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Contains(::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo  value) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline void CopyTo(::ArrayW<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo,::Array<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>*>  array, int32_t  index) ;

/// @brief Method Find addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>* Find(::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo  value) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::__LinkedList_1__Enumerator<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Remove(::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo  value) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Remove(::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>*  node) ;

/// @brief Method RemoveFirst addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveFirst() ;

/// @brief Method GetObjectData addr 0x0 size 0xffffffffffffffff virtual true final false
inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method OnDeserialization addr 0x0 size 0xffffffffffffffff virtual true final false
inline void OnDeserialization(::System::Object*  sender) ;

/// @brief Method InternalInsertNodeBefore addr 0x0 size 0xffffffffffffffff virtual false final false
inline void InternalInsertNodeBefore(::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>*  node, ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>*  newNode) ;

/// @brief Method InternalInsertNodeToEmptyList addr 0x0 size 0xffffffffffffffff virtual false final false
inline void InternalInsertNodeToEmptyList(::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>*  newNode) ;

/// @brief Method InternalRemoveNode addr 0x0 size 0xffffffffffffffff virtual false final false
inline void InternalRemoveNode(::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>*  node) ;

/// @brief Method ValidateNewNode addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ValidateNewNode(::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>*  node) ;

/// @brief Method ValidateNode addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ValidateNode(::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>*  node) ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_ICollection_CopyTo(::System::Array*  array, int32_t  index) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

// Ctor Parameters [CppParam { name: "", ty: "LinkedList_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LinkedList_1(LinkedList_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LinkedList_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LinkedList_1(LinkedList_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LinkedList_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::LinkedList`1
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(9534))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9534), inst: 2 })
// CS Name: ::System.Collections.Generic::LinkedList`1<T>*
class CORDL_TYPE LinkedList_1<T> : public ::System::Object {
public:
// Declarations
using Enumerator = ::System::Collections::Generic::__LinkedList_1__Enumerator<T>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field VersionName offset 0x0
static constexpr ::ConstString  VersionName{u"Version"};

/// @brief Field CountName offset 0x0
static constexpr ::ConstString  CountName{u"Count"};

/// @brief Field ValuesName offset 0x0
static constexpr ::ConstString  ValuesName{u"Data"};

/// @brief Field head offset 0x10
 __declspec(property(get=__get_head, put=__set_head)) ::System::Collections::Generic::LinkedListNode_1<T>*  head;

/// @brief Field count offset 0x18
 __declspec(property(get=__get_count, put=__set_count)) int32_t  count;

/// @brief Field version offset 0x1c
 __declspec(property(get=__get_version, put=__set_version)) int32_t  version;

/// @brief Field _syncRoot offset 0x20
 __declspec(property(get=__get__syncRoot, put=__set__syncRoot)) ::System::Object*  _syncRoot;

/// @brief Field _siInfo offset 0x28
 __declspec(property(get=__get__siInfo, put=__set__siInfo)) ::System::Runtime::Serialization::SerializationInfo*  _siInfo;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_First)) ::System::Collections::Generic::LinkedListNode_1<T>*  First;

 __declspec(property(get=get_Last)) ::System::Collections::Generic::LinkedListNode_1<T>*  Last;

 __declspec(property(get=System_Collections_Generic_ICollection_T__get_IsReadOnly)) bool  System_Collections_Generic_ICollection_T__IsReadOnly;

 __declspec(property(get=System_Collections_ICollection_get_IsSynchronized)) bool  System_Collections_ICollection_IsSynchronized;

 __declspec(property(get=System_Collections_ICollection_get_SyncRoot)) ::System::Object*  System_Collections_ICollection_SyncRoot;

/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<T>"
constexpr operator  ::System::Collections::Generic::ICollection_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::ICollection"
constexpr operator  ::System::Collections::ICollection*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<T>*() noexcept;

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() noexcept;

/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr operator  ::System::Runtime::Serialization::IDeserializationCallback*() noexcept;

constexpr void __set_head(::System::Collections::Generic::LinkedListNode_1<T>*  value) ;

constexpr ::System::Collections::Generic::LinkedListNode_1<T>* __get_head() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedListNode_1<T>*> __get_head() const;

constexpr void __set_count(int32_t  value) ;

constexpr int32_t& __get_count() ;

constexpr int32_t const& __get_count() const;

constexpr void __set_version(int32_t  value) ;

constexpr int32_t& __get_version() ;

constexpr int32_t const& __get_version() const;

constexpr void __set__syncRoot(::System::Object*  value) ;

constexpr ::System::Object* __get__syncRoot() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__syncRoot() const;

constexpr void __set__siInfo(::System::Runtime::Serialization::SerializationInfo*  value) ;

constexpr ::System::Runtime::Serialization::SerializationInfo* __get__siInfo() ;

constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::SerializationInfo*> __get__siInfo() const;

static inline ::System::Collections::Generic::LinkedList_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Collections::Generic::LinkedList_1<T>* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method get_First addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::LinkedListNode_1<T>* get_First() ;

/// @brief Method get_Last addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::LinkedListNode_1<T>* get_Last() ;

/// @brief Method System.Collections.Generic.ICollection<T>.get_IsReadOnly addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_Generic_ICollection_T__get_IsReadOnly() ;

/// @brief Method System.Collections.Generic.ICollection<T>.Add addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_Generic_ICollection_T__Add(T  value) ;

/// @brief Method AddAfter addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddAfter(::System::Collections::Generic::LinkedListNode_1<T>*  node, ::System::Collections::Generic::LinkedListNode_1<T>*  newNode) ;

/// @brief Method AddBefore addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::LinkedListNode_1<T>* AddBefore(::System::Collections::Generic::LinkedListNode_1<T>*  node, T  value) ;

/// @brief Method AddBefore addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddBefore(::System::Collections::Generic::LinkedListNode_1<T>*  node, ::System::Collections::Generic::LinkedListNode_1<T>*  newNode) ;

/// @brief Method AddFirst addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::LinkedListNode_1<T>* AddFirst(T  value) ;

/// @brief Method AddFirst addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddFirst(::System::Collections::Generic::LinkedListNode_1<T>*  node) ;

/// @brief Method AddLast addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::LinkedListNode_1<T>* AddLast(T  value) ;

/// @brief Method AddLast addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddLast(::System::Collections::Generic::LinkedListNode_1<T>*  node) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Contains(T  value) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline void CopyTo(::ArrayW<T,::Array<T>*>  array, int32_t  index) ;

/// @brief Method Find addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::LinkedListNode_1<T>* Find(T  value) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::__LinkedList_1__Enumerator<T> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Remove(T  value) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Remove(::System::Collections::Generic::LinkedListNode_1<T>*  node) ;

/// @brief Method RemoveFirst addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveFirst() ;

/// @brief Method GetObjectData addr 0x0 size 0xffffffffffffffff virtual true final false
inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method OnDeserialization addr 0x0 size 0xffffffffffffffff virtual true final false
inline void OnDeserialization(::System::Object*  sender) ;

/// @brief Method InternalInsertNodeBefore addr 0x0 size 0xffffffffffffffff virtual false final false
inline void InternalInsertNodeBefore(::System::Collections::Generic::LinkedListNode_1<T>*  node, ::System::Collections::Generic::LinkedListNode_1<T>*  newNode) ;

/// @brief Method InternalInsertNodeToEmptyList addr 0x0 size 0xffffffffffffffff virtual false final false
inline void InternalInsertNodeToEmptyList(::System::Collections::Generic::LinkedListNode_1<T>*  newNode) ;

/// @brief Method InternalRemoveNode addr 0x0 size 0xffffffffffffffff virtual false final false
inline void InternalRemoveNode(::System::Collections::Generic::LinkedListNode_1<T>*  node) ;

/// @brief Method ValidateNewNode addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ValidateNewNode(::System::Collections::Generic::LinkedListNode_1<T>*  node) ;

/// @brief Method ValidateNode addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ValidateNode(::System::Collections::Generic::LinkedListNode_1<T>*  node) ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_ICollection_CopyTo(::System::Array*  array, int32_t  index) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

// Ctor Parameters [CppParam { name: "", ty: "LinkedList_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LinkedList_1(LinkedList_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LinkedList_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LinkedList_1(LinkedList_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LinkedList_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::LinkedList_1, "System.Collections.Generic", "LinkedList`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Collections::Generic::__LinkedList_1__Enumerator, "System.Collections.Generic", "LinkedList`1/Enumerator");
