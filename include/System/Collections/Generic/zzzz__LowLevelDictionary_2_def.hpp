#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LowLevelDictionary_2)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class __LowLevelDictionary_2__Entry;
}
namespace System::Collections::Generic {
template<typename T>
class IEqualityComparer_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue,typename T>
class __LowLevelDictionary_2__DefaultComparer_1;
}
// Forward declare root types
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class LowLevelDictionary_2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue,typename T>
class __LowLevelDictionary_2__DefaultComparer_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class __LowLevelDictionary_2__Entry;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
class LowLevelDictionary_2<TKey,TValue>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type TValue>
class LowLevelDictionary_2<int32_t,TValue>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue,::il2cpp_utils::il2cpp_reference_type T>
class __LowLevelDictionary_2__DefaultComparer_1<TKey,TValue,T>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type TValue>
class __LowLevelDictionary_2__DefaultComparer_1<int32_t,TValue,int32_t>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
class __LowLevelDictionary_2__Entry<TKey,TValue>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type TValue>
class __LowLevelDictionary_2__Entry<int32_t,TValue>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Collections::Generic::LowLevelDictionary_2);
MARK_GEN_REF_PTR_T(::System::Collections::Generic::__LowLevelDictionary_2__DefaultComparer_1);
MARK_GEN_REF_PTR_T(::System::Collections::Generic::__LowLevelDictionary_2__Entry);
// Type: ::Entry
// Type: ::DefaultComparer`1
// Type: System.Collections.Generic::LowLevelDictionary`2
// Type: ::Entry
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(3848))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3848), inst: 1610 })
// CS Name: ::LowLevelDictionary`2::Entry<TKey,TValue>*
class CORDL_TYPE __LowLevelDictionary_2__Entry<int32_t,TValue> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field _key offset 0x10
 __declspec(property(get=__get__key, put=__set__key)) int32_t  _key;

/// @brief Field _value offset 0x18
 __declspec(property(get=__get__value, put=__set__value)) TValue  _value;

/// @brief Field _next offset 0x20
 __declspec(property(get=__get__next, put=__set__next)) ::System::Collections::Generic::__LowLevelDictionary_2__Entry<int32_t,TValue>*  _next;

constexpr void __set__key(int32_t  value) ;

constexpr int32_t& __get__key() ;

constexpr int32_t const& __get__key() const;

constexpr void __set__value(TValue  value) ;

constexpr TValue& __get__value() ;

constexpr TValue const& __get__value() const;

constexpr void __set__next(::System::Collections::Generic::__LowLevelDictionary_2__Entry<int32_t,TValue>*  value) ;

constexpr ::System::Collections::Generic::__LowLevelDictionary_2__Entry<int32_t,TValue>* __get__next() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::__LowLevelDictionary_2__Entry<int32_t,TValue>*> __get__next() const;

static inline ::System::Collections::Generic::__LowLevelDictionary_2__Entry<int32_t,TValue>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__LowLevelDictionary_2__Entry", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__LowLevelDictionary_2__Entry(__LowLevelDictionary_2__Entry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__LowLevelDictionary_2__Entry", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__LowLevelDictionary_2__Entry(__LowLevelDictionary_2__Entry const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __LowLevelDictionary_2__Entry()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::Entry
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3848)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3848), inst: 81 })
// CS Name: ::LowLevelDictionary`2::Entry<TKey,TValue>*
class CORDL_TYPE __LowLevelDictionary_2__Entry<TKey,TValue> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field _key offset 0x10
 __declspec(property(get=__get__key, put=__set__key)) TKey  _key;

/// @brief Field _value offset 0x18
 __declspec(property(get=__get__value, put=__set__value)) TValue  _value;

/// @brief Field _next offset 0x20
 __declspec(property(get=__get__next, put=__set__next)) ::System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey,TValue>*  _next;

constexpr void __set__key(TKey  value) ;

constexpr TKey& __get__key() ;

constexpr TKey const& __get__key() const;

constexpr void __set__value(TValue  value) ;

constexpr TValue& __get__value() ;

constexpr TValue const& __get__value() const;

constexpr void __set__next(::System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey,TValue>*  value) ;

constexpr ::System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey,TValue>* __get__next() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey,TValue>*> __get__next() const;

