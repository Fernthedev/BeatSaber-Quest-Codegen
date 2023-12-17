#pragma once
#include "BeatSaber/AvatarCore/zzzz__IAvatarPoseRestriction_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::BeatSaber::AvatarCore::IAvatarPoseRestriction.RestrictPose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::IAvatarPoseRestriction::*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>)>(&::BeatSaber::AvatarCore::IAvatarPoseRestriction::RestrictPose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::IAvatarPoseRestriction*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::IAvatarPoseRestriction*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
inline void BeatSaber::AvatarCore::IAvatarPoseRestriction::RestrictPose(::UnityEngine::Quaternion  headRotation, ::UnityEngine::Vector3  headPosition, ::UnityEngine::Vector3  leftHandPosition, ::UnityEngine::Vector3  rightHandPosition, ByRef<::UnityEngine::Vector3>  newHeadPosition, ByRef<::UnityEngine::Vector3>  newLeftHandPosition, ByRef<::UnityEngine::Vector3>  newRightHandPosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::IAvatarPoseRestriction*>::get(),
                            "RestrictPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, headRotation, headPosition, leftHandPosition, rightHandPosition, newHeadPosition, newLeftHandPosition, newRightHandPosition);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
