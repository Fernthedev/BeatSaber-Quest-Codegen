#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DictionaryWrapper_2)
namespace System {
class Object;
}
namespace Newtonsoft::Json::Utilities {
class IWrappedDictionary;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IDictionaryEnumerator;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace Newtonsoft::Json::Utilities {
template<typename TKey,typename TValue,typename TEnumeratorKey,typename TEnumeratorValue>
struct __DictionaryWrapper_2__DictionaryEnumerator_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class Array;
}
namespace Newtonsoft::Json::Utilities {
template<typename TKey,typename TValue>
class __DictionaryWrapper_2____c;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Collections {
struct DictionaryEntry;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
template<typename TKey,typename TValue>
class DictionaryWrapper_2;
}
namespace Newtonsoft::Json::Utilities {
template<typename TKey,typename TValue>
class __DictionaryWrapper_2____c;
}
namespace Newtonsoft::Json::Utilities {
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
class DictionaryWrapper_2<TKey,TValue>;
}
namespace Newtonsoft::Json::Utilities {
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
class __DictionaryWrapper_2____c<TKey,TValue>;
}
namespace Newtonsoft::Json::Utilities {
template<typename TKey,typename TValue,typename TEnumeratorKey,typename TEnumeratorValue>
struct __DictionaryWrapper_2__DictionaryEnumerator_2;
}
namespace Newtonsoft::Json::Utilities {
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue,::il2cpp_utils::il2cpp_reference_type TEnumeratorKey,::il2cpp_utils::il2cpp_reference_type TEnumeratorValue>
struct __DictionaryWrapper_2__DictionaryEnumerator_2<TKey,TValue,TEnumeratorKey,TEnumeratorValue>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Newtonsoft::Json::Utilities::DictionaryWrapper_2);
MARK_GEN_REF_PTR_T(::Newtonsoft::Json::Utilities::__DictionaryWrapper_2____c);
MARK_GEN_VAL_T(::Newtonsoft::Json::Utilities::__DictionaryWrapper_2__DictionaryEnumerator_2);
// Type: ::DictionaryEnumerator`2
// Type: ::<>c
// Type: Newtonsoft.Json.Utilities::DictionaryWrapper`2
// Type: ::DictionaryEnumerator`2
namespace Newtonsoft::Json::Utilities {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue,::il2cpp_utils::il2cpp_reference_type TEnumeratorKey,::il2cpp_utils::il2cpp_reference_type TEnumeratorValue>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11881))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11881), inst: 6124 })
// CS Name: ::DictionaryWrapper`2::DictionaryEnumerator`2<TKey,TValue,TEnumeratorKey,TEnumeratorValue>
struct CORDL_TYPE __DictionaryWrapper_2__DictionaryEnumerator_2<TKey,TValue,TEnumeratorKey,TEnumeratorValue> : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field _e offset 0x0
 __declspec(property(get=__get__e, put=__set__e)) ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TEnumeratorKey,TEnumeratorValue>>*  _e;

 __declspec(property(get=get_Entry)) ::System::Collections::DictionaryEntry  Entry;

 __declspec(property(get=get_Key)) ::System::Object*  Key;

 __declspec(property(get=get_Value)) ::System::Object*  Value;

 __declspec(property(get=get_Current)) ::System::Object*  Current;

/// @brief Convert operator to "::System::Collections::IDictionaryEnumerator"
constexpr operator  ::System::Collections::IDictionaryEnumerator*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

constexpr void __set__e(::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TEnumeratorKey,TEnumeratorValue>>*  value) ;

constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TEnumeratorKey,TEnumeratorValue>>* __get__e() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TEnumeratorKey,TEnumeratorValue>>*> __get__e() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TEnumeratorKey,TEnumeratorValue>>*  e) ;

/// @brief Method get_Entry addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::DictionaryEntry get_Entry() ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* get_Value() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* get_Current() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Reset() ;

// Ctor Parameters [CppParam { name: "_e", ty: "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TEnumeratorKey,TEnumeratorValue>>*", modifiers: "", def_value: None }]
constexpr __DictionaryWrapper_2__DictionaryEnumerator_2(::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TEnumeratorKey,TEnumeratorValue>>*  _e) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __DictionaryWrapper_2__DictionaryEnumerator_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __DictionaryWrapper_2__DictionaryEnumerator_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Utilities
// Type: ::<>c
namespace Newtonsoft::Json::Utilities {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11882)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11882), inst: 81 })
// CS Name: ::DictionaryWrapper`2::<>c<TKey,TValue>*
class CORDL_TYPE __DictionaryWrapper_2____c<TKey,TValue> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::Newtonsoft::Json::Utilities::__DictionaryWrapper_2____c<TKey,TValue>*  value) ;

