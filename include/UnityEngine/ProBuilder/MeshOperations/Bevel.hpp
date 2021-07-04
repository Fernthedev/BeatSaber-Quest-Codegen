// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.Edge
#include "UnityEngine/ProBuilder/Edge.hpp"
// Including type: UnityEngine.ProBuilder.SimpleTuple`2
#include "UnityEngine/ProBuilder/SimpleTuple_2.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder::MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: Face
  class Face;
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
  // Forward declaring type: FaceRebuildData
  class FaceRebuildData;
  // Forward declaring type: Vertex
  class Vertex;
  // Forward declaring type: WingedEdge
  class WingedEdge;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.Bevel
  class Bevel : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::ProBuilder::MeshOperations::Bevel::$$c__DisplayClass0_0
    class $$c__DisplayClass0_0;
    // Nested type: UnityEngine::ProBuilder::MeshOperations::Bevel::$$c__DisplayClass0_1
    class $$c__DisplayClass0_1;
    // Nested type: UnityEngine::ProBuilder::MeshOperations::Bevel::$$c__DisplayClass0_2
    class $$c__DisplayClass0_2;
    // Nested type: UnityEngine::ProBuilder::MeshOperations::Bevel::$$c
    class $$c;
    // Creating value type constructor for type: Bevel
    Bevel() noexcept {}
    // Get static field: static private readonly System.Int32[] k_BridgeIndexesTri
    static ::Array<int>* _get_k_BridgeIndexesTri();
    // Set static field: static private readonly System.Int32[] k_BridgeIndexesTri
    static void _set_k_BridgeIndexesTri(::Array<int>* value);
    // static public System.Collections.Generic.List`1<UnityEngine.ProBuilder.Face> BevelEdges(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Edge> edges, System.Single amount)
    // Offset: 0x1542824
    static System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face*>* BevelEdges(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Edge>* edges, float amount);
    // static private System.Collections.Generic.List`1<UnityEngine.ProBuilder.FaceRebuildData> GetBridgeFaces(System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Vertex> vertices, UnityEngine.ProBuilder.WingedEdge left, UnityEngine.ProBuilder.WingedEdge right, System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnityEngine.ProBuilder.SimpleTuple`2<UnityEngine.ProBuilder.FaceRebuildData,System.Collections.Generic.List`1<System.Int32>>>> holes)
    // Offset: 0x1544E74
    static System::Collections::Generic::List_1<UnityEngine::ProBuilder::FaceRebuildData*>* GetBridgeFaces(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Vertex*>* vertices, UnityEngine::ProBuilder::WingedEdge* left, UnityEngine::ProBuilder::WingedEdge* right, System::Collections::Generic::Dictionary_2<int, System::Collections::Generic::List_1<UnityEngine::ProBuilder::SimpleTuple_2<UnityEngine::ProBuilder::FaceRebuildData*, System::Collections::Generic::List_1<int>*>>*>* holes);
    // static private System.Void SlideEdge(System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Vertex> vertices, UnityEngine.ProBuilder.WingedEdge we, System.Single amount)
    // Offset: 0x1544A64
    static void SlideEdge(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Vertex*>* vertices, UnityEngine::ProBuilder::WingedEdge* we, float amount);
    // static private UnityEngine.ProBuilder.Edge GetLeadingEdge(UnityEngine.ProBuilder.WingedEdge wing, System.Int32 common)
    // Offset: 0x15454EC
    static UnityEngine::ProBuilder::Edge GetLeadingEdge(UnityEngine::ProBuilder::WingedEdge* wing, int common);
    // static private System.Void .cctor()
    // Offset: 0x15455E4
    static void _cctor();
  }; // UnityEngine.ProBuilder.MeshOperations.Bevel
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::Bevel*, "UnityEngine.ProBuilder.MeshOperations", "Bevel");
// Writing includes for template specializations
#include "UnityEngine/ProBuilder/ProBuilderMesh.hpp"
#include "System/Collections/Generic/IList_1.hpp"
#include "UnityEngine/ProBuilder/WingedEdge.hpp"
#include "System/Collections/Generic/Dictionary_2.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::Bevel::BevelEdges
// Il2CppName: BevelEdges
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face*>* (*)(UnityEngine::ProBuilder::ProBuilderMesh*, System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Edge>*, float)>(&UnityEngine::ProBuilder::MeshOperations::Bevel::BevelEdges)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::Bevel*), "BevelEdges", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::ProBuilderMesh*>(), ::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Edge>*>(), ::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::Bevel::GetBridgeFaces
// Il2CppName: GetBridgeFaces
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<UnityEngine::ProBuilder::FaceRebuildData*>* (*)(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Vertex*>*, UnityEngine::ProBuilder::WingedEdge*, UnityEngine::ProBuilder::WingedEdge*, System::Collections::Generic::Dictionary_2<int, System::Collections::Generic::List_1<UnityEngine::ProBuilder::SimpleTuple_2<UnityEngine::ProBuilder::FaceRebuildData*, System::Collections::Generic::List_1<int>*>>*>*)>(&UnityEngine::ProBuilder::MeshOperations::Bevel::GetBridgeFaces)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::Bevel*), "GetBridgeFaces", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Vertex*>*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::WingedEdge*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::WingedEdge*>(), ::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::Dictionary_2<int, System::Collections::Generic::List_1<UnityEngine::ProBuilder::SimpleTuple_2<UnityEngine::ProBuilder::FaceRebuildData*, System::Collections::Generic::List_1<int>*>>*>*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::Bevel::SlideEdge
// Il2CppName: SlideEdge
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Vertex*>*, UnityEngine::ProBuilder::WingedEdge*, float)>(&UnityEngine::ProBuilder::MeshOperations::Bevel::SlideEdge)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::Bevel*), "SlideEdge", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Vertex*>*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::WingedEdge*>(), ::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::Bevel::GetLeadingEdge
// Il2CppName: GetLeadingEdge
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::Edge (*)(UnityEngine::ProBuilder::WingedEdge*, int)>(&UnityEngine::ProBuilder::MeshOperations::Bevel::GetLeadingEdge)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::Bevel*), "GetLeadingEdge", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::WingedEdge*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::Bevel::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::ProBuilder::MeshOperations::Bevel::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::Bevel*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
