#pragma once
#include "RootMotion/FinalIK/zzzz__OffsetModifier_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "RootMotion/FinalIK/zzzz__Recoil_def.hpp"
#include "RootMotion/FinalIK/zzzz__FullBodyBipedEffector_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "RootMotion/FinalIK/zzzz__Recoil_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "RootMotion/FinalIK/zzzz__AimIK_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKEffector_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolverFullBodyBiped_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__Recoil__RecoilOffset__EffectorLink._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__Recoil__RecoilOffset__EffectorLink::*)()>(&::GlobalNamespace::__Recoil__RecoilOffset__EffectorLink::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x129a374;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Recoil__RecoilOffset__EffectorLink*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__Recoil__RecoilOffset__EffectorLink::__set_effector(::RootMotion::FinalIK::FullBodyBipedEffector  value)  {
::cordl_internals::setInstanceField<::RootMotion::FinalIK::FullBodyBipedEffector, 0x10>(this, std::forward<::RootMotion::FinalIK::FullBodyBipedEffector>(value));
}
constexpr ::RootMotion::FinalIK::FullBodyBipedEffector& GlobalNamespace::__Recoil__RecoilOffset__EffectorLink::__get_effector()  {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::FullBodyBipedEffector, 0x10>(this);
}
constexpr ::RootMotion::FinalIK::FullBodyBipedEffector const& GlobalNamespace::__Recoil__RecoilOffset__EffectorLink::__get_effector() const {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::FullBodyBipedEffector, 0x10>(this);
}
constexpr void GlobalNamespace::__Recoil__RecoilOffset__EffectorLink::__set_weight(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__Recoil__RecoilOffset__EffectorLink::__get_weight()  {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this);
}
constexpr float_t const& GlobalNamespace::__Recoil__RecoilOffset__EffectorLink::__get_weight() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this);
}
inline ::GlobalNamespace::__Recoil__RecoilOffset__EffectorLink* GlobalNamespace::__Recoil__RecoilOffset__EffectorLink::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__Recoil__RecoilOffset__EffectorLink*>());
}
inline void GlobalNamespace::__Recoil__RecoilOffset__EffectorLink::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Recoil__RecoilOffset__EffectorLink*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::RootMotion::FinalIK::__Recoil__RecoilOffset.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__Recoil__RecoilOffset::*)()>(&::RootMotion::FinalIK::__Recoil__RecoilOffset::Start)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x12991c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Recoil__RecoilOffset*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Recoil__RecoilOffset.Apply
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__Recoil__RecoilOffset::*)(::RootMotion::FinalIK::IKSolverFullBodyBiped*, ::UnityEngine::Quaternion, float_t, float_t, float_t)>(&::RootMotion::FinalIK::__Recoil__RecoilOffset::Apply)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x1299d20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Recoil__RecoilOffset*>::get(),
                            "Apply",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::IKSolverFullBodyBiped*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Recoil__RecoilOffset._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__Recoil__RecoilOffset::*)()>(&::RootMotion::FinalIK::__Recoil__RecoilOffset::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x129a360;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Recoil__RecoilOffset*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void RootMotion::FinalIK::__Recoil__RecoilOffset::__set_offset(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x10>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__Recoil__RecoilOffset::__get_offset()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x10>(this);
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__Recoil__RecoilOffset::__get_offset() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x10>(this);
}
constexpr void RootMotion::FinalIK::__Recoil__RecoilOffset::__set_additivity(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::__Recoil__RecoilOffset::__get_additivity()  {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr float_t const& RootMotion::FinalIK::__Recoil__RecoilOffset::__get_additivity() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr void RootMotion::FinalIK::__Recoil__RecoilOffset::__set_maxAdditiveOffsetMag(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::__Recoil__RecoilOffset::__get_maxAdditiveOffsetMag()  {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr float_t const& RootMotion::FinalIK::__Recoil__RecoilOffset::__get_maxAdditiveOffsetMag() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr void RootMotion::FinalIK::__Recoil__RecoilOffset::__set_effectorLinks(::ArrayW<::GlobalNamespace::__Recoil__RecoilOffset__EffectorLink*,::Array<::GlobalNamespace::__Recoil__RecoilOffset__EffectorLink*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::__Recoil__RecoilOffset__EffectorLink*,::Array<::GlobalNamespace::__Recoil__RecoilOffset__EffectorLink*>*>, 0x28>(this, std::forward<::ArrayW<::GlobalNamespace::__Recoil__RecoilOffset__EffectorLink*,::Array<::GlobalNamespace::__Recoil__RecoilOffset__EffectorLink*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::__Recoil__RecoilOffset__EffectorLink*,::Array<::GlobalNamespace::__Recoil__RecoilOffset__EffectorLink*>*>& RootMotion::FinalIK::__Recoil__RecoilOffset::__get_effectorLinks()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__Recoil__RecoilOffset__EffectorLink*,::Array<::GlobalNamespace::__Recoil__RecoilOffset__EffectorLink*>*>, 0x28>(this);
}
constexpr ::ArrayW<::GlobalNamespace::__Recoil__RecoilOffset__EffectorLink*,::Array<::GlobalNamespace::__Recoil__RecoilOffset__EffectorLink*>*> const& RootMotion::FinalIK::__Recoil__RecoilOffset::__get_effectorLinks() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__Recoil__RecoilOffset__EffectorLink*,::Array<::GlobalNamespace::__Recoil__RecoilOffset__EffectorLink*>*>, 0x28>(this);
}
constexpr void RootMotion::FinalIK::__Recoil__RecoilOffset::__set_additiveOffset(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x30>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__Recoil__RecoilOffset::__get_additiveOffset()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x30>(this);
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__Recoil__RecoilOffset::__get_additiveOffset() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x30>(this);
}
constexpr void RootMotion::FinalIK::__Recoil__RecoilOffset::__set_lastOffset(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x3c>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__Recoil__RecoilOffset::__get_lastOffset()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x3c>(this);
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__Recoil__RecoilOffset::__get_lastOffset() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x3c>(this);
}
inline void RootMotion::FinalIK::__Recoil__RecoilOffset::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Recoil__RecoilOffset*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void RootMotion::FinalIK::__Recoil__RecoilOffset::Apply(::RootMotion::FinalIK::IKSolverFullBodyBiped*  solver, ::UnityEngine::Quaternion  rotation, float_t  masterWeight, float_t  length, float_t  timeLeft)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Recoil__RecoilOffset*>::get(),
                            "Apply",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::IKSolverFullBodyBiped*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, solver, rotation, masterWeight, length, timeLeft);
}
inline ::RootMotion::FinalIK::__Recoil__RecoilOffset* RootMotion::FinalIK::__Recoil__RecoilOffset::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::__Recoil__RecoilOffset*>());
}
inline void RootMotion::FinalIK::__Recoil__RecoilOffset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Recoil__RecoilOffset*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
constexpr void RootMotion::FinalIK::__Recoil__Handedness::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& RootMotion::FinalIK::__Recoil__Handedness::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& RootMotion::FinalIK::__Recoil__Handedness::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::RootMotion::FinalIK::__Recoil__Handedness::__Recoil__Handedness(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::RootMotion::FinalIK::__Recoil__Handedness  RootMotion::FinalIK::__Recoil__Handedness::Right{static_cast<int32_t>(0x0)};
constexpr ::RootMotion::FinalIK::__Recoil__Handedness  RootMotion::FinalIK::__Recoil__Handedness::Left{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::RootMotion::FinalIK::Recoil.get_isFinished
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::Recoil::*)()>(&::RootMotion::FinalIK::Recoil::get_isFinished)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1299028;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Recoil*>::get(),
                            "get_isFinished",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Recoil.SetHandRotations
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::Recoil::*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion)>(&::RootMotion::FinalIK::Recoil::SetHandRotations)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x129904c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Recoil*>::get(),
                            "SetHandRotations",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Recoil.Fire
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::Recoil::*)(float_t)>(&::RootMotion::FinalIK::Recoil::Fire)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x1299078;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Recoil*>::get(),
                            "Fire",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Recoil.OnModifyOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::Recoil::*)()>(&::RootMotion::FinalIK::Recoil::OnModifyOffset)> {
  constexpr static std::size_t size = 0xa88;
  constexpr static std::size_t addrs = 0x1299298;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Recoil*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Recoil*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Recoil.AfterFBBIK
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::Recoil::*)()>(&::RootMotion::FinalIK::Recoil::AfterFBBIK)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x1299f9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Recoil*>::get(),
                            "AfterFBBIK",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Recoil.AfterAimIK
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::Recoil::*)()>(&::RootMotion::FinalIK::Recoil::AfterAimIK)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x129a0b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Recoil*>::get(),
                            "AfterAimIK",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Recoil.get_primaryHandEffector
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::IKEffector* (::RootMotion::FinalIK::Recoil::*)()>(&::RootMotion::FinalIK::Recoil::get_primaryHandEffector)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x1299f24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Recoil*>::get(),
                            "get_primaryHandEffector",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Recoil.get_secondaryHandEffector
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::IKEffector* (::RootMotion::FinalIK::Recoil::*)()>(&::RootMotion::FinalIK::Recoil::get_secondaryHandEffector)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x1299f60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Recoil*>::get(),
                            "get_secondaryHandEffector",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Recoil.get_primaryHand
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (::RootMotion::FinalIK::Recoil::*)()>(&::RootMotion::FinalIK::Recoil::get_primaryHand)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1299eec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Recoil*>::get(),
                            "get_primaryHand",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Recoil.get_secondaryHand
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (::RootMotion::FinalIK::Recoil::*)()>(&::RootMotion::FinalIK::Recoil::get_secondaryHand)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1299f08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Recoil*>::get(),
                            "get_secondaryHand",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Recoil.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::Recoil::*)()>(&::RootMotion::FinalIK::Recoil::OnDestroy)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x129a104;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Recoil*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Recoil*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Recoil._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::Recoil::*)()>(&::RootMotion::FinalIK::Recoil::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x129a2d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Recoil*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void RootMotion::FinalIK::Recoil::__set_aimIK(::RootMotion::FinalIK::AimIK*  value)  {
::cordl_internals::setInstanceField<::RootMotion::FinalIK::AimIK*, 0x30>(this, std::forward<::RootMotion::FinalIK::AimIK*>(value));
}
constexpr ::RootMotion::FinalIK::AimIK* RootMotion::FinalIK::Recoil::__get_aimIK()  {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::AimIK*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::AimIK*> RootMotion::FinalIK::Recoil::__get_aimIK() const {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::AimIK*, 0x30>(this);
}
constexpr void RootMotion::FinalIK::Recoil::__set_aimIKSolvedLast(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this, std::forward<bool>(value));
}
constexpr bool& RootMotion::FinalIK::Recoil::__get_aimIKSolvedLast()  {
return ::cordl_internals::getInstanceField<bool, 0x38>(this);
}
constexpr bool const& RootMotion::FinalIK::Recoil::__get_aimIKSolvedLast() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this);
}
constexpr void RootMotion::FinalIK::Recoil::__set_handedness(::RootMotion::FinalIK::__Recoil__Handedness  value)  {
::cordl_internals::setInstanceField<::RootMotion::FinalIK::__Recoil__Handedness, 0x3c>(this, std::forward<::RootMotion::FinalIK::__Recoil__Handedness>(value));
}
constexpr ::RootMotion::FinalIK::__Recoil__Handedness& RootMotion::FinalIK::Recoil::__get_handedness()  {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::__Recoil__Handedness, 0x3c>(this);
}
constexpr ::RootMotion::FinalIK::__Recoil__Handedness const& RootMotion::FinalIK::Recoil::__get_handedness() const {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::__Recoil__Handedness, 0x3c>(this);
}
constexpr void RootMotion::FinalIK::Recoil::__set_twoHanded(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x40>(this, std::forward<bool>(value));
}
constexpr bool& RootMotion::FinalIK::Recoil::__get_twoHanded()  {
return ::cordl_internals::getInstanceField<bool, 0x40>(this);
}
constexpr bool const& RootMotion::FinalIK::Recoil::__get_twoHanded() const {
return ::cordl_internals::getInstanceField<bool, 0x40>(this);
}
constexpr void RootMotion::FinalIK::Recoil::__set_recoilWeight(::UnityEngine::AnimationCurve*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AnimationCurve*, 0x48>(this, std::forward<::UnityEngine::AnimationCurve*>(value));
}
constexpr ::UnityEngine::AnimationCurve* RootMotion::FinalIK::Recoil::__get_recoilWeight()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationCurve*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> RootMotion::FinalIK::Recoil::__get_recoilWeight() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationCurve*, 0x48>(this);
}
constexpr void RootMotion::FinalIK::Recoil::__set_magnitudeRandom(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x50>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::Recoil::__get_magnitudeRandom()  {
return ::cordl_internals::getInstanceField<float_t, 0x50>(this);
}
constexpr float_t const& RootMotion::FinalIK::Recoil::__get_magnitudeRandom() const {
return ::cordl_internals::getInstanceField<float_t, 0x50>(this);
}
constexpr void RootMotion::FinalIK::Recoil::__set_rotationRandom(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x54>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::Recoil::__get_rotationRandom()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x54>(this);
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::Recoil::__get_rotationRandom() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x54>(this);
}
constexpr void RootMotion::FinalIK::Recoil::__set_handRotationOffset(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x60>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::Recoil::__get_handRotationOffset()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x60>(this);
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::Recoil::__get_handRotationOffset() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x60>(this);
}
constexpr void RootMotion::FinalIK::Recoil::__set_blendTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x6c>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::Recoil::__get_blendTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x6c>(this);
}
constexpr float_t const& RootMotion::FinalIK::Recoil::__get_blendTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x6c>(this);
}
constexpr void RootMotion::FinalIK::Recoil::__set_offsets(::ArrayW<::RootMotion::FinalIK::__Recoil__RecoilOffset*,::Array<::RootMotion::FinalIK::__Recoil__RecoilOffset*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::RootMotion::FinalIK::__Recoil__RecoilOffset*,::Array<::RootMotion::FinalIK::__Recoil__RecoilOffset*>*>, 0x70>(this, std::forward<::ArrayW<::RootMotion::FinalIK::__Recoil__RecoilOffset*,::Array<::RootMotion::FinalIK::__Recoil__RecoilOffset*>*>>(value));
}
constexpr ::ArrayW<::RootMotion::FinalIK::__Recoil__RecoilOffset*,::Array<::RootMotion::FinalIK::__Recoil__RecoilOffset*>*>& RootMotion::FinalIK::Recoil::__get_offsets()  {
return ::cordl_internals::getInstanceField<::ArrayW<::RootMotion::FinalIK::__Recoil__RecoilOffset*,::Array<::RootMotion::FinalIK::__Recoil__RecoilOffset*>*>, 0x70>(this);
}
constexpr ::ArrayW<::RootMotion::FinalIK::__Recoil__RecoilOffset*,::Array<::RootMotion::FinalIK::__Recoil__RecoilOffset*>*> const& RootMotion::FinalIK::Recoil::__get_offsets() const {
return ::cordl_internals::getInstanceField<::ArrayW<::RootMotion::FinalIK::__Recoil__RecoilOffset*,::Array<::RootMotion::FinalIK::__Recoil__RecoilOffset*>*>, 0x70>(this);
}
constexpr void RootMotion::FinalIK::Recoil::__set_rotationOffset(::UnityEngine::Quaternion  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Quaternion, 0x78>(this, std::forward<::UnityEngine::Quaternion>(value));
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::Recoil::__get_rotationOffset()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x78>(this);
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::Recoil::__get_rotationOffset() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x78>(this);
}
constexpr void RootMotion::FinalIK::Recoil::__set_magnitudeMlp(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x88>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::Recoil::__get_magnitudeMlp()  {
return ::cordl_internals::getInstanceField<float_t, 0x88>(this);
}
constexpr float_t const& RootMotion::FinalIK::Recoil::__get_magnitudeMlp() const {
return ::cordl_internals::getInstanceField<float_t, 0x88>(this);
}
constexpr void RootMotion::FinalIK::Recoil::__set_endTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x8c>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::Recoil::__get_endTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x8c>(this);
}
constexpr float_t const& RootMotion::FinalIK::Recoil::__get_endTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x8c>(this);
}
constexpr void RootMotion::FinalIK::Recoil::__set_handRotation(::UnityEngine::Quaternion  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Quaternion, 0x90>(this, std::forward<::UnityEngine::Quaternion>(value));
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::Recoil::__get_handRotation()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x90>(this);
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::Recoil::__get_handRotation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x90>(this);
}
constexpr void RootMotion::FinalIK::Recoil::__set_secondaryHandRelativeRotation(::UnityEngine::Quaternion  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Quaternion, 0xa0>(this, std::forward<::UnityEngine::Quaternion>(value));
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::Recoil::__get_secondaryHandRelativeRotation()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0xa0>(this);
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::Recoil::__get_secondaryHandRelativeRotation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0xa0>(this);
}
constexpr void RootMotion::FinalIK::Recoil::__set_randomRotation(::UnityEngine::Quaternion  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Quaternion, 0xb0>(this, std::forward<::UnityEngine::Quaternion>(value));
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::Recoil::__get_randomRotation()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0xb0>(this);
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::Recoil::__get_randomRotation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0xb0>(this);
}
constexpr void RootMotion::FinalIK::Recoil::__set_length(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0xc0>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::Recoil::__get_length()  {
return ::cordl_internals::getInstanceField<float_t, 0xc0>(this);
}
constexpr float_t const& RootMotion::FinalIK::Recoil::__get_length() const {
return ::cordl_internals::getInstanceField<float_t, 0xc0>(this);
}
constexpr void RootMotion::FinalIK::Recoil::__set_initiated(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xc4>(this, std::forward<bool>(value));
}
constexpr bool& RootMotion::FinalIK::Recoil::__get_initiated()  {
return ::cordl_internals::getInstanceField<bool, 0xc4>(this);
}
constexpr bool const& RootMotion::FinalIK::Recoil::__get_initiated() const {
return ::cordl_internals::getInstanceField<bool, 0xc4>(this);
}
constexpr void RootMotion::FinalIK::Recoil::__set_blendWeight(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0xc8>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::Recoil::__get_blendWeight()  {
return ::cordl_internals::getInstanceField<float_t, 0xc8>(this);
}
constexpr float_t const& RootMotion::FinalIK::Recoil::__get_blendWeight() const {
return ::cordl_internals::getInstanceField<float_t, 0xc8>(this);
}
constexpr void RootMotion::FinalIK::Recoil::__set_w(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0xcc>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::Recoil::__get_w()  {
return ::cordl_internals::getInstanceField<float_t, 0xcc>(this);
}
constexpr float_t const& RootMotion::FinalIK::Recoil::__get_w() const {
return ::cordl_internals::getInstanceField<float_t, 0xcc>(this);
}
constexpr void RootMotion::FinalIK::Recoil::__set_primaryHandRotation(::UnityEngine::Quaternion  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Quaternion, 0xd0>(this, std::forward<::UnityEngine::Quaternion>(value));
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::Recoil::__get_primaryHandRotation()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0xd0>(this);
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::Recoil::__get_primaryHandRotation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0xd0>(this);
}
constexpr void RootMotion::FinalIK::Recoil::__set_handRotationsSet(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xe0>(this, std::forward<bool>(value));
}
constexpr bool& RootMotion::FinalIK::Recoil::__get_handRotationsSet()  {
return ::cordl_internals::getInstanceField<bool, 0xe0>(this);
}
constexpr bool const& RootMotion::FinalIK::Recoil::__get_handRotationsSet() const {
return ::cordl_internals::getInstanceField<bool, 0xe0>(this);
}
constexpr void RootMotion::FinalIK::Recoil::__set_aimIKAxis(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0xe4>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::Recoil::__get_aimIKAxis()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0xe4>(this);
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::Recoil::__get_aimIKAxis() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0xe4>(this);
}
inline bool RootMotion::FinalIK::Recoil::get_isFinished()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Recoil*>::get(),
                            "get_isFinished",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void RootMotion::FinalIK::Recoil::SetHandRotations(::UnityEngine::Quaternion  leftHandRotation, ::UnityEngine::Quaternion  rightHandRotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Recoil*>::get(),
                            "SetHandRotations",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, leftHandRotation, rightHandRotation);
}
inline void RootMotion::FinalIK::Recoil::Fire(float_t  magnitude)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Recoil*>::get(),
                            "Fire",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, magnitude);
}
inline void RootMotion::FinalIK::Recoil::OnModifyOffset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Recoil*>::get(),
                            "OnModifyOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void RootMotion::FinalIK::Recoil::AfterFBBIK()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Recoil*>::get(),
                            "AfterFBBIK",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void RootMotion::FinalIK::Recoil::AfterAimIK()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Recoil*>::get(),
                            "AfterAimIK",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::RootMotion::FinalIK::IKEffector* RootMotion::FinalIK::Recoil::get_primaryHandEffector()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Recoil*>::get(),
                            "get_primaryHandEffector",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::RootMotion::FinalIK::IKEffector*, false>(*this, ___internal_method);
}
inline ::RootMotion::FinalIK::IKEffector* RootMotion::FinalIK::Recoil::get_secondaryHandEffector()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Recoil*>::get(),
                            "get_secondaryHandEffector",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::RootMotion::FinalIK::IKEffector*, false>(*this, ___internal_method);
}
inline ::UnityEngine::Transform* RootMotion::FinalIK::Recoil::get_primaryHand()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Recoil*>::get(),
                            "get_primaryHand",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Transform*, false>(*this, ___internal_method);
}
inline ::UnityEngine::Transform* RootMotion::FinalIK::Recoil::get_secondaryHand()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Recoil*>::get(),
                            "get_secondaryHand",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Transform*, false>(*this, ___internal_method);
}
inline void RootMotion::FinalIK::Recoil::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Recoil*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::RootMotion::FinalIK::Recoil* RootMotion::FinalIK::Recoil::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::Recoil*>());
}
inline void RootMotion::FinalIK::Recoil::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Recoil*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
