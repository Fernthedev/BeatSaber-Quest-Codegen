#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerSyncState_3_def.hpp"
#include "GlobalNamespace/zzzz__NodePoseSyncState_def.hpp"
#include "GlobalNamespace/zzzz__PoseSerializable_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__StateBuffer_3_def.hpp"
#include "GlobalNamespace/zzzz__StandardScoreSyncState_def.hpp"
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline ::GlobalNamespace::StateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>* GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::get_stateBuffer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>::get(),
                            "get_stateBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::StateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline ::GlobalNamespace::IConnectedPlayer* GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::get_player()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>::get(),
                            "get_player",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IConnectedPlayer*, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline int64_t GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::GetLatestTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>::get(),
                            "GetLatestTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline int32_t GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::GetLatestState(TType  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>::get(),
                            "GetLatestState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, type);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline int32_t GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::GetState(TType  type, int64_t  time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>::get(),
                            "GetState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, type, time);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline void GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::ClearBufferedStates()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>::get(),
                            "ClearBufferedStates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline ::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>* GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>());
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline void GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline ::GlobalNamespace::StateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>* GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::get_stateBuffer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>::get(),
                            "get_stateBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::StateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline ::GlobalNamespace::IConnectedPlayer* GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::get_player()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>::get(),
                            "get_player",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IConnectedPlayer*, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline int64_t GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::GetLatestTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>::get(),
                            "GetLatestTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline ::GlobalNamespace::PoseSerializable GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::GetLatestState(TType  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>::get(),
                            "GetLatestState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PoseSerializable, false>(*this, ___internal_method, type);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline ::GlobalNamespace::PoseSerializable GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::GetState(TType  type, int64_t  time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>::get(),
                            "GetState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PoseSerializable, false>(*this, ___internal_method, type, time);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline void GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::ClearBufferedStates()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>::get(),
                            "ClearBufferedStates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline ::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>* GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>());
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline void GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
