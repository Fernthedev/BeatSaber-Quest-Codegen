// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.ProBuilder.Edge
#include "UnityEngine/ProBuilder/Edge.hpp"
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
  // Forward declaring type: ActionResult
  class ActionResult;
  // Forward declaring type: PolyShape
  class PolyShape;
  // Forward declaring type: FaceRebuildData
  class FaceRebuildData;
  // Forward declaring type: Vertex
  class Vertex;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.AppendElements
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class AppendElements : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::ProBuilder::MeshOperations::AppendElements::$$c
    class $$c;
    // Nested type: UnityEngine::ProBuilder::MeshOperations::AppendElements::$$c__DisplayClass14_0
    class $$c__DisplayClass14_0;
    // Creating value type constructor for type: AppendElements
    AppendElements() noexcept {}
    // static UnityEngine.ProBuilder.Face AppendFace(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.Vector3[] positions, UnityEngine.Color[] colors, UnityEngine.Vector2[] uvs, UnityEngine.ProBuilder.Face face, System.Int32[] common)
    // Offset: 0x1B0294C
    static UnityEngine::ProBuilder::Face* AppendFace(UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::Array<UnityEngine::Vector3>* positions, ::Array<UnityEngine::Color>* colors, ::Array<UnityEngine::Vector2>* uvs, UnityEngine::ProBuilder::Face* face, ::Array<int>* common);
    // static public UnityEngine.ProBuilder.Face[] AppendFaces(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.Vector3[][] positions, UnityEngine.Color[][] colors, UnityEngine.Vector2[][] uvs, UnityEngine.ProBuilder.Face[] faces, System.Int32[][] shared)
    // Offset: 0x1B02E90
    static ::Array<UnityEngine::ProBuilder::Face*>* AppendFaces(UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::Array<::Array<UnityEngine::Vector3>*>* positions, ::Array<::Array<UnityEngine::Color>*>* colors, ::Array<::Array<UnityEngine::Vector2>*>* uvs, ::Array<UnityEngine::ProBuilder::Face*>* faces, ::Array<::Array<int>*>* shared);
    // static public UnityEngine.ProBuilder.Face CreatePolygon(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IList`1<System.Int32> indexes, System.Boolean unordered)
    // Offset: 0x1B0336C
    static UnityEngine::ProBuilder::Face* CreatePolygon(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IList_1<int>* indexes, bool unordered);
    // static public UnityEngine.ProBuilder.ActionResult CreateShapeFromPolygon(UnityEngine.ProBuilder.PolyShape poly)
    // Offset: 0x1B03854
    static UnityEngine::ProBuilder::ActionResult* CreateShapeFromPolygon(UnityEngine::ProBuilder::PolyShape* poly);
    // static System.Void ClearAndRefreshMesh(UnityEngine.ProBuilder.ProBuilderMesh mesh)
    // Offset: 0x1B0389C
    static void ClearAndRefreshMesh(UnityEngine::ProBuilder::ProBuilderMesh* mesh);
    // static public UnityEngine.ProBuilder.ActionResult CreateShapeFromPolygon(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IList`1<UnityEngine.Vector3> points, System.Single extrude, System.Boolean flipNormals)
    // Offset: 0x1B03890
    static UnityEngine::ProBuilder::ActionResult* CreateShapeFromPolygon(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IList_1<UnityEngine::Vector3>* points, float extrude, bool flipNormals);
    // static public UnityEngine.ProBuilder.ActionResult CreateShapeFromPolygon(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IList`1<UnityEngine.Vector3> points, System.Single extrude, System.Boolean flipNormals, UnityEngine.Vector3 cameraLookAt, System.Collections.Generic.IList`1<System.Collections.Generic.IList`1<UnityEngine.Vector3>> holePoints)
    // Offset: 0x1B044C4
    static UnityEngine::ProBuilder::ActionResult* CreateShapeFromPolygon(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IList_1<UnityEngine::Vector3>* points, float extrude, bool flipNormals, UnityEngine::Vector3 cameraLookAt, System::Collections::Generic::IList_1<System::Collections::Generic::IList_1<UnityEngine::Vector3>*>* holePoints);
    // static public UnityEngine.ProBuilder.ActionResult CreateShapeFromPolygon(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IList`1<UnityEngine.Vector3> points, System.Single extrude, System.Boolean flipNormals, System.Collections.Generic.IList`1<System.Collections.Generic.IList`1<UnityEngine.Vector3>> holePoints)
    // Offset: 0x1B038E4
    static UnityEngine::ProBuilder::ActionResult* CreateShapeFromPolygon(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IList_1<UnityEngine::Vector3>* points, float extrude, bool flipNormals, System::Collections::Generic::IList_1<System::Collections::Generic::IList_1<UnityEngine::Vector3>*>* holePoints);
    // static UnityEngine.ProBuilder.FaceRebuildData FaceWithVertices(System.Collections.Generic.List`1<UnityEngine.ProBuilder.Vertex> vertices, System.Boolean unordered)
    // Offset: 0x1B03794
    static UnityEngine::ProBuilder::FaceRebuildData* FaceWithVertices(System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex*>* vertices, bool unordered);
    // static System.Collections.Generic.List`1<UnityEngine.ProBuilder.FaceRebuildData> TentCapWithVertices(System.Collections.Generic.List`1<UnityEngine.ProBuilder.Vertex> path)
    // Offset: 0x1B049B8
    static System::Collections::Generic::List_1<UnityEngine::ProBuilder::FaceRebuildData*>* TentCapWithVertices(System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex*>* path);
    // static public System.Void DuplicateAndFlip(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.Face[] faces)
    // Offset: 0x1B044D0
    static void DuplicateAndFlip(UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::Array<UnityEngine::ProBuilder::Face*>* faces);
    // static public UnityEngine.ProBuilder.Face Bridge(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.Edge a, UnityEngine.ProBuilder.Edge b, System.Boolean allowNonManifoldGeometry)
    // Offset: 0x1B04BD4
    static UnityEngine::ProBuilder::Face* Bridge(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::ProBuilder::Edge a, UnityEngine::ProBuilder::Edge b, bool allowNonManifoldGeometry);
    // static public UnityEngine.ProBuilder.Face AppendVerticesToFace(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.Face face, UnityEngine.Vector3[] points)
    // Offset: 0x1B05ED8
    static UnityEngine::ProBuilder::Face* AppendVerticesToFace(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::ProBuilder::Face* face, ::Array<UnityEngine::Vector3>* points);
    // static public System.Collections.Generic.List`1<UnityEngine.ProBuilder.Edge> AppendVerticesToEdge(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.Edge edge, System.Int32 count)
    // Offset: 0x1B06800
    static System::Collections::Generic::List_1<UnityEngine::ProBuilder::Edge>* AppendVerticesToEdge(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::ProBuilder::Edge edge, int count);
    // static public System.Collections.Generic.List`1<UnityEngine.ProBuilder.Edge> AppendVerticesToEdge(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Edge> edges, System.Int32 count)
    // Offset: 0x1B06890
    static System::Collections::Generic::List_1<UnityEngine::ProBuilder::Edge>* AppendVerticesToEdge(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Edge>* edges, int count);
  }; // UnityEngine.ProBuilder.MeshOperations.AppendElements
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::AppendElements*, "UnityEngine.ProBuilder.MeshOperations", "AppendElements");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::AppendElements::AppendFace
// Il2CppName: AppendFace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::Face* (*)(UnityEngine::ProBuilder::ProBuilderMesh*, ::Array<UnityEngine::Vector3>*, ::Array<UnityEngine::Color>*, ::Array<UnityEngine::Vector2>*, UnityEngine::ProBuilder::Face*, ::Array<int>*)>(&UnityEngine::ProBuilder::MeshOperations::AppendElements::AppendFace)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* positions = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    static auto* colors = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Color"), 1)->byval_arg;
    static auto* uvs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2"), 1)->byval_arg;
    static auto* face = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face")->byval_arg;
    static auto* common = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::AppendElements*), "AppendFace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, positions, colors, uvs, face, common});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::AppendElements::AppendFaces
