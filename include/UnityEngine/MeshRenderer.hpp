// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Renderer
#include "UnityEngine/Renderer.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.MeshRenderer
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: DAE46C
  class MeshRenderer : public UnityEngine::Renderer {
    public:
    // Creating value type constructor for type: MeshRenderer
    MeshRenderer() noexcept {}
    // public UnityEngine.Mesh get_additionalVertexStreams()
    // Offset: 0x1D06524
    UnityEngine::Mesh* get_additionalVertexStreams();
    // private System.Void DontStripMeshRenderer()
    // Offset: 0x1D06520
    void DontStripMeshRenderer();
  }; // UnityEngine.MeshRenderer
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::MeshRenderer*, "UnityEngine", "MeshRenderer");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::MeshRenderer::get_additionalVertexStreams
// Il2CppName: get_additionalVertexStreams
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Mesh* (UnityEngine::MeshRenderer::*)()>(&UnityEngine::MeshRenderer::get_additionalVertexStreams)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MeshRenderer*), "get_additionalVertexStreams", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::MeshRenderer::DontStripMeshRenderer
// Il2CppName: DontStripMeshRenderer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::MeshRenderer::*)()>(&UnityEngine::MeshRenderer::DontStripMeshRenderer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MeshRenderer*), "DontStripMeshRenderer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
