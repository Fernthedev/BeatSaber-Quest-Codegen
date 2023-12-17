#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StandardLevelFailedController)
namespace GlobalNamespace {
class ILevelEndActions;
}
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace System::Collections {
class IEnumerator;
}
namespace GlobalNamespace {
class __StandardLevelFailedController___LevelFailedCoroutine_d__13;
}
namespace GlobalNamespace {
class BeatmapObjectSpawnController;
}
namespace GlobalNamespace {
class LevelFailedTextEffect;
}
namespace GlobalNamespace {
class StandardLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class __StandardLevelFailedController__InitData;
}
namespace GlobalNamespace {
class PrepareLevelCompletionResults;
}
namespace GlobalNamespace {
class GameSongController;
}
namespace GlobalNamespace {
class EnvironmentSpawnRotation;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class Object;
}
namespace System {
class IDisposable;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
// Forward declare root types
namespace GlobalNamespace {
class StandardLevelFailedController;
}
namespace GlobalNamespace {
class __StandardLevelFailedController__InitData;
}
namespace GlobalNamespace {
class __StandardLevelFailedController___LevelFailedCoroutine_d__13;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StandardLevelFailedController);
MARK_REF_PTR_T(::GlobalNamespace::__StandardLevelFailedController__InitData);
MARK_REF_PTR_T(::GlobalNamespace::__StandardLevelFailedController___LevelFailedCoroutine_d__13);
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5078))
// CS Name: ::StandardLevelFailedController::InitData*
class CORDL_TYPE __StandardLevelFailedController__InitData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field autoRestart offset 0x10
 __declspec(property(get=__get_autoRestart, put=__set_autoRestart)) bool  autoRestart;

constexpr void __set_autoRestart(bool  value) ;

constexpr bool& __get_autoRestart() ;

constexpr bool const& __get_autoRestart() const;

static inline ::GlobalNamespace::__StandardLevelFailedController__InitData* New_ctor(bool  autoRestart) ;

/// @brief Method .ctor addr 0x23cab80 size 0x28 virtual false final false
inline void _ctor(bool  autoRestart) ;

