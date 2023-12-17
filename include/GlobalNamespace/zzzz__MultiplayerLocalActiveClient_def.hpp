#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerLocalActiveClient)
namespace GlobalNamespace {
class NoteController;
}
namespace GlobalNamespace {
class IGameplayRpcManager;
}
namespace GlobalNamespace {
class SliderData;
}
namespace GlobalNamespace {
class ComboController;
}
namespace GlobalNamespace {
class NoteData;
}
namespace GlobalNamespace {
struct NoteCutInfo;
}
namespace GlobalNamespace {
class INodePoseSyncStateManager;
}
namespace GlobalNamespace {
class IScoreSyncStateManager;
}
namespace GlobalNamespace {
class PlayerTransforms;
}
namespace GlobalNamespace {
struct __BeatmapObjectSpawnMovementData__ObstacleSpawnData;
}
namespace GlobalNamespace {
class AudioTimeSyncController;
}
namespace GlobalNamespace {
struct __BeatmapObjectSpawnMovementData__NoteSpawnData;
}
namespace GlobalNamespace {
class IScoreController;
}
namespace GlobalNamespace {
class ObstacleData;
}
namespace GlobalNamespace {
struct __BeatmapObjectSpawnMovementData__SliderSpawnData;
}
namespace GlobalNamespace {
class BeatmapObjectManager;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLocalActiveClient;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLocalActiveClient);
// Type: ::MultiplayerLocalActiveClient
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5147))
// CS Name: ::MultiplayerLocalActiveClient*
class CORDL_TYPE MultiplayerLocalActiveClient : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _playerTransforms offset 0x18
 __declspec(property(get=__get__playerTransforms, put=__set__playerTransforms)) ::GlobalNamespace::PlayerTransforms*  _playerTransforms;

/// @brief Field _audioTimeSyncController offset 0x20
 __declspec(property(get=__get__audioTimeSyncController, put=__set__audioTimeSyncController)) ::GlobalNamespace::AudioTimeSyncController*  _audioTimeSyncController;

/// @brief Field _scoreSyncStateManager offset 0x28
 __declspec(property(get=__get__scoreSyncStateManager, put=__set__scoreSyncStateManager)) ::GlobalNamespace::IScoreSyncStateManager*  _scoreSyncStateManager;

/// @brief Field _nodePoseSyncStateManager offset 0x30
 __declspec(property(get=__get__nodePoseSyncStateManager, put=__set__nodePoseSyncStateManager)) ::GlobalNamespace::INodePoseSyncStateManager*  _nodePoseSyncStateManager;

/// @brief Field _rpcManager offset 0x38
 __declspec(property(get=__get__rpcManager, put=__set__rpcManager)) ::GlobalNamespace::IGameplayRpcManager*  _rpcManager;

/// @brief Field _beatmapObjectManager offset 0x40
 __declspec(property(get=__get__beatmapObjectManager, put=__set__beatmapObjectManager)) ::GlobalNamespace::BeatmapObjectManager*  _beatmapObjectManager;

/// @brief Field _scoreController offset 0x48
 __declspec(property(get=__get__scoreController, put=__set__scoreController)) ::GlobalNamespace::IScoreController*  _scoreController;

/// @brief Field _comboController offset 0x50
 __declspec(property(get=__get__comboController, put=__set__comboController)) ::GlobalNamespace::ComboController*  _comboController;

constexpr void __set__playerTransforms(::GlobalNamespace::PlayerTransforms*  value) ;

constexpr ::GlobalNamespace::PlayerTransforms* __get__playerTransforms() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerTransforms*> __get__playerTransforms() const;

constexpr void __set__audioTimeSyncController(::GlobalNamespace::AudioTimeSyncController*  value) ;

constexpr ::GlobalNamespace::AudioTimeSyncController* __get__audioTimeSyncController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioTimeSyncController*> __get__audioTimeSyncController() const;

constexpr void __set__scoreSyncStateManager(::GlobalNamespace::IScoreSyncStateManager*  value) ;

