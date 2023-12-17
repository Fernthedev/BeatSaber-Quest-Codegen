#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputControlList_1)
namespace UnityEngine::InputSystem {
template<typename TControl>
struct __InputControlList_1__Enumerator;
}
namespace System {
class IDisposable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace Unity::Collections {
struct Allocator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyCollection_1;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
template<typename TControl>
struct InputControlList_1;
}
namespace UnityEngine::InputSystem {
template<typename TControl>
struct __InputControlList_1__Enumerator;
}
namespace UnityEngine::InputSystem {
template<::il2cpp_utils::il2cpp_reference_type TControl>
struct InputControlList_1<TControl>;
}
namespace UnityEngine::InputSystem {
template<::il2cpp_utils::il2cpp_reference_type TControl>
struct __InputControlList_1__Enumerator<TControl>;
}
// Write type traits
MARK_GEN_VAL_T(::UnityEngine::InputSystem::InputControlList_1);
MARK_GEN_VAL_T(::UnityEngine::InputSystem::__InputControlList_1__Enumerator);
// Type: ::Enumerator
// Type: UnityEngine.InputSystem::InputControlList`1
// Type: ::Enumerator
namespace UnityEngine::InputSystem {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TControl>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6225))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6225), inst: 2 })
// CS Name: ::InputControlList`1::Enumerator<TControl>
struct CORDL_TYPE __InputControlList_1__Enumerator<TControl> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Indices offset 0x0
 __declspec(property(get=__get_m_Indices, put=__set_m_Indices)) ::cordl_internals::Ptr<uint64_t>  m_Indices;

/// @brief Field m_Count offset 0x8
 __declspec(property(get=__get_m_Count, put=__set_m_Count)) int32_t  m_Count;

/// @brief Field m_Current offset 0xc
 __declspec(property(get=__get_m_Current, put=__set_m_Current)) int32_t  m_Current;

 __declspec(property(get=get_Current)) TControl  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TControl>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<TControl>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_m_Indices(::cordl_internals::Ptr<uint64_t>  value) ;

constexpr ::cordl_internals::Ptr<uint64_t>& __get_m_Indices() ;

constexpr ::cordl_internals::Ptr<uint64_t> const& __get_m_Indices() const;

constexpr void __set_m_Count(int32_t  value) ;

constexpr int32_t& __get_m_Count() ;

constexpr int32_t const& __get_m_Count() const;

constexpr void __set_m_Current(int32_t  value) ;

constexpr int32_t& __get_m_Current() ;

constexpr int32_t const& __get_m_Current() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::InputSystem::InputControlList_1<TControl>  list) ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline TControl get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

// Ctor Parameters [CppParam { name: "m_Indices", ty: "::cordl_internals::Ptr<uint64_t>", modifiers: "", def_value: None }, CppParam { name: "m_Count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Current", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __InputControlList_1__Enumerator(::cordl_internals::Ptr<uint64_t>  m_Indices, int32_t  m_Count, int32_t  m_Current) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InputControlList_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InputControlList_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputControlList`1
namespace UnityEngine::InputSystem {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TControl>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6226))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6226), inst: 2 })
// CS Name: ::UnityEngine.InputSystem::InputControlList`1<TControl>
struct CORDL_TYPE InputControlList_1<TControl> : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
using Enumerator = ::UnityEngine::InputSystem::__InputControlList_1__Enumerator<TControl>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field kInvalidIndex offset 0x0
static constexpr uint64_t  kInvalidIndex{static_cast<uint64_t>(0xffffffffffffffffu)};

/// @brief Field m_Count offset 0x0
 __declspec(property(get=__get_m_Count, put=__set_m_Count)) int32_t  m_Count;

/// @brief Field m_Indices offset 0x8
 __declspec(property(get=__get_m_Indices, put=__set_m_Indices)) ::Unity::Collections::NativeArray_1<uint64_t>  m_Indices;

/// @brief Field m_Allocator offset 0x18
 __declspec(property(get=__get_m_Allocator, put=__set_m_Allocator)) ::Unity::Collections::Allocator  m_Allocator;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Capacity, put=set_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Item, put=set_Item)) TControl  Item[];

