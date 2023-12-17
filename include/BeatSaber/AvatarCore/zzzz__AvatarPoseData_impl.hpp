#pragma once
#include "BeatSaber/AvatarCore/zzzz__AvatarPoseData_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarPoseData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::AvatarPoseData::*)(::UnityEngine::Pose, ::UnityEngine::Pose, ::UnityEngine::Pose)>(&::BeatSaber::AvatarCore::AvatarPoseData::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xe0bd6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarPoseData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void BeatSaber::AvatarCore::AvatarPoseData::__set_headPose(::UnityEngine::Pose  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Pose, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Pose>(value));
}
constexpr ::UnityEngine::Pose& BeatSaber::AvatarCore::AvatarPoseData::__get_headPose()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Pose, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::Pose const& BeatSaber::AvatarCore::AvatarPoseData::__get_headPose() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Pose, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void BeatSaber::AvatarCore::AvatarPoseData::__set_leftHandPose(::UnityEngine::Pose  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Pose, 0x1c>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Pose>(value));
}
constexpr ::UnityEngine::Pose& BeatSaber::AvatarCore::AvatarPoseData::__get_leftHandPose()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Pose, 0x1c>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::Pose const& BeatSaber::AvatarCore::AvatarPoseData::__get_leftHandPose() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Pose, 0x1c>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void BeatSaber::AvatarCore::AvatarPoseData::__set_rightHandPose(::UnityEngine::Pose  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Pose, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Pose>(value));
}
constexpr ::UnityEngine::Pose& BeatSaber::AvatarCore::AvatarPoseData::__get_rightHandPose()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Pose, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::Pose const& BeatSaber::AvatarCore::AvatarPoseData::__get_rightHandPose() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Pose, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void BeatSaber::AvatarCore::AvatarPoseData::_ctor(::UnityEngine::Pose  headPose, ::UnityEngine::Pose  leftHandPose, ::UnityEngine::Pose  rightHandPose)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarPoseData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, headPose, leftHandPose, rightHandPose);
}
// Ctor Parameters [CppParam { name: "headPose", ty: "::UnityEngine::Pose", modifiers: "", def_value: Some("{}") }, CppParam { name: "leftHandPose", ty: "::UnityEngine::Pose", modifiers: "", def_value: Some("{}") }, CppParam { name: "rightHandPose", ty: "::UnityEngine::Pose", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::AvatarCore::AvatarPoseData::AvatarPoseData(::UnityEngine::Pose  headPose, ::UnityEngine::Pose  leftHandPose, ::UnityEngine::Pose  rightHandPose) noexcept : ::bs_hook::ValueTypeWrapper<0x54>() {this->headPose = headPose;
this->leftHandPose = leftHandPose;
this->rightHandPose = rightHandPose;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
