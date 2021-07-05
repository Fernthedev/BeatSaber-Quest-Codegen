// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.EdgeLookup
#include "UnityEngine/ProBuilder/EdgeLookup.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder::MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Forward declaring type: MeshImportSettings
  class MeshImportSettings;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
  // Forward declaring type: Vertex
  class Vertex;
  // Forward declaring type: Face
  class Face;
  // Forward declaring type: WingedEdge
  class WingedEdge;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.MeshImporter
  class MeshImporter : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::ProBuilder::MeshOperations::MeshImporter::$$c
    class $$c;
    // private UnityEngine.Mesh m_SourceMesh
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::Mesh* m_SourceMesh;
    // Field size check
    static_assert(sizeof(UnityEngine::Mesh*) == 0x8);
    // private UnityEngine.Material[] m_SourceMaterials
    // Size: 0x8
    // Offset: 0x18
    ::Array<UnityEngine::Material*>* m_SourceMaterials;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Material*>*) == 0x8);
    // private UnityEngine.ProBuilder.ProBuilderMesh m_Destination
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::ProBuilder::ProBuilderMesh* m_Destination;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::ProBuilderMesh*) == 0x8);
    // private UnityEngine.ProBuilder.Vertex[] m_Vertices
    // Size: 0x8
    // Offset: 0x28
    ::Array<UnityEngine::ProBuilder::Vertex*>* m_Vertices;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::ProBuilder::Vertex*>*) == 0x8);
    // Creating value type constructor for type: MeshImporter
    MeshImporter(UnityEngine::Mesh* m_SourceMesh_ = {}, ::Array<UnityEngine::Material*>* m_SourceMaterials_ = {}, UnityEngine::ProBuilder::ProBuilderMesh* m_Destination_ = {}, ::Array<UnityEngine::ProBuilder::Vertex*>* m_Vertices_ = {}) noexcept : m_SourceMesh{m_SourceMesh_}, m_SourceMaterials{m_SourceMaterials_}, m_Destination{m_Destination_}, m_Vertices{m_Vertices_} {}
    // Get static field: static private readonly UnityEngine.ProBuilder.MeshOperations.MeshImportSettings k_DefaultImportSettings
    static UnityEngine::ProBuilder::MeshOperations::MeshImportSettings* _get_k_DefaultImportSettings();
    // Set static field: static private readonly UnityEngine.ProBuilder.MeshOperations.MeshImportSettings k_DefaultImportSettings
    static void _set_k_DefaultImportSettings(UnityEngine::ProBuilder::MeshOperations::MeshImportSettings* value);
    // public System.Void .ctor(UnityEngine.GameObject gameObject)
    // Offset: 0x1708E94
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MeshImporter* New_ctor(UnityEngine::GameObject* gameObject) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::MeshOperations::MeshImporter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MeshImporter*, creationType>(gameObject)));
    }
    // public System.Void .ctor(UnityEngine.Mesh sourceMesh, UnityEngine.Material[] sourceMaterials, UnityEngine.ProBuilder.ProBuilderMesh destination)
    // Offset: 0x1708FD4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MeshImporter* New_ctor(UnityEngine::Mesh* sourceMesh, ::Array<UnityEngine::Material*>* sourceMaterials, UnityEngine::ProBuilder::ProBuilderMesh* destination) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::MeshOperations::MeshImporter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MeshImporter*, creationType>(sourceMesh, sourceMaterials, destination)));
    }
    // public System.Void .ctor(UnityEngine.ProBuilder.ProBuilderMesh destination)
    // Offset: 0x17090FC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MeshImporter* New_ctor(UnityEngine::ProBuilder::ProBuilderMesh* destination) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::MeshOperations::MeshImporter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MeshImporter*, creationType>(destination)));
    }
    // public System.Boolean Import(UnityEngine.GameObject go, UnityEngine.ProBuilder.MeshOperations.MeshImportSettings importSettings)
    // Offset: 0x1709128
    bool Import(UnityEngine::GameObject* go, UnityEngine::ProBuilder::MeshOperations::MeshImportSettings* importSettings);
    // public System.Void Import(UnityEngine.ProBuilder.MeshOperations.MeshImportSettings importSettings)
    // Offset: 0x17092B0
    void Import(UnityEngine::ProBuilder::MeshOperations::MeshImportSettings* importSettings);
    // static private UnityEngine.ProBuilder.Face GetBestQuadConnection(UnityEngine.ProBuilder.WingedEdge wing, System.Collections.Generic.Dictionary`2<UnityEngine.ProBuilder.EdgeLookup,System.Single> connections)
    // Offset: 0x170AC44
    static UnityEngine::ProBuilder::Face* GetBestQuadConnection(UnityEngine::ProBuilder::WingedEdge* wing, System::Collections::Generic::Dictionary_2<UnityEngine::ProBuilder::EdgeLookup, float>* connections);
    // private System.Single GetQuadScore(UnityEngine.ProBuilder.WingedEdge left, UnityEngine.ProBuilder.WingedEdge right, System.Single normalThreshold)
    // Offset: 0x170A6B4
    float GetQuadScore(UnityEngine::ProBuilder::WingedEdge* left, UnityEngine::ProBuilder::WingedEdge* right, float normalThreshold);
    // static private System.Void .cctor()
    // Offset: 0x170AE24
    static void _cctor();
  }; // UnityEngine.ProBuilder.MeshOperations.MeshImporter
  #pragma pack(pop)
  static check_size<sizeof(MeshImporter), 40 + sizeof(::Array<UnityEngine::ProBuilder::Vertex*>*)> __UnityEngine_ProBuilder_MeshOperations_MeshImporterSizeCheck;
  static_assert(sizeof(MeshImporter) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::MeshImporter*, "UnityEngine.ProBuilder.MeshOperations", "MeshImporter");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::MeshImporter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::MeshImporter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::MeshImporter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::MeshImporter::Import
