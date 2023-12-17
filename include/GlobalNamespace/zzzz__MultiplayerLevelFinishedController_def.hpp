#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerLevelFinishedController)
namespace GlobalNamespace {
class IMultiplayerLevelEndActionsPublisher;
}
namespace GlobalNamespace {
class MultiplayerLevelCompletionResults;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class __MultiplayerLevelFinishedController___StartLevelFinished_d__19;
}
namespace GlobalNamespace {
class IGameplayRpcManager;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections {
class IEnumerator;
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
class MultiplayerLevelFinishedController;
}
namespace GlobalNamespace {
class __MultiplayerLevelFinishedController___StartLevelFinished_d__19;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLevelFinishedController);
MARK_REF_PTR_T(::GlobalNamespace::__MultiplayerLevelFinishedController___StartLevelFinished_d__19);
// Type: ::<StartLevelFinished>d__19
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5076))
// CS Name: ::MultiplayerLevelFinishedController::<StartLevelFinished>d__19*
class CORDL_TYPE __MultiplayerLevelFinishedController___StartLevelFinished_d__19 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::System::Object)]{};

/// @brief Field <>1__state offset 0x10
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current offset 0x18
 __declspec(property(get=__get___2__current, put=__set___2__current)) ::System::Object*  __2__current;

/// @brief Field localPlayerResults offset 0x20
 __declspec(property(get=__get_localPlayerResults, put=__set_localPlayerResults)) ::GlobalNamespace::MultiplayerLevelCompletionResults*  localPlayerResults;

/// @brief Field <>4__this offset 0x28
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::MultiplayerLevelFinishedController*  __4__this;

/// @brief Field <waitStartTime>5__2 offset 0x30
 __declspec(property(get=__get__waitStartTime_5__2, put=__set__waitStartTime_5__2)) float_t  _waitStartTime_5__2;

/// @brief Field <isPlayingAlone>5__3 offset 0x34
 __declspec(property(get=__get__isPlayingAlone_5__3, put=__set__isPlayingAlone_5__3)) bool  _isPlayingAlone_5__3;

/// @brief Field <resultsTimeoutLength>5__4 offset 0x38
 __declspec(property(get=__get__resultsTimeoutLength_5__4, put=__set__resultsTimeoutLength_5__4)) float_t  _resultsTimeoutLength_5__4;

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

constexpr void __set_localPlayerResults(::GlobalNamespace::MultiplayerLevelCompletionResults*  value) ;

constexpr ::GlobalNamespace::MultiplayerLevelCompletionResults* __get_localPlayerResults() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLevelCompletionResults*> __get_localPlayerResults() const;

constexpr void __set___4__this(::GlobalNamespace::MultiplayerLevelFinishedController*  value) ;

constexpr ::GlobalNamespace::MultiplayerLevelFinishedController* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLevelFinishedController*> __get___4__this() const;

constexpr void __set__waitStartTime_5__2(float_t  value) ;

constexpr float_t& __get__waitStartTime_5__2() ;

constexpr float_t const& __get__waitStartTime_5__2() const;

constexpr void __set__isPlayingAlone_5__3(bool  value) ;

constexpr bool& __get__isPlayingAlone_5__3() ;

constexpr bool const& __get__isPlayingAlone_5__3() const;

constexpr void __set__resultsTimeoutLength_5__4(float_t  value) ;

constexpr float_t& __get__resultsTimeoutLength_5__4() ;

constexpr float_t const& __get__resultsTimeoutLength_5__4() const;

