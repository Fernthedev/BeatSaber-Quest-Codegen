#pragma once
#include "GlobalNamespace/zzzz__MultiplayerSyncState_3_impl.hpp"
#include "GlobalNamespace/zzzz__RemoteMultiplayerSyncState_3_def.hpp"
#include "GlobalNamespace/zzzz__StateBuffer_3_def.hpp"
#include "GlobalNamespace/zzzz__PoseSerializable_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__NodePoseSyncState_def.hpp"
#include "GlobalNamespace/zzzz__RemoteStateBuffer_3_def.hpp"
#include "GlobalNamespace/zzzz__StandardScoreSyncState_def.hpp"
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr void GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__set__player(::GlobalNamespace::IConnectedPlayer*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IConnectedPlayer*, 0x10>(this, std::forward<::GlobalNamespace::IConnectedPlayer*>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr ::GlobalNamespace::IConnectedPlayer* GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__get__player()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IConnectedPlayer*, 0x10>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__get__player() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IConnectedPlayer*, 0x10>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr void GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__set__stateBuffer(::GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*, 0x18>(this, std::forward<::GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr ::GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>* GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__get__stateBuffer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*, 0x18>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*> GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::__get__stateBuffer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*, 0x18>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline ::GlobalNamespace::StateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>* GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::get_stateBuffer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>::get(),
                            "get_stateBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::StateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline ::GlobalNamespace::IConnectedPlayer* GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::get_player()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>::get(),
                            "get_player",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IConnectedPlayer*, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
template<typename T>
inline void GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::UpdateState(T  serializable)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>::get(),
                        "UpdateState",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, serializable);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
template<typename T>
inline void GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::UpdateDelta(T  serializable)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>::get(),
                        "UpdateDelta",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, serializable);
}
/// @param smoother: ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>* (default: csnull)
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline ::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>* GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::New_ctor(::GlobalNamespace::IConnectedPlayer*  player, int32_t  size, ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*  interpolator, ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*  smoother)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>(player, size, interpolator, smoother));
}
/// @param smoother: ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>* (default: csnull)
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline void GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>::_ctor(::GlobalNamespace::IConnectedPlayer*  player, int32_t  size, ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*  interpolator, ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*  smoother)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, player, size, interpolator, smoother);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr void GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__set__player(::GlobalNamespace::IConnectedPlayer*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IConnectedPlayer*, 0x10>(this, std::forward<::GlobalNamespace::IConnectedPlayer*>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr ::GlobalNamespace::IConnectedPlayer* GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__get__player()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IConnectedPlayer*, 0x10>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__get__player() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IConnectedPlayer*, 0x10>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr void GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__set__stateBuffer(::GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*, 0x18>(this, std::forward<::GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr ::GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>* GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__get__stateBuffer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*, 0x18>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*> GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::__get__stateBuffer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*, 0x18>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline ::GlobalNamespace::StateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>* GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::get_stateBuffer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>::get(),
                            "get_stateBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::StateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline ::GlobalNamespace::IConnectedPlayer* GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::get_player()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>::get(),
                            "get_player",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IConnectedPlayer*, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
template<typename T>
inline void GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::UpdateState(T  serializable)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>::get(),
                        "UpdateState",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, serializable);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
template<typename T>
inline void GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::UpdateDelta(T  serializable)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>::get(),
                        "UpdateDelta",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, serializable);
}
/// @param smoother: ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>* (default: csnull)
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline ::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>* GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::New_ctor(::GlobalNamespace::IConnectedPlayer*  player, int32_t  size, ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*  interpolator, ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*  smoother)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>(player, size, interpolator, smoother));
}
/// @param smoother: ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>* (default: csnull)
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
inline void GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>::_ctor(::GlobalNamespace::IConnectedPlayer*  player, int32_t  size, ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*  interpolator, ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*  smoother)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, player, size, interpolator, smoother);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
