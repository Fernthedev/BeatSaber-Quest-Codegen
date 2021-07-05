// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Component
#include "UnityEngine/Component.hpp"
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
  // Autogenerated type: UnityEngine.MeshFilter
  // [NativeHeaderAttribute] Offset: D8EF80
  // [RequireComponent] Offset: D8EF80
  class MeshFilter : public UnityEngine::Component {
    public:
    // Creating value type constructor for type: MeshFilter
    MeshFilter() noexcept {}
    // private System.Void DontStripMeshFilter()
    // Offset: 0x1C19FA8
    void DontStripMeshFilter();
    // public UnityEngine.Mesh get_sharedMesh()
    // Offset: 0x1C19FAC
    UnityEngine::Mesh* get_sharedMesh();
    // public System.Void set_sharedMesh(UnityEngine.Mesh value)
    // Offset: 0x1C19FEC
    void set_sharedMesh(UnityEngine::Mesh* value);
    // public UnityEngine.Mesh get_mesh()
    // Offset: 0x1C1A03C
    UnityEngine::Mesh* get_mesh();
    // public System.Void set_mesh(UnityEngine.Mesh value)
    // Offset: 0x1C1A07C
    void set_mesh(UnityEngine::Mesh* value);
  }; // UnityEngine.MeshFilter
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::MeshFilter*, "UnityEngine", "MeshFilter");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::MeshFilter::DontStripMeshFilter
// Il2CppName: DontStripMeshFilter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::MeshFilter::*)()>(&UnityEngine::MeshFilter::DontStripMeshFilter)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MeshFilter*), "DontStripMeshFilter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::MeshFilter::get_sharedMesh
// Il2CppName: get_sharedMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Mesh* (UnityEngine::MeshFilter::*)()>(&UnityEngine::MeshFilter::get_sharedMesh)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MeshFilter*), "get_sharedMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::MeshFilter::set_sharedMesh
// Il2CppName: set_sharedMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::MeshFilter::*)(UnityEngine::Mesh*)>(&UnityEngine::MeshFilter::set_sharedMesh)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MeshFilter*), "set_sharedMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::MeshFilter::get_mesh
// Il2CppName: get_mesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Mesh* (UnityEngine::MeshFilter::*)()>(&UnityEngine::MeshFilter::get_mesh)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MeshFilter*), "get_mesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::MeshFilter::set_mesh
// Il2CppName: set_mesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::MeshFilter::*)(UnityEngine::Mesh*)>(&UnityEngine::MeshFilter::set_mesh)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MeshFilter*), "set_mesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