static inline ::GlobalNamespace::__MultiplayerLevelFinishedController___StartLevelFinished_d__19* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x23ca280 size 0x28 virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x23ca3e0 size 0x4 virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x23ca3e4 size 0x4a0 virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x23ca884 size 0x8 virtual true final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x23ca88c size 0x40 virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x23ca8cc size 0x8 virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "", ty: "__MultiplayerLevelFinishedController___StartLevelFinished_d__19", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__MultiplayerLevelFinishedController___StartLevelFinished_d__19(__MultiplayerLevelFinishedController___StartLevelFinished_d__19 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__MultiplayerLevelFinishedController___StartLevelFinished_d__19", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__MultiplayerLevelFinishedController___StartLevelFinished_d__19(__MultiplayerLevelFinishedController___StartLevelFinished_d__19 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __MultiplayerLevelFinishedController___StartLevelFinished_d__19()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerLevelFinishedController___StartLevelFinished_d__19, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::MultiplayerLevelFinishedController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5077))
// CS Name: ::MultiplayerLevelFinishedController*
class CORDL_TYPE MultiplayerLevelFinishedController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _StartLevelFinished_d__19 = ::GlobalNamespace::__MultiplayerLevelFinishedController___StartLevelFinished_d__19;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field kMinSceneDuration offset 0x0
static constexpr float_t  kMinSceneDuration{2.0};

/// @brief Field _levelEndActionsPublisher offset 0x18
 __declspec(property(get=__get__levelEndActionsPublisher, put=__set__levelEndActionsPublisher)) ::GlobalNamespace::IMultiplayerLevelEndActionsPublisher*  _levelEndActionsPublisher;

/// @brief Field _rpcManager offset 0x20
 __declspec(property(get=__get__rpcManager, put=__set__rpcManager)) ::GlobalNamespace::IGameplayRpcManager*  _rpcManager;

/// @brief Field _multiplayerSessionManager offset 0x28
 __declspec(property(get=__get__multiplayerSessionManager, put=__set__multiplayerSessionManager)) ::GlobalNamespace::IMultiplayerSessionManager*  _multiplayerSessionManager;

/// @brief Field allResultsCollectedEvent offset 0x30
 __declspec(property(get=__get_allResultsCollectedEvent, put=__set_allResultsCollectedEvent)) ::System::Action_2<::GlobalNamespace::MultiplayerLevelCompletionResults*,::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MultiplayerLevelCompletionResults*>*>*  allResultsCollectedEvent;

/// @brief Field _otherPlayersCompletionResults offset 0x38
 __declspec(property(get=__get__otherPlayersCompletionResults, put=__set__otherPlayersCompletionResults)) ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MultiplayerLevelCompletionResults*>*  _otherPlayersCompletionResults;

/// @brief Field _localPlayerResults offset 0x40
 __declspec(property(get=__get__localPlayerResults, put=__set__localPlayerResults)) ::GlobalNamespace::MultiplayerLevelCompletionResults*  _localPlayerResults;

/// @brief Field _gameFinishReported offset 0x48
 __declspec(property(get=__get__gameFinishReported, put=__set__gameFinishReported)) bool  _gameFinishReported;

/// @brief Field _sceneLoadTime offset 0x4c
 __declspec(property(get=__get__sceneLoadTime, put=__set__sceneLoadTime)) float_t  _sceneLoadTime;

 __declspec(property(get=get_gameResultsReady)) bool  gameResultsReady;

 __declspec(property(get=get_otherPlayersCompletionResults)) ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MultiplayerLevelCompletionResults*>*  otherPlayersCompletionResults;

 __declspec(property(get=get_localPlayerResults)) ::GlobalNamespace::MultiplayerLevelCompletionResults*  localPlayerResults;

constexpr void __set__levelEndActionsPublisher(::GlobalNamespace::IMultiplayerLevelEndActionsPublisher*  value) ;

constexpr ::GlobalNamespace::IMultiplayerLevelEndActionsPublisher* __get__levelEndActionsPublisher() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerLevelEndActionsPublisher*> __get__levelEndActionsPublisher() const;

constexpr void __set__rpcManager(::GlobalNamespace::IGameplayRpcManager*  value) ;

constexpr ::GlobalNamespace::IGameplayRpcManager* __get__rpcManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IGameplayRpcManager*> __get__rpcManager() const;

constexpr void __set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager*  value) ;

constexpr ::GlobalNamespace::IMultiplayerSessionManager* __get__multiplayerSessionManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> __get__multiplayerSessionManager() const;

constexpr void __set_allResultsCollectedEvent(::System::Action_2<::GlobalNamespace::MultiplayerLevelCompletionResults*,::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MultiplayerLevelCompletionResults*>*>*  value) ;

constexpr ::System::Action_2<::GlobalNamespace::MultiplayerLevelCompletionResults*,::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MultiplayerLevelCompletionResults*>*>* __get_allResultsCollectedEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::MultiplayerLevelCompletionResults*,::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MultiplayerLevelCompletionResults*>*>*> __get_allResultsCollectedEvent() const;