// Il2CppName: AppendFaces
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<UnityEngine::ProBuilder::Face*>* (*)(UnityEngine::ProBuilder::ProBuilderMesh*, ::Array<::Array<UnityEngine::Vector3>*>*, ::Array<::Array<UnityEngine::Color>*>*, ::Array<::Array<UnityEngine::Vector2>*>*, ::Array<UnityEngine::ProBuilder::Face*>*, ::Array<::Array<int>*>*)>(&UnityEngine::ProBuilder::MeshOperations::AppendElements::AppendFaces)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* positions = &il2cpp_functions::array_class_get(il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1), 1)->byval_arg;
    static auto* colors = &il2cpp_functions::array_class_get(il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Color"), 1), 1)->byval_arg;
    static auto* uvs = &il2cpp_functions::array_class_get(il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2"), 1), 1)->byval_arg;
    static auto* faces = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face"), 1)->byval_arg;
    static auto* shared = &il2cpp_functions::array_class_get(il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::AppendElements*), "AppendFaces", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, positions, colors, uvs, faces, shared});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::AppendElements::CreatePolygon
// Il2CppName: CreatePolygon
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::Face* (*)(UnityEngine::ProBuilder::ProBuilderMesh*, System::Collections::Generic::IList_1<int>*, bool)>(&UnityEngine::ProBuilder::MeshOperations::AppendElements::CreatePolygon)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* indexes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    static auto* unordered = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::AppendElements*), "CreatePolygon", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, indexes, unordered});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::AppendElements::CreateShapeFromPolygon
// Il2CppName: CreateShapeFromPolygon
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::ActionResult* (*)(UnityEngine::ProBuilder::PolyShape*)>(&UnityEngine::ProBuilder::MeshOperations::AppendElements::CreateShapeFromPolygon)> {
  static const MethodInfo* get() {
    static auto* poly = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "PolyShape")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::AppendElements*), "CreateShapeFromPolygon", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{poly});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::AppendElements::ClearAndRefreshMesh