static inline ::System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey,TValue>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__LowLevelDictionary_2__Entry", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__LowLevelDictionary_2__Entry(__LowLevelDictionary_2__Entry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__LowLevelDictionary_2__Entry", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__LowLevelDictionary_2__Entry(__LowLevelDictionary_2__Entry const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __LowLevelDictionary_2__Entry()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::DefaultComparer`1
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue,::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3849)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3849), inst: 5330 })
// CS Name: ::LowLevelDictionary`2::DefaultComparer`1<TKey,TValue,T>*
class CORDL_TYPE __LowLevelDictionary_2__DefaultComparer_1<TKey,TValue,T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<T>"
constexpr operator  ::System::Collections::Generic::IEqualityComparer_1<T>*() noexcept;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(T  x, T  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t GetHashCode(T  obj) ;

static inline ::System::Collections::Generic::__LowLevelDictionary_2__DefaultComparer_1<TKey,TValue,T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__LowLevelDictionary_2__DefaultComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__LowLevelDictionary_2__DefaultComparer_1(__LowLevelDictionary_2__DefaultComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__LowLevelDictionary_2__DefaultComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__LowLevelDictionary_2__DefaultComparer_1(__LowLevelDictionary_2__DefaultComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __LowLevelDictionary_2__DefaultComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::DefaultComparer`1
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3849)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3849), inst: 5324 })
// CS Name: ::LowLevelDictionary`2::DefaultComparer`1<TKey,TValue,T>*
class CORDL_TYPE __LowLevelDictionary_2__DefaultComparer_1<int32_t,TValue,int32_t> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<int32_t>"
constexpr operator  ::System::Collections::Generic::IEqualityComparer_1<int32_t>*() noexcept;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(int32_t  x, int32_t  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t GetHashCode(int32_t  obj) ;

static inline ::System::Collections::Generic::__LowLevelDictionary_2__DefaultComparer_1<int32_t,TValue,int32_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__LowLevelDictionary_2__DefaultComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__LowLevelDictionary_2__DefaultComparer_1(__LowLevelDictionary_2__DefaultComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__LowLevelDictionary_2__DefaultComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__LowLevelDictionary_2__DefaultComparer_1(__LowLevelDictionary_2__DefaultComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __LowLevelDictionary_2__DefaultComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::LowLevelDictionary`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(3850))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3850), inst: 1610 })
// CS Name: ::System.Collections.Generic::LowLevelDictionary`2<TKey,TValue>*
class CORDL_TYPE LowLevelDictionary_2<int32_t,TValue> : public ::System::Object {
public:
// Declarations
template<typename T>
using DefaultComparer_1 = ::System::Collections::Generic::__LowLevelDictionary_2__DefaultComparer_1<int32_t, TValue, T>;

using Entry = ::System::Collections::Generic::__LowLevelDictionary_2__Entry<int32_t, TValue>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field _buckets offset 0x10
 __declspec(property(get=__get__buckets, put=__set__buckets)) ::ArrayW<::System::Collections::Generic::__LowLevelDictionary_2__Entry<int32_t,TValue>*,::Array<::System::Collections::Generic::__LowLevelDictionary_2__Entry<int32_t,TValue>*>*>  _buckets;

/// @brief Field _numEntries offset 0x18
 __declspec(property(get=__get__numEntries, put=__set__numEntries)) int32_t  _numEntries;

/// @brief Field _version offset 0x1c
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _comparer offset 0x20
 __declspec(property(get=__get__comparer, put=__set__comparer)) ::System::Collections::Generic::IEqualityComparer_1<int32_t>*  _comparer;

 __declspec(property(put=set_Item)) int32_t  Item;

constexpr void __set__buckets(::ArrayW<::System::Collections::Generic::__LowLevelDictionary_2__Entry<int32_t,TValue>*,::Array<::System::Collections::Generic::__LowLevelDictionary_2__Entry<int32_t,TValue>*>*>  value) ;

constexpr ::ArrayW<::System::Collections::Generic::__LowLevelDictionary_2__Entry<int32_t,TValue>*,::Array<::System::Collections::Generic::__LowLevelDictionary_2__Entry<int32_t,TValue>*>*>& __get__buckets() ;

constexpr ::ArrayW<::System::Collections::Generic::__LowLevelDictionary_2__Entry<int32_t,TValue>*,::Array<::System::Collections::Generic::__LowLevelDictionary_2__Entry<int32_t,TValue>*>*> const& __get__buckets() const;

constexpr void __set__numEntries(int32_t  value) ;

constexpr int32_t& __get__numEntries() ;

constexpr int32_t const& __get__numEntries() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__comparer(::System::Collections::Generic::IEqualityComparer_1<int32_t>*  value) ;

constexpr ::System::Collections::Generic::IEqualityComparer_1<int32_t>* __get__comparer() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEqualityComparer_1<int32_t>*> __get__comparer() const;

static inline ::System::Collections::Generic::LowLevelDictionary_2<int32_t,TValue>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Collections::Generic::LowLevelDictionary_2<int32_t,TValue>* New_ctor(int32_t  capacity, ::System::Collections::Generic::IEqualityComparer_1<int32_t>*  comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity, ::System::Collections::Generic::IEqualityComparer_1<int32_t>*  comparer) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Item(int32_t  key, TValue  value) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear(int32_t  capacity) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Remove(int32_t  key) ;

/// @brief Method Find addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::__LowLevelDictionary_2__Entry<int32_t,TValue>* Find(int32_t  key) ;

/// @brief Method UncheckedAdd addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::__LowLevelDictionary_2__Entry<int32_t,TValue>* UncheckedAdd(int32_t  key, TValue  value) ;

/// @brief Method ExpandBuckets addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ExpandBuckets() ;

/// @brief Method GetBucket addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t GetBucket(int32_t  key, int32_t  numBuckets) ;

// Ctor Parameters [CppParam { name: "", ty: "LowLevelDictionary_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LowLevelDictionary_2(LowLevelDictionary_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LowLevelDictionary_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LowLevelDictionary_2(LowLevelDictionary_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LowLevelDictionary_2()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::LowLevelDictionary`2
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3850)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3850), inst: 81 })
// CS Name: ::System.Collections.Generic::LowLevelDictionary`2<TKey,TValue>*
class CORDL_TYPE LowLevelDictionary_2<TKey,TValue> : public ::System::Object {
public:
// Declarations
template<typename T>
using DefaultComparer_1 = ::System::Collections::Generic::__LowLevelDictionary_2__DefaultComparer_1<TKey, TValue, T>;

using Entry = ::System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey, TValue>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field _buckets offset 0x10
 __declspec(property(get=__get__buckets, put=__set__buckets)) ::ArrayW<::System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey,TValue>*,::Array<::System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey,TValue>*>*>  _buckets;

/// @brief Field _numEntries offset 0x18
 __declspec(property(get=__get__numEntries, put=__set__numEntries)) int32_t  _numEntries;

/// @brief Field _version offset 0x1c
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _comparer offset 0x20
 __declspec(property(get=__get__comparer, put=__set__comparer)) ::System::Collections::Generic::IEqualityComparer_1<TKey>*  _comparer;

