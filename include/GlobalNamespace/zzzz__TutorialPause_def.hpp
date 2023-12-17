#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TutorialPause)
namespace System {
class Action;
}
namespace GlobalNamespace {
class IGamePause;
}
namespace GlobalNamespace {
class AudioListenerController;
}
namespace GlobalNamespace {
class SaberManager;
}
namespace GlobalNamespace {
class TutorialSongController;
}
// Forward declare root types
namespace GlobalNamespace {
class TutorialPause;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TutorialPause);
// Type: ::TutorialPause
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5343))
// CS Name: ::TutorialPause*
class CORDL_TYPE TutorialPause : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::System::Object)]{};

/// @brief Field _tutorialSongController offset 0x10
 __declspec(property(get=__get__tutorialSongController, put=__set__tutorialSongController)) ::GlobalNamespace::TutorialSongController*  _tutorialSongController;

/// @brief Field _saberManager offset 0x18
 __declspec(property(get=__get__saberManager, put=__set__saberManager)) ::GlobalNamespace::SaberManager*  _saberManager;

/// @brief Field _audioListenerController offset 0x20
 __declspec(property(get=__get__audioListenerController, put=__set__audioListenerController)) ::GlobalNamespace::AudioListenerController*  _audioListenerController;

/// @brief Field didPauseEvent offset 0x28
 __declspec(property(get=__get_didPauseEvent, put=__set_didPauseEvent)) ::System::Action*  didPauseEvent;

/// @brief Field willResumeEvent offset 0x30
 __declspec(property(get=__get_willResumeEvent, put=__set_willResumeEvent)) ::System::Action*  willResumeEvent;

/// @brief Field didResumeEvent offset 0x38
 __declspec(property(get=__get_didResumeEvent, put=__set_didResumeEvent)) ::System::Action*  didResumeEvent;

/// @brief Field _pause offset 0x40
 __declspec(property(get=__get__pause, put=__set__pause)) bool  _pause;

 __declspec(property(get=get_isPaused)) bool  isPaused;

/// @brief Convert operator to "::GlobalNamespace::IGamePause"
constexpr operator  ::GlobalNamespace::IGamePause*() noexcept;

constexpr void __set__tutorialSongController(::GlobalNamespace::TutorialSongController*  value) ;

constexpr ::GlobalNamespace::TutorialSongController* __get__tutorialSongController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::TutorialSongController*> __get__tutorialSongController() const;

constexpr void __set__saberManager(::GlobalNamespace::SaberManager*  value) ;

constexpr ::GlobalNamespace::SaberManager* __get__saberManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SaberManager*> __get__saberManager() const;

constexpr void __set__audioListenerController(::GlobalNamespace::AudioListenerController*  value) ;

constexpr ::GlobalNamespace::AudioListenerController* __get__audioListenerController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioListenerController*> __get__audioListenerController() const;

constexpr void __set_didPauseEvent(::System::Action*  value) ;

constexpr ::System::Action* __get_didPauseEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_didPauseEvent() const;

constexpr void __set_willResumeEvent(::System::Action*  value) ;

constexpr ::System::Action* __get_willResumeEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_willResumeEvent() const;

constexpr void __set_didResumeEvent(::System::Action*  value) ;

constexpr ::System::Action* __get_didResumeEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_didResumeEvent() const;

constexpr void __set__pause(bool  value) ;

constexpr bool& __get__pause() ;

constexpr bool const& __get__pause() const;

/// @brief Method get_isPaused addr 0x226aa00 size 0x8 virtual true final true
inline bool get_isPaused() ;

/// @brief Method add_didPauseEvent addr 0x226aa08 size 0x9c virtual true final true
inline void add_didPauseEvent(::System::Action*  value) ;

/// @brief Method remove_didPauseEvent addr 0x226aaa4 size 0x9c virtual true final true
inline void remove_didPauseEvent(::System::Action*  value) ;

/// @brief Method add_willResumeEvent addr 0x226ab40 size 0x9c virtual true final true
inline void add_willResumeEvent(::System::Action*  value) ;

/// @brief Method remove_willResumeEvent addr 0x226abdc size 0x9c virtual true final true
inline void remove_willResumeEvent(::System::Action*  value) ;

/// @brief Method add_didResumeEvent addr 0x226ac78 size 0x9c virtual true final true
inline void add_didResumeEvent(::System::Action*  value) ;

/// @brief Method remove_didResumeEvent addr 0x226ad14 size 0x9c virtual true final true
inline void remove_didResumeEvent(::System::Action*  value) ;

/// @brief Method Pause addr 0x226adb0 size 0x78 virtual true final true
inline void Pause() ;

/// @brief Method WillResume addr 0x226ae28 size 0x1c virtual true final true
inline void WillResume() ;

/// @brief Method Resume addr 0x226ae44 size 0x74 virtual true final true
inline void Resume() ;

static inline ::GlobalNamespace::TutorialPause* New_ctor() ;

/// @brief Method .ctor addr 0x226aeb8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TutorialPause", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TutorialPause(TutorialPause && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TutorialPause", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TutorialPause(TutorialPause const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TutorialPause()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TutorialPause, 0x48>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TutorialPause);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TutorialPause*, "", "TutorialPause");
