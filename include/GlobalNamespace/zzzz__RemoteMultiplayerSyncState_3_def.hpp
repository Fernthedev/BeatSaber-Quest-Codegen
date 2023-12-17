#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MultiplayerSyncState_3_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RemoteMultiplayerSyncState_3)
namespace GlobalNamespace {
template<typename TStateTable,typename TType,typename TState>
class __StateBuffer_3__SmoothingDelegate;
}
namespace GlobalNamespace {
struct PoseSerializable;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
struct NodePoseSyncState;
}
namespace GlobalNamespace {
template<typename TStateTable,typename TType,typename TState>
class RemoteStateBuffer_3;
}
namespace GlobalNamespace {
template<typename TStateTable,typename TType,typename TState>
class StateBuffer_3;
}
namespace GlobalNamespace {
template<typename TStateTable,typename TType,typename TState>
class __StateBuffer_3__InterpolationDelegate;
}
namespace GlobalNamespace {
struct StandardScoreSyncState;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TStateTable,typename TType,typename TState>
class RemoteMultiplayerSyncState_3;
}
namespace GlobalNamespace {
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
class RemoteMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>;
}
namespace GlobalNamespace {
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
class RemoteMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::RemoteMultiplayerSyncState_3);
// Type: ::RemoteMultiplayerSyncState`3
// Type: ::RemoteMultiplayerSyncState`3
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14949)), TypeDefinitionIndex(TypeDefinitionIndex(14947)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14947), inst: 3836 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14949), inst: 5153 })
// CS Name: ::RemoteMultiplayerSyncState`3<TStateTable,TType,TState>*
class CORDL_TYPE RemoteMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t> : public ::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>)]{};

/// @brief Field _player offset 0x10
 __declspec(property(get=__get__player, put=__set__player)) ::GlobalNamespace::IConnectedPlayer*  _player;

/// @brief Field _stateBuffer offset 0x18
 __declspec(property(get=__get__stateBuffer, put=__set__stateBuffer)) ::GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*  _stateBuffer;

 __declspec(property(get=get_stateBuffer)) ::GlobalNamespace::StateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*  stateBuffer;

 __declspec(property(get=get_player)) ::GlobalNamespace::IConnectedPlayer*  player;

constexpr void __set__player(::GlobalNamespace::IConnectedPlayer*  value) ;

constexpr ::GlobalNamespace::IConnectedPlayer* __get__player() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> __get__player() const;

constexpr void __set__stateBuffer(::GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*  value) ;

constexpr ::GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>* __get__stateBuffer() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*> __get__stateBuffer() const;

/// @brief Method get_stateBuffer addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::GlobalNamespace::StateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>* get_stateBuffer() ;

/// @brief Method get_player addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::GlobalNamespace::IConnectedPlayer* get_player() ;

/// @brief Method UpdateState addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
inline void UpdateState(T  serializable) ;

/// @brief Method UpdateDelta addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
inline void UpdateDelta(T  serializable) ;

static inline ::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>* New_ctor(::GlobalNamespace::IConnectedPlayer*  player, int32_t  size, ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*  interpolator, ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*  smoother) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::GlobalNamespace::IConnectedPlayer*  player, int32_t  size, ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*  interpolator, ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*  smoother) ;

// Ctor Parameters [CppParam { name: "", ty: "RemoteMultiplayerSyncState_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RemoteMultiplayerSyncState_3(RemoteMultiplayerSyncState_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RemoteMultiplayerSyncState_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RemoteMultiplayerSyncState_3(RemoteMultiplayerSyncState_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RemoteMultiplayerSyncState_3()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::RemoteMultiplayerSyncState`3
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14947), inst: 3836 }), TypeDefinitionIndex(TypeDefinitionIndex(14947)), TypeDefinitionIndex(TypeDefinitionIndex(14949))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14949), inst: 5152 })
// CS Name: ::RemoteMultiplayerSyncState`3<TStateTable,TType,TState>*
class CORDL_TYPE RemoteMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable> : public ::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>)]{};

/// @brief Field _player offset 0x10
 __declspec(property(get=__get__player, put=__set__player)) ::GlobalNamespace::IConnectedPlayer*  _player;

/// @brief Field _stateBuffer offset 0x18
 __declspec(property(get=__get__stateBuffer, put=__set__stateBuffer)) ::GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*  _stateBuffer;

 __declspec(property(get=get_stateBuffer)) ::GlobalNamespace::StateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*  stateBuffer;

 __declspec(property(get=get_player)) ::GlobalNamespace::IConnectedPlayer*  player;

constexpr void __set__player(::GlobalNamespace::IConnectedPlayer*  value) ;

constexpr ::GlobalNamespace::IConnectedPlayer* __get__player() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> __get__player() const;

constexpr void __set__stateBuffer(::GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*  value) ;

constexpr ::GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>* __get__stateBuffer() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*> __get__stateBuffer() const;

/// @brief Method get_stateBuffer addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::GlobalNamespace::StateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>* get_stateBuffer() ;

/// @brief Method get_player addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::GlobalNamespace::IConnectedPlayer* get_player() ;

/// @brief Method UpdateState addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
inline void UpdateState(T  serializable) ;

/// @brief Method UpdateDelta addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
inline void UpdateDelta(T  serializable) ;

static inline ::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>* New_ctor(::GlobalNamespace::IConnectedPlayer*  player, int32_t  size, ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*  interpolator, ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*  smoother) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::GlobalNamespace::IConnectedPlayer*  player, int32_t  size, ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*  interpolator, ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*  smoother) ;

// Ctor Parameters [CppParam { name: "", ty: "RemoteMultiplayerSyncState_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RemoteMultiplayerSyncState_3(RemoteMultiplayerSyncState_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RemoteMultiplayerSyncState_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RemoteMultiplayerSyncState_3(RemoteMultiplayerSyncState_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RemoteMultiplayerSyncState_3()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::RemoteMultiplayerSyncState_3, "", "RemoteMultiplayerSyncState`3");
