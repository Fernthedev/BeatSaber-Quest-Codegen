// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVRPlugin/HandStatus
// Already included the same include: GlobalNamespace/OVRPlugin.hpp
// Including type: OVRPlugin/Posef
// Already included the same include: GlobalNamespace/OVRPlugin.hpp
// Including type: OVRPlugin/HandFingerPinch
// Already included the same include: GlobalNamespace/OVRPlugin.hpp
// Including type: OVRPlugin/TrackingConfidence
// Already included the same include: GlobalNamespace/OVRPlugin.hpp
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x78
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRPlugin/HandState
  struct OVRPlugin::HandState/*, public System::ValueType*/ {
    public:
    // public OVRPlugin/HandStatus Status
    // Size: 0x4
    // Offset: 0x0
    GlobalNamespace::OVRPlugin::HandStatus Status;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRPlugin::HandStatus) == 0x4);
    // public OVRPlugin/Posef RootPose
    // Size: 0x1C
    // Offset: 0x4
    GlobalNamespace::OVRPlugin::Posef RootPose;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRPlugin::Posef) == 0x1C);
    // public OVRPlugin/Quatf[] BoneRotations
    // Size: 0x8
    // Offset: 0x20
    ::Array<GlobalNamespace::OVRPlugin::Quatf>* BoneRotations;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::OVRPlugin::Quatf>*) == 0x8);
    // public OVRPlugin/HandFingerPinch Pinches
    // Size: 0x4
    // Offset: 0x28
    GlobalNamespace::OVRPlugin::HandFingerPinch Pinches;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRPlugin::HandFingerPinch) == 0x4);
    // Padding between fields: Pinches and: PinchStrength
    char __padding3[0x4] = {};
    // public System.Single[] PinchStrength
    // Size: 0x8
    // Offset: 0x30
    ::Array<float>* PinchStrength;
    // Field size check
    static_assert(sizeof(::Array<float>*) == 0x8);
    // public OVRPlugin/Posef PointerPose
    // Size: 0x1C
    // Offset: 0x38
    GlobalNamespace::OVRPlugin::Posef PointerPose;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRPlugin::Posef) == 0x1C);
    // public System.Single HandScale
    // Size: 0x4
    // Offset: 0x54
    float HandScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public OVRPlugin/TrackingConfidence HandConfidence
    // Size: 0x4
    // Offset: 0x58
    GlobalNamespace::OVRPlugin::TrackingConfidence HandConfidence;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRPlugin::TrackingConfidence) == 0x4);
    // Padding between fields: HandConfidence and: FingerConfidences
    char __padding7[0x4] = {};
    // public OVRPlugin/TrackingConfidence[] FingerConfidences
    // Size: 0x8
    // Offset: 0x60
    ::Array<GlobalNamespace::OVRPlugin::TrackingConfidence>* FingerConfidences;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::OVRPlugin::TrackingConfidence>*) == 0x8);
    // public System.Double RequestedTimeStamp
    // Size: 0x8
    // Offset: 0x68
    double RequestedTimeStamp;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public System.Double SampleTimeStamp
    // Size: 0x8
    // Offset: 0x70
    double SampleTimeStamp;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // Creating value type constructor for type: HandState
    constexpr HandState(GlobalNamespace::OVRPlugin::HandStatus Status_ = {}, GlobalNamespace::OVRPlugin::Posef RootPose_ = {}, ::Array<GlobalNamespace::OVRPlugin::Quatf>* BoneRotations_ = {}, GlobalNamespace::OVRPlugin::HandFingerPinch Pinches_ = {}, ::Array<float>* PinchStrength_ = {}, GlobalNamespace::OVRPlugin::Posef PointerPose_ = {}, float HandScale_ = {}, GlobalNamespace::OVRPlugin::TrackingConfidence HandConfidence_ = {}, ::Array<GlobalNamespace::OVRPlugin::TrackingConfidence>* FingerConfidences_ = {}, double RequestedTimeStamp_ = {}, double SampleTimeStamp_ = {}) noexcept : Status{Status_}, RootPose{RootPose_}, BoneRotations{BoneRotations_}, Pinches{Pinches_}, PinchStrength{PinchStrength_}, PointerPose{PointerPose_}, HandScale{HandScale_}, HandConfidence{HandConfidence_}, FingerConfidences{FingerConfidences_}, RequestedTimeStamp{RequestedTimeStamp_}, SampleTimeStamp{SampleTimeStamp_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
  }; // OVRPlugin/HandState
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::HandState), 112 + sizeof(double)> __GlobalNamespace_OVRPlugin_HandStateSizeCheck;
  static_assert(sizeof(OVRPlugin::HandState) == 0x78);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::HandState, "", "OVRPlugin/HandState");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
