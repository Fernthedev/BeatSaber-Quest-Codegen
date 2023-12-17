#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapObjectSpawnCenter)
namespace GlobalNamespace {
class __BeatmapObjectSpawnCenter__PlayerCountToDistance;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapObjectSpawnCenter;
}
namespace GlobalNamespace {
class __BeatmapObjectSpawnCenter__PlayerCountToDistance;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapObjectSpawnCenter);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapObjectSpawnCenter__PlayerCountToDistance);
// Type: ::PlayerCountToDistance
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4717))
// CS Name: ::BeatmapObjectSpawnCenter::PlayerCountToDistance*
class CORDL_TYPE __BeatmapObjectSpawnCenter__PlayerCountToDistance : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field _playerCount offset 0x10
 __declspec(property(get=__get__playerCount, put=__set__playerCount)) int32_t  _playerCount;

/// @brief Field _distance offset 0x14
 __declspec(property(get=__get__distance, put=__set__distance)) float_t  _distance;

 __declspec(property(get=get_playerCount)) int32_t  playerCount;

 __declspec(property(get=get_distance)) float_t  distance;

constexpr void __set__playerCount(int32_t  value) ;

constexpr int32_t& __get__playerCount() ;

constexpr int32_t const& __get__playerCount() const;

constexpr void __set__distance(float_t  value) ;

constexpr float_t& __get__distance() ;

constexpr float_t const& __get__distance() const;

/// @brief Method get_playerCount addr 0x237f8e4 size 0x8 virtual false final false
inline int32_t get_playerCount() ;

/// @brief Method get_distance addr 0x237f8ec size 0x8 virtual false final false
inline float_t get_distance() ;

static inline ::GlobalNamespace::__BeatmapObjectSpawnCenter__PlayerCountToDistance* New_ctor() ;

/// @brief Method .ctor addr 0x237f8f4 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__BeatmapObjectSpawnCenter__PlayerCountToDistance", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__BeatmapObjectSpawnCenter__PlayerCountToDistance(__BeatmapObjectSpawnCenter__PlayerCountToDistance && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__BeatmapObjectSpawnCenter__PlayerCountToDistance", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__BeatmapObjectSpawnCenter__PlayerCountToDistance(__BeatmapObjectSpawnCenter__PlayerCountToDistance const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __BeatmapObjectSpawnCenter__PlayerCountToDistance()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapObjectSpawnCenter__PlayerCountToDistance, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::BeatmapObjectSpawnCenter
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4718))
// CS Name: ::BeatmapObjectSpawnCenter*
class CORDL_TYPE BeatmapObjectSpawnCenter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using PlayerCountToDistance = ::GlobalNamespace::__BeatmapObjectSpawnCenter__PlayerCountToDistance;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _distances offset 0x18
 __declspec(property(get=__get__distances, put=__set__distances)) ::ArrayW<::GlobalNamespace::__BeatmapObjectSpawnCenter__PlayerCountToDistance*,::Array<::GlobalNamespace::__BeatmapObjectSpawnCenter__PlayerCountToDistance*>*>  _distances;

/// @brief Field _defaultDistnace offset 0x20
 __declspec(property(get=__get__defaultDistnace, put=__set__defaultDistnace)) float_t  _defaultDistnace;

/// @brief Field spawnCenterDistanceWasFoundEvent offset 0x28
 __declspec(property(get=__get_spawnCenterDistanceWasFoundEvent, put=__set_spawnCenterDistanceWasFoundEvent)) ::System::Action_1<float_t>*  spawnCenterDistanceWasFoundEvent;

/// @brief Field _spawnCenterDistanceWasFound offset 0x30
 __declspec(property(get=__get__spawnCenterDistanceWasFound, put=__set__spawnCenterDistanceWasFound)) bool  _spawnCenterDistanceWasFound;

