#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__BeatAvatarPoseController_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__HeadBodyOffsetSO_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController.get_bodyWorldPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::*)()>(&::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::get_bodyWorldPosition)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe1b04c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController*>::get(),
                            "get_bodyWorldPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController.UpdateTransforms
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion)>(&::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::UpdateTransforms)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xe1b068;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController*>::get(),
                            "UpdateTransforms",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController.UpdateBodyPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::*)()>(&::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::UpdateBodyPosition)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0xe1b144;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController*>::get(),
                            "UpdateBodyPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::*)()>(&::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe1b2f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::__set__headTransform(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x18>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::__get__headTransform()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::__get__headTransform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x18>(this);
}
constexpr void BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::__set__leftHandTransform(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x20>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::__get__leftHandTransform()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::__get__leftHandTransform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x20>(this);
}
constexpr void BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::__set__rightHandTransform(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x28>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::__get__rightHandTransform()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::__get__rightHandTransform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x28>(this);
}
constexpr void BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::__set__bodyTransform(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x30>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::__get__bodyTransform()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::__get__bodyTransform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x30>(this);
}
constexpr void BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::__set__headBodyOffset(::BeatSaber::BeatAvatarSDK::HeadBodyOffsetSO*  value)  {
::cordl_internals::setInstanceField<::BeatSaber::BeatAvatarSDK::HeadBodyOffsetSO*, 0x38>(this, std::forward<::BeatSaber::BeatAvatarSDK::HeadBodyOffsetSO*>(value));
}
constexpr ::BeatSaber::BeatAvatarSDK::HeadBodyOffsetSO* BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::__get__headBodyOffset()  {
return ::cordl_internals::getInstanceField<::BeatSaber::BeatAvatarSDK::HeadBodyOffsetSO*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarSDK::HeadBodyOffsetSO*> BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::__get__headBodyOffset() const {
return ::cordl_internals::getInstanceField<::BeatSaber::BeatAvatarSDK::HeadBodyOffsetSO*, 0x38>(this);
}
inline ::UnityEngine::Vector3 BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::get_bodyWorldPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController*>::get(),
                            "get_bodyWorldPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(*this, ___internal_method);
}
inline void BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::UpdateTransforms(::UnityEngine::Vector3  headPosition, ::UnityEngine::Vector3  leftHandPosition, ::UnityEngine::Vector3  rightHandPosition, ::UnityEngine::Quaternion  headRotation, ::UnityEngine::Quaternion  leftHandRotation, ::UnityEngine::Quaternion  rightHandRotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController*>::get(),
                            "UpdateTransforms",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, headPosition, leftHandPosition, rightHandPosition, headRotation, leftHandRotation, rightHandRotation);
}
inline void BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::UpdateBodyPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController*>::get(),
                            "UpdateBodyPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController* BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController*>());
}
inline void BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
