#pragma once
#include "RootMotion/FinalIK/zzzz__OffsetModifier_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "RootMotion/FinalIK/zzzz__Inertia_def.hpp"
#include "RootMotion/FinalIK/zzzz__FullBodyBipedEffector_def.hpp"
#include "RootMotion/FinalIK/zzzz__OffsetModifier_def.hpp"
#include "RootMotion/FinalIK/zzzz__Inertia_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolverFullBodyBiped_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__Inertia__Body__EffectorLink._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__Inertia__Body__EffectorLink::*)()>(&::GlobalNamespace::__Inertia__Body__EffectorLink::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12971b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Inertia__Body__EffectorLink*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__Inertia__Body__EffectorLink::__set_effector(::RootMotion::FinalIK::FullBodyBipedEffector  value)  {
::cordl_internals::setInstanceField<::RootMotion::FinalIK::FullBodyBipedEffector, 0x10>(this, std::forward<::RootMotion::FinalIK::FullBodyBipedEffector>(value));
}
constexpr ::RootMotion::FinalIK::FullBodyBipedEffector& GlobalNamespace::__Inertia__Body__EffectorLink::__get_effector()  {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::FullBodyBipedEffector, 0x10>(this);
}
constexpr ::RootMotion::FinalIK::FullBodyBipedEffector const& GlobalNamespace::__Inertia__Body__EffectorLink::__get_effector() const {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::FullBodyBipedEffector, 0x10>(this);
}
constexpr void GlobalNamespace::__Inertia__Body__EffectorLink::__set_weight(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__Inertia__Body__EffectorLink::__get_weight()  {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this);
}
constexpr float_t const& GlobalNamespace::__Inertia__Body__EffectorLink::__get_weight() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this);
}
inline ::GlobalNamespace::__Inertia__Body__EffectorLink* GlobalNamespace::__Inertia__Body__EffectorLink::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__Inertia__Body__EffectorLink*>());
}
inline void GlobalNamespace::__Inertia__Body__EffectorLink::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Inertia__Body__EffectorLink*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::RootMotion::FinalIK::__Inertia__Body.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__Inertia__Body::*)()>(&::RootMotion::FinalIK::__Inertia__Body::Reset)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x1296cb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Inertia__Body*>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Inertia__Body.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__Inertia__Body::*)(::RootMotion::FinalIK::IKSolverFullBodyBiped*, float_t, float_t)>(&::RootMotion::FinalIK::__Inertia__Body::Update)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x1296e38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Inertia__Body*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::IKSolverFullBodyBiped*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Inertia__Body._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__Inertia__Body::*)()>(&::RootMotion::FinalIK::__Inertia__Body::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1297194;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Inertia__Body*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void RootMotion::FinalIK::__Inertia__Body::__set_transform(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x10>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* RootMotion::FinalIK::__Inertia__Body::__get_transform()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> RootMotion::FinalIK::__Inertia__Body::__get_transform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x10>(this);
}
constexpr void RootMotion::FinalIK::__Inertia__Body::__set_effectorLinks(::ArrayW<::GlobalNamespace::__Inertia__Body__EffectorLink*,::Array<::GlobalNamespace::__Inertia__Body__EffectorLink*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::__Inertia__Body__EffectorLink*,::Array<::GlobalNamespace::__Inertia__Body__EffectorLink*>*>, 0x18>(this, std::forward<::ArrayW<::GlobalNamespace::__Inertia__Body__EffectorLink*,::Array<::GlobalNamespace::__Inertia__Body__EffectorLink*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::__Inertia__Body__EffectorLink*,::Array<::GlobalNamespace::__Inertia__Body__EffectorLink*>*>& RootMotion::FinalIK::__Inertia__Body::__get_effectorLinks()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__Inertia__Body__EffectorLink*,::Array<::GlobalNamespace::__Inertia__Body__EffectorLink*>*>, 0x18>(this);
}
constexpr ::ArrayW<::GlobalNamespace::__Inertia__Body__EffectorLink*,::Array<::GlobalNamespace::__Inertia__Body__EffectorLink*>*> const& RootMotion::FinalIK::__Inertia__Body::__get_effectorLinks() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__Inertia__Body__EffectorLink*,::Array<::GlobalNamespace::__Inertia__Body__EffectorLink*>*>, 0x18>(this);
}
constexpr void RootMotion::FinalIK::__Inertia__Body::__set_speed(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::__Inertia__Body::__get_speed()  {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr float_t const& RootMotion::FinalIK::__Inertia__Body::__get_speed() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr void RootMotion::FinalIK::__Inertia__Body::__set_acceleration(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::__Inertia__Body::__get_acceleration()  {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this);
}
constexpr float_t const& RootMotion::FinalIK::__Inertia__Body::__get_acceleration() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this);
}
constexpr void RootMotion::FinalIK::__Inertia__Body::__set_matchVelocity(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::__Inertia__Body::__get_matchVelocity()  {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
constexpr float_t const& RootMotion::FinalIK::__Inertia__Body::__get_matchVelocity() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
constexpr void RootMotion::FinalIK::__Inertia__Body::__set_gravity(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x2c>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::__Inertia__Body::__get_gravity()  {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this);
}
constexpr float_t const& RootMotion::FinalIK::__Inertia__Body::__get_gravity() const {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this);
}
constexpr void RootMotion::FinalIK::__Inertia__Body::__set_delta(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x30>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__Inertia__Body::__get_delta()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x30>(this);
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__Inertia__Body::__get_delta() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x30>(this);
}
constexpr void RootMotion::FinalIK::__Inertia__Body::__set_lazyPoint(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x3c>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__Inertia__Body::__get_lazyPoint()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x3c>(this);
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__Inertia__Body::__get_lazyPoint() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x3c>(this);
}
constexpr void RootMotion::FinalIK::__Inertia__Body::__set_direction(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x48>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__Inertia__Body::__get_direction()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x48>(this);
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__Inertia__Body::__get_direction() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x48>(this);
}
constexpr void RootMotion::FinalIK::__Inertia__Body::__set_lastPosition(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x54>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__Inertia__Body::__get_lastPosition()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x54>(this);
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__Inertia__Body::__get_lastPosition() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x54>(this);
}
constexpr void RootMotion::FinalIK::__Inertia__Body::__set_firstUpdate(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x60>(this, std::forward<bool>(value));
}
constexpr bool& RootMotion::FinalIK::__Inertia__Body::__get_firstUpdate()  {
return ::cordl_internals::getInstanceField<bool, 0x60>(this);
}
constexpr bool const& RootMotion::FinalIK::__Inertia__Body::__get_firstUpdate() const {
return ::cordl_internals::getInstanceField<bool, 0x60>(this);
}
inline void RootMotion::FinalIK::__Inertia__Body::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Inertia__Body*>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void RootMotion::FinalIK::__Inertia__Body::Update(::RootMotion::FinalIK::IKSolverFullBodyBiped*  solver, float_t  weight, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Inertia__Body*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::IKSolverFullBodyBiped*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, solver, weight, deltaTime);
}
inline ::RootMotion::FinalIK::__Inertia__Body* RootMotion::FinalIK::__Inertia__Body::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::__Inertia__Body*>());
}
inline void RootMotion::FinalIK::__Inertia__Body::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Inertia__Body*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::RootMotion::FinalIK::Inertia.ResetBodies
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::Inertia::*)()>(&::RootMotion::FinalIK::Inertia::ResetBodies)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1296c4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Inertia*>::get(),
                            "ResetBodies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Inertia.OnModifyOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::Inertia::*)()>(&::RootMotion::FinalIK::Inertia::OnModifyOffset)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x1296d94;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Inertia*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Inertia*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Inertia._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::Inertia::*)()>(&::RootMotion::FinalIK::Inertia::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1297184;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Inertia*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void RootMotion::FinalIK::Inertia::__set_bodies(::ArrayW<::RootMotion::FinalIK::__Inertia__Body*,::Array<::RootMotion::FinalIK::__Inertia__Body*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::RootMotion::FinalIK::__Inertia__Body*,::Array<::RootMotion::FinalIK::__Inertia__Body*>*>, 0x30>(this, std::forward<::ArrayW<::RootMotion::FinalIK::__Inertia__Body*,::Array<::RootMotion::FinalIK::__Inertia__Body*>*>>(value));
}
constexpr ::ArrayW<::RootMotion::FinalIK::__Inertia__Body*,::Array<::RootMotion::FinalIK::__Inertia__Body*>*>& RootMotion::FinalIK::Inertia::__get_bodies()  {
return ::cordl_internals::getInstanceField<::ArrayW<::RootMotion::FinalIK::__Inertia__Body*,::Array<::RootMotion::FinalIK::__Inertia__Body*>*>, 0x30>(this);
}
constexpr ::ArrayW<::RootMotion::FinalIK::__Inertia__Body*,::Array<::RootMotion::FinalIK::__Inertia__Body*>*> const& RootMotion::FinalIK::Inertia::__get_bodies() const {
return ::cordl_internals::getInstanceField<::ArrayW<::RootMotion::FinalIK::__Inertia__Body*,::Array<::RootMotion::FinalIK::__Inertia__Body*>*>, 0x30>(this);
}
constexpr void RootMotion::FinalIK::Inertia::__set_limits(::ArrayW<::RootMotion::FinalIK::__OffsetModifier__OffsetLimits*,::Array<::RootMotion::FinalIK::__OffsetModifier__OffsetLimits*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::RootMotion::FinalIK::__OffsetModifier__OffsetLimits*,::Array<::RootMotion::FinalIK::__OffsetModifier__OffsetLimits*>*>, 0x38>(this, std::forward<::ArrayW<::RootMotion::FinalIK::__OffsetModifier__OffsetLimits*,::Array<::RootMotion::FinalIK::__OffsetModifier__OffsetLimits*>*>>(value));
}
constexpr ::ArrayW<::RootMotion::FinalIK::__OffsetModifier__OffsetLimits*,::Array<::RootMotion::FinalIK::__OffsetModifier__OffsetLimits*>*>& RootMotion::FinalIK::Inertia::__get_limits()  {
return ::cordl_internals::getInstanceField<::ArrayW<::RootMotion::FinalIK::__OffsetModifier__OffsetLimits*,::Array<::RootMotion::FinalIK::__OffsetModifier__OffsetLimits*>*>, 0x38>(this);
}
constexpr ::ArrayW<::RootMotion::FinalIK::__OffsetModifier__OffsetLimits*,::Array<::RootMotion::FinalIK::__OffsetModifier__OffsetLimits*>*> const& RootMotion::FinalIK::Inertia::__get_limits() const {
return ::cordl_internals::getInstanceField<::ArrayW<::RootMotion::FinalIK::__OffsetModifier__OffsetLimits*,::Array<::RootMotion::FinalIK::__OffsetModifier__OffsetLimits*>*>, 0x38>(this);
}
inline void RootMotion::FinalIK::Inertia::ResetBodies()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Inertia*>::get(),
                            "ResetBodies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void RootMotion::FinalIK::Inertia::OnModifyOffset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Inertia*>::get(),
                            "OnModifyOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::RootMotion::FinalIK::Inertia* RootMotion::FinalIK::Inertia::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::Inertia*>());
}
inline void RootMotion::FinalIK::Inertia::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Inertia*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
