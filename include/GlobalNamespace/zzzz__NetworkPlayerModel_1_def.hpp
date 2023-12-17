#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BaseNetworkPlayerModel_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkPlayerModel_1)
namespace GlobalNamespace {
template<typename T>
class __NetworkPlayerModel_1__NetworkPlayer;
}
namespace GlobalNamespace {
class INetworkPlayer;
}
namespace GlobalNamespace {
class UserInfo;
}
namespace GlobalNamespace {
struct ConnectionFailedReason;
}
namespace GlobalNamespace {
template<typename T>
class __NetworkPlayerModel_1__StartClientPartyConfig;
}
namespace GlobalNamespace {
template<typename T>
class INetworkPlayerModelPartyConfig_1;
}
namespace GlobalNamespace {
template<typename T>
class __NetworkPlayerModel_1____c__DisplayClass59_0;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace GlobalNamespace {
template<typename T>
class __NetworkPlayerModel_1___GetOtherPlayers_d__58;
}
namespace GlobalNamespace {
class IAuthenticationTokenProvider;
}
namespace GlobalNamespace {
struct GameplayServerConfiguration;
}
namespace GlobalNamespace {
class INetworkPlayerModel;
}
namespace System {
class Action;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace GlobalNamespace {
struct PublicServerInfo;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace GlobalNamespace {
struct BeatmapLevelSelectionMask;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
template<typename T>
class __NetworkPlayerModel_1___GetPartyPlayers_d__57;
}
namespace GlobalNamespace {
class IPlatformUserModel;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
struct DisconnectedReason;
}
namespace GlobalNamespace {
template<typename T>
class IConnectionInitParams_1;
}
namespace GlobalNamespace {
template<typename T>
class __NetworkPlayerModel_1__JoinMatchmakingPartyConfig;
}
namespace GlobalNamespace {
template<typename T>
class __NetworkPlayerModel_1__NetworkServer;
}
namespace GlobalNamespace {
template<typename T>
struct __NetworkPlayerModel_1___InitAuthenticationTokenProvider_d__56;
}
namespace GlobalNamespace {
template<typename T>
class __NetworkPlayerModel_1____c;
}
namespace System::Collections::Generic {
template<typename T>
struct __List_1__Enumerator;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
template<typename T>
class Comparison_1;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class NetworkPlayerModel_1;
}
namespace GlobalNamespace {
template<typename T>
class __NetworkPlayerModel_1__JoinMatchmakingPartyConfig;
}
namespace GlobalNamespace {
template<typename T>
class __NetworkPlayerModel_1__NetworkPlayer;
}
namespace GlobalNamespace {
template<typename T>
class __NetworkPlayerModel_1__NetworkServer;
}
namespace GlobalNamespace {
template<typename T>
class __NetworkPlayerModel_1__StartClientPartyConfig;
}
namespace GlobalNamespace {
template<typename T>
class __NetworkPlayerModel_1___GetOtherPlayers_d__58;
}
namespace GlobalNamespace {
template<typename T>
class __NetworkPlayerModel_1___GetPartyPlayers_d__57;
}
namespace GlobalNamespace {
template<typename T>
class __NetworkPlayerModel_1____c;
}
namespace GlobalNamespace {
template<typename T>
class __NetworkPlayerModel_1____c__DisplayClass59_0;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type T>
class NetworkPlayerModel_1<T>;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type T>
class __NetworkPlayerModel_1__JoinMatchmakingPartyConfig<T>;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type T>
class __NetworkPlayerModel_1__NetworkPlayer<T>;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type T>
class __NetworkPlayerModel_1__NetworkServer<T>;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type T>
class __NetworkPlayerModel_1__StartClientPartyConfig<T>;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type T>
class __NetworkPlayerModel_1___GetOtherPlayers_d__58<T>;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type T>
class __NetworkPlayerModel_1___GetPartyPlayers_d__57<T>;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type T>
class __NetworkPlayerModel_1____c<T>;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type T>
class __NetworkPlayerModel_1____c__DisplayClass59_0<T>;
}
namespace GlobalNamespace {
template<typename T>
struct __NetworkPlayerModel_1___InitAuthenticationTokenProvider_d__56;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type T>
struct __NetworkPlayerModel_1___InitAuthenticationTokenProvider_d__56<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::NetworkPlayerModel_1);
MARK_GEN_REF_PTR_T(::GlobalNamespace::__NetworkPlayerModel_1__JoinMatchmakingPartyConfig);
MARK_GEN_REF_PTR_T(::GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer);
MARK_GEN_REF_PTR_T(::GlobalNamespace::__NetworkPlayerModel_1__NetworkServer);
MARK_GEN_REF_PTR_T(::GlobalNamespace::__NetworkPlayerModel_1__StartClientPartyConfig);
MARK_GEN_REF_PTR_T(::GlobalNamespace::__NetworkPlayerModel_1___GetOtherPlayers_d__58);
MARK_GEN_REF_PTR_T(::GlobalNamespace::__NetworkPlayerModel_1___GetPartyPlayers_d__57);
MARK_GEN_REF_PTR_T(::GlobalNamespace::__NetworkPlayerModel_1____c);
MARK_GEN_REF_PTR_T(::GlobalNamespace::__NetworkPlayerModel_1____c__DisplayClass59_0);
MARK_GEN_VAL_T(::GlobalNamespace::__NetworkPlayerModel_1___InitAuthenticationTokenProvider_d__56);
// Type: ::NetworkPlayer
// Type: ::JoinMatchmakingPartyConfig
// Type: ::StartClientPartyConfig
// Type: ::NetworkServer
// Type: ::<InitAuthenticationTokenProvider>d__56
// Type: ::<GetPartyPlayers>d__57
// Type: ::<GetOtherPlayers>d__58
// Type: ::<>c__DisplayClass59_0
// Type: ::<>c
// Type: ::NetworkPlayerModel`1
// Type: ::NetworkPlayer
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14953))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14953), inst: 2 })
// CS Name: ::NetworkPlayerModel`1::NetworkPlayer<T>*
class CORDL_TYPE __NetworkPlayerModel_1__NetworkPlayer<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _playerModel offset 0x10
 __declspec(property(get=__get__playerModel, put=__set__playerModel)) ::GlobalNamespace::NetworkPlayerModel_1<T>*  _playerModel;

