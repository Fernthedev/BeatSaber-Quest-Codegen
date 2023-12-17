#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GamePause)
namespace GlobalNamespace {
class IScoreController;
}
namespace GlobalNamespace {
class PlayerHeadAndObstacleInteraction;
}
namespace GlobalNamespace {
class IGamePause;
}
namespace GlobalNamespace {
class BeatmapObjectExecutionRatingsRecorder;
}
namespace GlobalNamespace {
class AudioListenerController;
}
namespace GlobalNamespace {
class GameEnergyCounter;
}
namespace GlobalNamespace {
class SaberManager;
}
namespace GlobalNamespace {
class SongController;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class GamePause;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GamePause);
// Type: ::GamePause
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5049))
// CS Name: ::GamePause*
class CORDL_TYPE GamePause : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x68};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x68 - sizeof(::System::Object)]{};

/// @brief Field didPauseEvent offset 0x10
 __declspec(property(get=__get_didPauseEvent, put=__set_didPauseEvent)) ::System::Action*  didPauseEvent;

/// @brief Field willResumeEvent offset 0x18
 __declspec(property(get=__get_willResumeEvent, put=__set_willResumeEvent)) ::System::Action*  willResumeEvent;

/// @brief Field didResumeEvent offset 0x20
 __declspec(property(get=__get_didResumeEvent, put=__set_didResumeEvent)) ::System::Action*  didResumeEvent;

/// @brief Field _gameEnergyCounter offset 0x28
 __declspec(property(get=__get__gameEnergyCounter, put=__set__gameEnergyCounter)) ::GlobalNamespace::GameEnergyCounter*  _gameEnergyCounter;

/// @brief Field _playerHeadAndObstacleInteraction offset 0x30
 __declspec(property(get=__get__playerHeadAndObstacleInteraction, put=__set__playerHeadAndObstacleInteraction)) ::GlobalNamespace::PlayerHeadAndObstacleInteraction*  _playerHeadAndObstacleInteraction;

/// @brief Field _scoreController offset 0x38
 __declspec(property(get=__get__scoreController, put=__set__scoreController)) ::GlobalNamespace::IScoreController*  _scoreController;

/// @brief Field _beatmapObjectExecutionRatingsRecorder offset 0x40
 __declspec(property(get=__get__beatmapObjectExecutionRatingsRecorder, put=__set__beatmapObjectExecutionRatingsRecorder)) ::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder*  _beatmapObjectExecutionRatingsRecorder;

/// @brief Field _songController offset 0x48
 __declspec(property(get=__get__songController, put=__set__songController)) ::GlobalNamespace::SongController*  _songController;

/// @brief Field _saberManager offset 0x50
 __declspec(property(get=__get__saberManager, put=__set__saberManager)) ::GlobalNamespace::SaberManager*  _saberManager;

/// @brief Field _audioListenerController offset 0x58
 __declspec(property(get=__get__audioListenerController, put=__set__audioListenerController)) ::GlobalNamespace::AudioListenerController*  _audioListenerController;

/// @brief Field _pause offset 0x60
 __declspec(property(get=__get__pause, put=__set__pause)) bool  _pause;

 __declspec(property(get=get_isPaused)) bool  isPaused;

/// @brief Convert operator to "::GlobalNamespace::IGamePause"
constexpr operator  ::GlobalNamespace::IGamePause*() noexcept;

constexpr void __set_didPauseEvent(::System::Action*  value) ;

constexpr ::System::Action* __get_didPauseEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_didPauseEvent() const;

constexpr void __set_willResumeEvent(::System::Action*  value) ;

constexpr ::System::Action* __get_willResumeEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_willResumeEvent() const;

constexpr void __set_didResumeEvent(::System::Action*  value) ;

constexpr ::System::Action* __get_didResumeEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_didResumeEvent() const;

constexpr void __set__gameEnergyCounter(::GlobalNamespace::GameEnergyCounter*  value) ;

constexpr ::GlobalNamespace::GameEnergyCounter* __get__gameEnergyCounter() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameEnergyCounter*> __get__gameEnergyCounter() const;

constexpr void __set__playerHeadAndObstacleInteraction(::GlobalNamespace::PlayerHeadAndObstacleInteraction*  value) ;

constexpr ::GlobalNamespace::PlayerHeadAndObstacleInteraction* __get__playerHeadAndObstacleInteraction() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerHeadAndObstacleInteraction*> __get__playerHeadAndObstacleInteraction() const;

constexpr void __set__scoreController(::GlobalNamespace::IScoreController*  value) ;

constexpr ::GlobalNamespace::IScoreController* __get__scoreController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IScoreController*> __get__scoreController() const;

constexpr void __set__beatmapObjectExecutionRatingsRecorder(::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder*  value) ;

constexpr ::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder* __get__beatmapObjectExecutionRatingsRecorder() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder*> __get__beatmapObjectExecutionRatingsRecorder() const;

constexpr void __set__songController(::GlobalNamespace::SongController*  value) ;

constexpr ::GlobalNamespace::SongController* __get__songController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SongController*> __get__songController() const;

constexpr void __set__saberManager(::GlobalNamespace::SaberManager*  value) ;

constexpr ::GlobalNamespace::SaberManager* __get__saberManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SaberManager*> __get__saberManager() const;

constexpr void __set__audioListenerController(::GlobalNamespace::AudioListenerController*  value) ;

constexpr ::GlobalNamespace::AudioListenerController* __get__audioListenerController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioListenerController*> __get__audioListenerController() const;

constexpr void __set__pause(bool  value) ;

constexpr bool& __get__pause() ;

constexpr bool const& __get__pause() const;

/// @brief Method get_isPaused addr 0x23c376c size 0x8 virtual true final true
inline bool get_isPaused() ;

/// @brief Method add_didPauseEvent addr 0x23c3774 size 0x9c virtual true final true
inline void add_didPauseEvent(::System::Action*  value) ;

/// @brief Method remove_didPauseEvent addr 0x23c3810 size 0x9c virtual true final true
inline void remove_didPauseEvent(::System::Action*  value) ;

/// @brief Method add_willResumeEvent addr 0x23c38ac size 0x9c virtual true final true
inline void add_willResumeEvent(::System::Action*  value) ;

/// @brief Method remove_willResumeEvent addr 0x23c3948 size 0x9c virtual true final true
inline void remove_willResumeEvent(::System::Action*  value) ;

/// @brief Method add_didResumeEvent addr 0x23c39e4 size 0x9c virtual true final true
inline void add_didResumeEvent(::System::Action*  value) ;

/// @brief Method remove_didResumeEvent addr 0x23c3a80 size 0x9c virtual true final true
inline void remove_didResumeEvent(::System::Action*  value) ;

/// @brief Method Pause addr 0x23c3b1c size 0x150 virtual true final true
inline void Pause() ;

/// @brief Method WillResume addr 0x23c3c6c size 0x24 virtual true final true
inline void WillResume() ;

/// @brief Method Resume addr 0x23c3c90 size 0x14c virtual true final true
inline void Resume() ;

static inline ::GlobalNamespace::GamePause* New_ctor() ;

/// @brief Method .ctor addr 0x23c3ddc size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GamePause", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GamePause(GamePause && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GamePause", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GamePause(GamePause const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GamePause()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GamePause, 0x68>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GamePause);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GamePause*, "", "GamePause");
