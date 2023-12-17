#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "RootMotion/FinalIK/zzzz__VRIKCalibrator_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolverVR_def.hpp"
#include "RootMotion/FinalIK/zzzz__VRIKCalibrator_def.hpp"
#include "RootMotion/FinalIK/zzzz__VRIK_def.hpp"
//  Writing Method size for method: ::RootMotion::FinalIK::__VRIKCalibrator__Settings._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__VRIKCalibrator__Settings::*)()>(&::RootMotion::FinalIK::__VRIKCalibrator__Settings::_ctor)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x129d3f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__VRIKCalibrator__Settings*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void RootMotion::FinalIK::__VRIKCalibrator__Settings::__set_scaleMlp(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::__VRIKCalibrator__Settings::__get_scaleMlp()  {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
constexpr float_t const& RootMotion::FinalIK::__VRIKCalibrator__Settings::__get_scaleMlp() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
constexpr void RootMotion::FinalIK::__VRIKCalibrator__Settings::__set_headTrackerForward(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x14>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__VRIKCalibrator__Settings::__get_headTrackerForward()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x14>(this);
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__VRIKCalibrator__Settings::__get_headTrackerForward() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x14>(this);
}
constexpr void RootMotion::FinalIK::__VRIKCalibrator__Settings::__set_headTrackerUp(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x20>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__VRIKCalibrator__Settings::__get_headTrackerUp()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x20>(this);
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__VRIKCalibrator__Settings::__get_headTrackerUp() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x20>(this);
}
constexpr void RootMotion::FinalIK::__VRIKCalibrator__Settings::__set_bodyTrackerForward(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x2c>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__VRIKCalibrator__Settings::__get_bodyTrackerForward()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x2c>(this);
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__VRIKCalibrator__Settings::__get_bodyTrackerForward() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x2c>(this);
}
constexpr void RootMotion::FinalIK::__VRIKCalibrator__Settings::__set_bodyTrackerUp(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x38>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__VRIKCalibrator__Settings::__get_bodyTrackerUp()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x38>(this);
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__VRIKCalibrator__Settings::__get_bodyTrackerUp() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x38>(this);
}
constexpr void RootMotion::FinalIK::__VRIKCalibrator__Settings::__set_handTrackerForward(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x44>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__VRIKCalibrator__Settings::__get_handTrackerForward()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x44>(this);
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__VRIKCalibrator__Settings::__get_handTrackerForward() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x44>(this);
}
constexpr void RootMotion::FinalIK::__VRIKCalibrator__Settings::__set_handTrackerUp(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x50>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__VRIKCalibrator__Settings::__get_handTrackerUp()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x50>(this);
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__VRIKCalibrator__Settings::__get_handTrackerUp() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x50>(this);
}
constexpr void RootMotion::FinalIK::__VRIKCalibrator__Settings::__set_footTrackerForward(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x5c>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__VRIKCalibrator__Settings::__get_footTrackerForward()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x5c>(this);
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__VRIKCalibrator__Settings::__get_footTrackerForward() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x5c>(this);
}
constexpr void RootMotion::FinalIK::__VRIKCalibrator__Settings::__set_footTrackerUp(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x68>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__VRIKCalibrator__Settings::__get_footTrackerUp()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x68>(this);
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__VRIKCalibrator__Settings::__get_footTrackerUp() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x68>(this);
}
constexpr void RootMotion::FinalIK::__VRIKCalibrator__Settings::__set_headOffset(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x74>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__VRIKCalibrator__Settings::__get_headOffset()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x74>(this);
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__VRIKCalibrator__Settings::__get_headOffset() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x74>(this);
}
constexpr void RootMotion::FinalIK::__VRIKCalibrator__Settings::__set_handOffset(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x80>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__VRIKCalibrator__Settings::__get_handOffset()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x80>(this);
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__VRIKCalibrator__Settings::__get_handOffset() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x80>(this);
}
constexpr void RootMotion::FinalIK::__VRIKCalibrator__Settings::__set_footForwardOffset(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x8c>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::__VRIKCalibrator__Settings::__get_footForwardOffset()  {
return ::cordl_internals::getInstanceField<float_t, 0x8c>(this);
}
constexpr float_t const& RootMotion::FinalIK::__VRIKCalibrator__Settings::__get_footForwardOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x8c>(this);
}
constexpr void RootMotion::FinalIK::__VRIKCalibrator__Settings::__set_footInwardOffset(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x90>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::__VRIKCalibrator__Settings::__get_footInwardOffset()  {
return ::cordl_internals::getInstanceField<float_t, 0x90>(this);
}
constexpr float_t const& RootMotion::FinalIK::__VRIKCalibrator__Settings::__get_footInwardOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x90>(this);
}
constexpr void RootMotion::FinalIK::__VRIKCalibrator__Settings::__set_footHeadingOffset(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x94>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::__VRIKCalibrator__Settings::__get_footHeadingOffset()  {
return ::cordl_internals::getInstanceField<float_t, 0x94>(this);
}
constexpr float_t const& RootMotion::FinalIK::__VRIKCalibrator__Settings::__get_footHeadingOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x94>(this);
}
constexpr void RootMotion::FinalIK::__VRIKCalibrator__Settings::__set_pelvisPositionWeight(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x98>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::__VRIKCalibrator__Settings::__get_pelvisPositionWeight()  {
return ::cordl_internals::getInstanceField<float_t, 0x98>(this);
}
constexpr float_t const& RootMotion::FinalIK::__VRIKCalibrator__Settings::__get_pelvisPositionWeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x98>(this);
}
constexpr void RootMotion::FinalIK::__VRIKCalibrator__Settings::__set_pelvisRotationWeight(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x9c>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::__VRIKCalibrator__Settings::__get_pelvisRotationWeight()  {
return ::cordl_internals::getInstanceField<float_t, 0x9c>(this);
}
constexpr float_t const& RootMotion::FinalIK::__VRIKCalibrator__Settings::__get_pelvisRotationWeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x9c>(this);
}
inline ::RootMotion::FinalIK::__VRIKCalibrator__Settings* RootMotion::FinalIK::__VRIKCalibrator__Settings::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::__VRIKCalibrator__Settings*>());
}
inline void RootMotion::FinalIK::__VRIKCalibrator__Settings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__VRIKCalibrator__Settings*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target::*)(::UnityEngine::Transform*)>(&::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x129c650;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target.SetTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target::*)(::UnityEngine::Transform*)>(&::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target::SetTo)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x129cff8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*>::get(),
                            "SetTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__VRIKCalibrator__CalibrationData__Target::__set_used(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__VRIKCalibrator__CalibrationData__Target::__get_used()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& GlobalNamespace::__VRIKCalibrator__CalibrationData__Target::__get_used() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr void GlobalNamespace::__VRIKCalibrator__CalibrationData__Target::__set_localPosition(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x14>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::__VRIKCalibrator__CalibrationData__Target::__get_localPosition()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x14>(this);
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::__VRIKCalibrator__CalibrationData__Target::__get_localPosition() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x14>(this);
}
constexpr void GlobalNamespace::__VRIKCalibrator__CalibrationData__Target::__set_localRotation(::UnityEngine::Quaternion  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Quaternion, 0x20>(this, std::forward<::UnityEngine::Quaternion>(value));
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::__VRIKCalibrator__CalibrationData__Target::__get_localRotation()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x20>(this);
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::__VRIKCalibrator__CalibrationData__Target::__get_localRotation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x20>(this);
}
inline ::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target* GlobalNamespace::__VRIKCalibrator__CalibrationData__Target::New_ctor(::UnityEngine::Transform*  t)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*>(t));
}
inline void GlobalNamespace::__VRIKCalibrator__CalibrationData__Target::_ctor(::UnityEngine::Transform*  t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, t);
}
inline void GlobalNamespace::__VRIKCalibrator__CalibrationData__Target::SetTo(::UnityEngine::Transform*  t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*>::get(),
                            "SetTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, t);
}
//  Writing Method size for method: ::RootMotion::FinalIK::__VRIKCalibrator__CalibrationData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::*)()>(&::RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x129bdd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__VRIKCalibrator__CalibrationData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__set_scale(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__get_scale()  {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
constexpr float_t const& RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__get_scale() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
constexpr void RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__set_head(::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*, 0x18>(this, std::forward<::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*>(value));
}
constexpr ::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target* RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__get_head()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*> RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__get_head() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*, 0x18>(this);
}
constexpr void RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__set_leftHand(::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*, 0x20>(this, std::forward<::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*>(value));
}
constexpr ::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target* RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__get_leftHand()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*> RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__get_leftHand() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*, 0x20>(this);
}
constexpr void RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__set_rightHand(::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*, 0x28>(this, std::forward<::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*>(value));
}
constexpr ::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target* RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__get_rightHand()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*> RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__get_rightHand() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*, 0x28>(this);
}
constexpr void RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__set_pelvis(::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*, 0x30>(this, std::forward<::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*>(value));
}
constexpr ::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target* RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__get_pelvis()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*> RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__get_pelvis() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*, 0x30>(this);
}
constexpr void RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__set_leftFoot(::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*, 0x38>(this, std::forward<::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*>(value));
}
constexpr ::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target* RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__get_leftFoot()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*> RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__get_leftFoot() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*, 0x38>(this);
}
constexpr void RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__set_rightFoot(::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*, 0x40>(this, std::forward<::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*>(value));
}
constexpr ::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target* RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__get_rightFoot()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*> RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__get_rightFoot() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*, 0x40>(this);
}
constexpr void RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__set_leftLegGoal(::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*, 0x48>(this, std::forward<::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*>(value));
}
constexpr ::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target* RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__get_leftLegGoal()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*> RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__get_leftLegGoal() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*, 0x48>(this);
}
constexpr void RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__set_rightLegGoal(::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*, 0x50>(this, std::forward<::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*>(value));
}
constexpr ::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target* RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__get_rightLegGoal()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*> RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__get_rightLegGoal() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*, 0x50>(this);
}
constexpr void RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__set_pelvisTargetRight(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x58>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__get_pelvisTargetRight()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x58>(this);
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__get_pelvisTargetRight() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x58>(this);
}
constexpr void RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__set_pelvisPositionWeight(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x64>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__get_pelvisPositionWeight()  {
return ::cordl_internals::getInstanceField<float_t, 0x64>(this);
}
constexpr float_t const& RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__get_pelvisPositionWeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x64>(this);
}
constexpr void RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__set_pelvisRotationWeight(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x68>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__get_pelvisRotationWeight()  {
return ::cordl_internals::getInstanceField<float_t, 0x68>(this);
}
constexpr float_t const& RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__get_pelvisRotationWeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x68>(this);
}
inline ::RootMotion::FinalIK::__VRIKCalibrator__CalibrationData* RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::__VRIKCalibrator__CalibrationData*>());
}
inline void RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__VRIKCalibrator__CalibrationData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::RootMotion::FinalIK::VRIKCalibrator.RecalibrateScale
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::RootMotion::FinalIK::VRIK*, ::RootMotion::FinalIK::__VRIKCalibrator__Settings*)>(&::RootMotion::FinalIK::VRIKCalibrator::RecalibrateScale)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x129aaa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::VRIKCalibrator*>::get(),
                            "RecalibrateScale",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::VRIK*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__VRIKCalibrator__Settings*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::VRIKCalibrator.Calibrate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::__VRIKCalibrator__CalibrationData* (*)(::RootMotion::FinalIK::VRIK*, ::RootMotion::FinalIK::__VRIKCalibrator__Settings*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&::RootMotion::FinalIK::VRIKCalibrator::Calibrate)> {
  constexpr static std::size_t size = 0x123c;
  constexpr static std::size_t addrs = 0x129ab94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::VRIKCalibrator*>::get(),
                            "Calibrate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::VRIK*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__VRIKCalibrator__Settings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::VRIKCalibrator.CalibrateLeg
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::RootMotion::FinalIK::__VRIKCalibrator__Settings*, ::UnityEngine::Transform*, ::RootMotion::FinalIK::__IKSolverVR__Leg*, ::UnityEngine::Transform*, ::UnityEngine::Vector3, bool)>(&::RootMotion::FinalIK::VRIKCalibrator::CalibrateLeg)> {
  constexpr static std::size_t size = 0x6b8;
  constexpr static std::size_t addrs = 0x129bdd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::VRIKCalibrator*>::get(),
                            "CalibrateLeg",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__VRIKCalibrator__Settings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__IKSolverVR__Leg*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::VRIKCalibrator.Calibrate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::RootMotion::FinalIK::VRIK*, ::RootMotion::FinalIK::__VRIKCalibrator__CalibrationData*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&::RootMotion::FinalIK::VRIKCalibrator::Calibrate)> {
  constexpr static std::size_t size = 0x8f4;
  constexpr static std::size_t addrs = 0x129c704;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::VRIKCalibrator*>::get(),
                            "Calibrate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::VRIK*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__VRIKCalibrator__CalibrationData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::VRIKCalibrator.CalibrateLeg
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::RootMotion::FinalIK::__VRIKCalibrator__CalibrationData*, ::UnityEngine::Transform*, ::RootMotion::FinalIK::__IKSolverVR__Leg*, ::UnityEngine::Transform*, ::UnityEngine::Vector3, bool)>(&::RootMotion::FinalIK::VRIKCalibrator::CalibrateLeg)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x129d054;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::VRIKCalibrator*>::get(),
                            "CalibrateLeg",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__VRIKCalibrator__CalibrationData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__IKSolverVR__Leg*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
