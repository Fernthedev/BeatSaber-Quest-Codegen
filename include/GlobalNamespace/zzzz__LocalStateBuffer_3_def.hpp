#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__StateBuffer_3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LocalStateBuffer_3)
namespace GlobalNamespace {
template<typename TStateTable,typename TType,typename TState>
struct __StateBuffer_3__TimestampedStateTable;
}
namespace GlobalNamespace {
template<typename TStateTable,typename TType,typename TState>
class __StateBuffer_3__InterpolationDelegate;
}
namespace GlobalNamespace {
template<typename TStateTable,typename TType,typename TState>
class __StateBuffer_3__SmoothingDelegate;
}
namespace GlobalNamespace {
struct NodePoseSyncState;
}
namespace GlobalNamespace {
struct PoseSerializable;
}
namespace GlobalNamespace {
struct SyncStateId;
}
namespace GlobalNamespace {
struct StandardScoreSyncState;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TStateTable,typename TType,typename TState>
class LocalStateBuffer_3;
}
namespace GlobalNamespace {
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
class LocalStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>;
}
namespace GlobalNamespace {
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
class LocalStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::LocalStateBuffer_3);
// Type: ::LocalStateBuffer`3
// Type: ::LocalStateBuffer`3
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12986)), TypeDefinitionIndex(TypeDefinitionIndex(12985)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12985), inst: 3833 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12986), inst: 5153 })
// CS Name: ::LocalStateBuffer`3<TStateTable,TType,TState>*
class CORDL_TYPE LocalStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t> : public ::GlobalNamespace::StateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x88};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x88 - sizeof(::GlobalNamespace::StateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>)]{};

/// @brief Field kMaxSentStates offset 0x0
static constexpr int32_t  kMaxSentStates{static_cast<int32_t>(0x4)};

/// @brief Field kMaxSentDeltas offset 0x0
static constexpr int32_t  kMaxSentDeltas{static_cast<int32_t>(0x4)};

/// @brief Field _current offset 0x30
 __declspec(property(get=__get__current, put=__set__current)) ::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>  _current;

/// @brief Field _fullStateUpdateFrequency offset 0x58
 __declspec(property(get=__get__fullStateUpdateFrequency, put=__set__fullStateUpdateFrequency)) int64_t  _fullStateUpdateFrequency;

/// @brief Field _deltaUpdateFrequency offset 0x60
 __declspec(property(get=__get__deltaUpdateFrequency, put=__set__deltaUpdateFrequency)) int64_t  _deltaUpdateFrequency;

/// @brief Field _sentStateIndex offset 0x68
 __declspec(property(get=__get__sentStateIndex, put=__set__sentStateIndex)) int32_t  _sentStateIndex;

/// @brief Field _sentDeltaIndex offset 0x6c
 __declspec(property(get=__get__sentDeltaIndex, put=__set__sentDeltaIndex)) int32_t  _sentDeltaIndex;

/// @brief Field _sentStates offset 0x70
 __declspec(property(get=__get__sentStates, put=__set__sentStates)) ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>*>  _sentStates;

/// @brief Field _sentDeltas offset 0x78
 __declspec(property(get=__get__sentDeltas, put=__set__sentDeltas)) ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>*>  _sentDeltas;

/// @brief Field _lastSentSyncStateId offset 0x80
 __declspec(property(get=__get__lastSentSyncStateId, put=__set__lastSentSyncStateId)) ::GlobalNamespace::SyncStateId  _lastSentSyncStateId;

constexpr void __set__current(::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>  value) ;

constexpr ::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>& __get__current() ;

constexpr ::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t> const& __get__current() const;

constexpr void __set__fullStateUpdateFrequency(int64_t  value) ;

constexpr int64_t& __get__fullStateUpdateFrequency() ;

constexpr int64_t const& __get__fullStateUpdateFrequency() const;

constexpr void __set__deltaUpdateFrequency(int64_t  value) ;

constexpr int64_t& __get__deltaUpdateFrequency() ;

