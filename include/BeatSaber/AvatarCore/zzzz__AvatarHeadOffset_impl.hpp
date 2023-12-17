#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarHeadOffset_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__MultiplayerAvatarPoseController_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarHeadOffset.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::AvatarHeadOffset::*)()>(&::BeatSaber::AvatarCore::AvatarHeadOffset::Start)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xe0ba48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarHeadOffset*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarHeadOffset.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::AvatarHeadOffset::*)()>(&::BeatSaber::AvatarCore::AvatarHeadOffset::OnDestroy)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xe0bb80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarHeadOffset*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarHeadOffset.HandleMultiplayerAvatarPoseControllerDidUpdatePose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::AvatarHeadOffset::*)(::UnityEngine::Vector3)>(&::BeatSaber::AvatarCore::AvatarHeadOffset::HandleMultiplayerAvatarPoseControllerDidUpdatePose)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xe0bd00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarHeadOffset*>::get(),
                            "HandleMultiplayerAvatarPoseControllerDidUpdatePose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarHeadOffset._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::AvatarHeadOffset::*)()>(&::BeatSaber::AvatarCore::AvatarHeadOffset::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xe0bd54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarHeadOffset*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void BeatSaber::AvatarCore::AvatarHeadOffset::__set__positionOffset(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x18>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& BeatSaber::AvatarCore::AvatarHeadOffset::__get__positionOffset()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x18>(this);
}
constexpr ::UnityEngine::Vector3 const& BeatSaber::AvatarCore::AvatarHeadOffset::__get__positionOffset() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x18>(this);
}
constexpr void BeatSaber::AvatarCore::AvatarHeadOffset::__set__avatarPoseController(::BeatSaber::AvatarCore::MultiplayerAvatarPoseController*  value)  {
::cordl_internals::setInstanceField<::BeatSaber::AvatarCore::MultiplayerAvatarPoseController*, 0x28>(this, std::forward<::BeatSaber::AvatarCore::MultiplayerAvatarPoseController*>(value));
}
constexpr ::BeatSaber::AvatarCore::MultiplayerAvatarPoseController* BeatSaber::AvatarCore::AvatarHeadOffset::__get__avatarPoseController()  {
return ::cordl_internals::getInstanceField<::BeatSaber::AvatarCore::MultiplayerAvatarPoseController*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::MultiplayerAvatarPoseController*> BeatSaber::AvatarCore::AvatarHeadOffset::__get__avatarPoseController() const {
return ::cordl_internals::getInstanceField<::BeatSaber::AvatarCore::MultiplayerAvatarPoseController*, 0x28>(this);
}
inline void BeatSaber::AvatarCore::AvatarHeadOffset::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarHeadOffset*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void BeatSaber::AvatarCore::AvatarHeadOffset::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarHeadOffset*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void BeatSaber::AvatarCore::AvatarHeadOffset::HandleMultiplayerAvatarPoseControllerDidUpdatePose(::UnityEngine::Vector3  headLocalPosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarHeadOffset*>::get(),
                            "HandleMultiplayerAvatarPoseControllerDidUpdatePose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, headLocalPosition);
}
inline ::BeatSaber::AvatarCore::AvatarHeadOffset* BeatSaber::AvatarCore::AvatarHeadOffset::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::BeatSaber::AvatarCore::AvatarHeadOffset*>());
}
inline void BeatSaber::AvatarCore::AvatarHeadOffset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarHeadOffset*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
