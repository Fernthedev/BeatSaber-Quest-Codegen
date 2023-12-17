#pragma once
#include "RootMotion/FinalIK/zzzz__OffsetModifier_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "RootMotion/FinalIK/zzzz__PenetrationAvoidance_def.hpp"
#include "RootMotion/FinalIK/zzzz__FullBodyBipedEffector_def.hpp"
#include "RootMotion/FinalIK/zzzz__PenetrationAvoidance_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolverFullBodyBiped_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__PenetrationAvoidance__Avoider__EffectorLink._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PenetrationAvoidance__Avoider__EffectorLink::*)()>(&::GlobalNamespace::__PenetrationAvoidance__Avoider__EffectorLink::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1299020;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PenetrationAvoidance__Avoider__EffectorLink*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__PenetrationAvoidance__Avoider__EffectorLink::__set_effector(::RootMotion::FinalIK::FullBodyBipedEffector  value)  {
::cordl_internals::setInstanceField<::RootMotion::FinalIK::FullBodyBipedEffector, 0x10>(this, std::forward<::RootMotion::FinalIK::FullBodyBipedEffector>(value));
}
constexpr ::RootMotion::FinalIK::FullBodyBipedEffector& GlobalNamespace::__PenetrationAvoidance__Avoider__EffectorLink::__get_effector()  {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::FullBodyBipedEffector, 0x10>(this);
}
constexpr ::RootMotion::FinalIK::FullBodyBipedEffector const& GlobalNamespace::__PenetrationAvoidance__Avoider__EffectorLink::__get_effector() const {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::FullBodyBipedEffector, 0x10>(this);
}
constexpr void GlobalNamespace::__PenetrationAvoidance__Avoider__EffectorLink::__set_weight(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__PenetrationAvoidance__Avoider__EffectorLink::__get_weight()  {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this);
}
constexpr float_t const& GlobalNamespace::__PenetrationAvoidance__Avoider__EffectorLink::__get_weight() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this);
}
inline ::GlobalNamespace::__PenetrationAvoidance__Avoider__EffectorLink* GlobalNamespace::__PenetrationAvoidance__Avoider__EffectorLink::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__PenetrationAvoidance__Avoider__EffectorLink*>());
}
inline void GlobalNamespace::__PenetrationAvoidance__Avoider__EffectorLink::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PenetrationAvoidance__Avoider__EffectorLink*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::RootMotion::FinalIK::__PenetrationAvoidance__Avoider.Solve
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__PenetrationAvoidance__Avoider::*)(::RootMotion::FinalIK::IKSolverFullBodyBiped*, float_t)>(&::RootMotion::FinalIK::__PenetrationAvoidance__Avoider::Solve)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1298a44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__PenetrationAvoidance__Avoider*>::get(),
                            "Solve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::IKSolverFullBodyBiped*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__PenetrationAvoidance__Avoider.GetOffsetTarget
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::RootMotion::FinalIK::__PenetrationAvoidance__Avoider::*)(::RootMotion::FinalIK::IKSolverFullBodyBiped*)>(&::RootMotion::FinalIK::__PenetrationAvoidance__Avoider::GetOffsetTarget)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x1298be4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__PenetrationAvoidance__Avoider*>::get(),
                            "GetOffsetTarget",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::IKSolverFullBodyBiped*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__PenetrationAvoidance__Avoider.Raycast
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::RootMotion::FinalIK::__PenetrationAvoidance__Avoider::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::RootMotion::FinalIK::__PenetrationAvoidance__Avoider::Raycast)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x1298cec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__PenetrationAvoidance__Avoider*>::get(),
                            "Raycast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__PenetrationAvoidance__Avoider._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__PenetrationAvoidance__Avoider::*)()>(&::RootMotion::FinalIK::__PenetrationAvoidance__Avoider::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x129900c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__PenetrationAvoidance__Avoider*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void RootMotion::FinalIK::__PenetrationAvoidance__Avoider::__set_raycastFrom(::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>, 0x10>(this, std::forward<::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>& RootMotion::FinalIK::__PenetrationAvoidance__Avoider::__get_raycastFrom()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>, 0x10>(this);
}
constexpr ::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*> const& RootMotion::FinalIK::__PenetrationAvoidance__Avoider::__get_raycastFrom() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>, 0x10>(this);
}
constexpr void RootMotion::FinalIK::__PenetrationAvoidance__Avoider::__set_raycastTo(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x18>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* RootMotion::FinalIK::__PenetrationAvoidance__Avoider::__get_raycastTo()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> RootMotion::FinalIK::__PenetrationAvoidance__Avoider::__get_raycastTo() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x18>(this);
}
constexpr void RootMotion::FinalIK::__PenetrationAvoidance__Avoider::__set_raycastRadius(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::__PenetrationAvoidance__Avoider::__get_raycastRadius()  {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr float_t const& RootMotion::FinalIK::__PenetrationAvoidance__Avoider::__get_raycastRadius() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr void RootMotion::FinalIK::__PenetrationAvoidance__Avoider::__set_effectors(::ArrayW<::GlobalNamespace::__PenetrationAvoidance__Avoider__EffectorLink*,::Array<::GlobalNamespace::__PenetrationAvoidance__Avoider__EffectorLink*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::__PenetrationAvoidance__Avoider__EffectorLink*,::Array<::GlobalNamespace::__PenetrationAvoidance__Avoider__EffectorLink*>*>, 0x28>(this, std::forward<::ArrayW<::GlobalNamespace::__PenetrationAvoidance__Avoider__EffectorLink*,::Array<::GlobalNamespace::__PenetrationAvoidance__Avoider__EffectorLink*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::__PenetrationAvoidance__Avoider__EffectorLink*,::Array<::GlobalNamespace::__PenetrationAvoidance__Avoider__EffectorLink*>*>& RootMotion::FinalIK::__PenetrationAvoidance__Avoider::__get_effectors()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__PenetrationAvoidance__Avoider__EffectorLink*,::Array<::GlobalNamespace::__PenetrationAvoidance__Avoider__EffectorLink*>*>, 0x28>(this);
}
constexpr ::ArrayW<::GlobalNamespace::__PenetrationAvoidance__Avoider__EffectorLink*,::Array<::GlobalNamespace::__PenetrationAvoidance__Avoider__EffectorLink*>*> const& RootMotion::FinalIK::__PenetrationAvoidance__Avoider::__get_effectors() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__PenetrationAvoidance__Avoider__EffectorLink*,::Array<::GlobalNamespace::__PenetrationAvoidance__Avoider__EffectorLink*>*>, 0x28>(this);
}
constexpr void RootMotion::FinalIK::__PenetrationAvoidance__Avoider::__set_smoothTimeIn(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::__PenetrationAvoidance__Avoider::__get_smoothTimeIn()  {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr float_t const& RootMotion::FinalIK::__PenetrationAvoidance__Avoider::__get_smoothTimeIn() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr void RootMotion::FinalIK::__PenetrationAvoidance__Avoider::__set_smoothTimeOut(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x34>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::__PenetrationAvoidance__Avoider::__get_smoothTimeOut()  {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this);
}
constexpr float_t const& RootMotion::FinalIK::__PenetrationAvoidance__Avoider::__get_smoothTimeOut() const {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this);
}
constexpr void RootMotion::FinalIK::__PenetrationAvoidance__Avoider::__set_layers(::UnityEngine::LayerMask  value)  {
::cordl_internals::setInstanceField<::UnityEngine::LayerMask, 0x38>(this, std::forward<::UnityEngine::LayerMask>(value));
}
constexpr ::UnityEngine::LayerMask& RootMotion::FinalIK::__PenetrationAvoidance__Avoider::__get_layers()  {
return ::cordl_internals::getInstanceField<::UnityEngine::LayerMask, 0x38>(this);
}
constexpr ::UnityEngine::LayerMask const& RootMotion::FinalIK::__PenetrationAvoidance__Avoider::__get_layers() const {
return ::cordl_internals::getInstanceField<::UnityEngine::LayerMask, 0x38>(this);
}
constexpr void RootMotion::FinalIK::__PenetrationAvoidance__Avoider::__set_offset(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x3c>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__PenetrationAvoidance__Avoider::__get_offset()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x3c>(this);
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__PenetrationAvoidance__Avoider::__get_offset() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x3c>(this);
}
constexpr void RootMotion::FinalIK::__PenetrationAvoidance__Avoider::__set_offsetTarget(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x48>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__PenetrationAvoidance__Avoider::__get_offsetTarget()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x48>(this);
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__PenetrationAvoidance__Avoider::__get_offsetTarget() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x48>(this);
}
constexpr void RootMotion::FinalIK::__PenetrationAvoidance__Avoider::__set_offsetV(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x54>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__PenetrationAvoidance__Avoider::__get_offsetV()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x54>(this);
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__PenetrationAvoidance__Avoider::__get_offsetV() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x54>(this);
}
inline void RootMotion::FinalIK::__PenetrationAvoidance__Avoider::Solve(::RootMotion::FinalIK::IKSolverFullBodyBiped*  solver, float_t  weight)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__PenetrationAvoidance__Avoider*>::get(),
                            "Solve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::IKSolverFullBodyBiped*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, solver, weight);
}
inline ::UnityEngine::Vector3 RootMotion::FinalIK::__PenetrationAvoidance__Avoider::GetOffsetTarget(::RootMotion::FinalIK::IKSolverFullBodyBiped*  solver)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__PenetrationAvoidance__Avoider*>::get(),
                            "GetOffsetTarget",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::IKSolverFullBodyBiped*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(*this, ___internal_method, solver);
}
inline ::UnityEngine::Vector3 RootMotion::FinalIK::__PenetrationAvoidance__Avoider::Raycast(::UnityEngine::Vector3  from, ::UnityEngine::Vector3  to)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__PenetrationAvoidance__Avoider*>::get(),
                            "Raycast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(*this, ___internal_method, from, to);
}
inline ::RootMotion::FinalIK::__PenetrationAvoidance__Avoider* RootMotion::FinalIK::__PenetrationAvoidance__Avoider::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::__PenetrationAvoidance__Avoider*>());
}
inline void RootMotion::FinalIK::__PenetrationAvoidance__Avoider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__PenetrationAvoidance__Avoider*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::RootMotion::FinalIK::PenetrationAvoidance.OnModifyOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::PenetrationAvoidance::*)()>(&::RootMotion::FinalIK::PenetrationAvoidance::OnModifyOffset)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x12989d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::PenetrationAvoidance*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::PenetrationAvoidance*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::PenetrationAvoidance._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::PenetrationAvoidance::*)()>(&::RootMotion::FinalIK::PenetrationAvoidance::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1298bd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::PenetrationAvoidance*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void RootMotion::FinalIK::PenetrationAvoidance::__set_avoiders(::ArrayW<::RootMotion::FinalIK::__PenetrationAvoidance__Avoider*,::Array<::RootMotion::FinalIK::__PenetrationAvoidance__Avoider*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::RootMotion::FinalIK::__PenetrationAvoidance__Avoider*,::Array<::RootMotion::FinalIK::__PenetrationAvoidance__Avoider*>*>, 0x30>(this, std::forward<::ArrayW<::RootMotion::FinalIK::__PenetrationAvoidance__Avoider*,::Array<::RootMotion::FinalIK::__PenetrationAvoidance__Avoider*>*>>(value));
}
constexpr ::ArrayW<::RootMotion::FinalIK::__PenetrationAvoidance__Avoider*,::Array<::RootMotion::FinalIK::__PenetrationAvoidance__Avoider*>*>& RootMotion::FinalIK::PenetrationAvoidance::__get_avoiders()  {
return ::cordl_internals::getInstanceField<::ArrayW<::RootMotion::FinalIK::__PenetrationAvoidance__Avoider*,::Array<::RootMotion::FinalIK::__PenetrationAvoidance__Avoider*>*>, 0x30>(this);
}
constexpr ::ArrayW<::RootMotion::FinalIK::__PenetrationAvoidance__Avoider*,::Array<::RootMotion::FinalIK::__PenetrationAvoidance__Avoider*>*> const& RootMotion::FinalIK::PenetrationAvoidance::__get_avoiders() const {
return ::cordl_internals::getInstanceField<::ArrayW<::RootMotion::FinalIK::__PenetrationAvoidance__Avoider*,::Array<::RootMotion::FinalIK::__PenetrationAvoidance__Avoider*>*>, 0x30>(this);
}
inline void RootMotion::FinalIK::PenetrationAvoidance::OnModifyOffset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::PenetrationAvoidance*>::get(),
                            "OnModifyOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::RootMotion::FinalIK::PenetrationAvoidance* RootMotion::FinalIK::PenetrationAvoidance::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::PenetrationAvoidance*>());
}
inline void RootMotion::FinalIK::PenetrationAvoidance::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::PenetrationAvoidance*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
