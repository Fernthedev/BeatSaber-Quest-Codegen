// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Version
  class Version;
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/OVRP_1_15_0
  class OVRPlugin::OVRP_1_15_0 : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: OVRP_1_15_0
    OVRP_1_15_0() noexcept {}
    // Get static field: static public readonly System.Version version
    static System::Version* _get_version();
    // Set static field: static public readonly System.Version version
    static void _set_version(System::Version* value);
    // static field const value: static public System.Int32 OVRP_EXTERNAL_CAMERA_NAME_SIZE
    static constexpr const int OVRP_EXTERNAL_CAMERA_NAME_SIZE = 32;
    // Get static field: static public System.Int32 OVRP_EXTERNAL_CAMERA_NAME_SIZE
    static int _get_OVRP_EXTERNAL_CAMERA_NAME_SIZE();
    // Set static field: static public System.Int32 OVRP_EXTERNAL_CAMERA_NAME_SIZE
    static void _set_OVRP_EXTERNAL_CAMERA_NAME_SIZE(int value);
    // static public OVRPlugin/Result ovrp_InitializeMixedReality()
    // Offset: 0x161DB0C
    static GlobalNamespace::OVRPlugin::Result ovrp_InitializeMixedReality();
    // static public OVRPlugin/Result ovrp_ShutdownMixedReality()
    // Offset: 0x161DB80
    static GlobalNamespace::OVRPlugin::Result ovrp_ShutdownMixedReality();
    // static public OVRPlugin/Bool ovrp_GetMixedRealityInitialized()
    // Offset: 0x161DBF4
    static GlobalNamespace::OVRPlugin::Bool ovrp_GetMixedRealityInitialized();
    // static public OVRPlugin/Result ovrp_UpdateExternalCamera()
    // Offset: 0x161DC68
    static GlobalNamespace::OVRPlugin::Result ovrp_UpdateExternalCamera();
    // static public OVRPlugin/Result ovrp_GetExternalCameraCount(out System.Int32 cameraCount)
    // Offset: 0x161DCDC
    static GlobalNamespace::OVRPlugin::Result ovrp_GetExternalCameraCount(int& cameraCount);
    // static public OVRPlugin/Result ovrp_GetExternalCameraName(System.Int32 cameraId, System.Char[] cameraName)
    // Offset: 0x161DD5C
    static GlobalNamespace::OVRPlugin::Result ovrp_GetExternalCameraName(int cameraId, ::Array<::Il2CppChar>* cameraName);
    // static public OVRPlugin/Result ovrp_GetExternalCameraIntrinsics(System.Int32 cameraId, out OVRPlugin/CameraIntrinsics cameraIntrinsics)
    // Offset: 0x161DE78
    static GlobalNamespace::OVRPlugin::Result ovrp_GetExternalCameraIntrinsics(int cameraId, GlobalNamespace::OVRPlugin::CameraIntrinsics& cameraIntrinsics);
    // static public OVRPlugin/Result ovrp_GetExternalCameraExtrinsics(System.Int32 cameraId, out OVRPlugin/CameraExtrinsics cameraExtrinsics)
    // Offset: 0x161DF08
    static GlobalNamespace::OVRPlugin::Result ovrp_GetExternalCameraExtrinsics(int cameraId, GlobalNamespace::OVRPlugin::CameraExtrinsics& cameraExtrinsics);
    // static public OVRPlugin/Result ovrp_CalculateLayerDesc(OVRPlugin/OverlayShape shape, OVRPlugin/LayerLayout layout, ref OVRPlugin/Sizei textureSize, System.Int32 mipLevels, System.Int32 sampleCount, OVRPlugin/EyeTextureFormat format, System.Int32 layerFlags, ref OVRPlugin/LayerDesc layerDesc)
    // Offset: 0x161DF98
    static GlobalNamespace::OVRPlugin::Result ovrp_CalculateLayerDesc(GlobalNamespace::OVRPlugin::OverlayShape shape, GlobalNamespace::OVRPlugin::LayerLayout layout, GlobalNamespace::OVRPlugin::Sizei& textureSize, int mipLevels, int sampleCount, GlobalNamespace::OVRPlugin::EyeTextureFormat format, int layerFlags, GlobalNamespace::OVRPlugin::LayerDesc& layerDesc);
    // static public OVRPlugin/Result ovrp_EnqueueSetupLayer(ref OVRPlugin/LayerDesc desc, System.IntPtr layerId)
    // Offset: 0x161E0C0
    static GlobalNamespace::OVRPlugin::Result ovrp_EnqueueSetupLayer(GlobalNamespace::OVRPlugin::LayerDesc& desc, System::IntPtr layerId);
    // static public OVRPlugin/Result ovrp_EnqueueDestroyLayer(System.IntPtr layerId)
    // Offset: 0x161E1A0
    static GlobalNamespace::OVRPlugin::Result ovrp_EnqueueDestroyLayer(System::IntPtr layerId);
    // static public OVRPlugin/Result ovrp_GetLayerTextureStageCount(System.Int32 layerId, ref System.Int32 layerTextureStageCount)
    // Offset: 0x161E220
    static GlobalNamespace::OVRPlugin::Result ovrp_GetLayerTextureStageCount(int layerId, int& layerTextureStageCount);
    // static public OVRPlugin/Result ovrp_GetLayerTexturePtr(System.Int32 layerId, System.Int32 stage, OVRPlugin/Eye eyeId, ref System.IntPtr textureHandle)
    // Offset: 0x161E2B0
    static GlobalNamespace::OVRPlugin::Result ovrp_GetLayerTexturePtr(int layerId, int stage, GlobalNamespace::OVRPlugin::Eye eyeId, System::IntPtr& textureHandle);
    // static public OVRPlugin/Result ovrp_EnqueueSubmitLayer(System.UInt32 flags, System.IntPtr textureLeft, System.IntPtr textureRight, System.Int32 layerId, System.Int32 frameIndex, ref OVRPlugin/Posef pose, ref OVRPlugin/Vector3f scale, System.Int32 layerIndex)
    // Offset: 0x161E358
    static GlobalNamespace::OVRPlugin::Result ovrp_EnqueueSubmitLayer(uint flags, System::IntPtr textureLeft, System::IntPtr textureRight, int layerId, int frameIndex, GlobalNamespace::OVRPlugin::Posef& pose, GlobalNamespace::OVRPlugin::Vector3f& scale, int layerIndex);
    // static public OVRPlugin/Result ovrp_GetNodeFrustum2(OVRPlugin/Node nodeId, out OVRPlugin/Frustumf2 nodeFrustum)
    // Offset: 0x161E430
    static GlobalNamespace::OVRPlugin::Result ovrp_GetNodeFrustum2(GlobalNamespace::OVRPlugin::Node nodeId, GlobalNamespace::OVRPlugin::Frustumf2& nodeFrustum);
    // static public OVRPlugin/Bool ovrp_GetEyeTextureArrayEnabled()
    // Offset: 0x161E4C0
    static GlobalNamespace::OVRPlugin::Bool ovrp_GetEyeTextureArrayEnabled();
    // static private System.Void .cctor()
    // Offset: 0x161E534
    static void _cctor();
  }; // OVRPlugin/OVRP_1_15_0
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::OVRP_1_15_0*, "", "OVRPlugin/OVRP_1_15_0");
// Writing includes for template specializations
#include "GlobalNamespace/OVRPlugin_CameraIntrinsics.hpp"
#include "GlobalNamespace/OVRPlugin_CameraExtrinsics.hpp"
#include "GlobalNamespace/OVRPlugin_OverlayShape.hpp"
#include "GlobalNamespace/OVRPlugin_LayerLayout.hpp"
#include "GlobalNamespace/OVRPlugin_Sizei.hpp"
#include "GlobalNamespace/OVRPlugin_EyeTextureFormat.hpp"
#include "GlobalNamespace/OVRPlugin_LayerDesc.hpp"
#include "System/IntPtr.hpp"
#include "GlobalNamespace/OVRPlugin_Eye.hpp"
#include "GlobalNamespace/OVRPlugin_Vector3f.hpp"
#include "GlobalNamespace/OVRPlugin_Node.hpp"
#include "GlobalNamespace/OVRPlugin_Frustumf2.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_15_0::ovrp_InitializeMixedReality
// Il2CppName: ovrp_InitializeMixedReality
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Result (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_15_0::ovrp_InitializeMixedReality)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_15_0*), "ovrp_InitializeMixedReality", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_15_0::ovrp_ShutdownMixedReality
// Il2CppName: ovrp_ShutdownMixedReality
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Result (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_15_0::ovrp_ShutdownMixedReality)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_15_0*), "ovrp_ShutdownMixedReality", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_15_0::ovrp_GetMixedRealityInitialized
// Il2CppName: ovrp_GetMixedRealityInitialized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Bool (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_15_0::ovrp_GetMixedRealityInitialized)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_15_0*), "ovrp_GetMixedRealityInitialized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_15_0::ovrp_UpdateExternalCamera
// Il2CppName: ovrp_UpdateExternalCamera
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Result (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_15_0::ovrp_UpdateExternalCamera)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_15_0*), "ovrp_UpdateExternalCamera", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_15_0::ovrp_GetExternalCameraCount
// Il2CppName: ovrp_GetExternalCameraCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Result (*)(int&)>(&GlobalNamespace::OVRPlugin::OVRP_1_15_0::ovrp_GetExternalCameraCount)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_15_0*), "ovrp_GetExternalCameraCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int&>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_15_0::ovrp_GetExternalCameraName
// Il2CppName: ovrp_GetExternalCameraName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Result (*)(int, ::Array<::Il2CppChar>*)>(&GlobalNamespace::OVRPlugin::OVRP_1_15_0::ovrp_GetExternalCameraName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_15_0*), "ovrp_GetExternalCameraName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<::Array<::Il2CppChar>*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_15_0::ovrp_GetExternalCameraIntrinsics
// Il2CppName: ovrp_GetExternalCameraIntrinsics
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Result (*)(int, GlobalNamespace::OVRPlugin::CameraIntrinsics&)>(&GlobalNamespace::OVRPlugin::OVRP_1_15_0::ovrp_GetExternalCameraIntrinsics)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_15_0*), "ovrp_GetExternalCameraIntrinsics", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::OVRPlugin::CameraIntrinsics&>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_15_0::ovrp_GetExternalCameraExtrinsics
// Il2CppName: ovrp_GetExternalCameraExtrinsics
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Result (*)(int, GlobalNamespace::OVRPlugin::CameraExtrinsics&)>(&GlobalNamespace::OVRPlugin::OVRP_1_15_0::ovrp_GetExternalCameraExtrinsics)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_15_0*), "ovrp_GetExternalCameraExtrinsics", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::OVRPlugin::CameraExtrinsics&>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_15_0::ovrp_CalculateLayerDesc
// Il2CppName: ovrp_CalculateLayerDesc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Result (*)(GlobalNamespace::OVRPlugin::OverlayShape, GlobalNamespace::OVRPlugin::LayerLayout, GlobalNamespace::OVRPlugin::Sizei&, int, int, GlobalNamespace::OVRPlugin::EyeTextureFormat, int, GlobalNamespace::OVRPlugin::LayerDesc&)>(&GlobalNamespace::OVRPlugin::OVRP_1_15_0::ovrp_CalculateLayerDesc)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_15_0*), "ovrp_CalculateLayerDesc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::OVRPlugin::OverlayShape>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::OVRPlugin::LayerLayout>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::OVRPlugin::Sizei&>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::OVRPlugin::EyeTextureFormat>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::OVRPlugin::LayerDesc&>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_15_0::ovrp_EnqueueSetupLayer
// Il2CppName: ovrp_EnqueueSetupLayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Result (*)(GlobalNamespace::OVRPlugin::LayerDesc&, System::IntPtr)>(&GlobalNamespace::OVRPlugin::OVRP_1_15_0::ovrp_EnqueueSetupLayer)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_15_0*), "ovrp_EnqueueSetupLayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::OVRPlugin::LayerDesc&>(), ::il2cpp_utils::ExtractIndependentType<System::IntPtr>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_15_0::ovrp_EnqueueDestroyLayer
// Il2CppName: ovrp_EnqueueDestroyLayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Result (*)(System::IntPtr)>(&GlobalNamespace::OVRPlugin::OVRP_1_15_0::ovrp_EnqueueDestroyLayer)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_15_0*), "ovrp_EnqueueDestroyLayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IntPtr>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_15_0::ovrp_GetLayerTextureStageCount
// Il2CppName: ovrp_GetLayerTextureStageCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Result (*)(int, int&)>(&GlobalNamespace::OVRPlugin::OVRP_1_15_0::ovrp_GetLayerTextureStageCount)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_15_0*), "ovrp_GetLayerTextureStageCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int&>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_15_0::ovrp_GetLayerTexturePtr
// Il2CppName: ovrp_GetLayerTexturePtr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Result (*)(int, int, GlobalNamespace::OVRPlugin::Eye, System::IntPtr&)>(&GlobalNamespace::OVRPlugin::OVRP_1_15_0::ovrp_GetLayerTexturePtr)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_15_0*), "ovrp_GetLayerTexturePtr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::OVRPlugin::Eye>(), ::il2cpp_utils::ExtractIndependentType<System::IntPtr&>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_15_0::ovrp_EnqueueSubmitLayer
// Il2CppName: ovrp_EnqueueSubmitLayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Result (*)(uint, System::IntPtr, System::IntPtr, int, int, GlobalNamespace::OVRPlugin::Posef&, GlobalNamespace::OVRPlugin::Vector3f&, int)>(&GlobalNamespace::OVRPlugin::OVRP_1_15_0::ovrp_EnqueueSubmitLayer)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_15_0*), "ovrp_EnqueueSubmitLayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<System::IntPtr>(), ::il2cpp_utils::ExtractIndependentType<System::IntPtr>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::OVRPlugin::Posef&>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::OVRPlugin::Vector3f&>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_15_0::ovrp_GetNodeFrustum2
// Il2CppName: ovrp_GetNodeFrustum2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Result (*)(GlobalNamespace::OVRPlugin::Node, GlobalNamespace::OVRPlugin::Frustumf2&)>(&GlobalNamespace::OVRPlugin::OVRP_1_15_0::ovrp_GetNodeFrustum2)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_15_0*), "ovrp_GetNodeFrustum2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::OVRPlugin::Node>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::OVRPlugin::Frustumf2&>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_15_0::ovrp_GetEyeTextureArrayEnabled
// Il2CppName: ovrp_GetEyeTextureArrayEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Bool (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_15_0::ovrp_GetEyeTextureArrayEnabled)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_15_0*), "ovrp_GetEyeTextureArrayEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_15_0::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_15_0::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_15_0*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
