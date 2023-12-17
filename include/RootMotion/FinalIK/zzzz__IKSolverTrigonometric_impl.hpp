#pragma once
#include "RootMotion/FinalIK/zzzz__IKSolver_impl.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolverTrigonometric_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolverTrigonometric_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolver_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone.Initiate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone::Initiate)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x12704c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*>::get(),
                            "Initiate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone.GetRotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone::GetRotation)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1270d68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*>::get(),
                            "GetRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone.GetBendNormalFromCurrentRotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone::*)()>(&::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone::GetBendNormalFromCurrentRotation)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x126ba9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*>::get(),
                            "GetBendNormalFromCurrentRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone::*)()>(&::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1270e04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone::__set_targetToLocalSpace(::UnityEngine::Quaternion  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Quaternion, 0x74>(this, std::forward<::UnityEngine::Quaternion>(value));
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone::__get_targetToLocalSpace()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x74>(this);
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone::__get_targetToLocalSpace() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x74>(this);
}
constexpr void RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone::__set_defaultLocalBendNormal(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x84>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone::__get_defaultLocalBendNormal()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x84>(this);
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone::__get_defaultLocalBendNormal() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x84>(this);
}
inline void RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone::Initiate(::UnityEngine::Vector3  childPosition, ::UnityEngine::Vector3  bendNormal)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*>::get(),
                            "Initiate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, childPosition, bendNormal);
}
inline ::UnityEngine::Quaternion RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone::GetRotation(::UnityEngine::Vector3  direction, ::UnityEngine::Vector3  bendNormal)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*>::get(),
                            "GetRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion, false>(*this, ___internal_method, direction, bendNormal);
}
inline ::UnityEngine::Vector3 RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone::GetBendNormalFromCurrentRotation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*>::get(),
                            "GetBendNormalFromCurrentRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(*this, ___internal_method);
}
inline ::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone* RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*>());
}
inline void RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverTrigonometric.SetBendGoalPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverTrigonometric::*)(::UnityEngine::Vector3, float_t)>(&::RootMotion::FinalIK::IKSolverTrigonometric::SetBendGoalPosition)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x126f224;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                            "SetBendGoalPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverTrigonometric.SetBendPlaneToCurrent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverTrigonometric::*)()>(&::RootMotion::FinalIK::IKSolverTrigonometric::SetBendPlaneToCurrent)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x126f3b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                            "SetBendPlaneToCurrent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverTrigonometric.SetIKRotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverTrigonometric::*)(::UnityEngine::Quaternion)>(&::RootMotion::FinalIK::IKSolverTrigonometric::SetIKRotation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x126f538;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                            "SetIKRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverTrigonometric.SetIKRotationWeight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverTrigonometric::*)(float_t)>(&::RootMotion::FinalIK::IKSolverTrigonometric::SetIKRotationWeight)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x126f544;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                            "SetIKRotationWeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverTrigonometric.GetIKRotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (::RootMotion::FinalIK::IKSolverTrigonometric::*)()>(&::RootMotion::FinalIK::IKSolverTrigonometric::GetIKRotation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x126f560;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                            "GetIKRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverTrigonometric.GetIKRotationWeight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::RootMotion::FinalIK::IKSolverTrigonometric::*)()>(&::RootMotion::FinalIK::IKSolverTrigonometric::GetIKRotationWeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x126f56c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                            "GetIKRotationWeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverTrigonometric.GetPoints
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::RootMotion::FinalIK::__IKSolver__Point*,::Array<::RootMotion::FinalIK::__IKSolver__Point*>*> (::RootMotion::FinalIK::IKSolverTrigonometric::*)()>(&::RootMotion::FinalIK::IKSolverTrigonometric::GetPoints)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x126f574;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverTrigonometric.GetPoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::__IKSolver__Point* (::RootMotion::FinalIK::IKSolverTrigonometric::*)(::UnityEngine::Transform*)>(&::RootMotion::FinalIK::IKSolverTrigonometric::GetPoint)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x126f660;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverTrigonometric.StoreDefaultLocalState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverTrigonometric::*)()>(&::RootMotion::FinalIK::IKSolverTrigonometric::StoreDefaultLocalState)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x126f758;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverTrigonometric.FixTransforms
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverTrigonometric::*)()>(&::RootMotion::FinalIK::IKSolverTrigonometric::FixTransforms)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x126f798;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverTrigonometric.IsValid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::IKSolverTrigonometric::*)(ByRef<::StringW>)>(&::RootMotion::FinalIK::IKSolverTrigonometric::IsValid)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x126f7e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverTrigonometric.SetChain
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::IKSolverTrigonometric::*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&::RootMotion::FinalIK::IKSolverTrigonometric::SetChain)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x126fb8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                            "SetChain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverTrigonometric.Solve
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::RootMotion::FinalIK::IKSolverTrigonometric::Solve)> {
  constexpr static std::size_t size = 0x4f4;
  constexpr static std::size_t addrs = 0x126fbd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                            "Solve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverTrigonometric.GetDirectionToBendPoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, float_t, float_t)>(&::RootMotion::FinalIK::IKSolverTrigonometric::GetDirectionToBendPoint)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x12700cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                            "GetDirectionToBendPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverTrigonometric.OnInitiate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverTrigonometric::*)()>(&::RootMotion::FinalIK::IKSolverTrigonometric::OnInitiate)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x1270224;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverTrigonometric.IsDirectHierarchy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::IKSolverTrigonometric::*)()>(&::RootMotion::FinalIK::IKSolverTrigonometric::IsDirectHierarchy)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x12703d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                            "IsDirectHierarchy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverTrigonometric.InitiateBones
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverTrigonometric::*)()>(&::RootMotion::FinalIK::IKSolverTrigonometric::InitiateBones)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1270350;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                            "InitiateBones",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverTrigonometric.OnUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverTrigonometric::*)()>(&::RootMotion::FinalIK::IKSolverTrigonometric::OnUpdate)> {
  constexpr static std::size_t size = 0x5f8;
  constexpr static std::size_t addrs = 0x12705b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverTrigonometric.OnInitiateVirtual
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverTrigonometric::*)()>(&::RootMotion::FinalIK::IKSolverTrigonometric::OnInitiateVirtual)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1270df8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverTrigonometric.OnUpdateVirtual
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverTrigonometric::*)()>(&::RootMotion::FinalIK::IKSolverTrigonometric::OnUpdateVirtual)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1270dfc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverTrigonometric.OnPostSolveVirtual
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverTrigonometric::*)()>(&::RootMotion::FinalIK::IKSolverTrigonometric::OnPostSolveVirtual)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1270e00;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverTrigonometric.GetBendDirection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::RootMotion::FinalIK::IKSolverTrigonometric::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::RootMotion::FinalIK::IKSolverTrigonometric::GetBendDirection)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1270ba8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                            "GetBendDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverTrigonometric._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverTrigonometric::*)()>(&::RootMotion::FinalIK::IKSolverTrigonometric::_ctor)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x126cc44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void RootMotion::FinalIK::IKSolverTrigonometric::__set_target(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x58>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* RootMotion::FinalIK::IKSolverTrigonometric::__get_target()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> RootMotion::FinalIK::IKSolverTrigonometric::__get_target() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x58>(this);
}
constexpr void RootMotion::FinalIK::IKSolverTrigonometric::__set_IKRotationWeight(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x60>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::IKSolverTrigonometric::__get_IKRotationWeight()  {
return ::cordl_internals::getInstanceField<float_t, 0x60>(this);
}
constexpr float_t const& RootMotion::FinalIK::IKSolverTrigonometric::__get_IKRotationWeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x60>(this);
}
constexpr void RootMotion::FinalIK::IKSolverTrigonometric::__set_IKRotation(::UnityEngine::Quaternion  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Quaternion, 0x64>(this, std::forward<::UnityEngine::Quaternion>(value));
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::IKSolverTrigonometric::__get_IKRotation()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x64>(this);
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::IKSolverTrigonometric::__get_IKRotation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x64>(this);
}
constexpr void RootMotion::FinalIK::IKSolverTrigonometric::__set_bendNormal(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x74>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::IKSolverTrigonometric::__get_bendNormal()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x74>(this);
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::IKSolverTrigonometric::__get_bendNormal() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x74>(this);
}
constexpr void RootMotion::FinalIK::IKSolverTrigonometric::__set_bone1(::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*  value)  {
::cordl_internals::setInstanceField<::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*, 0x80>(this, std::forward<::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*>(value));
}
constexpr ::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone* RootMotion::FinalIK::IKSolverTrigonometric::__get_bone1()  {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*, 0x80>(this);
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*> RootMotion::FinalIK::IKSolverTrigonometric::__get_bone1() const {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*, 0x80>(this);
}
constexpr void RootMotion::FinalIK::IKSolverTrigonometric::__set_bone2(::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*  value)  {
::cordl_internals::setInstanceField<::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*, 0x88>(this, std::forward<::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*>(value));
}
constexpr ::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone* RootMotion::FinalIK::IKSolverTrigonometric::__get_bone2()  {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*, 0x88>(this);
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*> RootMotion::FinalIK::IKSolverTrigonometric::__get_bone2() const {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*, 0x88>(this);
}
constexpr void RootMotion::FinalIK::IKSolverTrigonometric::__set_bone3(::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*  value)  {
::cordl_internals::setInstanceField<::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*, 0x90>(this, std::forward<::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*>(value));
}
constexpr ::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone* RootMotion::FinalIK::IKSolverTrigonometric::__get_bone3()  {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*, 0x90>(this);
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*> RootMotion::FinalIK::IKSolverTrigonometric::__get_bone3() const {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*, 0x90>(this);
}
constexpr void RootMotion::FinalIK::IKSolverTrigonometric::__set_weightIKPosition(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x98>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::IKSolverTrigonometric::__get_weightIKPosition()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x98>(this);
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::IKSolverTrigonometric::__get_weightIKPosition() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x98>(this);
}
constexpr void RootMotion::FinalIK::IKSolverTrigonometric::__set_directHierarchy(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xa4>(this, std::forward<bool>(value));
}
constexpr bool& RootMotion::FinalIK::IKSolverTrigonometric::__get_directHierarchy()  {
return ::cordl_internals::getInstanceField<bool, 0xa4>(this);
}
constexpr bool const& RootMotion::FinalIK::IKSolverTrigonometric::__get_directHierarchy() const {
return ::cordl_internals::getInstanceField<bool, 0xa4>(this);
}
inline void RootMotion::FinalIK::IKSolverTrigonometric::SetBendGoalPosition(::UnityEngine::Vector3  goalPosition, float_t  weight)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                            "SetBendGoalPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, goalPosition, weight);
}
inline void RootMotion::FinalIK::IKSolverTrigonometric::SetBendPlaneToCurrent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                            "SetBendPlaneToCurrent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void RootMotion::FinalIK::IKSolverTrigonometric::SetIKRotation(::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                            "SetIKRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, rotation);
}
inline void RootMotion::FinalIK::IKSolverTrigonometric::SetIKRotationWeight(float_t  weight)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                            "SetIKRotationWeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, weight);
}
inline ::UnityEngine::Quaternion RootMotion::FinalIK::IKSolverTrigonometric::GetIKRotation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                            "GetIKRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion, false>(*this, ___internal_method);
}
inline float_t RootMotion::FinalIK::IKSolverTrigonometric::GetIKRotationWeight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                            "GetIKRotationWeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline ::ArrayW<::RootMotion::FinalIK::__IKSolver__Point*,::Array<::RootMotion::FinalIK::__IKSolver__Point*>*> RootMotion::FinalIK::IKSolverTrigonometric::GetPoints()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                            "GetPoints",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::RootMotion::FinalIK::__IKSolver__Point*,::Array<::RootMotion::FinalIK::__IKSolver__Point*>*>, false>(*this, ___internal_method);
}
inline ::RootMotion::FinalIK::__IKSolver__Point* RootMotion::FinalIK::IKSolverTrigonometric::GetPoint(::UnityEngine::Transform*  transform)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                            "GetPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::RootMotion::FinalIK::__IKSolver__Point*, false>(*this, ___internal_method, transform);
}
inline void RootMotion::FinalIK::IKSolverTrigonometric::StoreDefaultLocalState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                            "StoreDefaultLocalState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void RootMotion::FinalIK::IKSolverTrigonometric::FixTransforms()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                            "FixTransforms",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool RootMotion::FinalIK::IKSolverTrigonometric::IsValid(ByRef<::StringW>  message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                            "IsValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, message);
}
inline bool RootMotion::FinalIK::IKSolverTrigonometric::SetChain(::UnityEngine::Transform*  bone1, ::UnityEngine::Transform*  bone2, ::UnityEngine::Transform*  bone3, ::UnityEngine::Transform*  root)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                            "SetChain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, bone1, bone2, bone3, root);
}
inline void RootMotion::FinalIK::IKSolverTrigonometric::Solve(::UnityEngine::Transform*  bone1, ::UnityEngine::Transform*  bone2, ::UnityEngine::Transform*  bone3, ::UnityEngine::Vector3  targetPosition, ::UnityEngine::Vector3  bendNormal, float_t  weight)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                            "Solve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, bone1, bone2, bone3, targetPosition, bendNormal, weight);
}
inline ::UnityEngine::Vector3 RootMotion::FinalIK::IKSolverTrigonometric::GetDirectionToBendPoint(::UnityEngine::Vector3  direction, float_t  directionMag, ::UnityEngine::Vector3  bendDirection, float_t  sqrMag1, float_t  sqrMag2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                            "GetDirectionToBendPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, direction, directionMag, bendDirection, sqrMag1, sqrMag2);
}
inline void RootMotion::FinalIK::IKSolverTrigonometric::OnInitiate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                            "OnInitiate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool RootMotion::FinalIK::IKSolverTrigonometric::IsDirectHierarchy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                            "IsDirectHierarchy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void RootMotion::FinalIK::IKSolverTrigonometric::InitiateBones()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                            "InitiateBones",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void RootMotion::FinalIK::IKSolverTrigonometric::OnUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                            "OnUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void RootMotion::FinalIK::IKSolverTrigonometric::OnInitiateVirtual()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                            "OnInitiateVirtual",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void RootMotion::FinalIK::IKSolverTrigonometric::OnUpdateVirtual()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                            "OnUpdateVirtual",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void RootMotion::FinalIK::IKSolverTrigonometric::OnPostSolveVirtual()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                            "OnPostSolveVirtual",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::UnityEngine::Vector3 RootMotion::FinalIK::IKSolverTrigonometric::GetBendDirection(::UnityEngine::Vector3  IKPosition, ::UnityEngine::Vector3  bendNormal)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                            "GetBendDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(*this, ___internal_method, IKPosition, bendNormal);
}
inline ::RootMotion::FinalIK::IKSolverTrigonometric* RootMotion::FinalIK::IKSolverTrigonometric::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::IKSolverTrigonometric*>());
}
inline void RootMotion::FinalIK::IKSolverTrigonometric::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
