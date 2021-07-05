// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Version
  class Version;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/OVRP_1_18_0
  class OVRPlugin::OVRP_1_18_0 : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: OVRP_1_18_0
    OVRP_1_18_0() noexcept {}
    // Get static field: static public readonly System.Version version
    static System::Version* _get_version();
    // Set static field: static public readonly System.Version version
    static void _set_version(System::Version* value);
    // static public OVRPlugin/Result ovrp_SetHandNodePoseStateLatency(System.Double latencyInSeconds)
    // Offset: 0x161EBD8
    static GlobalNamespace::OVRPlugin::Result ovrp_SetHandNodePoseStateLatency(double latencyInSeconds);
    // static public OVRPlugin/Result ovrp_GetHandNodePoseStateLatency(out System.Double latencyInSeconds)
    // Offset: 0x161EC60
    static GlobalNamespace::OVRPlugin::Result ovrp_GetHandNodePoseStateLatency(double& latencyInSeconds);
    // static public OVRPlugin/Result ovrp_GetAppHasInputFocus(out OVRPlugin/Bool appHasInputFocus)
    // Offset: 0x161ECE0
    static GlobalNamespace::OVRPlugin::Result ovrp_GetAppHasInputFocus(GlobalNamespace::OVRPlugin::Bool& appHasInputFocus);
    // static private System.Void .cctor()
    // Offset: 0x161ED60
    static void _cctor();
  }; // OVRPlugin/OVRP_1_18_0
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::OVRP_1_18_0*, "", "OVRPlugin/OVRP_1_18_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_18_0::ovrp_SetHandNodePoseStateLatency
// Il2CppName: ovrp_SetHandNodePoseStateLatency
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Result (*)(double)>(&GlobalNamespace::OVRPlugin::OVRP_1_18_0::ovrp_SetHandNodePoseStateLatency)> {
  const MethodInfo* get() {
    static auto* latencyInSeconds = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_18_0*), "ovrp_SetHandNodePoseStateLatency", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{latencyInSeconds});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_18_0::ovrp_GetHandNodePoseStateLatency
// Il2CppName: ovrp_GetHandNodePoseStateLatency
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Result (*)(double&)>(&GlobalNamespace::OVRPlugin::OVRP_1_18_0::ovrp_GetHandNodePoseStateLatency)> {
  const MethodInfo* get() {
    static auto* latencyInSeconds = &::il2cpp_utils::GetClassFromName("System", "Double")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_18_0*), "ovrp_GetHandNodePoseStateLatency", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{latencyInSeconds});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_18_0::ovrp_GetAppHasInputFocus
// Il2CppName: ovrp_GetAppHasInputFocus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Result (*)(GlobalNamespace::OVRPlugin::Bool&)>(&GlobalNamespace::OVRPlugin::OVRP_1_18_0::ovrp_GetAppHasInputFocus)> {
  const MethodInfo* get() {
    static auto* appHasInputFocus = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Bool")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_18_0*), "ovrp_GetAppHasInputFocus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{appHasInputFocus});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_18_0::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_18_0::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_18_0*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