/// @brief Field _connectedPlayer offset 0x18
 __declspec(property(get=__get__connectedPlayer, put=__set__connectedPlayer)) ::GlobalNamespace::IConnectedPlayer*  _connectedPlayer;

 __declspec(property(get=get_userId)) ::StringW  userId;

 __declspec(property(get=get_userName)) ::StringW  userName;

 __declspec(property(get=get_isMe)) bool  isMe;

 __declspec(property(get=get_sortIndex)) int32_t  sortIndex;

 __declspec(property(get=get_currentPartySize)) int32_t  currentPartySize;

 __declspec(property(get=get_selectionMask)) ::GlobalNamespace::BeatmapLevelSelectionMask  selectionMask;

 __declspec(property(get=get_configuration)) ::GlobalNamespace::GameplayServerConfiguration  configuration;

 __declspec(property(get=get_isMyPartyOwner)) bool  isMyPartyOwner;

 __declspec(property(get=get_connectedPlayer)) ::GlobalNamespace::IConnectedPlayer*  connectedPlayer;

 __declspec(property(get=get_canJoin)) bool  canJoin;

 __declspec(property(get=get_requiresPassword)) bool  requiresPassword;

 __declspec(property(get=get_isWaitingOnJoin)) bool  isWaitingOnJoin;

 __declspec(property(get=get_canInvite)) bool  canInvite;

 __declspec(property(get=get_isWaitingOnInvite)) bool  isWaitingOnInvite;

 __declspec(property(get=get_canKick)) bool  canKick;

 __declspec(property(get=get_canLeave)) bool  canLeave;

 __declspec(property(get=get_canBlock)) bool  canBlock;

 __declspec(property(get=get_canUnblock)) bool  canUnblock;

/// @brief Convert operator to "::GlobalNamespace::INetworkPlayer"
constexpr operator  ::GlobalNamespace::INetworkPlayer*() noexcept;

constexpr void __set__playerModel(::GlobalNamespace::NetworkPlayerModel_1<T>*  value) ;

constexpr ::GlobalNamespace::NetworkPlayerModel_1<T>* __get__playerModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NetworkPlayerModel_1<T>*> __get__playerModel() const;

constexpr void __set__connectedPlayer(::GlobalNamespace::IConnectedPlayer*  value) ;

constexpr ::GlobalNamespace::IConnectedPlayer* __get__connectedPlayer() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> __get__connectedPlayer() const;

static inline ::GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>* New_ctor(::GlobalNamespace::NetworkPlayerModel_1<T>*  playerModel, ::GlobalNamespace::IConnectedPlayer*  connectedPlayer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::GlobalNamespace::NetworkPlayerModel_1<T>*  playerModel, ::GlobalNamespace::IConnectedPlayer*  connectedPlayer) ;

/// @brief Method get_userId addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::StringW get_userId() ;

/// @brief Method get_userName addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::StringW get_userName() ;

/// @brief Method get_isMe addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool get_isMe() ;

/// @brief Method get_sortIndex addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_sortIndex() ;

/// @brief Method get_currentPartySize addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_currentPartySize() ;

/// @brief Method get_selectionMask addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::GlobalNamespace::BeatmapLevelSelectionMask get_selectionMask() ;

/// @brief Method get_configuration addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::GlobalNamespace::GameplayServerConfiguration get_configuration() ;

/// @brief Method get_isMyPartyOwner addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool get_isMyPartyOwner() ;

/// @brief Method get_connectedPlayer addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::GlobalNamespace::IConnectedPlayer* get_connectedPlayer() ;

/// @brief Method get_canJoin addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool get_canJoin() ;

/// @brief Method Join addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Join() ;

/// @brief Method get_requiresPassword addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool get_requiresPassword() ;

/// @brief Method Join addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Join(::StringW  password) ;

/// @brief Method get_isWaitingOnJoin addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool get_isWaitingOnJoin() ;

/// @brief Method get_canInvite addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool get_canInvite() ;

/// @brief Method Invite addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Invite() ;

/// @brief Method get_isWaitingOnInvite addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool get_isWaitingOnInvite() ;

/// @brief Method get_canKick addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool get_canKick() ;

/// @brief Method Kick addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Kick() ;

/// @brief Method get_canLeave addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool get_canLeave() ;

/// @brief Method Leave addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Leave() ;

/// @brief Method get_canBlock addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool get_canBlock() ;

/// @brief Method Block addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Block() ;

/// @brief Method get_canUnblock addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool get_canUnblock() ;

/// @brief Method Unblock addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Unblock() ;

/// @brief Method SendJoinResponse addr 0x0 size 0xffffffffffffffff virtual true final true
inline void SendJoinResponse(bool  accept) ;

/// @brief Method SendInviteResponse addr 0x0 size 0xffffffffffffffff virtual true final true
inline void SendInviteResponse(bool  accept) ;

// Ctor Parameters [CppParam { name: "", ty: "__NetworkPlayerModel_1__NetworkPlayer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__NetworkPlayerModel_1__NetworkPlayer(__NetworkPlayerModel_1__NetworkPlayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__NetworkPlayerModel_1__NetworkPlayer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__NetworkPlayerModel_1__NetworkPlayer(__NetworkPlayerModel_1__NetworkPlayer const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __NetworkPlayerModel_1__NetworkPlayer()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::JoinMatchmakingPartyConfig
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14937)), TypeDefinitionIndex(TypeDefinitionIndex(14954))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14954), inst: 2 })
// CS Name: ::NetworkPlayerModel`1::JoinMatchmakingPartyConfig<T>*
class CORDL_TYPE __NetworkPlayerModel_1__JoinMatchmakingPartyConfig<T> : public ::GlobalNamespace::__BaseNetworkPlayerModel__PartyConfig {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x68};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x68 - sizeof(::GlobalNamespace::__BaseNetworkPlayerModel__PartyConfig)]{};

/// @brief Field secret offset 0x58
 __declspec(property(get=__get_secret, put=__set_secret)) ::StringW  secret;

/// @brief Field code offset 0x60
 __declspec(property(get=__get_code, put=__set_code)) ::StringW  code;