/// @brief Field _spawnCenterDistance offset 0x34
 __declspec(property(get=__get__spawnCenterDistance, put=__set__spawnCenterDistance)) float_t  _spawnCenterDistance;

 __declspec(property(get=get_spawnCenterDistance)) float_t  spawnCenterDistance;

 __declspec(property(get=get_spawnCenterDistanceWasFound)) bool  spawnCenterDistanceWasFound;

constexpr void __set__distances(::ArrayW<::GlobalNamespace::__BeatmapObjectSpawnCenter__PlayerCountToDistance*,::Array<::GlobalNamespace::__BeatmapObjectSpawnCenter__PlayerCountToDistance*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__BeatmapObjectSpawnCenter__PlayerCountToDistance*,::Array<::GlobalNamespace::__BeatmapObjectSpawnCenter__PlayerCountToDistance*>*>& __get__distances() ;

constexpr ::ArrayW<::GlobalNamespace::__BeatmapObjectSpawnCenter__PlayerCountToDistance*,::Array<::GlobalNamespace::__BeatmapObjectSpawnCenter__PlayerCountToDistance*>*> const& __get__distances() const;

constexpr void __set__defaultDistnace(float_t  value) ;

constexpr float_t& __get__defaultDistnace() ;

constexpr float_t const& __get__defaultDistnace() const;

constexpr void __set_spawnCenterDistanceWasFoundEvent(::System::Action_1<float_t>*  value) ;

constexpr ::System::Action_1<float_t>* __get_spawnCenterDistanceWasFoundEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<float_t>*> __get_spawnCenterDistanceWasFoundEvent() const;

constexpr void __set__spawnCenterDistanceWasFound(bool  value) ;

constexpr bool& __get__spawnCenterDistanceWasFound() ;

constexpr bool const& __get__spawnCenterDistanceWasFound() const;

constexpr void __set__spawnCenterDistance(float_t  value) ;

constexpr float_t& __get__spawnCenterDistance() ;

constexpr float_t const& __get__spawnCenterDistance() const;

/// @brief Method get_spawnCenterDistance addr 0x237f694 size 0x8 virtual false final false
inline float_t get_spawnCenterDistance() ;

/// @brief Method get_spawnCenterDistanceWasFound addr 0x237f69c size 0x8 virtual false final false
inline bool get_spawnCenterDistanceWasFound() ;

/// @brief Method add_spawnCenterDistanceWasFoundEvent addr 0x237671c size 0xb0 virtual false final false
inline void add_spawnCenterDistanceWasFoundEvent(::System::Action_1<float_t>*  value) ;

/// @brief Method remove_spawnCenterDistanceWasFoundEvent addr 0x237f6a4 size 0xb0 virtual false final false
inline void remove_spawnCenterDistanceWasFoundEvent(::System::Action_1<float_t>*  value) ;

/// @brief Method CalculateSpawnCenterPosition addr 0x237f754 size 0x158 virtual false final false
inline float_t CalculateSpawnCenterPosition(int32_t  numberOfPlayers) ;

/// @brief Method ReportAndSaveSpawnCenterDistance addr 0x237f8ac size 0x28 virtual false final false
inline void ReportAndSaveSpawnCenterDistance(float_t  distance) ;

static inline ::GlobalNamespace::BeatmapObjectSpawnCenter* New_ctor() ;

/// @brief Method .ctor addr 0x237f8d4 size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectSpawnCenter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BeatmapObjectSpawnCenter(BeatmapObjectSpawnCenter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectSpawnCenter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeatmapObjectSpawnCenter(BeatmapObjectSpawnCenter const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BeatmapObjectSpawnCenter()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapObjectSpawnCenter, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapObjectSpawnCenter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapObjectSpawnCenter*, "", "BeatmapObjectSpawnCenter");
NEED_NO_BOX(::GlobalNamespace::__BeatmapObjectSpawnCenter__PlayerCountToDistance);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapObjectSpawnCenter__PlayerCountToDistance*, "", "BeatmapObjectSpawnCenter/PlayerCountToDistance");