inline void RootMotion::FinalIK::VRIKCalibrator::RecalibrateScale(::RootMotion::FinalIK::VRIK*  ik, ::RootMotion::FinalIK::__VRIKCalibrator__Settings*  settings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::VRIKCalibrator*>::get(),
                            "RecalibrateScale",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::VRIK*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__VRIKCalibrator__Settings*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ik, settings);
}
/// @param bodyTracker: ::UnityEngine::Transform* (default: csnull)
/// @param leftHandTracker: ::UnityEngine::Transform* (default: csnull)
/// @param rightHandTracker: ::UnityEngine::Transform* (default: csnull)
/// @param leftFootTracker: ::UnityEngine::Transform* (default: csnull)
/// @param rightFootTracker: ::UnityEngine::Transform* (default: csnull)
inline ::RootMotion::FinalIK::__VRIKCalibrator__CalibrationData* RootMotion::FinalIK::VRIKCalibrator::Calibrate(::RootMotion::FinalIK::VRIK*  ik, ::RootMotion::FinalIK::__VRIKCalibrator__Settings*  settings, ::UnityEngine::Transform*  headTracker, ::UnityEngine::Transform*  bodyTracker, ::UnityEngine::Transform*  leftHandTracker, ::UnityEngine::Transform*  rightHandTracker, ::UnityEngine::Transform*  leftFootTracker, ::UnityEngine::Transform*  rightFootTracker)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::VRIKCalibrator*>::get(),
                            "Calibrate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::VRIK*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__VRIKCalibrator__Settings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::RootMotion::FinalIK::__VRIKCalibrator__CalibrationData*, false>(nullptr, ___internal_method, ik, settings, headTracker, bodyTracker, leftHandTracker, rightHandTracker, leftFootTracker, rightFootTracker);
}
inline void RootMotion::FinalIK::VRIKCalibrator::CalibrateLeg(::RootMotion::FinalIK::__VRIKCalibrator__Settings*  settings, ::UnityEngine::Transform*  tracker, ::RootMotion::FinalIK::__IKSolverVR__Leg*  leg, ::UnityEngine::Transform*  lastBone, ::UnityEngine::Vector3  rootForward, bool  isLeft)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::VRIKCalibrator*>::get(),
                            "CalibrateLeg",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__VRIKCalibrator__Settings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__IKSolverVR__Leg*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, settings, tracker, leg, lastBone, rootForward, isLeft);
}
/// @param bodyTracker: ::UnityEngine::Transform* (default: csnull)
/// @param leftHandTracker: ::UnityEngine::Transform* (default: csnull)
/// @param rightHandTracker: ::UnityEngine::Transform* (default: csnull)
/// @param leftFootTracker: ::UnityEngine::Transform* (default: csnull)
/// @param rightFootTracker: ::UnityEngine::Transform* (default: csnull)
inline void RootMotion::FinalIK::VRIKCalibrator::Calibrate(::RootMotion::FinalIK::VRIK*  ik, ::RootMotion::FinalIK::__VRIKCalibrator__CalibrationData*  data, ::UnityEngine::Transform*  headTracker, ::UnityEngine::Transform*  bodyTracker, ::UnityEngine::Transform*  leftHandTracker, ::UnityEngine::Transform*  rightHandTracker, ::UnityEngine::Transform*  leftFootTracker, ::UnityEngine::Transform*  rightFootTracker)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::VRIKCalibrator*>::get(),
                            "Calibrate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::VRIK*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__VRIKCalibrator__CalibrationData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ik, data, headTracker, bodyTracker, leftHandTracker, rightHandTracker, leftFootTracker, rightFootTracker);
}
inline void RootMotion::FinalIK::VRIKCalibrator::CalibrateLeg(::RootMotion::FinalIK::__VRIKCalibrator__CalibrationData*  data, ::UnityEngine::Transform*  tracker, ::RootMotion::FinalIK::__IKSolverVR__Leg*  leg, ::UnityEngine::Transform*  lastBone, ::UnityEngine::Vector3  rootForward, bool  isLeft)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::VRIKCalibrator*>::get(),
                            "CalibrateLeg",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__VRIKCalibrator__CalibrationData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__IKSolverVR__Leg*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, data, tracker, leg, lastBone, rootForward, isLeft);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
