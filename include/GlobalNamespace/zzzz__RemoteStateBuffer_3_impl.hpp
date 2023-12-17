#pragma once
#include "GlobalNamespace/zzzz__StateBuffer_3_impl.hpp"
#include "GlobalNamespace/zzzz__RemoteStateBuffer_3_def.hpp"
#include "GlobalNamespace/zzzz__StateBuffer_3_def.hpp"
#include "GlobalNamespace/zzzz__SyncStateId_def.hpp"
#include "GlobalNamespace/zzzz__NodePoseSyncState_def.hpp"
#include "GlobalNamespace/zzzz__PoseSerializable_def.hpp"
#include "GlobalNamespace/zzzz__StandardScoreSyncState_def.hpp"
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr void GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__set__receivedStates(::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>*>, 0x30>(this, std::forward<::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>*>>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>*>& GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__get__receivedStates()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>*>, 0x30>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>*> const& GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__get__receivedStates() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>*>, 0x30>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr void GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__set__receivedDeltas(::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>*>, 0x38>(this, std::forward<::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>*>>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>*>& GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__get__receivedDeltas()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>*>, 0x38>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>*> const& GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__get__receivedDeltas() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>*>, 0x38>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr void GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__set__receivedStateIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this, std::forward<int32_t>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr int32_t& GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__get__receivedStateIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr int32_t const& GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__get__receivedStateIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr void GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__set__receivedStateCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x44>(this, std::forward<int32_t>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr int32_t& GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__get__receivedStateCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x44>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr int32_t const& GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__get__receivedStateCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x44>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr void GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__set__receivedDeltaIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x48>(this, std::forward<int32_t>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr int32_t& GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__get__receivedDeltaIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr int32_t const& GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__get__receivedDeltaIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr void GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__set__receivedDeltaCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x4c>(this, std::forward<int32_t>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr int32_t& GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__get__receivedDeltaCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x4c>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr int32_t const& GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__get__receivedDeltaCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4c>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline void GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline void GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::PushState(::GlobalNamespace::SyncStateId  id, ::GlobalNamespace::StandardScoreSyncState  state, int64_t  time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>::get(),
                            "PushState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SyncStateId>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardScoreSyncState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, id, state, time);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline void GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::PushDelta(::GlobalNamespace::SyncStateId  baseId, ::GlobalNamespace::StandardScoreSyncState  delta, int64_t  timeOffset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>::get(),
                            "PushDelta",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SyncStateId>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardScoreSyncState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, baseId, delta, timeOffset);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline void GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::ProcessQueue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>::get(),
                            "ProcessQueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
/// @param smoother: ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>* (default: csnull)
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline ::GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>* GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::New_ctor(int32_t  size, ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*  interpolator, ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*  smoother)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>(size, interpolator, smoother));
}
/// @param smoother: ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>* (default: csnull)
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline void GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::_ctor(int32_t  size, ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*  interpolator, ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*  smoother)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, size, interpolator, smoother);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr void GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__set__receivedStates(::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>*>, 0x30>(this, std::forward<::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>*>>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>*>& GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__get__receivedStates()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>*>, 0x30>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>*> const& GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__get__receivedStates() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>*>, 0x30>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr void GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__set__receivedDeltas(::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>*>, 0x38>(this, std::forward<::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>*>>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>*>& GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__get__receivedDeltas()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>*>, 0x38>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>*> const& GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__get__receivedDeltas() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>*>, 0x38>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr void GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__set__receivedStateIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this, std::forward<int32_t>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr int32_t& GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__get__receivedStateIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr int32_t const& GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__get__receivedStateIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr void GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__set__receivedStateCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x44>(this, std::forward<int32_t>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr int32_t& GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__get__receivedStateCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x44>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr int32_t const& GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__get__receivedStateCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x44>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr void GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__set__receivedDeltaIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x48>(this, std::forward<int32_t>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr int32_t& GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__get__receivedDeltaIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr int32_t const& GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__get__receivedDeltaIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr void GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__set__receivedDeltaCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x4c>(this, std::forward<int32_t>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr int32_t& GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__get__receivedDeltaCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x4c>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr int32_t const& GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__get__receivedDeltaCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4c>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline void GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline void GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::PushState(::GlobalNamespace::SyncStateId  id, ::GlobalNamespace::NodePoseSyncState  state, int64_t  time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>::get(),
                            "PushState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SyncStateId>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NodePoseSyncState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, id, state, time);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline void GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::PushDelta(::GlobalNamespace::SyncStateId  baseId, ::GlobalNamespace::NodePoseSyncState  delta, int64_t  timeOffset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>::get(),
                            "PushDelta",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SyncStateId>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NodePoseSyncState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, baseId, delta, timeOffset);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline void GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::ProcessQueue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>::get(),
                            "ProcessQueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
/// @param smoother: ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>* (default: csnull)
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline ::GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>* GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::New_ctor(int32_t  size, ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*  interpolator, ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*  smoother)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>(size, interpolator, smoother));
}
/// @param smoother: ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>* (default: csnull)
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline void GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::_ctor(int32_t  size, ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*  interpolator, ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*  smoother)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, size, interpolator, smoother);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
