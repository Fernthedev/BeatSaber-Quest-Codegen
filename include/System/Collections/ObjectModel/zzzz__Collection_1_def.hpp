#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Collection_1)
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections {
class ICollection;
}
namespace System {
class Object;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Array;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections {
class IList;
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
class IReadOnlyCollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
// Forward declare root types
namespace System::Collections::ObjectModel {
template<typename T>
class Collection_1;
}
namespace System::Collections::ObjectModel {
template<::il2cpp_utils::il2cpp_reference_type T>
class Collection_1<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Collections::ObjectModel::Collection_1);
// Type: System.Collections.ObjectModel::Collection`1
// Type: System.Collections.ObjectModel::Collection`1
namespace System::Collections::ObjectModel {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3814)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3814), inst: 2 })
// CS Name: ::System.Collections.ObjectModel::Collection`1<T>*
class CORDL_TYPE Collection_1<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field items offset 0x10
 __declspec(property(get=__get_items, put=__set_items)) ::System::Collections::Generic::IList_1<T>*  items;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Items)) ::System::Collections::Generic::IList_1<T>*  Items;

 __declspec(property(get=get_Item, put=set_Item)) T  Item[];

 __declspec(property(get=System_Collections_Generic_ICollection_T__get_IsReadOnly)) bool  System_Collections_Generic_ICollection_T__IsReadOnly;

 __declspec(property(get=System_Collections_ICollection_get_IsSynchronized)) bool  System_Collections_ICollection_IsSynchronized;

 __declspec(property(get=System_Collections_ICollection_get_SyncRoot)) ::System::Object*  System_Collections_ICollection_SyncRoot;

 __declspec(property(get=System_Collections_IList_get_Item, put=System_Collections_IList_set_Item)) ::System::Object*  System_Collections_IList_Item[];

 __declspec(property(get=System_Collections_IList_get_IsReadOnly)) bool  System_Collections_IList_IsReadOnly;

 __declspec(property(get=System_Collections_IList_get_IsFixedSize)) bool  System_Collections_IList_IsFixedSize;

/// @brief Convert operator to "::System::Collections::Generic::IList_1<T>"
constexpr operator  ::System::Collections::Generic::IList_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<T>"
constexpr operator  ::System::Collections::Generic::ICollection_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IList"
constexpr operator  ::System::Collections::IList*() noexcept;

/// @brief Convert operator to "::System::Collections::ICollection"
constexpr operator  ::System::Collections::ICollection*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<T>"
constexpr operator  ::System::Collections::Generic::IReadOnlyList_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<T>*() noexcept;

constexpr void __set_items(::System::Collections::Generic::IList_1<T>*  value) ;

constexpr ::System::Collections::Generic::IList_1<T>* __get_items() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IList_1<T>*> __get_items() const;

static inline ::System::Collections::ObjectModel::Collection_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Collections::ObjectModel::Collection_1<T>* New_ctor(::System::Collections::Generic::IList_1<T>*  list) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IList_1<T>*  list) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method get_Items addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::IList_1<T>* get_Items() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual true final true
inline T get_Item(int32_t  index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual true final true
inline void set_Item(int32_t  index, T  value) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Add(T  item) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Clear() ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline void CopyTo(::ArrayW<T,::Array<T>*>  array, int32_t  index) ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Contains(T  item) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<T>* GetEnumerator() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t IndexOf(T  item) ;

/// @brief Method Insert addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Insert(int32_t  index, T  item) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Remove(T  item) ;

/// @brief Method RemoveAt addr 0x0 size 0xffffffffffffffff virtual true final true
inline void RemoveAt(int32_t  index) ;

/// @brief Method ClearItems addr 0x0 size 0xffffffffffffffff virtual true final false
inline void ClearItems() ;

/// @brief Method InsertItem addr 0x0 size 0xffffffffffffffff virtual true final false
inline void InsertItem(int32_t  index, T  item) ;

/// @brief Method RemoveItem addr 0x0 size 0xffffffffffffffff virtual true final false
inline void RemoveItem(int32_t  index) ;

/// @brief Method SetItem addr 0x0 size 0xffffffffffffffff virtual true final false
inline void SetItem(int32_t  index, T  item) ;

/// @brief Method System.Collections.Generic.ICollection<T>.get_IsReadOnly addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_Generic_ICollection_T__get_IsReadOnly() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_ICollection_CopyTo(::System::Array*  array, int32_t  index) ;

/// @brief Method System.Collections.IList.get_Item addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IList_get_Item(int32_t  index) ;

/// @brief Method System.Collections.IList.set_Item addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IList_set_Item(int32_t  index, ::System::Object*  value) ;

/// @brief Method System.Collections.IList.get_IsReadOnly addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_IList_get_IsReadOnly() ;

/// @brief Method System.Collections.IList.get_IsFixedSize addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_IList_get_IsFixedSize() ;

/// @brief Method System.Collections.IList.Add addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_Collections_IList_Add(::System::Object*  value) ;

/// @brief Method System.Collections.IList.Contains addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_IList_Contains(::System::Object*  value) ;

/// @brief Method System.Collections.IList.IndexOf addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_Collections_IList_IndexOf(::System::Object*  value) ;

/// @brief Method System.Collections.IList.Insert addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IList_Insert(int32_t  index, ::System::Object*  value) ;

/// @brief Method System.Collections.IList.Remove addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IList_Remove(::System::Object*  value) ;

/// @brief Method IsCompatibleObject addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool IsCompatibleObject(::System::Object*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "Collection_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Collection_1(Collection_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Collection_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Collection_1(Collection_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Collection_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::ObjectModel
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::ObjectModel::Collection_1, "System.Collections.ObjectModel", "Collection`1");
