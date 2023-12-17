#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MockPlayerGamePoseGenerator_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MockPlayerGamePoseGeneratorMirror)
namespace GlobalNamespace {
class MultiplayerLevelCompletionResults;
}
namespace GlobalNamespace {
class NoteSpawnInfoNetSerializable;
}
namespace GlobalNamespace {
class ObstacleSpawnInfoNetSerializable;
}
namespace GlobalNamespace {
class NoteCutInfoNetSerializable;
}
namespace GlobalNamespace {
class IGameplayRpcManager;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class NoteMissInfoNetSerializable;
}
namespace GlobalNamespace {
class StandardScoreSyncStateNetSerializable;
}
namespace BeatSaber::AvatarCore {
class OptionalAvatarDataPacket;
}
namespace GlobalNamespace {
class MockBeatmapData;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class NodePoseSyncStateManager;
}
namespace GlobalNamespace {
class SliderSpawnInfoNetSerializable;
}
// Forward declare root types
namespace GlobalNamespace {
class MockPlayerGamePoseGeneratorMirror;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MockPlayerGamePoseGeneratorMirror);
// Type: ::MockPlayerGamePoseGeneratorMirror
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15515))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5181))
// CS Name: ::MockPlayerGamePoseGeneratorMirror*
class CORDL_TYPE MockPlayerGamePoseGeneratorMirror : public ::GlobalNamespace::MockPlayerGamePoseGenerator {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::GlobalNamespace::MockPlayerGamePoseGenerator)]{};

/// @brief Field _nodePoseSyncStateManager offset 0x38
 __declspec(property(get=__get__nodePoseSyncStateManager, put=__set__nodePoseSyncStateManager)) ::GlobalNamespace::NodePoseSyncStateManager*  _nodePoseSyncStateManager;

/// @brief Field _mirroredPlayer offset 0x40
 __declspec(property(get=__get__mirroredPlayer, put=__set__mirroredPlayer)) ::GlobalNamespace::IConnectedPlayer*  _mirroredPlayer;

/// @brief Field _onSongFinished offset 0x48
 __declspec(property(get=__get__onSongFinished, put=__set__onSongFinished)) ::System::Action*  _onSongFinished;

constexpr void __set__nodePoseSyncStateManager(::GlobalNamespace::NodePoseSyncStateManager*  value) ;

constexpr ::GlobalNamespace::NodePoseSyncStateManager* __get__nodePoseSyncStateManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NodePoseSyncStateManager*> __get__nodePoseSyncStateManager() const;

constexpr void __set__mirroredPlayer(::GlobalNamespace::IConnectedPlayer*  value) ;

constexpr ::GlobalNamespace::IConnectedPlayer* __get__mirroredPlayer() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> __get__mirroredPlayer() const;

constexpr void __set__onSongFinished(::System::Action*  value) ;

constexpr ::System::Action* __get__onSongFinished() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get__onSongFinished() const;

static inline ::GlobalNamespace::MockPlayerGamePoseGeneratorMirror* New_ctor(::GlobalNamespace::IMultiplayerSessionManager*  multiplayerSessionManager, ::GlobalNamespace::IGameplayRpcManager*  gameplayRpcManager, bool  leftHanded, ::GlobalNamespace::NodePoseSyncStateManager*  nodePoseSyncStateManager) ;

/// @brief Method .ctor addr 0x2241c34 size 0x6c8 virtual false final false
inline void _ctor(::GlobalNamespace::IMultiplayerSessionManager*  multiplayerSessionManager, ::GlobalNamespace::IGameplayRpcManager*  gameplayRpcManager, bool  leftHanded, ::GlobalNamespace::NodePoseSyncStateManager*  nodePoseSyncStateManager) ;

/// @brief Method Dispose addr 0x22422fc size 0x4f0 virtual true final false
inline void Dispose() ;

/// @brief Method Init addr 0x22427ec size 0x8 virtual true final false
inline void Init(int64_t  introStartTime, ::GlobalNamespace::MockBeatmapData*  beatmapData, ::GlobalNamespace::GameplayModifiers*  gameplayModifiers, ::System::Action*  onSongFinished) ;

/// @brief Method Tick addr 0x22427f4 size 0x168 virtual true final false
inline void Tick() ;

/// @brief Method FindPlayerToMirror addr 0x224295c size 0x3a4 virtual false final false
inline void FindPlayerToMirror() ;

/// @brief Method HandleNoteWasSpawned addr 0x2242d00 size 0x184 virtual false final false
inline void HandleNoteWasSpawned(::StringW  userId, int64_t  syncTime, float_t  songTime, ::GlobalNamespace::NoteSpawnInfoNetSerializable*  noteSpawnInfoNetSerializable) ;

/// @brief Method HandleObstacleWasSpawned addr 0x2242e84 size 0x184 virtual false final false
inline void HandleObstacleWasSpawned(::StringW  userId, int64_t  syncTime, float_t  songTime, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable*  obstacleSpawnInfoNetSerializable) ;

/// @brief Method HandleSliderWasSpawned addr 0x2243008 size 0x184 virtual false final false
inline void HandleSliderWasSpawned(::StringW  userId, int64_t  syncTime, float_t  songTime, ::GlobalNamespace::SliderSpawnInfoNetSerializable*  sliderSpawnInfoNetSerializable) ;

/// @brief Method HandleNoteWasMissed addr 0x224318c size 0x184 virtual false final false
inline void HandleNoteWasMissed(::StringW  userId, int64_t  syncTime, float_t  songTime, ::GlobalNamespace::NoteMissInfoNetSerializable*  noteMissInfo) ;

/// @brief Method HandleNoteWasCut addr 0x2243310 size 0x184 virtual false final false
inline void HandleNoteWasCut(::StringW  userId, int64_t  syncTime, float_t  songTime, ::GlobalNamespace::NoteCutInfoNetSerializable*  noteCutInfo) ;

/// @brief Method HandleScoreSyncStateUpdate addr 0x2243494 size 0x1d8 virtual false final false
inline void HandleScoreSyncStateUpdate(::GlobalNamespace::StandardScoreSyncStateNetSerializable*  nodePose, ::GlobalNamespace::IConnectedPlayer*  player) ;

/// @brief Method HandleOptionalAvatarDataReceived addr 0x224366c size 0x1d8 virtual false final false
inline void HandleOptionalAvatarDataReceived(::BeatSaber::AvatarCore::OptionalAvatarDataPacket*  optionalAvatarDataPacket, ::GlobalNamespace::IConnectedPlayer*  player) ;

/// @brief Method HandleLevelFinished addr 0x2243844 size 0x174 virtual false final false
inline void HandleLevelFinished(::StringW  userId, ::GlobalNamespace::MultiplayerLevelCompletionResults*  results) ;

// Ctor Parameters [CppParam { name: "", ty: "MockPlayerGamePoseGeneratorMirror", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MockPlayerGamePoseGeneratorMirror(MockPlayerGamePoseGeneratorMirror && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MockPlayerGamePoseGeneratorMirror", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MockPlayerGamePoseGeneratorMirror(MockPlayerGamePoseGeneratorMirror const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MockPlayerGamePoseGeneratorMirror()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockPlayerGamePoseGeneratorMirror, 0x50>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MockPlayerGamePoseGeneratorMirror);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockPlayerGamePoseGeneratorMirror*, "", "MockPlayerGamePoseGeneratorMirror");
