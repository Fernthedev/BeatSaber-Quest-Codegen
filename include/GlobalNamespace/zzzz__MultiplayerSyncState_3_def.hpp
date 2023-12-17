#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerSyncState_3)
namespace GlobalNamespace {
struct NodePoseSyncState;
}
namespace GlobalNamespace {
struct PoseSerializable;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
template<typename TStateTable,typename TType,typename TState>
class StateBuffer_3;
}
namespace GlobalNamespace {
struct StandardScoreSyncState;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TStateTable,typename TType,typename TState>
class MultiplayerSyncState_3;
}
namespace GlobalNamespace {
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
class MultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>;
}
namespace GlobalNamespace {
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
class MultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::MultiplayerSyncState_3);
// Type: ::MultiplayerSyncState`3
// Type: ::MultiplayerSyncState`3
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14947))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14947), inst: 5153 })
// CS Name: ::MultiplayerSyncState`3<TStateTable,TType,TState>*
class CORDL_TYPE MultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

 __declspec(property(get=get_stateBuffer)) ::GlobalNamespace::StateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*  stateBuffer;

 __declspec(property(get=get_player)) ::GlobalNamespace::IConnectedPlayer*  player;

/// @brief Method get_stateBuffer addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::GlobalNamespace::StateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>* get_stateBuffer() ;

/// @brief Method get_player addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::GlobalNamespace::IConnectedPlayer* get_player() ;

/// @brief Method GetLatestTime addr 0x0 size 0xffffffffffffffff virtual false final false
inline int64_t GetLatestTime() ;

/// @brief Method GetLatestState addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t GetLatestState(TType  type) ;

/// @brief Method GetState addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetState(TType  type, int64_t  time) ;

/// @brief Method ClearBufferedStates addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ClearBufferedStates() ;

static inline ::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerSyncState_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplayerSyncState_3(MultiplayerSyncState_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerSyncState_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplayerSyncState_3(MultiplayerSyncState_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MultiplayerSyncState_3()  = default;
public:


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MultiplayerSyncState`3
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14947)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14947), inst: 5152 })
// CS Name: ::MultiplayerSyncState`3<TStateTable,TType,TState>*
class CORDL_TYPE MultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

 __declspec(property(get=get_stateBuffer)) ::GlobalNamespace::StateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*  stateBuffer;

 __declspec(property(get=get_player)) ::GlobalNamespace::IConnectedPlayer*  player;

/// @brief Method get_stateBuffer addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::GlobalNamespace::StateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>* get_stateBuffer() ;

/// @brief Method get_player addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::GlobalNamespace::IConnectedPlayer* get_player() ;

/// @brief Method GetLatestTime addr 0x0 size 0xffffffffffffffff virtual false final false
inline int64_t GetLatestTime() ;

/// @brief Method GetLatestState addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::PoseSerializable GetLatestState(TType  type) ;

/// @brief Method GetState addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::GlobalNamespace::PoseSerializable GetState(TType  type, int64_t  time) ;

/// @brief Method ClearBufferedStates addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ClearBufferedStates() ;

static inline ::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerSyncState_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplayerSyncState_3(MultiplayerSyncState_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerSyncState_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplayerSyncState_3(MultiplayerSyncState_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MultiplayerSyncState_3()  = default;
public:


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::MultiplayerSyncState_3, "", "MultiplayerSyncState`3");