/// @brief Convert operator to "::System::Collections::Generic::IList_1<TControl>"
constexpr operator  ::System::Collections::Generic::IList_1<TControl>*() ;

/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<TControl>"
constexpr operator  ::System::Collections::Generic::ICollection_1<TControl>*() ;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TControl>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<TControl>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<TControl>"
constexpr operator  ::System::Collections::Generic::IReadOnlyList_1<TControl>*() ;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<TControl>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<TControl>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_m_Count(int32_t  value) ;

constexpr int32_t& __get_m_Count() ;

constexpr int32_t const& __get_m_Count() const;

constexpr void __set_m_Indices(::Unity::Collections::NativeArray_1<uint64_t>  value) ;

constexpr ::Unity::Collections::NativeArray_1<uint64_t>& __get_m_Indices() ;

constexpr ::Unity::Collections::NativeArray_1<uint64_t> const& __get_m_Indices() const;

constexpr void __set_m_Allocator(::Unity::Collections::Allocator  value) ;

constexpr ::Unity::Collections::Allocator& __get_m_Allocator() ;

constexpr ::Unity::Collections::Allocator const& __get_m_Allocator() const;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method get_Capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Capacity() ;

/// @brief Method set_Capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Capacity(int32_t  value) ;

/// @brief Method get_IsReadOnly addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool get_IsReadOnly() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual true final true
inline TControl get_Item(int32_t  index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual true final true
inline void set_Item(int32_t  index, TControl  value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Unity::Collections::Allocator  allocator, int32_t  initialCapacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<TControl>*  values, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<TControl,::Array<TControl>*>  values) ;

/// @brief Method Resize addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Resize(int32_t  size) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Add(TControl  item) ;

/// @brief Method AddSlice addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TList>
inline void AddSlice(TList  list, int32_t  count, int32_t  destinationIndex, int32_t  sourceIndex) ;

/// @brief Method AddRange addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddRange(::System::Collections::Generic::IEnumerable_1<TControl>*  list, int32_t  count, int32_t  destinationIndex) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Remove(TControl  item) ;

/// @brief Method RemoveAt addr 0x0 size 0xffffffffffffffff virtual true final true
inline void RemoveAt(int32_t  index) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline void CopyTo(::ArrayW<TControl,::Array<TControl>*>  array, int32_t  arrayIndex) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t IndexOf(TControl  item) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t IndexOf(TControl  item, int32_t  startIndex, int32_t  count) ;

/// @brief Method Insert addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Insert(int32_t  index, TControl  item) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Contains(TControl  item) ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Contains(TControl  item, int32_t  startIndex, int32_t  count) ;

/// @brief Method SwapElements addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SwapElements(int32_t  index1, int32_t  index2) ;

/// @brief Method Sort addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TCompare>
inline void Sort(int32_t  startIndex, int32_t  count, TCompare  comparer) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<TControl,::Array<TControl>*> ToArray(bool  dispose) ;

/// @brief Method AppendTo addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AppendTo(ByRef<::ArrayW<TControl,::Array<TControl>*>>  array, ByRef<int32_t>  count) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<TControl>* GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method ToIndex addr 0x0 size 0xffffffffffffffff virtual false final false
static inline uint64_t ToIndex(TControl  control) ;

/// @brief Method FromIndex addr 0x0 size 0xffffffffffffffff virtual false final false
static inline TControl FromIndex(uint64_t  index) ;

// Ctor Parameters [CppParam { name: "m_Count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Indices", ty: "::Unity::Collections::NativeArray_1<uint64_t>", modifiers: "", def_value: None }, CppParam { name: "m_Allocator", ty: "::Unity::Collections::Allocator", modifiers: "", def_value: None }]
constexpr InputControlList_1(int32_t  m_Count, ::Unity::Collections::NativeArray_1<uint64_t>  m_Indices, ::Unity::Collections::Allocator  m_Allocator) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit InputControlList_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 InputControlList_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::InputSystem::InputControlList_1, "UnityEngine.InputSystem", "InputControlList`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::InputSystem::__InputControlList_1__Enumerator, "UnityEngine.InputSystem", "InputControlList`1/Enumerator");
