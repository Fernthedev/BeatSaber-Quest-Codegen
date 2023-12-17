#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OVRGLTFAnimatinonNode_def.hpp"
#include "GlobalNamespace/zzzz__OVRGLTFInputNode_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Tuple_2_def.hpp"
#include "GlobalNamespace/zzzz__OVRBinaryChunk_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "OVRSimpleJSON/zzzz__JSONNode_def.hpp"
#include "GlobalNamespace/zzzz__OVRGLTFAnimatinonNode_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "GlobalNamespace/zzzz__OVRGLTFAnimationNodeMorphTargetHandler_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
constexpr void GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection::__OVRGLTFAnimatinonNode__ThumbstickDirection(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection  GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection  GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection::North{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection  GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection::NorthEast{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection  GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection::East{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection  GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection::SouthEast{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection  GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection::South{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection  GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection::SouthWest{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection  GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection::West{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection  GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection::NorthWest{static_cast<int32_t>(0x8)};
constexpr void GlobalNamespace::__OVRGLTFAnimatinonNode__OVRGLTFTransformType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVRGLTFAnimatinonNode__OVRGLTFTransformType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__OVRGLTFAnimatinonNode__OVRGLTFTransformType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRGLTFAnimatinonNode__OVRGLTFTransformType::__OVRGLTFAnimatinonNode__OVRGLTFTransformType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__OVRGLTFAnimatinonNode__OVRGLTFTransformType  GlobalNamespace::__OVRGLTFAnimatinonNode__OVRGLTFTransformType::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__OVRGLTFAnimatinonNode__OVRGLTFTransformType  GlobalNamespace::__OVRGLTFAnimatinonNode__OVRGLTFTransformType::Translation{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__OVRGLTFAnimatinonNode__OVRGLTFTransformType  GlobalNamespace::__OVRGLTFAnimatinonNode__OVRGLTFTransformType::Rotation{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::__OVRGLTFAnimatinonNode__OVRGLTFTransformType  GlobalNamespace::__OVRGLTFAnimatinonNode__OVRGLTFTransformType::Scale{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::__OVRGLTFAnimatinonNode__OVRGLTFTransformType  GlobalNamespace::__OVRGLTFAnimatinonNode__OVRGLTFTransformType::Weights{static_cast<int32_t>(0x4)};
constexpr void GlobalNamespace::__OVRGLTFAnimatinonNode__OVRInterpolationType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVRGLTFAnimatinonNode__OVRInterpolationType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__OVRGLTFAnimatinonNode__OVRInterpolationType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRGLTFAnimatinonNode__OVRInterpolationType::__OVRGLTFAnimatinonNode__OVRInterpolationType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__OVRGLTFAnimatinonNode__OVRInterpolationType  GlobalNamespace::__OVRGLTFAnimatinonNode__OVRInterpolationType::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__OVRGLTFAnimatinonNode__OVRInterpolationType  GlobalNamespace::__OVRGLTFAnimatinonNode__OVRInterpolationType::LINEAR{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__OVRGLTFAnimatinonNode__OVRInterpolationType  GlobalNamespace::__OVRGLTFAnimatinonNode__OVRInterpolationType::STEP{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::__OVRGLTFAnimatinonNode__OVRInterpolationType  GlobalNamespace::__OVRGLTFAnimatinonNode__OVRInterpolationType::CUBICSPLINE{static_cast<int32_t>(0x3)};
constexpr void GlobalNamespace::__OVRGLTFAnimatinonNode__InputNodeState::__set_down(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__OVRGLTFAnimatinonNode__InputNodeState::__get_down()  {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& GlobalNamespace::__OVRGLTFAnimatinonNode__InputNodeState::__get_down() const {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OVRGLTFAnimatinonNode__InputNodeState::__set_t(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__OVRGLTFAnimatinonNode__InputNodeState::__get_t()  {
return ::cordl_internals::getInstanceField<float_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& GlobalNamespace::__OVRGLTFAnimatinonNode__InputNodeState::__get_t() const {
return ::cordl_internals::getInstanceField<float_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OVRGLTFAnimatinonNode__InputNodeState::__set_vecT(::UnityEngine::Vector2  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::__OVRGLTFAnimatinonNode__InputNodeState::__get_vecT()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::__OVRGLTFAnimatinonNode__InputNodeState::__get_vecT() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "down", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "t", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "vecT", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRGLTFAnimatinonNode__InputNodeState::__OVRGLTFAnimatinonNode__InputNodeState(bool  down, float_t  t, ::UnityEngine::Vector2  vecT) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->down = down;
this->t = t;
this->vecT = vecT;
}
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAnimatinonNode._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRGLTFAnimatinonNode::*)(::OVRSimpleJSON::JSONNode*, ::GlobalNamespace::OVRBinaryChunk, ::GlobalNamespace::OVRGLTFInputNode, ::UnityEngine::GameObject*, ::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*)>(&::GlobalNamespace::OVRGLTFAnimatinonNode::_ctor)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x271fa1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAnimatinonNode*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRBinaryChunk>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRGLTFInputNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAnimatinonNode.AddChannel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRGLTFAnimatinonNode::*)(::OVRSimpleJSON::JSONNode*, ::OVRSimpleJSON::JSONNode*)>(&::GlobalNamespace::OVRGLTFAnimatinonNode::AddChannel)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x271fd58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAnimatinonNode*>::get(),
                            "AddChannel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAnimatinonNode.UpdatePose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRGLTFAnimatinonNode::*)(bool)>(&::GlobalNamespace::OVRGLTFAnimatinonNode::UpdatePose)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x2720830;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAnimatinonNode*>::get(),
                            "UpdatePose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAnimatinonNode.UpdatePose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRGLTFAnimatinonNode::*)(float_t, bool)>(&::GlobalNamespace::OVRGLTFAnimatinonNode::UpdatePose)> {
  constexpr static std::size_t size = 0x448;
  constexpr static std::size_t addrs = 0x27209bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAnimatinonNode*>::get(),
                            "UpdatePose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAnimatinonNode.UpdatePose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRGLTFAnimatinonNode::*)(::UnityEngine::Vector2)>(&::GlobalNamespace::OVRGLTFAnimatinonNode::UpdatePose)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x2720e04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAnimatinonNode*>::get(),
                            "UpdatePose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAnimatinonNode.GetCardinalThumbsticks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Tuple_2<::GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection,::GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection>* (::GlobalNamespace::OVRGLTFAnimatinonNode::*)(::UnityEngine::Vector2)>(&::GlobalNamespace::OVRGLTFAnimatinonNode::GetCardinalThumbsticks)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x2721150;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAnimatinonNode*>::get(),
                            "GetCardinalThumbsticks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAnimatinonNode.GetCardinalWeights
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::GlobalNamespace::OVRGLTFAnimatinonNode::*)(::UnityEngine::Vector2, ::System::Tuple_2<::GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection,::GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection>*)>(&::GlobalNamespace::OVRGLTFAnimatinonNode::GetCardinalWeights)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x272130c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAnimatinonNode*>::get(),
                            "GetCardinalWeights",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Tuple_2<::GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection,::GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAnimatinonNode.ProcessAnimationSampler
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRGLTFAnimatinonNode::*)(::OVRSimpleJSON::JSONNode*, int32_t, ::GlobalNamespace::__OVRGLTFAnimatinonNode__OVRGLTFTransformType, ::OVRSimpleJSON::JSONNode*)>(&::GlobalNamespace::OVRGLTFAnimatinonNode::ProcessAnimationSampler)> {
  constexpr static std::size_t size = 0x7d4;
  constexpr static std::size_t addrs = 0x272005c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAnimatinonNode*>::get(),
                            "ProcessAnimationSampler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRGLTFAnimatinonNode__OVRGLTFTransformType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAnimatinonNode.GetTransformType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRGLTFAnimatinonNode__OVRGLTFTransformType (::GlobalNamespace::OVRGLTFAnimatinonNode::*)(::StringW)>(&::GlobalNamespace::OVRGLTFAnimatinonNode::GetTransformType)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x271fee8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAnimatinonNode*>::get(),
                            "GetTransformType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAnimatinonNode.ToOVRInterpolationType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRGLTFAnimatinonNode__OVRInterpolationType (::GlobalNamespace::OVRGLTFAnimatinonNode::*)(::StringW)>(&::GlobalNamespace::OVRGLTFAnimatinonNode::ToOVRInterpolationType)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x2721464;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAnimatinonNode*>::get(),
                            "ToOVRInterpolationType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAnimatinonNode.CloneVector3
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::OVRGLTFAnimatinonNode::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::OVRGLTFAnimatinonNode::CloneVector3)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x271fd50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAnimatinonNode*>::get(),
                            "CloneVector3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAnimatinonNode.CloneQuaternion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (::GlobalNamespace::OVRGLTFAnimatinonNode::*)(::UnityEngine::Quaternion)>(&::GlobalNamespace::OVRGLTFAnimatinonNode::CloneQuaternion)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x271fd54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAnimatinonNode*>::get(),
                            "CloneQuaternion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::OVRGLTFAnimatinonNode::__set_m_intputNodeType(::GlobalNamespace::OVRGLTFInputNode  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OVRGLTFInputNode, 0x10>(this, std::forward<::GlobalNamespace::OVRGLTFInputNode>(value));
}
constexpr ::GlobalNamespace::OVRGLTFInputNode& GlobalNamespace::OVRGLTFAnimatinonNode::__get_m_intputNodeType()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRGLTFInputNode, 0x10>(this);
}
constexpr ::GlobalNamespace::OVRGLTFInputNode const& GlobalNamespace::OVRGLTFAnimatinonNode::__get_m_intputNodeType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRGLTFInputNode, 0x10>(this);
}
constexpr void GlobalNamespace::OVRGLTFAnimatinonNode::__set_m_jsonData(::OVRSimpleJSON::JSONNode*  value)  {
::cordl_internals::setInstanceField<::OVRSimpleJSON::JSONNode*, 0x18>(this, std::forward<::OVRSimpleJSON::JSONNode*>(value));
}
constexpr ::OVRSimpleJSON::JSONNode* GlobalNamespace::OVRGLTFAnimatinonNode::__get_m_jsonData()  {
return ::cordl_internals::getInstanceField<::OVRSimpleJSON::JSONNode*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::OVRSimpleJSON::JSONNode*> GlobalNamespace::OVRGLTFAnimatinonNode::__get_m_jsonData() const {
return ::cordl_internals::getInstanceField<::OVRSimpleJSON::JSONNode*, 0x18>(this);
}
constexpr void GlobalNamespace::OVRGLTFAnimatinonNode::__set_m_binaryChunk(::GlobalNamespace::OVRBinaryChunk  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OVRBinaryChunk, 0x20>(this, std::forward<::GlobalNamespace::OVRBinaryChunk>(value));
}
constexpr ::GlobalNamespace::OVRBinaryChunk& GlobalNamespace::OVRGLTFAnimatinonNode::__get_m_binaryChunk()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRBinaryChunk, 0x20>(this);
}
constexpr ::GlobalNamespace::OVRBinaryChunk const& GlobalNamespace::OVRGLTFAnimatinonNode::__get_m_binaryChunk() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRBinaryChunk, 0x20>(this);
}
constexpr void GlobalNamespace::OVRGLTFAnimatinonNode::__set_m_gameObj(::UnityEngine::GameObject*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject*, 0x38>(this, std::forward<::UnityEngine::GameObject*>(value));
}
constexpr ::UnityEngine::GameObject* GlobalNamespace::OVRGLTFAnimatinonNode::__get_m_gameObj()  {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> GlobalNamespace::OVRGLTFAnimatinonNode::__get_m_gameObj() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x38>(this);
}
constexpr void GlobalNamespace::OVRGLTFAnimatinonNode::__set_m_inputNodeState(::GlobalNamespace::__OVRGLTFAnimatinonNode__InputNodeState  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRGLTFAnimatinonNode__InputNodeState, 0x40>(this, std::forward<::GlobalNamespace::__OVRGLTFAnimatinonNode__InputNodeState>(value));
}
constexpr ::GlobalNamespace::__OVRGLTFAnimatinonNode__InputNodeState& GlobalNamespace::OVRGLTFAnimatinonNode::__get_m_inputNodeState()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRGLTFAnimatinonNode__InputNodeState, 0x40>(this);
}
constexpr ::GlobalNamespace::__OVRGLTFAnimatinonNode__InputNodeState const& GlobalNamespace::OVRGLTFAnimatinonNode::__get_m_inputNodeState() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRGLTFAnimatinonNode__InputNodeState, 0x40>(this);
}
constexpr void GlobalNamespace::OVRGLTFAnimatinonNode::__set_m_morphTargetHandler(::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*, 0x50>(this, std::forward<::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*>(value));
}
constexpr ::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler* GlobalNamespace::OVRGLTFAnimatinonNode::__get_m_morphTargetHandler()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*> GlobalNamespace::OVRGLTFAnimatinonNode::__get_m_morphTargetHandler() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*, 0x50>(this);
}
constexpr void GlobalNamespace::OVRGLTFAnimatinonNode::__set_m_translations(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, 0x58>(this, std::forward<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* GlobalNamespace::OVRGLTFAnimatinonNode::__get_m_translations()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*> GlobalNamespace::OVRGLTFAnimatinonNode::__get_m_translations() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, 0x58>(this);
}
constexpr void GlobalNamespace::OVRGLTFAnimatinonNode::__set_m_rotations(::System::Collections::Generic::List_1<::UnityEngine::Quaternion>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Quaternion>*, 0x60>(this, std::forward<::System::Collections::Generic::List_1<::UnityEngine::Quaternion>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* GlobalNamespace::OVRGLTFAnimatinonNode::__get_m_rotations()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Quaternion>*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Quaternion>*> GlobalNamespace::OVRGLTFAnimatinonNode::__get_m_rotations() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Quaternion>*, 0x60>(this);
}
constexpr void GlobalNamespace::OVRGLTFAnimatinonNode::__set_m_scales(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, 0x68>(this, std::forward<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* GlobalNamespace::OVRGLTFAnimatinonNode::__get_m_scales()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, 0x68>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*> GlobalNamespace::OVRGLTFAnimatinonNode::__get_m_scales() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, 0x68>(this);
}
constexpr void GlobalNamespace::OVRGLTFAnimatinonNode::__set_m_weights(::System::Collections::Generic::List_1<float_t>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<float_t>*, 0x70>(this, std::forward<::System::Collections::Generic::List_1<float_t>*>(value));
}
constexpr ::System::Collections::Generic::List_1<float_t>* GlobalNamespace::OVRGLTFAnimatinonNode::__get_m_weights()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<float_t>*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<float_t>*> GlobalNamespace::OVRGLTFAnimatinonNode::__get_m_weights() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<float_t>*, 0x70>(this);
}
constexpr void GlobalNamespace::OVRGLTFAnimatinonNode::__set_m_additiveWeightIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x78>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::OVRGLTFAnimatinonNode::__get_m_additiveWeightIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x78>(this);
}
constexpr int32_t const& GlobalNamespace::OVRGLTFAnimatinonNode::__get_m_additiveWeightIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x78>(this);
}
inline void GlobalNamespace::OVRGLTFAnimatinonNode::setStaticF_InputNodeKeyFrames(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode,int32_t>*, "InputNodeKeyFrames", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAnimatinonNode*>::get>(std::forward<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode,int32_t>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode,int32_t>* GlobalNamespace::OVRGLTFAnimatinonNode::getStaticF_InputNodeKeyFrames()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode,int32_t>*, "InputNodeKeyFrames", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAnimatinonNode*>::get>();
}
inline void GlobalNamespace::OVRGLTFAnimatinonNode::setStaticF_ThumbStickKeyFrames(::System::Collections::Generic::List_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<int32_t>*, "ThumbStickKeyFrames", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAnimatinonNode*>::get>(std::forward<::System::Collections::Generic::List_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::List_1<int32_t>* GlobalNamespace::OVRGLTFAnimatinonNode::getStaticF_ThumbStickKeyFrames()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<int32_t>*, "ThumbStickKeyFrames", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAnimatinonNode*>::get>();
}
inline void GlobalNamespace::OVRGLTFAnimatinonNode::setStaticF_CardDirections(::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>, "CardDirections", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAnimatinonNode*>::get>(std::forward<::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>>(value));
}
inline ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*> GlobalNamespace::OVRGLTFAnimatinonNode::getStaticF_CardDirections()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>, "CardDirections", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAnimatinonNode*>::get>();
}
inline ::GlobalNamespace::OVRGLTFAnimatinonNode* GlobalNamespace::OVRGLTFAnimatinonNode::New_ctor(::OVRSimpleJSON::JSONNode*  jsonData, ::GlobalNamespace::OVRBinaryChunk  binaryChunk, ::GlobalNamespace::OVRGLTFInputNode  inputNodeType, ::UnityEngine::GameObject*  gameObj, ::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*  morphTargetHandler)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::OVRGLTFAnimatinonNode*>(jsonData, binaryChunk, inputNodeType, gameObj, morphTargetHandler));
}
inline void GlobalNamespace::OVRGLTFAnimatinonNode::_ctor(::OVRSimpleJSON::JSONNode*  jsonData, ::GlobalNamespace::OVRBinaryChunk  binaryChunk, ::GlobalNamespace::OVRGLTFInputNode  inputNodeType, ::UnityEngine::GameObject*  gameObj, ::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*  morphTargetHandler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAnimatinonNode*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRBinaryChunk>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRGLTFInputNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, jsonData, binaryChunk, inputNodeType, gameObj, morphTargetHandler);
}
inline void GlobalNamespace::OVRGLTFAnimatinonNode::AddChannel(::OVRSimpleJSON::JSONNode*  channel, ::OVRSimpleJSON::JSONNode*  samplers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAnimatinonNode*>::get(),
                            "AddChannel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, channel, samplers);
}
inline void GlobalNamespace::OVRGLTFAnimatinonNode::UpdatePose(bool  down)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAnimatinonNode*>::get(),
                            "UpdatePose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, down);
}
/// @param applyDeadZone: bool (default: true)
inline void GlobalNamespace::OVRGLTFAnimatinonNode::UpdatePose(float_t  t, bool  applyDeadZone)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAnimatinonNode*>::get(),
                            "UpdatePose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, t, applyDeadZone);
}
inline void GlobalNamespace::OVRGLTFAnimatinonNode::UpdatePose(::UnityEngine::Vector2  joystick)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAnimatinonNode*>::get(),
                            "UpdatePose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, joystick);
}
inline ::System::Tuple_2<::GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection,::GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection>* GlobalNamespace::OVRGLTFAnimatinonNode::GetCardinalThumbsticks(::UnityEngine::Vector2  joystick)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAnimatinonNode*>::get(),
                            "GetCardinalThumbsticks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Tuple_2<::GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection,::GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection>*, false>(*this, ___internal_method, joystick);
}
inline ::UnityEngine::Vector2 GlobalNamespace::OVRGLTFAnimatinonNode::GetCardinalWeights(::UnityEngine::Vector2  joystick, ::System::Tuple_2<::GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection,::GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection>*  cardinals)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAnimatinonNode*>::get(),
                            "GetCardinalWeights",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Tuple_2<::GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection,::GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(*this, ___internal_method, joystick, cardinals);
}
inline void GlobalNamespace::OVRGLTFAnimatinonNode::ProcessAnimationSampler(::OVRSimpleJSON::JSONNode*  samplerNode, int32_t  nodeId, ::GlobalNamespace::__OVRGLTFAnimatinonNode__OVRGLTFTransformType  transformType, ::OVRSimpleJSON::JSONNode*  extras)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAnimatinonNode*>::get(),
                            "ProcessAnimationSampler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRGLTFAnimatinonNode__OVRGLTFTransformType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, samplerNode, nodeId, transformType, extras);
}
inline ::GlobalNamespace::__OVRGLTFAnimatinonNode__OVRGLTFTransformType GlobalNamespace::OVRGLTFAnimatinonNode::GetTransformType(::StringW  transform)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAnimatinonNode*>::get(),
                            "GetTransformType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRGLTFAnimatinonNode__OVRGLTFTransformType, false>(*this, ___internal_method, transform);
}
inline ::GlobalNamespace::__OVRGLTFAnimatinonNode__OVRInterpolationType GlobalNamespace::OVRGLTFAnimatinonNode::ToOVRInterpolationType(::StringW  interpolationType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAnimatinonNode*>::get(),
                            "ToOVRInterpolationType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRGLTFAnimatinonNode__OVRInterpolationType, false>(*this, ___internal_method, interpolationType);
}
template<typename T>
inline void GlobalNamespace::OVRGLTFAnimatinonNode::CopyData(ByRef<::System::Collections::Generic::List_1<T>*>  dest, ::ArrayW<T,::Array<T>*>  src)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAnimatinonNode*>::get(),
                        "CopyData",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<T>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T,::Array<T>*>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, dest, src);
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVRGLTFAnimatinonNode::CloneVector3(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAnimatinonNode*>::get(),
                            "CloneVector3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(*this, ___internal_method, v);
}
inline ::UnityEngine::Quaternion GlobalNamespace::OVRGLTFAnimatinonNode::CloneQuaternion(::UnityEngine::Quaternion  q)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAnimatinonNode*>::get(),
                            "CloneQuaternion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion, false>(*this, ___internal_method, q);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
