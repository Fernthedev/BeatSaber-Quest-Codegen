#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DynamicBone_def.hpp"
#include "GlobalNamespace/zzzz__DynamicBone_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "GlobalNamespace/zzzz__DynamicBoneColliderBase_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
constexpr void GlobalNamespace::__DynamicBone__UpdateMode::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__DynamicBone__UpdateMode::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__DynamicBone__UpdateMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__DynamicBone__UpdateMode::__DynamicBone__UpdateMode(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__DynamicBone__UpdateMode  GlobalNamespace::__DynamicBone__UpdateMode::Normal{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__DynamicBone__UpdateMode  GlobalNamespace::__DynamicBone__UpdateMode::AnimatePhysics{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__DynamicBone__UpdateMode  GlobalNamespace::__DynamicBone__UpdateMode::UnscaledTime{static_cast<int32_t>(0x2)};
constexpr void GlobalNamespace::__DynamicBone__FreezeAxis::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__DynamicBone__FreezeAxis::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__DynamicBone__FreezeAxis::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__DynamicBone__FreezeAxis::__DynamicBone__FreezeAxis(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__DynamicBone__FreezeAxis  GlobalNamespace::__DynamicBone__FreezeAxis::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__DynamicBone__FreezeAxis  GlobalNamespace::__DynamicBone__FreezeAxis::X{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__DynamicBone__FreezeAxis  GlobalNamespace::__DynamicBone__FreezeAxis::Y{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::__DynamicBone__FreezeAxis  GlobalNamespace::__DynamicBone__FreezeAxis::Z{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::GlobalNamespace::__DynamicBone__Particle._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DynamicBone__Particle::*)()>(&::GlobalNamespace::__DynamicBone__Particle::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x122fee4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DynamicBone__Particle*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__DynamicBone__Particle::__set_m_Transform(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x10>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* GlobalNamespace::__DynamicBone__Particle::__get_m_Transform()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> GlobalNamespace::__DynamicBone__Particle::__get_m_Transform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x10>(this);
}
constexpr void GlobalNamespace::__DynamicBone__Particle::__set_m_ParentIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__DynamicBone__Particle::__get_m_ParentIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& GlobalNamespace::__DynamicBone__Particle::__get_m_ParentIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr void GlobalNamespace::__DynamicBone__Particle::__set_m_Damping(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__DynamicBone__Particle::__get_m_Damping()  {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr float_t const& GlobalNamespace::__DynamicBone__Particle::__get_m_Damping() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr void GlobalNamespace::__DynamicBone__Particle::__set_m_Elasticity(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__DynamicBone__Particle::__get_m_Elasticity()  {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr float_t const& GlobalNamespace::__DynamicBone__Particle::__get_m_Elasticity() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr void GlobalNamespace::__DynamicBone__Particle::__set_m_Stiffness(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__DynamicBone__Particle::__get_m_Stiffness()  {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this);
}
constexpr float_t const& GlobalNamespace::__DynamicBone__Particle::__get_m_Stiffness() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this);
}
constexpr void GlobalNamespace::__DynamicBone__Particle::__set_m_Inert(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__DynamicBone__Particle::__get_m_Inert()  {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
constexpr float_t const& GlobalNamespace::__DynamicBone__Particle::__get_m_Inert() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
constexpr void GlobalNamespace::__DynamicBone__Particle::__set_m_Radius(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x2c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__DynamicBone__Particle::__get_m_Radius()  {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this);
}
constexpr float_t const& GlobalNamespace::__DynamicBone__Particle::__get_m_Radius() const {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this);
}
constexpr void GlobalNamespace::__DynamicBone__Particle::__set_m_BoneLength(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__DynamicBone__Particle::__get_m_BoneLength()  {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr float_t const& GlobalNamespace::__DynamicBone__Particle::__get_m_BoneLength() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr void GlobalNamespace::__DynamicBone__Particle::__set_m_Position(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x34>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::__DynamicBone__Particle::__get_m_Position()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x34>(this);
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::__DynamicBone__Particle::__get_m_Position() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x34>(this);
}
constexpr void GlobalNamespace::__DynamicBone__Particle::__set_m_PrevPosition(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x40>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::__DynamicBone__Particle::__get_m_PrevPosition()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x40>(this);
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::__DynamicBone__Particle::__get_m_PrevPosition() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x40>(this);
}
constexpr void GlobalNamespace::__DynamicBone__Particle::__set_m_EndOffset(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x4c>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::__DynamicBone__Particle::__get_m_EndOffset()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x4c>(this);
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::__DynamicBone__Particle::__get_m_EndOffset() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x4c>(this);
}
constexpr void GlobalNamespace::__DynamicBone__Particle::__set_m_InitLocalPosition(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x58>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::__DynamicBone__Particle::__get_m_InitLocalPosition()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x58>(this);
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::__DynamicBone__Particle::__get_m_InitLocalPosition() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x58>(this);
}
constexpr void GlobalNamespace::__DynamicBone__Particle::__set_m_InitLocalRotation(::UnityEngine::Quaternion  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Quaternion, 0x64>(this, std::forward<::UnityEngine::Quaternion>(value));
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::__DynamicBone__Particle::__get_m_InitLocalRotation()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x64>(this);
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::__DynamicBone__Particle::__get_m_InitLocalRotation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x64>(this);
}
inline ::GlobalNamespace::__DynamicBone__Particle* GlobalNamespace::__DynamicBone__Particle::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__DynamicBone__Particle*>());
}
inline void GlobalNamespace::__DynamicBone__Particle::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DynamicBone__Particle*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::DynamicBone.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DynamicBone::*)()>(&::GlobalNamespace::DynamicBone::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x122dc78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicBone.FixedUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DynamicBone::*)()>(&::GlobalNamespace::DynamicBone::FixedUpdate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x122dde8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(),
                            "FixedUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicBone.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DynamicBone::*)()>(&::GlobalNamespace::DynamicBone::Update)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x122de3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicBone.LateUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DynamicBone::*)()>(&::GlobalNamespace::DynamicBone::LateUpdate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x122de6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicBone.PreUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DynamicBone::*)()>(&::GlobalNamespace::DynamicBone::PreUpdate)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x122de18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(),
                            "PreUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicBone.CheckDistance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DynamicBone::*)()>(&::GlobalNamespace::DynamicBone::CheckDistance)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x122debc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(),
                            "CheckDistance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicBone.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DynamicBone::*)()>(&::GlobalNamespace::DynamicBone::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x122e444;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicBone.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DynamicBone::*)()>(&::GlobalNamespace::DynamicBone::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x122e448;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicBone.OnValidate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DynamicBone::*)()>(&::GlobalNamespace::DynamicBone::OnValidate)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x122e44c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(),
                            "OnValidate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicBone.OnDrawGizmosSelected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DynamicBone::*)()>(&::GlobalNamespace::DynamicBone::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x122e4f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(),
                            "OnDrawGizmosSelected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicBone.SetWeight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DynamicBone::*)(float_t)>(&::GlobalNamespace::DynamicBone::SetWeight)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x122e688;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(),
                            "SetWeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicBone.GetWeight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::DynamicBone::*)()>(&::GlobalNamespace::DynamicBone::GetWeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x122e6d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(),
                            "GetWeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicBone.UpdateDynamicBones
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DynamicBone::*)(float_t)>(&::GlobalNamespace::DynamicBone::UpdateDynamicBones)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x122e034;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(),
                            "UpdateDynamicBones",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicBone.SetupParticles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DynamicBone::*)()>(&::GlobalNamespace::DynamicBone::SetupParticles)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x122dc7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(),
                            "SetupParticles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicBone.AppendParticles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DynamicBone::*)(::UnityEngine::Transform*, int32_t, float_t)>(&::GlobalNamespace::DynamicBone::AppendParticles)> {
  constexpr static std::size_t size = 0x5c8;
  constexpr static std::size_t addrs = 0x122f660;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(),
                            "AppendParticles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicBone.UpdateParameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DynamicBone::*)()>(&::GlobalNamespace::DynamicBone::UpdateParameters)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x122fc28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(),
                            "UpdateParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicBone.InitTransforms
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DynamicBone::*)()>(&::GlobalNamespace::DynamicBone::InitTransforms)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x122e1f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(),
                            "InitTransforms",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicBone.ResetParticlesPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DynamicBone::*)()>(&::GlobalNamespace::DynamicBone::ResetParticlesPosition)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x122e2fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(),
                            "ResetParticlesPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicBone.UpdateParticles1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DynamicBone::*)()>(&::GlobalNamespace::DynamicBone::UpdateParticles1)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x122e6e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(),
                            "UpdateParticles1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicBone.UpdateParticles2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DynamicBone::*)()>(&::GlobalNamespace::DynamicBone::UpdateParticles2)> {
  constexpr static std::size_t size = 0x61c;
  constexpr static std::size_t addrs = 0x122e944;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(),
                            "UpdateParticles2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicBone.SkipUpdateParticles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DynamicBone::*)()>(&::GlobalNamespace::DynamicBone::SkipUpdateParticles)> {
  constexpr static std::size_t size = 0x4a4;
  constexpr static std::size_t addrs = 0x122ef60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(),
                            "SkipUpdateParticles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicBone.MirrorVector
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::DynamicBone::MirrorVector)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x122ffc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(),
                            "MirrorVector",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicBone.ApplyParticlesToTransforms
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DynamicBone::*)()>(&::GlobalNamespace::DynamicBone::ApplyParticlesToTransforms)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x122f404;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(),
                            "ApplyParticlesToTransforms",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicBone._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DynamicBone::*)()>(&::GlobalNamespace::DynamicBone::_ctor)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x122fff4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::DynamicBone::__set_m_Root(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x18>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* GlobalNamespace::DynamicBone::__get_m_Root()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> GlobalNamespace::DynamicBone::__get_m_Root() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x18>(this);
}
constexpr void GlobalNamespace::DynamicBone::__set_m_UpdateRate(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::DynamicBone::__get_m_UpdateRate()  {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr float_t const& GlobalNamespace::DynamicBone::__get_m_UpdateRate() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr void GlobalNamespace::DynamicBone::__set_m_UpdateMode(::GlobalNamespace::__DynamicBone__UpdateMode  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__DynamicBone__UpdateMode, 0x24>(this, std::forward<::GlobalNamespace::__DynamicBone__UpdateMode>(value));
}
constexpr ::GlobalNamespace::__DynamicBone__UpdateMode& GlobalNamespace::DynamicBone::__get_m_UpdateMode()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__DynamicBone__UpdateMode, 0x24>(this);
}
constexpr ::GlobalNamespace::__DynamicBone__UpdateMode const& GlobalNamespace::DynamicBone::__get_m_UpdateMode() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__DynamicBone__UpdateMode, 0x24>(this);
}
constexpr void GlobalNamespace::DynamicBone::__set_m_Damping(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::DynamicBone::__get_m_Damping()  {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
constexpr float_t const& GlobalNamespace::DynamicBone::__get_m_Damping() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
constexpr void GlobalNamespace::DynamicBone::__set_m_DampingDistrib(::UnityEngine::AnimationCurve*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AnimationCurve*, 0x30>(this, std::forward<::UnityEngine::AnimationCurve*>(value));
}
constexpr ::UnityEngine::AnimationCurve* GlobalNamespace::DynamicBone::__get_m_DampingDistrib()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationCurve*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> GlobalNamespace::DynamicBone::__get_m_DampingDistrib() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationCurve*, 0x30>(this);
}
constexpr void GlobalNamespace::DynamicBone::__set_m_Elasticity(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x38>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::DynamicBone::__get_m_Elasticity()  {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this);
}
constexpr float_t const& GlobalNamespace::DynamicBone::__get_m_Elasticity() const {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this);
}
constexpr void GlobalNamespace::DynamicBone::__set_m_ElasticityDistrib(::UnityEngine::AnimationCurve*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AnimationCurve*, 0x40>(this, std::forward<::UnityEngine::AnimationCurve*>(value));
}
constexpr ::UnityEngine::AnimationCurve* GlobalNamespace::DynamicBone::__get_m_ElasticityDistrib()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationCurve*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> GlobalNamespace::DynamicBone::__get_m_ElasticityDistrib() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationCurve*, 0x40>(this);
}
constexpr void GlobalNamespace::DynamicBone::__set_m_Stiffness(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x48>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::DynamicBone::__get_m_Stiffness()  {
return ::cordl_internals::getInstanceField<float_t, 0x48>(this);
}
constexpr float_t const& GlobalNamespace::DynamicBone::__get_m_Stiffness() const {
return ::cordl_internals::getInstanceField<float_t, 0x48>(this);
}
constexpr void GlobalNamespace::DynamicBone::__set_m_StiffnessDistrib(::UnityEngine::AnimationCurve*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AnimationCurve*, 0x50>(this, std::forward<::UnityEngine::AnimationCurve*>(value));
}
constexpr ::UnityEngine::AnimationCurve* GlobalNamespace::DynamicBone::__get_m_StiffnessDistrib()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationCurve*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> GlobalNamespace::DynamicBone::__get_m_StiffnessDistrib() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationCurve*, 0x50>(this);
}
constexpr void GlobalNamespace::DynamicBone::__set_m_Inert(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x58>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::DynamicBone::__get_m_Inert()  {
return ::cordl_internals::getInstanceField<float_t, 0x58>(this);
}
constexpr float_t const& GlobalNamespace::DynamicBone::__get_m_Inert() const {
return ::cordl_internals::getInstanceField<float_t, 0x58>(this);
}
constexpr void GlobalNamespace::DynamicBone::__set_m_InertDistrib(::UnityEngine::AnimationCurve*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AnimationCurve*, 0x60>(this, std::forward<::UnityEngine::AnimationCurve*>(value));
}
constexpr ::UnityEngine::AnimationCurve* GlobalNamespace::DynamicBone::__get_m_InertDistrib()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationCurve*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> GlobalNamespace::DynamicBone::__get_m_InertDistrib() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationCurve*, 0x60>(this);
}
constexpr void GlobalNamespace::DynamicBone::__set_m_Radius(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x68>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::DynamicBone::__get_m_Radius()  {
return ::cordl_internals::getInstanceField<float_t, 0x68>(this);
}
constexpr float_t const& GlobalNamespace::DynamicBone::__get_m_Radius() const {
return ::cordl_internals::getInstanceField<float_t, 0x68>(this);
}
constexpr void GlobalNamespace::DynamicBone::__set_m_RadiusDistrib(::UnityEngine::AnimationCurve*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AnimationCurve*, 0x70>(this, std::forward<::UnityEngine::AnimationCurve*>(value));
}
constexpr ::UnityEngine::AnimationCurve* GlobalNamespace::DynamicBone::__get_m_RadiusDistrib()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationCurve*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> GlobalNamespace::DynamicBone::__get_m_RadiusDistrib() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationCurve*, 0x70>(this);
}
constexpr void GlobalNamespace::DynamicBone::__set_m_EndLength(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x78>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::DynamicBone::__get_m_EndLength()  {
return ::cordl_internals::getInstanceField<float_t, 0x78>(this);
}
constexpr float_t const& GlobalNamespace::DynamicBone::__get_m_EndLength() const {
return ::cordl_internals::getInstanceField<float_t, 0x78>(this);
}
constexpr void GlobalNamespace::DynamicBone::__set_m_EndOffset(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x7c>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::DynamicBone::__get_m_EndOffset()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x7c>(this);
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::DynamicBone::__get_m_EndOffset() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x7c>(this);
}
constexpr void GlobalNamespace::DynamicBone::__set_m_Gravity(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x88>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::DynamicBone::__get_m_Gravity()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x88>(this);
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::DynamicBone::__get_m_Gravity() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x88>(this);
}
constexpr void GlobalNamespace::DynamicBone::__set_m_Force(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x94>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::DynamicBone::__get_m_Force()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x94>(this);
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::DynamicBone::__get_m_Force() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x94>(this);
}
constexpr void GlobalNamespace::DynamicBone::__set_m_Colliders(::System::Collections::Generic::List_1<::GlobalNamespace::DynamicBoneColliderBase*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::DynamicBoneColliderBase*>*, 0xa0>(this, std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::DynamicBoneColliderBase*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::DynamicBoneColliderBase*>* GlobalNamespace::DynamicBone::__get_m_Colliders()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::DynamicBoneColliderBase*>*, 0xa0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::DynamicBoneColliderBase*>*> GlobalNamespace::DynamicBone::__get_m_Colliders() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::DynamicBoneColliderBase*>*, 0xa0>(this);
}
constexpr void GlobalNamespace::DynamicBone::__set_m_Exclusions(::System::Collections::Generic::List_1<::UnityEngine::Transform*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Transform*>*, 0xa8>(this, std::forward<::System::Collections::Generic::List_1<::UnityEngine::Transform*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* GlobalNamespace::DynamicBone::__get_m_Exclusions()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Transform*>*, 0xa8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Transform*>*> GlobalNamespace::DynamicBone::__get_m_Exclusions() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Transform*>*, 0xa8>(this);
}
constexpr void GlobalNamespace::DynamicBone::__set_m_FreezeAxis(::GlobalNamespace::__DynamicBone__FreezeAxis  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__DynamicBone__FreezeAxis, 0xb0>(this, std::forward<::GlobalNamespace::__DynamicBone__FreezeAxis>(value));
}
constexpr ::GlobalNamespace::__DynamicBone__FreezeAxis& GlobalNamespace::DynamicBone::__get_m_FreezeAxis()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__DynamicBone__FreezeAxis, 0xb0>(this);
}
constexpr ::GlobalNamespace::__DynamicBone__FreezeAxis const& GlobalNamespace::DynamicBone::__get_m_FreezeAxis() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__DynamicBone__FreezeAxis, 0xb0>(this);
}
constexpr void GlobalNamespace::DynamicBone::__set_m_DistantDisable(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xb4>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::DynamicBone::__get_m_DistantDisable()  {
return ::cordl_internals::getInstanceField<bool, 0xb4>(this);
}
constexpr bool const& GlobalNamespace::DynamicBone::__get_m_DistantDisable() const {
return ::cordl_internals::getInstanceField<bool, 0xb4>(this);
}
constexpr void GlobalNamespace::DynamicBone::__set_m_ReferenceObject(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0xb8>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* GlobalNamespace::DynamicBone::__get_m_ReferenceObject()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0xb8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> GlobalNamespace::DynamicBone::__get_m_ReferenceObject() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0xb8>(this);
}
constexpr void GlobalNamespace::DynamicBone::__set_m_DistanceToObject(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0xc0>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::DynamicBone::__get_m_DistanceToObject()  {
return ::cordl_internals::getInstanceField<float_t, 0xc0>(this);
}
constexpr float_t const& GlobalNamespace::DynamicBone::__get_m_DistanceToObject() const {
return ::cordl_internals::getInstanceField<float_t, 0xc0>(this);
}
constexpr void GlobalNamespace::DynamicBone::__set_m_LocalGravity(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0xc4>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::DynamicBone::__get_m_LocalGravity()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0xc4>(this);
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::DynamicBone::__get_m_LocalGravity() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0xc4>(this);
}
constexpr void GlobalNamespace::DynamicBone::__set_m_ObjectMove(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0xd0>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::DynamicBone::__get_m_ObjectMove()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0xd0>(this);
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::DynamicBone::__get_m_ObjectMove() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0xd0>(this);
}
constexpr void GlobalNamespace::DynamicBone::__set_m_ObjectPrevPosition(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0xdc>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::DynamicBone::__get_m_ObjectPrevPosition()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0xdc>(this);
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::DynamicBone::__get_m_ObjectPrevPosition() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0xdc>(this);
}
constexpr void GlobalNamespace::DynamicBone::__set_m_BoneTotalLength(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0xe8>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::DynamicBone::__get_m_BoneTotalLength()  {
return ::cordl_internals::getInstanceField<float_t, 0xe8>(this);
}
constexpr float_t const& GlobalNamespace::DynamicBone::__get_m_BoneTotalLength() const {
return ::cordl_internals::getInstanceField<float_t, 0xe8>(this);
}
constexpr void GlobalNamespace::DynamicBone::__set_m_ObjectScale(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0xec>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::DynamicBone::__get_m_ObjectScale()  {
return ::cordl_internals::getInstanceField<float_t, 0xec>(this);
}
constexpr float_t const& GlobalNamespace::DynamicBone::__get_m_ObjectScale() const {
return ::cordl_internals::getInstanceField<float_t, 0xec>(this);
}
constexpr void GlobalNamespace::DynamicBone::__set_m_Time(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0xf0>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::DynamicBone::__get_m_Time()  {
return ::cordl_internals::getInstanceField<float_t, 0xf0>(this);
}
constexpr float_t const& GlobalNamespace::DynamicBone::__get_m_Time() const {
return ::cordl_internals::getInstanceField<float_t, 0xf0>(this);
}
constexpr void GlobalNamespace::DynamicBone::__set_m_Weight(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0xf4>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::DynamicBone::__get_m_Weight()  {
return ::cordl_internals::getInstanceField<float_t, 0xf4>(this);
}
constexpr float_t const& GlobalNamespace::DynamicBone::__get_m_Weight() const {
return ::cordl_internals::getInstanceField<float_t, 0xf4>(this);
}
constexpr void GlobalNamespace::DynamicBone::__set_m_DistantDisabled(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xf8>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::DynamicBone::__get_m_DistantDisabled()  {
return ::cordl_internals::getInstanceField<bool, 0xf8>(this);
}
constexpr bool const& GlobalNamespace::DynamicBone::__get_m_DistantDisabled() const {
return ::cordl_internals::getInstanceField<bool, 0xf8>(this);
}
constexpr void GlobalNamespace::DynamicBone::__set_m_Particles(::System::Collections::Generic::List_1<::GlobalNamespace::__DynamicBone__Particle*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__DynamicBone__Particle*>*, 0x100>(this, std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::__DynamicBone__Particle*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__DynamicBone__Particle*>* GlobalNamespace::DynamicBone::__get_m_Particles()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__DynamicBone__Particle*>*, 0x100>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__DynamicBone__Particle*>*> GlobalNamespace::DynamicBone::__get_m_Particles() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__DynamicBone__Particle*>*, 0x100>(this);
}
inline void GlobalNamespace::DynamicBone::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::DynamicBone::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(),
                            "FixedUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::DynamicBone::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::DynamicBone::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::DynamicBone::PreUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(),
                            "PreUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::DynamicBone::CheckDistance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(),
                            "CheckDistance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::DynamicBone::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::DynamicBone::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::DynamicBone::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(),
                            "OnValidate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::DynamicBone::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(),
                            "OnDrawGizmosSelected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::DynamicBone::SetWeight(float_t  w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(),
                            "SetWeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, w);
}
inline float_t GlobalNamespace::DynamicBone::GetWeight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(),
                            "GetWeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void GlobalNamespace::DynamicBone::UpdateDynamicBones(float_t  t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(),
                            "UpdateDynamicBones",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, t);
}
inline void GlobalNamespace::DynamicBone::SetupParticles()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(),
                            "SetupParticles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::DynamicBone::AppendParticles(::UnityEngine::Transform*  b, int32_t  parentIndex, float_t  boneLength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(),
                            "AppendParticles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, b, parentIndex, boneLength);
}
inline void GlobalNamespace::DynamicBone::UpdateParameters()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(),
                            "UpdateParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::DynamicBone::InitTransforms()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(),
                            "InitTransforms",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::DynamicBone::ResetParticlesPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(),
                            "ResetParticlesPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::DynamicBone::UpdateParticles1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(),
                            "UpdateParticles1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::DynamicBone::UpdateParticles2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(),
                            "UpdateParticles2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::DynamicBone::SkipUpdateParticles()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(),
                            "SkipUpdateParticles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::DynamicBone::MirrorVector(::UnityEngine::Vector3  v, ::UnityEngine::Vector3  axis)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(),
                            "MirrorVector",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, v, axis);
}
inline void GlobalNamespace::DynamicBone::ApplyParticlesToTransforms()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(),
                            "ApplyParticlesToTransforms",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::DynamicBone* GlobalNamespace::DynamicBone::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::DynamicBone*>());
}
inline void GlobalNamespace::DynamicBone::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
