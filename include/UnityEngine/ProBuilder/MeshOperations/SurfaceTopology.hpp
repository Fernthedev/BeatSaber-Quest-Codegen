// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder::MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
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
  // Forward declaring type: WindingOrder
  struct WindingOrder;
  // Forward declaring type: ActionResult
  class ActionResult;
  // Forward declaring type: WingedEdge
  class WingedEdge;
  // Forward declaring type: Edge
  struct Edge;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.SurfaceTopology
  // [ExtensionAttribute] Offset: FFFFFFFF
  class SurfaceTopology : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::$$c
    class $$c;
    // Creating value type constructor for type: SurfaceTopology
    SurfaceTopology() noexcept {}
    // static public UnityEngine.ProBuilder.Face[] ToTriangles(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Face> faces)
    // Offset: 0x170DA1C
    static ::Array<UnityEngine::ProBuilder::Face*>* ToTriangles(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Face*>* faces);
    // static private System.Collections.Generic.List`1<UnityEngine.ProBuilder.FaceRebuildData> BreakFaceIntoTris(UnityEngine.ProBuilder.Face face, System.Collections.Generic.List`1<UnityEngine.ProBuilder.Vertex> vertices, System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> lookup)
    // Offset: 0x170DEA8
    static System::Collections::Generic::List_1<UnityEngine::ProBuilder::FaceRebuildData*>* BreakFaceIntoTris(UnityEngine::ProBuilder::Face* face, System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex*>* vertices, System::Collections::Generic::Dictionary_2<int, int>* lookup);
    // static public UnityEngine.ProBuilder.WindingOrder GetWindingOrder(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.Face face)
    // Offset: 0x170E250
    static UnityEngine::ProBuilder::WindingOrder GetWindingOrder(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::ProBuilder::Face* face);
    // static private UnityEngine.ProBuilder.WindingOrder GetWindingOrder(System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Vertex> vertices, System.Collections.Generic.IList`1<System.Int32> indexes)
    // Offset: 0x170E52C
    static UnityEngine::ProBuilder::WindingOrder GetWindingOrder(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Vertex*>* vertices, System::Collections::Generic::IList_1<int>* indexes);
    // static public UnityEngine.ProBuilder.WindingOrder GetWindingOrder(System.Collections.Generic.IList`1<UnityEngine.Vector2> points)
    // Offset: 0x170E294
    static UnityEngine::ProBuilder::WindingOrder GetWindingOrder(System::Collections::Generic::IList_1<UnityEngine::Vector2>* points);
    // static public System.Boolean FlipEdge(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.Face face)
    // Offset: 0x170E6A4
    static bool FlipEdge(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::ProBuilder::Face* face);
    // static public UnityEngine.ProBuilder.ActionResult ConformNormals(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Face> faces)
    // Offset: 0x170EA2C
    static UnityEngine::ProBuilder::ActionResult* ConformNormals(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face*>* faces);
    // static private System.Void GetWindingFlags(UnityEngine.ProBuilder.WingedEdge edge, System.Boolean flag, System.Collections.Generic.Dictionary`2<UnityEngine.ProBuilder.Face,System.Boolean> flags)
    // Offset: 0x170EE94
    static void GetWindingFlags(UnityEngine::ProBuilder::WingedEdge* edge, bool flag, System::Collections::Generic::Dictionary_2<UnityEngine::ProBuilder::Face*, bool>* flags);
    // static UnityEngine.ProBuilder.ActionResult ConformOppositeNormal(UnityEngine.ProBuilder.WingedEdge source)
    // Offset: 0x170F0F0
    static UnityEngine::ProBuilder::ActionResult* ConformOppositeNormal(UnityEngine::ProBuilder::WingedEdge* source);
    // static private UnityEngine.ProBuilder.Edge GetCommonEdgeInWindingOrder(UnityEngine.ProBuilder.WingedEdge wing)
    // Offset: 0x170EF84
    static UnityEngine::ProBuilder::Edge GetCommonEdgeInWindingOrder(UnityEngine::ProBuilder::WingedEdge* wing);
    // static System.Void MatchNormal(UnityEngine.ProBuilder.Face source, UnityEngine.ProBuilder.Face target, System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> lookup)
    // Offset: 0x170F1F0
    static void MatchNormal(UnityEngine::ProBuilder::Face* source, UnityEngine::ProBuilder::Face* target, System::Collections::Generic::Dictionary_2<int, int>* lookup);
  }; // UnityEngine.ProBuilder.MeshOperations.SurfaceTopology
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::SurfaceTopology*, "UnityEngine.ProBuilder.MeshOperations", "SurfaceTopology");
// Writing includes for template specializations
#include "UnityEngine/ProBuilder/ProBuilderMesh.hpp"
#include "System/Collections/Generic/IList_1.hpp"
#include "UnityEngine/ProBuilder/Face.hpp"
#include "System/Collections/Generic/List_1.hpp"
#include "System/Collections/Generic/Dictionary_2.hpp"
#include "System/Collections/Generic/IEnumerable_1.hpp"
#include "UnityEngine/ProBuilder/WingedEdge.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::ToTriangles
// Il2CppName: ToTriangles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<UnityEngine::ProBuilder::Face*>* (*)(UnityEngine::ProBuilder::ProBuilderMesh*, System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Face*>*)>(&UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::ToTriangles)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::SurfaceTopology*), "ToTriangles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::ProBuilderMesh*>(), ::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Face*>*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::BreakFaceIntoTris
// Il2CppName: BreakFaceIntoTris
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<UnityEngine::ProBuilder::FaceRebuildData*>* (*)(UnityEngine::ProBuilder::Face*, System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex*>*, System::Collections::Generic::Dictionary_2<int, int>*)>(&UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::BreakFaceIntoTris)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::SurfaceTopology*), "BreakFaceIntoTris", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::Face*>(), ::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex*>*>(), ::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::Dictionary_2<int, int>*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::GetWindingOrder
// Il2CppName: GetWindingOrder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::WindingOrder (*)(UnityEngine::ProBuilder::ProBuilderMesh*, UnityEngine::ProBuilder::Face*)>(&UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::GetWindingOrder)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::SurfaceTopology*), "GetWindingOrder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::ProBuilderMesh*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::Face*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::GetWindingOrder
// Il2CppName: GetWindingOrder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::WindingOrder (*)(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Vertex*>*, System::Collections::Generic::IList_1<int>*)>(&UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::GetWindingOrder)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::SurfaceTopology*), "GetWindingOrder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Vertex*>*>(), ::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::IList_1<int>*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::GetWindingOrder
// Il2CppName: GetWindingOrder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::WindingOrder (*)(System::Collections::Generic::IList_1<UnityEngine::Vector2>*)>(&UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::GetWindingOrder)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::SurfaceTopology*), "GetWindingOrder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::IList_1<UnityEngine::Vector2>*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::FlipEdge
// Il2CppName: FlipEdge
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::ProBuilder::ProBuilderMesh*, UnityEngine::ProBuilder::Face*)>(&UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::FlipEdge)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::SurfaceTopology*), "FlipEdge", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::ProBuilderMesh*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::Face*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::ConformNormals
// Il2CppName: ConformNormals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::ActionResult* (*)(UnityEngine::ProBuilder::ProBuilderMesh*, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face*>*)>(&UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::ConformNormals)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::SurfaceTopology*), "ConformNormals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::ProBuilderMesh*>(), ::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face*>*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::GetWindingFlags
// Il2CppName: GetWindingFlags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::ProBuilder::WingedEdge*, bool, System::Collections::Generic::Dictionary_2<UnityEngine::ProBuilder::Face*, bool>*)>(&UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::GetWindingFlags)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::SurfaceTopology*), "GetWindingFlags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::WingedEdge*>(), ::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::Dictionary_2<UnityEngine::ProBuilder::Face*, bool>*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::ConformOppositeNormal
// Il2CppName: ConformOppositeNormal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::ActionResult* (*)(UnityEngine::ProBuilder::WingedEdge*)>(&UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::ConformOppositeNormal)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::SurfaceTopology*), "ConformOppositeNormal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::WingedEdge*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::GetCommonEdgeInWindingOrder
// Il2CppName: GetCommonEdgeInWindingOrder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::Edge (*)(UnityEngine::ProBuilder::WingedEdge*)>(&UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::GetCommonEdgeInWindingOrder)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::SurfaceTopology*), "GetCommonEdgeInWindingOrder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::WingedEdge*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::MatchNormal
// Il2CppName: MatchNormal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::ProBuilder::Face*, UnityEngine::ProBuilder::Face*, System::Collections::Generic::Dictionary_2<int, int>*)>(&UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::MatchNormal)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::SurfaceTopology*), "MatchNormal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::Face*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::Face*>(), ::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::Dictionary_2<int, int>*>()});
  }
};
