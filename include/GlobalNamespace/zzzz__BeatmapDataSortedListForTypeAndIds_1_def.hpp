#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapDataSortedListForTypeAndIds_1)
namespace GlobalNamespace {
template<typename T>
class ISortedListItemProcessor_1;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace System {
class Type;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace GlobalNamespace {
template<typename T>
class ISortedList_1;
}
namespace System::Collections::Generic {
template<typename T>
class LinkedListNode_1;
}
namespace GlobalNamespace {
template<typename TBase>
class __BeatmapDataSortedListForTypeAndIds_1____c;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TBase>
class BeatmapDataSortedListForTypeAndIds_1;
}
namespace GlobalNamespace {
template<typename TBase>
class __BeatmapDataSortedListForTypeAndIds_1____c;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type TBase>
class BeatmapDataSortedListForTypeAndIds_1<TBase>;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type TBase>
class __BeatmapDataSortedListForTypeAndIds_1____c<TBase>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1);
MARK_GEN_REF_PTR_T(::GlobalNamespace::__BeatmapDataSortedListForTypeAndIds_1____c);
// Type: ::<>c
// Type: ::BeatmapDataSortedListForTypeAndIds`1
// Type: ::<>c
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TBase>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4256)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4256), inst: 2 })
// CS Name: ::BeatmapDataSortedListForTypeAndIds`1::<>c<TBase>*
class CORDL_TYPE __BeatmapDataSortedListForTypeAndIds_1____c<TBase> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::GlobalNamespace::__BeatmapDataSortedListForTypeAndIds_1____c<TBase>*  value) ;

static inline ::GlobalNamespace::__BeatmapDataSortedListForTypeAndIds_1____c<TBase>* getStaticF___9() ;

static inline void setStaticF___9__1_0(::System::Func_2<::GlobalNamespace::ISortedList_1<TBase>*,::System::Collections::Generic::LinkedListNode_1<TBase>*>*  value) ;

static inline ::System::Func_2<::GlobalNamespace::ISortedList_1<TBase>*,::System::Collections::Generic::LinkedListNode_1<TBase>*>* getStaticF___9__1_0() ;

static inline void setStaticF___9__1_1(::System::Func_2<::System::Collections::Generic::LinkedListNode_1<TBase>*,bool>*  value) ;

static inline ::System::Func_2<::System::Collections::Generic::LinkedListNode_1<TBase>*,bool>* getStaticF___9__1_1() ;

static inline ::GlobalNamespace::__BeatmapDataSortedListForTypeAndIds_1____c<TBase>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <get_sortedListHeads>b__1_0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::LinkedListNode_1<TBase>* _get_sortedListHeads_b__1_0(::GlobalNamespace::ISortedList_1<TBase>*  listItem) ;

/// @brief Method <get_sortedListHeads>b__1_1 addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool _get_sortedListHeads_b__1_1(::System::Collections::Generic::LinkedListNode_1<TBase>*  head) ;

// Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataSortedListForTypeAndIds_1____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__BeatmapDataSortedListForTypeAndIds_1____c(__BeatmapDataSortedListForTypeAndIds_1____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataSortedListForTypeAndIds_1____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__BeatmapDataSortedListForTypeAndIds_1____c(__BeatmapDataSortedListForTypeAndIds_1____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __BeatmapDataSortedListForTypeAndIds_1____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__1_0

// Static field <>9__1_1


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BeatmapDataSortedListForTypeAndIds`1
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TBase>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4257)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4257), inst: 2 })
// CS Name: ::BeatmapDataSortedListForTypeAndIds`1<TBase>*
class CORDL_TYPE BeatmapDataSortedListForTypeAndIds_1<TBase> : public ::System::Object {
public:
// Declarations
using __c = ::GlobalNamespace::__BeatmapDataSortedListForTypeAndIds_1____c<TBase>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field _items offset 0x10
 __declspec(property(get=__get__items, put=__set__items)) ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*,int32_t>,::GlobalNamespace::ISortedList_1<TBase>*>*  _items;

/// @brief Field _sortedListsDataProcessors offset 0x18
 __declspec(property(get=__get__sortedListsDataProcessors, put=__set__sortedListsDataProcessors)) ::System::Collections::Generic::Dictionary_2<::System::Type*,::GlobalNamespace::ISortedListItemProcessor_1<TBase>*>*  _sortedListsDataProcessors;

/// @brief Field _itemToNodeMap offset 0x20
 __declspec(property(get=__get__itemToNodeMap, put=__set__itemToNodeMap)) ::System::Collections::Generic::Dictionary_2<TBase,::System::Collections::Generic::LinkedListNode_1<TBase>*>*  _itemToNodeMap;

 __declspec(property(get=get_sortedListHeads)) ::ArrayW<::System::Collections::Generic::LinkedListNode_1<TBase>*,::Array<::System::Collections::Generic::LinkedListNode_1<TBase>*>*>  sortedListHeads;

constexpr void __set__items(::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*,int32_t>,::GlobalNamespace::ISortedList_1<TBase>*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*,int32_t>,::GlobalNamespace::ISortedList_1<TBase>*>* __get__items() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*,int32_t>,::GlobalNamespace::ISortedList_1<TBase>*>*> __get__items() const;

constexpr void __set__sortedListsDataProcessors(::System::Collections::Generic::Dictionary_2<::System::Type*,::GlobalNamespace::ISortedListItemProcessor_1<TBase>*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::GlobalNamespace::ISortedListItemProcessor_1<TBase>*>* __get__sortedListsDataProcessors() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Type*,::GlobalNamespace::ISortedListItemProcessor_1<TBase>*>*> __get__sortedListsDataProcessors() const;

constexpr void __set__itemToNodeMap(::System::Collections::Generic::Dictionary_2<TBase,::System::Collections::Generic::LinkedListNode_1<TBase>*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<TBase,::System::Collections::Generic::LinkedListNode_1<TBase>*>* __get__itemToNodeMap() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<TBase,::System::Collections::Generic::LinkedListNode_1<TBase>*>*> __get__itemToNodeMap() const;

/// @brief Method get_sortedListHeads addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<::System::Collections::Generic::LinkedListNode_1<TBase>*,::Array<::System::Collections::Generic::LinkedListNode_1<TBase>*>*> get_sortedListHeads() ;

/// @brief Method InsertItem addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::LinkedListNode_1<TBase>* InsertItem(TBase  item) ;

/// @brief Method RemoveItem addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveItem(TBase  item) ;

/// @brief Method GetCount addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
inline int32_t GetCount(int32_t  typeIdentifier) ;

/// @brief Method GetItems addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
inline ::System::Collections::Generic::IEnumerable_1<T>* GetItems(int32_t  typeIdentifier) ;

/// @brief Method GetList addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::ISortedList_1<TBase>* GetList(::System::Type*  type, int32_t  typeIdentifier) ;

/// @brief Method RemoveList addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveList(::System::Type*  type, int32_t  typeIdentifier) ;

static inline ::GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1<TBase>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDataSortedListForTypeAndIds_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BeatmapDataSortedListForTypeAndIds_1(BeatmapDataSortedListForTypeAndIds_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDataSortedListForTypeAndIds_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeatmapDataSortedListForTypeAndIds_1(BeatmapDataSortedListForTypeAndIds_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BeatmapDataSortedListForTypeAndIds_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1, "", "BeatmapDataSortedListForTypeAndIds`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__BeatmapDataSortedListForTypeAndIds_1____c, "", "BeatmapDataSortedListForTypeAndIds`1/<>c");
