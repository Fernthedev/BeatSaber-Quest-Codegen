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
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x158
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Valve.VR.IVRCompositor
  // [TokenAttribute] Offset: FFFFFFFF
  struct IVRCompositor/*, public System::ValueType*/ {
    public:
    // Nested type: Valve::VR::IVRCompositor::_SetTrackingSpace
    class _SetTrackingSpace;
    // Nested type: Valve::VR::IVRCompositor::_GetTrackingSpace
    class _GetTrackingSpace;
    // Nested type: Valve::VR::IVRCompositor::_WaitGetPoses
    class _WaitGetPoses;
    // Nested type: Valve::VR::IVRCompositor::_GetLastPoses
    class _GetLastPoses;
    // Nested type: Valve::VR::IVRCompositor::_GetLastPoseForTrackedDeviceIndex
    class _GetLastPoseForTrackedDeviceIndex;
    // Nested type: Valve::VR::IVRCompositor::_Submit
    class _Submit;
    // Nested type: Valve::VR::IVRCompositor::_ClearLastSubmittedFrame
    class _ClearLastSubmittedFrame;
    // Nested type: Valve::VR::IVRCompositor::_PostPresentHandoff
    class _PostPresentHandoff;
    // Nested type: Valve::VR::IVRCompositor::_GetFrameTiming
    class _GetFrameTiming;
    // Nested type: Valve::VR::IVRCompositor::_GetFrameTimings
    class _GetFrameTimings;
    // Nested type: Valve::VR::IVRCompositor::_GetFrameTimeRemaining
    class _GetFrameTimeRemaining;
    // Nested type: Valve::VR::IVRCompositor::_GetCumulativeStats
    class _GetCumulativeStats;
    // Nested type: Valve::VR::IVRCompositor::_FadeToColor
    class _FadeToColor;
    // Nested type: Valve::VR::IVRCompositor::_GetCurrentFadeColor
    class _GetCurrentFadeColor;
    // Nested type: Valve::VR::IVRCompositor::_FadeGrid
    class _FadeGrid;
    // Nested type: Valve::VR::IVRCompositor::_GetCurrentGridAlpha
    class _GetCurrentGridAlpha;
    // Nested type: Valve::VR::IVRCompositor::_SetSkyboxOverride
    class _SetSkyboxOverride;
    // Nested type: Valve::VR::IVRCompositor::_ClearSkyboxOverride
    class _ClearSkyboxOverride;
    // Nested type: Valve::VR::IVRCompositor::_CompositorBringToFront
    class _CompositorBringToFront;
    // Nested type: Valve::VR::IVRCompositor::_CompositorGoToBack
    class _CompositorGoToBack;
    // Nested type: Valve::VR::IVRCompositor::_CompositorQuit
    class _CompositorQuit;
    // Nested type: Valve::VR::IVRCompositor::_IsFullscreen
    class _IsFullscreen;
    // Nested type: Valve::VR::IVRCompositor::_GetCurrentSceneFocusProcess
    class _GetCurrentSceneFocusProcess;
    // Nested type: Valve::VR::IVRCompositor::_GetLastFrameRenderer
    class _GetLastFrameRenderer;
    // Nested type: Valve::VR::IVRCompositor::_CanRenderScene
    class _CanRenderScene;
    // Nested type: Valve::VR::IVRCompositor::_ShowMirrorWindow
    class _ShowMirrorWindow;
    // Nested type: Valve::VR::IVRCompositor::_HideMirrorWindow
    class _HideMirrorWindow;
    // Nested type: Valve::VR::IVRCompositor::_IsMirrorWindowVisible
    class _IsMirrorWindowVisible;
    // Nested type: Valve::VR::IVRCompositor::_CompositorDumpImages
    class _CompositorDumpImages;
    // Nested type: Valve::VR::IVRCompositor::_ShouldAppRenderWithLowResources
    class _ShouldAppRenderWithLowResources;
    // Nested type: Valve::VR::IVRCompositor::_ForceInterleavedReprojectionOn
    class _ForceInterleavedReprojectionOn;
    // Nested type: Valve::VR::IVRCompositor::_ForceReconnectProcess
    class _ForceReconnectProcess;
    // Nested type: Valve::VR::IVRCompositor::_SuspendRendering
    class _SuspendRendering;
    // Nested type: Valve::VR::IVRCompositor::_GetMirrorTextureD3D11
    class _GetMirrorTextureD3D11;
    // Nested type: Valve::VR::IVRCompositor::_ReleaseMirrorTextureD3D11
    class _ReleaseMirrorTextureD3D11;
    // Nested type: Valve::VR::IVRCompositor::_GetMirrorTextureGL
    class _GetMirrorTextureGL;
    // Nested type: Valve::VR::IVRCompositor::_ReleaseSharedGLTexture
    class _ReleaseSharedGLTexture;
    // Nested type: Valve::VR::IVRCompositor::_LockGLSharedTextureForAccess
    class _LockGLSharedTextureForAccess;
    // Nested type: Valve::VR::IVRCompositor::_UnlockGLSharedTextureForAccess
    class _UnlockGLSharedTextureForAccess;
    // Nested type: Valve::VR::IVRCompositor::_GetVulkanInstanceExtensionsRequired
    class _GetVulkanInstanceExtensionsRequired;
    // Nested type: Valve::VR::IVRCompositor::_GetVulkanDeviceExtensionsRequired
    class _GetVulkanDeviceExtensionsRequired;
    // Nested type: Valve::VR::IVRCompositor::_SetExplicitTimingMode
    class _SetExplicitTimingMode;
    // Nested type: Valve::VR::IVRCompositor::_SubmitExplicitTimingData
    class _SubmitExplicitTimingData;
    // Valve.VR.IVRCompositor/Valve.VR._SetTrackingSpace SetTrackingSpace
    // Size: 0x8
    // Offset: 0x0
    Valve::VR::IVRCompositor::_SetTrackingSpace* SetTrackingSpace;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRCompositor::_SetTrackingSpace*) == 0x8);
    // Valve.VR.IVRCompositor/Valve.VR._GetTrackingSpace GetTrackingSpace
    // Size: 0x8
    // Offset: 0x8
    Valve::VR::IVRCompositor::_GetTrackingSpace* GetTrackingSpace;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRCompositor::_GetTrackingSpace*) == 0x8);
    // Valve.VR.IVRCompositor/Valve.VR._WaitGetPoses WaitGetPoses
    // Size: 0x8
    // Offset: 0x10
    Valve::VR::IVRCompositor::_WaitGetPoses* WaitGetPoses;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRCompositor::_WaitGetPoses*) == 0x8);
    // Valve.VR.IVRCompositor/Valve.VR._GetLastPoses GetLastPoses
    // Size: 0x8
    // Offset: 0x18
    Valve::VR::IVRCompositor::_GetLastPoses* GetLastPoses;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRCompositor::_GetLastPoses*) == 0x8);
    // Valve.VR.IVRCompositor/Valve.VR._GetLastPoseForTrackedDeviceIndex GetLastPoseForTrackedDeviceIndex
    // Size: 0x8
    // Offset: 0x20
    Valve::VR::IVRCompositor::_GetLastPoseForTrackedDeviceIndex* GetLastPoseForTrackedDeviceIndex;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRCompositor::_GetLastPoseForTrackedDeviceIndex*) == 0x8);
    // Valve.VR.IVRCompositor/Valve.VR._Submit Submit
    // Size: 0x8
    // Offset: 0x28
    Valve::VR::IVRCompositor::_Submit* Submit;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRCompositor::_Submit*) == 0x8);
    // Valve.VR.IVRCompositor/Valve.VR._ClearLastSubmittedFrame ClearLastSubmittedFrame
    // Size: 0x8
    // Offset: 0x30
    Valve::VR::IVRCompositor::_ClearLastSubmittedFrame* ClearLastSubmittedFrame;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRCompositor::_ClearLastSubmittedFrame*) == 0x8);
    // Valve.VR.IVRCompositor/Valve.VR._PostPresentHandoff PostPresentHandoff
    // Size: 0x8
    // Offset: 0x38
    Valve::VR::IVRCompositor::_PostPresentHandoff* PostPresentHandoff;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRCompositor::_PostPresentHandoff*) == 0x8);
    // Valve.VR.IVRCompositor/Valve.VR._GetFrameTiming GetFrameTiming
    // Size: 0x8
    // Offset: 0x40
    Valve::VR::IVRCompositor::_GetFrameTiming* GetFrameTiming;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRCompositor::_GetFrameTiming*) == 0x8);
    // Valve.VR.IVRCompositor/Valve.VR._GetFrameTimings GetFrameTimings
    // Size: 0x8
    // Offset: 0x48
    Valve::VR::IVRCompositor::_GetFrameTimings* GetFrameTimings;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRCompositor::_GetFrameTimings*) == 0x8);
    // Valve.VR.IVRCompositor/Valve.VR._GetFrameTimeRemaining GetFrameTimeRemaining
    // Size: 0x8
    // Offset: 0x50
    Valve::VR::IVRCompositor::_GetFrameTimeRemaining* GetFrameTimeRemaining;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRCompositor::_GetFrameTimeRemaining*) == 0x8);
    // Valve.VR.IVRCompositor/Valve.VR._GetCumulativeStats GetCumulativeStats
    // Size: 0x8
    // Offset: 0x58
    Valve::VR::IVRCompositor::_GetCumulativeStats* GetCumulativeStats;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRCompositor::_GetCumulativeStats*) == 0x8);
    // Valve.VR.IVRCompositor/Valve.VR._FadeToColor FadeToColor
    // Size: 0x8
    // Offset: 0x60
    Valve::VR::IVRCompositor::_FadeToColor* FadeToColor;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRCompositor::_FadeToColor*) == 0x8);
    // Valve.VR.IVRCompositor/Valve.VR._GetCurrentFadeColor GetCurrentFadeColor
    // Size: 0x8
    // Offset: 0x68
    Valve::VR::IVRCompositor::_GetCurrentFadeColor* GetCurrentFadeColor;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRCompositor::_GetCurrentFadeColor*) == 0x8);
    // Valve.VR.IVRCompositor/Valve.VR._FadeGrid FadeGrid
    // Size: 0x8
    // Offset: 0x70
    Valve::VR::IVRCompositor::_FadeGrid* FadeGrid;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRCompositor::_FadeGrid*) == 0x8);
    // Valve.VR.IVRCompositor/Valve.VR._GetCurrentGridAlpha GetCurrentGridAlpha
    // Size: 0x8
    // Offset: 0x78
    Valve::VR::IVRCompositor::_GetCurrentGridAlpha* GetCurrentGridAlpha;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRCompositor::_GetCurrentGridAlpha*) == 0x8);
    // Valve.VR.IVRCompositor/Valve.VR._SetSkyboxOverride SetSkyboxOverride
    // Size: 0x8
    // Offset: 0x80
    Valve::VR::IVRCompositor::_SetSkyboxOverride* SetSkyboxOverride;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRCompositor::_SetSkyboxOverride*) == 0x8);
    // Valve.VR.IVRCompositor/Valve.VR._ClearSkyboxOverride ClearSkyboxOverride
    // Size: 0x8
    // Offset: 0x88
    Valve::VR::IVRCompositor::_ClearSkyboxOverride* ClearSkyboxOverride;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRCompositor::_ClearSkyboxOverride*) == 0x8);
    // Valve.VR.IVRCompositor/Valve.VR._CompositorBringToFront CompositorBringToFront
    // Size: 0x8
    // Offset: 0x90
    Valve::VR::IVRCompositor::_CompositorBringToFront* CompositorBringToFront;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRCompositor::_CompositorBringToFront*) == 0x8);
    // Valve.VR.IVRCompositor/Valve.VR._CompositorGoToBack CompositorGoToBack
    // Size: 0x8
    // Offset: 0x98
    Valve::VR::IVRCompositor::_CompositorGoToBack* CompositorGoToBack;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRCompositor::_CompositorGoToBack*) == 0x8);
    // Valve.VR.IVRCompositor/Valve.VR._CompositorQuit CompositorQuit
    // Size: 0x8
    // Offset: 0xA0
    Valve::VR::IVRCompositor::_CompositorQuit* CompositorQuit;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRCompositor::_CompositorQuit*) == 0x8);
    // Valve.VR.IVRCompositor/Valve.VR._IsFullscreen IsFullscreen
    // Size: 0x8
    // Offset: 0xA8
    Valve::VR::IVRCompositor::_IsFullscreen* IsFullscreen;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRCompositor::_IsFullscreen*) == 0x8);
    // Valve.VR.IVRCompositor/Valve.VR._GetCurrentSceneFocusProcess GetCurrentSceneFocusProcess
    // Size: 0x8
    // Offset: 0xB0
    Valve::VR::IVRCompositor::_GetCurrentSceneFocusProcess* GetCurrentSceneFocusProcess;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRCompositor::_GetCurrentSceneFocusProcess*) == 0x8);
    // Valve.VR.IVRCompositor/Valve.VR._GetLastFrameRenderer GetLastFrameRenderer
    // Size: 0x8
    // Offset: 0xB8
    Valve::VR::IVRCompositor::_GetLastFrameRenderer* GetLastFrameRenderer;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRCompositor::_GetLastFrameRenderer*) == 0x8);
    // Valve.VR.IVRCompositor/Valve.VR._CanRenderScene CanRenderScene
    // Size: 0x8
    // Offset: 0xC0
    Valve::VR::IVRCompositor::_CanRenderScene* CanRenderScene;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRCompositor::_CanRenderScene*) == 0x8);
    // Valve.VR.IVRCompositor/Valve.VR._ShowMirrorWindow ShowMirrorWindow
    // Size: 0x8
    // Offset: 0xC8
    Valve::VR::IVRCompositor::_ShowMirrorWindow* ShowMirrorWindow;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRCompositor::_ShowMirrorWindow*) == 0x8);
    // Valve.VR.IVRCompositor/Valve.VR._HideMirrorWindow HideMirrorWindow
    // Size: 0x8
    // Offset: 0xD0
    Valve::VR::IVRCompositor::_HideMirrorWindow* HideMirrorWindow;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRCompositor::_HideMirrorWindow*) == 0x8);
    // Valve.VR.IVRCompositor/Valve.VR._IsMirrorWindowVisible IsMirrorWindowVisible
    // Size: 0x8
    // Offset: 0xD8
    Valve::VR::IVRCompositor::_IsMirrorWindowVisible* IsMirrorWindowVisible;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRCompositor::_IsMirrorWindowVisible*) == 0x8);
    // Valve.VR.IVRCompositor/Valve.VR._CompositorDumpImages CompositorDumpImages
    // Size: 0x8
    // Offset: 0xE0
    Valve::VR::IVRCompositor::_CompositorDumpImages* CompositorDumpImages;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRCompositor::_CompositorDumpImages*) == 0x8);
    // Valve.VR.IVRCompositor/Valve.VR._ShouldAppRenderWithLowResources ShouldAppRenderWithLowResources
    // Size: 0x8
    // Offset: 0xE8
    Valve::VR::IVRCompositor::_ShouldAppRenderWithLowResources* ShouldAppRenderWithLowResources;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRCompositor::_ShouldAppRenderWithLowResources*) == 0x8);
    // Valve.VR.IVRCompositor/Valve.VR._ForceInterleavedReprojectionOn ForceInterleavedReprojectionOn
    // Size: 0x8
    // Offset: 0xF0
    Valve::VR::IVRCompositor::_ForceInterleavedReprojectionOn* ForceInterleavedReprojectionOn;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRCompositor::_ForceInterleavedReprojectionOn*) == 0x8);
    // Valve.VR.IVRCompositor/Valve.VR._ForceReconnectProcess ForceReconnectProcess
    // Size: 0x8
    // Offset: 0xF8
    Valve::VR::IVRCompositor::_ForceReconnectProcess* ForceReconnectProcess;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRCompositor::_ForceReconnectProcess*) == 0x8);
    // Valve.VR.IVRCompositor/Valve.VR._SuspendRendering SuspendRendering
    // Size: 0x8
    // Offset: 0x100
    Valve::VR::IVRCompositor::_SuspendRendering* SuspendRendering;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRCompositor::_SuspendRendering*) == 0x8);
    // Valve.VR.IVRCompositor/Valve.VR._GetMirrorTextureD3D11 GetMirrorTextureD3D11
    // Size: 0x8
    // Offset: 0x108
    Valve::VR::IVRCompositor::_GetMirrorTextureD3D11* GetMirrorTextureD3D11;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRCompositor::_GetMirrorTextureD3D11*) == 0x8);
    // Valve.VR.IVRCompositor/Valve.VR._ReleaseMirrorTextureD3D11 ReleaseMirrorTextureD3D11
    // Size: 0x8
    // Offset: 0x110
    Valve::VR::IVRCompositor::_ReleaseMirrorTextureD3D11* ReleaseMirrorTextureD3D11;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRCompositor::_ReleaseMirrorTextureD3D11*) == 0x8);
    // Valve.VR.IVRCompositor/Valve.VR._GetMirrorTextureGL GetMirrorTextureGL
    // Size: 0x8
    // Offset: 0x118
    Valve::VR::IVRCompositor::_GetMirrorTextureGL* GetMirrorTextureGL;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRCompositor::_GetMirrorTextureGL*) == 0x8);
    // Valve.VR.IVRCompositor/Valve.VR._ReleaseSharedGLTexture ReleaseSharedGLTexture
    // Size: 0x8
    // Offset: 0x120
    Valve::VR::IVRCompositor::_ReleaseSharedGLTexture* ReleaseSharedGLTexture;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRCompositor::_ReleaseSharedGLTexture*) == 0x8);
    // Valve.VR.IVRCompositor/Valve.VR._LockGLSharedTextureForAccess LockGLSharedTextureForAccess
    // Size: 0x8
    // Offset: 0x128
    Valve::VR::IVRCompositor::_LockGLSharedTextureForAccess* LockGLSharedTextureForAccess;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRCompositor::_LockGLSharedTextureForAccess*) == 0x8);
    // Valve.VR.IVRCompositor/Valve.VR._UnlockGLSharedTextureForAccess UnlockGLSharedTextureForAccess
    // Size: 0x8
    // Offset: 0x130
    Valve::VR::IVRCompositor::_UnlockGLSharedTextureForAccess* UnlockGLSharedTextureForAccess;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRCompositor::_UnlockGLSharedTextureForAccess*) == 0x8);
    // Valve.VR.IVRCompositor/Valve.VR._GetVulkanInstanceExtensionsRequired GetVulkanInstanceExtensionsRequired
    // Size: 0x8
    // Offset: 0x138
    Valve::VR::IVRCompositor::_GetVulkanInstanceExtensionsRequired* GetVulkanInstanceExtensionsRequired;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRCompositor::_GetVulkanInstanceExtensionsRequired*) == 0x8);
    // Valve.VR.IVRCompositor/Valve.VR._GetVulkanDeviceExtensionsRequired GetVulkanDeviceExtensionsRequired
    // Size: 0x8
    // Offset: 0x140
    Valve::VR::IVRCompositor::_GetVulkanDeviceExtensionsRequired* GetVulkanDeviceExtensionsRequired;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRCompositor::_GetVulkanDeviceExtensionsRequired*) == 0x8);
    // Valve.VR.IVRCompositor/Valve.VR._SetExplicitTimingMode SetExplicitTimingMode
    // Size: 0x8
    // Offset: 0x148
    Valve::VR::IVRCompositor::_SetExplicitTimingMode* SetExplicitTimingMode;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRCompositor::_SetExplicitTimingMode*) == 0x8);
    // Valve.VR.IVRCompositor/Valve.VR._SubmitExplicitTimingData SubmitExplicitTimingData
    // Size: 0x8
    // Offset: 0x150
    Valve::VR::IVRCompositor::_SubmitExplicitTimingData* SubmitExplicitTimingData;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRCompositor::_SubmitExplicitTimingData*) == 0x8);
    // Creating value type constructor for type: IVRCompositor
    constexpr IVRCompositor(Valve::VR::IVRCompositor::_SetTrackingSpace* SetTrackingSpace_ = {}, Valve::VR::IVRCompositor::_GetTrackingSpace* GetTrackingSpace_ = {}, Valve::VR::IVRCompositor::_WaitGetPoses* WaitGetPoses_ = {}, Valve::VR::IVRCompositor::_GetLastPoses* GetLastPoses_ = {}, Valve::VR::IVRCompositor::_GetLastPoseForTrackedDeviceIndex* GetLastPoseForTrackedDeviceIndex_ = {}, Valve::VR::IVRCompositor::_Submit* Submit_ = {}, Valve::VR::IVRCompositor::_ClearLastSubmittedFrame* ClearLastSubmittedFrame_ = {}, Valve::VR::IVRCompositor::_PostPresentHandoff* PostPresentHandoff_ = {}, Valve::VR::IVRCompositor::_GetFrameTiming* GetFrameTiming_ = {}, Valve::VR::IVRCompositor::_GetFrameTimings* GetFrameTimings_ = {}, Valve::VR::IVRCompositor::_GetFrameTimeRemaining* GetFrameTimeRemaining_ = {}, Valve::VR::IVRCompositor::_GetCumulativeStats* GetCumulativeStats_ = {}, Valve::VR::IVRCompositor::_FadeToColor* FadeToColor_ = {}, Valve::VR::IVRCompositor::_GetCurrentFadeColor* GetCurrentFadeColor_ = {}, Valve::VR::IVRCompositor::_FadeGrid* FadeGrid_ = {}, Valve::VR::IVRCompositor::_GetCurrentGridAlpha* GetCurrentGridAlpha_ = {}, Valve::VR::IVRCompositor::_SetSkyboxOverride* SetSkyboxOverride_ = {}, Valve::VR::IVRCompositor::_ClearSkyboxOverride* ClearSkyboxOverride_ = {}, Valve::VR::IVRCompositor::_CompositorBringToFront* CompositorBringToFront_ = {}, Valve::VR::IVRCompositor::_CompositorGoToBack* CompositorGoToBack_ = {}, Valve::VR::IVRCompositor::_CompositorQuit* CompositorQuit_ = {}, Valve::VR::IVRCompositor::_IsFullscreen* IsFullscreen_ = {}, Valve::VR::IVRCompositor::_GetCurrentSceneFocusProcess* GetCurrentSceneFocusProcess_ = {}, Valve::VR::IVRCompositor::_GetLastFrameRenderer* GetLastFrameRenderer_ = {}, Valve::VR::IVRCompositor::_CanRenderScene* CanRenderScene_ = {}, Valve::VR::IVRCompositor::_ShowMirrorWindow* ShowMirrorWindow_ = {}, Valve::VR::IVRCompositor::_HideMirrorWindow* HideMirrorWindow_ = {}, Valve::VR::IVRCompositor::_IsMirrorWindowVisible* IsMirrorWindowVisible_ = {}, Valve::VR::IVRCompositor::_CompositorDumpImages* CompositorDumpImages_ = {}, Valve::VR::IVRCompositor::_ShouldAppRenderWithLowResources* ShouldAppRenderWithLowResources_ = {}, Valve::VR::IVRCompositor::_ForceInterleavedReprojectionOn* ForceInterleavedReprojectionOn_ = {}, Valve::VR::IVRCompositor::_ForceReconnectProcess* ForceReconnectProcess_ = {}, Valve::VR::IVRCompositor::_SuspendRendering* SuspendRendering_ = {}, Valve::VR::IVRCompositor::_GetMirrorTextureD3D11* GetMirrorTextureD3D11_ = {}, Valve::VR::IVRCompositor::_ReleaseMirrorTextureD3D11* ReleaseMirrorTextureD3D11_ = {}, Valve::VR::IVRCompositor::_GetMirrorTextureGL* GetMirrorTextureGL_ = {}, Valve::VR::IVRCompositor::_ReleaseSharedGLTexture* ReleaseSharedGLTexture_ = {}, Valve::VR::IVRCompositor::_LockGLSharedTextureForAccess* LockGLSharedTextureForAccess_ = {}, Valve::VR::IVRCompositor::_UnlockGLSharedTextureForAccess* UnlockGLSharedTextureForAccess_ = {}, Valve::VR::IVRCompositor::_GetVulkanInstanceExtensionsRequired* GetVulkanInstanceExtensionsRequired_ = {}, Valve::VR::IVRCompositor::_GetVulkanDeviceExtensionsRequired* GetVulkanDeviceExtensionsRequired_ = {}, Valve::VR::IVRCompositor::_SetExplicitTimingMode* SetExplicitTimingMode_ = {}, Valve::VR::IVRCompositor::_SubmitExplicitTimingData* SubmitExplicitTimingData_ = {}) noexcept : SetTrackingSpace{SetTrackingSpace_}, GetTrackingSpace{GetTrackingSpace_}, WaitGetPoses{WaitGetPoses_}, GetLastPoses{GetLastPoses_}, GetLastPoseForTrackedDeviceIndex{GetLastPoseForTrackedDeviceIndex_}, Submit{Submit_}, ClearLastSubmittedFrame{ClearLastSubmittedFrame_}, PostPresentHandoff{PostPresentHandoff_}, GetFrameTiming{GetFrameTiming_}, GetFrameTimings{GetFrameTimings_}, GetFrameTimeRemaining{GetFrameTimeRemaining_}, GetCumulativeStats{GetCumulativeStats_}, FadeToColor{FadeToColor_}, GetCurrentFadeColor{GetCurrentFadeColor_}, FadeGrid{FadeGrid_}, GetCurrentGridAlpha{GetCurrentGridAlpha_}, SetSkyboxOverride{SetSkyboxOverride_}, ClearSkyboxOverride{ClearSkyboxOverride_}, CompositorBringToFront{CompositorBringToFront_}, CompositorGoToBack{CompositorGoToBack_}, CompositorQuit{CompositorQuit_}, IsFullscreen{IsFullscreen_}, GetCurrentSceneFocusProcess{GetCurrentSceneFocusProcess_}, GetLastFrameRenderer{GetLastFrameRenderer_}, CanRenderScene{CanRenderScene_}, ShowMirrorWindow{ShowMirrorWindow_}, HideMirrorWindow{HideMirrorWindow_}, IsMirrorWindowVisible{IsMirrorWindowVisible_}, CompositorDumpImages{CompositorDumpImages_}, ShouldAppRenderWithLowResources{ShouldAppRenderWithLowResources_}, ForceInterleavedReprojectionOn{ForceInterleavedReprojectionOn_}, ForceReconnectProcess{ForceReconnectProcess_}, SuspendRendering{SuspendRendering_}, GetMirrorTextureD3D11{GetMirrorTextureD3D11_}, ReleaseMirrorTextureD3D11{ReleaseMirrorTextureD3D11_}, GetMirrorTextureGL{GetMirrorTextureGL_}, ReleaseSharedGLTexture{ReleaseSharedGLTexture_}, LockGLSharedTextureForAccess{LockGLSharedTextureForAccess_}, UnlockGLSharedTextureForAccess{UnlockGLSharedTextureForAccess_}, GetVulkanInstanceExtensionsRequired{GetVulkanInstanceExtensionsRequired_}, GetVulkanDeviceExtensionsRequired{GetVulkanDeviceExtensionsRequired_}, SetExplicitTimingMode{SetExplicitTimingMode_}, SubmitExplicitTimingData{SubmitExplicitTimingData_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: Valve.VR.IVRCompositor/Valve.VR._SetTrackingSpace SetTrackingSpace
    Valve::VR::IVRCompositor::_SetTrackingSpace*& dyn_SetTrackingSpace();
    // Get instance field reference: Valve.VR.IVRCompositor/Valve.VR._GetTrackingSpace GetTrackingSpace
    Valve::VR::IVRCompositor::_GetTrackingSpace*& dyn_GetTrackingSpace();
    // Get instance field reference: Valve.VR.IVRCompositor/Valve.VR._WaitGetPoses WaitGetPoses
    Valve::VR::IVRCompositor::_WaitGetPoses*& dyn_WaitGetPoses();
    // Get instance field reference: Valve.VR.IVRCompositor/Valve.VR._GetLastPoses GetLastPoses
    Valve::VR::IVRCompositor::_GetLastPoses*& dyn_GetLastPoses();
    // Get instance field reference: Valve.VR.IVRCompositor/Valve.VR._GetLastPoseForTrackedDeviceIndex GetLastPoseForTrackedDeviceIndex
    Valve::VR::IVRCompositor::_GetLastPoseForTrackedDeviceIndex*& dyn_GetLastPoseForTrackedDeviceIndex();
    // Get instance field reference: Valve.VR.IVRCompositor/Valve.VR._Submit Submit
    Valve::VR::IVRCompositor::_Submit*& dyn_Submit();
    // Get instance field reference: Valve.VR.IVRCompositor/Valve.VR._ClearLastSubmittedFrame ClearLastSubmittedFrame
    Valve::VR::IVRCompositor::_ClearLastSubmittedFrame*& dyn_ClearLastSubmittedFrame();
    // Get instance field reference: Valve.VR.IVRCompositor/Valve.VR._PostPresentHandoff PostPresentHandoff
    Valve::VR::IVRCompositor::_PostPresentHandoff*& dyn_PostPresentHandoff();
    // Get instance field reference: Valve.VR.IVRCompositor/Valve.VR._GetFrameTiming GetFrameTiming
    Valve::VR::IVRCompositor::_GetFrameTiming*& dyn_GetFrameTiming();
    // Get instance field reference: Valve.VR.IVRCompositor/Valve.VR._GetFrameTimings GetFrameTimings
    Valve::VR::IVRCompositor::_GetFrameTimings*& dyn_GetFrameTimings();
    // Get instance field reference: Valve.VR.IVRCompositor/Valve.VR._GetFrameTimeRemaining GetFrameTimeRemaining
    Valve::VR::IVRCompositor::_GetFrameTimeRemaining*& dyn_GetFrameTimeRemaining();
    // Get instance field reference: Valve.VR.IVRCompositor/Valve.VR._GetCumulativeStats GetCumulativeStats
    Valve::VR::IVRCompositor::_GetCumulativeStats*& dyn_GetCumulativeStats();
    // Get instance field reference: Valve.VR.IVRCompositor/Valve.VR._FadeToColor FadeToColor
    Valve::VR::IVRCompositor::_FadeToColor*& dyn_FadeToColor();
    // Get instance field reference: Valve.VR.IVRCompositor/Valve.VR._GetCurrentFadeColor GetCurrentFadeColor
    Valve::VR::IVRCompositor::_GetCurrentFadeColor*& dyn_GetCurrentFadeColor();
    // Get instance field reference: Valve.VR.IVRCompositor/Valve.VR._FadeGrid FadeGrid
    Valve::VR::IVRCompositor::_FadeGrid*& dyn_FadeGrid();
    // Get instance field reference: Valve.VR.IVRCompositor/Valve.VR._GetCurrentGridAlpha GetCurrentGridAlpha
    Valve::VR::IVRCompositor::_GetCurrentGridAlpha*& dyn_GetCurrentGridAlpha();
    // Get instance field reference: Valve.VR.IVRCompositor/Valve.VR._SetSkyboxOverride SetSkyboxOverride
    Valve::VR::IVRCompositor::_SetSkyboxOverride*& dyn_SetSkyboxOverride();
    // Get instance field reference: Valve.VR.IVRCompositor/Valve.VR._ClearSkyboxOverride ClearSkyboxOverride
    Valve::VR::IVRCompositor::_ClearSkyboxOverride*& dyn_ClearSkyboxOverride();
    // Get instance field reference: Valve.VR.IVRCompositor/Valve.VR._CompositorBringToFront CompositorBringToFront
    Valve::VR::IVRCompositor::_CompositorBringToFront*& dyn_CompositorBringToFront();
    // Get instance field reference: Valve.VR.IVRCompositor/Valve.VR._CompositorGoToBack CompositorGoToBack
    Valve::VR::IVRCompositor::_CompositorGoToBack*& dyn_CompositorGoToBack();
    // Get instance field reference: Valve.VR.IVRCompositor/Valve.VR._CompositorQuit CompositorQuit
    Valve::VR::IVRCompositor::_CompositorQuit*& dyn_CompositorQuit();
    // Get instance field reference: Valve.VR.IVRCompositor/Valve.VR._IsFullscreen IsFullscreen
    Valve::VR::IVRCompositor::_IsFullscreen*& dyn_IsFullscreen();
    // Get instance field reference: Valve.VR.IVRCompositor/Valve.VR._GetCurrentSceneFocusProcess GetCurrentSceneFocusProcess
    Valve::VR::IVRCompositor::_GetCurrentSceneFocusProcess*& dyn_GetCurrentSceneFocusProcess();
    // Get instance field reference: Valve.VR.IVRCompositor/Valve.VR._GetLastFrameRenderer GetLastFrameRenderer
    Valve::VR::IVRCompositor::_GetLastFrameRenderer*& dyn_GetLastFrameRenderer();
    // Get instance field reference: Valve.VR.IVRCompositor/Valve.VR._CanRenderScene CanRenderScene
    Valve::VR::IVRCompositor::_CanRenderScene*& dyn_CanRenderScene();
    // Get instance field reference: Valve.VR.IVRCompositor/Valve.VR._ShowMirrorWindow ShowMirrorWindow
    Valve::VR::IVRCompositor::_ShowMirrorWindow*& dyn_ShowMirrorWindow();
    // Get instance field reference: Valve.VR.IVRCompositor/Valve.VR._HideMirrorWindow HideMirrorWindow
    Valve::VR::IVRCompositor::_HideMirrorWindow*& dyn_HideMirrorWindow();
    // Get instance field reference: Valve.VR.IVRCompositor/Valve.VR._IsMirrorWindowVisible IsMirrorWindowVisible
    Valve::VR::IVRCompositor::_IsMirrorWindowVisible*& dyn_IsMirrorWindowVisible();
    // Get instance field reference: Valve.VR.IVRCompositor/Valve.VR._CompositorDumpImages CompositorDumpImages
    Valve::VR::IVRCompositor::_CompositorDumpImages*& dyn_CompositorDumpImages();
    // Get instance field reference: Valve.VR.IVRCompositor/Valve.VR._ShouldAppRenderWithLowResources ShouldAppRenderWithLowResources
    Valve::VR::IVRCompositor::_ShouldAppRenderWithLowResources*& dyn_ShouldAppRenderWithLowResources();
    // Get instance field reference: Valve.VR.IVRCompositor/Valve.VR._ForceInterleavedReprojectionOn ForceInterleavedReprojectionOn
    Valve::VR::IVRCompositor::_ForceInterleavedReprojectionOn*& dyn_ForceInterleavedReprojectionOn();
    // Get instance field reference: Valve.VR.IVRCompositor/Valve.VR._ForceReconnectProcess ForceReconnectProcess
    Valve::VR::IVRCompositor::_ForceReconnectProcess*& dyn_ForceReconnectProcess();
    // Get instance field reference: Valve.VR.IVRCompositor/Valve.VR._SuspendRendering SuspendRendering
    Valve::VR::IVRCompositor::_SuspendRendering*& dyn_SuspendRendering();
    // Get instance field reference: Valve.VR.IVRCompositor/Valve.VR._GetMirrorTextureD3D11 GetMirrorTextureD3D11
    Valve::VR::IVRCompositor::_GetMirrorTextureD3D11*& dyn_GetMirrorTextureD3D11();
    // Get instance field reference: Valve.VR.IVRCompositor/Valve.VR._ReleaseMirrorTextureD3D11 ReleaseMirrorTextureD3D11
    Valve::VR::IVRCompositor::_ReleaseMirrorTextureD3D11*& dyn_ReleaseMirrorTextureD3D11();
    // Get instance field reference: Valve.VR.IVRCompositor/Valve.VR._GetMirrorTextureGL GetMirrorTextureGL
    Valve::VR::IVRCompositor::_GetMirrorTextureGL*& dyn_GetMirrorTextureGL();
    // Get instance field reference: Valve.VR.IVRCompositor/Valve.VR._ReleaseSharedGLTexture ReleaseSharedGLTexture
    Valve::VR::IVRCompositor::_ReleaseSharedGLTexture*& dyn_ReleaseSharedGLTexture();
    // Get instance field reference: Valve.VR.IVRCompositor/Valve.VR._LockGLSharedTextureForAccess LockGLSharedTextureForAccess
    Valve::VR::IVRCompositor::_LockGLSharedTextureForAccess*& dyn_LockGLSharedTextureForAccess();
    // Get instance field reference: Valve.VR.IVRCompositor/Valve.VR._UnlockGLSharedTextureForAccess UnlockGLSharedTextureForAccess
    Valve::VR::IVRCompositor::_UnlockGLSharedTextureForAccess*& dyn_UnlockGLSharedTextureForAccess();
    // Get instance field reference: Valve.VR.IVRCompositor/Valve.VR._GetVulkanInstanceExtensionsRequired GetVulkanInstanceExtensionsRequired
    Valve::VR::IVRCompositor::_GetVulkanInstanceExtensionsRequired*& dyn_GetVulkanInstanceExtensionsRequired();
    // Get instance field reference: Valve.VR.IVRCompositor/Valve.VR._GetVulkanDeviceExtensionsRequired GetVulkanDeviceExtensionsRequired
    Valve::VR::IVRCompositor::_GetVulkanDeviceExtensionsRequired*& dyn_GetVulkanDeviceExtensionsRequired();
    // Get instance field reference: Valve.VR.IVRCompositor/Valve.VR._SetExplicitTimingMode SetExplicitTimingMode
    Valve::VR::IVRCompositor::_SetExplicitTimingMode*& dyn_SetExplicitTimingMode();
    // Get instance field reference: Valve.VR.IVRCompositor/Valve.VR._SubmitExplicitTimingData SubmitExplicitTimingData
    Valve::VR::IVRCompositor::_SubmitExplicitTimingData*& dyn_SubmitExplicitTimingData();
  }; // Valve.VR.IVRCompositor
  #pragma pack(pop)
  static check_size<sizeof(IVRCompositor), 336 + sizeof(Valve::VR::IVRCompositor::_SubmitExplicitTimingData*)> __Valve_VR_IVRCompositorSizeCheck;
  static_assert(sizeof(IVRCompositor) == 0x158);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRCompositor, "Valve.VR", "IVRCompositor");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
