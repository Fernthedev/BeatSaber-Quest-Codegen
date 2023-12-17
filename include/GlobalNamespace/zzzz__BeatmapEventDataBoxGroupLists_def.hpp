#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapEventDataBoxGroupLists)
namespace System::Collections::Generic {
template<typename T>
class LinkedListNode_1;
}
namespace GlobalNamespace {
class BeatmapData;
}
namespace GlobalNamespace {
class IBeatToTimeConvertor;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace GlobalNamespace {
class BeatmapEventDataBoxGroup;
}
namespace GlobalNamespace {
class BeatmapEventDataBoxGroupList;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapEventDataBoxGroupLists;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapEventDataBoxGroupLists);
// Type: ::BeatmapEventDataBoxGroupLists
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4307))
// CS Name: ::BeatmapEventDataBoxGroupLists*
class CORDL_TYPE BeatmapEventDataBoxGroupLists : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field _beatmapEventDataBoxGroupListDict offset 0x10
 __declspec(property(get=__get__beatmapEventDataBoxGroupListDict, put=__set__beatmapEventDataBoxGroupListDict)) ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::BeatmapEventDataBoxGroupList*>*  _beatmapEventDataBoxGroupListDict;

/// @brief Field _beatmapData offset 0x18
 __declspec(property(get=__get__beatmapData, put=__set__beatmapData)) ::GlobalNamespace::BeatmapData*  _beatmapData;

/// @brief Field _beatToTimeConvertor offset 0x20
 __declspec(property(get=__get__beatToTimeConvertor, put=__set__beatToTimeConvertor)) ::GlobalNamespace::IBeatToTimeConvertor*  _beatToTimeConvertor;

/// @brief Field _updateBeatmapDataOnInsert offset 0x28
 __declspec(property(get=__get__updateBeatmapDataOnInsert, put=__set__updateBeatmapDataOnInsert)) bool  _updateBeatmapDataOnInsert;

constexpr void __set__beatmapEventDataBoxGroupListDict(::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::BeatmapEventDataBoxGroupList*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::BeatmapEventDataBoxGroupList*>* __get__beatmapEventDataBoxGroupListDict() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::BeatmapEventDataBoxGroupList*>*> __get__beatmapEventDataBoxGroupListDict() const;

constexpr void __set__beatmapData(::GlobalNamespace::BeatmapData*  value) ;

constexpr ::GlobalNamespace::BeatmapData* __get__beatmapData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapData*> __get__beatmapData() const;

constexpr void __set__beatToTimeConvertor(::GlobalNamespace::IBeatToTimeConvertor*  value) ;

constexpr ::GlobalNamespace::IBeatToTimeConvertor* __get__beatToTimeConvertor() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatToTimeConvertor*> __get__beatToTimeConvertor() const;

constexpr void __set__updateBeatmapDataOnInsert(bool  value) ;

constexpr bool& __get__updateBeatmapDataOnInsert() ;

constexpr bool const& __get__updateBeatmapDataOnInsert() const;

static inline ::GlobalNamespace::BeatmapEventDataBoxGroupLists* New_ctor(::GlobalNamespace::BeatmapData*  beatmapData, ::GlobalNamespace::IBeatToTimeConvertor*  beatToTimeConvertor, bool  updateBeatmapDataOnInsert) ;

/// @brief Method .ctor addr 0x23329a8 size 0xa8 virtual false final false
inline void _ctor(::GlobalNamespace::BeatmapData*  beatmapData, ::GlobalNamespace::IBeatToTimeConvertor*  beatToTimeConvertor, bool  updateBeatmapDataOnInsert) ;

/// @brief Method Insert addr 0x2333104 size 0xfc virtual false final false
inline ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>* Insert(int32_t  groupId, ::GlobalNamespace::BeatmapEventDataBoxGroup*  beatmapEventDataBoxGroup) ;

/// @brief Method Remove addr 0x233a24c size 0xc0 virtual false final false
inline void Remove(int32_t  groupId, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>*  nodeToDelete) ;

/// @brief Method ToggleUpdateBeatmapDataOnInsert addr 0x233a30c size 0x15c virtual false final false
inline void ToggleUpdateBeatmapDataOnInsert(bool  enableUpdateOnInsert) ;

/// @brief Method SyncWithBeatmapData addr 0x2333bdc size 0x158 virtual false final false
inline void SyncWithBeatmapData() ;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapEventDataBoxGroupLists", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BeatmapEventDataBoxGroupLists(BeatmapEventDataBoxGroupLists && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapEventDataBoxGroupLists", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeatmapEventDataBoxGroupLists(BeatmapEventDataBoxGroupLists const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BeatmapEventDataBoxGroupLists()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapEventDataBoxGroupLists, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapEventDataBoxGroupLists);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapEventDataBoxGroupLists*, "", "BeatmapEventDataBoxGroupLists");
