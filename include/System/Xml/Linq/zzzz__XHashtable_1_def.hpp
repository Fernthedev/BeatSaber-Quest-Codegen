#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XHashtable_1)
namespace System::Xml::Linq {
template<typename TValue>
class __XHashtable_1__XHashtableState;
}
namespace System::Xml::Linq {
template<typename TValue>
class __XHashtable_1__ExtractKeyDelegate;
}
namespace System {
class Object;
}
namespace GlobalNamespace {
template<typename TValue>
struct __XHashtable_1__XHashtableState__Entry;
}
// Forward declare root types
namespace System::Xml::Linq {
template<typename TValue>
class XHashtable_1;
}
namespace System::Xml::Linq {
template<typename TValue>
class __XHashtable_1__ExtractKeyDelegate;
}
namespace System::Xml::Linq {
template<typename TValue>
class __XHashtable_1__XHashtableState;
}
namespace System::Xml::Linq {
template<::il2cpp_utils::il2cpp_reference_type TValue>
class XHashtable_1<TValue>;
}
namespace System::Xml::Linq {
template<::il2cpp_utils::il2cpp_reference_type TValue>
class __XHashtable_1__ExtractKeyDelegate<TValue>;
}
namespace System::Xml::Linq {
template<::il2cpp_utils::il2cpp_reference_type TValue>
class __XHashtable_1__XHashtableState<TValue>;
}
namespace GlobalNamespace {
template<typename TValue>
struct __XHashtable_1__XHashtableState__Entry;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Xml::Linq::XHashtable_1);
MARK_GEN_REF_PTR_T(::System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate);
MARK_GEN_REF_PTR_T(::System::Xml::Linq::__XHashtable_1__XHashtableState);
MARK_GEN_VAL_T(::GlobalNamespace::__XHashtable_1__XHashtableState__Entry);
// Type: ::ExtractKeyDelegate
// Type: ::Entry
namespace GlobalNamespace {
// cpp template
template<typename TValue>
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15443))
// CS Name: ::XHashtable`1::XHashtableState::Entry<TValue>
struct CORDL_TYPE __XHashtable_1__XHashtableState__Entry : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Value offset 0x0
 __declspec(property(get=__get_Value, put=__set_Value)) TValue  Value;

/// @brief Field HashCode offset 0x8
 __declspec(property(get=__get_HashCode, put=__set_HashCode)) int32_t  HashCode;

/// @brief Field Next offset 0xc
 __declspec(property(get=__get_Next, put=__set_Next)) int32_t  Next;

constexpr void __set_Value(TValue  value) ;

constexpr TValue& __get_Value() ;

constexpr TValue const& __get_Value() const;

constexpr void __set_HashCode(int32_t  value) ;

constexpr int32_t& __get_HashCode() ;

constexpr int32_t const& __get_HashCode() const;

constexpr void __set_Next(int32_t  value) ;

constexpr int32_t& __get_Next() ;

constexpr int32_t const& __get_Next() const;

// Ctor Parameters [CppParam { name: "Value", ty: "TValue", modifiers: "", def_value: None }, CppParam { name: "HashCode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Next", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __XHashtable_1__XHashtableState__Entry(TValue  Value, int32_t  HashCode, int32_t  Next) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __XHashtable_1__XHashtableState__Entry(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __XHashtable_1__XHashtableState__Entry()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::XHashtableState
// Type: System.Xml.Linq::XHashtable`1
// Type: ::ExtractKeyDelegate
namespace System::Xml::Linq {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15442)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15442), inst: 2 })
// CS Name: ::XHashtable`1::ExtractKeyDelegate<TValue>*
class CORDL_TYPE __XHashtable_1__ExtractKeyDelegate<TValue> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate<TValue>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW Invoke(TValue  value) ;

