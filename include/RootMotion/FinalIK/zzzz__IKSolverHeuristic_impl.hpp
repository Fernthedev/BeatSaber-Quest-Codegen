#pragma once
#include "RootMotion/FinalIK/zzzz__IKSolver_impl.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolverHeuristic_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolver_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverHeuristic.SetChain
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::IKSolverHeuristic::*)(::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>, ::UnityEngine::Transform*)>(&::RootMotion::FinalIK::IKSolverHeuristic::SetChain)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x1269d2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverHeuristic*>::get(),
                            "SetChain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverHeuristic.AddBone
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverHeuristic::*)(::UnityEngine::Transform*)>(&::RootMotion::FinalIK::IKSolverHeuristic::AddBone)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x1269ea8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverHeuristic*>::get(),
                            "AddBone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverHeuristic.StoreDefaultLocalState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverHeuristic::*)()>(&::RootMotion::FinalIK::IKSolverHeuristic::StoreDefaultLocalState)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x1269fd4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverHeuristic*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverHeuristic*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverHeuristic.FixTransforms
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverHeuristic::*)()>(&::RootMotion::FinalIK::IKSolverHeuristic::FixTransforms)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x126a030;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverHeuristic*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverHeuristic*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverHeuristic.IsValid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::IKSolverHeuristic::*)(ByRef<::StringW>)>(&::RootMotion::FinalIK::IKSolverHeuristic::IsValid)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0x126a0a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverHeuristic*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverHeuristic*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverHeuristic.GetPoints
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::RootMotion::FinalIK::__IKSolver__Point*,::Array<::RootMotion::FinalIK::__IKSolver__Point*>*> (::RootMotion::FinalIK::IKSolverHeuristic::*)()>(&::RootMotion::FinalIK::IKSolverHeuristic::GetPoints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x126a464;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverHeuristic*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverHeuristic*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverHeuristic.GetPoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::__IKSolver__Point* (::RootMotion::FinalIK::IKSolverHeuristic::*)(::UnityEngine::Transform*)>(&::RootMotion::FinalIK::IKSolverHeuristic::GetPoint)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x126a46c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverHeuristic*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverHeuristic*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverHeuristic.get_minBones
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::RootMotion::FinalIK::IKSolverHeuristic::*)()>(&::RootMotion::FinalIK::IKSolverHeuristic::get_minBones)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x126a548;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverHeuristic*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverHeuristic*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverHeuristic.get_boneLengthCanBeZero
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::IKSolverHeuristic::*)()>(&::RootMotion::FinalIK::IKSolverHeuristic::get_boneLengthCanBeZero)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x126a550;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverHeuristic*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverHeuristic*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverHeuristic.get_allowCommonParent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::IKSolverHeuristic::*)()>(&::RootMotion::FinalIK::IKSolverHeuristic::get_allowCommonParent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x126a558;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverHeuristic*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverHeuristic*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverHeuristic.OnInitiate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverHeuristic::*)()>(&::RootMotion::FinalIK::IKSolverHeuristic::OnInitiate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x126a560;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverHeuristic*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverHeuristic*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverHeuristic.OnUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverHeuristic::*)()>(&::RootMotion::FinalIK::IKSolverHeuristic::OnUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x126a564;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverHeuristic*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverHeuristic*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverHeuristic.InitiateBones
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverHeuristic::*)()>(&::RootMotion::FinalIK::IKSolverHeuristic::InitiateBones)> {
  constexpr static std::size_t size = 0x488;
  constexpr static std::size_t addrs = 0x1261e88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverHeuristic*>::get(),
                            "InitiateBones",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverHeuristic.get_localDirection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::RootMotion::FinalIK::IKSolverHeuristic::*)()>(&::RootMotion::FinalIK::IKSolverHeuristic::get_localDirection)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x126a568;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverHeuristic*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverHeuristic*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverHeuristic.get_positionOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::RootMotion::FinalIK::IKSolverHeuristic::*)()>(&::RootMotion::FinalIK::IKSolverHeuristic::get_positionOffset)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x126299c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverHeuristic*>::get(),
                            "get_positionOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverHeuristic.GetSingularityOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::RootMotion::FinalIK::IKSolverHeuristic::*)()>(&::RootMotion::FinalIK::IKSolverHeuristic::GetSingularityOffset)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x12625f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverHeuristic*>::get(),
                            "GetSingularityOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverHeuristic.SingularityDetected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::IKSolverHeuristic::*)()>(&::RootMotion::FinalIK::IKSolverHeuristic::SingularityDetected)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x126a624;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverHeuristic*>::get(),
                            "SingularityDetected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverHeuristic._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverHeuristic::*)()>(&::RootMotion::FinalIK::IKSolverHeuristic::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x1260f5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverHeuristic*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void RootMotion::FinalIK::IKSolverHeuristic::__set_target(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x58>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* RootMotion::FinalIK::IKSolverHeuristic::__get_target()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> RootMotion::FinalIK::IKSolverHeuristic::__get_target() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x58>(this);
}
constexpr void RootMotion::FinalIK::IKSolverHeuristic::__set_tolerance(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x60>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::IKSolverHeuristic::__get_tolerance()  {
return ::cordl_internals::getInstanceField<float_t, 0x60>(this);
}
constexpr float_t const& RootMotion::FinalIK::IKSolverHeuristic::__get_tolerance() const {
return ::cordl_internals::getInstanceField<float_t, 0x60>(this);
}
constexpr void RootMotion::FinalIK::IKSolverHeuristic::__set_maxIterations(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x64>(this, std::forward<int32_t>(value));
}
constexpr int32_t& RootMotion::FinalIK::IKSolverHeuristic::__get_maxIterations()  {
return ::cordl_internals::getInstanceField<int32_t, 0x64>(this);
}
constexpr int32_t const& RootMotion::FinalIK::IKSolverHeuristic::__get_maxIterations() const {
return ::cordl_internals::getInstanceField<int32_t, 0x64>(this);
}
constexpr void RootMotion::FinalIK::IKSolverHeuristic::__set_useRotationLimits(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x68>(this, std::forward<bool>(value));
}
constexpr bool& RootMotion::FinalIK::IKSolverHeuristic::__get_useRotationLimits()  {
return ::cordl_internals::getInstanceField<bool, 0x68>(this);
}
constexpr bool const& RootMotion::FinalIK::IKSolverHeuristic::__get_useRotationLimits() const {
return ::cordl_internals::getInstanceField<bool, 0x68>(this);
}
constexpr void RootMotion::FinalIK::IKSolverHeuristic::__set_XY(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x69>(this, std::forward<bool>(value));
}
constexpr bool& RootMotion::FinalIK::IKSolverHeuristic::__get_XY()  {
return ::cordl_internals::getInstanceField<bool, 0x69>(this);
}
constexpr bool const& RootMotion::FinalIK::IKSolverHeuristic::__get_XY() const {
return ::cordl_internals::getInstanceField<bool, 0x69>(this);
}
constexpr void RootMotion::FinalIK::IKSolverHeuristic::__set_bones(::ArrayW<::RootMotion::FinalIK::__IKSolver__Bone*,::Array<::RootMotion::FinalIK::__IKSolver__Bone*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::RootMotion::FinalIK::__IKSolver__Bone*,::Array<::RootMotion::FinalIK::__IKSolver__Bone*>*>, 0x70>(this, std::forward<::ArrayW<::RootMotion::FinalIK::__IKSolver__Bone*,::Array<::RootMotion::FinalIK::__IKSolver__Bone*>*>>(value));
}
constexpr ::ArrayW<::RootMotion::FinalIK::__IKSolver__Bone*,::Array<::RootMotion::FinalIK::__IKSolver__Bone*>*>& RootMotion::FinalIK::IKSolverHeuristic::__get_bones()  {
return ::cordl_internals::getInstanceField<::ArrayW<::RootMotion::FinalIK::__IKSolver__Bone*,::Array<::RootMotion::FinalIK::__IKSolver__Bone*>*>, 0x70>(this);
}
constexpr ::ArrayW<::RootMotion::FinalIK::__IKSolver__Bone*,::Array<::RootMotion::FinalIK::__IKSolver__Bone*>*> const& RootMotion::FinalIK::IKSolverHeuristic::__get_bones() const {
return ::cordl_internals::getInstanceField<::ArrayW<::RootMotion::FinalIK::__IKSolver__Bone*,::Array<::RootMotion::FinalIK::__IKSolver__Bone*>*>, 0x70>(this);
}
constexpr void RootMotion::FinalIK::IKSolverHeuristic::__set_lastLocalDirection(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x78>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::IKSolverHeuristic::__get_lastLocalDirection()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x78>(this);
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::IKSolverHeuristic::__get_lastLocalDirection() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x78>(this);
}
constexpr void RootMotion::FinalIK::IKSolverHeuristic::__set_chainLength(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x84>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::IKSolverHeuristic::__get_chainLength()  {
return ::cordl_internals::getInstanceField<float_t, 0x84>(this);
}
constexpr float_t const& RootMotion::FinalIK::IKSolverHeuristic::__get_chainLength() const {
return ::cordl_internals::getInstanceField<float_t, 0x84>(this);
}
inline bool RootMotion::FinalIK::IKSolverHeuristic::SetChain(::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>  hierarchy, ::UnityEngine::Transform*  root)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverHeuristic*>::get(),
                            "SetChain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, hierarchy, root);
}
inline void RootMotion::FinalIK::IKSolverHeuristic::AddBone(::UnityEngine::Transform*  bone)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverHeuristic*>::get(),
                            "AddBone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, bone);
}
inline void RootMotion::FinalIK::IKSolverHeuristic::StoreDefaultLocalState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverHeuristic*>::get(),
                            "StoreDefaultLocalState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void RootMotion::FinalIK::IKSolverHeuristic::FixTransforms()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverHeuristic*>::get(),
                            "FixTransforms",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool RootMotion::FinalIK::IKSolverHeuristic::IsValid(ByRef<::StringW>  message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverHeuristic*>::get(),
                            "IsValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, message);
}
inline ::ArrayW<::RootMotion::FinalIK::__IKSolver__Point*,::Array<::RootMotion::FinalIK::__IKSolver__Point*>*> RootMotion::FinalIK::IKSolverHeuristic::GetPoints()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverHeuristic*>::get(),
                            "GetPoints",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::RootMotion::FinalIK::__IKSolver__Point*,::Array<::RootMotion::FinalIK::__IKSolver__Point*>*>, false>(*this, ___internal_method);
}
inline ::RootMotion::FinalIK::__IKSolver__Point* RootMotion::FinalIK::IKSolverHeuristic::GetPoint(::UnityEngine::Transform*  transform)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverHeuristic*>::get(),
                            "GetPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::RootMotion::FinalIK::__IKSolver__Point*, false>(*this, ___internal_method, transform);
}
inline int32_t RootMotion::FinalIK::IKSolverHeuristic::get_minBones()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverHeuristic*>::get(),
                            "get_minBones",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline bool RootMotion::FinalIK::IKSolverHeuristic::get_boneLengthCanBeZero()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverHeuristic*>::get(),
                            "get_boneLengthCanBeZero",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool RootMotion::FinalIK::IKSolverHeuristic::get_allowCommonParent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverHeuristic*>::get(),
                            "get_allowCommonParent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void RootMotion::FinalIK::IKSolverHeuristic::OnInitiate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverHeuristic*>::get(),
                            "OnInitiate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void RootMotion::FinalIK::IKSolverHeuristic::OnUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverHeuristic*>::get(),
                            "OnUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void RootMotion::FinalIK::IKSolverHeuristic::InitiateBones()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverHeuristic*>::get(),
                            "InitiateBones",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::UnityEngine::Vector3 RootMotion::FinalIK::IKSolverHeuristic::get_localDirection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverHeuristic*>::get(),
                            "get_localDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(*this, ___internal_method);
}
inline float_t RootMotion::FinalIK::IKSolverHeuristic::get_positionOffset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverHeuristic*>::get(),
                            "get_positionOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline ::UnityEngine::Vector3 RootMotion::FinalIK::IKSolverHeuristic::GetSingularityOffset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverHeuristic*>::get(),
                            "GetSingularityOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(*this, ___internal_method);
}
inline bool RootMotion::FinalIK::IKSolverHeuristic::SingularityDetected()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverHeuristic*>::get(),
                            "SingularityDetected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::RootMotion::FinalIK::IKSolverHeuristic* RootMotion::FinalIK::IKSolverHeuristic::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::IKSolverHeuristic*>());
}
inline void RootMotion::FinalIK::IKSolverHeuristic::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverHeuristic*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