// Ctor Parameters [CppParam { name: "", ty: "__StandardLevelFailedController__InitData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StandardLevelFailedController__InitData(__StandardLevelFailedController__InitData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StandardLevelFailedController__InitData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StandardLevelFailedController__InitData(__StandardLevelFailedController__InitData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __StandardLevelFailedController__InitData()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__StandardLevelFailedController__InitData, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<LevelFailedCoroutine>d__13
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5079))
// CS Name: ::StandardLevelFailedController::<LevelFailedCoroutine>d__13*
class CORDL_TYPE __StandardLevelFailedController___LevelFailedCoroutine_d__13 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field <>1__state offset 0x10
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current offset 0x18
 __declspec(property(get=__get___2__current, put=__set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::StandardLevelFailedController*  __4__this;

/// @brief Field <levelCompletionResults>5__2 offset 0x28
 __declspec(property(get=__get__levelCompletionResults_5__2, put=__set__levelCompletionResults_5__2)) ::GlobalNamespace::LevelCompletionResults*  _levelCompletionResults_5__2;

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

constexpr void __set___4__this(::GlobalNamespace::StandardLevelFailedController*  value) ;

constexpr ::GlobalNamespace::StandardLevelFailedController* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StandardLevelFailedController*> __get___4__this() const;

constexpr void __set__levelCompletionResults_5__2(::GlobalNamespace::LevelCompletionResults*  value) ;

constexpr ::GlobalNamespace::LevelCompletionResults* __get__levelCompletionResults_5__2() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelCompletionResults*> __get__levelCompletionResults_5__2() const;

static inline ::GlobalNamespace::__StandardLevelFailedController___LevelFailedCoroutine_d__13* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x23cab50 size 0x28 virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x23caba8 size 0x4 virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x23cabac size 0x148 virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x23cacf4 size 0x8 virtual true final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x23cacfc size 0x40 virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x23cad3c size 0x8 virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "", ty: "__StandardLevelFailedController___LevelFailedCoroutine_d__13", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StandardLevelFailedController___LevelFailedCoroutine_d__13(__StandardLevelFailedController___LevelFailedCoroutine_d__13 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StandardLevelFailedController___LevelFailedCoroutine_d__13", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StandardLevelFailedController___LevelFailedCoroutine_d__13(__StandardLevelFailedController___LevelFailedCoroutine_d__13 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __StandardLevelFailedController___LevelFailedCoroutine_d__13()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__StandardLevelFailedController___LevelFailedCoroutine_d__13, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::StandardLevelFailedController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5080))
// CS Name: ::StandardLevelFailedController*
class CORDL_TYPE StandardLevelFailedController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _LevelFailedCoroutine_d__13 = ::GlobalNamespace::__StandardLevelFailedController___LevelFailedCoroutine_d__13;

using InitData = ::GlobalNamespace::__StandardLevelFailedController__InitData;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x60};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x60 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _levelFailedTextEffect offset 0x18
 __declspec(property(get=__get__levelFailedTextEffect, put=__set__levelFailedTextEffect)) ::GlobalNamespace::LevelFailedTextEffect*  _levelFailedTextEffect;

/// @brief Field _standardLevelSceneSetupData offset 0x20
 __declspec(property(get=__get__standardLevelSceneSetupData, put=__set__standardLevelSceneSetupData)) ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*  _standardLevelSceneSetupData;

/// @brief Field _prepareLevelCompletionResults offset 0x28
 __declspec(property(get=__get__prepareLevelCompletionResults, put=__set__prepareLevelCompletionResults)) ::GlobalNamespace::PrepareLevelCompletionResults*  _prepareLevelCompletionResults;

/// @brief Field _initData offset 0x30
 __declspec(property(get=__get__initData, put=__set__initData)) ::GlobalNamespace::__StandardLevelFailedController__InitData*  _initData;

/// @brief Field _gameplayManager offset 0x38
 __declspec(property(get=__get__gameplayManager, put=__set__gameplayManager)) ::GlobalNamespace::ILevelEndActions*  _gameplayManager;

/// @brief Field _beatmapObjectSpawnController offset 0x40
 __declspec(property(get=__get__beatmapObjectSpawnController, put=__set__beatmapObjectSpawnController)) ::GlobalNamespace::BeatmapObjectSpawnController*  _beatmapObjectSpawnController;

/// @brief Field _gameSongController offset 0x48
 __declspec(property(get=__get__gameSongController, put=__set__gameSongController)) ::GlobalNamespace::GameSongController*  _gameSongController;

/// @brief Field _environmentSpawnRotation offset 0x50
 __declspec(property(get=__get__environmentSpawnRotation, put=__set__environmentSpawnRotation)) ::GlobalNamespace::EnvironmentSpawnRotation*  _environmentSpawnRotation;

/// @brief Field _beatmapObjectManager offset 0x58
 __declspec(property(get=__get__beatmapObjectManager, put=__set__beatmapObjectManager)) ::GlobalNamespace::BeatmapObjectManager*  _beatmapObjectManager;

constexpr void __set__levelFailedTextEffect(::GlobalNamespace::LevelFailedTextEffect*  value) ;

constexpr ::GlobalNamespace::LevelFailedTextEffect* __get__levelFailedTextEffect() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelFailedTextEffect*> __get__levelFailedTextEffect() const;

constexpr void __set__standardLevelSceneSetupData(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*  value) ;

constexpr ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* __get__standardLevelSceneSetupData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*> __get__standardLevelSceneSetupData() const;

constexpr void __set__prepareLevelCompletionResults(::GlobalNamespace::PrepareLevelCompletionResults*  value) ;

constexpr ::GlobalNamespace::PrepareLevelCompletionResults* __get__prepareLevelCompletionResults() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PrepareLevelCompletionResults*> __get__prepareLevelCompletionResults() const;

constexpr void __set__initData(::GlobalNamespace::__StandardLevelFailedController__InitData*  value) ;

constexpr ::GlobalNamespace::__StandardLevelFailedController__InitData* __get__initData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__StandardLevelFailedController__InitData*> __get__initData() const;

constexpr void __set__gameplayManager(::GlobalNamespace::ILevelEndActions*  value) ;

constexpr ::GlobalNamespace::ILevelEndActions* __get__gameplayManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILevelEndActions*> __get__gameplayManager() const;

constexpr void __set__beatmapObjectSpawnController(::GlobalNamespace::BeatmapObjectSpawnController*  value) ;

constexpr ::GlobalNamespace::BeatmapObjectSpawnController* __get__beatmapObjectSpawnController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectSpawnController*> __get__beatmapObjectSpawnController() const;

constexpr void __set__gameSongController(::GlobalNamespace::GameSongController*  value) ;

constexpr ::GlobalNamespace::GameSongController* __get__gameSongController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameSongController*> __get__gameSongController() const;

constexpr void __set__environmentSpawnRotation(::GlobalNamespace::EnvironmentSpawnRotation*  value) ;

constexpr ::GlobalNamespace::EnvironmentSpawnRotation* __get__environmentSpawnRotation() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentSpawnRotation*> __get__environmentSpawnRotation() const;

constexpr void __set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager*  value) ;

constexpr ::GlobalNamespace::BeatmapObjectManager* __get__beatmapObjectManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> __get__beatmapObjectManager() const;

/// @brief Method Start addr 0x23ca8d4 size 0xec virtual false final false
inline void Start() ;

/// @brief Method OnDestroy addr 0x23ca9c0 size 0x108 virtual false final false
inline void OnDestroy() ;

/// @brief Method HandleLevelFailed addr 0x23caac8 size 0x20 virtual false final false
inline void HandleLevelFailed() ;

/// @brief Method LevelFailedCoroutine addr 0x23caae8 size 0x68 virtual false final false
inline ::System::Collections::IEnumerator* LevelFailedCoroutine() ;

static inline ::GlobalNamespace::StandardLevelFailedController* New_ctor() ;

/// @brief Method .ctor addr 0x23cab78 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "StandardLevelFailedController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StandardLevelFailedController(StandardLevelFailedController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StandardLevelFailedController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StandardLevelFailedController(StandardLevelFailedController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 StandardLevelFailedController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandardLevelFailedController, 0x60>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StandardLevelFailedController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardLevelFailedController*, "", "StandardLevelFailedController");
NEED_NO_BOX(::GlobalNamespace::__StandardLevelFailedController__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__StandardLevelFailedController__InitData*, "", "StandardLevelFailedController/InitData");
NEED_NO_BOX(::GlobalNamespace::__StandardLevelFailedController___LevelFailedCoroutine_d__13);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__StandardLevelFailedController___LevelFailedCoroutine_d__13*, "", "StandardLevelFailedController/<LevelFailedCoroutine>d__13");
