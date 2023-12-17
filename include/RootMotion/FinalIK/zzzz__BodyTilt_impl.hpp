#pragma once
#include "RootMotion/FinalIK/zzzz__OffsetModifier_impl.hpp"
#include "RootMotion/FinalIK/zzzz__BodyTilt_def.hpp"
#include "RootMotion/FinalIK/zzzz__OffsetPose_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::RootMotion::FinalIK::BodyTilt.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::BodyTilt::*)()>(&::RootMotion::FinalIK::BodyTilt::Start)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x1294a2c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::BodyTilt*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::BodyTilt*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::BodyTilt.OnModifyOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::BodyTilt::*)()>(&::RootMotion::FinalIK::BodyTilt::OnModifyOffset)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x1294a94;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::BodyTilt*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::BodyTilt*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::BodyTilt._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::BodyTilt::*)()>(&::RootMotion::FinalIK::BodyTilt::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1294d34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::BodyTilt*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void RootMotion::FinalIK::BodyTilt::__set_tiltSpeed(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x2c>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::BodyTilt::__get_tiltSpeed()  {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this);
}
constexpr float_t const& RootMotion::FinalIK::BodyTilt::__get_tiltSpeed() const {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this);
}
constexpr void RootMotion::FinalIK::BodyTilt::__set_tiltSensitivity(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::BodyTilt::__get_tiltSensitivity()  {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr float_t const& RootMotion::FinalIK::BodyTilt::__get_tiltSensitivity() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr void RootMotion::FinalIK::BodyTilt::__set_poseLeft(::RootMotion::FinalIK::OffsetPose*  value)  {
::cordl_internals::setInstanceField<::RootMotion::FinalIK::OffsetPose*, 0x38>(this, std::forward<::RootMotion::FinalIK::OffsetPose*>(value));
}
constexpr ::RootMotion::FinalIK::OffsetPose* RootMotion::FinalIK::BodyTilt::__get_poseLeft()  {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::OffsetPose*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::OffsetPose*> RootMotion::FinalIK::BodyTilt::__get_poseLeft() const {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::OffsetPose*, 0x38>(this);
}
constexpr void RootMotion::FinalIK::BodyTilt::__set_poseRight(::RootMotion::FinalIK::OffsetPose*  value)  {
::cordl_internals::setInstanceField<::RootMotion::FinalIK::OffsetPose*, 0x40>(this, std::forward<::RootMotion::FinalIK::OffsetPose*>(value));
}
constexpr ::RootMotion::FinalIK::OffsetPose* RootMotion::FinalIK::BodyTilt::__get_poseRight()  {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::OffsetPose*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::OffsetPose*> RootMotion::FinalIK::BodyTilt::__get_poseRight() const {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::OffsetPose*, 0x40>(this);
}
constexpr void RootMotion::FinalIK::BodyTilt::__set_tiltAngle(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x48>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::BodyTilt::__get_tiltAngle()  {
return ::cordl_internals::getInstanceField<float_t, 0x48>(this);
}
constexpr float_t const& RootMotion::FinalIK::BodyTilt::__get_tiltAngle() const {
return ::cordl_internals::getInstanceField<float_t, 0x48>(this);
}
constexpr void RootMotion::FinalIK::BodyTilt::__set_lastForward(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x4c>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::BodyTilt::__get_lastForward()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x4c>(this);
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::BodyTilt::__get_lastForward() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x4c>(this);
}
inline void RootMotion::FinalIK::BodyTilt::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::BodyTilt*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void RootMotion::FinalIK::BodyTilt::OnModifyOffset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::BodyTilt*>::get(),
                            "OnModifyOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::RootMotion::FinalIK::BodyTilt* RootMotion::FinalIK::BodyTilt::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::BodyTilt*>());
}
inline void RootMotion::FinalIK::BodyTilt::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::BodyTilt*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