 __declspec(property(put=set_Item)) TKey  Item;

constexpr void __set__buckets(::ArrayW<::System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey,TValue>*,::Array<::System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey,TValue>*>*>  value) ;

constexpr ::ArrayW<::System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey,TValue>*,::Array<::System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey,TValue>*>*>& __get__buckets() ;

constexpr ::ArrayW<::System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey,TValue>*,::Array<::System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey,TValue>*>*> const& __get__buckets() const;

constexpr void __set__numEntries(int32_t  value) ;

constexpr int32_t& __get__numEntries() ;

constexpr int32_t const& __get__numEntries() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__comparer(::System::Collections::Generic::IEqualityComparer_1<TKey>*  value) ;

constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>* __get__comparer() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEqualityComparer_1<TKey>*> __get__comparer() const;

static inline ::System::Collections::Generic::LowLevelDictionary_2<TKey,TValue>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Collections::Generic::LowLevelDictionary_2<TKey,TValue>* New_ctor(int32_t  capacity, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Item(TKey  key, TValue  value) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear(int32_t  capacity) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Remove(TKey  key) ;

/// @brief Method Find addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey,TValue>* Find(TKey  key) ;

/// @brief Method UncheckedAdd addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey,TValue>* UncheckedAdd(TKey  key, TValue  value) ;

/// @brief Method ExpandBuckets addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ExpandBuckets() ;

/// @brief Method GetBucket addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t GetBucket(TKey  key, int32_t  numBuckets) ;

// Ctor Parameters [CppParam { name: "", ty: "LowLevelDictionary_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LowLevelDictionary_2(LowLevelDictionary_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LowLevelDictionary_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LowLevelDictionary_2(LowLevelDictionary_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LowLevelDictionary_2()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::LowLevelDictionary_2, "System.Collections.Generic", "LowLevelDictionary`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::__LowLevelDictionary_2__DefaultComparer_1, "System.Collections.Generic", "LowLevelDictionary`2/DefaultComparer`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::__LowLevelDictionary_2__Entry, "System.Collections.Generic", "LowLevelDictionary`2/Entry");