constexpr int64_t const& __get__deltaUpdateFrequency() const;

constexpr void __set__sentStateIndex(int32_t  value) ;

constexpr int32_t& __get__sentStateIndex() ;

constexpr int32_t const& __get__sentStateIndex() const;

constexpr void __set__sentDeltaIndex(int32_t  value) ;

constexpr int32_t& __get__sentDeltaIndex() ;

constexpr int32_t const& __get__sentDeltaIndex() const;

constexpr void __set__sentStates(::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>*>& __get__sentStates() ;

constexpr ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>*> const& __get__sentStates() const;

constexpr void __set__sentDeltas(::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>*>& __get__sentDeltas() ;

constexpr ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>*> const& __get__sentDeltas() const;

constexpr void __set__lastSentSyncStateId(::GlobalNamespace::SyncStateId  value) ;

constexpr ::GlobalNamespace::SyncStateId& __get__lastSentSyncStateId() ;

constexpr ::GlobalNamespace::SyncStateId const& __get__lastSentSyncStateId() const;

static inline ::GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>* New_ctor(int64_t  fullStateUpdateFrequency, int64_t  deltaUpdateFrequency, int32_t  size, ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*  interpolator, ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*  smoother) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int64_t  fullStateUpdateFrequency, int64_t  deltaUpdateFrequency, int32_t  size, ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*  interpolator, ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*  smoother) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Clear() ;

/// @brief Method MarkDirty addr 0x0 size 0xffffffffffffffff virtual false final false
inline void MarkDirty() ;

/// @brief Method TryGetSerializedState addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TryGetSerializedState(ByRef<::GlobalNamespace::StandardScoreSyncState>  state, ByRef<int64_t>  time, ByRef<::GlobalNamespace::SyncStateId>  id) ;

/// @brief Method TryGetSerializedStateDelta addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TryGetSerializedStateDelta(ByRef<::GlobalNamespace::StandardScoreSyncState>  delta, ByRef<int32_t>  timeOffset, ByRef<::GlobalNamespace::SyncStateId>  baseId) ;

/// @brief Method SetTime addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetTime(int64_t  time) ;

/// @brief Method SetState addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetState(TType  type, int32_t  state) ;

/// @brief Method GetState addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t GetState(TType  type) ;

// Ctor Parameters [CppParam { name: "", ty: "LocalStateBuffer_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalStateBuffer_3(LocalStateBuffer_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalStateBuffer_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalStateBuffer_3(LocalStateBuffer_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LocalStateBuffer_3()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LocalStateBuffer`3
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12986)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12985), inst: 3833 }), TypeDefinitionIndex(TypeDefinitionIndex(12985))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12986), inst: 5152 })
// CS Name: ::LocalStateBuffer`3<TStateTable,TType,TState>*
class CORDL_TYPE LocalStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable> : public ::GlobalNamespace::StateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xb8};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xb8 - sizeof(::GlobalNamespace::StateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>)]{};

/// @brief Field kMaxSentStates offset 0x0
static constexpr int32_t  kMaxSentStates{static_cast<int32_t>(0x4)};

/// @brief Field kMaxSentDeltas offset 0x0
static constexpr int32_t  kMaxSentDeltas{static_cast<int32_t>(0x4)};

/// @brief Field _current offset 0x30
 __declspec(property(get=__get__current, put=__set__current)) ::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>  _current;

/// @brief Field _fullStateUpdateFrequency offset 0x88
 __declspec(property(get=__get__fullStateUpdateFrequency, put=__set__fullStateUpdateFrequency)) int64_t  _fullStateUpdateFrequency;

/// @brief Field _deltaUpdateFrequency offset 0x90
 __declspec(property(get=__get__deltaUpdateFrequency, put=__set__deltaUpdateFrequency)) int64_t  _deltaUpdateFrequency;

/// @brief Field _sentStateIndex offset 0x98
 __declspec(property(get=__get__sentStateIndex, put=__set__sentStateIndex)) int32_t  _sentStateIndex;

