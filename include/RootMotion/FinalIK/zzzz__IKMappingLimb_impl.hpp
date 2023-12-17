#pragma once
#include "RootMotion/FinalIK/zzzz__IKMapping_impl.hpp"
#include "RootMotion/FinalIK/zzzz__IKMappingLimb_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKMappingLimb_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolver_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolverFullBody_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKMapping_def.hpp"
constexpr void RootMotion::FinalIK::__IKMappingLimb__BoneMapType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& RootMotion::FinalIK::__IKMappingLimb__BoneMapType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& RootMotion::FinalIK::__IKMappingLimb__BoneMapType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::RootMotion::FinalIK::__IKMappingLimb__BoneMapType::__IKMappingLimb__BoneMapType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::RootMotion::FinalIK::__IKMappingLimb__BoneMapType  RootMotion::FinalIK::__IKMappingLimb__BoneMapType::Parent{static_cast<int32_t>(0x0)};
constexpr ::RootMotion::FinalIK::__IKMappingLimb__BoneMapType  RootMotion::FinalIK::__IKMappingLimb__BoneMapType::Bone1{static_cast<int32_t>(0x1)};
constexpr ::RootMotion::FinalIK::__IKMappingLimb__BoneMapType  RootMotion::FinalIK::__IKMappingLimb__BoneMapType::Bone2{static_cast<int32_t>(0x2)};
constexpr ::RootMotion::FinalIK::__IKMappingLimb__BoneMapType  RootMotion::FinalIK::__IKMappingLimb__BoneMapType::Bone3{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::RootMotion::FinalIK::IKMappingLimb.IsValid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::IKMappingLimb::*)(::RootMotion::FinalIK::IKSolver*, ByRef<::StringW>)>(&::RootMotion::FinalIK::IKMappingLimb::IsValid)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x125c3d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKMappingLimb*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKMappingLimb*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKMappingLimb.GetBoneMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::__IKMapping__BoneMap* (::RootMotion::FinalIK::IKMappingLimb::*)(::RootMotion::FinalIK::__IKMappingLimb__BoneMapType)>(&::RootMotion::FinalIK::IKMappingLimb::GetBoneMap)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x125c448;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKMappingLimb*>::get(),
                            "GetBoneMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__IKMappingLimb__BoneMapType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKMappingLimb.SetLimbOrientation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKMappingLimb::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::RootMotion::FinalIK::IKMappingLimb::SetLimbOrientation)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x125c510;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKMappingLimb*>::get(),
                            "SetLimbOrientation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKMappingLimb._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKMappingLimb::*)()>(&::RootMotion::FinalIK::IKMappingLimb::_ctor)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x125c7c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKMappingLimb*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKMappingLimb._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKMappingLimb::*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&::RootMotion::FinalIK::IKMappingLimb::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x125c8e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKMappingLimb*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKMappingLimb.SetBones
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKMappingLimb::*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&::RootMotion::FinalIK::IKMappingLimb::SetBones)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x125ca2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKMappingLimb*>::get(),
                            "SetBones",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKMappingLimb.StoreDefaultLocalState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKMappingLimb::*)()>(&::RootMotion::FinalIK::IKMappingLimb::StoreDefaultLocalState)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x125ca38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKMappingLimb*>::get(),
                            "StoreDefaultLocalState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKMappingLimb.FixTransforms
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKMappingLimb::*)()>(&::RootMotion::FinalIK::IKMappingLimb::FixTransforms)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x125cad0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKMappingLimb*>::get(),
                            "FixTransforms",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKMappingLimb.Initiate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKMappingLimb::*)(::RootMotion::FinalIK::IKSolverFullBody*)>(&::RootMotion::FinalIK::IKMappingLimb::Initiate)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x125cb78;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKMappingLimb*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKMappingLimb*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKMappingLimb.ReadPose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKMappingLimb::*)()>(&::RootMotion::FinalIK::IKMappingLimb::ReadPose)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x125cdd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKMappingLimb*>::get(),
                            "ReadPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKMappingLimb.WritePose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKMappingLimb::*)(::RootMotion::FinalIK::IKSolverFullBody*, bool)>(&::RootMotion::FinalIK::IKMappingLimb::WritePose)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x125ce34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKMappingLimb*>::get(),
                            "WritePose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::IKSolverFullBody*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void RootMotion::FinalIK::IKMappingLimb::__set_parentBone(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x10>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* RootMotion::FinalIK::IKMappingLimb::__get_parentBone()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> RootMotion::FinalIK::IKMappingLimb::__get_parentBone() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x10>(this);
}
constexpr void RootMotion::FinalIK::IKMappingLimb::__set_bone1(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x18>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* RootMotion::FinalIK::IKMappingLimb::__get_bone1()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> RootMotion::FinalIK::IKMappingLimb::__get_bone1() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x18>(this);
}
constexpr void RootMotion::FinalIK::IKMappingLimb::__set_bone2(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x20>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* RootMotion::FinalIK::IKMappingLimb::__get_bone2()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> RootMotion::FinalIK::IKMappingLimb::__get_bone2() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x20>(this);
}
constexpr void RootMotion::FinalIK::IKMappingLimb::__set_bone3(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x28>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* RootMotion::FinalIK::IKMappingLimb::__get_bone3()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> RootMotion::FinalIK::IKMappingLimb::__get_bone3() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x28>(this);
}
constexpr void RootMotion::FinalIK::IKMappingLimb::__set_maintainRotationWeight(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::IKMappingLimb::__get_maintainRotationWeight()  {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr float_t const& RootMotion::FinalIK::IKMappingLimb::__get_maintainRotationWeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr void RootMotion::FinalIK::IKMappingLimb::__set_weight(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x34>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::IKMappingLimb::__get_weight()  {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this);
}
constexpr float_t const& RootMotion::FinalIK::IKMappingLimb::__get_weight() const {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this);
}
constexpr void RootMotion::FinalIK::IKMappingLimb::__set_updatePlaneRotations(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this, std::forward<bool>(value));
}
constexpr bool& RootMotion::FinalIK::IKMappingLimb::__get_updatePlaneRotations()  {
return ::cordl_internals::getInstanceField<bool, 0x38>(this);
}
constexpr bool const& RootMotion::FinalIK::IKMappingLimb::__get_updatePlaneRotations() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this);
}
constexpr void RootMotion::FinalIK::IKMappingLimb::__set_boneMapParent(::RootMotion::FinalIK::__IKMapping__BoneMap*  value)  {
::cordl_internals::setInstanceField<::RootMotion::FinalIK::__IKMapping__BoneMap*, 0x40>(this, std::forward<::RootMotion::FinalIK::__IKMapping__BoneMap*>(value));
}
constexpr ::RootMotion::FinalIK::__IKMapping__BoneMap* RootMotion::FinalIK::IKMappingLimb::__get_boneMapParent()  {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::__IKMapping__BoneMap*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKMapping__BoneMap*> RootMotion::FinalIK::IKMappingLimb::__get_boneMapParent() const {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::__IKMapping__BoneMap*, 0x40>(this);
}
constexpr void RootMotion::FinalIK::IKMappingLimb::__set_boneMap1(::RootMotion::FinalIK::__IKMapping__BoneMap*  value)  {
::cordl_internals::setInstanceField<::RootMotion::FinalIK::__IKMapping__BoneMap*, 0x48>(this, std::forward<::RootMotion::FinalIK::__IKMapping__BoneMap*>(value));
}
constexpr ::RootMotion::FinalIK::__IKMapping__BoneMap* RootMotion::FinalIK::IKMappingLimb::__get_boneMap1()  {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::__IKMapping__BoneMap*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKMapping__BoneMap*> RootMotion::FinalIK::IKMappingLimb::__get_boneMap1() const {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::__IKMapping__BoneMap*, 0x48>(this);
}
constexpr void RootMotion::FinalIK::IKMappingLimb::__set_boneMap2(::RootMotion::FinalIK::__IKMapping__BoneMap*  value)  {
::cordl_internals::setInstanceField<::RootMotion::FinalIK::__IKMapping__BoneMap*, 0x50>(this, std::forward<::RootMotion::FinalIK::__IKMapping__BoneMap*>(value));
}
constexpr ::RootMotion::FinalIK::__IKMapping__BoneMap* RootMotion::FinalIK::IKMappingLimb::__get_boneMap2()  {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::__IKMapping__BoneMap*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKMapping__BoneMap*> RootMotion::FinalIK::IKMappingLimb::__get_boneMap2() const {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::__IKMapping__BoneMap*, 0x50>(this);
}
constexpr void RootMotion::FinalIK::IKMappingLimb::__set_boneMap3(::RootMotion::FinalIK::__IKMapping__BoneMap*  value)  {
::cordl_internals::setInstanceField<::RootMotion::FinalIK::__IKMapping__BoneMap*, 0x58>(this, std::forward<::RootMotion::FinalIK::__IKMapping__BoneMap*>(value));
}
constexpr ::RootMotion::FinalIK::__IKMapping__BoneMap* RootMotion::FinalIK::IKMappingLimb::__get_boneMap3()  {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::__IKMapping__BoneMap*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKMapping__BoneMap*> RootMotion::FinalIK::IKMappingLimb::__get_boneMap3() const {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::__IKMapping__BoneMap*, 0x58>(this);
}
inline bool RootMotion::FinalIK::IKMappingLimb::IsValid(::RootMotion::FinalIK::IKSolver*  solver, ByRef<::StringW>  message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKMappingLimb*>::get(),
                            "IsValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::IKSolver*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, solver, message);
}
inline ::RootMotion::FinalIK::__IKMapping__BoneMap* RootMotion::FinalIK::IKMappingLimb::GetBoneMap(::RootMotion::FinalIK::__IKMappingLimb__BoneMapType  boneMap)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKMappingLimb*>::get(),
                            "GetBoneMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__IKMappingLimb__BoneMapType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::RootMotion::FinalIK::__IKMapping__BoneMap*, false>(*this, ___internal_method, boneMap);
}
inline void RootMotion::FinalIK::IKMappingLimb::SetLimbOrientation(::UnityEngine::Vector3  upper, ::UnityEngine::Vector3  lower)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKMappingLimb*>::get(),
                            "SetLimbOrientation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, upper, lower);
}
inline ::RootMotion::FinalIK::IKMappingLimb* RootMotion::FinalIK::IKMappingLimb::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::IKMappingLimb*>());
}
inline void RootMotion::FinalIK::IKMappingLimb::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKMappingLimb*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
/// @param parentBone: ::UnityEngine::Transform* (default: csnull)
inline ::RootMotion::FinalIK::IKMappingLimb* RootMotion::FinalIK::IKMappingLimb::New_ctor(::UnityEngine::Transform*  bone1, ::UnityEngine::Transform*  bone2, ::UnityEngine::Transform*  bone3, ::UnityEngine::Transform*  parentBone)  {
return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::IKMappingLimb*>(bone1, bone2, bone3, parentBone));
}
/// @param parentBone: ::UnityEngine::Transform* (default: csnull)
inline void RootMotion::FinalIK::IKMappingLimb::_ctor(::UnityEngine::Transform*  bone1, ::UnityEngine::Transform*  bone2, ::UnityEngine::Transform*  bone3, ::UnityEngine::Transform*  parentBone)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKMappingLimb*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, bone1, bone2, bone3, parentBone);
}
/// @param parentBone: ::UnityEngine::Transform* (default: csnull)
inline void RootMotion::FinalIK::IKMappingLimb::SetBones(::UnityEngine::Transform*  bone1, ::UnityEngine::Transform*  bone2, ::UnityEngine::Transform*  bone3, ::UnityEngine::Transform*  parentBone)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKMappingLimb*>::get(),
                            "SetBones",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, bone1, bone2, bone3, parentBone);
}
inline void RootMotion::FinalIK::IKMappingLimb::StoreDefaultLocalState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKMappingLimb*>::get(),
                            "StoreDefaultLocalState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void RootMotion::FinalIK::IKMappingLimb::FixTransforms()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKMappingLimb*>::get(),
                            "FixTransforms",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void RootMotion::FinalIK::IKMappingLimb::Initiate(::RootMotion::FinalIK::IKSolverFullBody*  solver)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKMappingLimb*>::get(),
                            "Initiate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::IKSolverFullBody*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, solver);
}
inline void RootMotion::FinalIK::IKMappingLimb::ReadPose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKMappingLimb*>::get(),
                            "ReadPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void RootMotion::FinalIK::IKMappingLimb::WritePose(::RootMotion::FinalIK::IKSolverFullBody*  solver, bool  fullBody)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKMappingLimb*>::get(),
                            "WritePose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::IKSolverFullBody*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, solver, fullBody);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
