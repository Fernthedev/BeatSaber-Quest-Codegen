#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "RootMotion/FinalIK/zzzz__AimPoser_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "RootMotion/FinalIK/zzzz__AimPoser_def.hpp"
//  Writing Method size for method: ::RootMotion::FinalIK::__AimPoser__Pose.IsInDirection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::__AimPoser__Pose::*)(::UnityEngine::Vector3)>(&::RootMotion::FinalIK::__AimPoser__Pose::IsInDirection)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0x1293fe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__AimPoser__Pose*>::get(),
                            "IsInDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__AimPoser__Pose.SetAngleBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__AimPoser__Pose::*)(float_t)>(&::RootMotion::FinalIK::__AimPoser__Pose::SetAngleBuffer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1294558;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__AimPoser__Pose*>::get(),
                            "SetAngleBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__AimPoser__Pose._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__AimPoser__Pose::*)()>(&::RootMotion::FinalIK::__AimPoser__Pose::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1294560;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__AimPoser__Pose*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void RootMotion::FinalIK::__AimPoser__Pose::__set_visualize(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& RootMotion::FinalIK::__AimPoser__Pose::__get_visualize()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& RootMotion::FinalIK::__AimPoser__Pose::__get_visualize() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr void RootMotion::FinalIK::__AimPoser__Pose::__set_name(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& RootMotion::FinalIK::__AimPoser__Pose::__get_name()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& RootMotion::FinalIK::__AimPoser__Pose::__get_name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr void RootMotion::FinalIK::__AimPoser__Pose::__set_direction(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x20>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__AimPoser__Pose::__get_direction()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x20>(this);
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__AimPoser__Pose::__get_direction() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x20>(this);
}
constexpr void RootMotion::FinalIK::__AimPoser__Pose::__set_yaw(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x2c>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::__AimPoser__Pose::__get_yaw()  {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this);
}
constexpr float_t const& RootMotion::FinalIK::__AimPoser__Pose::__get_yaw() const {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this);
}
constexpr void RootMotion::FinalIK::__AimPoser__Pose::__set_pitch(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::__AimPoser__Pose::__get_pitch()  {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr float_t const& RootMotion::FinalIK::__AimPoser__Pose::__get_pitch() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr void RootMotion::FinalIK::__AimPoser__Pose::__set_angleBuffer(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x34>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::__AimPoser__Pose::__get_angleBuffer()  {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this);
}
constexpr float_t const& RootMotion::FinalIK::__AimPoser__Pose::__get_angleBuffer() const {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this);
}
inline bool RootMotion::FinalIK::__AimPoser__Pose::IsInDirection(::UnityEngine::Vector3  d)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__AimPoser__Pose*>::get(),
                            "IsInDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, d);
}
inline void RootMotion::FinalIK::__AimPoser__Pose::SetAngleBuffer(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__AimPoser__Pose*>::get(),
                            "SetAngleBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::RootMotion::FinalIK::__AimPoser__Pose* RootMotion::FinalIK::__AimPoser__Pose::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::__AimPoser__Pose*>());
}
inline void RootMotion::FinalIK::__AimPoser__Pose::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__AimPoser__Pose*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::RootMotion::FinalIK::AimPoser.GetPose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::__AimPoser__Pose* (::RootMotion::FinalIK::AimPoser::*)(::UnityEngine::Vector3)>(&::RootMotion::FinalIK::AimPoser::GetPose)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1293f18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::AimPoser*>::get(),
                            "GetPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::AimPoser.SetPoseActive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::AimPoser::*)(::RootMotion::FinalIK::__AimPoser__Pose*)>(&::RootMotion::FinalIK::AimPoser::SetPoseActive)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1294498;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::AimPoser*>::get(),
                            "SetPoseActive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__AimPoser__Pose*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::AimPoser._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::AimPoser::*)()>(&::RootMotion::FinalIK::AimPoser::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x12944f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::AimPoser*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void RootMotion::FinalIK::AimPoser::__set_angleBuffer(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::AimPoser::__get_angleBuffer()  {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr float_t const& RootMotion::FinalIK::AimPoser::__get_angleBuffer() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr void RootMotion::FinalIK::AimPoser::__set_poses(::ArrayW<::RootMotion::FinalIK::__AimPoser__Pose*,::Array<::RootMotion::FinalIK::__AimPoser__Pose*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::RootMotion::FinalIK::__AimPoser__Pose*,::Array<::RootMotion::FinalIK::__AimPoser__Pose*>*>, 0x20>(this, std::forward<::ArrayW<::RootMotion::FinalIK::__AimPoser__Pose*,::Array<::RootMotion::FinalIK::__AimPoser__Pose*>*>>(value));
}
constexpr ::ArrayW<::RootMotion::FinalIK::__AimPoser__Pose*,::Array<::RootMotion::FinalIK::__AimPoser__Pose*>*>& RootMotion::FinalIK::AimPoser::__get_poses()  {
return ::cordl_internals::getInstanceField<::ArrayW<::RootMotion::FinalIK::__AimPoser__Pose*,::Array<::RootMotion::FinalIK::__AimPoser__Pose*>*>, 0x20>(this);
}
constexpr ::ArrayW<::RootMotion::FinalIK::__AimPoser__Pose*,::Array<::RootMotion::FinalIK::__AimPoser__Pose*>*> const& RootMotion::FinalIK::AimPoser::__get_poses() const {
return ::cordl_internals::getInstanceField<::ArrayW<::RootMotion::FinalIK::__AimPoser__Pose*,::Array<::RootMotion::FinalIK::__AimPoser__Pose*>*>, 0x20>(this);
}
inline ::RootMotion::FinalIK::__AimPoser__Pose* RootMotion::FinalIK::AimPoser::GetPose(::UnityEngine::Vector3  localDirection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::AimPoser*>::get(),
                            "GetPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::RootMotion::FinalIK::__AimPoser__Pose*, false>(*this, ___internal_method, localDirection);
}
inline void RootMotion::FinalIK::AimPoser::SetPoseActive(::RootMotion::FinalIK::__AimPoser__Pose*  pose)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::AimPoser*>::get(),
                            "SetPoseActive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__AimPoser__Pose*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, pose);
}
inline ::RootMotion::FinalIK::AimPoser* RootMotion::FinalIK::AimPoser::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::AimPoser*>());
}
inline void RootMotion::FinalIK::AimPoser::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::AimPoser*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
