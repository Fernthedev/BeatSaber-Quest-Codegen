#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "RootMotion/FinalIK/zzzz__LookAtController_def.hpp"
#include "RootMotion/FinalIK/zzzz__LookAtIK_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::RootMotion::FinalIK::LookAtController.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::LookAtController::*)()>(&::RootMotion::FinalIK::LookAtController::Start)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x12971b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::LookAtController*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::LookAtController.LateUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::LookAtController::*)()>(&::RootMotion::FinalIK::LookAtController::LateUpdate)> {
  constexpr static std::size_t size = 0x4e8;
  constexpr static std::size_t addrs = 0x12972a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::LookAtController*>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::LookAtController.get_pivot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::RootMotion::FinalIK::LookAtController::*)()>(&::RootMotion::FinalIK::LookAtController::get_pivot)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x1297220;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::LookAtController*>::get(),
                            "get_pivot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::LookAtController.ApplyMinDistance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::LookAtController::*)()>(&::RootMotion::FinalIK::LookAtController::ApplyMinDistance)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x129778c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::LookAtController*>::get(),
                            "ApplyMinDistance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::LookAtController.RootRotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::LookAtController::*)()>(&::RootMotion::FinalIK::LookAtController::RootRotation)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x1297910;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::LookAtController*>::get(),
                            "RootRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::LookAtController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::LookAtController::*)()>(&::RootMotion::FinalIK::LookAtController::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x1297b5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::LookAtController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void RootMotion::FinalIK::LookAtController::__set_ik(::RootMotion::FinalIK::LookAtIK*  value)  {
