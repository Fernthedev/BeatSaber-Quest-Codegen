#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LeaderboardIdsModelSO)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class __LeaderboardIdsModelSO__LeaderboardIdData;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
// Forward declare root types
namespace GlobalNamespace {
class LeaderboardIdsModelSO;
}
namespace GlobalNamespace {
class __LeaderboardIdsModelSO__LeaderboardIdData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LeaderboardIdsModelSO);
MARK_REF_PTR_T(::GlobalNamespace::__LeaderboardIdsModelSO__LeaderboardIdData);
// Type: ::LeaderboardIdData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4206))
// CS Name: ::LeaderboardIdsModelSO::LeaderboardIdData*
class CORDL_TYPE __LeaderboardIdsModelSO__LeaderboardIdData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _difficultyBeatmapId offset 0x10
 __declspec(property(get=__get__difficultyBeatmapId, put=__set__difficultyBeatmapId)) ::StringW  _difficultyBeatmapId;

/// @brief Field _platformLeaderboardId offset 0x18
 __declspec(property(get=__get__platformLeaderboardId, put=__set__platformLeaderboardId)) ::StringW  _platformLeaderboardId;

 __declspec(property(get=get_platformLeaderboardId)) ::StringW  platformLeaderboardId;

 __declspec(property(get=get_difficultyBeatmapId)) ::StringW  difficultyBeatmapId;

constexpr void __set__difficultyBeatmapId(::StringW  value) ;

constexpr ::StringW& __get__difficultyBeatmapId() ;

constexpr ::StringW const& __get__difficultyBeatmapId() const;

constexpr void __set__platformLeaderboardId(::StringW  value) ;

constexpr ::StringW& __get__platformLeaderboardId() ;

constexpr ::StringW const& __get__platformLeaderboardId() const;

/// @brief Method get_platformLeaderboardId addr 0x232787c size 0x8 virtual false final false
inline ::StringW get_platformLeaderboardId() ;

/// @brief Method get_difficultyBeatmapId addr 0x2327884 size 0x8 virtual false final false
inline ::StringW get_difficultyBeatmapId() ;

static inline ::GlobalNamespace::__LeaderboardIdsModelSO__LeaderboardIdData* New_ctor(::StringW  difficultyBeatmapId, ::StringW  platformLeaderboardId) ;

/// @brief Method .ctor addr 0x232788c size 0x2c virtual false final false
inline void _ctor(::StringW  difficultyBeatmapId, ::StringW  platformLeaderboardId) ;

// Ctor Parameters [CppParam { name: "", ty: "__LeaderboardIdsModelSO__LeaderboardIdData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__LeaderboardIdsModelSO__LeaderboardIdData(__LeaderboardIdsModelSO__LeaderboardIdData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__LeaderboardIdsModelSO__LeaderboardIdData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__LeaderboardIdsModelSO__LeaderboardIdData(__LeaderboardIdsModelSO__LeaderboardIdData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __LeaderboardIdsModelSO__LeaderboardIdData()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LeaderboardIdsModelSO__LeaderboardIdData, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::LeaderboardIdsModelSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4207))
// CS Name: ::LeaderboardIdsModelSO*
class CORDL_TYPE LeaderboardIdsModelSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
using LeaderboardIdData = ::GlobalNamespace::__LeaderboardIdsModelSO__LeaderboardIdData;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::GlobalNamespace::PersistentScriptableObject)]{};

/// @brief Field _leaderboardIds offset 0x18
 __declspec(property(get=__get__leaderboardIds, put=__set__leaderboardIds)) ::System::Collections::Generic::List_1<::GlobalNamespace::__LeaderboardIdsModelSO__LeaderboardIdData*>*  _leaderboardIds;

/// @brief Field _leaderboardIdMap offset 0x20
 __declspec(property(get=__get__leaderboardIdMap, put=__set__leaderboardIdMap)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  _leaderboardIdMap;

constexpr void __set__leaderboardIds(::System::Collections::Generic::List_1<::GlobalNamespace::__LeaderboardIdsModelSO__LeaderboardIdData*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__LeaderboardIdsModelSO__LeaderboardIdData*>* __get__leaderboardIds() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__LeaderboardIdsModelSO__LeaderboardIdData*>*> __get__leaderboardIds() const;

constexpr void __set__leaderboardIdMap(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* __get__leaderboardIdMap() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*> __get__leaderboardIdMap() const;

/// @brief Method RebuildMap addr 0x2327564 size 0x1a0 virtual false final false
inline void RebuildMap() ;

/// @brief Method OnEnable addr 0x2327704 size 0x1c virtual true final false
inline void OnEnable() ;

/// @brief Method TryGetPlatformLeaderboardId addr 0x2327720 size 0x9c virtual false final false
inline bool TryGetPlatformLeaderboardId(::GlobalNamespace::IDifficultyBeatmap*  difficultyBeatmap, ByRef<::StringW>  platformLeaderboardId) ;

static inline ::GlobalNamespace::LeaderboardIdsModelSO* New_ctor() ;

/// @brief Method .ctor addr 0x23277bc size 0xc0 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "LeaderboardIdsModelSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LeaderboardIdsModelSO(LeaderboardIdsModelSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LeaderboardIdsModelSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LeaderboardIdsModelSO(LeaderboardIdsModelSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LeaderboardIdsModelSO()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LeaderboardIdsModelSO, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LeaderboardIdsModelSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LeaderboardIdsModelSO*, "", "LeaderboardIdsModelSO");
NEED_NO_BOX(::GlobalNamespace::__LeaderboardIdsModelSO__LeaderboardIdData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LeaderboardIdsModelSO__LeaderboardIdData*, "", "LeaderboardIdsModelSO/LeaderboardIdData");
