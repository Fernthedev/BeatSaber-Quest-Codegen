#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayerStartState_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "Zenject/zzzz__PlaceholderFactory_3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerConnectedPlayerFacade)
namespace BeatSaber::AvatarCore {
class Avatar;
}
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
class MultiplayerBigAvatarAnimator;
}
namespace GlobalNamespace {
class MultiplayerConnectedPlayerIntroAnimator;
}
namespace GlobalNamespace {
class __MultiplayerConnectedPlayerFacade__Factory;
}
namespace GlobalNamespace {
class MultiplayerConnectedPlayerSongTimeSyncController;
}
namespace GlobalNamespace {
class IConnectedPlayerBeatmapObjectEventManager;
}
namespace GlobalNamespace {
struct EaseType;
}
namespace GlobalNamespace {
class MultiplayerScoreDiffText;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerConnectedPlayerFacade;
}
namespace GlobalNamespace {
class __MultiplayerConnectedPlayerFacade__Factory;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerConnectedPlayerFacade);
MARK_REF_PTR_T(::GlobalNamespace::__MultiplayerConnectedPlayerFacade__Factory);
// Type: ::MultiplayerConnectedPlayerFacade
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5122))
// CS Name: ::MultiplayerConnectedPlayerFacade*
class CORDL_TYPE MultiplayerConnectedPlayerFacade : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Factory = ::GlobalNamespace::__MultiplayerConnectedPlayerFacade__Factory;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _outroAnimator offset 0x18
 __declspec(property(get=__get__outroAnimator, put=__set__outroAnimator)) ::UnityEngine::GameObject*  _outroAnimator;

/// @brief Field _bigAvatarAnimator offset 0x20
 __declspec(property(get=__get__bigAvatarAnimator, put=__set__bigAvatarAnimator)) ::GlobalNamespace::MultiplayerBigAvatarAnimator*  _bigAvatarAnimator;

/// @brief Field _bigAvatarDisappearDuration offset 0x28
 __declspec(property(get=__get__bigAvatarDisappearDuration, put=__set__bigAvatarDisappearDuration)) float_t  _bigAvatarDisappearDuration;

/// @brief Field _bigAvatarDisappearEasing offset 0x2c
 __declspec(property(get=__get__bigAvatarDisappearEasing, put=__set__bigAvatarDisappearEasing)) ::GlobalNamespace::EaseType  _bigAvatarDisappearEasing;

/// @brief Field _songTimeSyncController offset 0x30
 __declspec(property(get=__get__songTimeSyncController, put=__set__songTimeSyncController)) ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*  _songTimeSyncController;

/// @brief Field _introAnimator offset 0x38
 __declspec(property(get=__get__introAnimator, put=__set__introAnimator)) ::GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator*  _introAnimator;

/// @brief Field _beatmapObjectManager offset 0x40
 __declspec(property(get=__get__beatmapObjectManager, put=__set__beatmapObjectManager)) ::GlobalNamespace::BeatmapObjectManager*  _beatmapObjectManager;

/// @brief Field _scoreDiffText offset 0x48
 __declspec(property(get=__get__scoreDiffText, put=__set__scoreDiffText)) ::GlobalNamespace::MultiplayerScoreDiffText*  _scoreDiffText;

/// @brief Field _beatmapObjectEventManager offset 0x50
 __declspec(property(get=__get__beatmapObjectEventManager, put=__set__beatmapObjectEventManager)) ::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager*  _beatmapObjectEventManager;

 __declspec(property(get=get_introAnimator)) ::GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator*  introAnimator;

 __declspec(property(get=get_outroAnimator)) ::UnityEngine::GameObject*  outroAnimator;

 __declspec(property(get=get_scoreDiffText)) ::GlobalNamespace::MultiplayerScoreDiffText*  scoreDiffText;

constexpr void __set__outroAnimator(::UnityEngine::GameObject*  value) ;

constexpr ::UnityEngine::GameObject* __get__outroAnimator() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> __get__outroAnimator() const;

constexpr void __set__bigAvatarAnimator(::GlobalNamespace::MultiplayerBigAvatarAnimator*  value) ;

constexpr ::GlobalNamespace::MultiplayerBigAvatarAnimator* __get__bigAvatarAnimator() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerBigAvatarAnimator*> __get__bigAvatarAnimator() const;

constexpr void __set__bigAvatarDisappearDuration(float_t  value) ;

constexpr float_t& __get__bigAvatarDisappearDuration() ;

constexpr float_t const& __get__bigAvatarDisappearDuration() const;

constexpr void __set__bigAvatarDisappearEasing(::GlobalNamespace::EaseType  value) ;

constexpr ::GlobalNamespace::EaseType& __get__bigAvatarDisappearEasing() ;

