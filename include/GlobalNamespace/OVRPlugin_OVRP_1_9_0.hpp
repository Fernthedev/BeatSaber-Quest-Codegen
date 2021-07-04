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
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/OVRP_1_9_0
  class OVRPlugin::OVRP_1_9_0 : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: OVRP_1_9_0
    OVRP_1_9_0() noexcept {}
    // Get static field: static public readonly System.Version version
    static System::Version* _get_version();
    // Set static field: static public readonly System.Version version
    static void _set_version(System::Version* value);
    // static public OVRPlugin/SystemHeadset ovrp_GetSystemHeadsetType()
    // Offset: 0x1624EB8
    static GlobalNamespace::OVRPlugin::SystemHeadset ovrp_GetSystemHeadsetType();
    // static public OVRPlugin/Controller ovrp_GetActiveController()
    // Offset: 0x1624F2C
    static GlobalNamespace::OVRPlugin::Controller ovrp_GetActiveController();
    // static public OVRPlugin/Controller ovrp_GetConnectedControllers()
    // Offset: 0x1624FA0
    static GlobalNamespace::OVRPlugin::Controller ovrp_GetConnectedControllers();
    // static public OVRPlugin/Bool ovrp_GetBoundaryGeometry2(OVRPlugin/BoundaryType boundaryType, System.IntPtr points, ref System.Int32 pointsCount)
    // Offset: 0x1625014
    static GlobalNamespace::OVRPlugin::Bool ovrp_GetBoundaryGeometry2(GlobalNamespace::OVRPlugin::BoundaryType boundaryType, System::IntPtr points, int& pointsCount);
    // static public OVRPlugin/AppPerfStats ovrp_GetAppPerfStats()
    // Offset: 0x16250AC
    static GlobalNamespace::OVRPlugin::AppPerfStats ovrp_GetAppPerfStats();
    // static public OVRPlugin/Bool ovrp_ResetAppPerfStats()
    // Offset: 0x1625140
    static GlobalNamespace::OVRPlugin::Bool ovrp_ResetAppPerfStats();
    // static private System.Void .cctor()
    // Offset: 0x16251B4
    static void _cctor();
  }; // OVRPlugin/OVRP_1_9_0
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::OVRP_1_9_0*, "", "OVRPlugin/OVRP_1_9_0");
// Writing includes for template specializations
#include "GlobalNamespace/OVRPlugin_BoundaryType.hpp"
#include "System/IntPtr.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_9_0::ovrp_GetSystemHeadsetType
// Il2CppName: ovrp_GetSystemHeadsetType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::SystemHeadset (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_9_0::ovrp_GetSystemHeadsetType)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_9_0*), "ovrp_GetSystemHeadsetType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_9_0::ovrp_GetActiveController
// Il2CppName: ovrp_GetActiveController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Controller (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_9_0::ovrp_GetActiveController)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_9_0*), "ovrp_GetActiveController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_9_0::ovrp_GetConnectedControllers
// Il2CppName: ovrp_GetConnectedControllers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Controller (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_9_0::ovrp_GetConnectedControllers)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_9_0*), "ovrp_GetConnectedControllers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_9_0::ovrp_GetBoundaryGeometry2
// Il2CppName: ovrp_GetBoundaryGeometry2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Bool (*)(GlobalNamespace::OVRPlugin::BoundaryType, System::IntPtr, int&)>(&GlobalNamespace::OVRPlugin::OVRP_1_9_0::ovrp_GetBoundaryGeometry2)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_9_0*), "ovrp_GetBoundaryGeometry2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::OVRPlugin::BoundaryType>(), ::il2cpp_utils::ExtractIndependentType<System::IntPtr>(), ::il2cpp_utils::ExtractIndependentType<int&>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_9_0::ovrp_GetAppPerfStats
// Il2CppName: ovrp_GetAppPerfStats
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::AppPerfStats (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_9_0::ovrp_GetAppPerfStats)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_9_0*), "ovrp_GetAppPerfStats", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_9_0::ovrp_ResetAppPerfStats
// Il2CppName: ovrp_ResetAppPerfStats
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Bool (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_9_0::ovrp_ResetAppPerfStats)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_9_0*), "ovrp_ResetAppPerfStats", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_9_0::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_9_0::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_9_0*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