/// @brief Convert operator to "::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::GlobalNamespace::NetworkPlayerModel_1<T>*>"
constexpr operator  ::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::GlobalNamespace::NetworkPlayerModel_1<T>*>*() noexcept;

constexpr void __set_secret(::StringW  value) ;

constexpr ::StringW& __get_secret() ;

constexpr ::StringW const& __get_secret() const;

constexpr void __set_code(::StringW  value) ;

constexpr ::StringW& __get_code() ;

constexpr ::StringW const& __get_code() const;

static inline ::GlobalNamespace::__NetworkPlayerModel_1__JoinMatchmakingPartyConfig<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__NetworkPlayerModel_1__JoinMatchmakingPartyConfig", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__NetworkPlayerModel_1__JoinMatchmakingPartyConfig(__NetworkPlayerModel_1__JoinMatchmakingPartyConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__NetworkPlayerModel_1__JoinMatchmakingPartyConfig", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__NetworkPlayerModel_1__JoinMatchmakingPartyConfig(__NetworkPlayerModel_1__JoinMatchmakingPartyConfig const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __NetworkPlayerModel_1__JoinMatchmakingPartyConfig()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::StartClientPartyConfig
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14937)), TypeDefinitionIndex(TypeDefinitionIndex(14955))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14955), inst: 2 })
// CS Name: ::NetworkPlayerModel`1::StartClientPartyConfig<T>*
class CORDL_TYPE __NetworkPlayerModel_1__StartClientPartyConfig<T> : public ::GlobalNamespace::__BaseNetworkPlayerModel__PartyConfig {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::GlobalNamespace::__BaseNetworkPlayerModel__PartyConfig)]{};

/// @brief Convert operator to "::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::GlobalNamespace::NetworkPlayerModel_1<T>*>"
constexpr operator  ::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::GlobalNamespace::NetworkPlayerModel_1<T>*>*() noexcept;

static inline ::GlobalNamespace::__NetworkPlayerModel_1__StartClientPartyConfig<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__NetworkPlayerModel_1__StartClientPartyConfig", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__NetworkPlayerModel_1__StartClientPartyConfig(__NetworkPlayerModel_1__StartClientPartyConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__NetworkPlayerModel_1__StartClientPartyConfig", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__NetworkPlayerModel_1__StartClientPartyConfig(__NetworkPlayerModel_1__StartClientPartyConfig const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __NetworkPlayerModel_1__StartClientPartyConfig()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::NetworkServer
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14956)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14956), inst: 2 })
// CS Name: ::NetworkPlayerModel`1::NetworkServer<T>*
class CORDL_TYPE __NetworkPlayerModel_1__NetworkServer<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x68};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x68 - sizeof(::System::Object)]{};

/// @brief Field _playerModel offset 0x10
 __declspec(property(get=__get__playerModel, put=__set__playerModel)) ::GlobalNamespace::NetworkPlayerModel_1<T>*  _playerModel;

/// @brief Field _code offset 0x18
 __declspec(property(get=__get__code, put=__set__code)) ::StringW  _code;

/// @brief Field _selectionMask offset 0x20
 __declspec(property(get=__get__selectionMask, put=__set__selectionMask)) ::GlobalNamespace::BeatmapLevelSelectionMask  _selectionMask;

/// @brief Field _configuration offset 0x48
 __declspec(property(get=__get__configuration, put=__set__configuration)) ::GlobalNamespace::GameplayServerConfiguration  _configuration;

/// @brief Field _currentPlayerCount offset 0x60
 __declspec(property(get=__get__currentPlayerCount, put=__set__currentPlayerCount)) int32_t  _currentPlayerCount;

/// @brief Field _lastUpdateTime offset 0x64
 __declspec(property(get=__get__lastUpdateTime, put=__set__lastUpdateTime)) float_t  _lastUpdateTime;

 __declspec(property(get=INetworkPlayer_get_userId)) ::StringW  INetworkPlayer_userId;

 __declspec(property(get=get_code)) ::StringW  code;

 __declspec(property(get=INetworkPlayer_get_userName)) ::StringW  INetworkPlayer_userName;

 __declspec(property(get=get_serverName)) ::StringW  serverName;

 __declspec(property(get=get_isMe)) bool  isMe;

 __declspec(property(get=get_currentPartySize)) int32_t  currentPartySize;

 __declspec(property(get=get_selectionMask)) ::GlobalNamespace::BeatmapLevelSelectionMask  selectionMask;

 __declspec(property(get=get_configuration)) ::GlobalNamespace::GameplayServerConfiguration  configuration;

 __declspec(property(get=get_connectedPlayer)) ::GlobalNamespace::IConnectedPlayer*  connectedPlayer;

 __declspec(property(get=get_isMyPartyOwner)) bool  isMyPartyOwner;

 __declspec(property(get=get_hasTimedOut)) bool  hasTimedOut;

 __declspec(property(get=get_canJoin)) bool  canJoin;

 __declspec(property(get=get_requiresPassword)) bool  requiresPassword;

 __declspec(property(get=get_isWaitingOnJoin)) bool  isWaitingOnJoin;

 __declspec(property(get=get_canInvite)) bool  canInvite;

 __declspec(property(get=get_isWaitingOnInvite)) bool  isWaitingOnInvite;

 __declspec(property(get=get_canKick)) bool  canKick;

 __declspec(property(get=get_canLeave)) bool  canLeave;

 __declspec(property(get=get_canBlock)) bool  canBlock;

 __declspec(property(get=get_canUnblock)) bool  canUnblock;

/// @brief Convert operator to "::GlobalNamespace::INetworkPlayer"
constexpr operator  ::GlobalNamespace::INetworkPlayer*() noexcept;

constexpr void __set__playerModel(::GlobalNamespace::NetworkPlayerModel_1<T>*  value) ;

constexpr ::GlobalNamespace::NetworkPlayerModel_1<T>* __get__playerModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NetworkPlayerModel_1<T>*> __get__playerModel() const;

constexpr void __set__code(::StringW  value) ;

constexpr ::StringW& __get__code() ;

constexpr ::StringW const& __get__code() const;

constexpr void __set__selectionMask(::GlobalNamespace::BeatmapLevelSelectionMask  value) ;

constexpr ::GlobalNamespace::BeatmapLevelSelectionMask& __get__selectionMask() ;

constexpr ::GlobalNamespace::BeatmapLevelSelectionMask const& __get__selectionMask() const;