static inline ::Newtonsoft::Json::Utilities::__DictionaryWrapper_2____c<TKey,TValue>* getStaticF___9() ;

static inline void setStaticF___9__25_0(::System::Func_2<::System::Collections::DictionaryEntry,::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*  value) ;

static inline ::System::Func_2<::System::Collections::DictionaryEntry,::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>* getStaticF___9__25_0() ;

static inline ::Newtonsoft::Json::Utilities::__DictionaryWrapper_2____c<TKey,TValue>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <GetEnumerator>b__25_0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::KeyValuePair_2<TKey,TValue> _GetEnumerator_b__25_0(::System::Collections::DictionaryEntry  de) ;

// Ctor Parameters [CppParam { name: "", ty: "__DictionaryWrapper_2____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__DictionaryWrapper_2____c(__DictionaryWrapper_2____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__DictionaryWrapper_2____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__DictionaryWrapper_2____c(__DictionaryWrapper_2____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __DictionaryWrapper_2____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__25_0


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Utilities
// Type: Newtonsoft.Json.Utilities::DictionaryWrapper`2
namespace Newtonsoft::Json::Utilities {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(11883))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11883), inst: 81 })
// CS Name: ::Newtonsoft.Json.Utilities::DictionaryWrapper`2<TKey,TValue>*
class CORDL_TYPE DictionaryWrapper_2<TKey,TValue> : public ::System::Object {
public:
// Declarations
using __c = ::Newtonsoft::Json::Utilities::__DictionaryWrapper_2____c<TKey, TValue>;

template<typename TEnumeratorKey,typename TEnumeratorValue>
using DictionaryEnumerator_2 = ::Newtonsoft::Json::Utilities::__DictionaryWrapper_2__DictionaryEnumerator_2<TKey, TValue, TEnumeratorKey, TEnumeratorValue>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field _dictionary offset 0x10
 __declspec(property(get=__get__dictionary, put=__set__dictionary)) ::System::Collections::IDictionary*  _dictionary;

/// @brief Field _genericDictionary offset 0x18
 __declspec(property(get=__get__genericDictionary, put=__set__genericDictionary)) ::System::Collections::Generic::IDictionary_2<TKey,TValue>*  _genericDictionary;

/// @brief Field _syncRoot offset 0x20
 __declspec(property(get=__get__syncRoot, put=__set__syncRoot)) ::System::Object*  _syncRoot;

 __declspec(property(get=get_Keys)) ::System::Collections::Generic::ICollection_1<TKey>*  Keys;

 __declspec(property(get=get_Values)) ::System::Collections::Generic::ICollection_1<TValue>*  Values;

 __declspec(property(get=get_Item, put=set_Item)) TValue  Item[];

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=System_Collections_IDictionary_get_Item, put=System_Collections_IDictionary_set_Item)) ::System::Object*  System_Collections_IDictionary_Item[];

 __declspec(property(get=System_Collections_IDictionary_get_IsFixedSize)) bool  System_Collections_IDictionary_IsFixedSize;

 __declspec(property(get=System_Collections_IDictionary_get_Keys)) ::System::Collections::ICollection*  System_Collections_IDictionary_Keys;

 __declspec(property(get=System_Collections_IDictionary_get_Values)) ::System::Collections::ICollection*  System_Collections_IDictionary_Values;

 __declspec(property(get=System_Collections_ICollection_get_IsSynchronized)) bool  System_Collections_ICollection_IsSynchronized;

 __declspec(property(get=System_Collections_ICollection_get_SyncRoot)) ::System::Object*  System_Collections_ICollection_SyncRoot;

 __declspec(property(get=get_UnderlyingDictionary)) ::System::Object*  UnderlyingDictionary;

/// @brief Convert operator to "::System::Collections::Generic::IDictionary_2<TKey,TValue>"
constexpr operator  ::System::Collections::Generic::IDictionary_2<TKey,TValue>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
constexpr operator  ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::Newtonsoft::Json::Utilities::IWrappedDictionary"
constexpr operator  ::Newtonsoft::Json::Utilities::IWrappedDictionary*() noexcept;

