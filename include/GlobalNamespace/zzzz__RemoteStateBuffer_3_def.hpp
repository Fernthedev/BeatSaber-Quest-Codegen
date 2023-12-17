#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__StateBuffer_3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RemoteStateBuffer_3)
namespace GlobalNamespace {
template<typename TStateTable,typename TType,typename TState>
class __StateBuffer_3__InterpolationDelegate;
}
namespace GlobalNamespace {
struct SyncStateId;
}
namespace GlobalNamespace {
struct NodePoseSyncState;
}
namespace GlobalNamespace {
struct PoseSerializable;
}
namespace GlobalNamespace {
template<typename TStateTable,typename TType,typename TState>
class __StateBuffer_3__SmoothingDelegate;
}
namespace GlobalNamespace {
template<typename TStateTable,typename TType,typename TState>
struct __StateBuffer_3__TimestampedStateTable;
}
namespace GlobalNamespace {
struct StandardScoreSyncState;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TStateTable,typename TType,typename TState>
class RemoteStateBuffer_3;
}
namespace GlobalNamespace {
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
class RemoteStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>;
}
namespace GlobalNamespace {
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
class RemoteStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::RemoteStateBuffer_3);
// Type: ::RemoteStateBuffer`3
// Type: ::RemoteStateBuffer`3
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12985), inst: 3837 }), TypeDefinitionIndex(TypeDefinitionIndex(12987)), TypeDefinitionIndex(TypeDefinitionIndex(12985))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12987), inst: 5153 })
// CS Name: ::RemoteStateBuffer`3<TStateTable,TType,TState>*
class CORDL_TYPE RemoteStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t> : public ::GlobalNamespace::StateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::GlobalNamespace::StateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>)]{};

/// @brief Field kMaxStateQueueSize offset 0x0
static constexpr int32_t  kMaxStateQueueSize{static_cast<int32_t>(0x4)};

/// @brief Field kMaxDeltaQueueSize offset 0x0
static constexpr int32_t  kMaxDeltaQueueSize{static_cast<int32_t>(0x40)};

/// @brief Field _receivedStates offset 0x30
 __declspec(property(get=__get__receivedStates, put=__set__receivedStates)) ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>*>  _receivedStates;

/// @brief Field _receivedDeltas offset 0x38
 __declspec(property(get=__get__receivedDeltas, put=__set__receivedDeltas)) ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>*>  _receivedDeltas;

/// @brief Field _receivedStateIndex offset 0x40
 __declspec(property(get=__get__receivedStateIndex, put=__set__receivedStateIndex)) int32_t  _receivedStateIndex;

/// @brief Field _receivedStateCount offset 0x44
 __declspec(property(get=__get__receivedStateCount, put=__set__receivedStateCount)) int32_t  _receivedStateCount;

/// @brief Field _receivedDeltaIndex offset 0x48
 __declspec(property(get=__get__receivedDeltaIndex, put=__set__receivedDeltaIndex)) int32_t  _receivedDeltaIndex;

/// @brief Field _receivedDeltaCount offset 0x4c
 __declspec(property(get=__get__receivedDeltaCount, put=__set__receivedDeltaCount)) int32_t  _receivedDeltaCount;

constexpr void __set__receivedStates(::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>*>& __get__receivedStates() ;

constexpr ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>*> const& __get__receivedStates() const;

constexpr void __set__receivedDeltas(::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>*>& __get__receivedDeltas() ;

constexpr ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>*> const& __get__receivedDeltas() const;

constexpr void __set__receivedStateIndex(int32_t  value) ;

constexpr int32_t& __get__receivedStateIndex() ;

constexpr int32_t const& __get__receivedStateIndex() const;

constexpr void __set__receivedStateCount(int32_t  value) ;

constexpr int32_t& __get__receivedStateCount() ;

constexpr int32_t const& __get__receivedStateCount() const;

constexpr void __set__receivedDeltaIndex(int32_t  value) ;

constexpr int32_t& __get__receivedDeltaIndex() ;

constexpr int32_t const& __get__receivedDeltaIndex() const;

constexpr void __set__receivedDeltaCount(int32_t  value) ;

constexpr int32_t& __get__receivedDeltaCount() ;

constexpr int32_t const& __get__receivedDeltaCount() const;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Clear() ;

/// @brief Method PushState addr 0x0 size 0xffffffffffffffff virtual false final false
inline void PushState(::GlobalNamespace::SyncStateId  id, ::GlobalNamespace::StandardScoreSyncState  state, int64_t  time) ;

/// @brief Method PushDelta addr 0x0 size 0xffffffffffffffff virtual false final false
inline void PushDelta(::GlobalNamespace::SyncStateId  baseId, ::GlobalNamespace::StandardScoreSyncState  delta, int64_t  timeOffset) ;

/// @brief Method ProcessQueue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ProcessQueue() ;

static inline ::GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>* New_ctor(int32_t  size, ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*  interpolator, ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*  smoother) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  size, ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*  interpolator, ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*  smoother) ;

// Ctor Parameters [CppParam { name: "", ty: "RemoteStateBuffer_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RemoteStateBuffer_3(RemoteStateBuffer_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RemoteStateBuffer_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RemoteStateBuffer_3(RemoteStateBuffer_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RemoteStateBuffer_3()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::RemoteStateBuffer`3
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12985), inst: 3837 }), TypeDefinitionIndex(TypeDefinitionIndex(12985)), TypeDefinitionIndex(TypeDefinitionIndex(12987))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12987), inst: 5152 })
// CS Name: ::RemoteStateBuffer`3<TStateTable,TType,TState>*
class CORDL_TYPE RemoteStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable> : public ::GlobalNamespace::StateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::GlobalNamespace::StateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>)]{};

