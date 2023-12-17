#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapData)
namespace GlobalNamespace {
class BeatmapObjectData;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class LinkedList_1;
}
namespace GlobalNamespace {
template<typename T>
class __BeatmapData____c__DisplayClass45_0_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace GlobalNamespace {
class IBeatmapDataBasicInfo;
}
namespace System::Collections::Generic {
template<typename T>
class LinkedListNode_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace GlobalNamespace {
template<typename TBase>
class BeatmapDataSortedListForTypeAndIds_1;
}
namespace GlobalNamespace {
class BeatmapDataItem;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
template<typename T>
class ISortedList_1;
}
namespace GlobalNamespace {
class BeatmapObjectsInTimeRowProcessor;
}
namespace GlobalNamespace {
class __BeatmapData__BeatmapDataBinaryHeapItem;
}
namespace GlobalNamespace {
class BeatmapEventData;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T>
class IComparable_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class __BeatmapData____c__DisplayClass45_0_1;
}
namespace GlobalNamespace {
class BeatmapData;
}
namespace GlobalNamespace {
class __BeatmapData__BeatmapDataBinaryHeapItem;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type T>
class __BeatmapData____c__DisplayClass45_0_1<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::__BeatmapData____c__DisplayClass45_0_1);
MARK_REF_PTR_T(::GlobalNamespace::BeatmapData);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapData__BeatmapDataBinaryHeapItem);
// Type: ::BeatmapDataBinaryHeapItem
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4243))
// CS Name: ::BeatmapData::BeatmapDataBinaryHeapItem*
class CORDL_TYPE __BeatmapData__BeatmapDataBinaryHeapItem : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field node offset 0x10
 __declspec(property(get=__get_node, put=__set_node)) ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*  node;

/// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::__BeatmapData__BeatmapDataBinaryHeapItem*>"
constexpr operator  ::System::IComparable_1<::GlobalNamespace::__BeatmapData__BeatmapDataBinaryHeapItem*>*() noexcept;

constexpr void __set_node(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*  value) ;

constexpr ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* __get_node() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*> __get_node() const;

static inline ::GlobalNamespace::__BeatmapData__BeatmapDataBinaryHeapItem* New_ctor(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*  node) ;

/// @brief Method .ctor addr 0x232e490 size 0x28 virtual false final false
inline void _ctor(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*  node) ;

/// @brief Method CompareTo addr 0x232eb80 size 0xb0 virtual true final true
inline int32_t CompareTo(::GlobalNamespace::__BeatmapData__BeatmapDataBinaryHeapItem*  other) ;

// Ctor Parameters [CppParam { name: "", ty: "__BeatmapData__BeatmapDataBinaryHeapItem", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__BeatmapData__BeatmapDataBinaryHeapItem(__BeatmapData__BeatmapDataBinaryHeapItem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__BeatmapData__BeatmapDataBinaryHeapItem", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__BeatmapData__BeatmapDataBinaryHeapItem(__BeatmapData__BeatmapDataBinaryHeapItem const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __BeatmapData__BeatmapDataBinaryHeapItem()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapData__BeatmapDataBinaryHeapItem, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass45_0`1
// Type: ::BeatmapData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4245))
// CS Name: ::BeatmapData*
class CORDL_TYPE BeatmapData : public ::System::Object {
public:
// Declarations
template<typename T>
using __c__DisplayClass45_0_1 = ::GlobalNamespace::__BeatmapData____c__DisplayClass45_0_1<T>;

using BeatmapDataBinaryHeapItem = ::GlobalNamespace::__BeatmapData__BeatmapDataBinaryHeapItem;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x70};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x70 - sizeof(::System::Object)]{};

/// @brief Field <updateAllBeatmapDataOnInsert>k__BackingField offset 0x10
 __declspec(property(get=__get__updateAllBeatmapDataOnInsert_k__BackingField, put=__set__updateAllBeatmapDataOnInsert_k__BackingField)) bool  _updateAllBeatmapDataOnInsert_k__BackingField;

/// @brief Field <cuttableNotesCount>k__BackingField offset 0x14
 __declspec(property(get=__get__cuttableNotesCount_k__BackingField, put=__set__cuttableNotesCount_k__BackingField)) int32_t  _cuttableNotesCount_k__BackingField;

/// @brief Field <obstaclesCount>k__BackingField offset 0x18
 __declspec(property(get=__get__obstaclesCount_k__BackingField, put=__set__obstaclesCount_k__BackingField)) int32_t  _obstaclesCount_k__BackingField;

