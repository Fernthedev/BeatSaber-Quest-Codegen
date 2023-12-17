#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__FlowCoordinator_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerModeSelectionFlowCoordinator)
namespace GlobalNamespace {
struct __MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52;
}
namespace GlobalNamespace {
struct __MultiplayerModeSelectionViewController__MenuButton;
}
namespace GlobalNamespace {
class MultiplayerModeSelectionViewController;
}
namespace GlobalNamespace {
class JoiningLobbyViewController;
}
namespace System {
template<typename T>
class Action_1;
}
namespace HMUI {
struct __ViewController__AnimationType;
}
namespace GlobalNamespace {
class XPlatformAuthFeatureFlag;
}
namespace GlobalNamespace {
class QuickPlaySetupData;
}
namespace GlobalNamespace {
class IMultiplayerStatusModel;
}
namespace GlobalNamespace {
struct __MultiplayerModeSelectionFlowCoordinator___HandleConnectedPlayerManagerCreated_d__50;
}
namespace GlobalNamespace {
struct __MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51;
}
namespace System {
class Exception;
}
namespace GlobalNamespace {
class LobbyDataModelsManager;
}
namespace GlobalNamespace {
class SelectMultiplayerLobbyDestination;
}
namespace GlobalNamespace {
struct ConnectionFailedReason;
}
namespace GlobalNamespace {
class CreateServerViewController;
}
namespace HMUI {
class ViewController;
}
namespace GlobalNamespace {
class GameServerLobbyFlowCoordinator;
}
namespace GlobalNamespace {
struct CreateServerFormData;
}
namespace GlobalNamespace {
struct MultiplayerUnavailableReason;
}
namespace GlobalNamespace {
class FadeInOutController;
}
namespace GlobalNamespace {
class SongPreviewPlayer;
}
namespace GlobalNamespace {
class SimpleDialogPromptViewController;
}
namespace GlobalNamespace {
class ServerCodeEntryViewController;
}
namespace BeatSaber::AvatarCore {
class AvatarSystemCollection;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace GlobalNamespace {
class SongPackMasksModel;
}
namespace GlobalNamespace {
class GameServerBrowserFlowCoordinator;
}
namespace UnityEngine {
class AudioClip;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace GlobalNamespace {
struct __MultiplayerLobbyConnectionController__LobbyConnectionType;
}
namespace GlobalNamespace {
class INetworkPlayerModel;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class IUnifiedNetworkPlayerModel;
}
namespace GlobalNamespace {
class IAnalyticsModel;
}
namespace GlobalNamespace {
class IQuickPlaySetupModel;
}
namespace GlobalNamespace {
class ILobbyGameStateController;
}
namespace GlobalNamespace {
class JoinQuickPlayViewController;
}
namespace GlobalNamespace {
class MultiplayerLobbyConnectionController;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace GlobalNamespace {
struct MultiplayerAvatarsData;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace GlobalNamespace {
class MultiplayerStatusData;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerModeSelectionFlowCoordinator;
}
namespace GlobalNamespace {
struct __MultiplayerModeSelectionFlowCoordinator___HandleConnectedPlayerManagerCreated_d__50;
}
namespace GlobalNamespace {
struct __MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52;
}
namespace GlobalNamespace {
struct __MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator);
MARK_VAL_T(::GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___HandleConnectedPlayerManagerCreated_d__50);
MARK_VAL_T(::GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52);
MARK_VAL_T(::GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51);
// Type: ::<HandleConnectedPlayerManagerCreated>d__50
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5513))
// CS Name: ::MultiplayerModeSelectionFlowCoordinator::<HandleConnectedPlayerManagerCreated>d__50
struct CORDL_TYPE __MultiplayerModeSelectionFlowCoordinator___HandleConnectedPlayerManagerCreated_d__50 : public ::bs_hook::ValueTypeWrapper<0x40> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this offset 0x28
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*  __4__this;

/// @brief Field networkPlayerModel offset 0x30
 __declspec(property(get=__get_networkPlayerModel, put=__set_networkPlayerModel)) ::GlobalNamespace::INetworkPlayerModel*  networkPlayerModel;

/// @brief Field <>u__1 offset 0x38
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::MultiplayerAvatarsData>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder const& __get___t__builder() const;

constexpr void __set___4__this(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*  value) ;

constexpr ::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*> __get___4__this() const;

constexpr void __set_networkPlayerModel(::GlobalNamespace::INetworkPlayerModel*  value) ;

constexpr ::GlobalNamespace::INetworkPlayerModel* __get_networkPlayerModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::INetworkPlayerModel*> __get_networkPlayerModel() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::MultiplayerAvatarsData>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::MultiplayerAvatarsData>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::MultiplayerAvatarsData> const& __get___u__1() const;

/// @brief Method MoveNext addr 0x22991c0 size 0x3d4 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x2299594 size 0xc virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*", modifiers: "", def_value: None }, CppParam { name: "networkPlayerModel", ty: "::GlobalNamespace::INetworkPlayerModel*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::MultiplayerAvatarsData>", modifiers: "", def_value: None }]
constexpr __MultiplayerModeSelectionFlowCoordinator___HandleConnectedPlayerManagerCreated_d__50(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*  __4__this, ::GlobalNamespace::INetworkPlayerModel*  networkPlayerModel, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::MultiplayerAvatarsData>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __MultiplayerModeSelectionFlowCoordinator___HandleConnectedPlayerManagerCreated_d__50(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x40>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __MultiplayerModeSelectionFlowCoordinator___HandleConnectedPlayerManagerCreated_d__50()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___HandleConnectedPlayerManagerCreated_d__50, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<TryShowModeSelection>d__51
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5514))
// CS Name: ::MultiplayerModeSelectionFlowCoordinator::<TryShowModeSelection>d__51
struct CORDL_TYPE __MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51 : public ::bs_hook::ValueTypeWrapper<0x58> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this offset 0x28
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*  __4__this;

/// @brief Field <multiplayerStatusData>5__2 offset 0x30
 __declspec(property(get=__get__multiplayerStatusData_5__2, put=__set__multiplayerStatusData_5__2)) ::GlobalNamespace::MultiplayerStatusData*  _multiplayerStatusData_5__2;

/// @brief Field <exception>5__3 offset 0x38
 __declspec(property(get=__get__exception_5__3, put=__set__exception_5__3)) ::System::Exception*  _exception_5__3;

/// @brief Field <>u__1 offset 0x40
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1;

/// @brief Field <>u__2 offset 0x48
 __declspec(property(get=__get___u__2, put=__set___u__2)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::MultiplayerStatusData*>  __u__2;

/// @brief Field <>u__3 offset 0x50
 __declspec(property(get=__get___u__3, put=__set___u__3)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::QuickPlaySetupData*>  __u__3;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder const& __get___t__builder() const;

constexpr void __set___4__this(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*  value) ;

constexpr ::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*> __get___4__this() const;

constexpr void __set__multiplayerStatusData_5__2(::GlobalNamespace::MultiplayerStatusData*  value) ;

constexpr ::GlobalNamespace::MultiplayerStatusData* __get__multiplayerStatusData_5__2() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerStatusData*> __get__multiplayerStatusData_5__2() const;

constexpr void __set__exception_5__3(::System::Exception*  value) ;

constexpr ::System::Exception* __get__exception_5__3() ;

constexpr ::cordl_internals::to_const_pointer<::System::Exception*> __get__exception_5__3() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> const& __get___u__1() const;

constexpr void __set___u__2(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::MultiplayerStatusData*>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::MultiplayerStatusData*>& __get___u__2() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::MultiplayerStatusData*> const& __get___u__2() const;

constexpr void __set___u__3(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::QuickPlaySetupData*>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::QuickPlaySetupData*>& __get___u__3() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::QuickPlaySetupData*> const& __get___u__3() const;

/// @brief Method MoveNext addr 0x22995a0 size 0xae8 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x229a088 size 0xc virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*", modifiers: "", def_value: None }, CppParam { name: "_multiplayerStatusData_5__2", ty: "::GlobalNamespace::MultiplayerStatusData*", modifiers: "", def_value: None }, CppParam { name: "_exception_5__3", ty: "::System::Exception*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::MultiplayerStatusData*>", modifiers: "", def_value: None }, CppParam { name: "__u__3", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::QuickPlaySetupData*>", modifiers: "", def_value: None }]
constexpr __MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*  __4__this, ::GlobalNamespace::MultiplayerStatusData*  _multiplayerStatusData_5__2, ::System::Exception*  _exception_5__3, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::MultiplayerStatusData*>  __u__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::QuickPlaySetupData*>  __u__3) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x58>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51, 0x58>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<ResolveAndPresentNextFlowCoordinator>d__52
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5515))
// CS Name: ::MultiplayerModeSelectionFlowCoordinator::<ResolveAndPresentNextFlowCoordinator>d__52
struct CORDL_TYPE __MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52 : public ::bs_hook::ValueTypeWrapper<0x40> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this offset 0x28
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*  __4__this;

/// @brief Field <>7__wrap1 offset 0x30
 __declspec(property(get=__get___7__wrap1, put=__set___7__wrap1)) int32_t  __7__wrap1;

/// @brief Field <>u__1 offset 0x38
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder const& __get___t__builder() const;

constexpr void __set___4__this(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*  value) ;

constexpr ::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*> __get___4__this() const;

constexpr void __set___7__wrap1(int32_t  value) ;

constexpr int32_t& __get___7__wrap1() ;

constexpr int32_t const& __get___7__wrap1() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& __get___u__1() const;

/// @brief Method MoveNext addr 0x229a094 size 0x430 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x229a4c4 size 0xc virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*", modifiers: "", def_value: None }, CppParam { name: "__7__wrap1", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr __MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*  __4__this, int32_t  __7__wrap1, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x40>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::MultiplayerModeSelectionFlowCoordinator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13582))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5516))
// CS Name: ::MultiplayerModeSelectionFlowCoordinator*
class CORDL_TYPE MultiplayerModeSelectionFlowCoordinator : public ::HMUI::FlowCoordinator {
public:
// Declarations
using _ResolveAndPresentNextFlowCoordinator_d__52 = ::GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52;

using _TryShowModeSelection_d__51 = ::GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51;

using _HandleConnectedPlayerManagerCreated_d__50 = ::GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___HandleConnectedPlayerManagerCreated_d__50;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x198};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x198 - sizeof(::HMUI::FlowCoordinator)]{};

/// @brief Field _ambienceAudioClip offset 0xa8
 __declspec(property(get=__get__ambienceAudioClip, put=__set__ambienceAudioClip)) ::UnityEngine::AudioClip*  _ambienceAudioClip;

/// @brief Field _songPackMasksModel offset 0xb0
 __declspec(property(get=__get__songPackMasksModel, put=__set__songPackMasksModel)) ::GlobalNamespace::SongPackMasksModel*  _songPackMasksModel;

/// @brief Field _gameServerBrowserFlowCoordinator offset 0xb8
 __declspec(property(get=__get__gameServerBrowserFlowCoordinator, put=__set__gameServerBrowserFlowCoordinator)) ::GlobalNamespace::GameServerBrowserFlowCoordinator*  _gameServerBrowserFlowCoordinator;

/// @brief Field _gameServerLobbyFlowCoordinator offset 0xc0
 __declspec(property(get=__get__gameServerLobbyFlowCoordinator, put=__set__gameServerLobbyFlowCoordinator)) ::GlobalNamespace::GameServerLobbyFlowCoordinator*  _gameServerLobbyFlowCoordinator;

/// @brief Field _multiplayerModeSelectionViewController offset 0xc8
 __declspec(property(get=__get__multiplayerModeSelectionViewController, put=__set__multiplayerModeSelectionViewController)) ::GlobalNamespace::MultiplayerModeSelectionViewController*  _multiplayerModeSelectionViewController;

/// @brief Field _createServerViewController offset 0xd0
 __declspec(property(get=__get__createServerViewController, put=__set__createServerViewController)) ::GlobalNamespace::CreateServerViewController*  _createServerViewController;

/// @brief Field _joinQuickPlayViewController offset 0xd8
 __declspec(property(get=__get__joinQuickPlayViewController, put=__set__joinQuickPlayViewController)) ::GlobalNamespace::JoinQuickPlayViewController*  _joinQuickPlayViewController;

/// @brief Field _serverCodeEntryViewController offset 0xe0
 __declspec(property(get=__get__serverCodeEntryViewController, put=__set__serverCodeEntryViewController)) ::GlobalNamespace::ServerCodeEntryViewController*  _serverCodeEntryViewController;

/// @brief Field _simpleDialogPromptViewController offset 0xe8
 __declspec(property(get=__get__simpleDialogPromptViewController, put=__set__simpleDialogPromptViewController)) ::GlobalNamespace::SimpleDialogPromptViewController*  _simpleDialogPromptViewController;

/// @brief Field _joiningLobbyViewController offset 0xf0
 __declspec(property(get=__get__joiningLobbyViewController, put=__set__joiningLobbyViewController)) ::GlobalNamespace::JoiningLobbyViewController*  _joiningLobbyViewController;

/// @brief Field _unifiedNetworkPlayerModel offset 0xf8
 __declspec(property(get=__get__unifiedNetworkPlayerModel, put=__set__unifiedNetworkPlayerModel)) ::GlobalNamespace::IUnifiedNetworkPlayerModel*  _unifiedNetworkPlayerModel;

/// @brief Field _avatarSystemCollection offset 0x100
 __declspec(property(get=__get__avatarSystemCollection, put=__set__avatarSystemCollection)) ::BeatSaber::AvatarCore::AvatarSystemCollection*  _avatarSystemCollection;

/// @brief Field _multiplayerSessionManager offset 0x108
 __declspec(property(get=__get__multiplayerSessionManager, put=__set__multiplayerSessionManager)) ::GlobalNamespace::IMultiplayerSessionManager*  _multiplayerSessionManager;

/// @brief Field _fadeInOutController offset 0x110
 __declspec(property(get=__get__fadeInOutController, put=__set__fadeInOutController)) ::GlobalNamespace::FadeInOutController*  _fadeInOutController;

/// @brief Field _lobbyDataModelsManager offset 0x118
 __declspec(property(get=__get__lobbyDataModelsManager, put=__set__lobbyDataModelsManager)) ::GlobalNamespace::LobbyDataModelsManager*  _lobbyDataModelsManager;

/// @brief Field _multiplayerLobbyConnectionController offset 0x120
 __declspec(property(get=__get__multiplayerLobbyConnectionController, put=__set__multiplayerLobbyConnectionController)) ::GlobalNamespace::MultiplayerLobbyConnectionController*  _multiplayerLobbyConnectionController;

/// @brief Field _multiplayerStatusModel offset 0x128
 __declspec(property(get=__get__multiplayerStatusModel, put=__set__multiplayerStatusModel)) ::GlobalNamespace::IMultiplayerStatusModel*  _multiplayerStatusModel;

/// @brief Field _quickPlaySetupModel offset 0x130
 __declspec(property(get=__get__quickPlaySetupModel, put=__set__quickPlaySetupModel)) ::GlobalNamespace::IQuickPlaySetupModel*  _quickPlaySetupModel;

/// @brief Field _playerDataModel offset 0x138
 __declspec(property(get=__get__playerDataModel, put=__set__playerDataModel)) ::GlobalNamespace::PlayerDataModel*  _playerDataModel;

/// @brief Field _songPreviewPlayer offset 0x140
 __declspec(property(get=__get__songPreviewPlayer, put=__set__songPreviewPlayer)) ::GlobalNamespace::SongPreviewPlayer*  _songPreviewPlayer;

/// @brief Field _analyticsModel offset 0x148
 __declspec(property(get=__get__analyticsModel, put=__set__analyticsModel)) ::GlobalNamespace::IAnalyticsModel*  _analyticsModel;

/// @brief Field _lobbyGameStateController offset 0x150
 __declspec(property(get=__get__lobbyGameStateController, put=__set__lobbyGameStateController)) ::GlobalNamespace::ILobbyGameStateController*  _lobbyGameStateController;

/// @brief Field _xPlatformAuthFeatureFlag offset 0x158
 __declspec(property(get=__get__xPlatformAuthFeatureFlag, put=__set__xPlatformAuthFeatureFlag)) ::GlobalNamespace::XPlatformAuthFeatureFlag*  _xPlatformAuthFeatureFlag;

/// @brief Field didFinishEvent offset 0x160
 __declspec(property(get=__get_didFinishEvent, put=__set_didFinishEvent)) ::System::Action_1<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>*  didFinishEvent;

/// @brief Field _joiningLobbyCancellationTokenSource offset 0x168
 __declspec(property(get=__get__joiningLobbyCancellationTokenSource, put=__set__joiningLobbyCancellationTokenSource)) ::System::Threading::CancellationTokenSource*  _joiningLobbyCancellationTokenSource;

/// @brief Field _cancellationTokenSource offset 0x170
 __declspec(property(get=__get__cancellationTokenSource, put=__set__cancellationTokenSource)) ::System::Threading::CancellationTokenSource*  _cancellationTokenSource;

/// @brief Field _transitionFinishedTaskSource offset 0x178
 __declspec(property(get=__get__transitionFinishedTaskSource, put=__set__transitionFinishedTaskSource)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  _transitionFinishedTaskSource;

/// @brief Field _checkingAvailabilityTaskSource offset 0x180
 __declspec(property(get=__get__checkingAvailabilityTaskSource, put=__set__checkingAvailabilityTaskSource)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  _checkingAvailabilityTaskSource;

/// @brief Field _quickPlaySetupData offset 0x188
 __declspec(property(get=__get__quickPlaySetupData, put=__set__quickPlaySetupData)) ::GlobalNamespace::QuickPlaySetupData*  _quickPlaySetupData;

/// @brief Field _lobbyDestination offset 0x190
 __declspec(property(get=__get__lobbyDestination, put=__set__lobbyDestination)) ::GlobalNamespace::SelectMultiplayerLobbyDestination*  _lobbyDestination;

constexpr void __set__ambienceAudioClip(::UnityEngine::AudioClip*  value) ;

constexpr ::UnityEngine::AudioClip* __get__ambienceAudioClip() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioClip*> __get__ambienceAudioClip() const;

constexpr void __set__songPackMasksModel(::GlobalNamespace::SongPackMasksModel*  value) ;

constexpr ::GlobalNamespace::SongPackMasksModel* __get__songPackMasksModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SongPackMasksModel*> __get__songPackMasksModel() const;

constexpr void __set__gameServerBrowserFlowCoordinator(::GlobalNamespace::GameServerBrowserFlowCoordinator*  value) ;

constexpr ::GlobalNamespace::GameServerBrowserFlowCoordinator* __get__gameServerBrowserFlowCoordinator() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameServerBrowserFlowCoordinator*> __get__gameServerBrowserFlowCoordinator() const;

constexpr void __set__gameServerLobbyFlowCoordinator(::GlobalNamespace::GameServerLobbyFlowCoordinator*  value) ;

constexpr ::GlobalNamespace::GameServerLobbyFlowCoordinator* __get__gameServerLobbyFlowCoordinator() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameServerLobbyFlowCoordinator*> __get__gameServerLobbyFlowCoordinator() const;

constexpr void __set__multiplayerModeSelectionViewController(::GlobalNamespace::MultiplayerModeSelectionViewController*  value) ;

constexpr ::GlobalNamespace::MultiplayerModeSelectionViewController* __get__multiplayerModeSelectionViewController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerModeSelectionViewController*> __get__multiplayerModeSelectionViewController() const;

constexpr void __set__createServerViewController(::GlobalNamespace::CreateServerViewController*  value) ;

constexpr ::GlobalNamespace::CreateServerViewController* __get__createServerViewController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CreateServerViewController*> __get__createServerViewController() const;

constexpr void __set__joinQuickPlayViewController(::GlobalNamespace::JoinQuickPlayViewController*  value) ;

constexpr ::GlobalNamespace::JoinQuickPlayViewController* __get__joinQuickPlayViewController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::JoinQuickPlayViewController*> __get__joinQuickPlayViewController() const;

constexpr void __set__serverCodeEntryViewController(::GlobalNamespace::ServerCodeEntryViewController*  value) ;

constexpr ::GlobalNamespace::ServerCodeEntryViewController* __get__serverCodeEntryViewController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ServerCodeEntryViewController*> __get__serverCodeEntryViewController() const;

constexpr void __set__simpleDialogPromptViewController(::GlobalNamespace::SimpleDialogPromptViewController*  value) ;

constexpr ::GlobalNamespace::SimpleDialogPromptViewController* __get__simpleDialogPromptViewController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SimpleDialogPromptViewController*> __get__simpleDialogPromptViewController() const;

constexpr void __set__joiningLobbyViewController(::GlobalNamespace::JoiningLobbyViewController*  value) ;

constexpr ::GlobalNamespace::JoiningLobbyViewController* __get__joiningLobbyViewController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::JoiningLobbyViewController*> __get__joiningLobbyViewController() const;

constexpr void __set__unifiedNetworkPlayerModel(::GlobalNamespace::IUnifiedNetworkPlayerModel*  value) ;

constexpr ::GlobalNamespace::IUnifiedNetworkPlayerModel* __get__unifiedNetworkPlayerModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IUnifiedNetworkPlayerModel*> __get__unifiedNetworkPlayerModel() const;

constexpr void __set__avatarSystemCollection(::BeatSaber::AvatarCore::AvatarSystemCollection*  value) ;

constexpr ::BeatSaber::AvatarCore::AvatarSystemCollection* __get__avatarSystemCollection() ;

constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::AvatarSystemCollection*> __get__avatarSystemCollection() const;

constexpr void __set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager*  value) ;

constexpr ::GlobalNamespace::IMultiplayerSessionManager* __get__multiplayerSessionManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> __get__multiplayerSessionManager() const;

constexpr void __set__fadeInOutController(::GlobalNamespace::FadeInOutController*  value) ;

constexpr ::GlobalNamespace::FadeInOutController* __get__fadeInOutController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FadeInOutController*> __get__fadeInOutController() const;

constexpr void __set__lobbyDataModelsManager(::GlobalNamespace::LobbyDataModelsManager*  value) ;

constexpr ::GlobalNamespace::LobbyDataModelsManager* __get__lobbyDataModelsManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LobbyDataModelsManager*> __get__lobbyDataModelsManager() const;

constexpr void __set__multiplayerLobbyConnectionController(::GlobalNamespace::MultiplayerLobbyConnectionController*  value) ;

constexpr ::GlobalNamespace::MultiplayerLobbyConnectionController* __get__multiplayerLobbyConnectionController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLobbyConnectionController*> __get__multiplayerLobbyConnectionController() const;

constexpr void __set__multiplayerStatusModel(::GlobalNamespace::IMultiplayerStatusModel*  value) ;

constexpr ::GlobalNamespace::IMultiplayerStatusModel* __get__multiplayerStatusModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerStatusModel*> __get__multiplayerStatusModel() const;

constexpr void __set__quickPlaySetupModel(::GlobalNamespace::IQuickPlaySetupModel*  value) ;

constexpr ::GlobalNamespace::IQuickPlaySetupModel* __get__quickPlaySetupModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IQuickPlaySetupModel*> __get__quickPlaySetupModel() const;

constexpr void __set__playerDataModel(::GlobalNamespace::PlayerDataModel*  value) ;

constexpr ::GlobalNamespace::PlayerDataModel* __get__playerDataModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> __get__playerDataModel() const;

constexpr void __set__songPreviewPlayer(::GlobalNamespace::SongPreviewPlayer*  value) ;

constexpr ::GlobalNamespace::SongPreviewPlayer* __get__songPreviewPlayer() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SongPreviewPlayer*> __get__songPreviewPlayer() const;

constexpr void __set__analyticsModel(::GlobalNamespace::IAnalyticsModel*  value) ;

constexpr ::GlobalNamespace::IAnalyticsModel* __get__analyticsModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAnalyticsModel*> __get__analyticsModel() const;

constexpr void __set__lobbyGameStateController(::GlobalNamespace::ILobbyGameStateController*  value) ;

constexpr ::GlobalNamespace::ILobbyGameStateController* __get__lobbyGameStateController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILobbyGameStateController*> __get__lobbyGameStateController() const;

constexpr void __set__xPlatformAuthFeatureFlag(::GlobalNamespace::XPlatformAuthFeatureFlag*  value) ;

constexpr ::GlobalNamespace::XPlatformAuthFeatureFlag* __get__xPlatformAuthFeatureFlag() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::XPlatformAuthFeatureFlag*> __get__xPlatformAuthFeatureFlag() const;

constexpr void __set_didFinishEvent(::System::Action_1<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>*  value) ;

constexpr ::System::Action_1<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>* __get_didFinishEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>*> __get_didFinishEvent() const;

constexpr void __set__joiningLobbyCancellationTokenSource(::System::Threading::CancellationTokenSource*  value) ;

constexpr ::System::Threading::CancellationTokenSource* __get__joiningLobbyCancellationTokenSource() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> __get__joiningLobbyCancellationTokenSource() const;

constexpr void __set__cancellationTokenSource(::System::Threading::CancellationTokenSource*  value) ;

constexpr ::System::Threading::CancellationTokenSource* __get__cancellationTokenSource() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> __get__cancellationTokenSource() const;

constexpr void __set__transitionFinishedTaskSource(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value) ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* __get__transitionFinishedTaskSource() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<bool>*> __get__transitionFinishedTaskSource() const;

constexpr void __set__checkingAvailabilityTaskSource(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value) ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* __get__checkingAvailabilityTaskSource() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<bool>*> __get__checkingAvailabilityTaskSource() const;

constexpr void __set__quickPlaySetupData(::GlobalNamespace::QuickPlaySetupData*  value) ;

constexpr ::GlobalNamespace::QuickPlaySetupData* __get__quickPlaySetupData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::QuickPlaySetupData*> __get__quickPlaySetupData() const;

constexpr void __set__lobbyDestination(::GlobalNamespace::SelectMultiplayerLobbyDestination*  value) ;

constexpr ::GlobalNamespace::SelectMultiplayerLobbyDestination* __get__lobbyDestination() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SelectMultiplayerLobbyDestination*> __get__lobbyDestination() const;

/// @brief Method add_didFinishEvent addr 0x228ba68 size 0xb4 virtual false final false
inline void add_didFinishEvent(::System::Action_1<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>*  value) ;

/// @brief Method remove_didFinishEvent addr 0x228c33c size 0xb4 virtual false final false
inline void remove_didFinishEvent(::System::Action_1<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>*  value) ;

/// @brief Method Setup addr 0x2296038 size 0x8 virtual false final false
inline void Setup(::GlobalNamespace::SelectMultiplayerLobbyDestination*  lobbyDestination) ;

/// @brief Method DidActivate addr 0x2296040 size 0x4d8 virtual true final false
inline void DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling) ;

/// @brief Method DidDeactivate addr 0x22965b0 size 0x404 virtual true final false
inline void DidDeactivate(bool  removedFromHierarchy, bool  screenSystemDisabling) ;

/// @brief Method BackButtonWasPressed addr 0x22969b4 size 0xcc virtual true final false
inline void BackButtonWasPressed(::HMUI::ViewController*  topViewController) ;

/// @brief Method TopViewControllerWillChange addr 0x2296a80 size 0x24c virtual true final false
inline void TopViewControllerWillChange(::HMUI::ViewController*  oldViewController, ::HMUI::ViewController*  newViewController, ::HMUI::__ViewController__AnimationType  animationType) ;

/// @brief Method TransitionDidStart addr 0x2296ccc size 0x160 virtual true final false
inline void TransitionDidStart() ;

/// @brief Method TransitionDidFinish addr 0x2296e2c size 0x284 virtual true final false
inline void TransitionDidFinish() ;

/// @brief Method HandleMultiplayerLobbyConnectionControllerConnectionSuccessActivateModel addr 0x22976a4 size 0x1c virtual false final false
inline void HandleMultiplayerLobbyConnectionControllerConnectionSuccessActivateModel() ;

/// @brief Method HandleMultiplayerLobbyConnectionControllerConnectionSuccess addr 0x22976c0 size 0x4 virtual false final false
inline void HandleMultiplayerLobbyConnectionControllerConnectionSuccess() ;

/// @brief Method HandleMultiplayerLobbyConnectionControllerConnectionFailed addr 0x22976c4 size 0xc4 virtual false final false
inline void HandleMultiplayerLobbyConnectionControllerConnectionFailed(::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType  connectionType, ::GlobalNamespace::ConnectionFailedReason  reason) ;

/// @brief Method HandleMultiplayerLobbyControllerDidFinish addr 0x2297788 size 0x5e0 virtual false final false
inline void HandleMultiplayerLobbyControllerDidFinish(::GlobalNamespace::MultiplayerModeSelectionViewController*  viewController, ::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton  menuButton) ;

/// @brief Method HandleGameServerBrowserFlowCoordinatorDidFinish addr 0x2297d68 size 0x14 virtual false final false
inline void HandleGameServerBrowserFlowCoordinatorDidFinish(::GlobalNamespace::GameServerBrowserFlowCoordinator*  flowCoordinator) ;

/// @brief Method HandleJoiningLobbyViewControllerDidCancel addr 0x2297d7c size 0xc4 virtual false final false
inline void HandleJoiningLobbyViewControllerDidCancel() ;

/// @brief Method HandleJoinQuickPlayViewControllerDidFinish addr 0x2297e40 size 0x3fc virtual false final false
inline void HandleJoinQuickPlayViewControllerDidFinish(bool  success) ;

/// @brief Method HandleServerCodeEntryViewControllerDidFinish addr 0x229823c size 0x124 virtual false final false
inline void HandleServerCodeEntryViewControllerDidFinish(bool  success, ::StringW  code) ;

/// @brief Method HandleCreateServerViewControllerDidFinish addr 0x2298360 size 0x3bc virtual false final false
inline void HandleCreateServerViewControllerDidFinish(bool  success, ::GlobalNamespace::CreateServerFormData  data) ;

/// @brief Method HandleGameServerLobbyFlowCoordinatorDidFinish addr 0x229871c size 0x268 virtual false final false
inline void HandleGameServerLobbyFlowCoordinatorDidFinish() ;

/// @brief Method HandleGameServerLobbyFlowCoordinatorWillFinish addr 0x2298984 size 0x98 virtual false final false
inline void HandleGameServerLobbyFlowCoordinatorWillFinish() ;

/// @brief Method HandleConnectedPlayerManagerCreated addr 0x2298a1c size 0x9c virtual false final false
inline void HandleConnectedPlayerManagerCreated(::GlobalNamespace::INetworkPlayerModel*  networkPlayerModel) ;

/// @brief Method TryShowModeSelection addr 0x2296518 size 0x98 virtual false final false
inline void TryShowModeSelection(bool  shouldProvideInitialViewControllers) ;

/// @brief Method ResolveAndPresentNextFlowCoordinator addr 0x22970b0 size 0x90 virtual false final false
inline void ResolveAndPresentNextFlowCoordinator() ;

/// @brief Method PresentConnectionErrorDialog addr 0x2297140 size 0x564 virtual false final false
inline void PresentConnectionErrorDialog(::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType  connectionType, ::GlobalNamespace::ConnectionFailedReason  reason) ;

/// @brief Method PresentMasterServerUnavailableErrorDialog addr 0x2298ab8 size 0x44c virtual false final false
inline void PresentMasterServerUnavailableErrorDialog(::GlobalNamespace::MultiplayerUnavailableReason  reason, ::System::Exception*  exception, ::System::Nullable_1<int64_t>  maintenanceWindowEndTime, ::StringW  remoteLocalizedMessage) ;

/// @brief Method ProcessDeeplinkingToLobby addr 0x2298f04 size 0xf4 virtual false final false
inline void ProcessDeeplinkingToLobby() ;

static inline ::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator* New_ctor() ;

/// @brief Method .ctor addr 0x2298ff8 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <ResolveAndPresentNextFlowCoordinator>b__52_0 addr 0x2299000 size 0x170 virtual false final false
inline void _ResolveAndPresentNextFlowCoordinator_b__52_0() ;

/// @brief Method <PresentConnectionErrorDialog>b__53_0 addr 0x2299170 size 0x18 virtual false final false
inline void _PresentConnectionErrorDialog_b__53_0(int32_t  btnId) ;

/// @brief Method <PresentConnectionErrorDialog>b__53_1 addr 0x2299188 size 0x18 virtual false final false
inline void _PresentConnectionErrorDialog_b__53_1(int32_t  btnId) ;

/// @brief Method <PresentMasterServerUnavailableErrorDialog>b__54_0 addr 0x22991a0 size 0x20 virtual false final false
inline void _PresentMasterServerUnavailableErrorDialog_b__54_0(int32_t  btnId) ;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerModeSelectionFlowCoordinator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplayerModeSelectionFlowCoordinator(MultiplayerModeSelectionFlowCoordinator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerModeSelectionFlowCoordinator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplayerModeSelectionFlowCoordinator(MultiplayerModeSelectionFlowCoordinator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MultiplayerModeSelectionFlowCoordinator()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator, 0x198>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*, "", "MultiplayerModeSelectionFlowCoordinator");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___HandleConnectedPlayerManagerCreated_d__50, "", "MultiplayerModeSelectionFlowCoordinator/<HandleConnectedPlayerManagerCreated>d__50");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52, "", "MultiplayerModeSelectionFlowCoordinator/<ResolveAndPresentNextFlowCoordinator>d__52");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51, "", "MultiplayerModeSelectionFlowCoordinator/<TryShowModeSelection>d__51");
