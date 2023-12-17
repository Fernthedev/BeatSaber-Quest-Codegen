#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MissionLevelGameplayManager)
namespace GlobalNamespace {
class GameScenesManager;
}
namespace GlobalNamespace {
class GameSongController;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class GameEnergyCounter;
}
namespace GlobalNamespace {
class PauseController;
}
namespace GlobalNamespace {
struct __MissionLevelGameplayManager__GameState;
}
namespace GlobalNamespace {
class ILevelEndActions;
}
namespace System::Collections {
class IEnumerator;
}
namespace GlobalNamespace {
class ILevelStartController;
}
namespace GlobalNamespace {
class __MissionLevelGameplayManager__InitData;
}
namespace GlobalNamespace {
class __MissionLevelGameplayManager___Start_d__23;
}
namespace GlobalNamespace {
class MissionObjectiveCheckersManager;
}
namespace System {
class Action;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
struct __MissionLevelGameplayManager__GameState;
}
namespace GlobalNamespace {
class MissionLevelGameplayManager;
}
namespace GlobalNamespace {
class __MissionLevelGameplayManager__InitData;
}
namespace GlobalNamespace {
class __MissionLevelGameplayManager___Start_d__23;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__MissionLevelGameplayManager__GameState);
MARK_REF_PTR_T(::GlobalNamespace::MissionLevelGameplayManager);
MARK_REF_PTR_T(::GlobalNamespace::__MissionLevelGameplayManager__InitData);
MARK_REF_PTR_T(::GlobalNamespace::__MissionLevelGameplayManager___Start_d__23);
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5018))
// CS Name: ::MissionLevelGameplayManager::InitData*
class CORDL_TYPE __MissionLevelGameplayManager__InitData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field failOn0Energy offset 0x10
 __declspec(property(get=__get_failOn0Energy, put=__set_failOn0Energy)) bool  failOn0Energy;

constexpr void __set_failOn0Energy(bool  value) ;

constexpr bool& __get_failOn0Energy() ;

constexpr bool const& __get_failOn0Energy() const;

static inline ::GlobalNamespace::__MissionLevelGameplayManager__InitData* New_ctor(bool  failOn0Energy) ;

/// @brief Method .ctor addr 0x23bc598 size 0x28 virtual false final false
inline void _ctor(bool  failOn0Energy) ;