// Il2CppName: ClearAndRefreshMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::ProBuilder::ProBuilderMesh*)>(&UnityEngine::ProBuilder::MeshOperations::AppendElements::ClearAndRefreshMesh)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::AppendElements*), "ClearAndRefreshMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::AppendElements::CreateShapeFromPolygon
// Il2CppName: CreateShapeFromPolygon
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::ActionResult* (*)(UnityEngine::ProBuilder::ProBuilderMesh*, System::Collections::Generic::IList_1<UnityEngine::Vector3>*, float, bool)>(&UnityEngine::ProBuilder::MeshOperations::AppendElements::CreateShapeFromPolygon)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* points = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")})->byval_arg;
    static auto* extrude = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* flipNormals = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::AppendElements*), "CreateShapeFromPolygon", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, points, extrude, flipNormals});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::AppendElements::CreateShapeFromPolygon
// Il2CppName: CreateShapeFromPolygon
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::ActionResult* (*)(UnityEngine::ProBuilder::ProBuilderMesh*, System::Collections::Generic::IList_1<UnityEngine::Vector3>*, float, bool, UnityEngine::Vector3, System::Collections::Generic::IList_1<System::Collections::Generic::IList_1<UnityEngine::Vector3>*>*)>(&UnityEngine::ProBuilder::MeshOperations::AppendElements::CreateShapeFromPolygon)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* points = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")})->byval_arg;
    static auto* extrude = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* flipNormals = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* cameraLookAt = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* holePoints = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")})})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::AppendElements*), "CreateShapeFromPolygon", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, points, extrude, flipNormals, cameraLookAt, holePoints});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::AppendElements::CreateShapeFromPolygon
