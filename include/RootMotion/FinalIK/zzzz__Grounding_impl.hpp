#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "RootMotion/FinalIK/zzzz__Grounding_def.hpp"
#include "RootMotion/FinalIK/zzzz__Grounding_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
constexpr void RootMotion::FinalIK::__Grounding__Quality::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& RootMotion::FinalIK::__Grounding__Quality::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& RootMotion::FinalIK::__Grounding__Quality::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::RootMotion::FinalIK::__Grounding__Quality::__Grounding__Quality(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::RootMotion::FinalIK::__Grounding__Quality  RootMotion::FinalIK::__Grounding__Quality::Fastest{static_cast<int32_t>(0x0)};
constexpr ::RootMotion::FinalIK::__Grounding__Quality  RootMotion::FinalIK::__Grounding__Quality::Simple{static_cast<int32_t>(0x1)};
constexpr ::RootMotion::FinalIK::__Grounding__Quality  RootMotion::FinalIK::__Grounding__Quality::Best{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Leg.get_isGrounded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::__Grounding__Leg::*)()>(&::RootMotion::FinalIK::__Grounding__Leg::get_isGrounded)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x124d1a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                            "get_isGrounded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Leg.set_isGrounded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__Grounding__Leg::*)(bool)>(&::RootMotion::FinalIK::__Grounding__Leg::set_isGrounded)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x124d1a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                            "set_isGrounded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Leg.get_IKPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::RootMotion::FinalIK::__Grounding__Leg::*)()>(&::RootMotion::FinalIK::__Grounding__Leg::get_IKPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x124d1b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                            "get_IKPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Leg.set_IKPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__Grounding__Leg::*)(::UnityEngine::Vector3)>(&::RootMotion::FinalIK::__Grounding__Leg::set_IKPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x124d1c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                            "set_IKPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Leg.get_initiated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::__Grounding__Leg::*)()>(&::RootMotion::FinalIK::__Grounding__Leg::get_initiated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x124d1cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                            "get_initiated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Leg.set_initiated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__Grounding__Leg::*)(bool)>(&::RootMotion::FinalIK::__Grounding__Leg::set_initiated)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x124d1d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                            "set_initiated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Leg.get_heightFromGround
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::RootMotion::FinalIK::__Grounding__Leg::*)()>(&::RootMotion::FinalIK::__Grounding__Leg::get_heightFromGround)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x124d1e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                            "get_heightFromGround",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Leg.set_heightFromGround
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__Grounding__Leg::*)(float_t)>(&::RootMotion::FinalIK::__Grounding__Leg::set_heightFromGround)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x124d1e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                            "set_heightFromGround",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Leg.get_velocity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::RootMotion::FinalIK::__Grounding__Leg::*)()>(&::RootMotion::FinalIK::__Grounding__Leg::get_velocity)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x124d1f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                            "get_velocity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Leg.set_velocity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__Grounding__Leg::*)(::UnityEngine::Vector3)>(&::RootMotion::FinalIK::__Grounding__Leg::set_velocity)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x124d1fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                            "set_velocity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Leg.get_transform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (::RootMotion::FinalIK::__Grounding__Leg::*)()>(&::RootMotion::FinalIK::__Grounding__Leg::get_transform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x124d208;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                            "get_transform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Leg.set_transform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__Grounding__Leg::*)(::UnityEngine::Transform*)>(&::RootMotion::FinalIK::__Grounding__Leg::set_transform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x124d210;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                            "set_transform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Leg.get_IKOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::RootMotion::FinalIK::__Grounding__Leg::*)()>(&::RootMotion::FinalIK::__Grounding__Leg::get_IKOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x124d218;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                            "get_IKOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Leg.set_IKOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__Grounding__Leg::*)(float_t)>(&::RootMotion::FinalIK::__Grounding__Leg::set_IKOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x124d220;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                            "set_IKOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Leg.get_heelHit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RaycastHit (::RootMotion::FinalIK::__Grounding__Leg::*)()>(&::RootMotion::FinalIK::__Grounding__Leg::get_heelHit)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x124d228;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                            "get_heelHit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Leg.set_heelHit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__Grounding__Leg::*)(::UnityEngine::RaycastHit)>(&::RootMotion::FinalIK::__Grounding__Leg::set_heelHit)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x124d240;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                            "set_heelHit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RaycastHit>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Leg.get_capsuleHit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RaycastHit (::RootMotion::FinalIK::__Grounding__Leg::*)()>(&::RootMotion::FinalIK::__Grounding__Leg::get_capsuleHit)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x124d260;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                            "get_capsuleHit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Leg.set_capsuleHit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__Grounding__Leg::*)(::UnityEngine::RaycastHit)>(&::RootMotion::FinalIK::__Grounding__Leg::set_capsuleHit)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x124d278;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                            "set_capsuleHit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RaycastHit>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Leg.get_GetHitPoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RaycastHit (::RootMotion::FinalIK::__Grounding__Leg::*)()>(&::RootMotion::FinalIK::__Grounding__Leg::get_GetHitPoint)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x124d298;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                            "get_GetHitPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Leg.SetFootPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__Grounding__Leg::*)(::UnityEngine::Vector3)>(&::RootMotion::FinalIK::__Grounding__Leg::SetFootPosition)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x124d2e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                            "SetFootPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Leg.Initiate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__Grounding__Leg::*)(::RootMotion::FinalIK::Grounding*, ::UnityEngine::Transform*)>(&::RootMotion::FinalIK::__Grounding__Leg::Initiate)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x124c308;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                            "Initiate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::Grounding*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Leg.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__Grounding__Leg::*)()>(&::RootMotion::FinalIK::__Grounding__Leg::OnEnable)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x124d2f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Leg.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__Grounding__Leg::*)()>(&::RootMotion::FinalIK::__Grounding__Leg::Reset)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x124ce10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Leg.Process
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__Grounding__Leg::*)()>(&::RootMotion::FinalIK::__Grounding__Leg::Process)> {
  constexpr static std::size_t size = 0x798;
  constexpr static std::size_t addrs = 0x124c3f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Leg.get_stepHeightFromGround
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::RootMotion::FinalIK::__Grounding__Leg::*)()>(&::RootMotion::FinalIK::__Grounding__Leg::get_stepHeightFromGround)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x124db80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                            "get_stepHeightFromGround",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Leg.GetCapsuleHit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RaycastHit (::RootMotion::FinalIK::__Grounding__Leg::*)(::UnityEngine::Vector3)>(&::RootMotion::FinalIK::__Grounding__Leg::GetCapsuleHit)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0x124d794;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                            "GetCapsuleHit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Leg.GetRaycastHit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RaycastHit (::RootMotion::FinalIK::__Grounding__Leg::*)(::UnityEngine::Vector3)>(&::RootMotion::FinalIK::__Grounding__Leg::GetRaycastHit)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x124d334;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                            "GetRaycastHit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Leg.RotateNormal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::RootMotion::FinalIK::__Grounding__Leg::*)(::UnityEngine::Vector3)>(&::RootMotion::FinalIK::__Grounding__Leg::RotateNormal)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x124dc14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                            "RotateNormal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Leg.SetFootToPoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__Grounding__Leg::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::RootMotion::FinalIK::__Grounding__Leg::SetFootToPoint)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x124d5fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                            "SetFootToPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Leg.SetFootToPlane
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__Grounding__Leg::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::RootMotion::FinalIK::__Grounding__Leg::SetFootToPlane)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x124d67c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                            "SetFootToPlane",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Leg.GetHeightFromGround
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::RootMotion::FinalIK::__Grounding__Leg::*)(::UnityEngine::Vector3)>(&::RootMotion::FinalIK::__Grounding__Leg::GetHeightFromGround)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x124dc80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                            "GetHeightFromGround",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Leg.RotateFoot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__Grounding__Leg::*)()>(&::RootMotion::FinalIK::__Grounding__Leg::RotateFoot)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x124dbb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                            "RotateFoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Leg.GetRotationOffsetTarget
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (::RootMotion::FinalIK::__Grounding__Leg::*)()>(&::RootMotion::FinalIK::__Grounding__Leg::GetRotationOffsetTarget)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x124dd5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                            "GetRotationOffsetTarget",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Leg.get_rootYOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::RootMotion::FinalIK::__Grounding__Leg::*)()>(&::RootMotion::FinalIK::__Grounding__Leg::get_rootYOffset)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x124dcd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                            "get_rootYOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Leg._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__Grounding__Leg::*)()>(&::RootMotion::FinalIK::__Grounding__Leg::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x124c268;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void RootMotion::FinalIK::__Grounding__Leg::__set__isGrounded_k__BackingField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& RootMotion::FinalIK::__Grounding__Leg::__get__isGrounded_k__BackingField()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& RootMotion::FinalIK::__Grounding__Leg::__get__isGrounded_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr void RootMotion::FinalIK::__Grounding__Leg::__set__IKPosition_k__BackingField(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x14>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__Grounding__Leg::__get__IKPosition_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x14>(this);
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__Grounding__Leg::__get__IKPosition_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x14>(this);
}
constexpr void RootMotion::FinalIK::__Grounding__Leg::__set_rotationOffset(::UnityEngine::Quaternion  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Quaternion, 0x20>(this, std::forward<::UnityEngine::Quaternion>(value));
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::__Grounding__Leg::__get_rotationOffset()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x20>(this);
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::__Grounding__Leg::__get_rotationOffset() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x20>(this);
}
constexpr void RootMotion::FinalIK::__Grounding__Leg::__set__initiated_k__BackingField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this, std::forward<bool>(value));
}
constexpr bool& RootMotion::FinalIK::__Grounding__Leg::__get__initiated_k__BackingField()  {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
constexpr bool const& RootMotion::FinalIK::__Grounding__Leg::__get__initiated_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
constexpr void RootMotion::FinalIK::__Grounding__Leg::__set__heightFromGround_k__BackingField(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x34>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::__Grounding__Leg::__get__heightFromGround_k__BackingField()  {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this);
}
constexpr float_t const& RootMotion::FinalIK::__Grounding__Leg::__get__heightFromGround_k__BackingField() const {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this);
}
constexpr void RootMotion::FinalIK::__Grounding__Leg::__set__velocity_k__BackingField(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x38>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__Grounding__Leg::__get__velocity_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x38>(this);
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__Grounding__Leg::__get__velocity_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x38>(this);
}
constexpr void RootMotion::FinalIK::__Grounding__Leg::__set__transform_k__BackingField(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x48>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* RootMotion::FinalIK::__Grounding__Leg::__get__transform_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> RootMotion::FinalIK::__Grounding__Leg::__get__transform_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x48>(this);
}
constexpr void RootMotion::FinalIK::__Grounding__Leg::__set__IKOffset_k__BackingField(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x50>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::__Grounding__Leg::__get__IKOffset_k__BackingField()  {
return ::cordl_internals::getInstanceField<float_t, 0x50>(this);
}
constexpr float_t const& RootMotion::FinalIK::__Grounding__Leg::__get__IKOffset_k__BackingField() const {
return ::cordl_internals::getInstanceField<float_t, 0x50>(this);
}
constexpr void RootMotion::FinalIK::__Grounding__Leg::__set_invertFootCenter(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x54>(this, std::forward<bool>(value));
}
constexpr bool& RootMotion::FinalIK::__Grounding__Leg::__get_invertFootCenter()  {
return ::cordl_internals::getInstanceField<bool, 0x54>(this);
}
constexpr bool const& RootMotion::FinalIK::__Grounding__Leg::__get_invertFootCenter() const {
return ::cordl_internals::getInstanceField<bool, 0x54>(this);
}
constexpr void RootMotion::FinalIK::__Grounding__Leg::__set__heelHit_k__BackingField(::UnityEngine::RaycastHit  value)  {
::cordl_internals::setInstanceField<::UnityEngine::RaycastHit, 0x58>(this, std::forward<::UnityEngine::RaycastHit>(value));
}
constexpr ::UnityEngine::RaycastHit& RootMotion::FinalIK::__Grounding__Leg::__get__heelHit_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::RaycastHit, 0x58>(this);
}
constexpr ::UnityEngine::RaycastHit const& RootMotion::FinalIK::__Grounding__Leg::__get__heelHit_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::RaycastHit, 0x58>(this);
}
constexpr void RootMotion::FinalIK::__Grounding__Leg::__set__capsuleHit_k__BackingField(::UnityEngine::RaycastHit  value)  {
::cordl_internals::setInstanceField<::UnityEngine::RaycastHit, 0x84>(this, std::forward<::UnityEngine::RaycastHit>(value));
}
constexpr ::UnityEngine::RaycastHit& RootMotion::FinalIK::__Grounding__Leg::__get__capsuleHit_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::RaycastHit, 0x84>(this);
}
constexpr ::UnityEngine::RaycastHit const& RootMotion::FinalIK::__Grounding__Leg::__get__capsuleHit_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::RaycastHit, 0x84>(this);
}
constexpr void RootMotion::FinalIK::__Grounding__Leg::__set_grounding(::RootMotion::FinalIK::Grounding*  value)  {
::cordl_internals::setInstanceField<::RootMotion::FinalIK::Grounding*, 0xb0>(this, std::forward<::RootMotion::FinalIK::Grounding*>(value));
}
constexpr ::RootMotion::FinalIK::Grounding* RootMotion::FinalIK::__Grounding__Leg::__get_grounding()  {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::Grounding*, 0xb0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::Grounding*> RootMotion::FinalIK::__Grounding__Leg::__get_grounding() const {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::Grounding*, 0xb0>(this);
}
constexpr void RootMotion::FinalIK::__Grounding__Leg::__set_lastTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0xb8>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::__Grounding__Leg::__get_lastTime()  {
return ::cordl_internals::getInstanceField<float_t, 0xb8>(this);
}
constexpr float_t const& RootMotion::FinalIK::__Grounding__Leg::__get_lastTime() const {
return ::cordl_internals::getInstanceField<float_t, 0xb8>(this);
}
constexpr void RootMotion::FinalIK::__Grounding__Leg::__set_deltaTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0xbc>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::__Grounding__Leg::__get_deltaTime()  {
return ::cordl_internals::getInstanceField<float_t, 0xbc>(this);
}
constexpr float_t const& RootMotion::FinalIK::__Grounding__Leg::__get_deltaTime() const {
return ::cordl_internals::getInstanceField<float_t, 0xbc>(this);
}
constexpr void RootMotion::FinalIK::__Grounding__Leg::__set_lastPosition(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0xc0>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__Grounding__Leg::__get_lastPosition()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0xc0>(this);
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__Grounding__Leg::__get_lastPosition() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0xc0>(this);
}
constexpr void RootMotion::FinalIK::__Grounding__Leg::__set_toHitNormal(::UnityEngine::Quaternion  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Quaternion, 0xcc>(this, std::forward<::UnityEngine::Quaternion>(value));
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::__Grounding__Leg::__get_toHitNormal()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0xcc>(this);
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::__Grounding__Leg::__get_toHitNormal() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0xcc>(this);
}
constexpr void RootMotion::FinalIK::__Grounding__Leg::__set_r(::UnityEngine::Quaternion  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Quaternion, 0xdc>(this, std::forward<::UnityEngine::Quaternion>(value));
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::__Grounding__Leg::__get_r()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0xdc>(this);
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::__Grounding__Leg::__get_r() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0xdc>(this);
}
constexpr void RootMotion::FinalIK::__Grounding__Leg::__set_up(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0xec>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__Grounding__Leg::__get_up()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0xec>(this);
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__Grounding__Leg::__get_up() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0xec>(this);
}
constexpr void RootMotion::FinalIK::__Grounding__Leg::__set_doOverrideFootPosition(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xf8>(this, std::forward<bool>(value));
}
constexpr bool& RootMotion::FinalIK::__Grounding__Leg::__get_doOverrideFootPosition()  {
return ::cordl_internals::getInstanceField<bool, 0xf8>(this);
}
constexpr bool const& RootMotion::FinalIK::__Grounding__Leg::__get_doOverrideFootPosition() const {
return ::cordl_internals::getInstanceField<bool, 0xf8>(this);
}
constexpr void RootMotion::FinalIK::__Grounding__Leg::__set_overrideFootPosition(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0xfc>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__Grounding__Leg::__get_overrideFootPosition()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0xfc>(this);
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__Grounding__Leg::__get_overrideFootPosition() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0xfc>(this);
}
constexpr void RootMotion::FinalIK::__Grounding__Leg::__set_transformPosition(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x108>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__Grounding__Leg::__get_transformPosition()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x108>(this);
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__Grounding__Leg::__get_transformPosition() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x108>(this);
}
inline bool RootMotion::FinalIK::__Grounding__Leg::get_isGrounded()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                            "get_isGrounded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void RootMotion::FinalIK::__Grounding__Leg::set_isGrounded(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                            "set_isGrounded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 RootMotion::FinalIK::__Grounding__Leg::get_IKPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                            "get_IKPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(*this, ___internal_method);
}
inline void RootMotion::FinalIK::__Grounding__Leg::set_IKPosition(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                            "set_IKPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool RootMotion::FinalIK::__Grounding__Leg::get_initiated()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                            "get_initiated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void RootMotion::FinalIK::__Grounding__Leg::set_initiated(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                            "set_initiated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline float_t RootMotion::FinalIK::__Grounding__Leg::get_heightFromGround()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                            "get_heightFromGround",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void RootMotion::FinalIK::__Grounding__Leg::set_heightFromGround(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                            "set_heightFromGround",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 RootMotion::FinalIK::__Grounding__Leg::get_velocity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                            "get_velocity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(*this, ___internal_method);
}
inline void RootMotion::FinalIK::__Grounding__Leg::set_velocity(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                            "set_velocity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::Transform* RootMotion::FinalIK::__Grounding__Leg::get_transform()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                            "get_transform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Transform*, false>(*this, ___internal_method);
}
inline void RootMotion::FinalIK::__Grounding__Leg::set_transform(::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                            "set_transform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline float_t RootMotion::FinalIK::__Grounding__Leg::get_IKOffset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                            "get_IKOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void RootMotion::FinalIK::__Grounding__Leg::set_IKOffset(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                            "set_IKOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::RaycastHit RootMotion::FinalIK::__Grounding__Leg::get_heelHit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                            "get_heelHit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RaycastHit, false>(*this, ___internal_method);
}
inline void RootMotion::FinalIK::__Grounding__Leg::set_heelHit(::UnityEngine::RaycastHit  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                            "set_heelHit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RaycastHit>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::RaycastHit RootMotion::FinalIK::__Grounding__Leg::get_capsuleHit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                            "get_capsuleHit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RaycastHit, false>(*this, ___internal_method);
}
inline void RootMotion::FinalIK::__Grounding__Leg::set_capsuleHit(::UnityEngine::RaycastHit  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                            "set_capsuleHit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RaycastHit>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::RaycastHit RootMotion::FinalIK::__Grounding__Leg::get_GetHitPoint()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                            "get_GetHitPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RaycastHit, false>(*this, ___internal_method);
}
inline void RootMotion::FinalIK::__Grounding__Leg::SetFootPosition(::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                            "SetFootPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, position);
}
inline void RootMotion::FinalIK::__Grounding__Leg::Initiate(::RootMotion::FinalIK::Grounding*  grounding, ::UnityEngine::Transform*  transform)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                            "Initiate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::Grounding*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, grounding, transform);
}
inline void RootMotion::FinalIK::__Grounding__Leg::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void RootMotion::FinalIK::__Grounding__Leg::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void RootMotion::FinalIK::__Grounding__Leg::Process()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline float_t RootMotion::FinalIK::__Grounding__Leg::get_stepHeightFromGround()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                            "get_stepHeightFromGround",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline ::UnityEngine::RaycastHit RootMotion::FinalIK::__Grounding__Leg::GetCapsuleHit(::UnityEngine::Vector3  offsetFromHeel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                            "GetCapsuleHit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RaycastHit, false>(*this, ___internal_method, offsetFromHeel);
}
inline ::UnityEngine::RaycastHit RootMotion::FinalIK::__Grounding__Leg::GetRaycastHit(::UnityEngine::Vector3  offsetFromHeel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                            "GetRaycastHit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RaycastHit, false>(*this, ___internal_method, offsetFromHeel);
}
inline ::UnityEngine::Vector3 RootMotion::FinalIK::__Grounding__Leg::RotateNormal(::UnityEngine::Vector3  normal)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                            "RotateNormal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(*this, ___internal_method, normal);
}
inline void RootMotion::FinalIK::__Grounding__Leg::SetFootToPoint(::UnityEngine::Vector3  normal, ::UnityEngine::Vector3  point)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                            "SetFootToPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, normal, point);
}
inline void RootMotion::FinalIK::__Grounding__Leg::SetFootToPlane(::UnityEngine::Vector3  planeNormal, ::UnityEngine::Vector3  planePoint, ::UnityEngine::Vector3  heelHitPoint)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                            "SetFootToPlane",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, planeNormal, planePoint, heelHitPoint);
}
inline float_t RootMotion::FinalIK::__Grounding__Leg::GetHeightFromGround(::UnityEngine::Vector3  hitPoint)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                            "GetHeightFromGround",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method, hitPoint);
}
inline void RootMotion::FinalIK::__Grounding__Leg::RotateFoot()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                            "RotateFoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::UnityEngine::Quaternion RootMotion::FinalIK::__Grounding__Leg::GetRotationOffsetTarget()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                            "GetRotationOffsetTarget",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion, false>(*this, ___internal_method);
}
inline float_t RootMotion::FinalIK::__Grounding__Leg::get_rootYOffset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                            "get_rootYOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline ::RootMotion::FinalIK::__Grounding__Leg* RootMotion::FinalIK::__Grounding__Leg::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::__Grounding__Leg*>());
}
inline void RootMotion::FinalIK::__Grounding__Leg::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Pelvis.get_IKOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::RootMotion::FinalIK::__Grounding__Pelvis::*)()>(&::RootMotion::FinalIK::__Grounding__Pelvis::get_IKOffset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x124df0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Pelvis*>::get(),
                            "get_IKOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Pelvis.set_IKOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__Grounding__Pelvis::*)(::UnityEngine::Vector3)>(&::RootMotion::FinalIK::__Grounding__Pelvis::set_IKOffset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x124df18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Pelvis*>::get(),
                            "set_IKOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Pelvis.get_heightOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::RootMotion::FinalIK::__Grounding__Pelvis::*)()>(&::RootMotion::FinalIK::__Grounding__Pelvis::get_heightOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x124df24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Pelvis*>::get(),
                            "get_heightOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Pelvis.set_heightOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__Grounding__Pelvis::*)(float_t)>(&::RootMotion::FinalIK::__Grounding__Pelvis::set_heightOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x124df2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Pelvis*>::get(),
                            "set_heightOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Pelvis.Initiate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__Grounding__Pelvis::*)(::RootMotion::FinalIK::Grounding*)>(&::RootMotion::FinalIK::__Grounding__Pelvis::Initiate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x124c3d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Pelvis*>::get(),
                            "Initiate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::Grounding*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Pelvis.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__Grounding__Pelvis::*)()>(&::RootMotion::FinalIK::__Grounding__Pelvis::Reset)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x124cd7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Pelvis*>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Pelvis.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__Grounding__Pelvis::*)()>(&::RootMotion::FinalIK::__Grounding__Pelvis::OnEnable)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x124df34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Pelvis*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Pelvis.Process
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__Grounding__Pelvis::*)(float_t, float_t, bool)>(&::RootMotion::FinalIK::__Grounding__Pelvis::Process)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x124cb90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Pelvis*>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Pelvis._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__Grounding__Pelvis::*)()>(&::RootMotion::FinalIK::__Grounding__Pelvis::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x124c300;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Pelvis*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void RootMotion::FinalIK::__Grounding__Pelvis::__set__IKOffset_k__BackingField(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x10>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__Grounding__Pelvis::__get__IKOffset_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x10>(this);
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__Grounding__Pelvis::__get__IKOffset_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x10>(this);
}
constexpr void RootMotion::FinalIK::__Grounding__Pelvis::__set__heightOffset_k__BackingField(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::__Grounding__Pelvis::__get__heightOffset_k__BackingField()  {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr float_t const& RootMotion::FinalIK::__Grounding__Pelvis::__get__heightOffset_k__BackingField() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr void RootMotion::FinalIK::__Grounding__Pelvis::__set_grounding(::RootMotion::FinalIK::Grounding*  value)  {
::cordl_internals::setInstanceField<::RootMotion::FinalIK::Grounding*, 0x20>(this, std::forward<::RootMotion::FinalIK::Grounding*>(value));
}
constexpr ::RootMotion::FinalIK::Grounding* RootMotion::FinalIK::__Grounding__Pelvis::__get_grounding()  {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::Grounding*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::Grounding*> RootMotion::FinalIK::__Grounding__Pelvis::__get_grounding() const {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::Grounding*, 0x20>(this);
}
constexpr void RootMotion::FinalIK::__Grounding__Pelvis::__set_lastRootPosition(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x28>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__Grounding__Pelvis::__get_lastRootPosition()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x28>(this);
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__Grounding__Pelvis::__get_lastRootPosition() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x28>(this);
}
constexpr void RootMotion::FinalIK::__Grounding__Pelvis::__set_damperF(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x34>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::__Grounding__Pelvis::__get_damperF()  {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this);
}
constexpr float_t const& RootMotion::FinalIK::__Grounding__Pelvis::__get_damperF() const {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this);
}
constexpr void RootMotion::FinalIK::__Grounding__Pelvis::__set_initiated(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this, std::forward<bool>(value));
}
constexpr bool& RootMotion::FinalIK::__Grounding__Pelvis::__get_initiated()  {
return ::cordl_internals::getInstanceField<bool, 0x38>(this);
}
constexpr bool const& RootMotion::FinalIK::__Grounding__Pelvis::__get_initiated() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this);
}
constexpr void RootMotion::FinalIK::__Grounding__Pelvis::__set_lastTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x3c>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::__Grounding__Pelvis::__get_lastTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x3c>(this);
}
constexpr float_t const& RootMotion::FinalIK::__Grounding__Pelvis::__get_lastTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x3c>(this);
}
inline ::UnityEngine::Vector3 RootMotion::FinalIK::__Grounding__Pelvis::get_IKOffset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Pelvis*>::get(),
                            "get_IKOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(*this, ___internal_method);
}
inline void RootMotion::FinalIK::__Grounding__Pelvis::set_IKOffset(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Pelvis*>::get(),
                            "set_IKOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline float_t RootMotion::FinalIK::__Grounding__Pelvis::get_heightOffset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Pelvis*>::get(),
                            "get_heightOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void RootMotion::FinalIK::__Grounding__Pelvis::set_heightOffset(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Pelvis*>::get(),
                            "set_heightOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void RootMotion::FinalIK::__Grounding__Pelvis::Initiate(::RootMotion::FinalIK::Grounding*  grounding)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Pelvis*>::get(),
                            "Initiate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::Grounding*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, grounding);
}
inline void RootMotion::FinalIK::__Grounding__Pelvis::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Pelvis*>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void RootMotion::FinalIK::__Grounding__Pelvis::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Pelvis*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void RootMotion::FinalIK::__Grounding__Pelvis::Process(float_t  lowestOffset, float_t  highestOffset, bool  isGrounded)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Pelvis*>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, lowestOffset, highestOffset, isGrounded);
}
inline ::RootMotion::FinalIK::__Grounding__Pelvis* RootMotion::FinalIK::__Grounding__Pelvis::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::__Grounding__Pelvis*>());
}
inline void RootMotion::FinalIK::__Grounding__Pelvis::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Pelvis*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding.get_legs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::RootMotion::FinalIK::__Grounding__Leg*,::Array<::RootMotion::FinalIK::__Grounding__Leg*>*> (::RootMotion::FinalIK::Grounding::*)()>(&::RootMotion::FinalIK::Grounding::get_legs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x124bde0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(),
                            "get_legs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding.set_legs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::Grounding::*)(::ArrayW<::RootMotion::FinalIK::__Grounding__Leg*,::Array<::RootMotion::FinalIK::__Grounding__Leg*>*>)>(&::RootMotion::FinalIK::Grounding::set_legs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x124bde8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(),
                            "set_legs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::RootMotion::FinalIK::__Grounding__Leg*,::Array<::RootMotion::FinalIK::__Grounding__Leg*>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding.get_pelvis
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::__Grounding__Pelvis* (::RootMotion::FinalIK::Grounding::*)()>(&::RootMotion::FinalIK::Grounding::get_pelvis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x124bdf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(),
                            "get_pelvis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding.set_pelvis
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::Grounding::*)(::RootMotion::FinalIK::__Grounding__Pelvis*)>(&::RootMotion::FinalIK::Grounding::set_pelvis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x124bdf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(),
                            "set_pelvis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__Grounding__Pelvis*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding.get_isGrounded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::Grounding::*)()>(&::RootMotion::FinalIK::Grounding::get_isGrounded)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x124be00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(),
                            "get_isGrounded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding.set_isGrounded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::Grounding::*)(bool)>(&::RootMotion::FinalIK::Grounding::set_isGrounded)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x124be08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(),
                            "set_isGrounded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding.get_root
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (::RootMotion::FinalIK::Grounding::*)()>(&::RootMotion::FinalIK::Grounding::get_root)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x124be14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(),
                            "get_root",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding.set_root
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::Grounding::*)(::UnityEngine::Transform*)>(&::RootMotion::FinalIK::Grounding::set_root)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x124be1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(),
                            "set_root",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding.get_rootHit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RaycastHit (::RootMotion::FinalIK::Grounding::*)()>(&::RootMotion::FinalIK::Grounding::get_rootHit)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x124be24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(),
                            "get_rootHit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding.set_rootHit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::Grounding::*)(::UnityEngine::RaycastHit)>(&::RootMotion::FinalIK::Grounding::set_rootHit)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x124be3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(),
                            "set_rootHit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RaycastHit>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding.get_rootGrounded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::Grounding::*)()>(&::RootMotion::FinalIK::Grounding::get_rootGrounded)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x124be5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(),
                            "get_rootGrounded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding.GetRootHit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RaycastHit (::RootMotion::FinalIK::Grounding::*)(float_t)>(&::RootMotion::FinalIK::Grounding::GetRootHit)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x124bea4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(),
                            "GetRootHit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding.IsValid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::Grounding::*)(ByRef<::StringW>)>(&::RootMotion::FinalIK::Grounding::IsValid)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x124c16c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(),
                            "IsValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding.Initiate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::Grounding::*)(::UnityEngine::Transform*, ::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>)>(&::RootMotion::FinalIK::Grounding::Initiate)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x1246bbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(),
                            "Initiate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::Grounding::*)()>(&::RootMotion::FinalIK::Grounding::Update)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x12471a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding.GetLegsPlaneNormal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::RootMotion::FinalIK::Grounding::*)()>(&::RootMotion::FinalIK::Grounding::GetLegsPlaneNormal)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x1248140;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(),
                            "GetLegsPlaneNormal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::Grounding::*)()>(&::RootMotion::FinalIK::Grounding::Reset)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x1246834;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding.LogWarning
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::Grounding::*)(::StringW)>(&::RootMotion::FinalIK::Grounding::LogWarning)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x124c3e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(),
                            "LogWarning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding.get_up
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::RootMotion::FinalIK::Grounding::*)()>(&::RootMotion::FinalIK::Grounding::get_up)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x124c104;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(),
                            "get_up",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding.GetVerticalOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::RootMotion::FinalIK::Grounding::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::RootMotion::FinalIK::Grounding::GetVerticalOffset)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x124cf58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(),
                            "GetVerticalOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding.Flatten
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::RootMotion::FinalIK::Grounding::*)(::UnityEngine::Vector3)>(&::RootMotion::FinalIK::Grounding::Flatten)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x124cfdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(),
                            "Flatten",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding.get_useRootRotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::Grounding::*)()>(&::RootMotion::FinalIK::Grounding::get_useRootRotation)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x124cea4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(),
                            "get_useRootRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding.GetFootCenterOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::RootMotion::FinalIK::Grounding::*)()>(&::RootMotion::FinalIK::Grounding::GetFootCenterOffset)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x124d130;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(),
                            "GetFootCenterOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::Grounding::*)()>(&::RootMotion::FinalIK::Grounding::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x124b15c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void RootMotion::FinalIK::Grounding::__set_layers(::UnityEngine::LayerMask  value)  {
