#pragma once
#include "RootMotion/FinalIK/zzzz__OffsetModifier_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "RootMotion/FinalIK/zzzz__Amplifier_def.hpp"
#include "RootMotion/FinalIK/zzzz__FullBodyBipedEffector_def.hpp"
#include "RootMotion/FinalIK/zzzz__Amplifier_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolverFullBodyBiped_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__Amplifier__Body__EffectorLink._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__Amplifier__Body__EffectorLink::*)()>(&::GlobalNamespace::__Amplifier__Body__EffectorLink::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1294a24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Amplifier__Body__EffectorLink*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__Amplifier__Body__EffectorLink::__set_effector(::RootMotion::FinalIK::FullBodyBipedEffector  value)  {
::cordl_internals::setInstanceField<::RootMotion::FinalIK::FullBodyBipedEffector, 0x10>(this, std::forward<::RootMotion::FinalIK::FullBodyBipedEffector>(value));
}
constexpr ::RootMotion::FinalIK::FullBodyBipedEffector& GlobalNamespace::__Amplifier__Body__EffectorLink::__get_effector()  {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::FullBodyBipedEffector, 0x10>(this);
}
constexpr ::RootMotion::FinalIK::FullBodyBipedEffector const& GlobalNamespace::__Amplifier__Body__EffectorLink::__get_effector() const {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::FullBodyBipedEffector, 0x10>(this);
}
constexpr void GlobalNamespace::__Amplifier__Body__EffectorLink::__set_weight(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__Amplifier__Body__EffectorLink::__get_weight()  {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this);
}
constexpr float_t const& GlobalNamespace::__Amplifier__Body__EffectorLink::__get_weight() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this);
}
inline ::GlobalNamespace::__Amplifier__Body__EffectorLink* GlobalNamespace::__Amplifier__Body__EffectorLink::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__Amplifier__Body__EffectorLink*>());
}
inline void GlobalNamespace::__Amplifier__Body__EffectorLink::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Amplifier__Body__EffectorLink*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::RootMotion::FinalIK::__Amplifier__Body.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__Amplifier__Body::*)(::RootMotion::FinalIK::IKSolverFullBodyBiped*, float_t, float_t)>(&::RootMotion::FinalIK::__Amplifier__Body::Update)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x12946cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Amplifier__Body*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::IKSolverFullBodyBiped*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Amplifier__Body.Multiply
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::RootMotion::FinalIK::__Amplifier__Body::Multiply)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x12949fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Amplifier__Body*>::get(),
                            "Multiply",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Amplifier__Body._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__Amplifier__Body::*)()>(&::RootMotion::FinalIK::__Amplifier__Body::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x1294a0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Amplifier__Body*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void RootMotion::FinalIK::__Amplifier__Body::__set_transform(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x10>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* RootMotion::FinalIK::__Amplifier__Body::__get_transform()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> RootMotion::FinalIK::__Amplifier__Body::__get_transform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x10>(this);
}
constexpr void RootMotion::FinalIK::__Amplifier__Body::__set_relativeTo(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x18>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* RootMotion::FinalIK::__Amplifier__Body::__get_relativeTo()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> RootMotion::FinalIK::__Amplifier__Body::__get_relativeTo() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x18>(this);
}
constexpr void RootMotion::FinalIK::__Amplifier__Body::__set_effectorLinks(::ArrayW<::GlobalNamespace::__Amplifier__Body__EffectorLink*,::Array<::GlobalNamespace::__Amplifier__Body__EffectorLink*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::__Amplifier__Body__EffectorLink*,::Array<::GlobalNamespace::__Amplifier__Body__EffectorLink*>*>, 0x20>(this, std::forward<::ArrayW<::GlobalNamespace::__Amplifier__Body__EffectorLink*,::Array<::GlobalNamespace::__Amplifier__Body__EffectorLink*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::__Amplifier__Body__EffectorLink*,::Array<::GlobalNamespace::__Amplifier__Body__EffectorLink*>*>& RootMotion::FinalIK::__Amplifier__Body::__get_effectorLinks()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__Amplifier__Body__EffectorLink*,::Array<::GlobalNamespace::__Amplifier__Body__EffectorLink*>*>, 0x20>(this);
}
constexpr ::ArrayW<::GlobalNamespace::__Amplifier__Body__EffectorLink*,::Array<::GlobalNamespace::__Amplifier__Body__EffectorLink*>*> const& RootMotion::FinalIK::__Amplifier__Body::__get_effectorLinks() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__Amplifier__Body__EffectorLink*,::Array<::GlobalNamespace::__Amplifier__Body__EffectorLink*>*>, 0x20>(this);
}
constexpr void RootMotion::FinalIK::__Amplifier__Body::__set_verticalWeight(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::__Amplifier__Body::__get_verticalWeight()  {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
constexpr float_t const& RootMotion::FinalIK::__Amplifier__Body::__get_verticalWeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
constexpr void RootMotion::FinalIK::__Amplifier__Body::__set_horizontalWeight(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x2c>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::__Amplifier__Body::__get_horizontalWeight()  {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this);
}
constexpr float_t const& RootMotion::FinalIK::__Amplifier__Body::__get_horizontalWeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this);
}
constexpr void RootMotion::FinalIK::__Amplifier__Body::__set_speed(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::__Amplifier__Body::__get_speed()  {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr float_t const& RootMotion::FinalIK::__Amplifier__Body::__get_speed() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr void RootMotion::FinalIK::__Amplifier__Body::__set_lastRelativePos(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x34>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__Amplifier__Body::__get_lastRelativePos()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x34>(this);
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__Amplifier__Body::__get_lastRelativePos() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x34>(this);
}
constexpr void RootMotion::FinalIK::__Amplifier__Body::__set_smoothDelta(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x40>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__Amplifier__Body::__get_smoothDelta()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x40>(this);
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__Amplifier__Body::__get_smoothDelta() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x40>(this);
}
constexpr void RootMotion::FinalIK::__Amplifier__Body::__set_firstUpdate(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x4c>(this, std::forward<bool>(value));
}
constexpr bool& RootMotion::FinalIK::__Amplifier__Body::__get_firstUpdate()  {
return ::cordl_internals::getInstanceField<bool, 0x4c>(this);
}
constexpr bool const& RootMotion::FinalIK::__Amplifier__Body::__get_firstUpdate() const {
return ::cordl_internals::getInstanceField<bool, 0x4c>(this);
}
inline void RootMotion::FinalIK::__Amplifier__Body::Update(::RootMotion::FinalIK::IKSolverFullBodyBiped*  solver, float_t  w, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Amplifier__Body*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::IKSolverFullBodyBiped*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, solver, w, deltaTime);
}
inline ::UnityEngine::Vector3 RootMotion::FinalIK::__Amplifier__Body::Multiply(::UnityEngine::Vector3  v1, ::UnityEngine::Vector3  v2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Amplifier__Body*>::get(),
                            "Multiply",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, v1, v2);
}
inline ::RootMotion::FinalIK::__Amplifier__Body* RootMotion::FinalIK::__Amplifier__Body::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::__Amplifier__Body*>());
}
inline void RootMotion::FinalIK::__Amplifier__Body::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Amplifier__Body*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::RootMotion::FinalIK::Amplifier.OnModifyOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::Amplifier::*)()>(&::RootMotion::FinalIK::Amplifier::OnModifyOffset)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x129457c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Amplifier*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Amplifier*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Amplifier._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::Amplifier::*)()>(&::RootMotion::FinalIK::Amplifier::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x12949dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Amplifier*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void RootMotion::FinalIK::Amplifier::__set_bodies(::ArrayW<::RootMotion::FinalIK::__Amplifier__Body*,::Array<::RootMotion::FinalIK::__Amplifier__Body*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::RootMotion::FinalIK::__Amplifier__Body*,::Array<::RootMotion::FinalIK::__Amplifier__Body*>*>, 0x30>(this, std::forward<::ArrayW<::RootMotion::FinalIK::__Amplifier__Body*,::Array<::RootMotion::FinalIK::__Amplifier__Body*>*>>(value));
}
constexpr ::ArrayW<::RootMotion::FinalIK::__Amplifier__Body*,::Array<::RootMotion::FinalIK::__Amplifier__Body*>*>& RootMotion::FinalIK::Amplifier::__get_bodies()  {
return ::cordl_internals::getInstanceField<::ArrayW<::RootMotion::FinalIK::__Amplifier__Body*,::Array<::RootMotion::FinalIK::__Amplifier__Body*>*>, 0x30>(this);
}
constexpr ::ArrayW<::RootMotion::FinalIK::__Amplifier__Body*,::Array<::RootMotion::FinalIK::__Amplifier__Body*>*> const& RootMotion::FinalIK::Amplifier::__get_bodies() const {
return ::cordl_internals::getInstanceField<::ArrayW<::RootMotion::FinalIK::__Amplifier__Body*,::Array<::RootMotion::FinalIK::__Amplifier__Body*>*>, 0x30>(this);
}
inline void RootMotion::FinalIK::Amplifier::OnModifyOffset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Amplifier*>::get(),
                            "OnModifyOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::RootMotion::FinalIK::Amplifier* RootMotion::FinalIK::Amplifier::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::Amplifier*>());
}
inline void RootMotion::FinalIK::Amplifier::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Amplifier*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
