// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x178
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.IVRSystem
  // [TokenAttribute] Offset: FFFFFFFF
  struct IVRSystem/*, public System::ValueType*/ {
    public:
    // Nested type: OVR::OpenVR::IVRSystem::_GetRecommendedRenderTargetSize
    class _GetRecommendedRenderTargetSize;
    // Nested type: OVR::OpenVR::IVRSystem::_GetProjectionMatrix
    class _GetProjectionMatrix;
    // Nested type: OVR::OpenVR::IVRSystem::_GetProjectionRaw
    class _GetProjectionRaw;
    // Nested type: OVR::OpenVR::IVRSystem::_ComputeDistortion
    class _ComputeDistortion;
    // Nested type: OVR::OpenVR::IVRSystem::_GetEyeToHeadTransform
    class _GetEyeToHeadTransform;
    // Nested type: OVR::OpenVR::IVRSystem::_GetTimeSinceLastVsync
    class _GetTimeSinceLastVsync;
    // Nested type: OVR::OpenVR::IVRSystem::_GetD3D9AdapterIndex
    class _GetD3D9AdapterIndex;
    // Nested type: OVR::OpenVR::IVRSystem::_GetDXGIOutputInfo
    class _GetDXGIOutputInfo;
    // Nested type: OVR::OpenVR::IVRSystem::_GetOutputDevice
    class _GetOutputDevice;
    // Nested type: OVR::OpenVR::IVRSystem::_IsDisplayOnDesktop
    class _IsDisplayOnDesktop;
    // Nested type: OVR::OpenVR::IVRSystem::_SetDisplayVisibility
    class _SetDisplayVisibility;
    // Nested type: OVR::OpenVR::IVRSystem::_GetDeviceToAbsoluteTrackingPose
    class _GetDeviceToAbsoluteTrackingPose;
    // Nested type: OVR::OpenVR::IVRSystem::_ResetSeatedZeroPose
    class _ResetSeatedZeroPose;
    // Nested type: OVR::OpenVR::IVRSystem::_GetSeatedZeroPoseToStandingAbsoluteTrackingPose
    class _GetSeatedZeroPoseToStandingAbsoluteTrackingPose;
    // Nested type: OVR::OpenVR::IVRSystem::_GetRawZeroPoseToStandingAbsoluteTrackingPose
    class _GetRawZeroPoseToStandingAbsoluteTrackingPose;
    // Nested type: OVR::OpenVR::IVRSystem::_GetSortedTrackedDeviceIndicesOfClass
    class _GetSortedTrackedDeviceIndicesOfClass;
    // Nested type: OVR::OpenVR::IVRSystem::_GetTrackedDeviceActivityLevel
    class _GetTrackedDeviceActivityLevel;
    // Nested type: OVR::OpenVR::IVRSystem::_ApplyTransform
    class _ApplyTransform;
    // Nested type: OVR::OpenVR::IVRSystem::_GetTrackedDeviceIndexForControllerRole
    class _GetTrackedDeviceIndexForControllerRole;
    // Nested type: OVR::OpenVR::IVRSystem::_GetControllerRoleForTrackedDeviceIndex
    class _GetControllerRoleForTrackedDeviceIndex;
    // Nested type: OVR::OpenVR::IVRSystem::_GetTrackedDeviceClass
    class _GetTrackedDeviceClass;
    // Nested type: OVR::OpenVR::IVRSystem::_IsTrackedDeviceConnected
    class _IsTrackedDeviceConnected;
    // Nested type: OVR::OpenVR::IVRSystem::_GetBoolTrackedDeviceProperty
    class _GetBoolTrackedDeviceProperty;
    // Nested type: OVR::OpenVR::IVRSystem::_GetFloatTrackedDeviceProperty
    class _GetFloatTrackedDeviceProperty;
    // Nested type: OVR::OpenVR::IVRSystem::_GetInt32TrackedDeviceProperty
    class _GetInt32TrackedDeviceProperty;
    // Nested type: OVR::OpenVR::IVRSystem::_GetUint64TrackedDeviceProperty
    class _GetUint64TrackedDeviceProperty;
    // Nested type: OVR::OpenVR::IVRSystem::_GetMatrix34TrackedDeviceProperty
    class _GetMatrix34TrackedDeviceProperty;
    // Nested type: OVR::OpenVR::IVRSystem::_GetArrayTrackedDeviceProperty
    class _GetArrayTrackedDeviceProperty;
    // Nested type: OVR::OpenVR::IVRSystem::_GetStringTrackedDeviceProperty
    class _GetStringTrackedDeviceProperty;
    // Nested type: OVR::OpenVR::IVRSystem::_GetPropErrorNameFromEnum
    class _GetPropErrorNameFromEnum;
    // Nested type: OVR::OpenVR::IVRSystem::_PollNextEvent
    class _PollNextEvent;
    // Nested type: OVR::OpenVR::IVRSystem::_PollNextEventWithPose
    class _PollNextEventWithPose;
    // Nested type: OVR::OpenVR::IVRSystem::_GetEventTypeNameFromEnum
    class _GetEventTypeNameFromEnum;
    // Nested type: OVR::OpenVR::IVRSystem::_GetHiddenAreaMesh
    class _GetHiddenAreaMesh;
    // Nested type: OVR::OpenVR::IVRSystem::_GetControllerState
    class _GetControllerState;
    // Nested type: OVR::OpenVR::IVRSystem::_GetControllerStateWithPose
    class _GetControllerStateWithPose;
    // Nested type: OVR::OpenVR::IVRSystem::_TriggerHapticPulse
    class _TriggerHapticPulse;
    // Nested type: OVR::OpenVR::IVRSystem::_GetButtonIdNameFromEnum
    class _GetButtonIdNameFromEnum;
    // Nested type: OVR::OpenVR::IVRSystem::_GetControllerAxisTypeNameFromEnum
    class _GetControllerAxisTypeNameFromEnum;
    // Nested type: OVR::OpenVR::IVRSystem::_IsInputAvailable
    class _IsInputAvailable;
    // Nested type: OVR::OpenVR::IVRSystem::_IsSteamVRDrawingControllers
    class _IsSteamVRDrawingControllers;
    // Nested type: OVR::OpenVR::IVRSystem::_ShouldApplicationPause
    class _ShouldApplicationPause;
    // Nested type: OVR::OpenVR::IVRSystem::_ShouldApplicationReduceRenderingWork
    class _ShouldApplicationReduceRenderingWork;
    // Nested type: OVR::OpenVR::IVRSystem::_DriverDebugRequest
    class _DriverDebugRequest;
    // Nested type: OVR::OpenVR::IVRSystem::_PerformFirmwareUpdate
    class _PerformFirmwareUpdate;
    // Nested type: OVR::OpenVR::IVRSystem::_AcknowledgeQuit_Exiting
    class _AcknowledgeQuit_Exiting;
    // Nested type: OVR::OpenVR::IVRSystem::_AcknowledgeQuit_UserPrompt
    class _AcknowledgeQuit_UserPrompt;
    // OVR.OpenVR.IVRSystem/OVR.OpenVR._GetRecommendedRenderTargetSize GetRecommendedRenderTargetSize
    // Size: 0x8
    // Offset: 0x0
    OVR::OpenVR::IVRSystem::_GetRecommendedRenderTargetSize* GetRecommendedRenderTargetSize;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRSystem::_GetRecommendedRenderTargetSize*) == 0x8);
    // OVR.OpenVR.IVRSystem/OVR.OpenVR._GetProjectionMatrix GetProjectionMatrix
    // Size: 0x8
    // Offset: 0x8
    OVR::OpenVR::IVRSystem::_GetProjectionMatrix* GetProjectionMatrix;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRSystem::_GetProjectionMatrix*) == 0x8);
    // OVR.OpenVR.IVRSystem/OVR.OpenVR._GetProjectionRaw GetProjectionRaw
    // Size: 0x8
    // Offset: 0x10
    OVR::OpenVR::IVRSystem::_GetProjectionRaw* GetProjectionRaw;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRSystem::_GetProjectionRaw*) == 0x8);
    // OVR.OpenVR.IVRSystem/OVR.OpenVR._ComputeDistortion ComputeDistortion
    // Size: 0x8
    // Offset: 0x18
    OVR::OpenVR::IVRSystem::_ComputeDistortion* ComputeDistortion;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRSystem::_ComputeDistortion*) == 0x8);
    // OVR.OpenVR.IVRSystem/OVR.OpenVR._GetEyeToHeadTransform GetEyeToHeadTransform
    // Size: 0x8
    // Offset: 0x20
    OVR::OpenVR::IVRSystem::_GetEyeToHeadTransform* GetEyeToHeadTransform;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRSystem::_GetEyeToHeadTransform*) == 0x8);
    // OVR.OpenVR.IVRSystem/OVR.OpenVR._GetTimeSinceLastVsync GetTimeSinceLastVsync
    // Size: 0x8
    // Offset: 0x28
    OVR::OpenVR::IVRSystem::_GetTimeSinceLastVsync* GetTimeSinceLastVsync;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRSystem::_GetTimeSinceLastVsync*) == 0x8);
    // OVR.OpenVR.IVRSystem/OVR.OpenVR._GetD3D9AdapterIndex GetD3D9AdapterIndex
    // Size: 0x8
    // Offset: 0x30
    OVR::OpenVR::IVRSystem::_GetD3D9AdapterIndex* GetD3D9AdapterIndex;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRSystem::_GetD3D9AdapterIndex*) == 0x8);
    // OVR.OpenVR.IVRSystem/OVR.OpenVR._GetDXGIOutputInfo GetDXGIOutputInfo
    // Size: 0x8
    // Offset: 0x38
    OVR::OpenVR::IVRSystem::_GetDXGIOutputInfo* GetDXGIOutputInfo;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRSystem::_GetDXGIOutputInfo*) == 0x8);
    // OVR.OpenVR.IVRSystem/OVR.OpenVR._GetOutputDevice GetOutputDevice
    // Size: 0x8
    // Offset: 0x40
    OVR::OpenVR::IVRSystem::_GetOutputDevice* GetOutputDevice;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRSystem::_GetOutputDevice*) == 0x8);
    // OVR.OpenVR.IVRSystem/OVR.OpenVR._IsDisplayOnDesktop IsDisplayOnDesktop
    // Size: 0x8
    // Offset: 0x48
    OVR::OpenVR::IVRSystem::_IsDisplayOnDesktop* IsDisplayOnDesktop;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRSystem::_IsDisplayOnDesktop*) == 0x8);
    // OVR.OpenVR.IVRSystem/OVR.OpenVR._SetDisplayVisibility SetDisplayVisibility
    // Size: 0x8
    // Offset: 0x50
    OVR::OpenVR::IVRSystem::_SetDisplayVisibility* SetDisplayVisibility;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRSystem::_SetDisplayVisibility*) == 0x8);
    // OVR.OpenVR.IVRSystem/OVR.OpenVR._GetDeviceToAbsoluteTrackingPose GetDeviceToAbsoluteTrackingPose
    // Size: 0x8
    // Offset: 0x58
    OVR::OpenVR::IVRSystem::_GetDeviceToAbsoluteTrackingPose* GetDeviceToAbsoluteTrackingPose;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRSystem::_GetDeviceToAbsoluteTrackingPose*) == 0x8);
    // OVR.OpenVR.IVRSystem/OVR.OpenVR._ResetSeatedZeroPose ResetSeatedZeroPose
    // Size: 0x8
    // Offset: 0x60
    OVR::OpenVR::IVRSystem::_ResetSeatedZeroPose* ResetSeatedZeroPose;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRSystem::_ResetSeatedZeroPose*) == 0x8);
    // OVR.OpenVR.IVRSystem/OVR.OpenVR._GetSeatedZeroPoseToStandingAbsoluteTrackingPose GetSeatedZeroPoseToStandingAbsoluteTrackingPose
    // Size: 0x8
    // Offset: 0x68
    OVR::OpenVR::IVRSystem::_GetSeatedZeroPoseToStandingAbsoluteTrackingPose* GetSeatedZeroPoseToStandingAbsoluteTrackingPose;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRSystem::_GetSeatedZeroPoseToStandingAbsoluteTrackingPose*) == 0x8);
    // OVR.OpenVR.IVRSystem/OVR.OpenVR._GetRawZeroPoseToStandingAbsoluteTrackingPose GetRawZeroPoseToStandingAbsoluteTrackingPose
    // Size: 0x8
    // Offset: 0x70
    OVR::OpenVR::IVRSystem::_GetRawZeroPoseToStandingAbsoluteTrackingPose* GetRawZeroPoseToStandingAbsoluteTrackingPose;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRSystem::_GetRawZeroPoseToStandingAbsoluteTrackingPose*) == 0x8);
    // OVR.OpenVR.IVRSystem/OVR.OpenVR._GetSortedTrackedDeviceIndicesOfClass GetSortedTrackedDeviceIndicesOfClass
    // Size: 0x8
    // Offset: 0x78
    OVR::OpenVR::IVRSystem::_GetSortedTrackedDeviceIndicesOfClass* GetSortedTrackedDeviceIndicesOfClass;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRSystem::_GetSortedTrackedDeviceIndicesOfClass*) == 0x8);
    // OVR.OpenVR.IVRSystem/OVR.OpenVR._GetTrackedDeviceActivityLevel GetTrackedDeviceActivityLevel
    // Size: 0x8
    // Offset: 0x80
    OVR::OpenVR::IVRSystem::_GetTrackedDeviceActivityLevel* GetTrackedDeviceActivityLevel;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRSystem::_GetTrackedDeviceActivityLevel*) == 0x8);
    // OVR.OpenVR.IVRSystem/OVR.OpenVR._ApplyTransform ApplyTransform
    // Size: 0x8
    // Offset: 0x88
    OVR::OpenVR::IVRSystem::_ApplyTransform* ApplyTransform;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRSystem::_ApplyTransform*) == 0x8);
    // OVR.OpenVR.IVRSystem/OVR.OpenVR._GetTrackedDeviceIndexForControllerRole GetTrackedDeviceIndexForControllerRole
    // Size: 0x8
    // Offset: 0x90
    OVR::OpenVR::IVRSystem::_GetTrackedDeviceIndexForControllerRole* GetTrackedDeviceIndexForControllerRole;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRSystem::_GetTrackedDeviceIndexForControllerRole*) == 0x8);
    // OVR.OpenVR.IVRSystem/OVR.OpenVR._GetControllerRoleForTrackedDeviceIndex GetControllerRoleForTrackedDeviceIndex
    // Size: 0x8
    // Offset: 0x98
    OVR::OpenVR::IVRSystem::_GetControllerRoleForTrackedDeviceIndex* GetControllerRoleForTrackedDeviceIndex;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRSystem::_GetControllerRoleForTrackedDeviceIndex*) == 0x8);
    // OVR.OpenVR.IVRSystem/OVR.OpenVR._GetTrackedDeviceClass GetTrackedDeviceClass
    // Size: 0x8
    // Offset: 0xA0
    OVR::OpenVR::IVRSystem::_GetTrackedDeviceClass* GetTrackedDeviceClass;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRSystem::_GetTrackedDeviceClass*) == 0x8);
    // OVR.OpenVR.IVRSystem/OVR.OpenVR._IsTrackedDeviceConnected IsTrackedDeviceConnected
    // Size: 0x8
    // Offset: 0xA8
    OVR::OpenVR::IVRSystem::_IsTrackedDeviceConnected* IsTrackedDeviceConnected;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRSystem::_IsTrackedDeviceConnected*) == 0x8);
    // OVR.OpenVR.IVRSystem/OVR.OpenVR._GetBoolTrackedDeviceProperty GetBoolTrackedDeviceProperty
    // Size: 0x8
    // Offset: 0xB0
    OVR::OpenVR::IVRSystem::_GetBoolTrackedDeviceProperty* GetBoolTrackedDeviceProperty;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRSystem::_GetBoolTrackedDeviceProperty*) == 0x8);
    // OVR.OpenVR.IVRSystem/OVR.OpenVR._GetFloatTrackedDeviceProperty GetFloatTrackedDeviceProperty
    // Size: 0x8
    // Offset: 0xB8
    OVR::OpenVR::IVRSystem::_GetFloatTrackedDeviceProperty* GetFloatTrackedDeviceProperty;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRSystem::_GetFloatTrackedDeviceProperty*) == 0x8);
    // OVR.OpenVR.IVRSystem/OVR.OpenVR._GetInt32TrackedDeviceProperty GetInt32TrackedDeviceProperty
    // Size: 0x8
    // Offset: 0xC0
    OVR::OpenVR::IVRSystem::_GetInt32TrackedDeviceProperty* GetInt32TrackedDeviceProperty;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRSystem::_GetInt32TrackedDeviceProperty*) == 0x8);
    // OVR.OpenVR.IVRSystem/OVR.OpenVR._GetUint64TrackedDeviceProperty GetUint64TrackedDeviceProperty
    // Size: 0x8
    // Offset: 0xC8
    OVR::OpenVR::IVRSystem::_GetUint64TrackedDeviceProperty* GetUint64TrackedDeviceProperty;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRSystem::_GetUint64TrackedDeviceProperty*) == 0x8);
    // OVR.OpenVR.IVRSystem/OVR.OpenVR._GetMatrix34TrackedDeviceProperty GetMatrix34TrackedDeviceProperty
    // Size: 0x8
    // Offset: 0xD0
    OVR::OpenVR::IVRSystem::_GetMatrix34TrackedDeviceProperty* GetMatrix34TrackedDeviceProperty;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRSystem::_GetMatrix34TrackedDeviceProperty*) == 0x8);
    // OVR.OpenVR.IVRSystem/OVR.OpenVR._GetArrayTrackedDeviceProperty GetArrayTrackedDeviceProperty
    // Size: 0x8
    // Offset: 0xD8
    OVR::OpenVR::IVRSystem::_GetArrayTrackedDeviceProperty* GetArrayTrackedDeviceProperty;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRSystem::_GetArrayTrackedDeviceProperty*) == 0x8);
    // OVR.OpenVR.IVRSystem/OVR.OpenVR._GetStringTrackedDeviceProperty GetStringTrackedDeviceProperty
    // Size: 0x8
    // Offset: 0xE0
    OVR::OpenVR::IVRSystem::_GetStringTrackedDeviceProperty* GetStringTrackedDeviceProperty;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRSystem::_GetStringTrackedDeviceProperty*) == 0x8);
    // OVR.OpenVR.IVRSystem/OVR.OpenVR._GetPropErrorNameFromEnum GetPropErrorNameFromEnum
    // Size: 0x8
    // Offset: 0xE8
    OVR::OpenVR::IVRSystem::_GetPropErrorNameFromEnum* GetPropErrorNameFromEnum;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRSystem::_GetPropErrorNameFromEnum*) == 0x8);
    // OVR.OpenVR.IVRSystem/OVR.OpenVR._PollNextEvent PollNextEvent
    // Size: 0x8
    // Offset: 0xF0
    OVR::OpenVR::IVRSystem::_PollNextEvent* PollNextEvent;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRSystem::_PollNextEvent*) == 0x8);
    // OVR.OpenVR.IVRSystem/OVR.OpenVR._PollNextEventWithPose PollNextEventWithPose
    // Size: 0x8
    // Offset: 0xF8
    OVR::OpenVR::IVRSystem::_PollNextEventWithPose* PollNextEventWithPose;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRSystem::_PollNextEventWithPose*) == 0x8);
    // OVR.OpenVR.IVRSystem/OVR.OpenVR._GetEventTypeNameFromEnum GetEventTypeNameFromEnum
    // Size: 0x8
    // Offset: 0x100
    OVR::OpenVR::IVRSystem::_GetEventTypeNameFromEnum* GetEventTypeNameFromEnum;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRSystem::_GetEventTypeNameFromEnum*) == 0x8);
    // OVR.OpenVR.IVRSystem/OVR.OpenVR._GetHiddenAreaMesh GetHiddenAreaMesh
    // Size: 0x8
    // Offset: 0x108
    OVR::OpenVR::IVRSystem::_GetHiddenAreaMesh* GetHiddenAreaMesh;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRSystem::_GetHiddenAreaMesh*) == 0x8);
    // OVR.OpenVR.IVRSystem/OVR.OpenVR._GetControllerState GetControllerState
    // Size: 0x8
    // Offset: 0x110
    OVR::OpenVR::IVRSystem::_GetControllerState* GetControllerState;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRSystem::_GetControllerState*) == 0x8);
    // OVR.OpenVR.IVRSystem/OVR.OpenVR._GetControllerStateWithPose GetControllerStateWithPose
    // Size: 0x8
    // Offset: 0x118
    OVR::OpenVR::IVRSystem::_GetControllerStateWithPose* GetControllerStateWithPose;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRSystem::_GetControllerStateWithPose*) == 0x8);
    // OVR.OpenVR.IVRSystem/OVR.OpenVR._TriggerHapticPulse TriggerHapticPulse
    // Size: 0x8
    // Offset: 0x120
    OVR::OpenVR::IVRSystem::_TriggerHapticPulse* TriggerHapticPulse;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRSystem::_TriggerHapticPulse*) == 0x8);
    // OVR.OpenVR.IVRSystem/OVR.OpenVR._GetButtonIdNameFromEnum GetButtonIdNameFromEnum
    // Size: 0x8
    // Offset: 0x128
    OVR::OpenVR::IVRSystem::_GetButtonIdNameFromEnum* GetButtonIdNameFromEnum;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRSystem::_GetButtonIdNameFromEnum*) == 0x8);
    // OVR.OpenVR.IVRSystem/OVR.OpenVR._GetControllerAxisTypeNameFromEnum GetControllerAxisTypeNameFromEnum
    // Size: 0x8
    // Offset: 0x130
    OVR::OpenVR::IVRSystem::_GetControllerAxisTypeNameFromEnum* GetControllerAxisTypeNameFromEnum;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRSystem::_GetControllerAxisTypeNameFromEnum*) == 0x8);
    // OVR.OpenVR.IVRSystem/OVR.OpenVR._IsInputAvailable IsInputAvailable
    // Size: 0x8
    // Offset: 0x138
    OVR::OpenVR::IVRSystem::_IsInputAvailable* IsInputAvailable;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRSystem::_IsInputAvailable*) == 0x8);
    // OVR.OpenVR.IVRSystem/OVR.OpenVR._IsSteamVRDrawingControllers IsSteamVRDrawingControllers
    // Size: 0x8
    // Offset: 0x140
    OVR::OpenVR::IVRSystem::_IsSteamVRDrawingControllers* IsSteamVRDrawingControllers;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRSystem::_IsSteamVRDrawingControllers*) == 0x8);
    // OVR.OpenVR.IVRSystem/OVR.OpenVR._ShouldApplicationPause ShouldApplicationPause
    // Size: 0x8
    // Offset: 0x148
    OVR::OpenVR::IVRSystem::_ShouldApplicationPause* ShouldApplicationPause;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRSystem::_ShouldApplicationPause*) == 0x8);
    // OVR.OpenVR.IVRSystem/OVR.OpenVR._ShouldApplicationReduceRenderingWork ShouldApplicationReduceRenderingWork
    // Size: 0x8
    // Offset: 0x150
    OVR::OpenVR::IVRSystem::_ShouldApplicationReduceRenderingWork* ShouldApplicationReduceRenderingWork;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRSystem::_ShouldApplicationReduceRenderingWork*) == 0x8);
    // OVR.OpenVR.IVRSystem/OVR.OpenVR._DriverDebugRequest DriverDebugRequest
    // Size: 0x8
    // Offset: 0x158
    OVR::OpenVR::IVRSystem::_DriverDebugRequest* DriverDebugRequest;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRSystem::_DriverDebugRequest*) == 0x8);
    // OVR.OpenVR.IVRSystem/OVR.OpenVR._PerformFirmwareUpdate PerformFirmwareUpdate
    // Size: 0x8
    // Offset: 0x160
    OVR::OpenVR::IVRSystem::_PerformFirmwareUpdate* PerformFirmwareUpdate;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRSystem::_PerformFirmwareUpdate*) == 0x8);
    // OVR.OpenVR.IVRSystem/OVR.OpenVR._AcknowledgeQuit_Exiting AcknowledgeQuit_Exiting
    // Size: 0x8
    // Offset: 0x168
    OVR::OpenVR::IVRSystem::_AcknowledgeQuit_Exiting* AcknowledgeQuit_Exiting;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRSystem::_AcknowledgeQuit_Exiting*) == 0x8);
    // OVR.OpenVR.IVRSystem/OVR.OpenVR._AcknowledgeQuit_UserPrompt AcknowledgeQuit_UserPrompt
    // Size: 0x8
    // Offset: 0x170
    OVR::OpenVR::IVRSystem::_AcknowledgeQuit_UserPrompt* AcknowledgeQuit_UserPrompt;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRSystem::_AcknowledgeQuit_UserPrompt*) == 0x8);
    // Creating value type constructor for type: IVRSystem
    constexpr IVRSystem(OVR::OpenVR::IVRSystem::_GetRecommendedRenderTargetSize* GetRecommendedRenderTargetSize_ = {}, OVR::OpenVR::IVRSystem::_GetProjectionMatrix* GetProjectionMatrix_ = {}, OVR::OpenVR::IVRSystem::_GetProjectionRaw* GetProjectionRaw_ = {}, OVR::OpenVR::IVRSystem::_ComputeDistortion* ComputeDistortion_ = {}, OVR::OpenVR::IVRSystem::_GetEyeToHeadTransform* GetEyeToHeadTransform_ = {}, OVR::OpenVR::IVRSystem::_GetTimeSinceLastVsync* GetTimeSinceLastVsync_ = {}, OVR::OpenVR::IVRSystem::_GetD3D9AdapterIndex* GetD3D9AdapterIndex_ = {}, OVR::OpenVR::IVRSystem::_GetDXGIOutputInfo* GetDXGIOutputInfo_ = {}, OVR::OpenVR::IVRSystem::_GetOutputDevice* GetOutputDevice_ = {}, OVR::OpenVR::IVRSystem::_IsDisplayOnDesktop* IsDisplayOnDesktop_ = {}, OVR::OpenVR::IVRSystem::_SetDisplayVisibility* SetDisplayVisibility_ = {}, OVR::OpenVR::IVRSystem::_GetDeviceToAbsoluteTrackingPose* GetDeviceToAbsoluteTrackingPose_ = {}, OVR::OpenVR::IVRSystem::_ResetSeatedZeroPose* ResetSeatedZeroPose_ = {}, OVR::OpenVR::IVRSystem::_GetSeatedZeroPoseToStandingAbsoluteTrackingPose* GetSeatedZeroPoseToStandingAbsoluteTrackingPose_ = {}, OVR::OpenVR::IVRSystem::_GetRawZeroPoseToStandingAbsoluteTrackingPose* GetRawZeroPoseToStandingAbsoluteTrackingPose_ = {}, OVR::OpenVR::IVRSystem::_GetSortedTrackedDeviceIndicesOfClass* GetSortedTrackedDeviceIndicesOfClass_ = {}, OVR::OpenVR::IVRSystem::_GetTrackedDeviceActivityLevel* GetTrackedDeviceActivityLevel_ = {}, OVR::OpenVR::IVRSystem::_ApplyTransform* ApplyTransform_ = {}, OVR::OpenVR::IVRSystem::_GetTrackedDeviceIndexForControllerRole* GetTrackedDeviceIndexForControllerRole_ = {}, OVR::OpenVR::IVRSystem::_GetControllerRoleForTrackedDeviceIndex* GetControllerRoleForTrackedDeviceIndex_ = {}, OVR::OpenVR::IVRSystem::_GetTrackedDeviceClass* GetTrackedDeviceClass_ = {}, OVR::OpenVR::IVRSystem::_IsTrackedDeviceConnected* IsTrackedDeviceConnected_ = {}, OVR::OpenVR::IVRSystem::_GetBoolTrackedDeviceProperty* GetBoolTrackedDeviceProperty_ = {}, OVR::OpenVR::IVRSystem::_GetFloatTrackedDeviceProperty* GetFloatTrackedDeviceProperty_ = {}, OVR::OpenVR::IVRSystem::_GetInt32TrackedDeviceProperty* GetInt32TrackedDeviceProperty_ = {}, OVR::OpenVR::IVRSystem::_GetUint64TrackedDeviceProperty* GetUint64TrackedDeviceProperty_ = {}, OVR::OpenVR::IVRSystem::_GetMatrix34TrackedDeviceProperty* GetMatrix34TrackedDeviceProperty_ = {}, OVR::OpenVR::IVRSystem::_GetArrayTrackedDeviceProperty* GetArrayTrackedDeviceProperty_ = {}, OVR::OpenVR::IVRSystem::_GetStringTrackedDeviceProperty* GetStringTrackedDeviceProperty_ = {}, OVR::OpenVR::IVRSystem::_GetPropErrorNameFromEnum* GetPropErrorNameFromEnum_ = {}, OVR::OpenVR::IVRSystem::_PollNextEvent* PollNextEvent_ = {}, OVR::OpenVR::IVRSystem::_PollNextEventWithPose* PollNextEventWithPose_ = {}, OVR::OpenVR::IVRSystem::_GetEventTypeNameFromEnum* GetEventTypeNameFromEnum_ = {}, OVR::OpenVR::IVRSystem::_GetHiddenAreaMesh* GetHiddenAreaMesh_ = {}, OVR::OpenVR::IVRSystem::_GetControllerState* GetControllerState_ = {}, OVR::OpenVR::IVRSystem::_GetControllerStateWithPose* GetControllerStateWithPose_ = {}, OVR::OpenVR::IVRSystem::_TriggerHapticPulse* TriggerHapticPulse_ = {}, OVR::OpenVR::IVRSystem::_GetButtonIdNameFromEnum* GetButtonIdNameFromEnum_ = {}, OVR::OpenVR::IVRSystem::_GetControllerAxisTypeNameFromEnum* GetControllerAxisTypeNameFromEnum_ = {}, OVR::OpenVR::IVRSystem::_IsInputAvailable* IsInputAvailable_ = {}, OVR::OpenVR::IVRSystem::_IsSteamVRDrawingControllers* IsSteamVRDrawingControllers_ = {}, OVR::OpenVR::IVRSystem::_ShouldApplicationPause* ShouldApplicationPause_ = {}, OVR::OpenVR::IVRSystem::_ShouldApplicationReduceRenderingWork* ShouldApplicationReduceRenderingWork_ = {}, OVR::OpenVR::IVRSystem::_DriverDebugRequest* DriverDebugRequest_ = {}, OVR::OpenVR::IVRSystem::_PerformFirmwareUpdate* PerformFirmwareUpdate_ = {}, OVR::OpenVR::IVRSystem::_AcknowledgeQuit_Exiting* AcknowledgeQuit_Exiting_ = {}, OVR::OpenVR::IVRSystem::_AcknowledgeQuit_UserPrompt* AcknowledgeQuit_UserPrompt_ = {}) noexcept : GetRecommendedRenderTargetSize{GetRecommendedRenderTargetSize_}, GetProjectionMatrix{GetProjectionMatrix_}, GetProjectionRaw{GetProjectionRaw_}, ComputeDistortion{ComputeDistortion_}, GetEyeToHeadTransform{GetEyeToHeadTransform_}, GetTimeSinceLastVsync{GetTimeSinceLastVsync_}, GetD3D9AdapterIndex{GetD3D9AdapterIndex_}, GetDXGIOutputInfo{GetDXGIOutputInfo_}, GetOutputDevice{GetOutputDevice_}, IsDisplayOnDesktop{IsDisplayOnDesktop_}, SetDisplayVisibility{SetDisplayVisibility_}, GetDeviceToAbsoluteTrackingPose{GetDeviceToAbsoluteTrackingPose_}, ResetSeatedZeroPose{ResetSeatedZeroPose_}, GetSeatedZeroPoseToStandingAbsoluteTrackingPose{GetSeatedZeroPoseToStandingAbsoluteTrackingPose_}, GetRawZeroPoseToStandingAbsoluteTrackingPose{GetRawZeroPoseToStandingAbsoluteTrackingPose_}, GetSortedTrackedDeviceIndicesOfClass{GetSortedTrackedDeviceIndicesOfClass_}, GetTrackedDeviceActivityLevel{GetTrackedDeviceActivityLevel_}, ApplyTransform{ApplyTransform_}, GetTrackedDeviceIndexForControllerRole{GetTrackedDeviceIndexForControllerRole_}, GetControllerRoleForTrackedDeviceIndex{GetControllerRoleForTrackedDeviceIndex_}, GetTrackedDeviceClass{GetTrackedDeviceClass_}, IsTrackedDeviceConnected{IsTrackedDeviceConnected_}, GetBoolTrackedDeviceProperty{GetBoolTrackedDeviceProperty_}, GetFloatTrackedDeviceProperty{GetFloatTrackedDeviceProperty_}, GetInt32TrackedDeviceProperty{GetInt32TrackedDeviceProperty_}, GetUint64TrackedDeviceProperty{GetUint64TrackedDeviceProperty_}, GetMatrix34TrackedDeviceProperty{GetMatrix34TrackedDeviceProperty_}, GetArrayTrackedDeviceProperty{GetArrayTrackedDeviceProperty_}, GetStringTrackedDeviceProperty{GetStringTrackedDeviceProperty_}, GetPropErrorNameFromEnum{GetPropErrorNameFromEnum_}, PollNextEvent{PollNextEvent_}, PollNextEventWithPose{PollNextEventWithPose_}, GetEventTypeNameFromEnum{GetEventTypeNameFromEnum_}, GetHiddenAreaMesh{GetHiddenAreaMesh_}, GetControllerState{GetControllerState_}, GetControllerStateWithPose{GetControllerStateWithPose_}, TriggerHapticPulse{TriggerHapticPulse_}, GetButtonIdNameFromEnum{GetButtonIdNameFromEnum_}, GetControllerAxisTypeNameFromEnum{GetControllerAxisTypeNameFromEnum_}, IsInputAvailable{IsInputAvailable_}, IsSteamVRDrawingControllers{IsSteamVRDrawingControllers_}, ShouldApplicationPause{ShouldApplicationPause_}, ShouldApplicationReduceRenderingWork{ShouldApplicationReduceRenderingWork_}, DriverDebugRequest{DriverDebugRequest_}, PerformFirmwareUpdate{PerformFirmwareUpdate_}, AcknowledgeQuit_Exiting{AcknowledgeQuit_Exiting_}, AcknowledgeQuit_UserPrompt{AcknowledgeQuit_UserPrompt_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: OVR.OpenVR.IVRSystem/OVR.OpenVR._GetRecommendedRenderTargetSize GetRecommendedRenderTargetSize
    OVR::OpenVR::IVRSystem::_GetRecommendedRenderTargetSize*& dyn_GetRecommendedRenderTargetSize();
    // Get instance field reference: OVR.OpenVR.IVRSystem/OVR.OpenVR._GetProjectionMatrix GetProjectionMatrix
    OVR::OpenVR::IVRSystem::_GetProjectionMatrix*& dyn_GetProjectionMatrix();
    // Get instance field reference: OVR.OpenVR.IVRSystem/OVR.OpenVR._GetProjectionRaw GetProjectionRaw
    OVR::OpenVR::IVRSystem::_GetProjectionRaw*& dyn_GetProjectionRaw();
    // Get instance field reference: OVR.OpenVR.IVRSystem/OVR.OpenVR._ComputeDistortion ComputeDistortion
    OVR::OpenVR::IVRSystem::_ComputeDistortion*& dyn_ComputeDistortion();
    // Get instance field reference: OVR.OpenVR.IVRSystem/OVR.OpenVR._GetEyeToHeadTransform GetEyeToHeadTransform
    OVR::OpenVR::IVRSystem::_GetEyeToHeadTransform*& dyn_GetEyeToHeadTransform();
    // Get instance field reference: OVR.OpenVR.IVRSystem/OVR.OpenVR._GetTimeSinceLastVsync GetTimeSinceLastVsync
    OVR::OpenVR::IVRSystem::_GetTimeSinceLastVsync*& dyn_GetTimeSinceLastVsync();
    // Get instance field reference: OVR.OpenVR.IVRSystem/OVR.OpenVR._GetD3D9AdapterIndex GetD3D9AdapterIndex
    OVR::OpenVR::IVRSystem::_GetD3D9AdapterIndex*& dyn_GetD3D9AdapterIndex();
    // Get instance field reference: OVR.OpenVR.IVRSystem/OVR.OpenVR._GetDXGIOutputInfo GetDXGIOutputInfo
    OVR::OpenVR::IVRSystem::_GetDXGIOutputInfo*& dyn_GetDXGIOutputInfo();
    // Get instance field reference: OVR.OpenVR.IVRSystem/OVR.OpenVR._GetOutputDevice GetOutputDevice
    OVR::OpenVR::IVRSystem::_GetOutputDevice*& dyn_GetOutputDevice();
    // Get instance field reference: OVR.OpenVR.IVRSystem/OVR.OpenVR._IsDisplayOnDesktop IsDisplayOnDesktop
    OVR::OpenVR::IVRSystem::_IsDisplayOnDesktop*& dyn_IsDisplayOnDesktop();
    // Get instance field reference: OVR.OpenVR.IVRSystem/OVR.OpenVR._SetDisplayVisibility SetDisplayVisibility
    OVR::OpenVR::IVRSystem::_SetDisplayVisibility*& dyn_SetDisplayVisibility();
    // Get instance field reference: OVR.OpenVR.IVRSystem/OVR.OpenVR._GetDeviceToAbsoluteTrackingPose GetDeviceToAbsoluteTrackingPose
    OVR::OpenVR::IVRSystem::_GetDeviceToAbsoluteTrackingPose*& dyn_GetDeviceToAbsoluteTrackingPose();
    // Get instance field reference: OVR.OpenVR.IVRSystem/OVR.OpenVR._ResetSeatedZeroPose ResetSeatedZeroPose
    OVR::OpenVR::IVRSystem::_ResetSeatedZeroPose*& dyn_ResetSeatedZeroPose();
    // Get instance field reference: OVR.OpenVR.IVRSystem/OVR.OpenVR._GetSeatedZeroPoseToStandingAbsoluteTrackingPose GetSeatedZeroPoseToStandingAbsoluteTrackingPose
    OVR::OpenVR::IVRSystem::_GetSeatedZeroPoseToStandingAbsoluteTrackingPose*& dyn_GetSeatedZeroPoseToStandingAbsoluteTrackingPose();
    // Get instance field reference: OVR.OpenVR.IVRSystem/OVR.OpenVR._GetRawZeroPoseToStandingAbsoluteTrackingPose GetRawZeroPoseToStandingAbsoluteTrackingPose
    OVR::OpenVR::IVRSystem::_GetRawZeroPoseToStandingAbsoluteTrackingPose*& dyn_GetRawZeroPoseToStandingAbsoluteTrackingPose();
    // Get instance field reference: OVR.OpenVR.IVRSystem/OVR.OpenVR._GetSortedTrackedDeviceIndicesOfClass GetSortedTrackedDeviceIndicesOfClass
    OVR::OpenVR::IVRSystem::_GetSortedTrackedDeviceIndicesOfClass*& dyn_GetSortedTrackedDeviceIndicesOfClass();
    // Get instance field reference: OVR.OpenVR.IVRSystem/OVR.OpenVR._GetTrackedDeviceActivityLevel GetTrackedDeviceActivityLevel
    OVR::OpenVR::IVRSystem::_GetTrackedDeviceActivityLevel*& dyn_GetTrackedDeviceActivityLevel();
    // Get instance field reference: OVR.OpenVR.IVRSystem/OVR.OpenVR._ApplyTransform ApplyTransform
    OVR::OpenVR::IVRSystem::_ApplyTransform*& dyn_ApplyTransform();
    // Get instance field reference: OVR.OpenVR.IVRSystem/OVR.OpenVR._GetTrackedDeviceIndexForControllerRole GetTrackedDeviceIndexForControllerRole
    OVR::OpenVR::IVRSystem::_GetTrackedDeviceIndexForControllerRole*& dyn_GetTrackedDeviceIndexForControllerRole();
    // Get instance field reference: OVR.OpenVR.IVRSystem/OVR.OpenVR._GetControllerRoleForTrackedDeviceIndex GetControllerRoleForTrackedDeviceIndex
    OVR::OpenVR::IVRSystem::_GetControllerRoleForTrackedDeviceIndex*& dyn_GetControllerRoleForTrackedDeviceIndex();
    // Get instance field reference: OVR.OpenVR.IVRSystem/OVR.OpenVR._GetTrackedDeviceClass GetTrackedDeviceClass
    OVR::OpenVR::IVRSystem::_GetTrackedDeviceClass*& dyn_GetTrackedDeviceClass();
    // Get instance field reference: OVR.OpenVR.IVRSystem/OVR.OpenVR._IsTrackedDeviceConnected IsTrackedDeviceConnected
    OVR::OpenVR::IVRSystem::_IsTrackedDeviceConnected*& dyn_IsTrackedDeviceConnected();
    // Get instance field reference: OVR.OpenVR.IVRSystem/OVR.OpenVR._GetBoolTrackedDeviceProperty GetBoolTrackedDeviceProperty
    OVR::OpenVR::IVRSystem::_GetBoolTrackedDeviceProperty*& dyn_GetBoolTrackedDeviceProperty();
    // Get instance field reference: OVR.OpenVR.IVRSystem/OVR.OpenVR._GetFloatTrackedDeviceProperty GetFloatTrackedDeviceProperty
    OVR::OpenVR::IVRSystem::_GetFloatTrackedDeviceProperty*& dyn_GetFloatTrackedDeviceProperty();
    // Get instance field reference: OVR.OpenVR.IVRSystem/OVR.OpenVR._GetInt32TrackedDeviceProperty GetInt32TrackedDeviceProperty
    OVR::OpenVR::IVRSystem::_GetInt32TrackedDeviceProperty*& dyn_GetInt32TrackedDeviceProperty();
    // Get instance field reference: OVR.OpenVR.IVRSystem/OVR.OpenVR._GetUint64TrackedDeviceProperty GetUint64TrackedDeviceProperty
    OVR::OpenVR::IVRSystem::_GetUint64TrackedDeviceProperty*& dyn_GetUint64TrackedDeviceProperty();
    // Get instance field reference: OVR.OpenVR.IVRSystem/OVR.OpenVR._GetMatrix34TrackedDeviceProperty GetMatrix34TrackedDeviceProperty
    OVR::OpenVR::IVRSystem::_GetMatrix34TrackedDeviceProperty*& dyn_GetMatrix34TrackedDeviceProperty();
    // Get instance field reference: OVR.OpenVR.IVRSystem/OVR.OpenVR._GetArrayTrackedDeviceProperty GetArrayTrackedDeviceProperty
    OVR::OpenVR::IVRSystem::_GetArrayTrackedDeviceProperty*& dyn_GetArrayTrackedDeviceProperty();
    // Get instance field reference: OVR.OpenVR.IVRSystem/OVR.OpenVR._GetStringTrackedDeviceProperty GetStringTrackedDeviceProperty
    OVR::OpenVR::IVRSystem::_GetStringTrackedDeviceProperty*& dyn_GetStringTrackedDeviceProperty();
    // Get instance field reference: OVR.OpenVR.IVRSystem/OVR.OpenVR._GetPropErrorNameFromEnum GetPropErrorNameFromEnum
    OVR::OpenVR::IVRSystem::_GetPropErrorNameFromEnum*& dyn_GetPropErrorNameFromEnum();
    // Get instance field reference: OVR.OpenVR.IVRSystem/OVR.OpenVR._PollNextEvent PollNextEvent
    OVR::OpenVR::IVRSystem::_PollNextEvent*& dyn_PollNextEvent();
    // Get instance field reference: OVR.OpenVR.IVRSystem/OVR.OpenVR._PollNextEventWithPose PollNextEventWithPose
    OVR::OpenVR::IVRSystem::_PollNextEventWithPose*& dyn_PollNextEventWithPose();
    // Get instance field reference: OVR.OpenVR.IVRSystem/OVR.OpenVR._GetEventTypeNameFromEnum GetEventTypeNameFromEnum
    OVR::OpenVR::IVRSystem::_GetEventTypeNameFromEnum*& dyn_GetEventTypeNameFromEnum();
    // Get instance field reference: OVR.OpenVR.IVRSystem/OVR.OpenVR._GetHiddenAreaMesh GetHiddenAreaMesh
    OVR::OpenVR::IVRSystem::_GetHiddenAreaMesh*& dyn_GetHiddenAreaMesh();
    // Get instance field reference: OVR.OpenVR.IVRSystem/OVR.OpenVR._GetControllerState GetControllerState
    OVR::OpenVR::IVRSystem::_GetControllerState*& dyn_GetControllerState();
    // Get instance field reference: OVR.OpenVR.IVRSystem/OVR.OpenVR._GetControllerStateWithPose GetControllerStateWithPose
    OVR::OpenVR::IVRSystem::_GetControllerStateWithPose*& dyn_GetControllerStateWithPose();
    // Get instance field reference: OVR.OpenVR.IVRSystem/OVR.OpenVR._TriggerHapticPulse TriggerHapticPulse
    OVR::OpenVR::IVRSystem::_TriggerHapticPulse*& dyn_TriggerHapticPulse();
    // Get instance field reference: OVR.OpenVR.IVRSystem/OVR.OpenVR._GetButtonIdNameFromEnum GetButtonIdNameFromEnum
    OVR::OpenVR::IVRSystem::_GetButtonIdNameFromEnum*& dyn_GetButtonIdNameFromEnum();
    // Get instance field reference: OVR.OpenVR.IVRSystem/OVR.OpenVR._GetControllerAxisTypeNameFromEnum GetControllerAxisTypeNameFromEnum
    OVR::OpenVR::IVRSystem::_GetControllerAxisTypeNameFromEnum*& dyn_GetControllerAxisTypeNameFromEnum();
    // Get instance field reference: OVR.OpenVR.IVRSystem/OVR.OpenVR._IsInputAvailable IsInputAvailable
    OVR::OpenVR::IVRSystem::_IsInputAvailable*& dyn_IsInputAvailable();
    // Get instance field reference: OVR.OpenVR.IVRSystem/OVR.OpenVR._IsSteamVRDrawingControllers IsSteamVRDrawingControllers
    OVR::OpenVR::IVRSystem::_IsSteamVRDrawingControllers*& dyn_IsSteamVRDrawingControllers();
    // Get instance field reference: OVR.OpenVR.IVRSystem/OVR.OpenVR._ShouldApplicationPause ShouldApplicationPause
    OVR::OpenVR::IVRSystem::_ShouldApplicationPause*& dyn_ShouldApplicationPause();
    // Get instance field reference: OVR.OpenVR.IVRSystem/OVR.OpenVR._ShouldApplicationReduceRenderingWork ShouldApplicationReduceRenderingWork
    OVR::OpenVR::IVRSystem::_ShouldApplicationReduceRenderingWork*& dyn_ShouldApplicationReduceRenderingWork();
    // Get instance field reference: OVR.OpenVR.IVRSystem/OVR.OpenVR._DriverDebugRequest DriverDebugRequest
    OVR::OpenVR::IVRSystem::_DriverDebugRequest*& dyn_DriverDebugRequest();
    // Get instance field reference: OVR.OpenVR.IVRSystem/OVR.OpenVR._PerformFirmwareUpdate PerformFirmwareUpdate
    OVR::OpenVR::IVRSystem::_PerformFirmwareUpdate*& dyn_PerformFirmwareUpdate();
    // Get instance field reference: OVR.OpenVR.IVRSystem/OVR.OpenVR._AcknowledgeQuit_Exiting AcknowledgeQuit_Exiting
    OVR::OpenVR::IVRSystem::_AcknowledgeQuit_Exiting*& dyn_AcknowledgeQuit_Exiting();
    // Get instance field reference: OVR.OpenVR.IVRSystem/OVR.OpenVR._AcknowledgeQuit_UserPrompt AcknowledgeQuit_UserPrompt
    OVR::OpenVR::IVRSystem::_AcknowledgeQuit_UserPrompt*& dyn_AcknowledgeQuit_UserPrompt();
  }; // OVR.OpenVR.IVRSystem
  #pragma pack(pop)
  static check_size<sizeof(IVRSystem), 368 + sizeof(OVR::OpenVR::IVRSystem::_AcknowledgeQuit_UserPrompt*)> __OVR_OpenVR_IVRSystemSizeCheck;
  static_assert(sizeof(IVRSystem) == 0x178);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSystem, "OVR.OpenVR", "IVRSystem");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