constexpr ::GlobalNamespace::IScoreSyncStateManager* __get__scoreSyncStateManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IScoreSyncStateManager*> __get__scoreSyncStateManager() const;

constexpr void __set__nodePoseSyncStateManager(::GlobalNamespace::INodePoseSyncStateManager*  value) ;

constexpr ::GlobalNamespace::INodePoseSyncStateManager* __get__nodePoseSyncStateManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::INodePoseSyncStateManager*> __get__nodePoseSyncStateManager() const;

constexpr void __set__rpcManager(::GlobalNamespace::IGameplayRpcManager*  value) ;

constexpr ::GlobalNamespace::IGameplayRpcManager* __get__rpcManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IGameplayRpcManager*> __get__rpcManager() const;

constexpr void __set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager*  value) ;

constexpr ::GlobalNamespace::BeatmapObjectManager* __get__beatmapObjectManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> __get__beatmapObjectManager() const;

constexpr void __set__scoreController(::GlobalNamespace::IScoreController*  value) ;

constexpr ::GlobalNamespace::IScoreController* __get__scoreController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IScoreController*> __get__scoreController() const;

constexpr void __set__comboController(::GlobalNamespace::ComboController*  value) ;

constexpr ::GlobalNamespace::ComboController* __get__comboController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ComboController*> __get__comboController() const;

/// @brief Method Start addr 0x23d8948 size 0x6e0 virtual false final false
inline void Start() ;

/// @brief Method OnDestroy addr 0x23d9028 size 0x434 virtual false final false
inline void OnDestroy() ;

/// @brief Method LateUpdate addr 0x23d945c size 0x348 virtual false final false
inline void LateUpdate() ;

/// @brief Method HandleNoteWasAdded addr 0x23d97a4 size 0x160 virtual false final false
inline void HandleNoteWasAdded(::GlobalNamespace::NoteData*  noteData, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData  noteSpawnData, float_t  rotation) ;

/// @brief Method HandleObstacleWasAdded addr 0x23d9904 size 0x140 virtual false final false
inline void HandleObstacleWasAdded(::GlobalNamespace::ObstacleData*  obstacleData, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData  obstacleSpawnData, float_t  rotation) ;

/// @brief Method HandleSliderWasAdded addr 0x23d9a44 size 0x1d4 virtual false final false
inline void HandleSliderWasAdded(::GlobalNamespace::SliderData*  sliderData, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData  sliderSpawnData, float_t  rotation) ;

/// @brief Method HandleNoteWasMissed addr 0x23d9c18 size 0xfc virtual false final false
inline void HandleNoteWasMissed(::GlobalNamespace::NoteController*  noteController) ;

/// @brief Method HandleNoteWasCut addr 0x23d9d14 size 0x1c4 virtual false final false
inline void HandleNoteWasCut(::GlobalNamespace::NoteController*  noteController, ByRef<::GlobalNamespace::NoteCutInfo>  noteCutInfo) ;

/// @brief Method HandleComboDidChange addr 0x23d9ed8 size 0xcc virtual false final false
inline void HandleComboDidChange(int32_t  combo) ;

/// @brief Method HandleMultiplierDidChange addr 0x23d9fa4 size 0xcc virtual false final false
inline void HandleMultiplierDidChange(int32_t  multiplier, float_t  multiplierProgress) ;

/// @brief Method HandleScoreDidChange addr 0x23da070 size 0x254 virtual false final false
inline void HandleScoreDidChange(int32_t  multipliedScore, int32_t  modifiedScore) ;

static inline ::GlobalNamespace::MultiplayerLocalActiveClient* New_ctor() ;

/// @brief Method .ctor addr 0x23da2c4 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalActiveClient", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplayerLocalActiveClient(MultiplayerLocalActiveClient && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalActiveClient", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplayerLocalActiveClient(MultiplayerLocalActiveClient const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MultiplayerLocalActiveClient()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLocalActiveClient, 0x58>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLocalActiveClient);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLocalActiveClient*, "", "MultiplayerLocalActiveClient");