// Il2CppName: Import
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::MeshOperations::MeshImporter::*)(UnityEngine::GameObject*, UnityEngine::ProBuilder::MeshOperations::MeshImportSettings*)>(&UnityEngine::ProBuilder::MeshOperations::MeshImporter::Import)> {
  const MethodInfo* get() {
    static auto* go = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* importSettings = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.MeshOperations", "MeshImportSettings")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::MeshImporter*), "Import", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{go, importSettings});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::MeshImporter::Import
// Il2CppName: Import
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::MeshOperations::MeshImporter::*)(UnityEngine::ProBuilder::MeshOperations::MeshImportSettings*)>(&UnityEngine::ProBuilder::MeshOperations::MeshImporter::Import)> {
  const MethodInfo* get() {
    static auto* importSettings = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.MeshOperations", "MeshImportSettings")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::MeshImporter*), "Import", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{importSettings});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::MeshImporter::GetBestQuadConnection
// Il2CppName: GetBestQuadConnection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::Face* (*)(UnityEngine::ProBuilder::WingedEdge*, System::Collections::Generic::Dictionary_2<UnityEngine::ProBuilder::EdgeLookup, float>*)>(&UnityEngine::ProBuilder::MeshOperations::MeshImporter::GetBestQuadConnection)> {
  const MethodInfo* get() {
    static auto* wing = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "WingedEdge")->byval_arg;
    static auto* connections = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "EdgeLookup"), ::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::MeshImporter*), "GetBestQuadConnection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{wing, connections});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::MeshImporter::GetQuadScore
// Il2CppName: GetQuadScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::ProBuilder::MeshOperations::MeshImporter::*)(UnityEngine::ProBuilder::WingedEdge*, UnityEngine::ProBuilder::WingedEdge*, float)>(&UnityEngine::ProBuilder::MeshOperations::MeshImporter::GetQuadScore)> {
  const MethodInfo* get() {
    static auto* left = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "WingedEdge")->byval_arg;
    static auto* right = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "WingedEdge")->byval_arg;
    static auto* normalThreshold = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::MeshImporter*), "GetQuadScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{left, right, normalThreshold});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::MeshImporter::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::ProBuilder::MeshOperations::MeshImporter::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::MeshImporter*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