// Ctor Parameters [CppParam { name: "", ty: "__MissionLevelGameplayManager__InitData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__MissionLevelGameplayManager__InitData(__MissionLevelGameplayManager__InitData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__MissionLevelGameplayManager__InitData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__MissionLevelGameplayManager__InitData(__MissionLevelGameplayManager__InitData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __MissionLevelGameplayManager__InitData()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MissionLevelGameplayManager__InitData, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::GameState
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5019))
// CS Name: ::MissionLevelGameplayManager::GameState
struct CORDL_TYPE __MissionLevelGameplayManager__GameState : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____MissionLevelGameplayManager__GameState_Unwrapped
enum struct ____MissionLevelGameplayManager__GameState_Unwrapped : int32_t {
__E_Intro = static_cast<int32_t>(0x0),
__E_Playing = static_cast<int32_t>(0x1),
__E_Paused = static_cast<int32_t>(0x2),
__E_Finished = static_cast<int32_t>(0x3),
__E_Failed = static_cast<int32_t>(0x4),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Intro value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__MissionLevelGameplayManager__GameState const Intro;

/// @brief Field Playing value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__MissionLevelGameplayManager__GameState const Playing;

/// @brief Field Paused value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::__MissionLevelGameplayManager__GameState const Paused;

/// @brief Field Finished value: static_cast<int32_t>(0x3)
static ::GlobalNamespace::__MissionLevelGameplayManager__GameState const Finished;

/// @brief Field Failed value: static_cast<int32_t>(0x4)
static ::GlobalNamespace::__MissionLevelGameplayManager__GameState const Failed;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____MissionLevelGameplayManager__GameState_Unwrapped () const noexcept {
return std::bit_cast<____MissionLevelGameplayManager__GameState_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __MissionLevelGameplayManager__GameState(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __MissionLevelGameplayManager__GameState(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __MissionLevelGameplayManager__GameState()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MissionLevelGameplayManager__GameState, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<Start>d__23
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5020))
// CS Name: ::MissionLevelGameplayManager::<Start>d__23*
class CORDL_TYPE __MissionLevelGameplayManager___Start_d__23 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field <>1__state offset 0x10
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current offset 0x18
 __declspec(property(get=__get___2__current, put=__set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::MissionLevelGameplayManager*  __4__this;

 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___2__current(::System::Object*  value) ;

constexpr ::System::Object* __get___2__current() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get___2__current() const;

constexpr void __set___4__this(::GlobalNamespace::MissionLevelGameplayManager*  value) ;

constexpr ::GlobalNamespace::MissionLevelGameplayManager* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionLevelGameplayManager*> __get___4__this() const;

static inline ::GlobalNamespace::__MissionLevelGameplayManager___Start_d__23* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x23bbf94 size 0x28 virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x23bc5c0 size 0x4 virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x23bc5c4 size 0x3c0 virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x23bcb6c size 0x8 virtual true final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x23bcb74 size 0x40 virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x23bcbb4 size 0x8 virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "", ty: "__MissionLevelGameplayManager___Start_d__23", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__MissionLevelGameplayManager___Start_d__23(__MissionLevelGameplayManager___Start_d__23 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__MissionLevelGameplayManager___Start_d__23", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__MissionLevelGameplayManager___Start_d__23(__MissionLevelGameplayManager___Start_d__23 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __MissionLevelGameplayManager___Start_d__23()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MissionLevelGameplayManager___Start_d__23, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::MissionLevelGameplayManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5021))
// CS Name: ::MissionLevelGameplayManager*
class CORDL_TYPE MissionLevelGameplayManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _Start_d__23 = ::GlobalNamespace::__MissionLevelGameplayManager___Start_d__23;

using GameState = ::GlobalNamespace::__MissionLevelGameplayManager__GameState;

using InitData = ::GlobalNamespace::__MissionLevelGameplayManager__InitData;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x70};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x70 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _missionObjectiveCheckersManager offset 0x18
 __declspec(property(get=__get__missionObjectiveCheckersManager, put=__set__missionObjectiveCheckersManager)) ::GlobalNamespace::MissionObjectiveCheckersManager*  _missionObjectiveCheckersManager;

/// @brief Field _gameScenesManager offset 0x20
 __declspec(property(get=__get__gameScenesManager, put=__set__gameScenesManager)) ::GlobalNamespace::GameScenesManager*  _gameScenesManager;

/// @brief Field _gameSongController offset 0x28
 __declspec(property(get=__get__gameSongController, put=__set__gameSongController)) ::GlobalNamespace::GameSongController*  _gameSongController;

/// @brief Field _gameEnergyCounter offset 0x30
 __declspec(property(get=__get__gameEnergyCounter, put=__set__gameEnergyCounter)) ::GlobalNamespace::GameEnergyCounter*  _gameEnergyCounter;

/// @brief Field _pauseController offset 0x38
 __declspec(property(get=__get__pauseController, put=__set__pauseController)) ::GlobalNamespace::PauseController*  _pauseController;

/// @brief Field _initData offset 0x40
 __declspec(property(get=__get__initData, put=__set__initData)) ::GlobalNamespace::__MissionLevelGameplayManager__InitData*  _initData;

/// @brief Field levelWillStartIntroEvent offset 0x48
 __declspec(property(get=__get_levelWillStartIntroEvent, put=__set_levelWillStartIntroEvent)) ::System::Action*  levelWillStartIntroEvent;

/// @brief Field levelDidStartEvent offset 0x50
 __declspec(property(get=__get_levelDidStartEvent, put=__set_levelDidStartEvent)) ::System::Action*  levelDidStartEvent;

/// @brief Field levelFailedEvent offset 0x58
 __declspec(property(get=__get_levelFailedEvent, put=__set_levelFailedEvent)) ::System::Action*  levelFailedEvent;

/// @brief Field levelFinishedEvent offset 0x60
 __declspec(property(get=__get_levelFinishedEvent, put=__set_levelFinishedEvent)) ::System::Action*  levelFinishedEvent;

/// @brief Field _gameState offset 0x68
 __declspec(property(get=__get__gameState, put=__set__gameState)) ::GlobalNamespace::__MissionLevelGameplayManager__GameState  _gameState;

/// @brief Field _prePauseGameState offset 0x6c
 __declspec(property(get=__get__prePauseGameState, put=__set__prePauseGameState)) ::GlobalNamespace::__MissionLevelGameplayManager__GameState  _prePauseGameState;

/// @brief Convert operator to "::GlobalNamespace::ILevelEndActions"
constexpr operator  ::GlobalNamespace::ILevelEndActions*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::ILevelStartController"
constexpr operator  ::GlobalNamespace::ILevelStartController*() noexcept;

constexpr void __set__missionObjectiveCheckersManager(::GlobalNamespace::MissionObjectiveCheckersManager*  value) ;

constexpr ::GlobalNamespace::MissionObjectiveCheckersManager* __get__missionObjectiveCheckersManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionObjectiveCheckersManager*> __get__missionObjectiveCheckersManager() const;

constexpr void __set__gameScenesManager(::GlobalNamespace::GameScenesManager*  value) ;

constexpr ::GlobalNamespace::GameScenesManager* __get__gameScenesManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameScenesManager*> __get__gameScenesManager() const;

constexpr void __set__gameSongController(::GlobalNamespace::GameSongController*  value) ;

constexpr ::GlobalNamespace::GameSongController* __get__gameSongController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameSongController*> __get__gameSongController() const;

constexpr void __set__gameEnergyCounter(::GlobalNamespace::GameEnergyCounter*  value) ;

constexpr ::GlobalNamespace::GameEnergyCounter* __get__gameEnergyCounter() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameEnergyCounter*> __get__gameEnergyCounter() const;

constexpr void __set__pauseController(::GlobalNamespace::PauseController*  value) ;

constexpr ::GlobalNamespace::PauseController* __get__pauseController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PauseController*> __get__pauseController() const;

constexpr void __set__initData(::GlobalNamespace::__MissionLevelGameplayManager__InitData*  value) ;

constexpr ::GlobalNamespace::__MissionLevelGameplayManager__InitData* __get__initData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MissionLevelGameplayManager__InitData*> __get__initData() const;

constexpr void __set_levelWillStartIntroEvent(::System::Action*  value) ;

constexpr ::System::Action* __get_levelWillStartIntroEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_levelWillStartIntroEvent() const;

constexpr void __set_levelDidStartEvent(::System::Action*  value) ;

constexpr ::System::Action* __get_levelDidStartEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_levelDidStartEvent() const;

constexpr void __set_levelFailedEvent(::System::Action*  value) ;

constexpr ::System::Action* __get_levelFailedEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_levelFailedEvent() const;

constexpr void __set_levelFinishedEvent(::System::Action*  value) ;

constexpr ::System::Action* __get_levelFinishedEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_levelFinishedEvent() const;

constexpr void __set__gameState(::GlobalNamespace::__MissionLevelGameplayManager__GameState  value) ;

constexpr ::GlobalNamespace::__MissionLevelGameplayManager__GameState& __get__gameState() ;

constexpr ::GlobalNamespace::__MissionLevelGameplayManager__GameState const& __get__gameState() const;

constexpr void __set__prePauseGameState(::GlobalNamespace::__MissionLevelGameplayManager__GameState  value) ;

constexpr ::GlobalNamespace::__MissionLevelGameplayManager__GameState& __get__prePauseGameState() ;

constexpr ::GlobalNamespace::__MissionLevelGameplayManager__GameState const& __get__prePauseGameState() const;

/// @brief Method add_levelWillStartIntroEvent addr 0x23bba44 size 0x9c virtual true final true
inline void add_levelWillStartIntroEvent(::System::Action*  value) ;

/// @brief Method remove_levelWillStartIntroEvent addr 0x23bbae0 size 0x9c virtual true final true
inline void remove_levelWillStartIntroEvent(::System::Action*  value) ;

/// @brief Method add_levelDidStartEvent addr 0x23bbb7c size 0x9c virtual true final true
inline void add_levelDidStartEvent(::System::Action*  value) ;

/// @brief Method remove_levelDidStartEvent addr 0x23bbc18 size 0x9c virtual true final true
inline void remove_levelDidStartEvent(::System::Action*  value) ;

/// @brief Method add_levelFailedEvent addr 0x23bbcb4 size 0x9c virtual true final true
inline void add_levelFailedEvent(::System::Action*  value) ;

/// @brief Method remove_levelFailedEvent addr 0x23bbd50 size 0x9c virtual true final true
inline void remove_levelFailedEvent(::System::Action*  value) ;

/// @brief Method add_levelFinishedEvent addr 0x23bbdec size 0x9c virtual true final true
inline void add_levelFinishedEvent(::System::Action*  value) ;

/// @brief Method remove_levelFinishedEvent addr 0x23bbe88 size 0x9c virtual true final true
inline void remove_levelFinishedEvent(::System::Action*  value) ;

/// @brief Method Awake addr 0x23bbf24 size 0x8 virtual false final false
inline void Awake() ;

/// @brief Method Start addr 0x23bbf2c size 0x68 virtual false final false
inline ::System::Collections::IEnumerator* Start() ;

/// @brief Method OnDestroy addr 0x23bbfbc size 0x2dc virtual false final false
inline void OnDestroy() ;

/// @brief Method HandleGameEnergyDidReach0 addr 0x23bc480 size 0x54 virtual false final false
inline void HandleGameEnergyDidReach0() ;

/// @brief Method HandleMissionObjectiveCheckersManagerObjectiveDidFail addr 0x23bc4d4 size 0x34 virtual false final false
inline void HandleMissionObjectiveCheckersManagerObjectiveDidFail() ;

/// @brief Method HandleSongDidFinish addr 0x23bc508 size 0x34 virtual false final false
inline void HandleSongDidFinish() ;

/// @brief Method HandlePauseControllerCanPause addr 0x23bc53c size 0x24 virtual false final false
inline void HandlePauseControllerCanPause(::System::Action_1<bool>*  canPause) ;

/// @brief Method HandlePauseControllerDidPause addr 0x23bc560 size 0x18 virtual false final false
inline void HandlePauseControllerDidPause() ;

/// @brief Method HandlePauseControllerDidResume addr 0x23bc578 size 0x18 virtual false final false
inline void HandlePauseControllerDidResume() ;

static inline ::GlobalNamespace::MissionLevelGameplayManager* New_ctor() ;

/// @brief Method .ctor addr 0x23bc590 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MissionLevelGameplayManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MissionLevelGameplayManager(MissionLevelGameplayManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MissionLevelGameplayManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MissionLevelGameplayManager(MissionLevelGameplayManager const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MissionLevelGameplayManager()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionLevelGameplayManager, 0x70>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MissionLevelGameplayManager__GameState, "", "MissionLevelGameplayManager/GameState");
NEED_NO_BOX(::GlobalNamespace::MissionLevelGameplayManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionLevelGameplayManager*, "", "MissionLevelGameplayManager");
NEED_NO_BOX(::GlobalNamespace::__MissionLevelGameplayManager__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MissionLevelGameplayManager__InitData*, "", "MissionLevelGameplayManager/InitData");
NEED_NO_BOX(::GlobalNamespace::__MissionLevelGameplayManager___Start_d__23);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MissionLevelGameplayManager___Start_d__23*, "", "MissionLevelGameplayManager/<Start>d__23");