::cordl_internals::setInstanceField<::UnityEngine::LayerMask, 0x10>(this, std::forward<::UnityEngine::LayerMask>(value));
}
constexpr ::UnityEngine::LayerMask& RootMotion::FinalIK::Grounding::__get_layers()  {
return ::cordl_internals::getInstanceField<::UnityEngine::LayerMask, 0x10>(this);
}
constexpr ::UnityEngine::LayerMask const& RootMotion::FinalIK::Grounding::__get_layers() const {
return ::cordl_internals::getInstanceField<::UnityEngine::LayerMask, 0x10>(this);
}
constexpr void RootMotion::FinalIK::Grounding::__set_maxStep(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::Grounding::__get_maxStep()  {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this);
}
constexpr float_t const& RootMotion::FinalIK::Grounding::__get_maxStep() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this);
}
constexpr void RootMotion::FinalIK::Grounding::__set_heightOffset(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::Grounding::__get_heightOffset()  {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr float_t const& RootMotion::FinalIK::Grounding::__get_heightOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr void RootMotion::FinalIK::Grounding::__set_footSpeed(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::Grounding::__get_footSpeed()  {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr float_t const& RootMotion::FinalIK::Grounding::__get_footSpeed() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr void RootMotion::FinalIK::Grounding::__set_footRadius(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::Grounding::__get_footRadius()  {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr float_t const& RootMotion::FinalIK::Grounding::__get_footRadius() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr void RootMotion::FinalIK::Grounding::__set_footCenterOffset(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::Grounding::__get_footCenterOffset()  {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this);
}
constexpr float_t const& RootMotion::FinalIK::Grounding::__get_footCenterOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this);
}
constexpr void RootMotion::FinalIK::Grounding::__set_prediction(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::Grounding::__get_prediction()  {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
constexpr float_t const& RootMotion::FinalIK::Grounding::__get_prediction() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
constexpr void RootMotion::FinalIK::Grounding::__set_footRotationWeight(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x2c>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::Grounding::__get_footRotationWeight()  {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this);
}
constexpr float_t const& RootMotion::FinalIK::Grounding::__get_footRotationWeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this);
}
constexpr void RootMotion::FinalIK::Grounding::__set_footRotationSpeed(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::Grounding::__get_footRotationSpeed()  {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr float_t const& RootMotion::FinalIK::Grounding::__get_footRotationSpeed() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr void RootMotion::FinalIK::Grounding::__set_maxFootRotationAngle(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x34>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::Grounding::__get_maxFootRotationAngle()  {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this);
}
constexpr float_t const& RootMotion::FinalIK::Grounding::__get_maxFootRotationAngle() const {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this);
}
constexpr void RootMotion::FinalIK::Grounding::__set_rotateSolver(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this, std::forward<bool>(value));
}
constexpr bool& RootMotion::FinalIK::Grounding::__get_rotateSolver()  {
return ::cordl_internals::getInstanceField<bool, 0x38>(this);
}
constexpr bool const& RootMotion::FinalIK::Grounding::__get_rotateSolver() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this);
}
constexpr void RootMotion::FinalIK::Grounding::__set_pelvisSpeed(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x3c>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::Grounding::__get_pelvisSpeed()  {
return ::cordl_internals::getInstanceField<float_t, 0x3c>(this);
}
constexpr float_t const& RootMotion::FinalIK::Grounding::__get_pelvisSpeed() const {
return ::cordl_internals::getInstanceField<float_t, 0x3c>(this);
}
constexpr void RootMotion::FinalIK::Grounding::__set_pelvisDamper(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x40>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::Grounding::__get_pelvisDamper()  {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this);
}
constexpr float_t const& RootMotion::FinalIK::Grounding::__get_pelvisDamper() const {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this);
}
constexpr void RootMotion::FinalIK::Grounding::__set_lowerPelvisWeight(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x44>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::Grounding::__get_lowerPelvisWeight()  {
return ::cordl_internals::getInstanceField<float_t, 0x44>(this);
}
constexpr float_t const& RootMotion::FinalIK::Grounding::__get_lowerPelvisWeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x44>(this);
}
constexpr void RootMotion::FinalIK::Grounding::__set_liftPelvisWeight(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x48>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::Grounding::__get_liftPelvisWeight()  {
return ::cordl_internals::getInstanceField<float_t, 0x48>(this);
}
constexpr float_t const& RootMotion::FinalIK::Grounding::__get_liftPelvisWeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x48>(this);
}
constexpr void RootMotion::FinalIK::Grounding::__set_rootSphereCastRadius(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x4c>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::Grounding::__get_rootSphereCastRadius()  {
return ::cordl_internals::getInstanceField<float_t, 0x4c>(this);
}
constexpr float_t const& RootMotion::FinalIK::Grounding::__get_rootSphereCastRadius() const {
return ::cordl_internals::getInstanceField<float_t, 0x4c>(this);
}
constexpr void RootMotion::FinalIK::Grounding::__set_overstepFallsDown(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x50>(this, std::forward<bool>(value));
}
constexpr bool& RootMotion::FinalIK::Grounding::__get_overstepFallsDown()  {
return ::cordl_internals::getInstanceField<bool, 0x50>(this);
}
constexpr bool const& RootMotion::FinalIK::Grounding::__get_overstepFallsDown() const {
return ::cordl_internals::getInstanceField<bool, 0x50>(this);
}
constexpr void RootMotion::FinalIK::Grounding::__set_quality(::RootMotion::FinalIK::__Grounding__Quality  value)  {
::cordl_internals::setInstanceField<::RootMotion::FinalIK::__Grounding__Quality, 0x54>(this, std::forward<::RootMotion::FinalIK::__Grounding__Quality>(value));
}
constexpr ::RootMotion::FinalIK::__Grounding__Quality& RootMotion::FinalIK::Grounding::__get_quality()  {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::__Grounding__Quality, 0x54>(this);
}
constexpr ::RootMotion::FinalIK::__Grounding__Quality const& RootMotion::FinalIK::Grounding::__get_quality() const {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::__Grounding__Quality, 0x54>(this);
}
constexpr void RootMotion::FinalIK::Grounding::__set__legs_k__BackingField(::ArrayW<::RootMotion::FinalIK::__Grounding__Leg*,::Array<::RootMotion::FinalIK::__Grounding__Leg*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::RootMotion::FinalIK::__Grounding__Leg*,::Array<::RootMotion::FinalIK::__Grounding__Leg*>*>, 0x58>(this, std::forward<::ArrayW<::RootMotion::FinalIK::__Grounding__Leg*,::Array<::RootMotion::FinalIK::__Grounding__Leg*>*>>(value));
}
constexpr ::ArrayW<::RootMotion::FinalIK::__Grounding__Leg*,::Array<::RootMotion::FinalIK::__Grounding__Leg*>*>& RootMotion::FinalIK::Grounding::__get__legs_k__BackingField()  {
return ::cordl_internals::getInstanceField<::ArrayW<::RootMotion::FinalIK::__Grounding__Leg*,::Array<::RootMotion::FinalIK::__Grounding__Leg*>*>, 0x58>(this);
}
constexpr ::ArrayW<::RootMotion::FinalIK::__Grounding__Leg*,::Array<::RootMotion::FinalIK::__Grounding__Leg*>*> const& RootMotion::FinalIK::Grounding::__get__legs_k__BackingField() const {
return ::cordl_internals::getInstanceField<::ArrayW<::RootMotion::FinalIK::__Grounding__Leg*,::Array<::RootMotion::FinalIK::__Grounding__Leg*>*>, 0x58>(this);
}
constexpr void RootMotion::FinalIK::Grounding::__set__pelvis_k__BackingField(::RootMotion::FinalIK::__Grounding__Pelvis*  value)  {
::cordl_internals::setInstanceField<::RootMotion::FinalIK::__Grounding__Pelvis*, 0x60>(this, std::forward<::RootMotion::FinalIK::__Grounding__Pelvis*>(value));
}
constexpr ::RootMotion::FinalIK::__Grounding__Pelvis* RootMotion::FinalIK::Grounding::__get__pelvis_k__BackingField()  {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::__Grounding__Pelvis*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__Grounding__Pelvis*> RootMotion::FinalIK::Grounding::__get__pelvis_k__BackingField() const {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::__Grounding__Pelvis*, 0x60>(this);
}
constexpr void RootMotion::FinalIK::Grounding::__set__isGrounded_k__BackingField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x68>(this, std::forward<bool>(value));
}
constexpr bool& RootMotion::FinalIK::Grounding::__get__isGrounded_k__BackingField()  {
return ::cordl_internals::getInstanceField<bool, 0x68>(this);
}
constexpr bool const& RootMotion::FinalIK::Grounding::__get__isGrounded_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x68>(this);
}
constexpr void RootMotion::FinalIK::Grounding::__set__root_k__BackingField(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x70>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* RootMotion::FinalIK::Grounding::__get__root_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> RootMotion::FinalIK::Grounding::__get__root_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x70>(this);
}
constexpr void RootMotion::FinalIK::Grounding::__set__rootHit_k__BackingField(::UnityEngine::RaycastHit  value)  {
::cordl_internals::setInstanceField<::UnityEngine::RaycastHit, 0x78>(this, std::forward<::UnityEngine::RaycastHit>(value));
}
constexpr ::UnityEngine::RaycastHit& RootMotion::FinalIK::Grounding::__get__rootHit_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::RaycastHit, 0x78>(this);
}
constexpr ::UnityEngine::RaycastHit const& RootMotion::FinalIK::Grounding::__get__rootHit_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::RaycastHit, 0x78>(this);
}
constexpr void RootMotion::FinalIK::Grounding::__set_initiated(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xa4>(this, std::forward<bool>(value));
}
constexpr bool& RootMotion::FinalIK::Grounding::__get_initiated()  {
return ::cordl_internals::getInstanceField<bool, 0xa4>(this);
}
constexpr bool const& RootMotion::FinalIK::Grounding::__get_initiated() const {
return ::cordl_internals::getInstanceField<bool, 0xa4>(this);
}
inline ::ArrayW<::RootMotion::FinalIK::__Grounding__Leg*,::Array<::RootMotion::FinalIK::__Grounding__Leg*>*> RootMotion::FinalIK::Grounding::get_legs()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(),
                            "get_legs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::RootMotion::FinalIK::__Grounding__Leg*,::Array<::RootMotion::FinalIK::__Grounding__Leg*>*>, false>(*this, ___internal_method);
}
inline void RootMotion::FinalIK::Grounding::set_legs(::ArrayW<::RootMotion::FinalIK::__Grounding__Leg*,::Array<::RootMotion::FinalIK::__Grounding__Leg*>*>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(),
                            "set_legs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::RootMotion::FinalIK::__Grounding__Leg*,::Array<::RootMotion::FinalIK::__Grounding__Leg*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::RootMotion::FinalIK::__Grounding__Pelvis* RootMotion::FinalIK::Grounding::get_pelvis()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(),
                            "get_pelvis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::RootMotion::FinalIK::__Grounding__Pelvis*, false>(*this, ___internal_method);
}
inline void RootMotion::FinalIK::Grounding::set_pelvis(::RootMotion::FinalIK::__Grounding__Pelvis*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(),
                            "set_pelvis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__Grounding__Pelvis*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool RootMotion::FinalIK::Grounding::get_isGrounded()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(),
                            "get_isGrounded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void RootMotion::FinalIK::Grounding::set_isGrounded(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(),
                            "set_isGrounded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::Transform* RootMotion::FinalIK::Grounding::get_root()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(),
                            "get_root",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Transform*, false>(*this, ___internal_method);
}
inline void RootMotion::FinalIK::Grounding::set_root(::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(),
                            "set_root",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::RaycastHit RootMotion::FinalIK::Grounding::get_rootHit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(),
                            "get_rootHit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RaycastHit, false>(*this, ___internal_method);
}
inline void RootMotion::FinalIK::Grounding::set_rootHit(::UnityEngine::RaycastHit  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(),
                            "set_rootHit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RaycastHit>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool RootMotion::FinalIK::Grounding::get_rootGrounded()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(),
                            "get_rootGrounded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
/// @param maxDistanceMlp: float_t (default: 10.0)
inline ::UnityEngine::RaycastHit RootMotion::FinalIK::Grounding::GetRootHit(float_t  maxDistanceMlp)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(),
                            "GetRootHit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RaycastHit, false>(*this, ___internal_method, maxDistanceMlp);
}
inline bool RootMotion::FinalIK::Grounding::IsValid(ByRef<::StringW>  errorMessage)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(),
                            "IsValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, errorMessage);
}
inline void RootMotion::FinalIK::Grounding::Initiate(::UnityEngine::Transform*  root, ::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>  feet)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(),
                            "Initiate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, root, feet);
}
inline void RootMotion::FinalIK::Grounding::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::UnityEngine::Vector3 RootMotion::FinalIK::Grounding::GetLegsPlaneNormal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(),
                            "GetLegsPlaneNormal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(*this, ___internal_method);
}
inline void RootMotion::FinalIK::Grounding::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void RootMotion::FinalIK::Grounding::LogWarning(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(),
                            "LogWarning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, message);
}
inline ::UnityEngine::Vector3 RootMotion::FinalIK::Grounding::get_up()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(),
                            "get_up",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(*this, ___internal_method);
}
inline float_t RootMotion::FinalIK::Grounding::GetVerticalOffset(::UnityEngine::Vector3  p1, ::UnityEngine::Vector3  p2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(),
                            "GetVerticalOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method, p1, p2);
}
inline ::UnityEngine::Vector3 RootMotion::FinalIK::Grounding::Flatten(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(),
                            "Flatten",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(*this, ___internal_method, v);
}
inline bool RootMotion::FinalIK::Grounding::get_useRootRotation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(),
                            "get_useRootRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::UnityEngine::Vector3 RootMotion::FinalIK::Grounding::GetFootCenterOffset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(),
                            "GetFootCenterOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(*this, ___internal_method);
}
inline ::RootMotion::FinalIK::Grounding* RootMotion::FinalIK::Grounding::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::Grounding*>());
}
inline void RootMotion::FinalIK::Grounding::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