constexpr void __set__configuration(::GlobalNamespace::GameplayServerConfiguration  value) ;

constexpr ::GlobalNamespace::GameplayServerConfiguration& __get__configuration() ;

constexpr ::GlobalNamespace::GameplayServerConfiguration const& __get__configuration() const;

constexpr void __set__currentPlayerCount(int32_t  value) ;

constexpr int32_t& __get__currentPlayerCount() ;

constexpr int32_t const& __get__currentPlayerCount() const;

constexpr void __set__lastUpdateTime(float_t  value) ;

constexpr float_t& __get__lastUpdateTime() ;

constexpr float_t const& __get__lastUpdateTime() const;

static inline ::GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>* New_ctor(::GlobalNamespace::NetworkPlayerModel_1<T>*  playerModel, ::StringW  code, ::GlobalNamespace::BeatmapLevelSelectionMask  selectionMask, ::GlobalNamespace::GameplayServerConfiguration  configuration) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::GlobalNamespace::NetworkPlayerModel_1<T>*  playerModel, ::StringW  code, ::GlobalNamespace::BeatmapLevelSelectionMask  selectionMask, ::GlobalNamespace::GameplayServerConfiguration  configuration) ;

/// @brief Method Update addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Update(int32_t  currentPlayerCount) ;

/// @brief Method INetworkPlayer.get_userId addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::StringW INetworkPlayer_get_userId() ;

/// @brief Method get_code addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::StringW get_code() ;

/// @brief Method INetworkPlayer.get_userName addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::StringW INetworkPlayer_get_userName() ;

/// @brief Method get_serverName addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::StringW get_serverName() ;

/// @brief Method get_isMe addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool get_isMe() ;

/// @brief Method get_currentPartySize addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_currentPartySize() ;

/// @brief Method get_selectionMask addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::GlobalNamespace::BeatmapLevelSelectionMask get_selectionMask() ;

/// @brief Method get_configuration addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::GlobalNamespace::GameplayServerConfiguration get_configuration() ;

/// @brief Method get_connectedPlayer addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::GlobalNamespace::IConnectedPlayer* get_connectedPlayer() ;

/// @brief Method get_isMyPartyOwner addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool get_isMyPartyOwner() ;

/// @brief Method get_hasTimedOut addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_hasTimedOut() ;

/// @brief Method get_canJoin addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool get_canJoin() ;

/// @brief Method Join addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Join() ;

/// @brief Method get_requiresPassword addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool get_requiresPassword() ;

/// @brief Method Join addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Join(::StringW  password) ;

/// @brief Method get_isWaitingOnJoin addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool get_isWaitingOnJoin() ;

/// @brief Method get_canInvite addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool get_canInvite() ;

/// @brief Method Invite addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Invite() ;

/// @brief Method get_isWaitingOnInvite addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool get_isWaitingOnInvite() ;

/// @brief Method get_canKick addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool get_canKick() ;

/// @brief Method Kick addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Kick() ;

/// @brief Method get_canLeave addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool get_canLeave() ;

/// @brief Method Leave addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Leave() ;

/// @brief Method get_canBlock addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool get_canBlock() ;

/// @brief Method Block addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Block() ;

/// @brief Method get_canUnblock addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool get_canUnblock() ;

/// @brief Method Unblock addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Unblock() ;

/// @brief Method SendJoinResponse addr 0x0 size 0xffffffffffffffff virtual true final true
inline void SendJoinResponse(bool  accept) ;

/// @brief Method SendInviteResponse addr 0x0 size 0xffffffffffffffff virtual true final true
inline void SendInviteResponse(bool  accept) ;

// Ctor Parameters [CppParam { name: "", ty: "__NetworkPlayerModel_1__NetworkServer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__NetworkPlayerModel_1__NetworkServer(__NetworkPlayerModel_1__NetworkServer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__NetworkPlayerModel_1__NetworkServer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__NetworkPlayerModel_1__NetworkServer(__NetworkPlayerModel_1__NetworkServer const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __NetworkPlayerModel_1__NetworkServer()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<InitAuthenticationTokenProvider>d__56
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14957))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14957), inst: 2 })
// CS Name: ::NetworkPlayerModel`1::<InitAuthenticationTokenProvider>d__56<T>
struct CORDL_TYPE __NetworkPlayerModel_1___InitAuthenticationTokenProvider_d__56<T> : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IAuthenticationTokenProvider*>  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::NetworkPlayerModel_1<T>*  __4__this;

/// @brief Field <>u__1 offset 0x28
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IAuthenticationTokenProvider*>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IAuthenticationTokenProvider*>& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IAuthenticationTokenProvider*> const& __get___t__builder() const;

constexpr void __set___4__this(::GlobalNamespace::NetworkPlayerModel_1<T>*  value) ;

constexpr ::GlobalNamespace::NetworkPlayerModel_1<T>* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NetworkPlayerModel_1<T>*> __get___4__this() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*> const& __get___u__1() const;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IAuthenticationTokenProvider*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::NetworkPlayerModel_1<T>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*>", modifiers: "", def_value: None }]
constexpr __NetworkPlayerModel_1___InitAuthenticationTokenProvider_d__56(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IAuthenticationTokenProvider*>  __t__builder, ::GlobalNamespace::NetworkPlayerModel_1<T>*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __NetworkPlayerModel_1___InitAuthenticationTokenProvider_d__56(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __NetworkPlayerModel_1___InitAuthenticationTokenProvider_d__56()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<GetPartyPlayers>d__57
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14958))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14958), inst: 2 })
// CS Name: ::NetworkPlayerModel`1::<GetPartyPlayers>d__57<T>*
class CORDL_TYPE __NetworkPlayerModel_1___GetPartyPlayers_d__57<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Object)]{};

/// @brief Field <>1__state offset 0x10
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current offset 0x18
 __declspec(property(get=__get___2__current, put=__set___2__current)) ::GlobalNamespace::INetworkPlayer*  __2__current;

/// @brief Field <>l__initialThreadId offset 0x20
 __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field <>4__this offset 0x28
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::NetworkPlayerModel_1<T>*  __4__this;