// Ctor Parameters [CppParam { name: "", ty: "__XHashtable_1__ExtractKeyDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__XHashtable_1__ExtractKeyDelegate(__XHashtable_1__ExtractKeyDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__XHashtable_1__ExtractKeyDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__XHashtable_1__ExtractKeyDelegate(__XHashtable_1__ExtractKeyDelegate const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __XHashtable_1__ExtractKeyDelegate()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Linq
// Type: ::XHashtableState
namespace System::Xml::Linq {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(15444))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15444), inst: 2 })
// CS Name: ::XHashtable`1::XHashtableState<TValue>*
class CORDL_TYPE __XHashtable_1__XHashtableState<TValue> : public ::System::Object {
public:
// Declarations
using Entry = ::GlobalNamespace::__XHashtable_1__XHashtableState__Entry<TValue>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field _buckets offset 0x10
 __declspec(property(get=__get__buckets, put=__set__buckets)) ::ArrayW<int32_t,::Array<int32_t>*>  _buckets;

/// @brief Field _entries offset 0x18
 __declspec(property(get=__get__entries, put=__set__entries)) ::ArrayW<::GlobalNamespace::__XHashtable_1__XHashtableState__Entry<TValue>,::Array<::GlobalNamespace::__XHashtable_1__XHashtableState__Entry<TValue>>*>  _entries;

/// @brief Field _numEntries offset 0x20
 __declspec(property(get=__get__numEntries, put=__set__numEntries)) int32_t  _numEntries;

/// @brief Field _extractKey offset 0x28
 __declspec(property(get=__get__extractKey, put=__set__extractKey)) ::System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate<TValue>*  _extractKey;

constexpr void __set__buckets(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get__buckets() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get__buckets() const;

constexpr void __set__entries(::ArrayW<::GlobalNamespace::__XHashtable_1__XHashtableState__Entry<TValue>,::Array<::GlobalNamespace::__XHashtable_1__XHashtableState__Entry<TValue>>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__XHashtable_1__XHashtableState__Entry<TValue>,::Array<::GlobalNamespace::__XHashtable_1__XHashtableState__Entry<TValue>>*>& __get__entries() ;

constexpr ::ArrayW<::GlobalNamespace::__XHashtable_1__XHashtableState__Entry<TValue>,::Array<::GlobalNamespace::__XHashtable_1__XHashtableState__Entry<TValue>>*> const& __get__entries() const;

constexpr void __set__numEntries(int32_t  value) ;

constexpr int32_t& __get__numEntries() ;

constexpr int32_t const& __get__numEntries() const;

constexpr void __set__extractKey(::System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate<TValue>*  value) ;

constexpr ::System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate<TValue>* __get__extractKey() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate<TValue>*> __get__extractKey() const;

static inline ::System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>* New_ctor(::System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate<TValue>*  extractKey, int32_t  capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate<TValue>*  extractKey, int32_t  capacity) ;

/// @brief Method Resize addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>* Resize() ;

/// @brief Method TryGetValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TryGetValue(::StringW  key, int32_t  index, int32_t  count, ByRef<TValue>  value) ;

/// @brief Method TryAdd addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TryAdd(TValue  value, ByRef<TValue>  newValue) ;

/// @brief Method FindEntry addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool FindEntry(int32_t  hashCode, ::StringW  key, int32_t  index, int32_t  count, ByRef<int32_t>  entryIndex) ;

/// @brief Method ComputeHashCode addr 0x0 size 0xffffffffffffffff virtual false final false
static inline int32_t ComputeHashCode(::StringW  key, int32_t  index, int32_t  count) ;

// Ctor Parameters [CppParam { name: "", ty: "__XHashtable_1__XHashtableState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__XHashtable_1__XHashtableState(__XHashtable_1__XHashtableState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__XHashtable_1__XHashtableState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__XHashtable_1__XHashtableState(__XHashtable_1__XHashtableState const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __XHashtable_1__XHashtableState()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Linq
// Type: System.Xml.Linq::XHashtable`1
namespace System::Xml::Linq {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(15445))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15445), inst: 2 })
// CS Name: ::System.Xml.Linq::XHashtable`1<TValue>*
class CORDL_TYPE XHashtable_1<TValue> : public ::System::Object {
public:
// Declarations
using XHashtableState = ::System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>;

using ExtractKeyDelegate = ::System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate<TValue>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field _state offset 0x10
 __declspec(property(get=__get__state, put=__set__state)) ::System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>*  _state;

constexpr void __set__state(::System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>*  value) ;

constexpr ::System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>* __get__state() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>*> __get__state() const;

static inline ::System::Xml::Linq::XHashtable_1<TValue>* New_ctor(::System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate<TValue>*  extractKey, int32_t  capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate<TValue>*  extractKey, int32_t  capacity) ;

/// @brief Method TryGetValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TryGetValue(::StringW  key, int32_t  index, int32_t  count, ByRef<TValue>  value) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
inline TValue Add(TValue  value) ;

// Ctor Parameters [CppParam { name: "", ty: "XHashtable_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XHashtable_1(XHashtable_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XHashtable_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XHashtable_1(XHashtable_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 XHashtable_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Linq
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Xml::Linq::XHashtable_1, "System.Xml.Linq", "XHashtable`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate, "System.Xml.Linq", "XHashtable`1/ExtractKeyDelegate");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Xml::Linq::__XHashtable_1__XHashtableState, "System.Xml.Linq", "XHashtable`1/XHashtableState");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__XHashtable_1__XHashtableState__Entry, "System.Xml.Linq", "XHashtable`1/XHashtableState/Entry");
