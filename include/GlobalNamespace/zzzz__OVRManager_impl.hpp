#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRManager_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRManager_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__DepthTextureMode_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "GlobalNamespace/zzzz__OVRMixedRealityCaptureConfiguration_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__WeakReference_1_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "GlobalNamespace/zzzz__OVRDisplay_def.hpp"
#include "GlobalNamespace/zzzz__OVRMixedRealityCaptureSettings_def.hpp"
#include "GlobalNamespace/zzzz__OVRRuntimeSettings_def.hpp"
#include "System/zzzz__Action_6_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "GlobalNamespace/zzzz__OVRPose_def.hpp"
#include "GlobalNamespace/zzzz__OVRTracker_def.hpp"
#include "GlobalNamespace/zzzz__OVRBoundary_def.hpp"
#include "UnityEngine/XR/zzzz__XRInputSubsystem_def.hpp"
#include "System/zzzz__Action_4_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "System/zzzz__Version_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpace_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/XR/zzzz__XRDisplaySubsystemDescriptor_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRProfile_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
constexpr void GlobalNamespace::__OVRManager__XrApi::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVRManager__XrApi::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__OVRManager__XrApi::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRManager__XrApi::__OVRManager__XrApi(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__OVRManager__XrApi  GlobalNamespace::__OVRManager__XrApi::Unknown{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__OVRManager__XrApi  GlobalNamespace::__OVRManager__XrApi::CAPI{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__OVRManager__XrApi  GlobalNamespace::__OVRManager__XrApi::VRAPI{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::__OVRManager__XrApi  GlobalNamespace::__OVRManager__XrApi::OpenXR{static_cast<int32_t>(0x3)};
constexpr void GlobalNamespace::__OVRManager__TrackingOrigin::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVRManager__TrackingOrigin::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__OVRManager__TrackingOrigin::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRManager__TrackingOrigin::__OVRManager__TrackingOrigin(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__OVRManager__TrackingOrigin  GlobalNamespace::__OVRManager__TrackingOrigin::EyeLevel{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__OVRManager__TrackingOrigin  GlobalNamespace::__OVRManager__TrackingOrigin::FloorLevel{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__OVRManager__TrackingOrigin  GlobalNamespace::__OVRManager__TrackingOrigin::Stage{static_cast<int32_t>(0x2)};
constexpr void GlobalNamespace::__OVRManager__EyeTextureFormat::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVRManager__EyeTextureFormat::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__OVRManager__EyeTextureFormat::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRManager__EyeTextureFormat::__OVRManager__EyeTextureFormat(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__OVRManager__EyeTextureFormat  GlobalNamespace::__OVRManager__EyeTextureFormat::Default{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__OVRManager__EyeTextureFormat  GlobalNamespace::__OVRManager__EyeTextureFormat::R16G16B16A16_FP{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::__OVRManager__EyeTextureFormat  GlobalNamespace::__OVRManager__EyeTextureFormat::R11G11B10_FP{static_cast<int32_t>(0x3)};
constexpr void GlobalNamespace::__OVRManager__FoveatedRenderingLevel::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVRManager__FoveatedRenderingLevel::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__OVRManager__FoveatedRenderingLevel::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRManager__FoveatedRenderingLevel::__OVRManager__FoveatedRenderingLevel(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__OVRManager__FoveatedRenderingLevel  GlobalNamespace::__OVRManager__FoveatedRenderingLevel::Off{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__OVRManager__FoveatedRenderingLevel  GlobalNamespace::__OVRManager__FoveatedRenderingLevel::Low{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__OVRManager__FoveatedRenderingLevel  GlobalNamespace::__OVRManager__FoveatedRenderingLevel::Medium{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::__OVRManager__FoveatedRenderingLevel  GlobalNamespace::__OVRManager__FoveatedRenderingLevel::High{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::__OVRManager__FoveatedRenderingLevel  GlobalNamespace::__OVRManager__FoveatedRenderingLevel::HighTop{static_cast<int32_t>(0x4)};
constexpr void GlobalNamespace::__OVRManager__FixedFoveatedRenderingLevel::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVRManager__FixedFoveatedRenderingLevel::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__OVRManager__FixedFoveatedRenderingLevel::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRManager__FixedFoveatedRenderingLevel::__OVRManager__FixedFoveatedRenderingLevel(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__OVRManager__FixedFoveatedRenderingLevel  GlobalNamespace::__OVRManager__FixedFoveatedRenderingLevel::Off{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__OVRManager__FixedFoveatedRenderingLevel  GlobalNamespace::__OVRManager__FixedFoveatedRenderingLevel::Low{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__OVRManager__FixedFoveatedRenderingLevel  GlobalNamespace::__OVRManager__FixedFoveatedRenderingLevel::Medium{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::__OVRManager__FixedFoveatedRenderingLevel  GlobalNamespace::__OVRManager__FixedFoveatedRenderingLevel::High{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::__OVRManager__FixedFoveatedRenderingLevel  GlobalNamespace::__OVRManager__FixedFoveatedRenderingLevel::HighTop{static_cast<int32_t>(0x4)};
constexpr void GlobalNamespace::__OVRManager__TiledMultiResLevel::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVRManager__TiledMultiResLevel::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__OVRManager__TiledMultiResLevel::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRManager__TiledMultiResLevel::__OVRManager__TiledMultiResLevel(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__OVRManager__TiledMultiResLevel  GlobalNamespace::__OVRManager__TiledMultiResLevel::Off{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__OVRManager__TiledMultiResLevel  GlobalNamespace::__OVRManager__TiledMultiResLevel::LMSLow{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__OVRManager__TiledMultiResLevel  GlobalNamespace::__OVRManager__TiledMultiResLevel::LMSMedium{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::__OVRManager__TiledMultiResLevel  GlobalNamespace::__OVRManager__TiledMultiResLevel::LMSHigh{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::__OVRManager__TiledMultiResLevel  GlobalNamespace::__OVRManager__TiledMultiResLevel::LMSHighTop{static_cast<int32_t>(0x4)};
constexpr void GlobalNamespace::__OVRManager__SystemHeadsetType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVRManager__SystemHeadsetType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__OVRManager__SystemHeadsetType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRManager__SystemHeadsetType::__OVRManager__SystemHeadsetType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__OVRManager__SystemHeadsetType  GlobalNamespace::__OVRManager__SystemHeadsetType::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__OVRManager__SystemHeadsetType  GlobalNamespace::__OVRManager__SystemHeadsetType::Oculus_Quest{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::__OVRManager__SystemHeadsetType  GlobalNamespace::__OVRManager__SystemHeadsetType::Oculus_Quest_2{static_cast<int32_t>(0x9)};
constexpr ::GlobalNamespace::__OVRManager__SystemHeadsetType  GlobalNamespace::__OVRManager__SystemHeadsetType::Meta_Quest_Pro{static_cast<int32_t>(0xa)};
constexpr ::GlobalNamespace::__OVRManager__SystemHeadsetType  GlobalNamespace::__OVRManager__SystemHeadsetType::Meta_Quest_3{static_cast<int32_t>(0xb)};
constexpr ::GlobalNamespace::__OVRManager__SystemHeadsetType  GlobalNamespace::__OVRManager__SystemHeadsetType::Placeholder_12{static_cast<int32_t>(0xc)};
constexpr ::GlobalNamespace::__OVRManager__SystemHeadsetType  GlobalNamespace::__OVRManager__SystemHeadsetType::Placeholder_13{static_cast<int32_t>(0xd)};
constexpr ::GlobalNamespace::__OVRManager__SystemHeadsetType  GlobalNamespace::__OVRManager__SystemHeadsetType::Placeholder_14{static_cast<int32_t>(0xe)};
constexpr ::GlobalNamespace::__OVRManager__SystemHeadsetType  GlobalNamespace::__OVRManager__SystemHeadsetType::Rift_DK1{static_cast<int32_t>(0x1000)};
constexpr ::GlobalNamespace::__OVRManager__SystemHeadsetType  GlobalNamespace::__OVRManager__SystemHeadsetType::Rift_DK2{static_cast<int32_t>(0x1001)};
constexpr ::GlobalNamespace::__OVRManager__SystemHeadsetType  GlobalNamespace::__OVRManager__SystemHeadsetType::Rift_CV1{static_cast<int32_t>(0x1002)};
constexpr ::GlobalNamespace::__OVRManager__SystemHeadsetType  GlobalNamespace::__OVRManager__SystemHeadsetType::Rift_CB{static_cast<int32_t>(0x1003)};
constexpr ::GlobalNamespace::__OVRManager__SystemHeadsetType  GlobalNamespace::__OVRManager__SystemHeadsetType::Rift_S{static_cast<int32_t>(0x1004)};
constexpr ::GlobalNamespace::__OVRManager__SystemHeadsetType  GlobalNamespace::__OVRManager__SystemHeadsetType::Oculus_Link_Quest{static_cast<int32_t>(0x1005)};
constexpr ::GlobalNamespace::__OVRManager__SystemHeadsetType  GlobalNamespace::__OVRManager__SystemHeadsetType::Oculus_Link_Quest_2{static_cast<int32_t>(0x1006)};
constexpr ::GlobalNamespace::__OVRManager__SystemHeadsetType  GlobalNamespace::__OVRManager__SystemHeadsetType::Meta_Link_Quest_Pro{static_cast<int32_t>(0x1007)};
constexpr ::GlobalNamespace::__OVRManager__SystemHeadsetType  GlobalNamespace::__OVRManager__SystemHeadsetType::Meta_Link_Quest_3{static_cast<int32_t>(0x1008)};
constexpr ::GlobalNamespace::__OVRManager__SystemHeadsetType  GlobalNamespace::__OVRManager__SystemHeadsetType::PC_Placeholder_4105{static_cast<int32_t>(0x1009)};
constexpr ::GlobalNamespace::__OVRManager__SystemHeadsetType  GlobalNamespace::__OVRManager__SystemHeadsetType::PC_Placeholder_4106{static_cast<int32_t>(0x100a)};
constexpr ::GlobalNamespace::__OVRManager__SystemHeadsetType  GlobalNamespace::__OVRManager__SystemHeadsetType::PC_Placeholder_4107{static_cast<int32_t>(0x100b)};
constexpr void GlobalNamespace::__OVRManager__XRDevice::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVRManager__XRDevice::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__OVRManager__XRDevice::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRManager__XRDevice::__OVRManager__XRDevice(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__OVRManager__XRDevice  GlobalNamespace::__OVRManager__XRDevice::Unknown{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__OVRManager__XRDevice  GlobalNamespace::__OVRManager__XRDevice::Oculus{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__OVRManager__XRDevice  GlobalNamespace::__OVRManager__XRDevice::OpenVR{static_cast<int32_t>(0x2)};
constexpr void GlobalNamespace::__OVRManager__ColorSpace::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVRManager__ColorSpace::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__OVRManager__ColorSpace::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRManager__ColorSpace::__OVRManager__ColorSpace(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__OVRManager__ColorSpace  GlobalNamespace::__OVRManager__ColorSpace::Unknown{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__OVRManager__ColorSpace  GlobalNamespace::__OVRManager__ColorSpace::Unmanaged{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__OVRManager__ColorSpace  GlobalNamespace::__OVRManager__ColorSpace::Rec_2020{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::__OVRManager__ColorSpace  GlobalNamespace::__OVRManager__ColorSpace::Rec_709{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::__OVRManager__ColorSpace  GlobalNamespace::__OVRManager__ColorSpace::Rift_CV1{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::__OVRManager__ColorSpace  GlobalNamespace::__OVRManager__ColorSpace::Rift_S{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::__OVRManager__ColorSpace  GlobalNamespace::__OVRManager__ColorSpace::Quest{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::__OVRManager__ColorSpace  GlobalNamespace::__OVRManager__ColorSpace::P3{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::__OVRManager__ColorSpace  GlobalNamespace::__OVRManager__ColorSpace::Adobe_RGB{static_cast<int32_t>(0x8)};
constexpr void GlobalNamespace::__OVRManager__ProcessorPerformanceLevel::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVRManager__ProcessorPerformanceLevel::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__OVRManager__ProcessorPerformanceLevel::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRManager__ProcessorPerformanceLevel::__OVRManager__ProcessorPerformanceLevel(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__OVRManager__ProcessorPerformanceLevel  GlobalNamespace::__OVRManager__ProcessorPerformanceLevel::PowerSavings{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__OVRManager__ProcessorPerformanceLevel  GlobalNamespace::__OVRManager__ProcessorPerformanceLevel::SustainedLow{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__OVRManager__ProcessorPerformanceLevel  GlobalNamespace::__OVRManager__ProcessorPerformanceLevel::SustainedHigh{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::__OVRManager__ProcessorPerformanceLevel  GlobalNamespace::__OVRManager__ProcessorPerformanceLevel::Boost{static_cast<int32_t>(0x3)};
constexpr void GlobalNamespace::__OVRManager__ControllerDrivenHandPosesType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVRManager__ControllerDrivenHandPosesType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__OVRManager__ControllerDrivenHandPosesType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRManager__ControllerDrivenHandPosesType::__OVRManager__ControllerDrivenHandPosesType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__OVRManager__ControllerDrivenHandPosesType  GlobalNamespace::__OVRManager__ControllerDrivenHandPosesType::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__OVRManager__ControllerDrivenHandPosesType  GlobalNamespace::__OVRManager__ControllerDrivenHandPosesType::ConformingToController{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__OVRManager__ControllerDrivenHandPosesType  GlobalNamespace::__OVRManager__ControllerDrivenHandPosesType::Natural{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::GlobalNamespace::__OVRManager__EventListener.OnEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRManager__EventListener::*)(::GlobalNamespace::__OVRPlugin__EventDataBuffer)>(&::GlobalNamespace::__OVRManager__EventListener::OnEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRManager__EventListener*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRManager__EventListener*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__OVRManager__EventListener::OnEvent(::GlobalNamespace::__OVRPlugin__EventDataBuffer  eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRManager__EventListener*>::get(),
                            "OnEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPlugin__EventDataBuffer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, eventData);
}
constexpr void GlobalNamespace::__OVRManager__CompositionMethod::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVRManager__CompositionMethod::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__OVRManager__CompositionMethod::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRManager__CompositionMethod::__OVRManager__CompositionMethod(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__OVRManager__CompositionMethod  GlobalNamespace::__OVRManager__CompositionMethod::External{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__OVRManager__CompositionMethod  GlobalNamespace::__OVRManager__CompositionMethod::Direct{static_cast<int32_t>(0x1)};
constexpr void GlobalNamespace::__OVRManager__CameraDevice::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVRManager__CameraDevice::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__OVRManager__CameraDevice::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRManager__CameraDevice::__OVRManager__CameraDevice(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__OVRManager__CameraDevice  GlobalNamespace::__OVRManager__CameraDevice::WebCamera0{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__OVRManager__CameraDevice  GlobalNamespace::__OVRManager__CameraDevice::WebCamera1{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__OVRManager__CameraDevice  GlobalNamespace::__OVRManager__CameraDevice::ZEDCamera{static_cast<int32_t>(0x2)};
constexpr void GlobalNamespace::__OVRManager__DepthQuality::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVRManager__DepthQuality::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__OVRManager__DepthQuality::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRManager__DepthQuality::__OVRManager__DepthQuality(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__OVRManager__DepthQuality  GlobalNamespace::__OVRManager__DepthQuality::Low{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__OVRManager__DepthQuality  GlobalNamespace::__OVRManager__DepthQuality::Medium{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__OVRManager__DepthQuality  GlobalNamespace::__OVRManager__DepthQuality::High{static_cast<int32_t>(0x2)};
constexpr void GlobalNamespace::__OVRManager__VirtualGreenScreenType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVRManager__VirtualGreenScreenType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__OVRManager__VirtualGreenScreenType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRManager__VirtualGreenScreenType::__OVRManager__VirtualGreenScreenType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__OVRManager__VirtualGreenScreenType  GlobalNamespace::__OVRManager__VirtualGreenScreenType::Off{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__OVRManager__VirtualGreenScreenType  GlobalNamespace::__OVRManager__VirtualGreenScreenType::OuterBoundary{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__OVRManager__VirtualGreenScreenType  GlobalNamespace::__OVRManager__VirtualGreenScreenType::PlayArea{static_cast<int32_t>(0x2)};
constexpr void GlobalNamespace::__OVRManager__MrcActivationMode::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVRManager__MrcActivationMode::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__OVRManager__MrcActivationMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRManager__MrcActivationMode::__OVRManager__MrcActivationMode(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__OVRManager__MrcActivationMode  GlobalNamespace::__OVRManager__MrcActivationMode::Automatic{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__OVRManager__MrcActivationMode  GlobalNamespace::__OVRManager__MrcActivationMode::Disabled{static_cast<int32_t>(0x1)};
constexpr void GlobalNamespace::__OVRManager__MrcCameraType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVRManager__MrcCameraType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__OVRManager__MrcCameraType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRManager__MrcCameraType::__OVRManager__MrcCameraType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__OVRManager__MrcCameraType  GlobalNamespace::__OVRManager__MrcCameraType::Normal{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__OVRManager__MrcCameraType  GlobalNamespace::__OVRManager__MrcCameraType::Foreground{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__OVRManager__MrcCameraType  GlobalNamespace::__OVRManager__MrcCameraType::Background{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2745958;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate::*)(::UnityEngine::GameObject*, ::GlobalNamespace::__OVRManager__MrcCameraType)>(&::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2745a30;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate::*)(::UnityEngine::GameObject*, ::GlobalNamespace::__OVRManager__MrcCameraType, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2745a44;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate::*)(::System::IAsyncResult*)>(&::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2745ad8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate* GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate*>(object, method));
}
inline void GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline ::UnityEngine::GameObject* GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate::Invoke(::UnityEngine::GameObject*  mainCameraGameObject, ::GlobalNamespace::__OVRManager__MrcCameraType  cameraType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRManager__MrcCameraType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject*, false>(*this, ___internal_method, mainCameraGameObject, cameraType);
}
inline ::System::IAsyncResult* GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate::BeginInvoke(::UnityEngine::GameObject*  mainCameraGameObject, ::GlobalNamespace::__OVRManager__MrcCameraType  cameraType, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRManager__MrcCameraType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, mainCameraGameObject, cameraType, callback, object);
}
inline ::UnityEngine::GameObject* GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate::EndInvoke(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject*, false>(*this, ___internal_method, result);
}
constexpr void GlobalNamespace::__OVRManager__PassthroughInitializationState::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVRManager__PassthroughInitializationState::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__OVRManager__PassthroughInitializationState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRManager__PassthroughInitializationState::__OVRManager__PassthroughInitializationState(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__OVRManager__PassthroughInitializationState  GlobalNamespace::__OVRManager__PassthroughInitializationState::Unspecified{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__OVRManager__PassthroughInitializationState  GlobalNamespace::__OVRManager__PassthroughInitializationState::Pending{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__OVRManager__PassthroughInitializationState  GlobalNamespace::__OVRManager__PassthroughInitializationState::Initialized{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::__OVRManager__PassthroughInitializationState  GlobalNamespace::__OVRManager__PassthroughInitializationState::Failed{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::GlobalNamespace::__OVRManager__PassthroughCapabilities.get_SupportsPassthrough
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__OVRManager__PassthroughCapabilities::*)()>(&::GlobalNamespace::__OVRManager__PassthroughCapabilities::get_SupportsPassthrough)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2745ae4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRManager__PassthroughCapabilities*>::get(),
                            "get_SupportsPassthrough",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRManager__PassthroughCapabilities.get_SupportsColorPassthrough
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__OVRManager__PassthroughCapabilities::*)()>(&::GlobalNamespace::__OVRManager__PassthroughCapabilities::get_SupportsColorPassthrough)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2745aec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRManager__PassthroughCapabilities*>::get(),
                            "get_SupportsColorPassthrough",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRManager__PassthroughCapabilities.get_MaxColorLutResolution
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::GlobalNamespace::__OVRManager__PassthroughCapabilities::*)()>(&::GlobalNamespace::__OVRManager__PassthroughCapabilities::get_MaxColorLutResolution)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2745af4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRManager__PassthroughCapabilities*>::get(),
                            "get_MaxColorLutResolution",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRManager__PassthroughCapabilities._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRManager__PassthroughCapabilities::*)(bool, bool, uint32_t)>(&::GlobalNamespace::__OVRManager__PassthroughCapabilities::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2745510;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRManager__PassthroughCapabilities*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__OVRManager__PassthroughCapabilities::__set__SupportsPassthrough_k__BackingField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__OVRManager__PassthroughCapabilities::__get__SupportsPassthrough_k__BackingField()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& GlobalNamespace::__OVRManager__PassthroughCapabilities::__get__SupportsPassthrough_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr void GlobalNamespace::__OVRManager__PassthroughCapabilities::__set__SupportsColorPassthrough_k__BackingField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x11>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__OVRManager__PassthroughCapabilities::__get__SupportsColorPassthrough_k__BackingField()  {
return ::cordl_internals::getInstanceField<bool, 0x11>(this);
}
constexpr bool const& GlobalNamespace::__OVRManager__PassthroughCapabilities::__get__SupportsColorPassthrough_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x11>(this);
}
constexpr void GlobalNamespace::__OVRManager__PassthroughCapabilities::__set__MaxColorLutResolution_k__BackingField(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x14>(this, std::forward<uint32_t>(value));
}
constexpr uint32_t& GlobalNamespace::__OVRManager__PassthroughCapabilities::__get__MaxColorLutResolution_k__BackingField()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x14>(this);
}
constexpr uint32_t const& GlobalNamespace::__OVRManager__PassthroughCapabilities::__get__MaxColorLutResolution_k__BackingField() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x14>(this);
}
inline bool GlobalNamespace::__OVRManager__PassthroughCapabilities::get_SupportsPassthrough()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRManager__PassthroughCapabilities*>::get(),
                            "get_SupportsPassthrough",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::__OVRManager__PassthroughCapabilities::get_SupportsColorPassthrough()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRManager__PassthroughCapabilities*>::get(),
                            "get_SupportsColorPassthrough",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline uint32_t GlobalNamespace::__OVRManager__PassthroughCapabilities::get_MaxColorLutResolution()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRManager__PassthroughCapabilities*>::get(),
                            "get_MaxColorLutResolution",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::__OVRManager__PassthroughCapabilities* GlobalNamespace::__OVRManager__PassthroughCapabilities::New_ctor(bool  supportsPassthrough, bool  supportsColorPassthrough, uint32_t  maxColorLutResolution)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OVRManager__PassthroughCapabilities*>(supportsPassthrough, supportsColorPassthrough, maxColorLutResolution));
}
inline void GlobalNamespace::__OVRManager__PassthroughCapabilities::_ctor(bool  supportsPassthrough, bool  supportsColorPassthrough, uint32_t  maxColorLutResolution)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRManager__PassthroughCapabilities*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, supportsPassthrough, supportsColorPassthrough, maxColorLutResolution);
}
//  Writing Method size for method: ::GlobalNamespace::__OVRManager____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRManager____c::*)()>(&::GlobalNamespace::__OVRManager____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2745b60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRManager____c*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRManager____c._InitOVRManager_b__417_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__OVRManager____c::*)(float_t)>(&::GlobalNamespace::__OVRManager____c::_InitOVRManager_b__417_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2745b68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRManager____c*>::get(),
                            "<InitOVRManager>b__417_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRManager____c._FindMainCamera_b__433_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__OVRManager____c::*)(::UnityEngine::Camera*, ::UnityEngine::Camera*)>(&::GlobalNamespace::__OVRManager____c::_FindMainCamera_b__433_0)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2745b84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRManager____c*>::get(),
                            "<FindMainCamera>b__433_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get()}
                        )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__OVRManager____c::setStaticF___9(::GlobalNamespace::__OVRManager____c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::__OVRManager____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRManager____c*>::get>(std::forward<::GlobalNamespace::__OVRManager____c*>(value));
}
inline ::GlobalNamespace::__OVRManager____c* GlobalNamespace::__OVRManager____c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::__OVRManager____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRManager____c*>::get>();
}
inline void GlobalNamespace::__OVRManager____c::setStaticF___9__417_0(::System::Func_2<float_t,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<float_t,::StringW>*, "<>9__417_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRManager____c*>::get>(std::forward<::System::Func_2<float_t,::StringW>*>(value));
}
inline ::System::Func_2<float_t,::StringW>* GlobalNamespace::__OVRManager____c::getStaticF___9__417_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<float_t,::StringW>*, "<>9__417_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRManager____c*>::get>();
}
inline void GlobalNamespace::__OVRManager____c::setStaticF___9__433_0(::System::Comparison_1<::UnityEngine::Camera*>*  value)  {
::cordl_internals::setStaticField<::System::Comparison_1<::UnityEngine::Camera*>*, "<>9__433_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRManager____c*>::get>(std::forward<::System::Comparison_1<::UnityEngine::Camera*>*>(value));
}
inline ::System::Comparison_1<::UnityEngine::Camera*>* GlobalNamespace::__OVRManager____c::getStaticF___9__433_0()  {
return ::cordl_internals::getStaticField<::System::Comparison_1<::UnityEngine::Camera*>*, "<>9__433_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRManager____c*>::get>();
}
inline ::GlobalNamespace::__OVRManager____c* GlobalNamespace::__OVRManager____c::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OVRManager____c*>());
}
inline void GlobalNamespace::__OVRManager____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRManager____c*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::__OVRManager____c::_InitOVRManager_b__417_0(float_t  f)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRManager____c*>::get(),
                            "<InitOVRManager>b__417_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method, f);
}
inline int32_t GlobalNamespace::__OVRManager____c::_FindMainCamera_b__433_0(::UnityEngine::Camera*  c0, ::UnityEngine::Camera*  c1)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRManager____c*>::get(),
                            "<FindMainCamera>b__433_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, c0, c1);
}
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_instance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRManager* (*)()>(&::GlobalNamespace::OVRManager::get_instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2739064;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_instance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_instance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::OVRManager*)>(&::GlobalNamespace::OVRManager::set_instance)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x27390bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "set_instance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRManager*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_display
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRDisplay* (*)()>(&::GlobalNamespace::OVRManager::get_display)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2739118;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_display",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_display
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::OVRDisplay*)>(&::GlobalNamespace::OVRManager::set_display)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2739170;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "set_display",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRDisplay*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_tracker
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTracker* (*)()>(&::GlobalNamespace::OVRManager::get_tracker)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x27391cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_tracker",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_tracker
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::OVRTracker*)>(&::GlobalNamespace::OVRManager::set_tracker)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2739224;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "set_tracker",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTracker*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_boundary
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRBoundary* (*)()>(&::GlobalNamespace::OVRManager::get_boundary)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2739280;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_boundary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_boundary
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::OVRBoundary*)>(&::GlobalNamespace::OVRManager::set_boundary)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x27392d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "set_boundary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRBoundary*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_runtimeSettings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRRuntimeSettings* (*)()>(&::GlobalNamespace::OVRManager::get_runtimeSettings)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2739334;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_runtimeSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_runtimeSettings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::OVRRuntimeSettings*)>(&::GlobalNamespace::OVRManager::set_runtimeSettings)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x273938c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "set_runtimeSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRRuntimeSettings*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_profile
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRProfile* (*)()>(&::GlobalNamespace::OVRManager::get_profile)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x27393e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_profile",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_HMDAcquired
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::add_HMDAcquired)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x27394e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "add_HMDAcquired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_HMDAcquired
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::remove_HMDAcquired)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x27395c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "remove_HMDAcquired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_HMDLost
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::add_HMDLost)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x27396a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "add_HMDLost",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_HMDLost
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::remove_HMDLost)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x273977c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "remove_HMDLost",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_HMDMounted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::add_HMDMounted)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2739858;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "add_HMDMounted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_HMDMounted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::remove_HMDMounted)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2739934;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "remove_HMDMounted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_HMDUnmounted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::add_HMDUnmounted)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2739a10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "add_HMDUnmounted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_HMDUnmounted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::remove_HMDUnmounted)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2739aec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "remove_HMDUnmounted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_VrFocusAcquired
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::add_VrFocusAcquired)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2739bc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "add_VrFocusAcquired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_VrFocusAcquired
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::remove_VrFocusAcquired)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2739ca4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "remove_VrFocusAcquired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_VrFocusLost
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::add_VrFocusLost)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2739d80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "add_VrFocusLost",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_VrFocusLost
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::remove_VrFocusLost)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2739e5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "remove_VrFocusLost",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_InputFocusAcquired
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::add_InputFocusAcquired)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2739f38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "add_InputFocusAcquired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_InputFocusAcquired
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::remove_InputFocusAcquired)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x273a014;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "remove_InputFocusAcquired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_InputFocusLost
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::add_InputFocusLost)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x273a0f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "add_InputFocusLost",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_InputFocusLost
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::remove_InputFocusLost)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x273a1cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "remove_InputFocusLost",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_AudioOutChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::add_AudioOutChanged)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x273a2a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "add_AudioOutChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_AudioOutChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::remove_AudioOutChanged)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x273a384;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "remove_AudioOutChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_AudioInChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::add_AudioInChanged)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x273a460;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "add_AudioInChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_AudioInChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::remove_AudioInChanged)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x273a53c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "remove_AudioInChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_TrackingAcquired
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::add_TrackingAcquired)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x273a618;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "add_TrackingAcquired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_TrackingAcquired
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::remove_TrackingAcquired)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x273a6f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "remove_TrackingAcquired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_TrackingLost
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::add_TrackingLost)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x273a7d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "add_TrackingLost",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_TrackingLost
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::remove_TrackingLost)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x273a8ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "remove_TrackingLost",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_DisplayRefreshRateChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_2<float_t,float_t>*)>(&::GlobalNamespace::OVRManager::add_DisplayRefreshRateChanged)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x273a988;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "add_DisplayRefreshRateChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<float_t,float_t>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_DisplayRefreshRateChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_2<float_t,float_t>*)>(&::GlobalNamespace::OVRManager::remove_DisplayRefreshRateChanged)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x273aa7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "remove_DisplayRefreshRateChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<float_t,float_t>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_SpatialAnchorCreateComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_4<uint64_t,bool,::GlobalNamespace::OVRSpace,::System::Guid>*)>(&::GlobalNamespace::OVRManager::add_SpatialAnchorCreateComplete)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x273ab70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "add_SpatialAnchorCreateComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<uint64_t,bool,::GlobalNamespace::OVRSpace,::System::Guid>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_SpatialAnchorCreateComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_4<uint64_t,bool,::GlobalNamespace::OVRSpace,::System::Guid>*)>(&::GlobalNamespace::OVRManager::remove_SpatialAnchorCreateComplete)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x273ac64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "remove_SpatialAnchorCreateComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<uint64_t,bool,::GlobalNamespace::OVRSpace,::System::Guid>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_SpaceSetComponentStatusComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_6<uint64_t,bool,::GlobalNamespace::OVRSpace,::System::Guid,::GlobalNamespace::__OVRPlugin__SpaceComponentType,bool>*)>(&::GlobalNamespace::OVRManager::add_SpaceSetComponentStatusComplete)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x273ad58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "add_SpaceSetComponentStatusComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_6<uint64_t,bool,::GlobalNamespace::OVRSpace,::System::Guid,::GlobalNamespace::__OVRPlugin__SpaceComponentType,bool>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_SpaceSetComponentStatusComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_6<uint64_t,bool,::GlobalNamespace::OVRSpace,::System::Guid,::GlobalNamespace::__OVRPlugin__SpaceComponentType,bool>*)>(&::GlobalNamespace::OVRManager::remove_SpaceSetComponentStatusComplete)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x273ae4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "remove_SpaceSetComponentStatusComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_6<uint64_t,bool,::GlobalNamespace::OVRSpace,::System::Guid,::GlobalNamespace::__OVRPlugin__SpaceComponentType,bool>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_SpaceQueryResults
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<uint64_t>*)>(&::GlobalNamespace::OVRManager::add_SpaceQueryResults)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x273af40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "add_SpaceQueryResults",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<uint64_t>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_SpaceQueryResults
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<uint64_t>*)>(&::GlobalNamespace::OVRManager::remove_SpaceQueryResults)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x273b034;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "remove_SpaceQueryResults",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<uint64_t>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_SpaceQueryComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_2<uint64_t,bool>*)>(&::GlobalNamespace::OVRManager::add_SpaceQueryComplete)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x273b128;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "add_SpaceQueryComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<uint64_t,bool>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_SpaceQueryComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_2<uint64_t,bool>*)>(&::GlobalNamespace::OVRManager::remove_SpaceQueryComplete)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x273b21c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "remove_SpaceQueryComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<uint64_t,bool>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_SpaceSaveComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_4<uint64_t,::GlobalNamespace::OVRSpace,bool,::System::Guid>*)>(&::GlobalNamespace::OVRManager::add_SpaceSaveComplete)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x273b310;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "add_SpaceSaveComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<uint64_t,::GlobalNamespace::OVRSpace,bool,::System::Guid>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_SpaceSaveComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_4<uint64_t,::GlobalNamespace::OVRSpace,bool,::System::Guid>*)>(&::GlobalNamespace::OVRManager::remove_SpaceSaveComplete)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x273b404;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "remove_SpaceSaveComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<uint64_t,::GlobalNamespace::OVRSpace,bool,::System::Guid>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_SpaceEraseComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_4<uint64_t,bool,::System::Guid,::GlobalNamespace::__OVRPlugin__SpaceStorageLocation>*)>(&::GlobalNamespace::OVRManager::add_SpaceEraseComplete)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x273b4f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "add_SpaceEraseComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<uint64_t,bool,::System::Guid,::GlobalNamespace::__OVRPlugin__SpaceStorageLocation>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_SpaceEraseComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_4<uint64_t,bool,::System::Guid,::GlobalNamespace::__OVRPlugin__SpaceStorageLocation>*)>(&::GlobalNamespace::OVRManager::remove_SpaceEraseComplete)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x273b5ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "remove_SpaceEraseComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<uint64_t,bool,::System::Guid,::GlobalNamespace::__OVRPlugin__SpaceStorageLocation>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_ShareSpacesComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_2<uint64_t,::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*)>(&::GlobalNamespace::OVRManager::add_ShareSpacesComplete)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x273b6e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "add_ShareSpacesComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<uint64_t,::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_ShareSpacesComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_2<uint64_t,::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*)>(&::GlobalNamespace::OVRManager::remove_ShareSpacesComplete)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x273b7d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "remove_ShareSpacesComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<uint64_t,::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_SpaceListSaveComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_2<uint64_t,::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*)>(&::GlobalNamespace::OVRManager::add_SpaceListSaveComplete)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x273b8c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "add_SpaceListSaveComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<uint64_t,::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_SpaceListSaveComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_2<uint64_t,::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*)>(&::GlobalNamespace::OVRManager::remove_SpaceListSaveComplete)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x273b9bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "remove_SpaceListSaveComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<uint64_t,::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_SceneCaptureComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_2<uint64_t,bool>*)>(&::GlobalNamespace::OVRManager::add_SceneCaptureComplete)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x273bab0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "add_SceneCaptureComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<uint64_t,bool>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_SceneCaptureComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_2<uint64_t,bool>*)>(&::GlobalNamespace::OVRManager::remove_SceneCaptureComplete)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x273bba4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "remove_SceneCaptureComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<uint64_t,bool>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_HSWDismissed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::add_HSWDismissed)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x273bc98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "add_HSWDismissed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_HSWDismissed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::remove_HSWDismissed)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x273bd74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "remove_HSWDismissed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_isHmdPresent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::get_isHmdPresent)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x273be50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_isHmdPresent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_isHmdPresent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::GlobalNamespace::OVRManager::set_isHmdPresent)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x273bf28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "set_isHmdPresent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_audioOutId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::GlobalNamespace::OVRManager::get_audioOutId)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x273bf8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_audioOutId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_audioInId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::GlobalNamespace::OVRManager::get_audioInId)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x273bfdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_audioInId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_hasVrFocus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::get_hasVrFocus)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x273c02c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_hasVrFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_hasVrFocus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::GlobalNamespace::OVRManager::set_hasVrFocus)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x273c104;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "set_hasVrFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_hasInputFocus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::get_hasInputFocus)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x273c168;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_hasInputFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_chromatic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::get_chromatic)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x273c1b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_chromatic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_chromatic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(bool)>(&::GlobalNamespace::OVRManager::set_chromatic)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x273c244;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "set_chromatic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_monoscopic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::get_monoscopic)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x273c2d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_monoscopic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_monoscopic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(bool)>(&::GlobalNamespace::OVRManager::set_monoscopic)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x273c364;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "set_monoscopic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_sharpenType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRPlugin__LayerSharpenType (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::get_sharpenType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x273c400;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_sharpenType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_sharpenType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(::GlobalNamespace::__OVRPlugin__LayerSharpenType)>(&::GlobalNamespace::OVRManager::set_sharpenType)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x273c408;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "set_sharpenType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPlugin__LayerSharpenType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_colorGamut
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRManager__ColorSpace (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::get_colorGamut)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x273c470;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_colorGamut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_colorGamut
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(::GlobalNamespace::__OVRManager__ColorSpace)>(&::GlobalNamespace::OVRManager::set_colorGamut)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x273c478;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "set_colorGamut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRManager__ColorSpace>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_nativeColorGamut
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRManager__ColorSpace (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::get_nativeColorGamut)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x273c4e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_nativeColorGamut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.IsAdaptiveResSupportedByEngine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::IsAdaptiveResSupportedByEngine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x273c530;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "IsAdaptiveResSupportedByEngine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_headPoseRelativeOffsetRotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::get_headPoseRelativeOffsetRotation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x273c538;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_headPoseRelativeOffsetRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_headPoseRelativeOffsetRotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::OVRManager::set_headPoseRelativeOffsetRotation)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x273c544;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "set_headPoseRelativeOffsetRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_headPoseRelativeOffsetTranslation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::get_headPoseRelativeOffsetTranslation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x273c62c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_headPoseRelativeOffsetTranslation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_headPoseRelativeOffsetTranslation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::OVRManager::set_headPoseRelativeOffsetTranslation)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x273c638;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "set_headPoseRelativeOffsetTranslation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_eyeFovPremultipliedAlphaModeEnabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::get_eyeFovPremultipliedAlphaModeEnabled)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x273c750;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_eyeFovPremultipliedAlphaModeEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_eyeFovPremultipliedAlphaModeEnabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::GlobalNamespace::OVRManager::set_eyeFovPremultipliedAlphaModeEnabled)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x273c7a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "set_eyeFovPremultipliedAlphaModeEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_enableMixedReality
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_enableMixedReality)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x273c7f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_enableMixedReality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_enableMixedReality
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(bool)>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_enableMixedReality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x273c800;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_enableMixedReality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_extraHiddenLayers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::LayerMask (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_extraHiddenLayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x273c80c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_extraHiddenLayers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_extraHiddenLayers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(::UnityEngine::LayerMask)>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_extraHiddenLayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x273c814;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_extraHiddenLayers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_extraVisibleLayers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::LayerMask (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_extraVisibleLayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x273c81c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_extraVisibleLayers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_extraVisibleLayers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(::UnityEngine::LayerMask)>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_extraVisibleLayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x273c824;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_extraVisibleLayers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_dynamicCullingMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_dynamicCullingMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x273c82c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_dynamicCullingMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_dynamicCullingMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(bool)>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_dynamicCullingMask)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x273c834;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_dynamicCullingMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_compositionMethod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRManager__CompositionMethod (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_compositionMethod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x273c840;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_compositionMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_compositionMethod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(::GlobalNamespace::__OVRManager__CompositionMethod)>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_compositionMethod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x273c848;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_compositionMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRManager__CompositionMethod>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_externalCompositionBackdropColorRift
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_externalCompositionBackdropColorRift)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x273c850;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_externalCompositionBackdropColorRift",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_externalCompositionBackdropColorRift
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(::UnityEngine::Color)>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_externalCompositionBackdropColorRift)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x273c85c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_externalCompositionBackdropColorRift",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_externalCompositionBackdropColorQuest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_externalCompositionBackdropColorQuest)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x273c868;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_externalCompositionBackdropColorQuest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_externalCompositionBackdropColorQuest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(::UnityEngine::Color)>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_externalCompositionBackdropColorQuest)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x273c874;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_externalCompositionBackdropColorQuest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_capturingCameraDevice
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRManager__CameraDevice (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_capturingCameraDevice)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x273c880;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_capturingCameraDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_capturingCameraDevice
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(::GlobalNamespace::__OVRManager__CameraDevice)>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_capturingCameraDevice)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x273c888;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_capturingCameraDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRManager__CameraDevice>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_flipCameraFrameHorizontally
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_flipCameraFrameHorizontally)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x273c890;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_flipCameraFrameHorizontally",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_flipCameraFrameHorizontally
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(bool)>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_flipCameraFrameHorizontally)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x273c898;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_flipCameraFrameHorizontally",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_flipCameraFrameVertically
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_flipCameraFrameVertically)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x273c8a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_flipCameraFrameVertically",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_flipCameraFrameVertically
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(bool)>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_flipCameraFrameVertically)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x273c8ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_flipCameraFrameVertically",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_handPoseStateLatency
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_handPoseStateLatency)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x273c8b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_handPoseStateLatency",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_handPoseStateLatency
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(float_t)>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_handPoseStateLatency)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x273c8c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_handPoseStateLatency",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_sandwichCompositionRenderLatency
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_sandwichCompositionRenderLatency)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x273c8c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_sandwichCompositionRenderLatency",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_sandwichCompositionRenderLatency
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(float_t)>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_sandwichCompositionRenderLatency)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x273c8d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_sandwichCompositionRenderLatency",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_sandwichCompositionBufferedFrames
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_sandwichCompositionBufferedFrames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x273c8d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_sandwichCompositionBufferedFrames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_sandwichCompositionBufferedFrames
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(int32_t)>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_sandwichCompositionBufferedFrames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x273c8e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_sandwichCompositionBufferedFrames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_chromaKeyColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_chromaKeyColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x273c8e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_chromaKeyColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_chromaKeyColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(::UnityEngine::Color)>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_chromaKeyColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x273c8f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_chromaKeyColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_chromaKeySimilarity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_chromaKeySimilarity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x273c900;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_chromaKeySimilarity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_chromaKeySimilarity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(float_t)>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_chromaKeySimilarity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x273c908;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_chromaKeySimilarity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_chromaKeySmoothRange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_chromaKeySmoothRange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x273c910;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_chromaKeySmoothRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_chromaKeySmoothRange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(float_t)>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_chromaKeySmoothRange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x273c918;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_chromaKeySmoothRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_chromaKeySpillRange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_chromaKeySpillRange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x273c920;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_chromaKeySpillRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_chromaKeySpillRange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(float_t)>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_chromaKeySpillRange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x273c928;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_chromaKeySpillRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_useDynamicLighting
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_useDynamicLighting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x273c930;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_useDynamicLighting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_useDynamicLighting
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(bool)>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_useDynamicLighting)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x273c938;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_useDynamicLighting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_depthQuality
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRManager__DepthQuality (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_depthQuality)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x273c944;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_depthQuality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_depthQuality
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(::GlobalNamespace::__OVRManager__DepthQuality)>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_depthQuality)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x273c94c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_depthQuality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRManager__DepthQuality>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_dynamicLightingSmoothFactor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_dynamicLightingSmoothFactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x273c954;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_dynamicLightingSmoothFactor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_dynamicLightingSmoothFactor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(float_t)>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_dynamicLightingSmoothFactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x273c95c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_dynamicLightingSmoothFactor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_dynamicLightingDepthVariationClampingValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_dynamicLightingDepthVariationClampingValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x273c964;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_dynamicLightingDepthVariationClampingValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_dynamicLightingDepthVariationClampingValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(float_t)>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_dynamicLightingDepthVariationClampingValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x273c96c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_dynamicLightingDepthVariationClampingValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRManager__VirtualGreenScreenType (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x273c974;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(::GlobalNamespace::__OVRManager__VirtualGreenScreenType)>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x273c97c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRManager__VirtualGreenScreenType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x273c984;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenTopY",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenTopY
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(float_t)>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenTopY)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x273c98c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenTopY",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenBottomY
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenBottomY)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x273c994;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenBottomY",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenBottomY
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(float_t)>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenBottomY)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x273c99c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenBottomY",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenApplyDepthCulling
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenApplyDepthCulling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x273c9a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenApplyDepthCulling",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenApplyDepthCulling
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(bool)>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenApplyDepthCulling)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x273c9ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenApplyDepthCulling",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenDepthTolerance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenDepthTolerance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x273c9b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenDepthTolerance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenDepthTolerance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(float_t)>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenDepthTolerance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x273c9c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenDepthTolerance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_mrcActivationMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRManager__MrcActivationMode (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_mrcActivationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x273c9c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_mrcActivationMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_mrcActivationMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(::GlobalNamespace::__OVRManager__MrcActivationMode)>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_mrcActivationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x273c9d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_mrcActivationMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRManager__MrcActivationMode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_instantiateMixedRealityCameraGameObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate* (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_instantiateMixedRealityCameraGameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x273c9d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_instantiateMixedRealityCameraGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_instantiateMixedRealityCameraGameObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate*)>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_instantiateMixedRealityCameraGameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x273c9e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_instantiateMixedRealityCameraGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_xrApi
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRManager__XrApi (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::get_xrApi)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x273c9e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_xrApi",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_xrInstance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::get_xrInstance)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x273ca38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_xrInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_xrSession
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::get_xrSession)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x273ca88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_xrSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_vsyncCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::get_vsyncCount)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x273cad8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_vsyncCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_vsyncCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(int32_t)>(&::GlobalNamespace::OVRManager::set_vsyncCount)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x273cb64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "set_vsyncCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_batteryLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)()>(&::GlobalNamespace::OVRManager::get_batteryLevel)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x273cbf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_batteryLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_batteryTemperature
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)()>(&::GlobalNamespace::OVRManager::get_batteryTemperature)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x273cc80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_batteryTemperature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_batteryStatus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::GlobalNamespace::OVRManager::get_batteryStatus)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x273cd0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_batteryStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_volumeLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)()>(&::GlobalNamespace::OVRManager::get_volumeLevel)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x273cd98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_volumeLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_suggestedCpuPerfLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRManager__ProcessorPerformanceLevel (*)()>(&::GlobalNamespace::OVRManager::get_suggestedCpuPerfLevel)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x273ce24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_suggestedCpuPerfLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_suggestedCpuPerfLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::__OVRManager__ProcessorPerformanceLevel)>(&::GlobalNamespace::OVRManager::set_suggestedCpuPerfLevel)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x273ceb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "set_suggestedCpuPerfLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRManager__ProcessorPerformanceLevel>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_suggestedGpuPerfLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRManager__ProcessorPerformanceLevel (*)()>(&::GlobalNamespace::OVRManager::get_suggestedGpuPerfLevel)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x273cf40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_suggestedGpuPerfLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_suggestedGpuPerfLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::__OVRManager__ProcessorPerformanceLevel)>(&::GlobalNamespace::OVRManager::set_suggestedGpuPerfLevel)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x273cfcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "set_suggestedGpuPerfLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRManager__ProcessorPerformanceLevel>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_cpuLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::GlobalNamespace::OVRManager::get_cpuLevel)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x273d05c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_cpuLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_cpuLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::GlobalNamespace::OVRManager::set_cpuLevel)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x273d0e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "set_cpuLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_gpuLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::GlobalNamespace::OVRManager::get_gpuLevel)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x273d178;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_gpuLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_gpuLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::GlobalNamespace::OVRManager::set_gpuLevel)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x273d204;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "set_gpuLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_isPowerSavingActive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::get_isPowerSavingActive)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x273d294;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_isPowerSavingActive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_eyeTextureFormat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRManager__EyeTextureFormat (*)()>(&::GlobalNamespace::OVRManager::get_eyeTextureFormat)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x273d320;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_eyeTextureFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_eyeTextureFormat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::__OVRManager__EyeTextureFormat)>(&::GlobalNamespace::OVRManager::set_eyeTextureFormat)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x273d370;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "set_eyeTextureFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRManager__EyeTextureFormat>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_eyeTrackedFoveatedRenderingSupported
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::get_eyeTrackedFoveatedRenderingSupported)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x273d3c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_eyeTrackedFoveatedRenderingSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_eyeTrackedFoveatedRenderingEnabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::get_eyeTrackedFoveatedRenderingEnabled)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x273d418;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_eyeTrackedFoveatedRenderingEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_eyeTrackedFoveatedRenderingEnabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::GlobalNamespace::OVRManager::set_eyeTrackedFoveatedRenderingEnabled)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x273d468;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "set_eyeTrackedFoveatedRenderingEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OnPermissionGranted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::OVRManager::OnPermissionGranted)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x273d524;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OnPermissionGranted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_foveatedRenderingLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRManager__FoveatedRenderingLevel (*)()>(&::GlobalNamespace::OVRManager::get_foveatedRenderingLevel)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x273d600;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_foveatedRenderingLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_foveatedRenderingLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::__OVRManager__FoveatedRenderingLevel)>(&::GlobalNamespace::OVRManager::set_foveatedRenderingLevel)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x273d650;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "set_foveatedRenderingLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRManager__FoveatedRenderingLevel>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_fixedFoveatedRenderingSupported
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::get_fixedFoveatedRenderingSupported)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x273d6a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_fixedFoveatedRenderingSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_fixedFoveatedRenderingLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRManager__FixedFoveatedRenderingLevel (*)()>(&::GlobalNamespace::OVRManager::get_fixedFoveatedRenderingLevel)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x273d6f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_fixedFoveatedRenderingLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_fixedFoveatedRenderingLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::__OVRManager__FixedFoveatedRenderingLevel)>(&::GlobalNamespace::OVRManager::set_fixedFoveatedRenderingLevel)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x273d748;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "set_fixedFoveatedRenderingLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRManager__FixedFoveatedRenderingLevel>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_useDynamicFoveatedRendering
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::get_useDynamicFoveatedRendering)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x273d7a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_useDynamicFoveatedRendering",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_useDynamicFoveatedRendering
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::GlobalNamespace::OVRManager::set_useDynamicFoveatedRendering)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x273d7f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "set_useDynamicFoveatedRendering",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_useDynamicFixedFoveatedRendering
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::get_useDynamicFixedFoveatedRendering)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x273d848;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_useDynamicFixedFoveatedRendering",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_useDynamicFixedFoveatedRendering
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::GlobalNamespace::OVRManager::set_useDynamicFixedFoveatedRendering)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x273d898;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "set_useDynamicFixedFoveatedRendering",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_tiledMultiResSupported
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::get_tiledMultiResSupported)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x273d8f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_tiledMultiResSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_tiledMultiResLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRManager__TiledMultiResLevel (*)()>(&::GlobalNamespace::OVRManager::get_tiledMultiResLevel)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x273d940;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_tiledMultiResLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_tiledMultiResLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::__OVRManager__TiledMultiResLevel)>(&::GlobalNamespace::OVRManager::set_tiledMultiResLevel)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x273d990;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "set_tiledMultiResLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRManager__TiledMultiResLevel>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_gpuUtilSupported
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::get_gpuUtilSupported)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x273d9e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_gpuUtilSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_gpuUtilLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)()>(&::GlobalNamespace::OVRManager::get_gpuUtilLevel)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x273da38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_gpuUtilLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_systemHeadsetType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRManager__SystemHeadsetType (*)()>(&::GlobalNamespace::OVRManager::get_systemHeadsetType)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x273dae8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_systemHeadsetType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.SetColorScaleAndOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Vector4, ::UnityEngine::Vector4, bool)>(&::GlobalNamespace::OVRManager::SetColorScaleAndOffset)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x273db38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "SetColorScaleAndOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.SetOpenVRLocalPose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion)>(&::GlobalNamespace::OVRManager::SetOpenVRLocalPose)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x273dbf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "SetOpenVRLocalPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.GetOpenVRControllerOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPose (*)(::UnityEngine::XR::XRNode)>(&::GlobalNamespace::OVRManager::GetOpenVRControllerOffset)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x273dcf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "GetOpenVRControllerOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.SetSpaceWarp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::GlobalNamespace::OVRManager::SetSpaceWarp)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x273dedc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "SetSpaceWarp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.GetSpaceWarp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::GetSpaceWarp)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x273e7c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "GetSpaceWarp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_trackingOriginType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRManager__TrackingOrigin (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::get_trackingOriginType)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x273e820;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_trackingOriginType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_trackingOriginType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(::GlobalNamespace::__OVRManager__TrackingOrigin)>(&::GlobalNamespace::OVRManager::set_trackingOriginType)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x273e8b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "set_trackingOriginType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRManager__TrackingOrigin>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_IsSimultaneousHandsAndControllersSupported
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::get_IsSimultaneousHandsAndControllersSupported)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x273e94c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_IsSimultaneousHandsAndControllersSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_isSupportedPlatform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::get_isSupportedPlatform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x273e96c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_isSupportedPlatform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_isSupportedPlatform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(bool)>(&::GlobalNamespace::OVRManager::set_isSupportedPlatform)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x273e974;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "set_isSupportedPlatform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_isUserPresent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::get_isUserPresent)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x273e980;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_isUserPresent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_isUserPresent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(bool)>(&::GlobalNamespace::OVRManager::set_isUserPresent)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x273ea58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "set_isUserPresent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.RegisterEventListener
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(::GlobalNamespace::__OVRManager__EventListener*)>(&::GlobalNamespace::OVRManager::RegisterEventListener)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x273eabc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "RegisterEventListener",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRManager__EventListener*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.DeregisterEventListener
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(::GlobalNamespace::__OVRManager__EventListener*)>(&::GlobalNamespace::OVRManager::DeregisterEventListener)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x273eb14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "DeregisterEventListener",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRManager__EventListener*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_utilitiesVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Version* (*)()>(&::GlobalNamespace::OVRManager::get_utilitiesVersion)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x273eb6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_utilitiesVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_pluginVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Version* (*)()>(&::GlobalNamespace::OVRManager::get_pluginVersion)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x273ebc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_pluginVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_sdkVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Version* (*)()>(&::GlobalNamespace::OVRManager::get_sdkVersion)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x273ec14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_sdkVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.MixedRealityEnabledFromCmd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::MixedRealityEnabledFromCmd)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x273ec64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "MixedRealityEnabledFromCmd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.UseDirectCompositionFromCmd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::UseDirectCompositionFromCmd)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x273ed10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "UseDirectCompositionFromCmd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.UseExternalCompositionFromCmd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::UseExternalCompositionFromCmd)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x273edbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "UseExternalCompositionFromCmd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.CreateMixedRealityCaptureConfigurationFileFromCmd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::CreateMixedRealityCaptureConfigurationFileFromCmd)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x273ee68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "CreateMixedRealityCaptureConfigurationFileFromCmd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.LoadMixedRealityCaptureConfigurationFileFromCmd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::LoadMixedRealityCaptureConfigurationFileFromCmd)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x273ef14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "LoadMixedRealityCaptureConfigurationFileFromCmd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.IsUnityAlphaOrBetaVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::IsUnityAlphaOrBetaVersion)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x273efc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "IsUnityAlphaOrBetaVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.InitOVRManager
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::InitOVRManager)> {
  constexpr static std::size_t size = 0x10e4;
  constexpr static std::size_t addrs = 0x273f078;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "InitOVRManager",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.InitPermissionRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::InitPermissionRequest)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2740918;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "InitPermissionRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::Awake)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2740be8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.SetCurrentXRDevice
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::SetCurrentXRDevice)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2740c54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "SetCurrentXRDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.GetCurrentDisplaySubsystem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Il2CppObject* (*)()>(&::GlobalNamespace::OVRManager::GetCurrentDisplaySubsystem)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x2740da4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "GetCurrentDisplaySubsystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.GetCurrentDisplaySubsystemDescriptor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::XRDisplaySubsystemDescriptor* (*)()>(&::GlobalNamespace::OVRManager::GetCurrentDisplaySubsystemDescriptor)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x2740f34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "GetCurrentDisplaySubsystemDescriptor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.GetCurrentInputSubsystem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::XRInputSubsystem* (*)()>(&::GlobalNamespace::OVRManager::GetCurrentInputSubsystem)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x27410c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "GetCurrentInputSubsystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.Initialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::Initialize)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x2740688;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::Update)> {
  constexpr static std::size_t size = 0x213c;
  constexpr static std::size_t addrs = 0x2741254;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.UpdateHMDEvents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::UpdateHMDEvents)> {
  constexpr static std::size_t size = 0xaac;
  constexpr static std::size_t addrs = 0x27435c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "UpdateHMDEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.FindMainCamera
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Camera* (*)()>(&::GlobalNamespace::OVRManager::FindMainCamera)> {
  constexpr static std::size_t size = 0x678;
  constexpr static std::size_t addrs = 0x273e150;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "FindMainCamera",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OnDisable)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x274475c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.LateUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::LateUpdate)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x2744814;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.FixedUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::FixedUpdate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2744a00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "FixedUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OnDestroy)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2744a50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OnApplicationPause
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(bool)>(&::GlobalNamespace::OVRManager::OnApplicationPause)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2744aec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OnApplicationPause",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OnApplicationFocus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(bool)>(&::GlobalNamespace::OVRManager::OnApplicationFocus)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2744b74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OnApplicationFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OnApplicationQuit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OnApplicationQuit)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2744bfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OnApplicationQuit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.ReturnToLauncher
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::ReturnToLauncher)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2744c64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "ReturnToLauncher",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.PlatformUIConfirmQuit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::GlobalNamespace::OVRManager::PlatformUIConfirmQuit)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2744cb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "PlatformUIConfirmQuit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.StaticInitializeMixedRealityCapture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::OVRMixedRealityCaptureConfiguration*)>(&::GlobalNamespace::OVRManager::StaticInitializeMixedRealityCapture)> {
  constexpr static std::size_t size = 0x52c;
  constexpr static std::size_t addrs = 0x274015c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "StaticInitializeMixedRealityCapture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRMixedRealityCaptureConfiguration*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.StaticUpdateMixedRealityCapture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::OVRMixedRealityCaptureConfiguration*, ::UnityEngine::GameObject*, ::GlobalNamespace::__OVRManager__TrackingOrigin)>(&::GlobalNamespace::OVRManager::StaticUpdateMixedRealityCapture)> {
  constexpr static std::size_t size = 0x4c4;
  constexpr static std::size_t addrs = 0x2744074;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "StaticUpdateMixedRealityCapture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRMixedRealityCaptureConfiguration*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRManager__TrackingOrigin>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.StaticShutdownMixedRealityCapture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::OVRMixedRealityCaptureConfiguration*)>(&::GlobalNamespace::OVRManager::StaticShutdownMixedRealityCapture)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x2743390;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "StaticShutdownMixedRealityCapture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRMixedRealityCaptureConfiguration*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.PassthroughInitializedOrPending
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::__OVRManager__PassthroughInitializationState)>(&::GlobalNamespace::OVRManager::PassthroughInitializedOrPending)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2745304;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "PassthroughInitializedOrPending",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRManager__PassthroughInitializationState>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.InitializeInsightPassthrough
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::InitializeInsightPassthrough)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x2740a04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "InitializeInsightPassthrough",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.ShutdownInsightPassthrough
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::GlobalNamespace::OVRManager::ShutdownInsightPassthrough)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2743498;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "ShutdownInsightPassthrough",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.UpdateInsightPassthrough
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::GlobalNamespace::OVRManager::UpdateInsightPassthrough)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x2744538;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "UpdateInsightPassthrough",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.IsMultimodalHandsControllersSupported
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::IsMultimodalHandsControllersSupported)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2745314;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "IsMultimodalHandsControllersSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.IsInsightPassthroughSupported
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::IsInsightPassthroughSupported)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2745364;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "IsInsightPassthroughSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.GetPassthroughCapabilities
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRManager__PassthroughCapabilities* (*)()>(&::GlobalNamespace::OVRManager::GetPassthroughCapabilities)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x27453b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "GetPassthroughCapabilities",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.IsInsightPassthroughInitialized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::IsInsightPassthroughInitialized)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2745550;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "IsInsightPassthroughInitialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.HasInsightPassthroughInitFailed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::HasInsightPassthroughInitFailed)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x27455b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "HasInsightPassthroughInitFailed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.IsInsightPassthroughInitPending
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::IsInsightPassthroughInitPending)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2745610;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "IsInsightPassthroughInitPending",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.IsPassthroughRecommended
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::IsPassthroughRecommended)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2745670;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "IsPassthroughRecommended",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::_ctor)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x27456dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::OVRMixedRealityCaptureConfiguration"
constexpr  GlobalNamespace::OVRManager::operator ::GlobalNamespace::OVRMixedRealityCaptureConfiguration*() noexcept {
return static_cast<::GlobalNamespace::OVRMixedRealityCaptureConfiguration*>(static_cast<void*>(this));
}
inline void GlobalNamespace::OVRManager::setStaticF__instance_k__BackingField(::GlobalNamespace::OVRManager*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::OVRManager*, "<instance>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<::GlobalNamespace::OVRManager*>(value));
}
inline ::GlobalNamespace::OVRManager* GlobalNamespace::OVRManager::getStaticF__instance_k__BackingField()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::OVRManager*, "<instance>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF__display_k__BackingField(::GlobalNamespace::OVRDisplay*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::OVRDisplay*, "<display>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<::GlobalNamespace::OVRDisplay*>(value));
}
inline ::GlobalNamespace::OVRDisplay* GlobalNamespace::OVRManager::getStaticF__display_k__BackingField()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::OVRDisplay*, "<display>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF__tracker_k__BackingField(::GlobalNamespace::OVRTracker*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::OVRTracker*, "<tracker>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<::GlobalNamespace::OVRTracker*>(value));
}
inline ::GlobalNamespace::OVRTracker* GlobalNamespace::OVRManager::getStaticF__tracker_k__BackingField()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::OVRTracker*, "<tracker>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF__boundary_k__BackingField(::GlobalNamespace::OVRBoundary*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::OVRBoundary*, "<boundary>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<::GlobalNamespace::OVRBoundary*>(value));
}
inline ::GlobalNamespace::OVRBoundary* GlobalNamespace::OVRManager::getStaticF__boundary_k__BackingField()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::OVRBoundary*, "<boundary>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF__runtimeSettings_k__BackingField(::GlobalNamespace::OVRRuntimeSettings*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::OVRRuntimeSettings*, "<runtimeSettings>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<::GlobalNamespace::OVRRuntimeSettings*>(value));
}
inline ::GlobalNamespace::OVRRuntimeSettings* GlobalNamespace::OVRManager::getStaticF__runtimeSettings_k__BackingField()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::OVRRuntimeSettings*, "<runtimeSettings>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF__profile(::GlobalNamespace::OVRProfile*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::OVRProfile*, "_profile", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<::GlobalNamespace::OVRProfile*>(value));
}
inline ::GlobalNamespace::OVRProfile* GlobalNamespace::OVRManager::getStaticF__profile()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::OVRProfile*, "_profile", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
constexpr void GlobalNamespace::OVRManager::__set_disabledCameras(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Camera*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Camera*>*, 0x18>(this, std::forward<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Camera*>*>(value));
}
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Camera*>* GlobalNamespace::OVRManager::__get_disabledCameras()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Camera*>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Camera*>*> GlobalNamespace::OVRManager::__get_disabledCameras() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Camera*>*, 0x18>(this);
}
constexpr void GlobalNamespace::OVRManager::__set_prevTimeScale(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::OVRManager::__get_prevTimeScale()  {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr float_t const& GlobalNamespace::OVRManager::__get_prevTimeScale() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
inline void GlobalNamespace::OVRManager::setStaticF_HMDAcquired(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "HMDAcquired", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::OVRManager::getStaticF_HMDAcquired()  {
return ::cordl_internals::getStaticField<::System::Action*, "HMDAcquired", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_HMDLost(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "HMDLost", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::OVRManager::getStaticF_HMDLost()  {
return ::cordl_internals::getStaticField<::System::Action*, "HMDLost", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_HMDMounted(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "HMDMounted", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::OVRManager::getStaticF_HMDMounted()  {
return ::cordl_internals::getStaticField<::System::Action*, "HMDMounted", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_HMDUnmounted(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "HMDUnmounted", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::OVRManager::getStaticF_HMDUnmounted()  {
return ::cordl_internals::getStaticField<::System::Action*, "HMDUnmounted", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_VrFocusAcquired(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "VrFocusAcquired", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::OVRManager::getStaticF_VrFocusAcquired()  {
return ::cordl_internals::getStaticField<::System::Action*, "VrFocusAcquired", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_VrFocusLost(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "VrFocusLost", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::OVRManager::getStaticF_VrFocusLost()  {
return ::cordl_internals::getStaticField<::System::Action*, "VrFocusLost", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_InputFocusAcquired(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "InputFocusAcquired", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::OVRManager::getStaticF_InputFocusAcquired()  {
return ::cordl_internals::getStaticField<::System::Action*, "InputFocusAcquired", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_InputFocusLost(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "InputFocusLost", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::OVRManager::getStaticF_InputFocusLost()  {
return ::cordl_internals::getStaticField<::System::Action*, "InputFocusLost", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_AudioOutChanged(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "AudioOutChanged", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::OVRManager::getStaticF_AudioOutChanged()  {
return ::cordl_internals::getStaticField<::System::Action*, "AudioOutChanged", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_AudioInChanged(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "AudioInChanged", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::OVRManager::getStaticF_AudioInChanged()  {
return ::cordl_internals::getStaticField<::System::Action*, "AudioInChanged", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_TrackingAcquired(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "TrackingAcquired", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::OVRManager::getStaticF_TrackingAcquired()  {
return ::cordl_internals::getStaticField<::System::Action*, "TrackingAcquired", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_TrackingLost(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "TrackingLost", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::OVRManager::getStaticF_TrackingLost()  {
return ::cordl_internals::getStaticField<::System::Action*, "TrackingLost", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_DisplayRefreshRateChanged(::System::Action_2<float_t,float_t>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<float_t,float_t>*, "DisplayRefreshRateChanged", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<::System::Action_2<float_t,float_t>*>(value));
}
inline ::System::Action_2<float_t,float_t>* GlobalNamespace::OVRManager::getStaticF_DisplayRefreshRateChanged()  {
return ::cordl_internals::getStaticField<::System::Action_2<float_t,float_t>*, "DisplayRefreshRateChanged", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_SpatialAnchorCreateComplete(::System::Action_4<uint64_t,bool,::GlobalNamespace::OVRSpace,::System::Guid>*  value)  {
::cordl_internals::setStaticField<::System::Action_4<uint64_t,bool,::GlobalNamespace::OVRSpace,::System::Guid>*, "SpatialAnchorCreateComplete", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<::System::Action_4<uint64_t,bool,::GlobalNamespace::OVRSpace,::System::Guid>*>(value));
}
inline ::System::Action_4<uint64_t,bool,::GlobalNamespace::OVRSpace,::System::Guid>* GlobalNamespace::OVRManager::getStaticF_SpatialAnchorCreateComplete()  {
return ::cordl_internals::getStaticField<::System::Action_4<uint64_t,bool,::GlobalNamespace::OVRSpace,::System::Guid>*, "SpatialAnchorCreateComplete", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_SpaceSetComponentStatusComplete(::System::Action_6<uint64_t,bool,::GlobalNamespace::OVRSpace,::System::Guid,::GlobalNamespace::__OVRPlugin__SpaceComponentType,bool>*  value)  {
::cordl_internals::setStaticField<::System::Action_6<uint64_t,bool,::GlobalNamespace::OVRSpace,::System::Guid,::GlobalNamespace::__OVRPlugin__SpaceComponentType,bool>*, "SpaceSetComponentStatusComplete", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<::System::Action_6<uint64_t,bool,::GlobalNamespace::OVRSpace,::System::Guid,::GlobalNamespace::__OVRPlugin__SpaceComponentType,bool>*>(value));
}
inline ::System::Action_6<uint64_t,bool,::GlobalNamespace::OVRSpace,::System::Guid,::GlobalNamespace::__OVRPlugin__SpaceComponentType,bool>* GlobalNamespace::OVRManager::getStaticF_SpaceSetComponentStatusComplete()  {
return ::cordl_internals::getStaticField<::System::Action_6<uint64_t,bool,::GlobalNamespace::OVRSpace,::System::Guid,::GlobalNamespace::__OVRPlugin__SpaceComponentType,bool>*, "SpaceSetComponentStatusComplete", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_SpaceQueryResults(::System::Action_1<uint64_t>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<uint64_t>*, "SpaceQueryResults", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<::System::Action_1<uint64_t>*>(value));
}
inline ::System::Action_1<uint64_t>* GlobalNamespace::OVRManager::getStaticF_SpaceQueryResults()  {
return ::cordl_internals::getStaticField<::System::Action_1<uint64_t>*, "SpaceQueryResults", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_SpaceQueryComplete(::System::Action_2<uint64_t,bool>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<uint64_t,bool>*, "SpaceQueryComplete", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<::System::Action_2<uint64_t,bool>*>(value));
}
inline ::System::Action_2<uint64_t,bool>* GlobalNamespace::OVRManager::getStaticF_SpaceQueryComplete()  {
return ::cordl_internals::getStaticField<::System::Action_2<uint64_t,bool>*, "SpaceQueryComplete", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_SpaceSaveComplete(::System::Action_4<uint64_t,::GlobalNamespace::OVRSpace,bool,::System::Guid>*  value)  {
::cordl_internals::setStaticField<::System::Action_4<uint64_t,::GlobalNamespace::OVRSpace,bool,::System::Guid>*, "SpaceSaveComplete", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<::System::Action_4<uint64_t,::GlobalNamespace::OVRSpace,bool,::System::Guid>*>(value));
}
inline ::System::Action_4<uint64_t,::GlobalNamespace::OVRSpace,bool,::System::Guid>* GlobalNamespace::OVRManager::getStaticF_SpaceSaveComplete()  {
return ::cordl_internals::getStaticField<::System::Action_4<uint64_t,::GlobalNamespace::OVRSpace,bool,::System::Guid>*, "SpaceSaveComplete", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_SpaceEraseComplete(::System::Action_4<uint64_t,bool,::System::Guid,::GlobalNamespace::__OVRPlugin__SpaceStorageLocation>*  value)  {
::cordl_internals::setStaticField<::System::Action_4<uint64_t,bool,::System::Guid,::GlobalNamespace::__OVRPlugin__SpaceStorageLocation>*, "SpaceEraseComplete", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<::System::Action_4<uint64_t,bool,::System::Guid,::GlobalNamespace::__OVRPlugin__SpaceStorageLocation>*>(value));
}
inline ::System::Action_4<uint64_t,bool,::System::Guid,::GlobalNamespace::__OVRPlugin__SpaceStorageLocation>* GlobalNamespace::OVRManager::getStaticF_SpaceEraseComplete()  {
return ::cordl_internals::getStaticField<::System::Action_4<uint64_t,bool,::System::Guid,::GlobalNamespace::__OVRPlugin__SpaceStorageLocation>*, "SpaceEraseComplete", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_ShareSpacesComplete(::System::Action_2<uint64_t,::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<uint64_t,::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*, "ShareSpacesComplete", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<::System::Action_2<uint64_t,::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*>(value));
}
inline ::System::Action_2<uint64_t,::GlobalNamespace::__OVRSpatialAnchor__OperationResult>* GlobalNamespace::OVRManager::getStaticF_ShareSpacesComplete()  {
return ::cordl_internals::getStaticField<::System::Action_2<uint64_t,::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*, "ShareSpacesComplete", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_SpaceListSaveComplete(::System::Action_2<uint64_t,::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<uint64_t,::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*, "SpaceListSaveComplete", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<::System::Action_2<uint64_t,::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*>(value));
}
inline ::System::Action_2<uint64_t,::GlobalNamespace::__OVRSpatialAnchor__OperationResult>* GlobalNamespace::OVRManager::getStaticF_SpaceListSaveComplete()  {
return ::cordl_internals::getStaticField<::System::Action_2<uint64_t,::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*, "SpaceListSaveComplete", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_SceneCaptureComplete(::System::Action_2<uint64_t,bool>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<uint64_t,bool>*, "SceneCaptureComplete", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<::System::Action_2<uint64_t,bool>*>(value));
}
inline ::System::Action_2<uint64_t,bool>* GlobalNamespace::OVRManager::getStaticF_SceneCaptureComplete()  {
return ::cordl_internals::getStaticField<::System::Action_2<uint64_t,bool>*, "SceneCaptureComplete", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_HSWDismissed(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "HSWDismissed", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::OVRManager::getStaticF_HSWDismissed()  {
return ::cordl_internals::getStaticField<::System::Action*, "HSWDismissed", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF__isHmdPresentCached(bool  value)  {
::cordl_internals::setStaticField<bool, "_isHmdPresentCached", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<bool>(value));
}
inline bool GlobalNamespace::OVRManager::getStaticF__isHmdPresentCached()  {
return ::cordl_internals::getStaticField<bool, "_isHmdPresentCached", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF__isHmdPresent(bool  value)  {
::cordl_internals::setStaticField<bool, "_isHmdPresent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<bool>(value));
}
inline bool GlobalNamespace::OVRManager::getStaticF__isHmdPresent()  {
return ::cordl_internals::getStaticField<bool, "_isHmdPresent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF__wasHmdPresent(bool  value)  {
::cordl_internals::setStaticField<bool, "_wasHmdPresent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<bool>(value));
}
inline bool GlobalNamespace::OVRManager::getStaticF__wasHmdPresent()  {
return ::cordl_internals::getStaticField<bool, "_wasHmdPresent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF__hasVrFocusCached(bool  value)  {
::cordl_internals::setStaticField<bool, "_hasVrFocusCached", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<bool>(value));
}
inline bool GlobalNamespace::OVRManager::getStaticF__hasVrFocusCached()  {
return ::cordl_internals::getStaticField<bool, "_hasVrFocusCached", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF__hasVrFocus(bool  value)  {
::cordl_internals::setStaticField<bool, "_hasVrFocus", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<bool>(value));
}
inline bool GlobalNamespace::OVRManager::getStaticF__hasVrFocus()  {
return ::cordl_internals::getStaticField<bool, "_hasVrFocus", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF__hadVrFocus(bool  value)  {
::cordl_internals::setStaticField<bool, "_hadVrFocus", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<bool>(value));
}
inline bool GlobalNamespace::OVRManager::getStaticF__hadVrFocus()  {
return ::cordl_internals::getStaticField<bool, "_hadVrFocus", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF__hadInputFocus(bool  value)  {
::cordl_internals::setStaticField<bool, "_hadInputFocus", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<bool>(value));
}
inline bool GlobalNamespace::OVRManager::getStaticF__hadInputFocus()  {
return ::cordl_internals::getStaticField<bool, "_hadInputFocus", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
constexpr void GlobalNamespace::OVRManager::__set_useRecommendedMSAALevel(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x24>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVRManager::__get_useRecommendedMSAALevel()  {
return ::cordl_internals::getInstanceField<bool, 0x24>(this);
}
constexpr bool const& GlobalNamespace::OVRManager::__get_useRecommendedMSAALevel() const {
return ::cordl_internals::getInstanceField<bool, 0x24>(this);
}
constexpr void GlobalNamespace::OVRManager::__set__monoscopic(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x25>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVRManager::__get__monoscopic()  {
return ::cordl_internals::getInstanceField<bool, 0x25>(this);
}
constexpr bool const& GlobalNamespace::OVRManager::__get__monoscopic() const {
return ::cordl_internals::getInstanceField<bool, 0x25>(this);
}
constexpr void GlobalNamespace::OVRManager::__set__sharpenType(::GlobalNamespace::__OVRPlugin__LayerSharpenType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRPlugin__LayerSharpenType, 0x28>(this, std::forward<::GlobalNamespace::__OVRPlugin__LayerSharpenType>(value));
}
constexpr ::GlobalNamespace::__OVRPlugin__LayerSharpenType& GlobalNamespace::OVRManager::__get__sharpenType()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRPlugin__LayerSharpenType, 0x28>(this);
}
constexpr ::GlobalNamespace::__OVRPlugin__LayerSharpenType const& GlobalNamespace::OVRManager::__get__sharpenType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRPlugin__LayerSharpenType, 0x28>(this);
}
constexpr void GlobalNamespace::OVRManager::__set__colorGamut(::GlobalNamespace::__OVRManager__ColorSpace  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRManager__ColorSpace, 0x2c>(this, std::forward<::GlobalNamespace::__OVRManager__ColorSpace>(value));
}
constexpr ::GlobalNamespace::__OVRManager__ColorSpace& GlobalNamespace::OVRManager::__get__colorGamut()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRManager__ColorSpace, 0x2c>(this);
}
constexpr ::GlobalNamespace::__OVRManager__ColorSpace const& GlobalNamespace::OVRManager::__get__colorGamut() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRManager__ColorSpace, 0x2c>(this);
}
constexpr void GlobalNamespace::OVRManager::__set_enableDynamicResolution(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVRManager::__get_enableDynamicResolution()  {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
constexpr bool const& GlobalNamespace::OVRManager::__get_enableDynamicResolution() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
constexpr void GlobalNamespace::OVRManager::__set_minDynamicResolutionScale(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x34>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::OVRManager::__get_minDynamicResolutionScale()  {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this);
}
constexpr float_t const& GlobalNamespace::OVRManager::__get_minDynamicResolutionScale() const {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this);
}
constexpr void GlobalNamespace::OVRManager::__set_maxDynamicResolutionScale(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x38>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::OVRManager::__get_maxDynamicResolutionScale()  {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this);
}
constexpr float_t const& GlobalNamespace::OVRManager::__get_maxDynamicResolutionScale() const {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this);
}
constexpr void GlobalNamespace::OVRManager::__set_minRenderScale(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x3c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::OVRManager::__get_minRenderScale()  {
return ::cordl_internals::getInstanceField<float_t, 0x3c>(this);
}
constexpr float_t const& GlobalNamespace::OVRManager::__get_minRenderScale() const {
return ::cordl_internals::getInstanceField<float_t, 0x3c>(this);
}
constexpr void GlobalNamespace::OVRManager::__set_maxRenderScale(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x40>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::OVRManager::__get_maxRenderScale()  {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this);
}
constexpr float_t const& GlobalNamespace::OVRManager::__get_maxRenderScale() const {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this);
}
constexpr void GlobalNamespace::OVRManager::__set__headPoseRelativeOffsetRotation(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x44>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::OVRManager::__get__headPoseRelativeOffsetRotation()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x44>(this);
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::OVRManager::__get__headPoseRelativeOffsetRotation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x44>(this);
}
constexpr void GlobalNamespace::OVRManager::__set__headPoseRelativeOffsetTranslation(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x50>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::OVRManager::__get__headPoseRelativeOffsetTranslation()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x50>(this);
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::OVRManager::__get__headPoseRelativeOffsetTranslation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x50>(this);
}
constexpr void GlobalNamespace::OVRManager::__set_profilerTcpPort(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x5c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::OVRManager::__get_profilerTcpPort()  {
return ::cordl_internals::getInstanceField<int32_t, 0x5c>(this);
}
constexpr int32_t const& GlobalNamespace::OVRManager::__get_profilerTcpPort() const {
return ::cordl_internals::getInstanceField<int32_t, 0x5c>(this);
}
constexpr void GlobalNamespace::OVRManager::__set_expandMixedRealityCapturePropertySheet(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x60>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVRManager::__get_expandMixedRealityCapturePropertySheet()  {
return ::cordl_internals::getInstanceField<bool, 0x60>(this);
}
constexpr bool const& GlobalNamespace::OVRManager::__get_expandMixedRealityCapturePropertySheet() const {
return ::cordl_internals::getInstanceField<bool, 0x60>(this);
}
constexpr void GlobalNamespace::OVRManager::__set_enableMixedReality(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x61>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVRManager::__get_enableMixedReality()  {
return ::cordl_internals::getInstanceField<bool, 0x61>(this);
}
constexpr bool const& GlobalNamespace::OVRManager::__get_enableMixedReality() const {
return ::cordl_internals::getInstanceField<bool, 0x61>(this);
}
constexpr void GlobalNamespace::OVRManager::__set_compositionMethod(::GlobalNamespace::__OVRManager__CompositionMethod  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRManager__CompositionMethod, 0x64>(this, std::forward<::GlobalNamespace::__OVRManager__CompositionMethod>(value));
}
constexpr ::GlobalNamespace::__OVRManager__CompositionMethod& GlobalNamespace::OVRManager::__get_compositionMethod()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRManager__CompositionMethod, 0x64>(this);
}
constexpr ::GlobalNamespace::__OVRManager__CompositionMethod const& GlobalNamespace::OVRManager::__get_compositionMethod() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRManager__CompositionMethod, 0x64>(this);
}
constexpr void GlobalNamespace::OVRManager::__set_extraHiddenLayers(::UnityEngine::LayerMask  value)  {
::cordl_internals::setInstanceField<::UnityEngine::LayerMask, 0x68>(this, std::forward<::UnityEngine::LayerMask>(value));
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::OVRManager::__get_extraHiddenLayers()  {
return ::cordl_internals::getInstanceField<::UnityEngine::LayerMask, 0x68>(this);
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::OVRManager::__get_extraHiddenLayers() const {
return ::cordl_internals::getInstanceField<::UnityEngine::LayerMask, 0x68>(this);
}
constexpr void GlobalNamespace::OVRManager::__set_extraVisibleLayers(::UnityEngine::LayerMask  value)  {
::cordl_internals::setInstanceField<::UnityEngine::LayerMask, 0x6c>(this, std::forward<::UnityEngine::LayerMask>(value));
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::OVRManager::__get_extraVisibleLayers()  {
return ::cordl_internals::getInstanceField<::UnityEngine::LayerMask, 0x6c>(this);
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::OVRManager::__get_extraVisibleLayers() const {
return ::cordl_internals::getInstanceField<::UnityEngine::LayerMask, 0x6c>(this);
}
constexpr void GlobalNamespace::OVRManager::__set_dynamicCullingMask(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x70>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVRManager::__get_dynamicCullingMask()  {
return ::cordl_internals::getInstanceField<bool, 0x70>(this);
}
constexpr bool const& GlobalNamespace::OVRManager::__get_dynamicCullingMask() const {
return ::cordl_internals::getInstanceField<bool, 0x70>(this);
}
constexpr void GlobalNamespace::OVRManager::__set_externalCompositionBackdropColorRift(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x74>(this, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& GlobalNamespace::OVRManager::__get_externalCompositionBackdropColorRift()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x74>(this);
}
constexpr ::UnityEngine::Color const& GlobalNamespace::OVRManager::__get_externalCompositionBackdropColorRift() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x74>(this);
}
constexpr void GlobalNamespace::OVRManager::__set_externalCompositionBackdropColorQuest(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x84>(this, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& GlobalNamespace::OVRManager::__get_externalCompositionBackdropColorQuest()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x84>(this);
}
constexpr ::UnityEngine::Color const& GlobalNamespace::OVRManager::__get_externalCompositionBackdropColorQuest() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x84>(this);
}
constexpr void GlobalNamespace::OVRManager::__set_capturingCameraDevice(::GlobalNamespace::__OVRManager__CameraDevice  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRManager__CameraDevice, 0x94>(this, std::forward<::GlobalNamespace::__OVRManager__CameraDevice>(value));
}
constexpr ::GlobalNamespace::__OVRManager__CameraDevice& GlobalNamespace::OVRManager::__get_capturingCameraDevice()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRManager__CameraDevice, 0x94>(this);
}
constexpr ::GlobalNamespace::__OVRManager__CameraDevice const& GlobalNamespace::OVRManager::__get_capturingCameraDevice() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRManager__CameraDevice, 0x94>(this);
}
constexpr void GlobalNamespace::OVRManager::__set_flipCameraFrameHorizontally(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x98>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVRManager::__get_flipCameraFrameHorizontally()  {
return ::cordl_internals::getInstanceField<bool, 0x98>(this);
}
constexpr bool const& GlobalNamespace::OVRManager::__get_flipCameraFrameHorizontally() const {
return ::cordl_internals::getInstanceField<bool, 0x98>(this);
}
constexpr void GlobalNamespace::OVRManager::__set_flipCameraFrameVertically(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x99>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVRManager::__get_flipCameraFrameVertically()  {
return ::cordl_internals::getInstanceField<bool, 0x99>(this);
}
constexpr bool const& GlobalNamespace::OVRManager::__get_flipCameraFrameVertically() const {
return ::cordl_internals::getInstanceField<bool, 0x99>(this);
}
constexpr void GlobalNamespace::OVRManager::__set_handPoseStateLatency(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x9c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::OVRManager::__get_handPoseStateLatency()  {
return ::cordl_internals::getInstanceField<float_t, 0x9c>(this);
}
constexpr float_t const& GlobalNamespace::OVRManager::__get_handPoseStateLatency() const {
return ::cordl_internals::getInstanceField<float_t, 0x9c>(this);
}
constexpr void GlobalNamespace::OVRManager::__set_sandwichCompositionRenderLatency(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0xa0>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::OVRManager::__get_sandwichCompositionRenderLatency()  {
return ::cordl_internals::getInstanceField<float_t, 0xa0>(this);
}
constexpr float_t const& GlobalNamespace::OVRManager::__get_sandwichCompositionRenderLatency() const {
return ::cordl_internals::getInstanceField<float_t, 0xa0>(this);
}
constexpr void GlobalNamespace::OVRManager::__set_sandwichCompositionBufferedFrames(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0xa4>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::OVRManager::__get_sandwichCompositionBufferedFrames()  {
return ::cordl_internals::getInstanceField<int32_t, 0xa4>(this);
}
constexpr int32_t const& GlobalNamespace::OVRManager::__get_sandwichCompositionBufferedFrames() const {
return ::cordl_internals::getInstanceField<int32_t, 0xa4>(this);
}
constexpr void GlobalNamespace::OVRManager::__set_chromaKeyColor(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0xa8>(this, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& GlobalNamespace::OVRManager::__get_chromaKeyColor()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0xa8>(this);
}
constexpr ::UnityEngine::Color const& GlobalNamespace::OVRManager::__get_chromaKeyColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0xa8>(this);
}
constexpr void GlobalNamespace::OVRManager::__set_chromaKeySimilarity(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0xb8>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::OVRManager::__get_chromaKeySimilarity()  {
return ::cordl_internals::getInstanceField<float_t, 0xb8>(this);
}
constexpr float_t const& GlobalNamespace::OVRManager::__get_chromaKeySimilarity() const {
return ::cordl_internals::getInstanceField<float_t, 0xb8>(this);
}
constexpr void GlobalNamespace::OVRManager::__set_chromaKeySmoothRange(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0xbc>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::OVRManager::__get_chromaKeySmoothRange()  {
return ::cordl_internals::getInstanceField<float_t, 0xbc>(this);
}
constexpr float_t const& GlobalNamespace::OVRManager::__get_chromaKeySmoothRange() const {
return ::cordl_internals::getInstanceField<float_t, 0xbc>(this);
}
constexpr void GlobalNamespace::OVRManager::__set_chromaKeySpillRange(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0xc0>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::OVRManager::__get_chromaKeySpillRange()  {
return ::cordl_internals::getInstanceField<float_t, 0xc0>(this);
}
constexpr float_t const& GlobalNamespace::OVRManager::__get_chromaKeySpillRange() const {
return ::cordl_internals::getInstanceField<float_t, 0xc0>(this);
}
constexpr void GlobalNamespace::OVRManager::__set_useDynamicLighting(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xc4>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVRManager::__get_useDynamicLighting()  {
return ::cordl_internals::getInstanceField<bool, 0xc4>(this);
}
constexpr bool const& GlobalNamespace::OVRManager::__get_useDynamicLighting() const {
return ::cordl_internals::getInstanceField<bool, 0xc4>(this);
}
constexpr void GlobalNamespace::OVRManager::__set_depthQuality(::GlobalNamespace::__OVRManager__DepthQuality  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRManager__DepthQuality, 0xc8>(this, std::forward<::GlobalNamespace::__OVRManager__DepthQuality>(value));
}
constexpr ::GlobalNamespace::__OVRManager__DepthQuality& GlobalNamespace::OVRManager::__get_depthQuality()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRManager__DepthQuality, 0xc8>(this);
}
constexpr ::GlobalNamespace::__OVRManager__DepthQuality const& GlobalNamespace::OVRManager::__get_depthQuality() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRManager__DepthQuality, 0xc8>(this);
}
constexpr void GlobalNamespace::OVRManager::__set_dynamicLightingSmoothFactor(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0xcc>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::OVRManager::__get_dynamicLightingSmoothFactor()  {
return ::cordl_internals::getInstanceField<float_t, 0xcc>(this);
}
constexpr float_t const& GlobalNamespace::OVRManager::__get_dynamicLightingSmoothFactor() const {
return ::cordl_internals::getInstanceField<float_t, 0xcc>(this);
}
constexpr void GlobalNamespace::OVRManager::__set_dynamicLightingDepthVariationClampingValue(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0xd0>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::OVRManager::__get_dynamicLightingDepthVariationClampingValue()  {
return ::cordl_internals::getInstanceField<float_t, 0xd0>(this);
}
constexpr float_t const& GlobalNamespace::OVRManager::__get_dynamicLightingDepthVariationClampingValue() const {
return ::cordl_internals::getInstanceField<float_t, 0xd0>(this);
}
constexpr void GlobalNamespace::OVRManager::__set_virtualGreenScreenType(::GlobalNamespace::__OVRManager__VirtualGreenScreenType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRManager__VirtualGreenScreenType, 0xd4>(this, std::forward<::GlobalNamespace::__OVRManager__VirtualGreenScreenType>(value));
}
constexpr ::GlobalNamespace::__OVRManager__VirtualGreenScreenType& GlobalNamespace::OVRManager::__get_virtualGreenScreenType()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRManager__VirtualGreenScreenType, 0xd4>(this);
}
constexpr ::GlobalNamespace::__OVRManager__VirtualGreenScreenType const& GlobalNamespace::OVRManager::__get_virtualGreenScreenType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRManager__VirtualGreenScreenType, 0xd4>(this);
}
constexpr void GlobalNamespace::OVRManager::__set_virtualGreenScreenTopY(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0xd8>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::OVRManager::__get_virtualGreenScreenTopY()  {
return ::cordl_internals::getInstanceField<float_t, 0xd8>(this);
}
constexpr float_t const& GlobalNamespace::OVRManager::__get_virtualGreenScreenTopY() const {
return ::cordl_internals::getInstanceField<float_t, 0xd8>(this);
}
constexpr void GlobalNamespace::OVRManager::__set_virtualGreenScreenBottomY(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0xdc>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::OVRManager::__get_virtualGreenScreenBottomY()  {
return ::cordl_internals::getInstanceField<float_t, 0xdc>(this);
}
constexpr float_t const& GlobalNamespace::OVRManager::__get_virtualGreenScreenBottomY() const {
return ::cordl_internals::getInstanceField<float_t, 0xdc>(this);
}
constexpr void GlobalNamespace::OVRManager::__set_virtualGreenScreenApplyDepthCulling(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xe0>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVRManager::__get_virtualGreenScreenApplyDepthCulling()  {
return ::cordl_internals::getInstanceField<bool, 0xe0>(this);
}
constexpr bool const& GlobalNamespace::OVRManager::__get_virtualGreenScreenApplyDepthCulling() const {
return ::cordl_internals::getInstanceField<bool, 0xe0>(this);
}
constexpr void GlobalNamespace::OVRManager::__set_virtualGreenScreenDepthTolerance(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0xe4>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::OVRManager::__get_virtualGreenScreenDepthTolerance()  {
return ::cordl_internals::getInstanceField<float_t, 0xe4>(this);
}
constexpr float_t const& GlobalNamespace::OVRManager::__get_virtualGreenScreenDepthTolerance() const {
return ::cordl_internals::getInstanceField<float_t, 0xe4>(this);
}
constexpr void GlobalNamespace::OVRManager::__set_mrcActivationMode(::GlobalNamespace::__OVRManager__MrcActivationMode  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRManager__MrcActivationMode, 0xe8>(this, std::forward<::GlobalNamespace::__OVRManager__MrcActivationMode>(value));
}
constexpr ::GlobalNamespace::__OVRManager__MrcActivationMode& GlobalNamespace::OVRManager::__get_mrcActivationMode()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRManager__MrcActivationMode, 0xe8>(this);
}
constexpr ::GlobalNamespace::__OVRManager__MrcActivationMode const& GlobalNamespace::OVRManager::__get_mrcActivationMode() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRManager__MrcActivationMode, 0xe8>(this);
}
constexpr void GlobalNamespace::OVRManager::__set_instantiateMixedRealityCameraGameObject(::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate*, 0xf0>(this, std::forward<::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate*>(value));
}
constexpr ::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate* GlobalNamespace::OVRManager::__get_instantiateMixedRealityCameraGameObject()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate*, 0xf0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate*> GlobalNamespace::OVRManager::__get_instantiateMixedRealityCameraGameObject() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate*, 0xf0>(this);
}
constexpr void GlobalNamespace::OVRManager::__set_launchMultimodalHandsControllersOnStartup(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xf8>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVRManager::__get_launchMultimodalHandsControllersOnStartup()  {
return ::cordl_internals::getInstanceField<bool, 0xf8>(this);
}
constexpr bool const& GlobalNamespace::OVRManager::__get_launchMultimodalHandsControllersOnStartup() const {
return ::cordl_internals::getInstanceField<bool, 0xf8>(this);
}
constexpr void GlobalNamespace::OVRManager::__set_isInsightPassthroughEnabled(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xf9>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVRManager::__get_isInsightPassthroughEnabled()  {
return ::cordl_internals::getInstanceField<bool, 0xf9>(this);
}
constexpr bool const& GlobalNamespace::OVRManager::__get_isInsightPassthroughEnabled() const {
return ::cordl_internals::getInstanceField<bool, 0xf9>(this);
}
constexpr void GlobalNamespace::OVRManager::__set_requestBodyTrackingPermissionOnStartup(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xfa>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVRManager::__get_requestBodyTrackingPermissionOnStartup()  {
return ::cordl_internals::getInstanceField<bool, 0xfa>(this);
}
constexpr bool const& GlobalNamespace::OVRManager::__get_requestBodyTrackingPermissionOnStartup() const {
return ::cordl_internals::getInstanceField<bool, 0xfa>(this);
}
constexpr void GlobalNamespace::OVRManager::__set_requestFaceTrackingPermissionOnStartup(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xfb>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVRManager::__get_requestFaceTrackingPermissionOnStartup()  {
return ::cordl_internals::getInstanceField<bool, 0xfb>(this);
}
constexpr bool const& GlobalNamespace::OVRManager::__get_requestFaceTrackingPermissionOnStartup() const {
return ::cordl_internals::getInstanceField<bool, 0xfb>(this);
}
constexpr void GlobalNamespace::OVRManager::__set_requestEyeTrackingPermissionOnStartup(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xfc>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVRManager::__get_requestEyeTrackingPermissionOnStartup()  {
return ::cordl_internals::getInstanceField<bool, 0xfc>(this);
}
constexpr bool const& GlobalNamespace::OVRManager::__get_requestEyeTrackingPermissionOnStartup() const {
return ::cordl_internals::getInstanceField<bool, 0xfc>(this);
}
constexpr void GlobalNamespace::OVRManager::__set_requestScenePermissionOnStartup(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xfd>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVRManager::__get_requestScenePermissionOnStartup()  {
return ::cordl_internals::getInstanceField<bool, 0xfd>(this);
}
constexpr bool const& GlobalNamespace::OVRManager::__get_requestScenePermissionOnStartup() const {
return ::cordl_internals::getInstanceField<bool, 0xfd>(this);
}
inline void GlobalNamespace::OVRManager::setStaticF_OCULUS_UNITY_NAME_STR(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "OCULUS_UNITY_NAME_STR", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::OVRManager::getStaticF_OCULUS_UNITY_NAME_STR()  {
return ::cordl_internals::getStaticField<::StringW, "OCULUS_UNITY_NAME_STR", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_OPENVR_UNITY_NAME_STR(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "OPENVR_UNITY_NAME_STR", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::OVRManager::getStaticF_OPENVR_UNITY_NAME_STR()  {
return ::cordl_internals::getStaticField<::StringW, "OPENVR_UNITY_NAME_STR", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_loadedXRDevice(::GlobalNamespace::__OVRManager__XRDevice  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::__OVRManager__XRDevice, "loadedXRDevice", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<::GlobalNamespace::__OVRManager__XRDevice>(value));
}
inline ::GlobalNamespace::__OVRManager__XRDevice GlobalNamespace::OVRManager::getStaticF_loadedXRDevice()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::__OVRManager__XRDevice, "loadedXRDevice", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_OpenVRTouchRotationOffsetEulerLeft(::UnityEngine::Vector3  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector3, "OpenVRTouchRotationOffsetEulerLeft", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVRManager::getStaticF_OpenVRTouchRotationOffsetEulerLeft()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "OpenVRTouchRotationOffsetEulerLeft", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_OpenVRTouchRotationOffsetEulerRight(::UnityEngine::Vector3  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector3, "OpenVRTouchRotationOffsetEulerRight", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVRManager::getStaticF_OpenVRTouchRotationOffsetEulerRight()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "OpenVRTouchRotationOffsetEulerRight", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_OpenVRTouchPositionOffsetLeft(::UnityEngine::Vector3  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector3, "OpenVRTouchPositionOffsetLeft", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVRManager::getStaticF_OpenVRTouchPositionOffsetLeft()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "OpenVRTouchPositionOffsetLeft", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_OpenVRTouchPositionOffsetRight(::UnityEngine::Vector3  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector3, "OpenVRTouchPositionOffsetRight", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVRManager::getStaticF_OpenVRTouchPositionOffsetRight()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "OpenVRTouchPositionOffsetRight", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_m_SpaceWarpEnabled(bool  value)  {
::cordl_internals::setStaticField<bool, "m_SpaceWarpEnabled", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<bool>(value));
}
inline bool GlobalNamespace::OVRManager::getStaticF_m_SpaceWarpEnabled()  {
return ::cordl_internals::getStaticField<bool, "m_SpaceWarpEnabled", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_m_AppSpaceTransform(::UnityEngine::Transform*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Transform*, "m_AppSpaceTransform", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<::UnityEngine::Transform*>(value));
}
inline ::UnityEngine::Transform* GlobalNamespace::OVRManager::getStaticF_m_AppSpaceTransform()  {
return ::cordl_internals::getStaticField<::UnityEngine::Transform*, "m_AppSpaceTransform", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_m_CachedDepthTextureMode(::UnityEngine::DepthTextureMode  value)  {
::cordl_internals::setStaticField<::UnityEngine::DepthTextureMode, "m_CachedDepthTextureMode", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<::UnityEngine::DepthTextureMode>(value));
}
inline ::UnityEngine::DepthTextureMode GlobalNamespace::OVRManager::getStaticF_m_CachedDepthTextureMode()  {
return ::cordl_internals::getStaticField<::UnityEngine::DepthTextureMode, "m_CachedDepthTextureMode", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
constexpr void GlobalNamespace::OVRManager::__set__localDimming(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xfe>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVRManager::__get__localDimming()  {
return ::cordl_internals::getInstanceField<bool, 0xfe>(this);
}
constexpr bool const& GlobalNamespace::OVRManager::__get__localDimming() const {
return ::cordl_internals::getInstanceField<bool, 0xfe>(this);
}
constexpr void GlobalNamespace::OVRManager::__set__trackingOriginType(::GlobalNamespace::__OVRManager__TrackingOrigin  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRManager__TrackingOrigin, 0x100>(this, std::forward<::GlobalNamespace::__OVRManager__TrackingOrigin>(value));
}
constexpr ::GlobalNamespace::__OVRManager__TrackingOrigin& GlobalNamespace::OVRManager::__get__trackingOriginType()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRManager__TrackingOrigin, 0x100>(this);
}
constexpr ::GlobalNamespace::__OVRManager__TrackingOrigin const& GlobalNamespace::OVRManager::__get__trackingOriginType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRManager__TrackingOrigin, 0x100>(this);
}
constexpr void GlobalNamespace::OVRManager::__set_usePositionTracking(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x104>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVRManager::__get_usePositionTracking()  {
return ::cordl_internals::getInstanceField<bool, 0x104>(this);
}
constexpr bool const& GlobalNamespace::OVRManager::__get_usePositionTracking() const {
return ::cordl_internals::getInstanceField<bool, 0x104>(this);
}
constexpr void GlobalNamespace::OVRManager::__set_useRotationTracking(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x105>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVRManager::__get_useRotationTracking()  {
return ::cordl_internals::getInstanceField<bool, 0x105>(this);
}
constexpr bool const& GlobalNamespace::OVRManager::__get_useRotationTracking() const {
return ::cordl_internals::getInstanceField<bool, 0x105>(this);
}
constexpr void GlobalNamespace::OVRManager::__set_useIPDInPositionTracking(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x106>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVRManager::__get_useIPDInPositionTracking()  {
return ::cordl_internals::getInstanceField<bool, 0x106>(this);
}
constexpr bool const& GlobalNamespace::OVRManager::__get_useIPDInPositionTracking() const {
return ::cordl_internals::getInstanceField<bool, 0x106>(this);
}
constexpr void GlobalNamespace::OVRManager::__set_resetTrackerOnLoad(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x107>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVRManager::__get_resetTrackerOnLoad()  {
return ::cordl_internals::getInstanceField<bool, 0x107>(this);
}
constexpr bool const& GlobalNamespace::OVRManager::__get_resetTrackerOnLoad() const {
return ::cordl_internals::getInstanceField<bool, 0x107>(this);
}
constexpr void GlobalNamespace::OVRManager::__set_AllowRecenter(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x108>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVRManager::__get_AllowRecenter()  {
return ::cordl_internals::getInstanceField<bool, 0x108>(this);
}
constexpr bool const& GlobalNamespace::OVRManager::__get_AllowRecenter() const {
return ::cordl_internals::getInstanceField<bool, 0x108>(this);
}
constexpr void GlobalNamespace::OVRManager::__set_LateControllerUpdate(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x109>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVRManager::__get_LateControllerUpdate()  {
return ::cordl_internals::getInstanceField<bool, 0x109>(this);
}
constexpr bool const& GlobalNamespace::OVRManager::__get_LateControllerUpdate() const {
return ::cordl_internals::getInstanceField<bool, 0x109>(this);
}
constexpr void GlobalNamespace::OVRManager::__set_LateLatching(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10a>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVRManager::__get_LateLatching()  {
return ::cordl_internals::getInstanceField<bool, 0x10a>(this);
}
constexpr bool const& GlobalNamespace::OVRManager::__get_LateLatching() const {
return ::cordl_internals::getInstanceField<bool, 0x10a>(this);
}
constexpr void GlobalNamespace::OVRManager::__set__readOnlyControllerDrivenHandPosesType(::GlobalNamespace::__OVRManager__ControllerDrivenHandPosesType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRManager__ControllerDrivenHandPosesType, 0x10c>(this, std::forward<::GlobalNamespace::__OVRManager__ControllerDrivenHandPosesType>(value));
}
constexpr ::GlobalNamespace::__OVRManager__ControllerDrivenHandPosesType& GlobalNamespace::OVRManager::__get__readOnlyControllerDrivenHandPosesType()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRManager__ControllerDrivenHandPosesType, 0x10c>(this);
}
constexpr ::GlobalNamespace::__OVRManager__ControllerDrivenHandPosesType const& GlobalNamespace::OVRManager::__get__readOnlyControllerDrivenHandPosesType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRManager__ControllerDrivenHandPosesType, 0x10c>(this);
}
constexpr void GlobalNamespace::OVRManager::__set_controllerDrivenHandPosesType(::GlobalNamespace::__OVRManager__ControllerDrivenHandPosesType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRManager__ControllerDrivenHandPosesType, 0x110>(this, std::forward<::GlobalNamespace::__OVRManager__ControllerDrivenHandPosesType>(value));
}
constexpr ::GlobalNamespace::__OVRManager__ControllerDrivenHandPosesType& GlobalNamespace::OVRManager::__get_controllerDrivenHandPosesType()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRManager__ControllerDrivenHandPosesType, 0x110>(this);
}
constexpr ::GlobalNamespace::__OVRManager__ControllerDrivenHandPosesType const& GlobalNamespace::OVRManager::__get_controllerDrivenHandPosesType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRManager__ControllerDrivenHandPosesType, 0x110>(this);
}
constexpr void GlobalNamespace::OVRManager::__set__isSupportedPlatform_k__BackingField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x114>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVRManager::__get__isSupportedPlatform_k__BackingField()  {
return ::cordl_internals::getInstanceField<bool, 0x114>(this);
}
constexpr bool const& GlobalNamespace::OVRManager::__get__isSupportedPlatform_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x114>(this);
}
inline void GlobalNamespace::OVRManager::setStaticF__isUserPresentCached(bool  value)  {
::cordl_internals::setStaticField<bool, "_isUserPresentCached", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<bool>(value));
}
inline bool GlobalNamespace::OVRManager::getStaticF__isUserPresentCached()  {
return ::cordl_internals::getStaticField<bool, "_isUserPresentCached", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF__isUserPresent(bool  value)  {
::cordl_internals::setStaticField<bool, "_isUserPresent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<bool>(value));
}
inline bool GlobalNamespace::OVRManager::getStaticF__isUserPresent()  {
return ::cordl_internals::getStaticField<bool, "_isUserPresent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF__wasUserPresent(bool  value)  {
::cordl_internals::setStaticField<bool, "_wasUserPresent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<bool>(value));
}
inline bool GlobalNamespace::OVRManager::getStaticF__wasUserPresent()  {
return ::cordl_internals::getStaticField<bool, "_wasUserPresent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_prevAudioOutIdIsCached(bool  value)  {
::cordl_internals::setStaticField<bool, "prevAudioOutIdIsCached", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<bool>(value));
}
inline bool GlobalNamespace::OVRManager::getStaticF_prevAudioOutIdIsCached()  {
return ::cordl_internals::getStaticField<bool, "prevAudioOutIdIsCached", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_prevAudioInIdIsCached(bool  value)  {
::cordl_internals::setStaticField<bool, "prevAudioInIdIsCached", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<bool>(value));
}
inline bool GlobalNamespace::OVRManager::getStaticF_prevAudioInIdIsCached()  {
return ::cordl_internals::getStaticField<bool, "prevAudioInIdIsCached", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_prevAudioOutId(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "prevAudioOutId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::OVRManager::getStaticF_prevAudioOutId()  {
return ::cordl_internals::getStaticField<::StringW, "prevAudioOutId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_prevAudioInId(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "prevAudioInId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::OVRManager::getStaticF_prevAudioInId()  {
return ::cordl_internals::getStaticField<::StringW, "prevAudioInId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_wasPositionTracked(bool  value)  {
::cordl_internals::setStaticField<bool, "wasPositionTracked", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<bool>(value));
}
inline bool GlobalNamespace::OVRManager::getStaticF_wasPositionTracked()  {
return ::cordl_internals::getStaticField<bool, "wasPositionTracked", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_eventDataBuffer(::GlobalNamespace::__OVRPlugin__EventDataBuffer  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::__OVRPlugin__EventDataBuffer, "eventDataBuffer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<::GlobalNamespace::__OVRPlugin__EventDataBuffer>(value));
}
inline ::GlobalNamespace::__OVRPlugin__EventDataBuffer GlobalNamespace::OVRManager::getStaticF_eventDataBuffer()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::__OVRPlugin__EventDataBuffer, "eventDataBuffer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
constexpr void GlobalNamespace::OVRManager::__set_eventListeners(::System::Collections::Generic::HashSet_1<::GlobalNamespace::__OVRManager__EventListener*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::HashSet_1<::GlobalNamespace::__OVRManager__EventListener*>*, 0x118>(this, std::forward<::System::Collections::Generic::HashSet_1<::GlobalNamespace::__OVRManager__EventListener*>*>(value));
}
constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::__OVRManager__EventListener*>* GlobalNamespace::OVRManager::__get_eventListeners()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::HashSet_1<::GlobalNamespace::__OVRManager__EventListener*>*, 0x118>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::GlobalNamespace::__OVRManager__EventListener*>*> GlobalNamespace::OVRManager::__get_eventListeners() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::HashSet_1<::GlobalNamespace::__OVRManager__EventListener*>*, 0x118>(this);
}
inline void GlobalNamespace::OVRManager::setStaticF_UnityAlphaOrBetaVersionWarningMessage(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "UnityAlphaOrBetaVersionWarningMessage", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::OVRManager::getStaticF_UnityAlphaOrBetaVersionWarningMessage()  {
return ::cordl_internals::getStaticField<::StringW, "UnityAlphaOrBetaVersionWarningMessage", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_OVRManagerinitialized(bool  value)  {
::cordl_internals::setStaticField<bool, "OVRManagerinitialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<bool>(value));
}
inline bool GlobalNamespace::OVRManager::getStaticF_OVRManagerinitialized()  {
return ::cordl_internals::getStaticField<bool, "OVRManagerinitialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_s_displaySubsystems(::System::Collections::Generic::List_1<Il2CppObject*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<Il2CppObject*>*, "s_displaySubsystems", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<::System::Collections::Generic::List_1<Il2CppObject*>*>(value));
}
inline ::System::Collections::Generic::List_1<Il2CppObject*>* GlobalNamespace::OVRManager::getStaticF_s_displaySubsystems()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<Il2CppObject*>*, "s_displaySubsystems", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_s_displaySubsystemDescriptors(::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor*>*, "s_displaySubsystemDescriptors", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor*>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor*>* GlobalNamespace::OVRManager::getStaticF_s_displaySubsystemDescriptors()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor*>*, "s_displaySubsystemDescriptors", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_s_inputSubsystems(::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystem*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystem*>*, "s_inputSubsystems", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystem*>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystem*>* GlobalNamespace::OVRManager::getStaticF_s_inputSubsystems()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystem*>*, "s_inputSubsystems", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_multipleMainCameraWarningPresented(bool  value)  {
::cordl_internals::setStaticField<bool, "multipleMainCameraWarningPresented", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<bool>(value));
}
inline bool GlobalNamespace::OVRManager::getStaticF_multipleMainCameraWarningPresented()  {
return ::cordl_internals::getStaticField<bool, "multipleMainCameraWarningPresented", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_suppressUnableToFindMainCameraMessage(bool  value)  {
::cordl_internals::setStaticField<bool, "suppressUnableToFindMainCameraMessage", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<bool>(value));
}
inline bool GlobalNamespace::OVRManager::getStaticF_suppressUnableToFindMainCameraMessage()  {
return ::cordl_internals::getStaticField<bool, "suppressUnableToFindMainCameraMessage", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_lastFoundMainCamera(::System::WeakReference_1<::UnityEngine::Camera*>*  value)  {
::cordl_internals::setStaticField<::System::WeakReference_1<::UnityEngine::Camera*>*, "lastFoundMainCamera", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<::System::WeakReference_1<::UnityEngine::Camera*>*>(value));
}
inline ::System::WeakReference_1<::UnityEngine::Camera*>* GlobalNamespace::OVRManager::getStaticF_lastFoundMainCamera()  {
return ::cordl_internals::getStaticField<::System::WeakReference_1<::UnityEngine::Camera*>*, "lastFoundMainCamera", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_staticMixedRealityCaptureInitialized(bool  value)  {
::cordl_internals::setStaticField<bool, "staticMixedRealityCaptureInitialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<bool>(value));
}
inline bool GlobalNamespace::OVRManager::getStaticF_staticMixedRealityCaptureInitialized()  {
return ::cordl_internals::getStaticField<bool, "staticMixedRealityCaptureInitialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_staticPrevEnableMixedRealityCapture(bool  value)  {
::cordl_internals::setStaticField<bool, "staticPrevEnableMixedRealityCapture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<bool>(value));
}
inline bool GlobalNamespace::OVRManager::getStaticF_staticPrevEnableMixedRealityCapture()  {
return ::cordl_internals::getStaticField<bool, "staticPrevEnableMixedRealityCapture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_staticMrcSettings(::GlobalNamespace::OVRMixedRealityCaptureSettings*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::OVRMixedRealityCaptureSettings*, "staticMrcSettings", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(value));
}
inline ::GlobalNamespace::OVRMixedRealityCaptureSettings* GlobalNamespace::OVRManager::getStaticF_staticMrcSettings()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::OVRMixedRealityCaptureSettings*, "staticMrcSettings", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_suppressDisableMixedRealityBecauseOfNoMainCameraWarning(bool  value)  {
::cordl_internals::setStaticField<bool, "suppressDisableMixedRealityBecauseOfNoMainCameraWarning", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<bool>(value));
}
inline bool GlobalNamespace::OVRManager::getStaticF_suppressDisableMixedRealityBecauseOfNoMainCameraWarning()  {
return ::cordl_internals::getStaticField<bool, "suppressDisableMixedRealityBecauseOfNoMainCameraWarning", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF__passthroughInitializationState(::GlobalNamespace::__OVRManager__PassthroughInitializationState  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::__OVRManager__PassthroughInitializationState, "_passthroughInitializationState", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<::GlobalNamespace::__OVRManager__PassthroughInitializationState>(value));
}
inline ::GlobalNamespace::__OVRManager__PassthroughInitializationState GlobalNamespace::OVRManager::getStaticF__passthroughInitializationState()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::__OVRManager__PassthroughInitializationState, "_passthroughInitializationState", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF__passthroughCapabilities(::GlobalNamespace::__OVRManager__PassthroughCapabilities*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::__OVRManager__PassthroughCapabilities*, "_passthroughCapabilities", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<::GlobalNamespace::__OVRManager__PassthroughCapabilities*>(value));
}
inline ::GlobalNamespace::__OVRManager__PassthroughCapabilities* GlobalNamespace::OVRManager::getStaticF__passthroughCapabilities()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::__OVRManager__PassthroughCapabilities*, "_passthroughCapabilities", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline ::GlobalNamespace::OVRManager* GlobalNamespace::OVRManager::get_instance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_instance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRManager*, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_instance(::GlobalNamespace::OVRManager*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "set_instance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRManager*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::GlobalNamespace::OVRDisplay* GlobalNamespace::OVRManager::get_display()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_display",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRDisplay*, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_display(::GlobalNamespace::OVRDisplay*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "set_display",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRDisplay*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::GlobalNamespace::OVRTracker* GlobalNamespace::OVRManager::get_tracker()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_tracker",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTracker*, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_tracker(::GlobalNamespace::OVRTracker*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "set_tracker",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTracker*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::GlobalNamespace::OVRBoundary* GlobalNamespace::OVRManager::get_boundary()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_boundary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRBoundary*, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_boundary(::GlobalNamespace::OVRBoundary*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "set_boundary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRBoundary*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::GlobalNamespace::OVRRuntimeSettings* GlobalNamespace::OVRManager::get_runtimeSettings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_runtimeSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRRuntimeSettings*, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_runtimeSettings(::GlobalNamespace::OVRRuntimeSettings*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "set_runtimeSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRRuntimeSettings*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::GlobalNamespace::OVRProfile* GlobalNamespace::OVRManager::get_profile()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_profile",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRProfile*, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::add_HMDAcquired(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "add_HMDAcquired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_HMDAcquired(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "remove_HMDAcquired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::add_HMDLost(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "add_HMDLost",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_HMDLost(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "remove_HMDLost",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::add_HMDMounted(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "add_HMDMounted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_HMDMounted(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "remove_HMDMounted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::add_HMDUnmounted(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "add_HMDUnmounted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_HMDUnmounted(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "remove_HMDUnmounted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::add_VrFocusAcquired(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "add_VrFocusAcquired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_VrFocusAcquired(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "remove_VrFocusAcquired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::add_VrFocusLost(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "add_VrFocusLost",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_VrFocusLost(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "remove_VrFocusLost",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::add_InputFocusAcquired(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "add_InputFocusAcquired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_InputFocusAcquired(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "remove_InputFocusAcquired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::add_InputFocusLost(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "add_InputFocusLost",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_InputFocusLost(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "remove_InputFocusLost",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::add_AudioOutChanged(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "add_AudioOutChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_AudioOutChanged(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "remove_AudioOutChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::add_AudioInChanged(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "add_AudioInChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_AudioInChanged(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "remove_AudioInChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::add_TrackingAcquired(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "add_TrackingAcquired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_TrackingAcquired(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "remove_TrackingAcquired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::add_TrackingLost(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "add_TrackingLost",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_TrackingLost(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "remove_TrackingLost",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::add_DisplayRefreshRateChanged(::System::Action_2<float_t,float_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "add_DisplayRefreshRateChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<float_t,float_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_DisplayRefreshRateChanged(::System::Action_2<float_t,float_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "remove_DisplayRefreshRateChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<float_t,float_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::add_SpatialAnchorCreateComplete(::System::Action_4<uint64_t,bool,::GlobalNamespace::OVRSpace,::System::Guid>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "add_SpatialAnchorCreateComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<uint64_t,bool,::GlobalNamespace::OVRSpace,::System::Guid>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_SpatialAnchorCreateComplete(::System::Action_4<uint64_t,bool,::GlobalNamespace::OVRSpace,::System::Guid>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "remove_SpatialAnchorCreateComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<uint64_t,bool,::GlobalNamespace::OVRSpace,::System::Guid>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::add_SpaceSetComponentStatusComplete(::System::Action_6<uint64_t,bool,::GlobalNamespace::OVRSpace,::System::Guid,::GlobalNamespace::__OVRPlugin__SpaceComponentType,bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "add_SpaceSetComponentStatusComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_6<uint64_t,bool,::GlobalNamespace::OVRSpace,::System::Guid,::GlobalNamespace::__OVRPlugin__SpaceComponentType,bool>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_SpaceSetComponentStatusComplete(::System::Action_6<uint64_t,bool,::GlobalNamespace::OVRSpace,::System::Guid,::GlobalNamespace::__OVRPlugin__SpaceComponentType,bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "remove_SpaceSetComponentStatusComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_6<uint64_t,bool,::GlobalNamespace::OVRSpace,::System::Guid,::GlobalNamespace::__OVRPlugin__SpaceComponentType,bool>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::add_SpaceQueryResults(::System::Action_1<uint64_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "add_SpaceQueryResults",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<uint64_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_SpaceQueryResults(::System::Action_1<uint64_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "remove_SpaceQueryResults",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<uint64_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::add_SpaceQueryComplete(::System::Action_2<uint64_t,bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "add_SpaceQueryComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<uint64_t,bool>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_SpaceQueryComplete(::System::Action_2<uint64_t,bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "remove_SpaceQueryComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<uint64_t,bool>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::add_SpaceSaveComplete(::System::Action_4<uint64_t,::GlobalNamespace::OVRSpace,bool,::System::Guid>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "add_SpaceSaveComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<uint64_t,::GlobalNamespace::OVRSpace,bool,::System::Guid>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_SpaceSaveComplete(::System::Action_4<uint64_t,::GlobalNamespace::OVRSpace,bool,::System::Guid>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "remove_SpaceSaveComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<uint64_t,::GlobalNamespace::OVRSpace,bool,::System::Guid>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::add_SpaceEraseComplete(::System::Action_4<uint64_t,bool,::System::Guid,::GlobalNamespace::__OVRPlugin__SpaceStorageLocation>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "add_SpaceEraseComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<uint64_t,bool,::System::Guid,::GlobalNamespace::__OVRPlugin__SpaceStorageLocation>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_SpaceEraseComplete(::System::Action_4<uint64_t,bool,::System::Guid,::GlobalNamespace::__OVRPlugin__SpaceStorageLocation>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "remove_SpaceEraseComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<uint64_t,bool,::System::Guid,::GlobalNamespace::__OVRPlugin__SpaceStorageLocation>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::add_ShareSpacesComplete(::System::Action_2<uint64_t,::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "add_ShareSpacesComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<uint64_t,::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_ShareSpacesComplete(::System::Action_2<uint64_t,::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "remove_ShareSpacesComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<uint64_t,::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::add_SpaceListSaveComplete(::System::Action_2<uint64_t,::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "add_SpaceListSaveComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<uint64_t,::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_SpaceListSaveComplete(::System::Action_2<uint64_t,::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "remove_SpaceListSaveComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<uint64_t,::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::add_SceneCaptureComplete(::System::Action_2<uint64_t,bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "add_SceneCaptureComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<uint64_t,bool>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_SceneCaptureComplete(::System::Action_2<uint64_t,bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "remove_SceneCaptureComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<uint64_t,bool>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::add_HSWDismissed(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "add_HSWDismissed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_HSWDismissed(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "remove_HSWDismissed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline bool GlobalNamespace::OVRManager::get_isHmdPresent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_isHmdPresent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_isHmdPresent(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "set_isHmdPresent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::StringW GlobalNamespace::OVRManager::get_audioOutId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_audioOutId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::StringW GlobalNamespace::OVRManager::get_audioInId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_audioInId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::OVRManager::get_hasVrFocus()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_hasVrFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_hasVrFocus(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "set_hasVrFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline bool GlobalNamespace::OVRManager::get_hasInputFocus()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_hasInputFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::OVRManager::get_chromatic()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_chromatic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_chromatic(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "set_chromatic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRManager::get_monoscopic()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_monoscopic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_monoscopic(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "set_monoscopic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::__OVRPlugin__LayerSharpenType GlobalNamespace::OVRManager::get_sharpenType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_sharpenType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRPlugin__LayerSharpenType, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_sharpenType(::GlobalNamespace::__OVRPlugin__LayerSharpenType  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "set_sharpenType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPlugin__LayerSharpenType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::__OVRManager__ColorSpace GlobalNamespace::OVRManager::get_colorGamut()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_colorGamut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRManager__ColorSpace, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_colorGamut(::GlobalNamespace::__OVRManager__ColorSpace  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "set_colorGamut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRManager__ColorSpace>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::__OVRManager__ColorSpace GlobalNamespace::OVRManager::get_nativeColorGamut()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_nativeColorGamut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRManager__ColorSpace, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::OVRManager::IsAdaptiveResSupportedByEngine()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "IsAdaptiveResSupportedByEngine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVRManager::get_headPoseRelativeOffsetRotation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_headPoseRelativeOffsetRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_headPoseRelativeOffsetRotation(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "set_headPoseRelativeOffsetRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVRManager::get_headPoseRelativeOffsetTranslation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_headPoseRelativeOffsetTranslation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_headPoseRelativeOffsetTranslation(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "set_headPoseRelativeOffsetTranslation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRManager::get_eyeFovPremultipliedAlphaModeEnabled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_eyeFovPremultipliedAlphaModeEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_eyeFovPremultipliedAlphaModeEnabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "set_eyeFovPremultipliedAlphaModeEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline bool GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_enableMixedReality()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_enableMixedReality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_enableMixedReality(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_enableMixedReality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::LayerMask GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_extraHiddenLayers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_extraHiddenLayers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_extraHiddenLayers(::UnityEngine::LayerMask  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_extraHiddenLayers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::LayerMask GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_extraVisibleLayers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_extraVisibleLayers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_extraVisibleLayers(::UnityEngine::LayerMask  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_extraVisibleLayers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_dynamicCullingMask()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_dynamicCullingMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_dynamicCullingMask(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_dynamicCullingMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::__OVRManager__CompositionMethod GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_compositionMethod()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_compositionMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRManager__CompositionMethod, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_compositionMethod(::GlobalNamespace::__OVRManager__CompositionMethod  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_compositionMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRManager__CompositionMethod>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::Color GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_externalCompositionBackdropColorRift()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_externalCompositionBackdropColorRift",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_externalCompositionBackdropColorRift(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_externalCompositionBackdropColorRift",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::Color GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_externalCompositionBackdropColorQuest()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_externalCompositionBackdropColorQuest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_externalCompositionBackdropColorQuest(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_externalCompositionBackdropColorQuest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::__OVRManager__CameraDevice GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_capturingCameraDevice()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_capturingCameraDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRManager__CameraDevice, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_capturingCameraDevice(::GlobalNamespace::__OVRManager__CameraDevice  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_capturingCameraDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRManager__CameraDevice>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_flipCameraFrameHorizontally()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_flipCameraFrameHorizontally",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_flipCameraFrameHorizontally(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_flipCameraFrameHorizontally",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_flipCameraFrameVertically()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_flipCameraFrameVertically",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_flipCameraFrameVertically(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_flipCameraFrameVertically",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline float_t GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_handPoseStateLatency()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_handPoseStateLatency",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_handPoseStateLatency(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_handPoseStateLatency",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline float_t GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_sandwichCompositionRenderLatency()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_sandwichCompositionRenderLatency",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_sandwichCompositionRenderLatency(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_sandwichCompositionRenderLatency",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline int32_t GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_sandwichCompositionBufferedFrames()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_sandwichCompositionBufferedFrames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_sandwichCompositionBufferedFrames(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_sandwichCompositionBufferedFrames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::Color GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_chromaKeyColor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_chromaKeyColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_chromaKeyColor(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_chromaKeyColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline float_t GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_chromaKeySimilarity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_chromaKeySimilarity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_chromaKeySimilarity(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_chromaKeySimilarity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline float_t GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_chromaKeySmoothRange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_chromaKeySmoothRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_chromaKeySmoothRange(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_chromaKeySmoothRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline float_t GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_chromaKeySpillRange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_chromaKeySpillRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_chromaKeySpillRange(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_chromaKeySpillRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_useDynamicLighting()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_useDynamicLighting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_useDynamicLighting(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_useDynamicLighting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::__OVRManager__DepthQuality GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_depthQuality()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_depthQuality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRManager__DepthQuality, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_depthQuality(::GlobalNamespace::__OVRManager__DepthQuality  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_depthQuality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRManager__DepthQuality>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline float_t GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_dynamicLightingSmoothFactor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_dynamicLightingSmoothFactor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_dynamicLightingSmoothFactor(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_dynamicLightingSmoothFactor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline float_t GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_dynamicLightingDepthVariationClampingValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_dynamicLightingDepthVariationClampingValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_dynamicLightingDepthVariationClampingValue(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_dynamicLightingDepthVariationClampingValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::__OVRManager__VirtualGreenScreenType GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRManager__VirtualGreenScreenType, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenType(::GlobalNamespace::__OVRManager__VirtualGreenScreenType  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRManager__VirtualGreenScreenType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline float_t GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenTopY",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenTopY(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenTopY",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline float_t GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenBottomY()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenBottomY",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenBottomY(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenBottomY",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenApplyDepthCulling()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenApplyDepthCulling",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenApplyDepthCulling(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenApplyDepthCulling",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline float_t GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenDepthTolerance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenDepthTolerance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenDepthTolerance(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenDepthTolerance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::__OVRManager__MrcActivationMode GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_mrcActivationMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_mrcActivationMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRManager__MrcActivationMode, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_mrcActivationMode(::GlobalNamespace::__OVRManager__MrcActivationMode  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_mrcActivationMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRManager__MrcActivationMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate* GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_instantiateMixedRealityCameraGameObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_instantiateMixedRealityCameraGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_instantiateMixedRealityCameraGameObject(::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_instantiateMixedRealityCameraGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::__OVRManager__XrApi GlobalNamespace::OVRManager::get_xrApi()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_xrApi",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRManager__XrApi, false>(*this, ___internal_method);
}
inline uint64_t GlobalNamespace::OVRManager::get_xrInstance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_xrInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(*this, ___internal_method);
}
inline uint64_t GlobalNamespace::OVRManager::get_xrSession()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_xrSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::OVRManager::get_vsyncCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_vsyncCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_vsyncCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "set_vsyncCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline float_t GlobalNamespace::OVRManager::get_batteryLevel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_batteryLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method);
}
inline float_t GlobalNamespace::OVRManager::get_batteryTemperature()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_batteryTemperature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method);
}
inline int32_t GlobalNamespace::OVRManager::get_batteryStatus()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_batteryStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline float_t GlobalNamespace::OVRManager::get_volumeLevel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_volumeLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::__OVRManager__ProcessorPerformanceLevel GlobalNamespace::OVRManager::get_suggestedCpuPerfLevel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_suggestedCpuPerfLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRManager__ProcessorPerformanceLevel, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_suggestedCpuPerfLevel(::GlobalNamespace::__OVRManager__ProcessorPerformanceLevel  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "set_suggestedCpuPerfLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRManager__ProcessorPerformanceLevel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::GlobalNamespace::__OVRManager__ProcessorPerformanceLevel GlobalNamespace::OVRManager::get_suggestedGpuPerfLevel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_suggestedGpuPerfLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRManager__ProcessorPerformanceLevel, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_suggestedGpuPerfLevel(::GlobalNamespace::__OVRManager__ProcessorPerformanceLevel  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "set_suggestedGpuPerfLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRManager__ProcessorPerformanceLevel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline int32_t GlobalNamespace::OVRManager::get_cpuLevel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_cpuLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_cpuLevel(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "set_cpuLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline int32_t GlobalNamespace::OVRManager::get_gpuLevel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_gpuLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_gpuLevel(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "set_gpuLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline bool GlobalNamespace::OVRManager::get_isPowerSavingActive()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_isPowerSavingActive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::__OVRManager__EyeTextureFormat GlobalNamespace::OVRManager::get_eyeTextureFormat()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_eyeTextureFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRManager__EyeTextureFormat, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_eyeTextureFormat(::GlobalNamespace::__OVRManager__EyeTextureFormat  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "set_eyeTextureFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRManager__EyeTextureFormat>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline bool GlobalNamespace::OVRManager::get_eyeTrackedFoveatedRenderingSupported()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_eyeTrackedFoveatedRenderingSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::OVRManager::get_eyeTrackedFoveatedRenderingEnabled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_eyeTrackedFoveatedRenderingEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_eyeTrackedFoveatedRenderingEnabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "set_eyeTrackedFoveatedRenderingEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::OnPermissionGranted(::StringW  permissionId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OnPermissionGranted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, permissionId);
}
inline ::GlobalNamespace::__OVRManager__FoveatedRenderingLevel GlobalNamespace::OVRManager::get_foveatedRenderingLevel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_foveatedRenderingLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRManager__FoveatedRenderingLevel, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_foveatedRenderingLevel(::GlobalNamespace::__OVRManager__FoveatedRenderingLevel  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "set_foveatedRenderingLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRManager__FoveatedRenderingLevel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline bool GlobalNamespace::OVRManager::get_fixedFoveatedRenderingSupported()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_fixedFoveatedRenderingSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::__OVRManager__FixedFoveatedRenderingLevel GlobalNamespace::OVRManager::get_fixedFoveatedRenderingLevel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_fixedFoveatedRenderingLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRManager__FixedFoveatedRenderingLevel, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_fixedFoveatedRenderingLevel(::GlobalNamespace::__OVRManager__FixedFoveatedRenderingLevel  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "set_fixedFoveatedRenderingLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRManager__FixedFoveatedRenderingLevel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline bool GlobalNamespace::OVRManager::get_useDynamicFoveatedRendering()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_useDynamicFoveatedRendering",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_useDynamicFoveatedRendering(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "set_useDynamicFoveatedRendering",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline bool GlobalNamespace::OVRManager::get_useDynamicFixedFoveatedRendering()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_useDynamicFixedFoveatedRendering",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_useDynamicFixedFoveatedRendering(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "set_useDynamicFixedFoveatedRendering",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline bool GlobalNamespace::OVRManager::get_tiledMultiResSupported()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_tiledMultiResSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::__OVRManager__TiledMultiResLevel GlobalNamespace::OVRManager::get_tiledMultiResLevel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_tiledMultiResLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRManager__TiledMultiResLevel, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_tiledMultiResLevel(::GlobalNamespace::__OVRManager__TiledMultiResLevel  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "set_tiledMultiResLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRManager__TiledMultiResLevel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline bool GlobalNamespace::OVRManager::get_gpuUtilSupported()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_gpuUtilSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline float_t GlobalNamespace::OVRManager::get_gpuUtilLevel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_gpuUtilLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::__OVRManager__SystemHeadsetType GlobalNamespace::OVRManager::get_systemHeadsetType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_systemHeadsetType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRManager__SystemHeadsetType, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::SetColorScaleAndOffset(::UnityEngine::Vector4  colorScale, ::UnityEngine::Vector4  colorOffset, bool  applyToAllLayers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "SetColorScaleAndOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, colorScale, colorOffset, applyToAllLayers);
}
inline void GlobalNamespace::OVRManager::SetOpenVRLocalPose(::UnityEngine::Vector3  leftPos, ::UnityEngine::Vector3  rightPos, ::UnityEngine::Quaternion  leftRot, ::UnityEngine::Quaternion  rightRot)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "SetOpenVRLocalPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, leftPos, rightPos, leftRot, rightRot);
}
inline ::GlobalNamespace::OVRPose GlobalNamespace::OVRManager::GetOpenVRControllerOffset(::UnityEngine::XR::XRNode  hand)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "GetOpenVRControllerOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPose, false>(nullptr, ___internal_method, hand);
}
inline void GlobalNamespace::OVRManager::SetSpaceWarp(bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "SetSpaceWarp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, enabled);
}
inline bool GlobalNamespace::OVRManager::GetSpaceWarp()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "GetSpaceWarp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::__OVRManager__TrackingOrigin GlobalNamespace::OVRManager::get_trackingOriginType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_trackingOriginType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRManager__TrackingOrigin, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_trackingOriginType(::GlobalNamespace::__OVRManager__TrackingOrigin  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "set_trackingOriginType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRManager__TrackingOrigin>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRManager::get_IsSimultaneousHandsAndControllersSupported()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_IsSimultaneousHandsAndControllersSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::OVRManager::get_isSupportedPlatform()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_isSupportedPlatform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_isSupportedPlatform(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "set_isSupportedPlatform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRManager::get_isUserPresent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_isUserPresent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_isUserPresent(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "set_isUserPresent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::RegisterEventListener(::GlobalNamespace::__OVRManager__EventListener*  listener)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "RegisterEventListener",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRManager__EventListener*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, listener);
}
inline void GlobalNamespace::OVRManager::DeregisterEventListener(::GlobalNamespace::__OVRManager__EventListener*  listener)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "DeregisterEventListener",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRManager__EventListener*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, listener);
}
inline ::System::Version* GlobalNamespace::OVRManager::get_utilitiesVersion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_utilitiesVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Version*, false>(nullptr, ___internal_method);
}
inline ::System::Version* GlobalNamespace::OVRManager::get_pluginVersion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_pluginVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Version*, false>(nullptr, ___internal_method);
}
inline ::System::Version* GlobalNamespace::OVRManager::get_sdkVersion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "get_sdkVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Version*, false>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::OVRManager::MixedRealityEnabledFromCmd()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "MixedRealityEnabledFromCmd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::OVRManager::UseDirectCompositionFromCmd()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "UseDirectCompositionFromCmd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::OVRManager::UseExternalCompositionFromCmd()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "UseExternalCompositionFromCmd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::OVRManager::CreateMixedRealityCaptureConfigurationFileFromCmd()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "CreateMixedRealityCaptureConfigurationFileFromCmd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::OVRManager::LoadMixedRealityCaptureConfigurationFileFromCmd()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "LoadMixedRealityCaptureConfigurationFileFromCmd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::OVRManager::IsUnityAlphaOrBetaVersion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "IsUnityAlphaOrBetaVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::InitOVRManager()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "InitOVRManager",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::InitPermissionRequest()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "InitPermissionRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::SetCurrentXRDevice()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "SetCurrentXRDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline Il2CppObject* GlobalNamespace::OVRManager::GetCurrentDisplaySubsystem()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "GetCurrentDisplaySubsystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Il2CppObject*, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::XR::XRDisplaySubsystemDescriptor* GlobalNamespace::OVRManager::GetCurrentDisplaySubsystemDescriptor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "GetCurrentDisplaySubsystemDescriptor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::XRDisplaySubsystemDescriptor*, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::XR::XRInputSubsystem* GlobalNamespace::OVRManager::GetCurrentInputSubsystem()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "GetCurrentInputSubsystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::XRInputSubsystem*, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::Initialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::UpdateHMDEvents()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "UpdateHMDEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::UnityEngine::Camera* GlobalNamespace::OVRManager::FindMainCamera()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "FindMainCamera",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Camera*, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "FixedUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OnApplicationPause(bool  pause)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OnApplicationPause",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, pause);
}
inline void GlobalNamespace::OVRManager::OnApplicationFocus(bool  focus)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OnApplicationFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, focus);
}
inline void GlobalNamespace::OVRManager::OnApplicationQuit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "OnApplicationQuit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::ReturnToLauncher()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "ReturnToLauncher",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::PlatformUIConfirmQuit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "PlatformUIConfirmQuit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::StaticInitializeMixedRealityCapture(::GlobalNamespace::OVRMixedRealityCaptureConfiguration*  configuration)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "StaticInitializeMixedRealityCapture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRMixedRealityCaptureConfiguration*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, configuration);
}
inline void GlobalNamespace::OVRManager::StaticUpdateMixedRealityCapture(::GlobalNamespace::OVRMixedRealityCaptureConfiguration*  configuration, ::UnityEngine::GameObject*  gameObject, ::GlobalNamespace::__OVRManager__TrackingOrigin  trackingOrigin)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "StaticUpdateMixedRealityCapture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRMixedRealityCaptureConfiguration*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRManager__TrackingOrigin>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, configuration, gameObject, trackingOrigin);
}
inline void GlobalNamespace::OVRManager::StaticShutdownMixedRealityCapture(::GlobalNamespace::OVRMixedRealityCaptureConfiguration*  configuration)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "StaticShutdownMixedRealityCapture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRMixedRealityCaptureConfiguration*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, configuration);
}
inline bool GlobalNamespace::OVRManager::PassthroughInitializedOrPending(::GlobalNamespace::__OVRManager__PassthroughInitializationState  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "PassthroughInitializedOrPending",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRManager__PassthroughInitializationState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, state);
}
inline bool GlobalNamespace::OVRManager::InitializeInsightPassthrough()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "InitializeInsightPassthrough",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::ShutdownInsightPassthrough()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "ShutdownInsightPassthrough",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::UpdateInsightPassthrough(bool  shouldBeEnabled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "UpdateInsightPassthrough",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, shouldBeEnabled);
}
inline bool GlobalNamespace::OVRManager::IsMultimodalHandsControllersSupported()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "IsMultimodalHandsControllersSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::OVRManager::IsInsightPassthroughSupported()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "IsInsightPassthroughSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::__OVRManager__PassthroughCapabilities* GlobalNamespace::OVRManager::GetPassthroughCapabilities()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "GetPassthroughCapabilities",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRManager__PassthroughCapabilities*, false>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::OVRManager::IsInsightPassthroughInitialized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "IsInsightPassthroughInitialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::OVRManager::HasInsightPassthroughInitFailed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "HasInsightPassthroughInitFailed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::OVRManager::IsInsightPassthroughInitPending()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "IsInsightPassthroughInitPending",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::OVRManager::IsPassthroughRecommended()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            "IsPassthroughRecommended",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::OVRManager* GlobalNamespace::OVRManager::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::OVRManager*>());
}
inline void GlobalNamespace::OVRManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