/// @brief Field <i>5__2 offset 0x30
 __declspec(property(get=__get__i_5__2, put=__set__i_5__2)) int32_t  _i_5__2;

 __declspec(property(get=System_Collections_Generic_IEnumerator_INetworkPlayer__get_Current)) ::GlobalNamespace::INetworkPlayer*  System_Collections_Generic_IEnumerator_INetworkPlayer__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___2__current(::GlobalNamespace::INetworkPlayer*  value) ;

constexpr ::GlobalNamespace::INetworkPlayer* __get___2__current() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::INetworkPlayer*> __get___2__current() const;

constexpr void __set___l__initialThreadId(int32_t  value) ;

constexpr int32_t& __get___l__initialThreadId() ;

constexpr int32_t const& __get___l__initialThreadId() const;

constexpr void __set___4__this(::GlobalNamespace::NetworkPlayerModel_1<T>*  value) ;

constexpr ::GlobalNamespace::NetworkPlayerModel_1<T>* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NetworkPlayerModel_1<T>*> __get___4__this() const;

constexpr void __set__i_5__2(int32_t  value) ;

constexpr int32_t& __get__i_5__2() ;

constexpr int32_t const& __get__i_5__2() const;

static inline ::GlobalNamespace::__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<INetworkPlayer>.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::GlobalNamespace::INetworkPlayer* System_Collections_Generic_IEnumerator_INetworkPlayer__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<INetworkPlayer>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>* System_Collections_Generic_IEnumerable_INetworkPlayer__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

// Ctor Parameters [CppParam { name: "", ty: "__NetworkPlayerModel_1___GetPartyPlayers_d__57", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__NetworkPlayerModel_1___GetPartyPlayers_d__57(__NetworkPlayerModel_1___GetPartyPlayers_d__57 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__NetworkPlayerModel_1___GetPartyPlayers_d__57", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__NetworkPlayerModel_1___GetPartyPlayers_d__57(__NetworkPlayerModel_1___GetPartyPlayers_d__57 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __NetworkPlayerModel_1___GetPartyPlayers_d__57()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<GetOtherPlayers>d__58
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14959)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14959), inst: 2 })
// CS Name: ::NetworkPlayerModel`1::<GetOtherPlayers>d__58<T>*
class CORDL_TYPE __NetworkPlayerModel_1___GetOtherPlayers_d__58<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::System::Object)]{};

/// @brief Field <>1__state offset 0x10
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current offset 0x18
 __declspec(property(get=__get___2__current, put=__set___2__current)) ::GlobalNamespace::INetworkPlayer*  __2__current;

/// @brief Field <>l__initialThreadId offset 0x20
 __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field <>4__this offset 0x28
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::NetworkPlayerModel_1<T>*  __4__this;

/// @brief Field <>7__wrap1 offset 0x30
 __declspec(property(get=__get___7__wrap1, put=__set___7__wrap1)) ::System::Collections::Generic::__List_1__Enumerator<::GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>*>  __7__wrap1;

 __declspec(property(get=System_Collections_Generic_IEnumerator_INetworkPlayer__get_Current)) ::GlobalNamespace::INetworkPlayer*  System_Collections_Generic_IEnumerator_INetworkPlayer__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___2__current(::GlobalNamespace::INetworkPlayer*  value) ;

constexpr ::GlobalNamespace::INetworkPlayer* __get___2__current() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::INetworkPlayer*> __get___2__current() const;

constexpr void __set___l__initialThreadId(int32_t  value) ;

constexpr int32_t& __get___l__initialThreadId() ;

constexpr int32_t const& __get___l__initialThreadId() const;

constexpr void __set___4__this(::GlobalNamespace::NetworkPlayerModel_1<T>*  value) ;

constexpr ::GlobalNamespace::NetworkPlayerModel_1<T>* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NetworkPlayerModel_1<T>*> __get___4__this() const;

constexpr void __set___7__wrap1(::System::Collections::Generic::__List_1__Enumerator<::GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>*>  value) ;

constexpr ::System::Collections::Generic::__List_1__Enumerator<::GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>*>& __get___7__wrap1() ;

constexpr ::System::Collections::Generic::__List_1__Enumerator<::GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>*> const& __get___7__wrap1() const;

static inline ::GlobalNamespace::__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method <>m__Finally1 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void __m__Finally1() ;

/// @brief Method System.Collections.Generic.IEnumerator<INetworkPlayer>.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::GlobalNamespace::INetworkPlayer* System_Collections_Generic_IEnumerator_INetworkPlayer__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<INetworkPlayer>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>* System_Collections_Generic_IEnumerable_INetworkPlayer__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

// Ctor Parameters [CppParam { name: "", ty: "__NetworkPlayerModel_1___GetOtherPlayers_d__58", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__NetworkPlayerModel_1___GetOtherPlayers_d__58(__NetworkPlayerModel_1___GetOtherPlayers_d__58 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__NetworkPlayerModel_1___GetOtherPlayers_d__58", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__NetworkPlayerModel_1___GetOtherPlayers_d__58(__NetworkPlayerModel_1___GetOtherPlayers_d__58 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __NetworkPlayerModel_1___GetOtherPlayers_d__58()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass59_0
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14960))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14960), inst: 2 })
// CS Name: ::NetworkPlayerModel`1::<>c__DisplayClass59_0<T>*
class CORDL_TYPE __NetworkPlayerModel_1____c__DisplayClass59_0<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x60};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x60 - sizeof(::System::Object)]{};

/// @brief Field clearCurrentList offset 0x10
 __declspec(property(get=__get_clearCurrentList, put=__set_clearCurrentList)) bool  clearCurrentList;

/// @brief Field <>4__this offset 0x18
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::NetworkPlayerModel_1<T>*  __4__this;

/// @brief Field localSelectionMask offset 0x20
 __declspec(property(get=__get_localSelectionMask, put=__set_localSelectionMask)) ::GlobalNamespace::BeatmapLevelSelectionMask  localSelectionMask;

/// @brief Field localConfiguration offset 0x48
 __declspec(property(get=__get_localConfiguration, put=__set_localConfiguration)) ::GlobalNamespace::GameplayServerConfiguration  localConfiguration;

constexpr void __set_clearCurrentList(bool  value) ;

constexpr bool& __get_clearCurrentList() ;

constexpr bool const& __get_clearCurrentList() const;

