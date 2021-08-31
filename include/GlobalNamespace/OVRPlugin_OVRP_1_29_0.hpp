// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
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
  // Autogenerated type: OVRPlugin/OVRP_1_29_0
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRPlugin::OVRP_1_29_0 : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: OVRP_1_29_0
    OVRP_1_29_0() noexcept {}
    // Get static field: static public readonly System.Version version
    static System::Version* _get_version();
    // Set static field: static public readonly System.Version version
    static void _set_version(System::Version* value);
    // static private System.Void .cctor()
    // Offset: 0x162E2B4
    static void _cctor();
    // static public OVRPlugin/Result ovrp_GetLayerAndroidSurfaceObject(System.Int32 layerId, ref System.IntPtr surfaceObject)
    // Offset: 0x162E05C
    static GlobalNamespace::OVRPlugin::Result ovrp_GetLayerAndroidSurfaceObject(int layerId, ByRef<System::IntPtr> surfaceObject);
    // static public OVRPlugin/Result ovrp_SetHeadPoseModifier(ref OVRPlugin/Quatf relativeRotation, ref OVRPlugin/Vector3f relativeTranslation)
    // Offset: 0x162E0EC
    static GlobalNamespace::OVRPlugin::Result ovrp_SetHeadPoseModifier(ByRef<GlobalNamespace::OVRPlugin::Quatf> relativeRotation, ByRef<GlobalNamespace::OVRPlugin::Vector3f> relativeTranslation);
    // static public OVRPlugin/Result ovrp_GetHeadPoseModifier(out OVRPlugin/Quatf relativeRotation, out OVRPlugin/Vector3f relativeTranslation)
    // Offset: 0x162E17C
    static GlobalNamespace::OVRPlugin::Result ovrp_GetHeadPoseModifier(ByRef<GlobalNamespace::OVRPlugin::Quatf> relativeRotation, ByRef<GlobalNamespace::OVRPlugin::Vector3f> relativeTranslation);
    // static public OVRPlugin/Result ovrp_GetNodePoseStateRaw(OVRPlugin/Step stepId, System.Int32 frameIndex, OVRPlugin/Node nodeId, out OVRPlugin/PoseStatef nodePoseState)
    // Offset: 0x162E20C
    static GlobalNamespace::OVRPlugin::Result ovrp_GetNodePoseStateRaw(GlobalNamespace::OVRPlugin::Step stepId, int frameIndex, GlobalNamespace::OVRPlugin::Node nodeId, ByRef<GlobalNamespace::OVRPlugin::PoseStatef> nodePoseState);
  }; // OVRPlugin/OVRP_1_29_0
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::OVRP_1_29_0*, "", "OVRPlugin/OVRP_1_29_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_29_0::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_29_0::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_29_0*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_29_0::ovrp_GetLayerAndroidSurfaceObject
// Il2CppName: ovrp_GetLayerAndroidSurfaceObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Result (*)(int, ByRef<System::IntPtr>)>(&GlobalNamespace::OVRPlugin::OVRP_1_29_0::ovrp_GetLayerAndroidSurfaceObject)> {
  static const MethodInfo* get() {
    static auto* layerId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* surfaceObject = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_29_0*), "ovrp_GetLayerAndroidSurfaceObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{layerId, surfaceObject});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_29_0::ovrp_SetHeadPoseModifier
// Il2CppName: ovrp_SetHeadPoseModifier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Result (*)(ByRef<GlobalNamespace::OVRPlugin::Quatf>, ByRef<GlobalNamespace::OVRPlugin::Vector3f>)>(&GlobalNamespace::OVRPlugin::OVRP_1_29_0::ovrp_SetHeadPoseModifier)> {
  static const MethodInfo* get() {
    static auto* relativeRotation = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Quatf")->this_arg;
    static auto* relativeTranslation = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Vector3f")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_29_0*), "ovrp_SetHeadPoseModifier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{relativeRotation, relativeTranslation});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_29_0::ovrp_GetHeadPoseModifier
// Il2CppName: ovrp_GetHeadPoseModifier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Result (*)(ByRef<GlobalNamespace::OVRPlugin::Quatf>, ByRef<GlobalNamespace::OVRPlugin::Vector3f>)>(&GlobalNamespace::OVRPlugin::OVRP_1_29_0::ovrp_GetHeadPoseModifier)> {
  static const MethodInfo* get() {
    static auto* relativeRotation = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Quatf")->this_arg;
    static auto* relativeTranslation = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Vector3f")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_29_0*), "ovrp_GetHeadPoseModifier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{relativeRotation, relativeTranslation});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_29_0::ovrp_GetNodePoseStateRaw
// Il2CppName: ovrp_GetNodePoseStateRaw
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Result (*)(GlobalNamespace::OVRPlugin::Step, int, GlobalNamespace::OVRPlugin::Node, ByRef<GlobalNamespace::OVRPlugin::PoseStatef>)>(&GlobalNamespace::OVRPlugin::OVRP_1_29_0::ovrp_GetNodePoseStateRaw)> {
  static const MethodInfo* get() {
    static auto* stepId = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Step")->byval_arg;
    static auto* frameIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* nodeId = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Node")->byval_arg;
    static auto* nodePoseState = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/PoseStatef")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_29_0*), "ovrp_GetNodePoseStateRaw", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stepId, frameIndex, nodeId, nodePoseState});
  }
};
