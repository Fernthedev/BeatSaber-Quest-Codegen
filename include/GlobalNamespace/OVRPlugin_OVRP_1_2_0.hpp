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
  // Autogenerated type: OVRPlugin/OVRP_1_2_0
  class OVRPlugin::OVRP_1_2_0 : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: OVRP_1_2_0
    OVRP_1_2_0() noexcept {}
    // Get static field: static public readonly System.Version version
    static System::Version* _get_version();
    // Set static field: static public readonly System.Version version
    static void _set_version(System::Version* value);
    // static public OVRPlugin/Bool ovrp_SetSystemVSyncCount(System.Int32 vsyncCount)
    // Offset: 0x1621044
    static GlobalNamespace::OVRPlugin::Bool ovrp_SetSystemVSyncCount(int vsyncCount);
    // static public OVRPlugin/Bool ovrpi_SetTrackingCalibratedOrigin()
    // Offset: 0x16210C4
    static GlobalNamespace::OVRPlugin::Bool ovrpi_SetTrackingCalibratedOrigin();
    // static private System.Void .cctor()
    // Offset: 0x1621138
    static void _cctor();
  }; // OVRPlugin/OVRP_1_2_0
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::OVRP_1_2_0*, "", "OVRPlugin/OVRP_1_2_0");
// Writing includes for template specializations
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_2_0::ovrp_SetSystemVSyncCount
// Il2CppName: ovrp_SetSystemVSyncCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Bool (*)(int)>(&GlobalNamespace::OVRPlugin::OVRP_1_2_0::ovrp_SetSystemVSyncCount)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_2_0*), "ovrp_SetSystemVSyncCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_2_0::ovrpi_SetTrackingCalibratedOrigin
// Il2CppName: ovrpi_SetTrackingCalibratedOrigin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Bool (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_2_0::ovrpi_SetTrackingCalibratedOrigin)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_2_0*), "ovrpi_SetTrackingCalibratedOrigin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_2_0::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_2_0::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_2_0*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