constexpr void __set___4__this(::GlobalNamespace::NetworkPlayerModel_1<T>*  value) ;

constexpr ::GlobalNamespace::NetworkPlayerModel_1<T>* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NetworkPlayerModel_1<T>*> __get___4__this() const;

constexpr void __set_localSelectionMask(::GlobalNamespace::BeatmapLevelSelectionMask  value) ;

constexpr ::GlobalNamespace::BeatmapLevelSelectionMask& __get_localSelectionMask() ;

constexpr ::GlobalNamespace::BeatmapLevelSelectionMask const& __get_localSelectionMask() const;

constexpr void __set_localConfiguration(::GlobalNamespace::GameplayServerConfiguration  value) ;

constexpr ::GlobalNamespace::GameplayServerConfiguration& __get_localConfiguration() ;

constexpr ::GlobalNamespace::GameplayServerConfiguration const& __get_localConfiguration() const;

static inline ::GlobalNamespace::__NetworkPlayerModel_1____c__DisplayClass59_0<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <Refresh>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _Refresh_b__0(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PublicServerInfo>*  servers) ;

/// @brief Method <Refresh>b__1 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _Refresh_b__1(::GlobalNamespace::ConnectionFailedReason  reason) ;

// Ctor Parameters [CppParam { name: "", ty: "__NetworkPlayerModel_1____c__DisplayClass59_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__NetworkPlayerModel_1____c__DisplayClass59_0(__NetworkPlayerModel_1____c__DisplayClass59_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__NetworkPlayerModel_1____c__DisplayClass59_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__NetworkPlayerModel_1____c__DisplayClass59_0(__NetworkPlayerModel_1____c__DisplayClass59_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __NetworkPlayerModel_1____c__DisplayClass59_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14961))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14961), inst: 2 })
// CS Name: ::NetworkPlayerModel`1::<>c<T>*
class CORDL_TYPE __NetworkPlayerModel_1____c<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::GlobalNamespace::__NetworkPlayerModel_1____c<T>*  value) ;

static inline ::GlobalNamespace::__NetworkPlayerModel_1____c<T>* getStaticF___9() ;

static inline void setStaticF___9__71_0(::System::Comparison_1<::GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>*>*  value) ;

static inline ::System::Comparison_1<::GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>*>* getStaticF___9__71_0() ;

static inline ::GlobalNamespace::__NetworkPlayerModel_1____c<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <PlayerOrderChanged>b__71_0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t _PlayerOrderChanged_b__71_0(::GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>*  a, ::GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>*  b) ;

// Ctor Parameters [CppParam { name: "", ty: "__NetworkPlayerModel_1____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__NetworkPlayerModel_1____c(__NetworkPlayerModel_1____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__NetworkPlayerModel_1____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__NetworkPlayerModel_1____c(__NetworkPlayerModel_1____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __NetworkPlayerModel_1____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__71_0


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::NetworkPlayerModel`1
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14962)), TypeDefinitionIndex(TypeDefinitionIndex(14940))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14962), inst: 2 })
// CS Name: ::NetworkPlayerModel`1<T>*
class CORDL_TYPE NetworkPlayerModel_1<T> : public ::GlobalNamespace::BaseNetworkPlayerModel {
public:
// Declarations
using __c = ::GlobalNamespace::__NetworkPlayerModel_1____c<T>;

using __c__DisplayClass59_0 = ::GlobalNamespace::__NetworkPlayerModel_1____c__DisplayClass59_0<T>;

using _GetOtherPlayers_d__58 = ::GlobalNamespace::__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>;

using _GetPartyPlayers_d__57 = ::GlobalNamespace::__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>;

using _InitAuthenticationTokenProvider_d__56 = ::GlobalNamespace::__NetworkPlayerModel_1___InitAuthenticationTokenProvider_d__56<T>;

using NetworkServer = ::GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>;

using StartClientPartyConfig = ::GlobalNamespace::__NetworkPlayerModel_1__StartClientPartyConfig<T>;

using JoinMatchmakingPartyConfig = ::GlobalNamespace::__NetworkPlayerModel_1__JoinMatchmakingPartyConfig<T>;

using NetworkPlayer = ::GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x100};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x100 - sizeof(::GlobalNamespace::BaseNetworkPlayerModel)]{};

/// @brief Field kServerRefreshFrequency offset 0x0
static constexpr float_t  kServerRefreshFrequency{10.0};

/// @brief Field kServerTimeoutPeriod offset 0x0
static constexpr float_t  kServerTimeoutPeriod{21.0};

/// @brief Field _platformUserModel offset 0xa0
 __declspec(property(get=__get__platformUserModel, put=__set__platformUserModel)) ::GlobalNamespace::IPlatformUserModel*  _platformUserModel;

/// @brief Field _authenticationTokenProviderTask offset 0xa8
 __declspec(property(get=__get__authenticationTokenProviderTask, put=__set__authenticationTokenProviderTask)) ::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>*  _authenticationTokenProviderTask;

/// @brief Field _localPlayer offset 0xb0
 __declspec(property(get=__get__localPlayer, put=__set__localPlayer)) ::GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>*  _localPlayer;

/// @brief Field _networkingFailed offset 0xb8
 __declspec(property(get=__get__networkingFailed, put=__set__networkingFailed)) bool  _networkingFailed;

/// @brief Field _masterServerUnreachable offset 0xb9
 __declspec(property(get=__get__masterServerUnreachable, put=__set__masterServerUnreachable)) bool  _masterServerUnreachable;

/// @brief Field _currentPlayerCount offset 0xbc
 __declspec(property(get=__get__currentPlayerCount, put=__set__currentPlayerCount)) int32_t  _currentPlayerCount;

/// @brief Field partySizeChangedEvent offset 0xc0
 __declspec(property(get=__get_partySizeChangedEvent, put=__set_partySizeChangedEvent)) ::System::Action_1<int32_t>*  partySizeChangedEvent;

/// @brief Field partyRefreshingEvent offset 0xc8
 __declspec(property(get=__get_partyRefreshingEvent, put=__set_partyRefreshingEvent)) ::System::Action*  partyRefreshingEvent;

/// @brief Field partyChangedEvent offset 0xd0
 __declspec(property(get=__get_partyChangedEvent, put=__set_partyChangedEvent)) ::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*  partyChangedEvent;

