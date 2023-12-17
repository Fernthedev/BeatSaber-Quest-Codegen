#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SongStartHandler)
namespace GlobalNamespace {
class IGameplayRpcManager;
}
namespace GlobalNamespace {
class PlayersSpecificSettingsAtGameStartModel;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
// Forward declare root types
namespace GlobalNamespace {
class SongStartHandler;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SongStartHandler);
// Type: ::SongStartHandler
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12960))
// CS Name: ::SongStartHandler*
class CORDL_TYPE SongStartHandler : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::System::Object)]{};

/// @brief Field kFixedStartDelayMs offset 0x0
static constexpr int64_t  kFixedStartDelayMs{static_cast<int64_t>(0xfa)};

/// @brief Field _multiplayerSessionManager offset 0x10
 __declspec(property(get=__get__multiplayerSessionManager, put=__set__multiplayerSessionManager)) ::GlobalNamespace::IMultiplayerSessionManager*  _multiplayerSessionManager;

/// @brief Field _gameplayRpcManager offset 0x18
 __declspec(property(get=__get__gameplayRpcManager, put=__set__gameplayRpcManager)) ::GlobalNamespace::IGameplayRpcManager*  _gameplayRpcManager;

/// @brief Field _playersAtGameStartModel offset 0x20
 __declspec(property(get=__get__playersAtGameStartModel, put=__set__playersAtGameStartModel)) ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*  _playersAtGameStartModel;

/// @brief Field _readyPlayers offset 0x28
 __declspec(property(get=__get__readyPlayers, put=__set__readyPlayers)) ::System::Collections::Generic::HashSet_1<::StringW>*  _readyPlayers;

/// @brief Field _started offset 0x30
 __declspec(property(get=__get__started, put=__set__started)) bool  _started;

/// @brief Field _startTime offset 0x38
 __declspec(property(get=__get__startTime, put=__set__startTime)) int64_t  _startTime;

/// @brief Field setSongStartSyncTimeEvent offset 0x40
 __declspec(property(get=__get_setSongStartSyncTimeEvent, put=__set_setSongStartSyncTimeEvent)) ::System::Action_1<int64_t>*  setSongStartSyncTimeEvent;

 __declspec(property(get=get_songStartSyncTime)) int64_t  songStartSyncTime;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager*  value) ;

constexpr ::GlobalNamespace::IMultiplayerSessionManager* __get__multiplayerSessionManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> __get__multiplayerSessionManager() const;

constexpr void __set__gameplayRpcManager(::GlobalNamespace::IGameplayRpcManager*  value) ;

constexpr ::GlobalNamespace::IGameplayRpcManager* __get__gameplayRpcManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IGameplayRpcManager*> __get__gameplayRpcManager() const;

constexpr void __set__playersAtGameStartModel(::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*  value) ;

constexpr ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* __get__playersAtGameStartModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*> __get__playersAtGameStartModel() const;

constexpr void __set__readyPlayers(::System::Collections::Generic::HashSet_1<::StringW>*  value) ;

constexpr ::System::Collections::Generic::HashSet_1<::StringW>* __get__readyPlayers() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> __get__readyPlayers() const;

constexpr void __set__started(bool  value) ;

constexpr bool& __get__started() ;

constexpr bool const& __get__started() const;

constexpr void __set__startTime(int64_t  value) ;

constexpr int64_t& __get__startTime() ;

constexpr int64_t const& __get__startTime() const;

constexpr void __set_setSongStartSyncTimeEvent(::System::Action_1<int64_t>*  value) ;

constexpr ::System::Action_1<int64_t>* __get_setSongStartSyncTimeEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<int64_t>*> __get_setSongStartSyncTimeEvent() const;

/// @brief Method get_songStartSyncTime addr 0xe57244 size 0x8 virtual false final false
inline int64_t get_songStartSyncTime() ;

/// @brief Method add_setSongStartSyncTimeEvent addr 0xe5724c size 0xb0 virtual false final false
inline void add_setSongStartSyncTimeEvent(::System::Action_1<int64_t>*  value) ;

/// @brief Method remove_setSongStartSyncTimeEvent addr 0xe572fc size 0xb0 virtual false final false
inline void remove_setSongStartSyncTimeEvent(::System::Action_1<int64_t>*  value) ;

static inline ::GlobalNamespace::SongStartHandler* New_ctor(::GlobalNamespace::IMultiplayerSessionManager*  multiplayerSessionManager, ::GlobalNamespace::IGameplayRpcManager*  gameplayRpcManager, ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*  playersAtGameStartModel) ;

/// @brief Method .ctor addr 0xe573ac size 0xa4 virtual false final false
inline void _ctor(::GlobalNamespace::IMultiplayerSessionManager*  multiplayerSessionManager, ::GlobalNamespace::IGameplayRpcManager*  gameplayRpcManager, ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*  playersAtGameStartModel) ;

/// @brief Method GetLevelStartTimeOffset addr 0xe57450 size 0x4ec virtual false final false
inline void GetLevelStartTimeOffset() ;

/// @brief Method Dispose addr 0xe5793c size 0x244 virtual true final true
inline void Dispose() ;

/// @brief Method ForceStart addr 0xe57b80 size 0x6b0 virtual false final false
inline void ForceStart(::StringW  sessionGameId) ;

/// @brief Method StartSong addr 0xe58230 size 0x298 virtual false final false
inline void StartSong() ;

/// @brief Method HandleSetGameplaySongReady addr 0xe584c8 size 0x2b0 virtual false final false
inline void HandleSetGameplaySongReady(::StringW  user) ;

/// @brief Method HandleGetGameplaySongReady addr 0xe58778 size 0xa4 virtual false final false
inline void HandleGetGameplaySongReady(::StringW  user) ;

/// @brief Method HandleSetSongStartTime addr 0xe5881c size 0x30 virtual false final false
inline void HandleSetSongStartTime(::StringW  user, int64_t  time) ;

/// @brief Method Log addr 0xe5884c size 0x58 virtual false final false
inline void Log(::StringW  message) ;

// Ctor Parameters [CppParam { name: "", ty: "SongStartHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SongStartHandler(SongStartHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SongStartHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SongStartHandler(SongStartHandler const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SongStartHandler()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SongStartHandler, 0x48>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SongStartHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongStartHandler*, "", "SongStartHandler");
