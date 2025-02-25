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
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/OVRP_1_3_0
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRPlugin::OVRP_1_3_0 : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: OVRP_1_3_0
    OVRP_1_3_0() noexcept {}
    // Get static field: static public readonly System.Version version
    static System::Version* _get_version();
    // Set static field: static public readonly System.Version version
    static void _set_version(System::Version* value);
    // static private System.Void .cctor()
    // Offset: 0x1636B48
    static void _cctor();
    // static public OVRPlugin/Bool ovrp_GetEyeOcclusionMeshEnabled()
    // Offset: 0x16369E0
    static GlobalNamespace::OVRPlugin::Bool ovrp_GetEyeOcclusionMeshEnabled();
    // static public OVRPlugin/Bool ovrp_SetEyeOcclusionMeshEnabled(OVRPlugin/Bool value)
    // Offset: 0x1636A54
    static GlobalNamespace::OVRPlugin::Bool ovrp_SetEyeOcclusionMeshEnabled(GlobalNamespace::OVRPlugin::Bool value);
    // static public OVRPlugin/Bool ovrp_GetSystemHeadphonesPresent()
    // Offset: 0x1636AD4
    static GlobalNamespace::OVRPlugin::Bool ovrp_GetSystemHeadphonesPresent();
  }; // OVRPlugin/OVRP_1_3_0
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::OVRP_1_3_0*, "", "OVRPlugin/OVRP_1_3_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_3_0::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_3_0::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_3_0*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_3_0::ovrp_GetEyeOcclusionMeshEnabled
// Il2CppName: ovrp_GetEyeOcclusionMeshEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Bool (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_3_0::ovrp_GetEyeOcclusionMeshEnabled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_3_0*), "ovrp_GetEyeOcclusionMeshEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_3_0::ovrp_SetEyeOcclusionMeshEnabled
// Il2CppName: ovrp_SetEyeOcclusionMeshEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Bool (*)(GlobalNamespace::OVRPlugin::Bool)>(&GlobalNamespace::OVRPlugin::OVRP_1_3_0::ovrp_SetEyeOcclusionMeshEnabled)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Bool")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_3_0*), "ovrp_SetEyeOcclusionMeshEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_3_0::ovrp_GetSystemHeadphonesPresent
// Il2CppName: ovrp_GetSystemHeadphonesPresent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Bool (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_3_0::ovrp_GetSystemHeadphonesPresent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_3_0*), "ovrp_GetSystemHeadphonesPresent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
