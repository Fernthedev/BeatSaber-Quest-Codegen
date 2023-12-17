#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerSyncStateManager_5)
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
template<typename TStateTable,typename TType,typename TState>
class LocalMultiplayerSyncState_3;
}
namespace GlobalNamespace {
template<typename TStateTable,typename TType,typename TState>
class RemoteMultiplayerSyncState_3;
}
namespace GlobalNamespace {
template<typename T>
class IPacketPool_1;
}
namespace GlobalNamespace {
template<typename TStateTable,typename TType,typename TState,typename TSerializable,typename TDeltaSerializable>
class __MultiplayerSyncStateManager_5____c;
}
namespace GlobalNamespace {
template<typename TStateTable,typename TType,typename TState>
class MultiplayerSyncState_3;
}
namespace GlobalNamespace {
struct __MultiplayerSessionManager__MessageType;
}
namespace GlobalNamespace {
struct NodePoseSyncState;
}
namespace GlobalNamespace {
struct PoseSerializable;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
struct StandardScoreSyncState;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TStateTable,typename TType,typename TState,typename TSerializable,typename TDeltaSerializable>
class MultiplayerSyncStateManager_5;
}
namespace GlobalNamespace {
template<typename TStateTable,typename TType,typename TState,typename TSerializable,typename TDeltaSerializable>
class __MultiplayerSyncStateManager_5____c;
}
namespace GlobalNamespace {
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TSerializable,::il2cpp_utils::il2cpp_reference_type TDeltaSerializable>
class MultiplayerSyncStateManager_5<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable,TSerializable,TDeltaSerializable>;
}
namespace GlobalNamespace {
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TSerializable,::il2cpp_utils::il2cpp_reference_type TDeltaSerializable>
class MultiplayerSyncStateManager_5<::GlobalNamespace::StandardScoreSyncState,TType,int32_t,TSerializable,TDeltaSerializable>;
}
namespace GlobalNamespace {
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TSerializable,::il2cpp_utils::il2cpp_reference_type TDeltaSerializable>
class __MultiplayerSyncStateManager_5____c<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable,TSerializable,TDeltaSerializable>;
}
namespace GlobalNamespace {
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TSerializable,::il2cpp_utils::il2cpp_reference_type TDeltaSerializable>
class __MultiplayerSyncStateManager_5____c<::GlobalNamespace::StandardScoreSyncState,TType,int32_t,TSerializable,TDeltaSerializable>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::MultiplayerSyncStateManager_5);
MARK_GEN_REF_PTR_T(::GlobalNamespace::__MultiplayerSyncStateManager_5____c);
// Type: ::<>c
// Type: ::MultiplayerSyncStateManager`5
// Type: ::<>c
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TSerializable,::il2cpp_utils::il2cpp_reference_type TDeltaSerializable>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14950))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14950), inst: 6123 })
// CS Name: ::MultiplayerSyncStateManager`5::<>c<TStateTable,TType,TState,TSerializable,TDeltaSerializable>*
class CORDL_TYPE __MultiplayerSyncStateManager_5____c<::GlobalNamespace::StandardScoreSyncState,TType,int32_t,TSerializable,TDeltaSerializable> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::GlobalNamespace::__MultiplayerSyncStateManager_5____c<::GlobalNamespace::StandardScoreSyncState,TType,int32_t,TSerializable,TDeltaSerializable>*  value) ;

static inline ::GlobalNamespace::__MultiplayerSyncStateManager_5____c<::GlobalNamespace::StandardScoreSyncState,TType,int32_t,TSerializable,TDeltaSerializable>* getStaticF___9() ;

static inline void setStaticF___9__37_0(::System::Func_2<::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*,int32_t>*  value) ;

static inline ::System::Func_2<::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*,int32_t>* getStaticF___9__37_0() ;

static inline ::GlobalNamespace::__MultiplayerSyncStateManager_5____c<::GlobalNamespace::StandardScoreSyncState,TType,int32_t,TSerializable,TDeltaSerializable>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <HandlePlayerConnected>b__37_0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t _HandlePlayerConnected_b__37_0(::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*  s) ;

