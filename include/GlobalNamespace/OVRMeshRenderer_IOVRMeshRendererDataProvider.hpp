// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRMeshRenderer
#include "GlobalNamespace/OVRMeshRenderer.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: OVRMeshRenderer/IOVRMeshRendererDataProvider
  class OVRMeshRenderer::IOVRMeshRendererDataProvider {
    public:
    // Creating value type constructor for type: IOVRMeshRendererDataProvider
    IOVRMeshRendererDataProvider() noexcept {}
    // public OVRMeshRenderer/MeshRendererData GetMeshRendererData()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::OVRMeshRenderer::MeshRendererData GetMeshRendererData();
  }; // OVRMeshRenderer/IOVRMeshRendererDataProvider
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRMeshRenderer::IOVRMeshRendererDataProvider*, "", "OVRMeshRenderer/IOVRMeshRendererDataProvider");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRMeshRenderer::IOVRMeshRendererDataProvider::GetMeshRendererData
// Il2CppName: GetMeshRendererData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRMeshRenderer::MeshRendererData (GlobalNamespace::OVRMeshRenderer::IOVRMeshRendererDataProvider::*)()>(&GlobalNamespace::OVRMeshRenderer::IOVRMeshRendererDataProvider::GetMeshRendererData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRMeshRenderer::IOVRMeshRendererDataProvider*), "GetMeshRendererData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