/// @brief Field kMaxStateQueueSize offset 0x0
static constexpr int32_t  kMaxStateQueueSize{static_cast<int32_t>(0x4)};

/// @brief Field kMaxDeltaQueueSize offset 0x0
static constexpr int32_t  kMaxDeltaQueueSize{static_cast<int32_t>(0x40)};

/// @brief Field _receivedStates offset 0x30
 __declspec(property(get=__get__receivedStates, put=__set__receivedStates)) ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>*>  _receivedStates;

/// @brief Field _receivedDeltas offset 0x38
 __declspec(property(get=__get__receivedDeltas, put=__set__receivedDeltas)) ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>*>  _receivedDeltas;

/// @brief Field _receivedStateIndex offset 0x40
 __declspec(property(get=__get__receivedStateIndex, put=__set__receivedStateIndex)) int32_t  _receivedStateIndex;

/// @brief Field _receivedStateCount offset 0x44
 __declspec(property(get=__get__receivedStateCount, put=__set__receivedStateCount)) int32_t  _receivedStateCount;

/// @brief Field _receivedDeltaIndex offset 0x48
 __declspec(property(get=__get__receivedDeltaIndex, put=__set__receivedDeltaIndex)) int32_t  _receivedDeltaIndex;

/// @brief Field _receivedDeltaCount offset 0x4c
 __declspec(property(get=__get__receivedDeltaCount, put=__set__receivedDeltaCount)) int32_t  _receivedDeltaCount;

constexpr void __set__receivedStates(::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>*>& __get__receivedStates() ;

constexpr ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>*> const& __get__receivedStates() const;

constexpr void __set__receivedDeltas(::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>*>& __get__receivedDeltas() ;

constexpr ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>*> const& __get__receivedDeltas() const;

constexpr void __set__receivedStateIndex(int32_t  value) ;

constexpr int32_t& __get__receivedStateIndex() ;

constexpr int32_t const& __get__receivedStateIndex() const;

constexpr void __set__receivedStateCount(int32_t  value) ;

constexpr int32_t& __get__receivedStateCount() ;

constexpr int32_t const& __get__receivedStateCount() const;

constexpr void __set__receivedDeltaIndex(int32_t  value) ;

constexpr int32_t& __get__receivedDeltaIndex() ;

constexpr int32_t const& __get__receivedDeltaIndex() const;

constexpr void __set__receivedDeltaCount(int32_t  value) ;

constexpr int32_t& __get__receivedDeltaCount() ;

constexpr int32_t const& __get__receivedDeltaCount() const;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Clear() ;

/// @brief Method PushState addr 0x0 size 0xffffffffffffffff virtual false final false
inline void PushState(::GlobalNamespace::SyncStateId  id, ::GlobalNamespace::NodePoseSyncState  state, int64_t  time) ;

/// @brief Method PushDelta addr 0x0 size 0xffffffffffffffff virtual false final false
inline void PushDelta(::GlobalNamespace::SyncStateId  baseId, ::GlobalNamespace::NodePoseSyncState  delta, int64_t  timeOffset) ;

/// @brief Method ProcessQueue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ProcessQueue() ;

static inline ::GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>* New_ctor(int32_t  size, ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*  interpolator, ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*  smoother) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  size, ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*  interpolator, ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*  smoother) ;

// Ctor Parameters [CppParam { name: "", ty: "RemoteStateBuffer_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RemoteStateBuffer_3(RemoteStateBuffer_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RemoteStateBuffer_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RemoteStateBuffer_3(RemoteStateBuffer_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RemoteStateBuffer_3()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::RemoteStateBuffer_3, "", "RemoteStateBuffer`3");
