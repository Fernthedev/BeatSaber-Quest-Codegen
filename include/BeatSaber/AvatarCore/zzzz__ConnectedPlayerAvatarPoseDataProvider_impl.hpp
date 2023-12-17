#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/AvatarCore/zzzz__ConnectedPlayerAvatarPoseDataProvider_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__IAvatarPoseDataProvider_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__IAvatarPoseRestriction_def.hpp"
#include "Zenject/zzzz__ITickable_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarPoseData_def.hpp"
#include "GlobalNamespace/zzzz__INodePoseSyncStateManager_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider.get_currentPose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::AvatarCore::AvatarPoseData (::BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider::*)()>(&::BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider::get_currentPose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe0ed6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider*>::get(),
                            "get_currentPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider.add_poseDidChangeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider::*)(::System::Action_1<::BeatSaber::AvatarCore::AvatarPoseData>*)>(&::BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider::add_poseDidChangeEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe0ed7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider*>::get(),
                            "add_poseDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::BeatSaber::AvatarCore::AvatarPoseData>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider.remove_poseDidChangeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider::*)(::System::Action_1<::BeatSaber::AvatarCore::AvatarPoseData>*)>(&::BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider::remove_poseDidChangeEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe0ee2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider*>::get(),
                            "remove_poseDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::BeatSaber::AvatarCore::AvatarPoseData>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider::*)(::GlobalNamespace::IConnectedPlayer*, ::GlobalNamespace::INodePoseSyncStateManager*, ::BeatSaber::AvatarCore::IAvatarPoseRestriction*)>(&::BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xe0eedc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INodePoseSyncStateManager*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarPoseRestriction*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider.Tick
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider::*)()>(&::BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider::Tick)> {
  constexpr static std::size_t size = 0x564;
  constexpr static std::size_t addrs = 0xe0ef18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider*>::get(),
                            "Tick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::BeatSaber::AvatarCore::IAvatarPoseDataProvider"
constexpr  BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider::operator ::BeatSaber::AvatarCore::IAvatarPoseDataProvider*() noexcept {
return static_cast<::BeatSaber::AvatarCore::IAvatarPoseDataProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::ITickable"
constexpr  BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider::operator ::Zenject::ITickable*() noexcept {
return static_cast<::Zenject::ITickable*>(static_cast<void*>(this));
}
constexpr void BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider::__set_poseDidChangeEvent(::System::Action_1<::BeatSaber::AvatarCore::AvatarPoseData>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::BeatSaber::AvatarCore::AvatarPoseData>*, 0x10>(this, std::forward<::System::Action_1<::BeatSaber::AvatarCore::AvatarPoseData>*>(value));
}
constexpr ::System::Action_1<::BeatSaber::AvatarCore::AvatarPoseData>* BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider::__get_poseDidChangeEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::BeatSaber::AvatarCore::AvatarPoseData>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::BeatSaber::AvatarCore::AvatarPoseData>*> BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider::__get_poseDidChangeEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::BeatSaber::AvatarCore::AvatarPoseData>*, 0x10>(this);
}
constexpr void BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider::__set__connectedPlayer(::GlobalNamespace::IConnectedPlayer*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IConnectedPlayer*, 0x18>(this, std::forward<::GlobalNamespace::IConnectedPlayer*>(value));
}
constexpr ::GlobalNamespace::IConnectedPlayer* BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider::__get__connectedPlayer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IConnectedPlayer*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider::__get__connectedPlayer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IConnectedPlayer*, 0x18>(this);
}
constexpr void BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider::__set__nodePoseSyncStateManager(::GlobalNamespace::INodePoseSyncStateManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::INodePoseSyncStateManager*, 0x20>(this, std::forward<::GlobalNamespace::INodePoseSyncStateManager*>(value));
}
constexpr ::GlobalNamespace::INodePoseSyncStateManager* BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider::__get__nodePoseSyncStateManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::INodePoseSyncStateManager*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::INodePoseSyncStateManager*> BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider::__get__nodePoseSyncStateManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::INodePoseSyncStateManager*, 0x20>(this);
}
constexpr void BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider::__set__avatarPoseRestriction(::BeatSaber::AvatarCore::IAvatarPoseRestriction*  value)  {
::cordl_internals::setInstanceField<::BeatSaber::AvatarCore::IAvatarPoseRestriction*, 0x28>(this, std::forward<::BeatSaber::AvatarCore::IAvatarPoseRestriction*>(value));
}
constexpr ::BeatSaber::AvatarCore::IAvatarPoseRestriction* BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider::__get__avatarPoseRestriction()  {
return ::cordl_internals::getInstanceField<::BeatSaber::AvatarCore::IAvatarPoseRestriction*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::IAvatarPoseRestriction*> BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider::__get__avatarPoseRestriction() const {
return ::cordl_internals::getInstanceField<::BeatSaber::AvatarCore::IAvatarPoseRestriction*, 0x28>(this);
}
constexpr void BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider::__set__currentPose(::BeatSaber::AvatarCore::AvatarPoseData  value)  {
::cordl_internals::setInstanceField<::BeatSaber::AvatarCore::AvatarPoseData, 0x30>(this, std::forward<::BeatSaber::AvatarCore::AvatarPoseData>(value));
}
constexpr ::BeatSaber::AvatarCore::AvatarPoseData& BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider::__get__currentPose()  {
return ::cordl_internals::getInstanceField<::BeatSaber::AvatarCore::AvatarPoseData, 0x30>(this);
}
constexpr ::BeatSaber::AvatarCore::AvatarPoseData const& BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider::__get__currentPose() const {
return ::cordl_internals::getInstanceField<::BeatSaber::AvatarCore::AvatarPoseData, 0x30>(this);
}
inline ::BeatSaber::AvatarCore::AvatarPoseData BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider::get_currentPose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider*>::get(),
                            "get_currentPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::BeatSaber::AvatarCore::AvatarPoseData, false>(*this, ___internal_method);
}
inline void BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider::add_poseDidChangeEvent(::System::Action_1<::BeatSaber::AvatarCore::AvatarPoseData>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider*>::get(),
                            "add_poseDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::BeatSaber::AvatarCore::AvatarPoseData>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider::remove_poseDidChangeEvent(::System::Action_1<::BeatSaber::AvatarCore::AvatarPoseData>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider*>::get(),
                            "remove_poseDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::BeatSaber::AvatarCore::AvatarPoseData>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider* BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider::New_ctor(::GlobalNamespace::IConnectedPlayer*  connectedPlayer, ::GlobalNamespace::INodePoseSyncStateManager*  nodePoseSyncStateManager, ::BeatSaber::AvatarCore::IAvatarPoseRestriction*  avatarPoseRestriction)  {
return THROW_UNLESS(::il2cpp_utils::New<::BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider*>(connectedPlayer, nodePoseSyncStateManager, avatarPoseRestriction));
}
inline void BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider::_ctor(::GlobalNamespace::IConnectedPlayer*  connectedPlayer, ::GlobalNamespace::INodePoseSyncStateManager*  nodePoseSyncStateManager, ::BeatSaber::AvatarCore::IAvatarPoseRestriction*  avatarPoseRestriction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INodePoseSyncStateManager*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarPoseRestriction*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, connectedPlayer, nodePoseSyncStateManager, avatarPoseRestriction);
}
inline void BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider::Tick()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider*>::get(),
                            "Tick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