/// @brief Field <bombsCount>k__BackingField offset 0x1c
 __declspec(property(get=__get__bombsCount_k__BackingField, put=__set__bombsCount_k__BackingField)) int32_t  _bombsCount_k__BackingField;

/// @brief Field beatmapEventDataWasInsertedEvent offset 0x20
 __declspec(property(get=__get_beatmapEventDataWasInsertedEvent, put=__set_beatmapEventDataWasInsertedEvent)) ::System::Action_2<::GlobalNamespace::BeatmapEventData*,::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>*  beatmapEventDataWasInsertedEvent;

/// @brief Field beatmapEventDataWillBeRemovedEvent offset 0x28
 __declspec(property(get=__get_beatmapEventDataWillBeRemovedEvent, put=__set_beatmapEventDataWillBeRemovedEvent)) ::System::Action_2<::GlobalNamespace::BeatmapEventData*,::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>*  beatmapEventDataWillBeRemovedEvent;

/// @brief Field beatmapEventDataWasRemovedEvent offset 0x30
 __declspec(property(get=__get_beatmapEventDataWasRemovedEvent, put=__set_beatmapEventDataWasRemovedEvent)) ::System::Action_1<::GlobalNamespace::BeatmapEventData*>*  beatmapEventDataWasRemovedEvent;

/// @brief Field _allBeatmapData offset 0x38
 __declspec(property(get=__get__allBeatmapData, put=__set__allBeatmapData)) ::GlobalNamespace::ISortedList_1<::GlobalNamespace::BeatmapDataItem*>*  _allBeatmapData;