/// @brief Field _sentDeltaIndex offset 0x9c
 __declspec(property(get=__get__sentDeltaIndex, put=__set__sentDeltaIndex)) int32_t  _sentDeltaIndex;

/// @brief Field _sentStates offset 0xa0
 __declspec(property(get=__get__sentStates, put=__set__sentStates)) ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>*>  _sentStates;

/// @brief Field _sentDeltas offset 0xa8
 __declspec(property(get=__get__sentDeltas, put=__set__sentDeltas)) ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>*>  _sentDeltas;

/// @brief Field _lastSentSyncStateId offset 0xb0
 __declspec(property(get=__get__lastSentSyncStateId, put=__set__lastSentSyncStateId)) ::GlobalNamespace::SyncStateId  _lastSentSyncStateId;

constexpr void __set__current(::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>  value) ;

constexpr ::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>& __get__current() ;

constexpr ::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable> const& __get__current() const;

constexpr void __set__fullStateUpdateFrequency(int64_t  value) ;

constexpr int64_t& __get__fullStateUpdateFrequency() ;

constexpr int64_t const& __get__fullStateUpdateFrequency() const;

constexpr void __set__deltaUpdateFrequency(int64_t  value) ;

constexpr int64_t& __get__deltaUpdateFrequency() ;

constexpr int64_t const& __get__deltaUpdateFrequency() const;

constexpr void __set__sentStateIndex(int32_t  value) ;

constexpr int32_t& __get__sentStateIndex() ;

constexpr int32_t const& __get__sentStateIndex() const;

constexpr void __set__sentDeltaIndex(int32_t  value) ;

constexpr int32_t& __get__sentDeltaIndex() ;

constexpr int32_t const& __get__sentDeltaIndex() const;

constexpr void __set__sentStates(::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>*>& __get__sentStates() ;

constexpr ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>*> const& __get__sentStates() const;

constexpr void __set__sentDeltas(::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>*>& __get__sentDeltas() ;

constexpr ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>*> const& __get__sentDeltas() const;

constexpr void __set__lastSentSyncStateId(::GlobalNamespace::SyncStateId  value) ;

constexpr ::GlobalNamespace::SyncStateId& __get__lastSentSyncStateId() ;

constexpr ::GlobalNamespace::SyncStateId const& __get__lastSentSyncStateId() const;

static inline ::GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>* New_ctor(int64_t  fullStateUpdateFrequency, int64_t  deltaUpdateFrequency, int32_t  size, ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*  interpolator, ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*  smoother) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int64_t  fullStateUpdateFrequency, int64_t  deltaUpdateFrequency, int32_t  size, ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*  interpolator, ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*  smoother) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Clear() ;

/// @brief Method MarkDirty addr 0x0 size 0xffffffffffffffff virtual false final false
inline void MarkDirty() ;

/// @brief Method TryGetSerializedState addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TryGetSerializedState(ByRef<::GlobalNamespace::NodePoseSyncState>  state, ByRef<int64_t>  time, ByRef<::GlobalNamespace::SyncStateId>  id) ;

/// @brief Method TryGetSerializedStateDelta addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TryGetSerializedStateDelta(ByRef<::GlobalNamespace::NodePoseSyncState>  delta, ByRef<int32_t>  timeOffset, ByRef<::GlobalNamespace::SyncStateId>  baseId) ;

/// @brief Method SetTime addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetTime(int64_t  time) ;

/// @brief Method SetState addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetState(TType  type, ::GlobalNamespace::PoseSerializable  state) ;

/// @brief Method GetState addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::PoseSerializable GetState(TType  type) ;

// Ctor Parameters [CppParam { name: "", ty: "LocalStateBuffer_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalStateBuffer_3(LocalStateBuffer_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalStateBuffer_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalStateBuffer_3(LocalStateBuffer_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LocalStateBuffer_3()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::LocalStateBuffer_3, "", "LocalStateBuffer`3");