constexpr void __set__otherPlayersCompletionResults(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MultiplayerLevelCompletionResults*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MultiplayerLevelCompletionResults*>* __get__otherPlayersCompletionResults() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MultiplayerLevelCompletionResults*>*> __get__otherPlayersCompletionResults() const;

constexpr void __set__localPlayerResults(::GlobalNamespace::MultiplayerLevelCompletionResults*  value) ;

constexpr ::GlobalNamespace::MultiplayerLevelCompletionResults* __get__localPlayerResults() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLevelCompletionResults*> __get__localPlayerResults() const;

constexpr void __set__gameFinishReported(bool  value) ;

constexpr bool& __get__gameFinishReported() ;

constexpr bool const& __get__gameFinishReported() const;

constexpr void __set__sceneLoadTime(float_t  value) ;

constexpr float_t& __get__sceneLoadTime() ;

constexpr float_t const& __get__sceneLoadTime() const;

/// @brief Method add_allResultsCollectedEvent addr 0x23c9bcc size 0xb0 virtual false final false
inline void add_allResultsCollectedEvent(::System::Action_2<::GlobalNamespace::MultiplayerLevelCompletionResults*,::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MultiplayerLevelCompletionResults*>*>*  value) ;

/// @brief Method remove_allResultsCollectedEvent addr 0x23c9c7c size 0xb0 virtual false final false
inline void remove_allResultsCollectedEvent(::System::Action_2<::GlobalNamespace::MultiplayerLevelCompletionResults*,::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MultiplayerLevelCompletionResults*>*>*  value) ;

/// @brief Method get_gameResultsReady addr 0x23c9d2c size 0x8 virtual false final false
inline bool get_gameResultsReady() ;

/// @brief Method get_otherPlayersCompletionResults addr 0x23c9d34 size 0x8 virtual false final false
inline ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MultiplayerLevelCompletionResults*>* get_otherPlayersCompletionResults() ;

/// @brief Method get_localPlayerResults addr 0x23c9d3c size 0x8 virtual false final false
inline ::GlobalNamespace::MultiplayerLevelCompletionResults* get_localPlayerResults() ;

/// @brief Method Start addr 0x23c9d44 size 0x260 virtual false final false
inline void Start() ;

/// @brief Method OnDestroy addr 0x23c9fa4 size 0x268 virtual false final false
inline void OnDestroy() ;

/// @brief Method StartLevelFinished addr 0x23ca20c size 0x74 virtual false final false
inline ::System::Collections::IEnumerator* StartLevelFinished(::GlobalNamespace::MultiplayerLevelCompletionResults*  localPlayerResults) ;

/// @brief Method HandlePlayerDidFinish addr 0x23ca2a8 size 0x20 virtual false final false
inline void HandlePlayerDidFinish(::GlobalNamespace::MultiplayerLevelCompletionResults*  levelCompletionResults) ;

/// @brief Method HandlePlayerNetworkDidFailed addr 0x23ca2c8 size 0x34 virtual false final false
inline void HandlePlayerNetworkDidFailed(::GlobalNamespace::MultiplayerLevelCompletionResults*  levelCompletionResults) ;

/// @brief Method HandleRpcLevelFinished addr 0x23ca2fc size 0x68 virtual false final false
inline void HandleRpcLevelFinished(::StringW  userId, ::GlobalNamespace::MultiplayerLevelCompletionResults*  results) ;

static inline ::GlobalNamespace::MultiplayerLevelFinishedController* New_ctor() ;

/// @brief Method .ctor addr 0x23ca364 size 0x7c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLevelFinishedController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplayerLevelFinishedController(MultiplayerLevelFinishedController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLevelFinishedController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplayerLevelFinishedController(MultiplayerLevelFinishedController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MultiplayerLevelFinishedController()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLevelFinishedController, 0x50>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLevelFinishedController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLevelFinishedController*, "", "MultiplayerLevelFinishedController");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerLevelFinishedController___StartLevelFinished_d__19);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerLevelFinishedController___StartLevelFinished_d__19*, "", "MultiplayerLevelFinishedController/<StartLevelFinished>d__19");