// Ctor Parameters [CppParam { name: "", ty: "__MultiplayerSyncStateManager_5____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__MultiplayerSyncStateManager_5____c(__MultiplayerSyncStateManager_5____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__MultiplayerSyncStateManager_5____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__MultiplayerSyncStateManager_5____c(__MultiplayerSyncStateManager_5____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __MultiplayerSyncStateManager_5____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__37_0


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TSerializable,::il2cpp_utils::il2cpp_reference_type TDeltaSerializable>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14950)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14950), inst: 6122 })
// CS Name: ::MultiplayerSyncStateManager`5::<>c<TStateTable,TType,TState,TSerializable,TDeltaSerializable>*
class CORDL_TYPE __MultiplayerSyncStateManager_5____c<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable,TSerializable,TDeltaSerializable> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::GlobalNamespace::__MultiplayerSyncStateManager_5____c<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable,TSerializable,TDeltaSerializable>*  value) ;

static inline ::GlobalNamespace::__MultiplayerSyncStateManager_5____c<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable,TSerializable,TDeltaSerializable>* getStaticF___9() ;

static inline void setStaticF___9__37_0(::System::Func_2<::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*,int32_t>*  value) ;

static inline ::System::Func_2<::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*,int32_t>* getStaticF___9__37_0() ;

static inline ::GlobalNamespace::__MultiplayerSyncStateManager_5____c<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable,TSerializable,TDeltaSerializable>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <HandlePlayerConnected>b__37_0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t _HandlePlayerConnected_b__37_0(::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*  s) ;

// Ctor Parameters [CppParam { name: "", ty: "__MultiplayerSyncStateManager_5____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__MultiplayerSyncStateManager_5____c(__MultiplayerSyncStateManager_5____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__MultiplayerSyncStateManager_5____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__MultiplayerSyncStateManager_5____c(__MultiplayerSyncStateManager_5____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __MultiplayerSyncStateManager_5____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__37_0


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MultiplayerSyncStateManager`5
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TSerializable,::il2cpp_utils::il2cpp_reference_type TDeltaSerializable>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14951)), TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14951), inst: 6123 })
// CS Name: ::MultiplayerSyncStateManager`5<TStateTable,TType,TState,TSerializable,TDeltaSerializable>*
class CORDL_TYPE MultiplayerSyncStateManager_5<::GlobalNamespace::StandardScoreSyncState,TType,int32_t,TSerializable,TDeltaSerializable> : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::GlobalNamespace::__MultiplayerSyncStateManager_5____c<::GlobalNamespace::StandardScoreSyncState, TType, int32_t, TSerializable, TDeltaSerializable>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _multiplayerSessionManager offset 0x18
 __declspec(property(get=__get__multiplayerSessionManager, put=__set__multiplayerSessionManager)) ::GlobalNamespace::IMultiplayerSessionManager*  _multiplayerSessionManager;

/// @brief Field _localState offset 0x20
 __declspec(property(get=__get__localState, put=__set__localState)) ::GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*  _localState;

/// @brief Field _connectedPlayerStates offset 0x28
 __declspec(property(get=__get__connectedPlayerStates, put=__set__connectedPlayerStates)) ::System::Collections::Generic::List_1<::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>*  _connectedPlayerStates;

/// @brief Field _disconnectedPlayerStates offset 0x30
 __declspec(property(get=__get__disconnectedPlayerStates, put=__set__disconnectedPlayerStates)) ::System::Collections::Generic::List_1<::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>*  _disconnectedPlayerStates;

 __declspec(property(get=get_multiplayerSessionManager)) ::GlobalNamespace::IMultiplayerSessionManager*  multiplayerSessionManager;

 __declspec(property(get=get_localState)) ::GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*  localState;

 __declspec(property(get=get_connectedPlayerCount)) int32_t  connectedPlayerCount;

 __declspec(property(get=get_disconnectedPlayerCount)) int32_t  disconnectedPlayerCount;

 __declspec(property(get=get_syncTime)) int64_t  syncTime;

 __declspec(property(get=get_deltaUpdateFrequencyMs)) int64_t  deltaUpdateFrequencyMs;

 __declspec(property(get=get_fullStateUpdateFrequencyMs)) int64_t  fullStateUpdateFrequencyMs;

 __declspec(property(get=get_localBufferSize)) int32_t  localBufferSize;

 __declspec(property(get=get_remoteBufferSize)) int32_t  remoteBufferSize;

 __declspec(property(get=get_serializablePool)) ::GlobalNamespace::IPacketPool_1<TSerializable>*  serializablePool;

 __declspec(property(get=get_deltaSerializablePool)) ::GlobalNamespace::IPacketPool_1<TDeltaSerializable>*  deltaSerializablePool;

 __declspec(property(get=get_messageType)) ::GlobalNamespace::__MultiplayerSessionManager__MessageType  messageType;

 __declspec(property(get=get_deltaMessageType)) ::GlobalNamespace::__MultiplayerSessionManager__MessageType  deltaMessageType;

