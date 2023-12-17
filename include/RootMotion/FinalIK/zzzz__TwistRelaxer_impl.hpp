#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "RootMotion/FinalIK/zzzz__TwistRelaxer_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "RootMotion/FinalIK/zzzz__IK_def.hpp"
//  Writing Method size for method: ::RootMotion::FinalIK::TwistRelaxer.Relax
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::TwistRelaxer::*)()>(&::RootMotion::FinalIK::TwistRelaxer::Relax)> {
  constexpr static std::size_t size = 0x444;
  constexpr static std::size_t addrs = 0x1282e50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::TwistRelaxer*>::get(),
                            "Relax",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::TwistRelaxer.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::TwistRelaxer::*)()>(&::RootMotion::FinalIK::TwistRelaxer::Start)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x1283294;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::TwistRelaxer*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::TwistRelaxer.OnPostUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::TwistRelaxer::*)()>(&::RootMotion::FinalIK::TwistRelaxer::OnPostUpdate)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x1283634;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::TwistRelaxer*>::get(),
                            "OnPostUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::TwistRelaxer.LateUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::TwistRelaxer::*)()>(&::RootMotion::FinalIK::TwistRelaxer::LateUpdate)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x12836ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::TwistRelaxer*>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::TwistRelaxer.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::TwistRelaxer::*)()>(&::RootMotion::FinalIK::TwistRelaxer::OnDestroy)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x1283724;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::TwistRelaxer*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::TwistRelaxer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::TwistRelaxer::*)()>(&::RootMotion::FinalIK::TwistRelaxer::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x128383c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::TwistRelaxer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void RootMotion::FinalIK::TwistRelaxer::__set_ik(::RootMotion::FinalIK::IK*  value)  {
::cordl_internals::setInstanceField<::RootMotion::FinalIK::IK*, 0x18>(this, std::forward<::RootMotion::FinalIK::IK*>(value));
}
constexpr ::RootMotion::FinalIK::IK* RootMotion::FinalIK::TwistRelaxer::__get_ik()  {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::IK*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::IK*> RootMotion::FinalIK::TwistRelaxer::__get_ik() const {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::IK*, 0x18>(this);
}
constexpr void RootMotion::FinalIK::TwistRelaxer::__set_parent(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x20>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* RootMotion::FinalIK::TwistRelaxer::__get_parent()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> RootMotion::FinalIK::TwistRelaxer::__get_parent() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x20>(this);
}
constexpr void RootMotion::FinalIK::TwistRelaxer::__set_child(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x28>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* RootMotion::FinalIK::TwistRelaxer::__get_child()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> RootMotion::FinalIK::TwistRelaxer::__get_child() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x28>(this);
}
constexpr void RootMotion::FinalIK::TwistRelaxer::__set_weight(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::TwistRelaxer::__get_weight()  {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr float_t const& RootMotion::FinalIK::TwistRelaxer::__get_weight() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr void RootMotion::FinalIK::TwistRelaxer::__set_parentChildCrossfade(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x34>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::TwistRelaxer::__get_parentChildCrossfade()  {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this);
}
constexpr float_t const& RootMotion::FinalIK::TwistRelaxer::__get_parentChildCrossfade() const {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this);
}
constexpr void RootMotion::FinalIK::TwistRelaxer::__set_twistAngleOffset(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x38>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::TwistRelaxer::__get_twistAngleOffset()  {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this);
}
constexpr float_t const& RootMotion::FinalIK::TwistRelaxer::__get_twistAngleOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this);
}
constexpr void RootMotion::FinalIK::TwistRelaxer::__set_twistAxis(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x3c>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::TwistRelaxer::__get_twistAxis()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x3c>(this);
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::TwistRelaxer::__get_twistAxis() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x3c>(this);
}
constexpr void RootMotion::FinalIK::TwistRelaxer::__set_axis(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x48>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::TwistRelaxer::__get_axis()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x48>(this);
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::TwistRelaxer::__get_axis() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x48>(this);
}
constexpr void RootMotion::FinalIK::TwistRelaxer::__set_axisRelativeToParentDefault(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x54>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::TwistRelaxer::__get_axisRelativeToParentDefault()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x54>(this);
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::TwistRelaxer::__get_axisRelativeToParentDefault() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x54>(this);
}
constexpr void RootMotion::FinalIK::TwistRelaxer::__set_axisRelativeToChildDefault(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x60>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::TwistRelaxer::__get_axisRelativeToChildDefault()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x60>(this);
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::TwistRelaxer::__get_axisRelativeToChildDefault() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x60>(this);
}
inline void RootMotion::FinalIK::TwistRelaxer::Relax()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::TwistRelaxer*>::get(),
                            "Relax",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void RootMotion::FinalIK::TwistRelaxer::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::TwistRelaxer*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void RootMotion::FinalIK::TwistRelaxer::OnPostUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::TwistRelaxer*>::get(),
                            "OnPostUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void RootMotion::FinalIK::TwistRelaxer::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::TwistRelaxer*>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void RootMotion::FinalIK::TwistRelaxer::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::TwistRelaxer*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::RootMotion::FinalIK::TwistRelaxer* RootMotion::FinalIK::TwistRelaxer::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::TwistRelaxer*>());
}
inline void RootMotion::FinalIK::TwistRelaxer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::TwistRelaxer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
