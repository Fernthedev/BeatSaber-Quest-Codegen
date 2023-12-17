#pragma once
#include "RootMotion/FinalIK/zzzz__IKSolverTrigonometric_impl.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolverLimb_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolverLimb_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__AvatarIKGoal_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
constexpr void RootMotion::FinalIK::__IKSolverLimb__BendModifier::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& RootMotion::FinalIK::__IKSolverLimb__BendModifier::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& RootMotion::FinalIK::__IKSolverLimb__BendModifier::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::RootMotion::FinalIK::__IKSolverLimb__BendModifier::__IKSolverLimb__BendModifier(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::RootMotion::FinalIK::__IKSolverLimb__BendModifier  RootMotion::FinalIK::__IKSolverLimb__BendModifier::Animation{static_cast<int32_t>(0x0)};
constexpr ::RootMotion::FinalIK::__IKSolverLimb__BendModifier  RootMotion::FinalIK::__IKSolverLimb__BendModifier::Target{static_cast<int32_t>(0x1)};
constexpr ::RootMotion::FinalIK::__IKSolverLimb__BendModifier  RootMotion::FinalIK::__IKSolverLimb__BendModifier::Parent{static_cast<int32_t>(0x2)};
constexpr ::RootMotion::FinalIK::__IKSolverLimb__BendModifier  RootMotion::FinalIK::__IKSolverLimb__BendModifier::Arm{static_cast<int32_t>(0x3)};
constexpr ::RootMotion::FinalIK::__IKSolverLimb__BendModifier  RootMotion::FinalIK::__IKSolverLimb__BendModifier::Goal{static_cast<int32_t>(0x4)};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverLimb__AxisDirection._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverLimb__AxisDirection::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::RootMotion::FinalIK::__IKSolverLimb__AxisDirection::_ctor)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x126ce08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void RootMotion::FinalIK::__IKSolverLimb__AxisDirection::__set_direction(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__IKSolverLimb__AxisDirection::__get_direction()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__IKSolverLimb__AxisDirection::__get_direction() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void RootMotion::FinalIK::__IKSolverLimb__AxisDirection::__set_axis(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__IKSolverLimb__AxisDirection::__get_axis()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__IKSolverLimb__AxisDirection::__get_axis() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void RootMotion::FinalIK::__IKSolverLimb__AxisDirection::__set_dot(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::__IKSolverLimb__AxisDirection::__get_dot()  {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& RootMotion::FinalIK::__IKSolverLimb__AxisDirection::__get_dot() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void RootMotion::FinalIK::__IKSolverLimb__AxisDirection::_ctor(::UnityEngine::Vector3  direction, ::UnityEngine::Vector3  axis)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, direction, axis);
}
// Ctor Parameters [CppParam { name: "direction", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "axis", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "dot", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::RootMotion::FinalIK::__IKSolverLimb__AxisDirection::__IKSolverLimb__AxisDirection(::UnityEngine::Vector3  direction, ::UnityEngine::Vector3  axis, float_t  dot) noexcept : ::bs_hook::ValueTypeWrapper<0x1c>() {this->direction = direction;
this->axis = axis;
this->dot = dot;
}
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverLimb.MaintainRotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverLimb::*)()>(&::RootMotion::FinalIK::IKSolverLimb::MaintainRotation)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x126ba1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverLimb*>::get(),
                            "MaintainRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverLimb.MaintainBend
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverLimb::*)()>(&::RootMotion::FinalIK::IKSolverLimb::MaintainBend)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x126ba60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverLimb*>::get(),
                            "MaintainBend",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverLimb.OnInitiateVirtual
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverLimb::*)()>(&::RootMotion::FinalIK::IKSolverLimb::OnInitiateVirtual)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x126bacc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverLimb*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverLimb*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverLimb.OnUpdateVirtual
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverLimb::*)()>(&::RootMotion::FinalIK::IKSolverLimb::OnUpdateVirtual)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x126c014;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverLimb*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverLimb*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverLimb.OnPostSolveVirtual
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverLimb::*)()>(&::RootMotion::FinalIK::IKSolverLimb::OnPostSolveVirtual)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x126cb30;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverLimb*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverLimb*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverLimb._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverLimb::*)()>(&::RootMotion::FinalIK::IKSolverLimb::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x126cbd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverLimb*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverLimb._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverLimb::*)(::UnityEngine::AvatarIKGoal)>(&::RootMotion::FinalIK::IKSolverLimb::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x126cd6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverLimb*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AvatarIKGoal>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverLimb.get_axisDirections
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection,::Array<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection>*> (::RootMotion::FinalIK::IKSolverLimb::*)()>(&::RootMotion::FinalIK::IKSolverLimb::get_axisDirections)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x126cdec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverLimb*>::get(),
                            "get_axisDirections",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverLimb.StoreAxisDirections
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverLimb::*)(ByRef<::ArrayW<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection,::Array<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection>*>>)>(&::RootMotion::FinalIK::IKSolverLimb::StoreAxisDirections)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x126be28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverLimb*>::get(),
                            "StoreAxisDirections",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection,::Array<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection>*>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverLimb.GetModifiedBendNormal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::RootMotion::FinalIK::IKSolverLimb::*)()>(&::RootMotion::FinalIK::IKSolverLimb::GetModifiedBendNormal)> {
  constexpr static std::size_t size = 0xa60;
  constexpr static std::size_t addrs = 0x126c0d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverLimb*>::get(),
                            "GetModifiedBendNormal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void RootMotion::FinalIK::IKSolverLimb::__set_goal(::UnityEngine::AvatarIKGoal  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AvatarIKGoal, 0xa8>(this, std::forward<::UnityEngine::AvatarIKGoal>(value));
}
constexpr ::UnityEngine::AvatarIKGoal& RootMotion::FinalIK::IKSolverLimb::__get_goal()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AvatarIKGoal, 0xa8>(this);
}
constexpr ::UnityEngine::AvatarIKGoal const& RootMotion::FinalIK::IKSolverLimb::__get_goal() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AvatarIKGoal, 0xa8>(this);
}
constexpr void RootMotion::FinalIK::IKSolverLimb::__set_bendModifier(::RootMotion::FinalIK::__IKSolverLimb__BendModifier  value)  {
::cordl_internals::setInstanceField<::RootMotion::FinalIK::__IKSolverLimb__BendModifier, 0xac>(this, std::forward<::RootMotion::FinalIK::__IKSolverLimb__BendModifier>(value));
}
constexpr ::RootMotion::FinalIK::__IKSolverLimb__BendModifier& RootMotion::FinalIK::IKSolverLimb::__get_bendModifier()  {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::__IKSolverLimb__BendModifier, 0xac>(this);
}
constexpr ::RootMotion::FinalIK::__IKSolverLimb__BendModifier const& RootMotion::FinalIK::IKSolverLimb::__get_bendModifier() const {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::__IKSolverLimb__BendModifier, 0xac>(this);
}
constexpr void RootMotion::FinalIK::IKSolverLimb::__set_maintainRotationWeight(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0xb0>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::IKSolverLimb::__get_maintainRotationWeight()  {
return ::cordl_internals::getInstanceField<float_t, 0xb0>(this);
}
constexpr float_t const& RootMotion::FinalIK::IKSolverLimb::__get_maintainRotationWeight() const {
return ::cordl_internals::getInstanceField<float_t, 0xb0>(this);
}
constexpr void RootMotion::FinalIK::IKSolverLimb::__set_bendModifierWeight(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0xb4>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::IKSolverLimb::__get_bendModifierWeight()  {
return ::cordl_internals::getInstanceField<float_t, 0xb4>(this);
}
constexpr float_t const& RootMotion::FinalIK::IKSolverLimb::__get_bendModifierWeight() const {
return ::cordl_internals::getInstanceField<float_t, 0xb4>(this);
}
constexpr void RootMotion::FinalIK::IKSolverLimb::__set_bendGoal(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0xb8>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* RootMotion::FinalIK::IKSolverLimb::__get_bendGoal()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0xb8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> RootMotion::FinalIK::IKSolverLimb::__get_bendGoal() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0xb8>(this);
}
constexpr void RootMotion::FinalIK::IKSolverLimb::__set_maintainBendFor1Frame(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xc0>(this, std::forward<bool>(value));
}
constexpr bool& RootMotion::FinalIK::IKSolverLimb::__get_maintainBendFor1Frame()  {
return ::cordl_internals::getInstanceField<bool, 0xc0>(this);
}
constexpr bool const& RootMotion::FinalIK::IKSolverLimb::__get_maintainBendFor1Frame() const {
return ::cordl_internals::getInstanceField<bool, 0xc0>(this);
}
constexpr void RootMotion::FinalIK::IKSolverLimb::__set_maintainRotationFor1Frame(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xc1>(this, std::forward<bool>(value));
}
constexpr bool& RootMotion::FinalIK::IKSolverLimb::__get_maintainRotationFor1Frame()  {
return ::cordl_internals::getInstanceField<bool, 0xc1>(this);
}
constexpr bool const& RootMotion::FinalIK::IKSolverLimb::__get_maintainRotationFor1Frame() const {
return ::cordl_internals::getInstanceField<bool, 0xc1>(this);
}
constexpr void RootMotion::FinalIK::IKSolverLimb::__set_defaultRootRotation(::UnityEngine::Quaternion  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Quaternion, 0xc4>(this, std::forward<::UnityEngine::Quaternion>(value));
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::IKSolverLimb::__get_defaultRootRotation()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0xc4>(this);
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::IKSolverLimb::__get_defaultRootRotation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0xc4>(this);
}
constexpr void RootMotion::FinalIK::IKSolverLimb::__set_parentDefaultRotation(::UnityEngine::Quaternion  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Quaternion, 0xd4>(this, std::forward<::UnityEngine::Quaternion>(value));
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::IKSolverLimb::__get_parentDefaultRotation()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0xd4>(this);
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::IKSolverLimb::__get_parentDefaultRotation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0xd4>(this);
}
constexpr void RootMotion::FinalIK::IKSolverLimb::__set_bone3RotationBeforeSolve(::UnityEngine::Quaternion  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Quaternion, 0xe4>(this, std::forward<::UnityEngine::Quaternion>(value));
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::IKSolverLimb::__get_bone3RotationBeforeSolve()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0xe4>(this);
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::IKSolverLimb::__get_bone3RotationBeforeSolve() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0xe4>(this);
}
constexpr void RootMotion::FinalIK::IKSolverLimb::__set_maintainRotation(::UnityEngine::Quaternion  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Quaternion, 0xf4>(this, std::forward<::UnityEngine::Quaternion>(value));
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::IKSolverLimb::__get_maintainRotation()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0xf4>(this);
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::IKSolverLimb::__get_maintainRotation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0xf4>(this);
}
constexpr void RootMotion::FinalIK::IKSolverLimb::__set_bone3DefaultRotation(::UnityEngine::Quaternion  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Quaternion, 0x104>(this, std::forward<::UnityEngine::Quaternion>(value));
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::IKSolverLimb::__get_bone3DefaultRotation()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x104>(this);
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::IKSolverLimb::__get_bone3DefaultRotation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x104>(this);
}
constexpr void RootMotion::FinalIK::IKSolverLimb::__set__bendNormal(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x114>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::IKSolverLimb::__get__bendNormal()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x114>(this);
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::IKSolverLimb::__get__bendNormal() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x114>(this);
}
constexpr void RootMotion::FinalIK::IKSolverLimb::__set_animationNormal(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x120>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::IKSolverLimb::__get_animationNormal()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x120>(this);
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::IKSolverLimb::__get_animationNormal() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x120>(this);
}
constexpr void RootMotion::FinalIK::IKSolverLimb::__set_axisDirectionsLeft(::ArrayW<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection,::Array<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection,::Array<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection>*>, 0x130>(this, std::forward<::ArrayW<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection,::Array<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection>*>>(value));
}
constexpr ::ArrayW<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection,::Array<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection>*>& RootMotion::FinalIK::IKSolverLimb::__get_axisDirectionsLeft()  {
return ::cordl_internals::getInstanceField<::ArrayW<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection,::Array<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection>*>, 0x130>(this);
}
constexpr ::ArrayW<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection,::Array<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection>*> const& RootMotion::FinalIK::IKSolverLimb::__get_axisDirectionsLeft() const {
return ::cordl_internals::getInstanceField<::ArrayW<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection,::Array<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection>*>, 0x130>(this);
}
constexpr void RootMotion::FinalIK::IKSolverLimb::__set_axisDirectionsRight(::ArrayW<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection,::Array<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection,::Array<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection>*>, 0x138>(this, std::forward<::ArrayW<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection,::Array<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection>*>>(value));
}
constexpr ::ArrayW<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection,::Array<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection>*>& RootMotion::FinalIK::IKSolverLimb::__get_axisDirectionsRight()  {
return ::cordl_internals::getInstanceField<::ArrayW<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection,::Array<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection>*>, 0x138>(this);
}
constexpr ::ArrayW<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection,::Array<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection>*> const& RootMotion::FinalIK::IKSolverLimb::__get_axisDirectionsRight() const {
return ::cordl_internals::getInstanceField<::ArrayW<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection,::Array<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection>*>, 0x138>(this);
}
inline void RootMotion::FinalIK::IKSolverLimb::MaintainRotation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverLimb*>::get(),
                            "MaintainRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void RootMotion::FinalIK::IKSolverLimb::MaintainBend()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverLimb*>::get(),
                            "MaintainBend",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void RootMotion::FinalIK::IKSolverLimb::OnInitiateVirtual()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverLimb*>::get(),
                            "OnInitiateVirtual",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void RootMotion::FinalIK::IKSolverLimb::OnUpdateVirtual()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverLimb*>::get(),
                            "OnUpdateVirtual",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void RootMotion::FinalIK::IKSolverLimb::OnPostSolveVirtual()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverLimb*>::get(),
                            "OnPostSolveVirtual",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::RootMotion::FinalIK::IKSolverLimb* RootMotion::FinalIK::IKSolverLimb::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::IKSolverLimb*>());
}
inline void RootMotion::FinalIK::IKSolverLimb::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverLimb*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::RootMotion::FinalIK::IKSolverLimb* RootMotion::FinalIK::IKSolverLimb::New_ctor(::UnityEngine::AvatarIKGoal  goal)  {
return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::IKSolverLimb*>(goal));
}
inline void RootMotion::FinalIK::IKSolverLimb::_ctor(::UnityEngine::AvatarIKGoal  goal)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverLimb*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AvatarIKGoal>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, goal);
}
inline ::ArrayW<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection,::Array<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection>*> RootMotion::FinalIK::IKSolverLimb::get_axisDirections()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverLimb*>::get(),
                            "get_axisDirections",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection,::Array<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection>*>, false>(*this, ___internal_method);
}
inline void RootMotion::FinalIK::IKSolverLimb::StoreAxisDirections(ByRef<::ArrayW<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection,::Array<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection>*>>  axisDirections)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverLimb*>::get(),
                            "StoreAxisDirections",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection,::Array<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection>*>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, axisDirections);
}
inline ::UnityEngine::Vector3 RootMotion::FinalIK::IKSolverLimb::GetModifiedBendNormal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverLimb*>::get(),
                            "GetModifiedBendNormal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
