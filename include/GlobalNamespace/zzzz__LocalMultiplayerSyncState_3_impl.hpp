#pragma once
#include "GlobalNamespace/zzzz__MultiplayerSyncState_3_impl.hpp"
#include "GlobalNamespace/zzzz__LocalMultiplayerSyncState_3_def.hpp"
#include "GlobalNamespace/zzzz__StateBuffer_3_def.hpp"
#include "GlobalNamespace/zzzz__LocalStateBuffer_3_def.hpp"
#include "GlobalNamespace/zzzz__IPacketPool_1_def.hpp"
#include "GlobalNamespace/zzzz__PoseSerializable_def.hpp"
#include "GlobalNamespace/zzzz__NodePoseSyncState_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__StandardScoreSyncState_def.hpp"
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr void GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__set__player(::GlobalNamespace::IConnectedPlayer*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IConnectedPlayer*, 0x10>(this, std::forward<::GlobalNamespace::IConnectedPlayer*>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr ::GlobalNamespace::IConnectedPlayer* GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__get__player()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IConnectedPlayer*, 0x10>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__get__player() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IConnectedPlayer*, 0x10>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr void GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__set__stateBuffer(::GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*, 0x18>(this, std::forward<::GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr ::GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>* GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__get__stateBuffer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*, 0x18>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*> GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__get__stateBuffer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*, 0x18>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline ::GlobalNamespace::StateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>* GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::get_stateBuffer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>::get(),
                            "get_stateBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::StateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline ::GlobalNamespace::IConnectedPlayer* GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::get_player()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>::get(),
                            "get_player",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IConnectedPlayer*, false>(*this, ___internal_method);
}
/// @param smoother: ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>* (default: csnull)
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline ::GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>* GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::New_ctor(::GlobalNamespace::IConnectedPlayer*  player, int64_t  fullStateUpdateFrequency, int64_t  deltaUpdateFrequency, int32_t  size, ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*  interpolator, ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*  smoother)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>(player, fullStateUpdateFrequency, deltaUpdateFrequency, size, interpolator, smoother));
}
/// @param smoother: ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>* (default: csnull)
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline void GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::_ctor(::GlobalNamespace::IConnectedPlayer*  player, int64_t  fullStateUpdateFrequency, int64_t  deltaUpdateFrequency, int32_t  size, ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*  interpolator, ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*  smoother)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, player, fullStateUpdateFrequency, deltaUpdateFrequency, size, interpolator, smoother);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
template<typename T>
inline bool GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::TryGetSerializedState(::GlobalNamespace::IPacketPool_1<T>*  pool, ByRef<T>  serializable)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>::get(),
                        "TryGetSerializedState",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPacketPool_1<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, pool, serializable);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
template<typename T>
inline bool GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::TryGetSerializedStateDelta(::GlobalNamespace::IPacketPool_1<T>*  pool, ByRef<T>  serializable)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>::get(),
                        "TryGetSerializedStateDelta",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPacketPool_1<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, pool, serializable);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline void GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::SetDirty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>::get(),
                            "SetDirty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline void GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::SetCurrentTime(int64_t  time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>::get(),
                            "SetCurrentTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, time);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline void GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::SetState(TType  type, int32_t  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>::get(),
                            "SetState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, type, state);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline int32_t GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::GetState(TType  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>::get(),
                            "GetState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, type);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline int32_t GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::get_Item(TType  t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, t);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline void GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::set_Item(TType  t, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>::get(),
                            "set_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, t, value);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr void GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__set__player(::GlobalNamespace::IConnectedPlayer*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IConnectedPlayer*, 0x10>(this, std::forward<::GlobalNamespace::IConnectedPlayer*>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr ::GlobalNamespace::IConnectedPlayer* GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__get__player()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IConnectedPlayer*, 0x10>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__get__player() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IConnectedPlayer*, 0x10>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr void GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__set__stateBuffer(::GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*, 0x18>(this, std::forward<::GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr ::GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>* GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__get__stateBuffer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*, 0x18>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*> GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__get__stateBuffer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LocalStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*, 0x18>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline ::GlobalNamespace::StateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>* GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::get_stateBuffer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>::get(),
                            "get_stateBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::StateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline ::GlobalNamespace::IConnectedPlayer* GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::get_player()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>::get(),
                            "get_player",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IConnectedPlayer*, false>(*this, ___internal_method);
}
/// @param smoother: ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>* (default: csnull)
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline ::GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>* GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::New_ctor(::GlobalNamespace::IConnectedPlayer*  player, int64_t  fullStateUpdateFrequency, int64_t  deltaUpdateFrequency, int32_t  size, ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*  interpolator, ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*  smoother)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>(player, fullStateUpdateFrequency, deltaUpdateFrequency, size, interpolator, smoother));
}
/// @param smoother: ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>* (default: csnull)
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline void GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::_ctor(::GlobalNamespace::IConnectedPlayer*  player, int64_t  fullStateUpdateFrequency, int64_t  deltaUpdateFrequency, int32_t  size, ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*  interpolator, ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*  smoother)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, player, fullStateUpdateFrequency, deltaUpdateFrequency, size, interpolator, smoother);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
template<typename T>
inline bool GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::TryGetSerializedState(::GlobalNamespace::IPacketPool_1<T>*  pool, ByRef<T>  serializable)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>::get(),
                        "TryGetSerializedState",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPacketPool_1<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, pool, serializable);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
template<typename T>
inline bool GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::TryGetSerializedStateDelta(::GlobalNamespace::IPacketPool_1<T>*  pool, ByRef<T>  serializable)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>::get(),
                        "TryGetSerializedStateDelta",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPacketPool_1<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, pool, serializable);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline void GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::SetDirty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>::get(),
                            "SetDirty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline void GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::SetCurrentTime(int64_t  time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>::get(),
                            "SetCurrentTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, time);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline void GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::SetState(TType  type, ::GlobalNamespace::PoseSerializable  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>::get(),
                            "SetState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PoseSerializable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, type, state);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline ::GlobalNamespace::PoseSerializable GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::GetState(TType  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>::get(),
                            "GetState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PoseSerializable, false>(*this, ___internal_method, type);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline ::GlobalNamespace::PoseSerializable GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::get_Item(TType  t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PoseSerializable, false>(*this, ___internal_method, t);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline void GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::set_Item(TType  t, ::GlobalNamespace::PoseSerializable  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>::get(),
                            "set_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PoseSerializable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, t, value);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
