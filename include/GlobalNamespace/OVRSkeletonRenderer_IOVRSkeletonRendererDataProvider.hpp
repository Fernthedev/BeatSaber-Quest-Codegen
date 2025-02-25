// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRSkeletonRenderer
#include "GlobalNamespace/OVRSkeletonRenderer.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRSkeletonRenderer/IOVRSkeletonRendererDataProvider
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRSkeletonRenderer::IOVRSkeletonRendererDataProvider {
    public:
    // Creating value type constructor for type: IOVRSkeletonRendererDataProvider
    IOVRSkeletonRendererDataProvider() noexcept {}
    // public OVRSkeletonRenderer/SkeletonRendererData GetSkeletonRendererData()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::OVRSkeletonRenderer::SkeletonRendererData GetSkeletonRendererData();
  }; // OVRSkeletonRenderer/IOVRSkeletonRendererDataProvider
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRSkeletonRenderer::IOVRSkeletonRendererDataProvider*, "", "OVRSkeletonRenderer/IOVRSkeletonRendererDataProvider");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeletonRenderer::IOVRSkeletonRendererDataProvider::GetSkeletonRendererData
// Il2CppName: GetSkeletonRendererData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRSkeletonRenderer::SkeletonRendererData (GlobalNamespace::OVRSkeletonRenderer::IOVRSkeletonRendererDataProvider::*)()>(&GlobalNamespace::OVRSkeletonRenderer::IOVRSkeletonRendererDataProvider::GetSkeletonRendererData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeletonRenderer::IOVRSkeletonRendererDataProvider*), "GetSkeletonRendererData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