constexpr void __set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager*  value) ;

constexpr ::GlobalNamespace::IMultiplayerSessionManager* __get__multiplayerSessionManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> __get__multiplayerSessionManager() const;

constexpr void __set__localState(::GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*  value) ;

constexpr ::GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>* __get__localState() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*> __get__localState() const;

constexpr void __set__connectedPlayerStates(::System::Collections::Generic::List_1<::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>* __get__connectedPlayerStates() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>*> __get__connectedPlayerStates() const;

constexpr void __set__disconnectedPlayerStates(::System::Collections::Generic::List_1<::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>* __get__disconnectedPlayerStates() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>*> __get__disconnectedPlayerStates() const;

/// @brief Method get_multiplayerSessionManager addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::IMultiplayerSessionManager* get_multiplayerSessionManager() ;

/// @brief Method get_localState addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>* get_localState() ;

/// @brief Method get_connectedPlayerCount addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_connectedPlayerCount() ;

/// @brief Method get_disconnectedPlayerCount addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_disconnectedPlayerCount() ;

/// @brief Method get_syncTime addr 0x0 size 0xffffffffffffffff virtual true final false
inline int64_t get_syncTime() ;

/// @brief Method get_deltaUpdateFrequencyMs addr 0x0 size 0xffffffffffffffff virtual true final false
inline int64_t get_deltaUpdateFrequencyMs() ;

/// @brief Method get_fullStateUpdateFrequencyMs addr 0x0 size 0xffffffffffffffff virtual true final false
inline int64_t get_fullStateUpdateFrequencyMs() ;

/// @brief Method get_localBufferSize addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t get_localBufferSize() ;

/// @brief Method get_remoteBufferSize addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t get_remoteBufferSize() ;

/// @brief Method get_serializablePool addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::GlobalNamespace::IPacketPool_1<TSerializable>* get_serializablePool() ;

/// @brief Method get_deltaSerializablePool addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::GlobalNamespace::IPacketPool_1<TDeltaSerializable>* get_deltaSerializablePool() ;

/// @brief Method get_messageType addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::GlobalNamespace::__MultiplayerSessionManager__MessageType get_messageType() ;

/// @brief Method get_deltaMessageType addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::GlobalNamespace::__MultiplayerSessionManager__MessageType get_deltaMessageType() ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Start() ;

/// @brief Method LateUpdate addr 0x0 size 0xffffffffffffffff virtual false final false
inline void LateUpdate() ;

/// @brief Method OnDestroy addr 0x0 size 0xffffffffffffffff virtual false final false
inline void OnDestroy() ;

/// @brief Method Interpolate addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t Interpolate(int32_t  a, int64_t  timeA, int32_t  b, int64_t  timeB, int64_t  time) ;

/// @brief Method Smooth addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t Smooth(int32_t  a, int32_t  b, float_t  smoooth) ;

/// @brief Method ClearBufferedStates addr 0x0 size 0xffffffffffffffff virtual true final true
inline void ClearBufferedStates() ;

/// @brief Method TryCreateLocalState addr 0x0 size 0xffffffffffffffff virtual false final false
inline void TryCreateLocalState() ;

/// @brief Method HandlePlayerConnected addr 0x0 size 0xffffffffffffffff virtual false final false
inline void HandlePlayerConnected(::GlobalNamespace::IConnectedPlayer*  player) ;

/// @brief Method HandlePlayerDisconnected addr 0x0 size 0xffffffffffffffff virtual false final false
inline void HandlePlayerDisconnected(::GlobalNamespace::IConnectedPlayer*  player) ;

/// @brief Method HandleSyncPacket addr 0x0 size 0xffffffffffffffff virtual false final false
inline void HandleSyncPacket(TSerializable  packet, ::GlobalNamespace::IConnectedPlayer*  player) ;

/// @brief Method HandleSyncDeltaPacket addr 0x0 size 0xffffffffffffffff virtual false final false
inline void HandleSyncDeltaPacket(TDeltaSerializable  packet, ::GlobalNamespace::IConnectedPlayer*  player) ;

/// @brief Method GetSyncState addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>* GetSyncState(int32_t  i) ;

/// @brief Method GetSyncStateForPlayer addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>* GetSyncStateForPlayer(::GlobalNamespace::IConnectedPlayer*  player) ;

/// @brief Method GetDisconnectedSyncState addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>* GetDisconnectedSyncState(int32_t  i) ;

static inline ::GlobalNamespace::MultiplayerSyncStateManager_5<::GlobalNamespace::StandardScoreSyncState,TType,int32_t,TSerializable,TDeltaSerializable>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerSyncStateManager_5", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplayerSyncStateManager_5(MultiplayerSyncStateManager_5 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerSyncStateManager_5", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplayerSyncStateManager_5(MultiplayerSyncStateManager_5 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MultiplayerSyncStateManager_5()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MultiplayerSyncStateManager`5
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TSerializable,::il2cpp_utils::il2cpp_reference_type TDeltaSerializable>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14951)), TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14951), inst: 6122 })
// CS Name: ::MultiplayerSyncStateManager`5<TStateTable,TType,TState,TSerializable,TDeltaSerializable>*
class CORDL_TYPE MultiplayerSyncStateManager_5<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable,TSerializable,TDeltaSerializable> : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::GlobalNamespace::__MultiplayerSyncStateManager_5____c<::GlobalNamespace::NodePoseSyncState, TType, ::GlobalNamespace::PoseSerializable, TSerializable, TDeltaSerializable>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _multiplayerSessionManager offset 0x18
 __declspec(property(get=__get__multiplayerSessionManager, put=__set__multiplayerSessionManager)) ::GlobalNamespace::IMultiplayerSessionManager*  _multiplayerSessionManager;

/// @brief Field _localState offset 0x20
 __declspec(property(get=__get__localState, put=__set__localState)) ::GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*  _localState;

/// @brief Field _connectedPlayerStates offset 0x28
 __declspec(property(get=__get__connectedPlayerStates, put=__set__connectedPlayerStates)) ::System::Collections::Generic::List_1<::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>*  _connectedPlayerStates;

/// @brief Field _disconnectedPlayerStates offset 0x30
 __declspec(property(get=__get__disconnectedPlayerStates, put=__set__disconnectedPlayerStates)) ::System::Collections::Generic::List_1<::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>*  _disconnectedPlayerStates;

 __declspec(property(get=get_multiplayerSessionManager)) ::GlobalNamespace::IMultiplayerSessionManager*  multiplayerSessionManager;

 __declspec(property(get=get_localState)) ::GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*  localState;

 __declspec(property(get=get_connectedPlayerCount)) int32_t  connectedPlayerCount;

 __declspec(property(get=get_disconnectedPlayerCount)) int32_t  disconnectedPlayerCount;

 __declspec(property(get=get_syncTime)) int64_t  syncTime;

 __declspec(property(get=get_deltaUpdateFrequencyMs)) int64_t  deltaUpdateFrequencyMs;

 __declspec(property(get=get_fullStateUpdateFrequencyMs)) int64_t  fullStateUpdateFrequencyMs;

 __declspec(property(get=get_localBufferSize)) int32_t  localBufferSize;

 __declspec(property(get=get_remoteBufferSize)) int32_t  remoteBufferSize;

 __declspec(property(get=get_serializablePool)) ::GlobalNamespace::IPacketPool_1<TSerializable>*  serializablePool;

 __declspec(property(get=get_deltaSerializablePool)) ::GlobalNamespace::IPacketPool_1<TDeltaSerializable>*  deltaSerializablePool;

 __declspec(property(get=get_messageType)) ::GlobalNamespace::__MultiplayerSessionManager__MessageType  messageType;

 __declspec(property(get=get_deltaMessageType)) ::GlobalNamespace::__MultiplayerSessionManager__MessageType  deltaMessageType;

constexpr void __set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager*  value) ;

constexpr ::GlobalNamespace::IMultiplayerSessionManager* __get__multiplayerSessionManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> __get__multiplayerSessionManager() const;

constexpr void __set__localState(::GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*  value) ;

constexpr ::GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>* __get__localState() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*> __get__localState() const;

constexpr void __set__connectedPlayerStates(::System::Collections::Generic::List_1<::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>* __get__connectedPlayerStates() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>*> __get__connectedPlayerStates() const;

constexpr void __set__disconnectedPlayerStates(::System::Collections::Generic::List_1<::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>* __get__disconnectedPlayerStates() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>*> __get__disconnectedPlayerStates() const;

/// @brief Method get_multiplayerSessionManager addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::IMultiplayerSessionManager* get_multiplayerSessionManager() ;

/// @brief Method get_localState addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>* get_localState() ;

/// @brief Method get_connectedPlayerCount addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_connectedPlayerCount() ;

/// @brief Method get_disconnectedPlayerCount addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_disconnectedPlayerCount() ;

/// @brief Method get_syncTime addr 0x0 size 0xffffffffffffffff virtual true final false
inline int64_t get_syncTime() ;

/// @brief Method get_deltaUpdateFrequencyMs addr 0x0 size 0xffffffffffffffff virtual true final false
inline int64_t get_deltaUpdateFrequencyMs() ;

/// @brief Method get_fullStateUpdateFrequencyMs addr 0x0 size 0xffffffffffffffff virtual true final false
inline int64_t get_fullStateUpdateFrequencyMs() ;

/// @brief Method get_localBufferSize addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t get_localBufferSize() ;

/// @brief Method get_remoteBufferSize addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t get_remoteBufferSize() ;

/// @brief Method get_serializablePool addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::GlobalNamespace::IPacketPool_1<TSerializable>* get_serializablePool() ;

/// @brief Method get_deltaSerializablePool addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::GlobalNamespace::IPacketPool_1<TDeltaSerializable>* get_deltaSerializablePool() ;

/// @brief Method get_messageType addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::GlobalNamespace::__MultiplayerSessionManager__MessageType get_messageType() ;

/// @brief Method get_deltaMessageType addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::GlobalNamespace::__MultiplayerSessionManager__MessageType get_deltaMessageType() ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Start() ;

/// @brief Method LateUpdate addr 0x0 size 0xffffffffffffffff virtual false final false
inline void LateUpdate() ;

/// @brief Method OnDestroy addr 0x0 size 0xffffffffffffffff virtual false final false
inline void OnDestroy() ;

/// @brief Method Interpolate addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::GlobalNamespace::PoseSerializable Interpolate(::GlobalNamespace::PoseSerializable  a, int64_t  timeA, ::GlobalNamespace::PoseSerializable  b, int64_t  timeB, int64_t  time) ;

/// @brief Method Smooth addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::GlobalNamespace::PoseSerializable Smooth(::GlobalNamespace::PoseSerializable  a, ::GlobalNamespace::PoseSerializable  b, float_t  smoooth) ;

/// @brief Method ClearBufferedStates addr 0x0 size 0xffffffffffffffff virtual true final true
inline void ClearBufferedStates() ;

/// @brief Method TryCreateLocalState addr 0x0 size 0xffffffffffffffff virtual false final false
inline void TryCreateLocalState() ;

/// @brief Method HandlePlayerConnected addr 0x0 size 0xffffffffffffffff virtual false final false
inline void HandlePlayerConnected(::GlobalNamespace::IConnectedPlayer*  player) ;

/// @brief Method HandlePlayerDisconnected addr 0x0 size 0xffffffffffffffff virtual false final false
inline void HandlePlayerDisconnected(::GlobalNamespace::IConnectedPlayer*  player) ;

/// @brief Method HandleSyncPacket addr 0x0 size 0xffffffffffffffff virtual false final false
inline void HandleSyncPacket(TSerializable  packet, ::GlobalNamespace::IConnectedPlayer*  player) ;

/// @brief Method HandleSyncDeltaPacket addr 0x0 size 0xffffffffffffffff virtual false final false
inline void HandleSyncDeltaPacket(TDeltaSerializable  packet, ::GlobalNamespace::IConnectedPlayer*  player) ;

/// @brief Method GetSyncState addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>* GetSyncState(int32_t  i) ;

/// @brief Method GetSyncStateForPlayer addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>* GetSyncStateForPlayer(::GlobalNamespace::IConnectedPlayer*  player) ;

/// @brief Method GetDisconnectedSyncState addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>* GetDisconnectedSyncState(int32_t  i) ;

static inline ::GlobalNamespace::MultiplayerSyncStateManager_5<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable,TSerializable,TDeltaSerializable>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerSyncStateManager_5", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplayerSyncStateManager_5(MultiplayerSyncStateManager_5 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerSyncStateManager_5", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplayerSyncStateManager_5(MultiplayerSyncStateManager_5 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MultiplayerSyncStateManager_5()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::MultiplayerSyncStateManager_5, "", "MultiplayerSyncStateManager`5");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__MultiplayerSyncStateManager_5____c, "", "MultiplayerSyncStateManager`5/<>c");