constexpr ::GlobalNamespace::EaseType const& __get__bigAvatarDisappearEasing() const;

constexpr void __set__songTimeSyncController(::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*  value) ;

constexpr ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController* __get__songTimeSyncController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*> __get__songTimeSyncController() const;

constexpr void __set__introAnimator(::GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator*  value) ;

constexpr ::GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator* __get__introAnimator() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator*> __get__introAnimator() const;

constexpr void __set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager*  value) ;

constexpr ::GlobalNamespace::BeatmapObjectManager* __get__beatmapObjectManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> __get__beatmapObjectManager() const;

constexpr void __set__scoreDiffText(::GlobalNamespace::MultiplayerScoreDiffText*  value) ;

constexpr ::GlobalNamespace::MultiplayerScoreDiffText* __get__scoreDiffText() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerScoreDiffText*> __get__scoreDiffText() const;

constexpr void __set__beatmapObjectEventManager(::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager*  value) ;

constexpr ::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager* __get__beatmapObjectEventManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager*> __get__beatmapObjectEventManager() const;

/// @brief Method get_introAnimator addr 0x23d4b40 size 0x8 virtual false final false
inline ::GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator* get_introAnimator() ;

/// @brief Method get_outroAnimator addr 0x23d4b48 size 0x8 virtual false final false
inline ::UnityEngine::GameObject* get_outroAnimator() ;

/// @brief Method get_scoreDiffText addr 0x23d4b50 size 0x8 virtual false final false
inline ::GlobalNamespace::MultiplayerScoreDiffText* get_scoreDiffText() ;

/// @brief Method SetSongStartSyncTime addr 0x23d4b58 size 0x18 virtual false final false
inline void SetSongStartSyncTime(int64_t  songStartSyncTime) ;

/// @brief Method PauseSpawning addr 0x23d4cc4 size 0xa4 virtual false final false
inline void PauseSpawning() ;

/// @brief Method ResumeSpawning addr 0x23d4d68 size 0xa4 virtual false final false
inline void ResumeSpawning() ;

/// @brief Method __ForceStopSong addr 0x23d4e0c size 0x34 virtual false final false
inline void __ForceStopSong() ;

/// @brief Method HideBigAvatar addr 0x23d4e4c size 0x90 virtual false final false
inline void HideBigAvatar() ;

/// @brief Method __GetPlayerAvatar addr 0x23d4edc size 0x4c virtual false final false
inline ::BeatSaber::AvatarCore::Avatar* __GetPlayerAvatar() ;

static inline ::GlobalNamespace::MultiplayerConnectedPlayerFacade* New_ctor() ;

/// @brief Method .ctor addr 0x23d4f28 size 0x14 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerFacade", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplayerConnectedPlayerFacade(MultiplayerConnectedPlayerFacade && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerFacade", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplayerConnectedPlayerFacade(MultiplayerConnectedPlayerFacade const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MultiplayerConnectedPlayerFacade()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerConnectedPlayerFacade, 0x58>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::Factory
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5239)), TypeDefinitionIndex(TypeDefinitionIndex(11008)), TypeDefinitionIndex(TypeDefinitionIndex(12778)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11008), inst: 3503 }), TypeDefinitionIndex(TypeDefinitionIndex(5122))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5121))
// CS Name: ::MultiplayerConnectedPlayerFacade::Factory*
class CORDL_TYPE __MultiplayerConnectedPlayerFacade__Factory : public ::Zenject::PlaceholderFactory_3<::GlobalNamespace::IConnectedPlayer*,::GlobalNamespace::MultiplayerPlayerStartState,::GlobalNamespace::MultiplayerConnectedPlayerFacade*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::Zenject::PlaceholderFactory_3<::GlobalNamespace::IConnectedPlayer*,::GlobalNamespace::MultiplayerPlayerStartState,::GlobalNamespace::MultiplayerConnectedPlayerFacade*>)]{};

static inline ::GlobalNamespace::__MultiplayerConnectedPlayerFacade__Factory* New_ctor() ;

/// @brief Method .ctor addr 0x23d4f3c size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__MultiplayerConnectedPlayerFacade__Factory", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__MultiplayerConnectedPlayerFacade__Factory(__MultiplayerConnectedPlayerFacade__Factory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__MultiplayerConnectedPlayerFacade__Factory", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__MultiplayerConnectedPlayerFacade__Factory(__MultiplayerConnectedPlayerFacade__Factory const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __MultiplayerConnectedPlayerFacade__Factory()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerConnectedPlayerFacade__Factory, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerConnectedPlayerFacade);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConnectedPlayerFacade*, "", "MultiplayerConnectedPlayerFacade");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerConnectedPlayerFacade__Factory);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerConnectedPlayerFacade__Factory*, "", "MultiplayerConnectedPlayerFacade/Factory");