/// @brief Field joinRequestedEvent offset 0xd8
 __declspec(property(get=__get_joinRequestedEvent, put=__set_joinRequestedEvent)) ::System::Action_1<::GlobalNamespace::INetworkPlayer*>*  joinRequestedEvent;

/// @brief Field inviteRequestedEvent offset 0xe0
 __declspec(property(get=__get_inviteRequestedEvent, put=__set_inviteRequestedEvent)) ::System::Action_1<::GlobalNamespace::INetworkPlayer*>*  inviteRequestedEvent;

/// @brief Field _partyPlayers offset 0xe8
 __declspec(property(get=__get__partyPlayers, put=__set__partyPlayers)) ::System::Collections::Generic::List_1<::GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>*>*  _partyPlayers;

/// @brief Field _publicServers offset 0xf0
 __declspec(property(get=__get__publicServers, put=__set__publicServers)) ::System::Collections::Generic::List_1<::GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>*>*  _publicServers;

/// @brief Field _lastServerRefresh offset 0xf8
 __declspec(property(get=__get__lastServerRefresh, put=__set__lastServerRefresh)) float_t  _lastServerRefresh;

/// @brief Field _isRefreshing offset 0xfc
 __declspec(property(get=__get__isRefreshing, put=__set__isRefreshing)) bool  _isRefreshing;

/// @brief Field _filterChanged offset 0xfd
 __declspec(property(get=__get__filterChanged, put=__set__filterChanged)) bool  _filterChanged;

 __declspec(property(get=get_authenticationTokenProviderTask)) ::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>*  authenticationTokenProviderTask;

 __declspec(property(get=get_localPlayerIsPartyOwner)) bool  localPlayerIsPartyOwner;

 __declspec(property(get=get_hasNetworkingFailed)) bool  hasNetworkingFailed;

 __declspec(property(get=get_secret)) ::StringW  secret;

 __declspec(property(get=get_code)) ::StringW  code;

 __declspec(property(get=get_partyOwnerId)) ::StringW  partyOwnerId;

 __declspec(property(get=get_currentPartySize)) int32_t  currentPartySize;

 __declspec(property(get=get_publicServers)) ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*  publicServers;

 __declspec(property(get=get_connectionManager)) T  connectionManager;

/// @brief Convert operator to "::GlobalNamespace::INetworkPlayerModel"
constexpr operator  ::GlobalNamespace::INetworkPlayerModel*() noexcept;

constexpr void __set__platformUserModel(::GlobalNamespace::IPlatformUserModel*  value) ;

constexpr ::GlobalNamespace::IPlatformUserModel* __get__platformUserModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPlatformUserModel*> __get__platformUserModel() const;

constexpr void __set__authenticationTokenProviderTask(::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>* __get__authenticationTokenProviderTask() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>*> __get__authenticationTokenProviderTask() const;

constexpr void __set__localPlayer(::GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>*  value) ;

constexpr ::GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>* __get__localPlayer() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>*> __get__localPlayer() const;

constexpr void __set__networkingFailed(bool  value) ;

constexpr bool& __get__networkingFailed() ;

constexpr bool const& __get__networkingFailed() const;

constexpr void __set__masterServerUnreachable(bool  value) ;

constexpr bool& __get__masterServerUnreachable() ;

constexpr bool const& __get__masterServerUnreachable() const;

constexpr void __set__currentPlayerCount(int32_t  value) ;

constexpr int32_t& __get__currentPlayerCount() ;

constexpr int32_t const& __get__currentPlayerCount() const;

constexpr void __set_partySizeChangedEvent(::System::Action_1<int32_t>*  value) ;

constexpr ::System::Action_1<int32_t>* __get_partySizeChangedEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<int32_t>*> __get_partySizeChangedEvent() const;

constexpr void __set_partyRefreshingEvent(::System::Action*  value) ;

constexpr ::System::Action* __get_partyRefreshingEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_partyRefreshingEvent() const;

constexpr void __set_partyChangedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*  value) ;

constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* __get_partyChangedEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*> __get_partyChangedEvent() const;

constexpr void __set_joinRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>*  value) ;

constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayer*>* __get_joinRequestedEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::INetworkPlayer*>*> __get_joinRequestedEvent() const;

constexpr void __set_inviteRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>*  value) ;

constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayer*>* __get_inviteRequestedEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::INetworkPlayer*>*> __get_inviteRequestedEvent() const;

constexpr void __set__partyPlayers(::System::Collections::Generic::List_1<::GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>*>* __get__partyPlayers() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>*>*> __get__partyPlayers() const;

constexpr void __set__publicServers(::System::Collections::Generic::List_1<::GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>*>* __get__publicServers() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>*>*> __get__publicServers() const;

constexpr void __set__lastServerRefresh(float_t  value) ;

constexpr float_t& __get__lastServerRefresh() ;

constexpr float_t const& __get__lastServerRefresh() const;

constexpr void __set__isRefreshing(bool  value) ;

constexpr bool& __get__isRefreshing() ;

constexpr bool const& __get__isRefreshing() const;

constexpr void __set__filterChanged(bool  value) ;

constexpr bool& __get__filterChanged() ;

constexpr bool const& __get__filterChanged() const;

/// @brief Method get_authenticationTokenProviderTask addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>* get_authenticationTokenProviderTask() ;

/// @brief Method add_partySizeChangedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
inline void add_partySizeChangedEvent(::System::Action_1<int32_t>*  value) ;

/// @brief Method remove_partySizeChangedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
inline void remove_partySizeChangedEvent(::System::Action_1<int32_t>*  value) ;

/// @brief Method add_partyRefreshingEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void add_partyRefreshingEvent(::System::Action*  value) ;

/// @brief Method remove_partyRefreshingEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void remove_partyRefreshingEvent(::System::Action*  value) ;

/// @brief Method add_partyChangedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
inline void add_partyChangedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*  value) ;

/// @brief Method remove_partyChangedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
inline void remove_partyChangedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*  value) ;

/// @brief Method add_joinRequestedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
inline void add_joinRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>*  value) ;

/// @brief Method remove_joinRequestedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
inline void remove_joinRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>*  value) ;

/// @brief Method add_inviteRequestedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
inline void add_inviteRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>*  value) ;

/// @brief Method remove_inviteRequestedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
inline void remove_inviteRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>*  value) ;

