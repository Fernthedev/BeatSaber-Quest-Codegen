#pragma once
#include "GlobalNamespace/zzzz__INodePoseSyncStateManager_5_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerSyncState_3_def.hpp"
#include "GlobalNamespace/zzzz__LocalMultiplayerSyncState_3_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
template<typename TStateTable,typename TType,typename TState,typename TSerializable,typename TDeltaSerializable>
inline int64_t GlobalNamespace::INodePoseSyncStateManager_5<TStateTable,TType,TState,TSerializable,TDeltaSerializable>::get_syncTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::INodePoseSyncStateManager_5<TStateTable,TType,TState,TSerializable,TDeltaSerializable>*>::get(),
                            "get_syncTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(*this, ___internal_method);
}
template<typename TStateTable,typename TType,typename TState,typename TSerializable,typename TDeltaSerializable>
inline int32_t GlobalNamespace::INodePoseSyncStateManager_5<TStateTable,TType,TState,TSerializable,TDeltaSerializable>::get_connectedPlayerCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::INodePoseSyncStateManager_5<TStateTable,TType,TState,TSerializable,TDeltaSerializable>*>::get(),
                            "get_connectedPlayerCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
template<typename TStateTable,typename TType,typename TState,typename TSerializable,typename TDeltaSerializable>
inline ::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable,TType,TState>* GlobalNamespace::INodePoseSyncStateManager_5<TStateTable,TType,TState,TSerializable,TDeltaSerializable>::get_localState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::INodePoseSyncStateManager_5<TStateTable,TType,TState,TSerializable,TDeltaSerializable>*>::get(),
                            "get_localState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable,TType,TState>*, false>(*this, ___internal_method);
}
template<typename TStateTable,typename TType,typename TState,typename TSerializable,typename TDeltaSerializable>
inline ::GlobalNamespace::MultiplayerSyncState_3<TStateTable,TType,TState>* GlobalNamespace::INodePoseSyncStateManager_5<TStateTable,TType,TState,TSerializable,TDeltaSerializable>::GetSyncStateForPlayer(::GlobalNamespace::IConnectedPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::INodePoseSyncStateManager_5<TStateTable,TType,TState,TSerializable,TDeltaSerializable>*>::get(),
                            "GetSyncStateForPlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerSyncState_3<TStateTable,TType,TState>*, false>(*this, ___internal_method, player);
}
template<typename TStateTable,typename TType,typename TState,typename TSerializable,typename TDeltaSerializable>
inline ::GlobalNamespace::MultiplayerSyncState_3<TStateTable,TType,TState>* GlobalNamespace::INodePoseSyncStateManager_5<TStateTable,TType,TState,TSerializable,TDeltaSerializable>::GetSyncState(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::INodePoseSyncStateManager_5<TStateTable,TType,TState,TSerializable,TDeltaSerializable>*>::get(),
                            "GetSyncState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerSyncState_3<TStateTable,TType,TState>*, false>(*this, ___internal_method, i);
}
template<typename TStateTable,typename TType,typename TState,typename TSerializable,typename TDeltaSerializable>
inline void GlobalNamespace::INodePoseSyncStateManager_5<TStateTable,TType,TState,TSerializable,TDeltaSerializable>::ClearBufferedStates()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::INodePoseSyncStateManager_5<TStateTable,TType,TState,TSerializable,TDeltaSerializable>*>::get(),
                            "ClearBufferedStates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
