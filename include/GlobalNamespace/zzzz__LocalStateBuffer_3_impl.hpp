#pragma once
#include "GlobalNamespace/zzzz__StateBuffer_3_impl.hpp"
#include "GlobalNamespace/zzzz__LocalStateBuffer_3_def.hpp"
#include "GlobalNamespace/zzzz__StateBuffer_3_def.hpp"
#include "GlobalNamespace/zzzz__NodePoseSyncState_def.hpp"
#include "GlobalNamespace/zzzz__PoseSerializable_def.hpp"
#include "GlobalNamespace/zzzz__SyncStateId_def.hpp"
#include "GlobalNamespace/zzzz__StandardScoreSyncState_def.hpp"
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr void GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__set__current(::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>, 0x30>(this, std::forward<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr ::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>& GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__get__current()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>, 0x30>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr ::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t> const& GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__get__current() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>, 0x30>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr void GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__set__fullStateUpdateFrequency(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x58>(this, std::forward<int64_t>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr int64_t& GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__get__fullStateUpdateFrequency()  {
return ::cordl_internals::getInstanceField<int64_t, 0x58>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr int64_t const& GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__get__fullStateUpdateFrequency() const {
return ::cordl_internals::getInstanceField<int64_t, 0x58>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr void GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__set__deltaUpdateFrequency(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x60>(this, std::forward<int64_t>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr int64_t& GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__get__deltaUpdateFrequency()  {
return ::cordl_internals::getInstanceField<int64_t, 0x60>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr int64_t const& GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__get__deltaUpdateFrequency() const {
return ::cordl_internals::getInstanceField<int64_t, 0x60>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr void GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__set__sentStateIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x68>(this, std::forward<int32_t>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr int32_t& GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__get__sentStateIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x68>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr int32_t const& GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__get__sentStateIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x68>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr void GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__set__sentDeltaIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x6c>(this, std::forward<int32_t>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr int32_t& GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__get__sentDeltaIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x6c>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr int32_t const& GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__get__sentDeltaIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x6c>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr void GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__set__sentStates(::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>*>, 0x70>(this, std::forward<::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>*>>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>*>& GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__get__sentStates()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>*>, 0x70>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>*> const& GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__get__sentStates() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>*>, 0x70>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr void GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__set__sentDeltas(::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>*>, 0x78>(this, std::forward<::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>*>>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>*>& GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__get__sentDeltas()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>*>, 0x78>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>*> const& GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__get__sentDeltas() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>*>, 0x78>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr void GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__set__lastSentSyncStateId(::GlobalNamespace::SyncStateId  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SyncStateId, 0x80>(this, std::forward<::GlobalNamespace::SyncStateId>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr ::GlobalNamespace::SyncStateId& GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__get__lastSentSyncStateId()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SyncStateId, 0x80>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr ::GlobalNamespace::SyncStateId const& GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__get__lastSentSyncStateId() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SyncStateId, 0x80>(this);
}
/// @param smoother: ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>* (default: csnull)
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline ::GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>* GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::New_ctor(int64_t  fullStateUpdateFrequency, int64_t  deltaUpdateFrequency, int32_t  size, ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*  interpolator, ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*  smoother)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>(fullStateUpdateFrequency, deltaUpdateFrequency, size, interpolator, smoother));
}
/// @param smoother: ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>* (default: csnull)
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline void GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::_ctor(int64_t  fullStateUpdateFrequency, int64_t  deltaUpdateFrequency, int32_t  size, ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*  interpolator, ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*  smoother)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, fullStateUpdateFrequency, deltaUpdateFrequency, size, interpolator, smoother);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline void GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline void GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::MarkDirty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>::get(),
                            "MarkDirty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline bool GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::TryGetSerializedState(ByRef<::GlobalNamespace::StandardScoreSyncState>  state, ByRef<int64_t>  time, ByRef<::GlobalNamespace::SyncStateId>  id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>::get(),
                            "TryGetSerializedState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::StandardScoreSyncState>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::SyncStateId>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, state, time, id);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline bool GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::TryGetSerializedStateDelta(ByRef<::GlobalNamespace::StandardScoreSyncState>  delta, ByRef<int32_t>  timeOffset, ByRef<::GlobalNamespace::SyncStateId>  baseId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>::get(),
                            "TryGetSerializedStateDelta",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::StandardScoreSyncState>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::SyncStateId>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, delta, timeOffset, baseId);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline void GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::SetTime(int64_t  time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>::get(),
                            "SetTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, time);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline void GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::SetState(TType  type, int32_t  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>::get(),
                            "SetState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, type, state);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline int32_t GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::GetState(TType  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>::get(),
                            "GetState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, type);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr void GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__set__current(::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>, 0x30>(this, std::forward<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr ::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>& GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__get__current()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>, 0x30>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr ::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable> const& GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__get__current() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>, 0x30>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr void GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__set__fullStateUpdateFrequency(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x88>(this, std::forward<int64_t>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr int64_t& GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__get__fullStateUpdateFrequency()  {
return ::cordl_internals::getInstanceField<int64_t, 0x88>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr int64_t const& GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__get__fullStateUpdateFrequency() const {
return ::cordl_internals::getInstanceField<int64_t, 0x88>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr void GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__set__deltaUpdateFrequency(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x90>(this, std::forward<int64_t>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr int64_t& GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__get__deltaUpdateFrequency()  {
return ::cordl_internals::getInstanceField<int64_t, 0x90>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr int64_t const& GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__get__deltaUpdateFrequency() const {
return ::cordl_internals::getInstanceField<int64_t, 0x90>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr void GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__set__sentStateIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x98>(this, std::forward<int32_t>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr int32_t& GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__get__sentStateIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x98>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr int32_t const& GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__get__sentStateIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x98>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr void GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__set__sentDeltaIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x9c>(this, std::forward<int32_t>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr int32_t& GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__get__sentDeltaIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x9c>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr int32_t const& GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__get__sentDeltaIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x9c>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr void GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__set__sentStates(::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>*>, 0xa0>(this, std::forward<::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>*>>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>*>& GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__get__sentStates()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>*>, 0xa0>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>*> const& GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__get__sentStates() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>*>, 0xa0>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr void GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__set__sentDeltas(::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>*>, 0xa8>(this, std::forward<::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>*>>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>*>& GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__get__sentDeltas()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>*>, 0xa8>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>*> const& GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__get__sentDeltas() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>*>, 0xa8>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr void GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__set__lastSentSyncStateId(::GlobalNamespace::SyncStateId  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SyncStateId, 0xb0>(this, std::forward<::GlobalNamespace::SyncStateId>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr ::GlobalNamespace::SyncStateId& GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__get__lastSentSyncStateId()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SyncStateId, 0xb0>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr ::GlobalNamespace::SyncStateId const& GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__get__lastSentSyncStateId() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SyncStateId, 0xb0>(this);
}
/// @param smoother: ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>* (default: csnull)
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline ::GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>* GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::New_ctor(int64_t  fullStateUpdateFrequency, int64_t  deltaUpdateFrequency, int32_t  size, ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*  interpolator, ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*  smoother)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>(fullStateUpdateFrequency, deltaUpdateFrequency, size, interpolator, smoother));
}
/// @param smoother: ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>* (default: csnull)
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline void GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::_ctor(int64_t  fullStateUpdateFrequency, int64_t  deltaUpdateFrequency, int32_t  size, ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*  interpolator, ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*  smoother)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, fullStateUpdateFrequency, deltaUpdateFrequency, size, interpolator, smoother);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline void GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline void GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::MarkDirty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>::get(),
                            "MarkDirty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline bool GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::TryGetSerializedState(ByRef<::GlobalNamespace::NodePoseSyncState>  state, ByRef<int64_t>  time, ByRef<::GlobalNamespace::SyncStateId>  id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>::get(),
                            "TryGetSerializedState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::NodePoseSyncState>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::SyncStateId>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, state, time, id);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline bool GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::TryGetSerializedStateDelta(ByRef<::GlobalNamespace::NodePoseSyncState>  delta, ByRef<int32_t>  timeOffset, ByRef<::GlobalNamespace::SyncStateId>  baseId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>::get(),
                            "TryGetSerializedStateDelta",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::NodePoseSyncState>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::SyncStateId>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, delta, timeOffset, baseId);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline void GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::SetTime(int64_t  time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>::get(),
                            "SetTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, time);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline void GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::SetState(TType  type, ::GlobalNamespace::PoseSerializable  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>::get(),
                            "SetState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PoseSerializable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, type, state);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline ::GlobalNamespace::PoseSerializable GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::GetState(TType  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>::get(),
                            "GetState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PoseSerializable, false>(*this, ___internal_method, type);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