/// @brief Convert operator to "::System::Collections::IDictionary"
constexpr operator  ::System::Collections::IDictionary*() noexcept;

/// @brief Convert operator to "::System::Collections::ICollection"
constexpr operator  ::System::Collections::ICollection*() noexcept;

constexpr void __set__dictionary(::System::Collections::IDictionary*  value) ;

constexpr ::System::Collections::IDictionary* __get__dictionary() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> __get__dictionary() const;

constexpr void __set__genericDictionary(::System::Collections::Generic::IDictionary_2<TKey,TValue>*  value) ;

constexpr ::System::Collections::Generic::IDictionary_2<TKey,TValue>* __get__genericDictionary() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IDictionary_2<TKey,TValue>*> __get__genericDictionary() const;

constexpr void __set__syncRoot(::System::Object*  value) ;

constexpr ::System::Object* __get__syncRoot() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__syncRoot() const;

static inline ::Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>* New_ctor(::System::Collections::IDictionary*  dictionary) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::IDictionary*  dictionary) ;

static inline ::Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>* New_ctor(::System::Collections::Generic::IDictionary_2<TKey,TValue>*  dictionary) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IDictionary_2<TKey,TValue>*  dictionary) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Add(TKey  key, TValue  value) ;

/// @brief Method ContainsKey addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool ContainsKey(TKey  key) ;

/// @brief Method get_Keys addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::ICollection_1<TKey>* get_Keys() ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Remove(TKey  key) ;

/// @brief Method TryGetValue addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool TryGetValue(TKey  key, ByRef<TValue>  value) ;

/// @brief Method get_Values addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::ICollection_1<TValue>* get_Values() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual true final true
inline TValue get_Item(TKey  key) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual true final true
inline void set_Item(TKey  key, TValue  value) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Add(::System::Collections::Generic::KeyValuePair_2<TKey,TValue>  item) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Contains(::System::Collections::Generic::KeyValuePair_2<TKey,TValue>  item) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline void CopyTo(::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>,::Array<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*>  array, int32_t  arrayIndex) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method get_IsReadOnly addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool get_IsReadOnly() ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Remove(::System::Collections::Generic::KeyValuePair_2<TKey,TValue>  item) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>* GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IDictionary.Add addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IDictionary_Add(::System::Object*  key, ::System::Object*  value) ;

/// @brief Method System.Collections.IDictionary.get_Item addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IDictionary_get_Item(::System::Object*  key) ;

/// @brief Method System.Collections.IDictionary.set_Item addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IDictionary_set_Item(::System::Object*  key, ::System::Object*  value) ;

/// @brief Method System.Collections.IDictionary.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IDictionaryEnumerator* System_Collections_IDictionary_GetEnumerator() ;

/// @brief Method System.Collections.IDictionary.Contains addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_IDictionary_Contains(::System::Object*  key) ;

/// @brief Method System.Collections.IDictionary.get_IsFixedSize addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_IDictionary_get_IsFixedSize() ;

/// @brief Method System.Collections.IDictionary.get_Keys addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::ICollection* System_Collections_IDictionary_get_Keys() ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Remove(::System::Object*  key) ;

/// @brief Method System.Collections.IDictionary.get_Values addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::ICollection* System_Collections_IDictionary_get_Values() ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_ICollection_CopyTo(::System::Array*  array, int32_t  index) ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method get_UnderlyingDictionary addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* get_UnderlyingDictionary() ;

// Ctor Parameters [CppParam { name: "", ty: "DictionaryWrapper_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DictionaryWrapper_2(DictionaryWrapper_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DictionaryWrapper_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DictionaryWrapper_2(DictionaryWrapper_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DictionaryWrapper_2()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Utilities
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Newtonsoft::Json::Utilities::DictionaryWrapper_2, "Newtonsoft.Json.Utilities", "DictionaryWrapper`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Newtonsoft::Json::Utilities::__DictionaryWrapper_2____c, "Newtonsoft.Json.Utilities", "DictionaryWrapper`2/<>c");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Newtonsoft::Json::Utilities::__DictionaryWrapper_2__DictionaryEnumerator_2, "Newtonsoft.Json.Utilities", "DictionaryWrapper`2/DictionaryEnumerator`2");