/// @brief Field _allBeatmapDataItemToNodeMap offset 0x40
 __declspec(property(get=__get__allBeatmapDataItemToNodeMap, put=__set__allBeatmapDataItemToNodeMap)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BeatmapDataItem*,::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>*  _allBeatmapDataItemToNodeMap;

/// @brief Field _beatmapDataItemsPerTypeAndId offset 0x48
 __declspec(property(get=__get__beatmapDataItemsPerTypeAndId, put=__set__beatmapDataItemsPerTypeAndId)) ::GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1<::GlobalNamespace::BeatmapDataItem*>*  _beatmapDataItemsPerTypeAndId;

/// @brief Field _numberOfLines offset 0x50
 __declspec(property(get=__get__numberOfLines, put=__set__numberOfLines)) int32_t  _numberOfLines;

/// @brief Field _specialBasicBeatmapEventKeywords offset 0x58
 __declspec(property(get=__get__specialBasicBeatmapEventKeywords, put=__set__specialBasicBeatmapEventKeywords)) ::System::Collections::Generic::HashSet_1<::StringW>*  _specialBasicBeatmapEventKeywords;

/// @brief Field _beatmapObjectsInTimeRowProcessor offset 0x60
 __declspec(property(get=__get__beatmapObjectsInTimeRowProcessor, put=__set__beatmapObjectsInTimeRowProcessor)) ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*  _beatmapObjectsInTimeRowProcessor;

/// @brief Field _prevAddedBeatmapObjectDataTime offset 0x68
 __declspec(property(get=__get__prevAddedBeatmapObjectDataTime, put=__set__prevAddedBeatmapObjectDataTime)) float_t  _prevAddedBeatmapObjectDataTime;

/// @brief Field _isCreatingFilteredCopy offset 0x6c
 __declspec(property(get=__get__isCreatingFilteredCopy, put=__set__isCreatingFilteredCopy)) bool  _isCreatingFilteredCopy;

 __declspec(property(get=get_updateAllBeatmapDataOnInsert, put=set_updateAllBeatmapDataOnInsert)) bool  updateAllBeatmapDataOnInsert;

 __declspec(property(get=get_allBeatmapDataItems)) ::System::Collections::Generic::LinkedList_1<::GlobalNamespace::BeatmapDataItem*>*  allBeatmapDataItems;

 __declspec(property(get=get_numberOfLines)) int32_t  numberOfLines;

 __declspec(property(get=get_cuttableNotesCount, put=set_cuttableNotesCount)) int32_t  cuttableNotesCount;

 __declspec(property(get=get_obstaclesCount, put=set_obstaclesCount)) int32_t  obstaclesCount;

 __declspec(property(get=get_bombsCount, put=set_bombsCount)) int32_t  bombsCount;

 __declspec(property(get=get_spawnRotationEventsCount)) int32_t  spawnRotationEventsCount;

 __declspec(property(get=get_specialBasicBeatmapEventKeywords)) ::System::Collections::Generic::IEnumerable_1<::StringW>*  specialBasicBeatmapEventKeywords;

/// @brief Convert operator to "::GlobalNamespace::IReadonlyBeatmapData"
constexpr operator  ::GlobalNamespace::IReadonlyBeatmapData*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IBeatmapDataBasicInfo"
constexpr operator  ::GlobalNamespace::IBeatmapDataBasicInfo*() noexcept;

constexpr void __set__updateAllBeatmapDataOnInsert_k__BackingField(bool  value) ;

constexpr bool& __get__updateAllBeatmapDataOnInsert_k__BackingField() ;

constexpr bool const& __get__updateAllBeatmapDataOnInsert_k__BackingField() const;

constexpr void __set__cuttableNotesCount_k__BackingField(int32_t  value) ;

constexpr int32_t& __get__cuttableNotesCount_k__BackingField() ;

constexpr int32_t const& __get__cuttableNotesCount_k__BackingField() const;

constexpr void __set__obstaclesCount_k__BackingField(int32_t  value) ;

constexpr int32_t& __get__obstaclesCount_k__BackingField() ;

constexpr int32_t const& __get__obstaclesCount_k__BackingField() const;

constexpr void __set__bombsCount_k__BackingField(int32_t  value) ;

constexpr int32_t& __get__bombsCount_k__BackingField() ;

constexpr int32_t const& __get__bombsCount_k__BackingField() const;

constexpr void __set_beatmapEventDataWasInsertedEvent(::System::Action_2<::GlobalNamespace::BeatmapEventData*,::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>*  value) ;

constexpr ::System::Action_2<::GlobalNamespace::BeatmapEventData*,::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>* __get_beatmapEventDataWasInsertedEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::BeatmapEventData*,::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>*> __get_beatmapEventDataWasInsertedEvent() const;

constexpr void __set_beatmapEventDataWillBeRemovedEvent(::System::Action_2<::GlobalNamespace::BeatmapEventData*,::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>*  value) ;

constexpr ::System::Action_2<::GlobalNamespace::BeatmapEventData*,::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>* __get_beatmapEventDataWillBeRemovedEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::BeatmapEventData*,::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>*> __get_beatmapEventDataWillBeRemovedEvent() const;

constexpr void __set_beatmapEventDataWasRemovedEvent(::System::Action_1<::GlobalNamespace::BeatmapEventData*>*  value) ;

constexpr ::System::Action_1<::GlobalNamespace::BeatmapEventData*>* __get_beatmapEventDataWasRemovedEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::BeatmapEventData*>*> __get_beatmapEventDataWasRemovedEvent() const;

constexpr void __set__allBeatmapData(::GlobalNamespace::ISortedList_1<::GlobalNamespace::BeatmapDataItem*>*  value) ;

constexpr ::GlobalNamespace::ISortedList_1<::GlobalNamespace::BeatmapDataItem*>* __get__allBeatmapData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ISortedList_1<::GlobalNamespace::BeatmapDataItem*>*> __get__allBeatmapData() const;

constexpr void __set__allBeatmapDataItemToNodeMap(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BeatmapDataItem*,::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BeatmapDataItem*,::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>* __get__allBeatmapDataItemToNodeMap() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BeatmapDataItem*,::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>*> __get__allBeatmapDataItemToNodeMap() const;

constexpr void __set__beatmapDataItemsPerTypeAndId(::GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1<::GlobalNamespace::BeatmapDataItem*>*  value) ;

constexpr ::GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1<::GlobalNamespace::BeatmapDataItem*>* __get__beatmapDataItemsPerTypeAndId() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1<::GlobalNamespace::BeatmapDataItem*>*> __get__beatmapDataItemsPerTypeAndId() const;

constexpr void __set__numberOfLines(int32_t  value) ;

constexpr int32_t& __get__numberOfLines() ;

constexpr int32_t const& __get__numberOfLines() const;

constexpr void __set__specialBasicBeatmapEventKeywords(::System::Collections::Generic::HashSet_1<::StringW>*  value) ;

constexpr ::System::Collections::Generic::HashSet_1<::StringW>* __get__specialBasicBeatmapEventKeywords() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> __get__specialBasicBeatmapEventKeywords() const;

constexpr void __set__beatmapObjectsInTimeRowProcessor(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*  value) ;

constexpr ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor* __get__beatmapObjectsInTimeRowProcessor() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*> __get__beatmapObjectsInTimeRowProcessor() const;

constexpr void __set__prevAddedBeatmapObjectDataTime(float_t  value) ;

constexpr float_t& __get__prevAddedBeatmapObjectDataTime() ;

constexpr float_t const& __get__prevAddedBeatmapObjectDataTime() const;

constexpr void __set__isCreatingFilteredCopy(bool  value) ;

constexpr bool& __get__isCreatingFilteredCopy() ;

constexpr bool const& __get__isCreatingFilteredCopy() const;

/// @brief Method get_updateAllBeatmapDataOnInsert addr 0x232d3d0 size 0x8 virtual false final false
inline bool get_updateAllBeatmapDataOnInsert() ;

/// @brief Method set_updateAllBeatmapDataOnInsert addr 0x232d3d8 size 0xc virtual false final false
inline void set_updateAllBeatmapDataOnInsert(bool  value) ;

/// @brief Method get_allBeatmapDataItems addr 0x232d3e4 size 0xa4 virtual true final true
inline ::System::Collections::Generic::LinkedList_1<::GlobalNamespace::BeatmapDataItem*>* get_allBeatmapDataItems() ;

/// @brief Method get_numberOfLines addr 0x232d488 size 0x8 virtual true final true
inline int32_t get_numberOfLines() ;

/// @brief Method get_cuttableNotesCount addr 0x232d490 size 0x8 virtual true final true
inline int32_t get_cuttableNotesCount() ;

/// @brief Method set_cuttableNotesCount addr 0x232d498 size 0x8 virtual false final false
inline void set_cuttableNotesCount(int32_t  value) ;

/// @brief Method get_obstaclesCount addr 0x232d4a0 size 0x8 virtual true final true
inline int32_t get_obstaclesCount() ;

/// @brief Method set_obstaclesCount addr 0x232d4a8 size 0x8 virtual false final false
inline void set_obstaclesCount(int32_t  value) ;

/// @brief Method get_bombsCount addr 0x232d4b0 size 0x8 virtual true final true
inline int32_t get_bombsCount() ;

/// @brief Method set_bombsCount addr 0x232d4b8 size 0x8 virtual false final false
inline void set_bombsCount(int32_t  value) ;

/// @brief Method get_spawnRotationEventsCount addr 0x232d4c0 size 0x4c virtual true final true
inline int32_t get_spawnRotationEventsCount() ;

/// @brief Method get_specialBasicBeatmapEventKeywords addr 0x232d50c size 0x8 virtual true final true
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* get_specialBasicBeatmapEventKeywords() ;

/// @brief Method add_beatmapEventDataWasInsertedEvent addr 0x232d514 size 0xb0 virtual true final true
inline void add_beatmapEventDataWasInsertedEvent(::System::Action_2<::GlobalNamespace::BeatmapEventData*,::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>*  value) ;

/// @brief Method remove_beatmapEventDataWasInsertedEvent addr 0x232d5c4 size 0xb0 virtual true final true
inline void remove_beatmapEventDataWasInsertedEvent(::System::Action_2<::GlobalNamespace::BeatmapEventData*,::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>*  value) ;

/// @brief Method add_beatmapEventDataWillBeRemovedEvent addr 0x232d674 size 0xb0 virtual true final true
inline void add_beatmapEventDataWillBeRemovedEvent(::System::Action_2<::GlobalNamespace::BeatmapEventData*,::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>*  value) ;

/// @brief Method remove_beatmapEventDataWillBeRemovedEvent addr 0x232d724 size 0xb0 virtual true final true
inline void remove_beatmapEventDataWillBeRemovedEvent(::System::Action_2<::GlobalNamespace::BeatmapEventData*,::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>*  value) ;

/// @brief Method add_beatmapEventDataWasRemovedEvent addr 0x232d7d4 size 0xb0 virtual true final true
inline void add_beatmapEventDataWasRemovedEvent(::System::Action_1<::GlobalNamespace::BeatmapEventData*>*  value) ;

/// @brief Method remove_beatmapEventDataWasRemovedEvent addr 0x232d884 size 0xb0 virtual true final true
inline void remove_beatmapEventDataWasRemovedEvent(::System::Action_1<::GlobalNamespace::BeatmapEventData*>*  value) ;

static inline ::GlobalNamespace::BeatmapData* New_ctor(int32_t  numberOfLines) ;

/// @brief Method .ctor addr 0x232d934 size 0x194 virtual false final false
inline void _ctor(int32_t  numberOfLines) ;

/// @brief Method GetBeatmapDataItems addr 0x0 size 0xffffffffffffffff virtual true final true
template<typename T>
inline ::System::Collections::Generic::IEnumerable_1<T>* GetBeatmapDataItems(int32_t  subtypeGroupIdentifier) ;

/// @brief Method GetBeatmapDataItemsCount addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
inline int32_t GetBeatmapDataItemsCount(int32_t  subtypeGroupIdentifier) ;

/// @brief Method GetBeatmapDataItemsMerged addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
inline ::System::Collections::Generic::IEnumerable_1<T>* GetBeatmapDataItemsMerged(::ArrayW<int32_t,::Array<int32_t>*>  subtypeGroupIdentifiers) ;

/// @brief Method GetBeatmapDataItemsMergedCount addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
inline int32_t GetBeatmapDataItemsMergedCount(::ArrayW<int32_t,::Array<int32_t>*>  subtypeGroupIdentifiers) ;

/// @brief Method AddBeatmapObjectData addr 0x232dac8 size 0x19c virtual false final false
inline void AddBeatmapObjectData(::GlobalNamespace::BeatmapObjectData*  beatmapObjectData) ;

/// @brief Method AddBeatmapObjectDataInOrder addr 0x232de38 size 0x2c virtual false final false
inline void AddBeatmapObjectDataInOrder(::GlobalNamespace::BeatmapObjectData*  beatmapObjectData) ;

/// @brief Method InsertBeatmapEventData addr 0x232de64 size 0x9c virtual false final false
inline void InsertBeatmapEventData(::GlobalNamespace::BeatmapEventData*  beatmapEventData) ;

/// @brief Method InsertBeatmapEventDataInOrder addr 0x232df00 size 0x58 virtual false final false
inline void InsertBeatmapEventDataInOrder(::GlobalNamespace::BeatmapEventData*  beatmapEventData) ;

/// @brief Method RemoveBeatmapEventData addr 0x232df58 size 0x17c virtual false final false
inline void RemoveBeatmapEventData(::GlobalNamespace::BeatmapEventData*  beatmapEventData) ;

/// @brief Method AddSpecialBasicBeatmapEventKeyword addr 0x232e0d4 size 0x58 virtual false final false
inline void AddSpecialBasicBeatmapEventKeyword(::StringW  specialBasicBeatmapEventKeyword) ;

/// @brief Method ProcessRemainingData addr 0x232e12c size 0x1c virtual false final false
inline void ProcessRemainingData() ;

/// @brief Method ProcessAndSortBeatmapData addr 0x232e148 size 0x348 virtual false final false
inline void ProcessAndSortBeatmapData() ;

/// @brief Method GetCopy addr 0x232e4b8 size 0x34c virtual true final true
inline ::GlobalNamespace::BeatmapData* GetCopy() ;

/// @brief Method GetFilteredCopy addr 0x232e804 size 0x37c virtual true final true
inline ::GlobalNamespace::BeatmapData* GetFilteredCopy(::System::Func_2<::GlobalNamespace::BeatmapDataItem*,::GlobalNamespace::BeatmapDataItem*>*  processDataItem) ;

/// @brief Method InsertToAllBeatmapData addr 0x232dc64 size 0x1d4 virtual false final false
inline ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* InsertToAllBeatmapData(::GlobalNamespace::BeatmapDataItem*  beatmapDataItem, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*  node) ;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BeatmapData(BeatmapData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeatmapData(BeatmapData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BeatmapData()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapData, 0x70>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass45_0`1
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4244)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4244), inst: 2 })
// CS Name: ::BeatmapData::<>c__DisplayClass45_0`1<T>*
class CORDL_TYPE __BeatmapData____c__DisplayClass45_0_1<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field subtypeGroupIdentifiers offset 0x10
 __declspec(property(get=__get_subtypeGroupIdentifiers, put=__set_subtypeGroupIdentifiers)) ::ArrayW<int32_t,::Array<int32_t>*>  subtypeGroupIdentifiers;

constexpr void __set_subtypeGroupIdentifiers(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get_subtypeGroupIdentifiers() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get_subtypeGroupIdentifiers() const;

static inline ::GlobalNamespace::__BeatmapData____c__DisplayClass45_0_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <GetBeatmapDataItemsMerged>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool _GetBeatmapDataItemsMerged_b__0(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*  head) ;

// Ctor Parameters [CppParam { name: "", ty: "__BeatmapData____c__DisplayClass45_0_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__BeatmapData____c__DisplayClass45_0_1(__BeatmapData____c__DisplayClass45_0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__BeatmapData____c__DisplayClass45_0_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__BeatmapData____c__DisplayClass45_0_1(__BeatmapData____c__DisplayClass45_0_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __BeatmapData____c__DisplayClass45_0_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__BeatmapData____c__DisplayClass45_0_1, "", "BeatmapData/<>c__DisplayClass45_0`1");
NEED_NO_BOX(::GlobalNamespace::BeatmapData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapData*, "", "BeatmapData");
NEED_NO_BOX(::GlobalNamespace::__BeatmapData__BeatmapDataBinaryHeapItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapData__BeatmapDataBinaryHeapItem*, "", "BeatmapData/BeatmapDataBinaryHeapItem");