/// @brief Method get_localPlayerIsPartyOwner addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool get_localPlayerIsPartyOwner() ;

/// @brief Method get_hasNetworkingFailed addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool get_hasNetworkingFailed() ;

/// @brief Method get_secret addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW get_secret() ;

/// @brief Method get_code addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW get_code() ;

/// @brief Method get_partyOwnerId addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW get_partyOwnerId() ;

/// @brief Method get_currentPartySize addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t get_currentPartySize() ;

/// @brief Method get_publicServers addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* get_publicServers() ;

/// @brief Method get_connectionManager addr 0x0 size 0xffffffffffffffff virtual false final false
inline T get_connectionManager() ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Start() ;

/// @brief Method HandlePlatformUserInfoDidChange addr 0x0 size 0xffffffffffffffff virtual false final false
inline void HandlePlatformUserInfoDidChange(::GlobalNamespace::UserInfo*  newInfo) ;

/// @brief Method Update addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Update() ;

/// @brief Method CreatePartyConnection addr 0x0 size 0xffffffffffffffff virtual true final false
template<typename T2>
inline bool CreatePartyConnection(::GlobalNamespace::INetworkPlayerModelPartyConfig_1<T2>*  config) ;

/// @brief Method GetConnectToServerParams addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::GlobalNamespace::IConnectionInitParams_1<T>* GetConnectToServerParams(::GlobalNamespace::BeatmapLevelSelectionMask  selectionMask, ::GlobalNamespace::GameplayServerConfiguration  configuration, ::StringW  secret, ::StringW  code) ;

/// @brief Method GetStartClientParams addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::GlobalNamespace::IConnectionInitParams_1<T>* GetStartClientParams(::GlobalNamespace::BeatmapLevelSelectionMask  selectionMask, ::GlobalNamespace::GameplayServerConfiguration  configuration) ;

/// @brief Method RefreshPublicServers addr 0x0 size 0xffffffffffffffff virtual true final false
inline void RefreshPublicServers(::GlobalNamespace::BeatmapLevelSelectionMask  localSelectionMask, ::GlobalNamespace::GameplayServerConfiguration  localConfiguration, ::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PublicServerInfo>*>*  onSuccess, ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*  onFailure) ;

/// @brief Method InitAuthenticationTokenProvider addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>* InitAuthenticationTokenProvider() ;

/// @brief Method GetPartyPlayers addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* GetPartyPlayers() ;

/// @brief Method GetOtherPlayers addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* GetOtherPlayers() ;

/// @brief Method Refresh addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Refresh() ;

/// @brief Method HandlePlayersChanged addr 0x0 size 0xffffffffffffffff virtual false final false
inline void HandlePlayersChanged() ;

/// @brief Method HandleInviteRequested addr 0x0 size 0xffffffffffffffff virtual false final false
inline void HandleInviteRequested(::GlobalNamespace::INetworkPlayer*  player) ;

/// @brief Method HandleJoinRequested addr 0x0 size 0xffffffffffffffff virtual false final false
inline void HandleJoinRequested(::GlobalNamespace::INetworkPlayer*  player) ;

/// @brief Method HandlePartyChanged addr 0x0 size 0xffffffffffffffff virtual false final false
inline void HandlePartyChanged(::GlobalNamespace::INetworkPlayerModel*  playerModel) ;

/// @brief Method ResetMasterServerReachability addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ResetMasterServerReachability() ;

/// @brief Method Connected addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Connected() ;

/// @brief Method Disconnected addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Disconnected(::GlobalNamespace::DisconnectedReason  disconnectedReason) ;

/// @brief Method ConnectionFailed addr 0x0 size 0xffffffffffffffff virtual true final false
inline void ConnectionFailed(::GlobalNamespace::ConnectionFailedReason  reason) ;

/// @brief Method PlayerConnected addr 0x0 size 0xffffffffffffffff virtual true final false
inline void PlayerConnected(::GlobalNamespace::IConnectedPlayer*  player) ;

/// @brief Method PlayerDisconnected addr 0x0 size 0xffffffffffffffff virtual true final false
inline void PlayerDisconnected(::GlobalNamespace::IConnectedPlayer*  player) ;

/// @brief Method PlayerStateChanged addr 0x0 size 0xffffffffffffffff virtual true final false
inline void PlayerStateChanged(::GlobalNamespace::IConnectedPlayer*  connectedPlayer) ;

/// @brief Method PlayerOrderChanged addr 0x0 size 0xffffffffffffffff virtual true final false
inline void PlayerOrderChanged(::GlobalNamespace::IConnectedPlayer*  connectedPlayer) ;

/// @brief Method GetPlayer addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>* GetPlayer(::StringW  userId) ;

/// @brief Method GetServer addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>* GetServer(::StringW  code) ;

static inline ::GlobalNamespace::NetworkPlayerModel_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "NetworkPlayerModel_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkPlayerModel_1(NetworkPlayerModel_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkPlayerModel_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkPlayerModel_1(NetworkPlayerModel_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NetworkPlayerModel_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::NetworkPlayerModel_1, "", "NetworkPlayerModel`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__NetworkPlayerModel_1__JoinMatchmakingPartyConfig, "", "NetworkPlayerModel`1/JoinMatchmakingPartyConfig");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer, "", "NetworkPlayerModel`1/NetworkPlayer");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__NetworkPlayerModel_1__NetworkServer, "", "NetworkPlayerModel`1/NetworkServer");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__NetworkPlayerModel_1__StartClientPartyConfig, "", "NetworkPlayerModel`1/StartClientPartyConfig");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__NetworkPlayerModel_1___GetOtherPlayers_d__58, "", "NetworkPlayerModel`1/<GetOtherPlayers>d__58");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__NetworkPlayerModel_1___GetPartyPlayers_d__57, "", "NetworkPlayerModel`1/<GetPartyPlayers>d__57");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__NetworkPlayerModel_1____c, "", "NetworkPlayerModel`1/<>c");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__NetworkPlayerModel_1____c__DisplayClass59_0, "", "NetworkPlayerModel`1/<>c__DisplayClass59_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__NetworkPlayerModel_1___InitAuthenticationTokenProvider_d__56, "", "NetworkPlayerModel`1/<InitAuthenticationTokenProvider>d__56");
