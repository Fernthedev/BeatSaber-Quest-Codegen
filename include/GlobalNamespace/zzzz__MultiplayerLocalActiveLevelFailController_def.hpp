#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerLocalActiveLevelFailController)
namespace System::Collections {
class IEnumerator;
}
namespace GlobalNamespace {
class GameSongController;
}
namespace GlobalNamespace {
class LevelFailedTextEffect;
}
namespace GlobalNamespace {
class __MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8;
}
namespace GlobalNamespace {
class BeatmapObjectSpawnController;
}
namespace GlobalNamespace {
class MultiplayerPlayersManager;
}
namespace GlobalNamespace {
class IMultiplayerLevelEndActionsPublisher;
}
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
class MultiplayerLevelCompletionResults;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLocalActiveLevelFailController;
}
namespace GlobalNamespace {
class __MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLocalActiveLevelFailController);
MARK_REF_PTR_T(::GlobalNamespace::__MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8);
// Type: ::<PlayerFailedCoroutine>d__8
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5148))
// CS Name: ::MultiplayerLocalActiveLevelFailController::<PlayerFailedCoroutine>d__8*
class CORDL_TYPE __MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8 : public ::System::Object {
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
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::MultiplayerLocalActiveLevelFailController*  __4__this;

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

constexpr void __set___4__this(::GlobalNamespace::MultiplayerLocalActiveLevelFailController*  value) ;

constexpr ::GlobalNamespace::MultiplayerLocalActiveLevelFailController* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLocalActiveLevelFailController*> __get___4__this() const;

static inline ::GlobalNamespace::__MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x23da528 size 0x28 virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x23da59c size 0x4 virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x23da5a0 size 0xf0 virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x23da690 size 0x8 virtual true final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x23da698 size 0x40 virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x23da6d8 size 0x8 virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "", ty: "__MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8(__MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8(__MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::MultiplayerLocalActiveLevelFailController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5149))
// CS Name: ::MultiplayerLocalActiveLevelFailController*
class CORDL_TYPE MultiplayerLocalActiveLevelFailController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _PlayerFailedCoroutine_d__8 = ::GlobalNamespace::__MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _levelFailedTextEffect offset 0x18
 __declspec(property(get=__get__levelFailedTextEffect, put=__set__levelFailedTextEffect)) ::GlobalNamespace::LevelFailedTextEffect*  _levelFailedTextEffect;

/// @brief Field _levelEndActionsPublisher offset 0x20
 __declspec(property(get=__get__levelEndActionsPublisher, put=__set__levelEndActionsPublisher)) ::GlobalNamespace::IMultiplayerLevelEndActionsPublisher*  _levelEndActionsPublisher;

/// @brief Field _beatmapObjectSpawnController offset 0x28
 __declspec(property(get=__get__beatmapObjectSpawnController, put=__set__beatmapObjectSpawnController)) ::GlobalNamespace::BeatmapObjectSpawnController*  _beatmapObjectSpawnController;

/// @brief Field _gameSongController offset 0x30
 __declspec(property(get=__get__gameSongController, put=__set__gameSongController)) ::GlobalNamespace::GameSongController*  _gameSongController;

/// @brief Field _beatmapObjectManager offset 0x38
 __declspec(property(get=__get__beatmapObjectManager, put=__set__beatmapObjectManager)) ::GlobalNamespace::BeatmapObjectManager*  _beatmapObjectManager;

/// @brief Field _multiplayerPlayersManager offset 0x40
 __declspec(property(get=__get__multiplayerPlayersManager, put=__set__multiplayerPlayersManager)) ::GlobalNamespace::MultiplayerPlayersManager*  _multiplayerPlayersManager;

constexpr void __set__levelFailedTextEffect(::GlobalNamespace::LevelFailedTextEffect*  value) ;

constexpr ::GlobalNamespace::LevelFailedTextEffect* __get__levelFailedTextEffect() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelFailedTextEffect*> __get__levelFailedTextEffect() const;

constexpr void __set__levelEndActionsPublisher(::GlobalNamespace::IMultiplayerLevelEndActionsPublisher*  value) ;

constexpr ::GlobalNamespace::IMultiplayerLevelEndActionsPublisher* __get__levelEndActionsPublisher() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerLevelEndActionsPublisher*> __get__levelEndActionsPublisher() const;

constexpr void __set__beatmapObjectSpawnController(::GlobalNamespace::BeatmapObjectSpawnController*  value) ;

constexpr ::GlobalNamespace::BeatmapObjectSpawnController* __get__beatmapObjectSpawnController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectSpawnController*> __get__beatmapObjectSpawnController() const;

constexpr void __set__gameSongController(::GlobalNamespace::GameSongController*  value) ;

constexpr ::GlobalNamespace::GameSongController* __get__gameSongController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameSongController*> __get__gameSongController() const;

constexpr void __set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager*  value) ;

constexpr ::GlobalNamespace::BeatmapObjectManager* __get__beatmapObjectManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> __get__beatmapObjectManager() const;

constexpr void __set__multiplayerPlayersManager(::GlobalNamespace::MultiplayerPlayersManager*  value) ;

constexpr ::GlobalNamespace::MultiplayerPlayersManager* __get__multiplayerPlayersManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerPlayersManager*> __get__multiplayerPlayersManager() const;

/// @brief Method Start addr 0x23da2cc size 0xec virtual false final false
inline void Start() ;

/// @brief Method OnDestroy addr 0x23da3b8 size 0x108 virtual false final false
inline void OnDestroy() ;

/// @brief Method PlayerFailedCoroutine addr 0x23da4c0 size 0x68 virtual false final false
inline ::System::Collections::IEnumerator* PlayerFailedCoroutine() ;

/// @brief Method HandlePlayerDidFinish addr 0x23da550 size 0x44 virtual false final false
inline void HandlePlayerDidFinish(::GlobalNamespace::MultiplayerLevelCompletionResults*  levelCompletionResults) ;

static inline ::GlobalNamespace::MultiplayerLocalActiveLevelFailController* New_ctor() ;

/// @brief Method .ctor addr 0x23da594 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalActiveLevelFailController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplayerLocalActiveLevelFailController(MultiplayerLocalActiveLevelFailController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalActiveLevelFailController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplayerLocalActiveLevelFailController(MultiplayerLocalActiveLevelFailController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MultiplayerLocalActiveLevelFailController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLocalActiveLevelFailController, 0x48>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLocalActiveLevelFailController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLocalActiveLevelFailController*, "", "MultiplayerLocalActiveLevelFailController");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8*, "", "MultiplayerLocalActiveLevelFailController/<PlayerFailedCoroutine>d__8");