::cordl_internals::setInstanceField<::RootMotion::FinalIK::LookAtIK*, 0x18>(this, std::forward<::RootMotion::FinalIK::LookAtIK*>(value));
}
constexpr ::RootMotion::FinalIK::LookAtIK* RootMotion::FinalIK::LookAtController::__get_ik()  {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::LookAtIK*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::LookAtIK*> RootMotion::FinalIK::LookAtController::__get_ik() const {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::LookAtIK*, 0x18>(this);
}
constexpr void RootMotion::FinalIK::LookAtController::__set_target(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x20>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* RootMotion::FinalIK::LookAtController::__get_target()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> RootMotion::FinalIK::LookAtController::__get_target() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x20>(this);
}
constexpr void RootMotion::FinalIK::LookAtController::__set_weight(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::LookAtController::__get_weight()  {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
constexpr float_t const& RootMotion::FinalIK::LookAtController::__get_weight() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
constexpr void RootMotion::FinalIK::LookAtController::__set_offset(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x2c>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::LookAtController::__get_offset()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x2c>(this);
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::LookAtController::__get_offset() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x2c>(this);
}
constexpr void RootMotion::FinalIK::LookAtController::__set_targetSwitchSmoothTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x38>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::LookAtController::__get_targetSwitchSmoothTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this);
}
constexpr float_t const& RootMotion::FinalIK::LookAtController::__get_targetSwitchSmoothTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this);
}
constexpr void RootMotion::FinalIK::LookAtController::__set_weightSmoothTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x3c>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::LookAtController::__get_weightSmoothTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x3c>(this);
}
constexpr float_t const& RootMotion::FinalIK::LookAtController::__get_weightSmoothTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x3c>(this);
}
constexpr void RootMotion::FinalIK::LookAtController::__set_smoothTurnTowardsTarget(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x40>(this, std::forward<bool>(value));
}
constexpr bool& RootMotion::FinalIK::LookAtController::__get_smoothTurnTowardsTarget()  {
return ::cordl_internals::getInstanceField<bool, 0x40>(this);
}
constexpr bool const& RootMotion::FinalIK::LookAtController::__get_smoothTurnTowardsTarget() const {
return ::cordl_internals::getInstanceField<bool, 0x40>(this);
}
constexpr void RootMotion::FinalIK::LookAtController::__set_maxRadiansDelta(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x44>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::LookAtController::__get_maxRadiansDelta()  {
return ::cordl_internals::getInstanceField<float_t, 0x44>(this);
}
constexpr float_t const& RootMotion::FinalIK::LookAtController::__get_maxRadiansDelta() const {
return ::cordl_internals::getInstanceField<float_t, 0x44>(this);
}
constexpr void RootMotion::FinalIK::LookAtController::__set_maxMagnitudeDelta(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x48>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::LookAtController::__get_maxMagnitudeDelta()  {
return ::cordl_internals::getInstanceField<float_t, 0x48>(this);
}
constexpr float_t const& RootMotion::FinalIK::LookAtController::__get_maxMagnitudeDelta() const {
return ::cordl_internals::getInstanceField<float_t, 0x48>(this);
}
constexpr void RootMotion::FinalIK::LookAtController::__set_slerpSpeed(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x4c>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::LookAtController::__get_slerpSpeed()  {
return ::cordl_internals::getInstanceField<float_t, 0x4c>(this);
}
constexpr float_t const& RootMotion::FinalIK::LookAtController::__get_slerpSpeed() const {
return ::cordl_internals::getInstanceField<float_t, 0x4c>(this);
}
constexpr void RootMotion::FinalIK::LookAtController::__set_pivotOffsetFromRoot(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x50>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::LookAtController::__get_pivotOffsetFromRoot()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x50>(this);
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::LookAtController::__get_pivotOffsetFromRoot() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x50>(this);
}
constexpr void RootMotion::FinalIK::LookAtController::__set_minDistance(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x5c>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::LookAtController::__get_minDistance()  {
return ::cordl_internals::getInstanceField<float_t, 0x5c>(this);
}
constexpr float_t const& RootMotion::FinalIK::LookAtController::__get_minDistance() const {
return ::cordl_internals::getInstanceField<float_t, 0x5c>(this);
}
constexpr void RootMotion::FinalIK::LookAtController::__set_maxRootAngle(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x60>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::LookAtController::__get_maxRootAngle()  {
return ::cordl_internals::getInstanceField<float_t, 0x60>(this);
}
constexpr float_t const& RootMotion::FinalIK::LookAtController::__get_maxRootAngle() const {
return ::cordl_internals::getInstanceField<float_t, 0x60>(this);
}
constexpr void RootMotion::FinalIK::LookAtController::__set_lastTarget(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x68>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* RootMotion::FinalIK::LookAtController::__get_lastTarget()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x68>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> RootMotion::FinalIK::LookAtController::__get_lastTarget() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x68>(this);
}
constexpr void RootMotion::FinalIK::LookAtController::__set_switchWeight(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x70>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::LookAtController::__get_switchWeight()  {
return ::cordl_internals::getInstanceField<float_t, 0x70>(this);
}
constexpr float_t const& RootMotion::FinalIK::LookAtController::__get_switchWeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x70>(this);
}
constexpr void RootMotion::FinalIK::LookAtController::__set_switchWeightV(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x74>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::LookAtController::__get_switchWeightV()  {
return ::cordl_internals::getInstanceField<float_t, 0x74>(this);
}
constexpr float_t const& RootMotion::FinalIK::LookAtController::__get_switchWeightV() const {
return ::cordl_internals::getInstanceField<float_t, 0x74>(this);
}
constexpr void RootMotion::FinalIK::LookAtController::__set_weightV(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x78>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::LookAtController::__get_weightV()  {
return ::cordl_internals::getInstanceField<float_t, 0x78>(this);
}
constexpr float_t const& RootMotion::FinalIK::LookAtController::__get_weightV() const {
return ::cordl_internals::getInstanceField<float_t, 0x78>(this);
}
constexpr void RootMotion::FinalIK::LookAtController::__set_lastPosition(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x7c>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::LookAtController::__get_lastPosition()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x7c>(this);
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::LookAtController::__get_lastPosition() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x7c>(this);
}
constexpr void RootMotion::FinalIK::LookAtController::__set_dir(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x88>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::LookAtController::__get_dir()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x88>(this);
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::LookAtController::__get_dir() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x88>(this);
}
constexpr void RootMotion::FinalIK::LookAtController::__set_lastSmoothTowardsTarget(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x94>(this, std::forward<bool>(value));
}
constexpr bool& RootMotion::FinalIK::LookAtController::__get_lastSmoothTowardsTarget()  {
return ::cordl_internals::getInstanceField<bool, 0x94>(this);
}
constexpr bool const& RootMotion::FinalIK::LookAtController::__get_lastSmoothTowardsTarget() const {
return ::cordl_internals::getInstanceField<bool, 0x94>(this);
}
inline void RootMotion::FinalIK::LookAtController::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::LookAtController*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void RootMotion::FinalIK::LookAtController::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::LookAtController*>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::UnityEngine::Vector3 RootMotion::FinalIK::LookAtController::get_pivot()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::LookAtController*>::get(),
                            "get_pivot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(*this, ___internal_method);
}
inline void RootMotion::FinalIK::LookAtController::ApplyMinDistance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::LookAtController*>::get(),
                            "ApplyMinDistance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void RootMotion::FinalIK::LookAtController::RootRotation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::LookAtController*>::get(),
                            "RootRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::RootMotion::FinalIK::LookAtController* RootMotion::FinalIK::LookAtController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::LookAtController*>());
}
inline void RootMotion::FinalIK::LookAtController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::LookAtController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