// Il2CppName: CreateShapeFromPolygon
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::ActionResult* (*)(UnityEngine::ProBuilder::ProBuilderMesh*, System::Collections::Generic::IList_1<UnityEngine::Vector3>*, float, bool, System::Collections::Generic::IList_1<System::Collections::Generic::IList_1<UnityEngine::Vector3>*>*)>(&UnityEngine::ProBuilder::MeshOperations::AppendElements::CreateShapeFromPolygon)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* points = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")})->byval_arg;
    static auto* extrude = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* flipNormals = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* holePoints = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")})})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::AppendElements*), "CreateShapeFromPolygon", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, points, extrude, flipNormals, holePoints});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::AppendElements::FaceWithVertices
// Il2CppName: FaceWithVertices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::FaceRebuildData* (*)(System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex*>*, bool)>(&UnityEngine::ProBuilder::MeshOperations::AppendElements::FaceWithVertices)> {
  static const MethodInfo* get() {
    static auto* vertices = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Vertex")})->byval_arg;
    static auto* unordered = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::AppendElements*), "FaceWithVertices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vertices, unordered});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::AppendElements::TentCapWithVertices
// Il2CppName: TentCapWithVertices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<UnityEngine::ProBuilder::FaceRebuildData*>* (*)(System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex*>*)>(&UnityEngine::ProBuilder::MeshOperations::AppendElements::TentCapWithVertices)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Vertex")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::AppendElements*), "TentCapWithVertices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::AppendElements::DuplicateAndFlip
// Il2CppName: DuplicateAndFlip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::ProBuilder::ProBuilderMesh*, ::Array<UnityEngine::ProBuilder::Face*>*)>(&UnityEngine::ProBuilder::MeshOperations::AppendElements::DuplicateAndFlip)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* faces = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::AppendElements*), "DuplicateAndFlip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, faces});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::AppendElements::Bridge
// Il2CppName: Bridge
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::Face* (*)(UnityEngine::ProBuilder::ProBuilderMesh*, UnityEngine::ProBuilder::Edge, UnityEngine::ProBuilder::Edge, bool)>(&UnityEngine::ProBuilder::MeshOperations::AppendElements::Bridge)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* a = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Edge")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Edge")->byval_arg;
    static auto* allowNonManifoldGeometry = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::AppendElements*), "Bridge", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, a, b, allowNonManifoldGeometry});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::AppendElements::AppendVerticesToFace
// Il2CppName: AppendVerticesToFace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::Face* (*)(UnityEngine::ProBuilder::ProBuilderMesh*, UnityEngine::ProBuilder::Face*, ::Array<UnityEngine::Vector3>*)>(&UnityEngine::ProBuilder::MeshOperations::AppendElements::AppendVerticesToFace)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* face = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face")->byval_arg;
    static auto* points = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::AppendElements*), "AppendVerticesToFace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, face, points});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::AppendElements::AppendVerticesToEdge
// Il2CppName: AppendVerticesToEdge
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<UnityEngine::ProBuilder::Edge>* (*)(UnityEngine::ProBuilder::ProBuilderMesh*, UnityEngine::ProBuilder::Edge, int)>(&UnityEngine::ProBuilder::MeshOperations::AppendElements::AppendVerticesToEdge)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* edge = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Edge")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::AppendElements*), "AppendVerticesToEdge", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, edge, count});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::AppendElements::AppendVerticesToEdge
// Il2CppName: AppendVerticesToEdge
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<UnityEngine::ProBuilder::Edge>* (*)(UnityEngine::ProBuilder::ProBuilderMesh*, System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Edge>*, int)>(&UnityEngine::ProBuilder::MeshOperations::AppendElements::AppendVerticesToEdge)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* edges = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Edge")})->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::AppendElements*), "AppendVerticesToEdge", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, edges, count});
  }
};
