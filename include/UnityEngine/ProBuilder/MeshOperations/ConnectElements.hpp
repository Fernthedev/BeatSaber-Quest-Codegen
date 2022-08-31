// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ProBuilder.Edge
#include "UnityEngine/ProBuilder/Edge.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder::MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Forward declaring type: ConnectFaceRebuildData
  class ConnectFaceRebuildData;
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: Face
  class Face;
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
  // Forward declaring type: SimpleTuple`2<T1, T2>
  template<typename T1, typename T2>
  struct SimpleTuple_2;
  // Forward declaring type: ActionResult
  class ActionResult;
  // Forward declaring type: WingedEdge
  class WingedEdge;
  // Forward declaring type: Vertex
  class Vertex;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Forward declaring type: ConnectElements
  class ConnectElements;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::ConnectElements);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::ConnectElements*, "UnityEngine.ProBuilder.MeshOperations", "ConnectElements");
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.ConnectElements
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class ConnectElements : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c
    class $$c;
    // Nested type: ::UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c__DisplayClass2_0
    class $$c__DisplayClass2_0;
    // Nested type: ::UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c__DisplayClass3_0
    class $$c__DisplayClass3_0;
    // static public UnityEngine.ProBuilder.Face[] Connect(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Face> faces)
    // Offset: 0x1A2E284
    static ::ArrayW<::UnityEngine::ProBuilder::Face*> Connect(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces);
    // static public UnityEngine.ProBuilder.SimpleTuple`2<UnityEngine.ProBuilder.Face[],UnityEngine.ProBuilder.Edge[]> Connect(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Edge> edges)
    // Offset: 0x1A2F8A0
    static ::UnityEngine::ProBuilder::SimpleTuple_2<::ArrayW<::UnityEngine::ProBuilder::Face*>, ::ArrayW<::UnityEngine::ProBuilder::Edge>> Connect(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges);
    // static public System.Int32[] Connect(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IList`1<System.Int32> indexes)
    // Offset: 0x1A2F940
    static ::ArrayW<int> Connect(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IList_1<int>* indexes);
    // static UnityEngine.ProBuilder.ActionResult Connect(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Edge> edges, out UnityEngine.ProBuilder.Face[] addedFaces, out UnityEngine.ProBuilder.Edge[] connections, System.Boolean returnFaces, System.Boolean returnEdges, System.Collections.Generic.HashSet`1<UnityEngine.ProBuilder.Face> faceMask)
    // Offset: 0x1A2E4B4
    static ::UnityEngine::ProBuilder::ActionResult* Connect(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges, ByRef<::ArrayW<::UnityEngine::ProBuilder::Face*>> addedFaces, ByRef<::ArrayW<::UnityEngine::ProBuilder::Edge>> connections, bool returnFaces, bool returnEdges, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>* faceMask);
    // static private System.Collections.Generic.List`1<UnityEngine.ProBuilder.MeshOperations.ConnectFaceRebuildData> ConnectEdgesInFace(UnityEngine.ProBuilder.Face face, UnityEngine.ProBuilder.WingedEdge a, UnityEngine.ProBuilder.WingedEdge b, System.Collections.Generic.List`1<UnityEngine.ProBuilder.Vertex> vertices)
    // Offset: 0x1A320D8
    static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>* ConnectEdgesInFace(::UnityEngine::ProBuilder::Face* face, ::UnityEngine::ProBuilder::WingedEdge* a, ::UnityEngine::ProBuilder::WingedEdge* b, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* vertices);
    // static private System.Collections.Generic.List`1<UnityEngine.ProBuilder.MeshOperations.ConnectFaceRebuildData> ConnectEdgesInFace(UnityEngine.ProBuilder.Face face, System.Collections.Generic.List`1<UnityEngine.ProBuilder.WingedEdge> edges, System.Collections.Generic.List`1<UnityEngine.ProBuilder.Vertex> vertices)
    // Offset: 0x1A319B8
    static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>* ConnectEdgesInFace(::UnityEngine::ProBuilder::Face* face, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>* edges, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* vertices);
    // static private System.Boolean InsertVertices(UnityEngine.ProBuilder.Face face, System.Collections.Generic.List`1<UnityEngine.ProBuilder.WingedEdge> edges, System.Collections.Generic.List`1<UnityEngine.ProBuilder.Vertex> vertices, out UnityEngine.ProBuilder.MeshOperations.ConnectFaceRebuildData data)
    // Offset: 0x1A31590
    static bool InsertVertices(::UnityEngine::ProBuilder::Face* face, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>* edges, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* vertices, ByRef<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*> data);
    // static private System.Collections.Generic.List`1<UnityEngine.ProBuilder.MeshOperations.ConnectFaceRebuildData> ConnectIndexesPerFace(UnityEngine.ProBuilder.Face face, System.Int32 a, System.Int32 b, System.Collections.Generic.List`1<UnityEngine.ProBuilder.Vertex> vertices, System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> lookup)
    // Offset: 0x1A30ED8
    static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>* ConnectIndexesPerFace(::UnityEngine::ProBuilder::Face* face, int a, int b, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* vertices, ::System::Collections::Generic::Dictionary_2<int, int>* lookup);
    // static private System.Collections.Generic.List`1<UnityEngine.ProBuilder.MeshOperations.ConnectFaceRebuildData> ConnectIndexesPerFace(UnityEngine.ProBuilder.Face face, System.Collections.Generic.List`1<System.Int32> indexes, System.Collections.Generic.List`1<UnityEngine.ProBuilder.Vertex> vertices, System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> lookup, System.Int32 sharedIndexOffset)
    // Offset: 0x1A306A8
    static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>* ConnectIndexesPerFace(::UnityEngine::ProBuilder::Face* face, ::System::Collections::Generic::List_1<int>* indexes, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* vertices, ::System::Collections::Generic::Dictionary_2<int, int>* lookup, int sharedIndexOffset);
  }; // UnityEngine.ProBuilder.MeshOperations.ConnectElements
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::ConnectElements::Connect
// Il2CppName: Connect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::ProBuilder::Face*> (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*)>(&UnityEngine::ProBuilder::MeshOperations::ConnectElements::Connect)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* faces = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::ConnectElements*), "Connect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, faces});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::ConnectElements::Connect
// Il2CppName: Connect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::SimpleTuple_2<::ArrayW<::UnityEngine::ProBuilder::Face*>, ::ArrayW<::UnityEngine::ProBuilder::Edge>> (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*)>(&UnityEngine::ProBuilder::MeshOperations::ConnectElements::Connect)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* edges = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Edge")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::ConnectElements*), "Connect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, edges});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::ConnectElements::Connect
// Il2CppName: Connect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int> (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IList_1<int>*)>(&UnityEngine::ProBuilder::MeshOperations::ConnectElements::Connect)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* indexes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::ConnectElements*), "Connect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, indexes});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::ConnectElements::Connect
// Il2CppName: Connect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::ActionResult* (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*, ByRef<::ArrayW<::UnityEngine::ProBuilder::Face*>>, ByRef<::ArrayW<::UnityEngine::ProBuilder::Edge>>, bool, bool, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*)>(&UnityEngine::ProBuilder::MeshOperations::ConnectElements::Connect)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* edges = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Edge")})->byval_arg;
    static auto* addedFaces = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face"), 1)->this_arg;
    static auto* connections = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Edge"), 1)->this_arg;
    static auto* returnFaces = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* returnEdges = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* faceMask = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "HashSet`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::ConnectElements*), "Connect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, edges, addedFaces, connections, returnFaces, returnEdges, faceMask});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::ConnectElements::ConnectEdgesInFace
// Il2CppName: ConnectEdgesInFace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>* (*)(::UnityEngine::ProBuilder::Face*, ::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::WingedEdge*, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*)>(&UnityEngine::ProBuilder::MeshOperations::ConnectElements::ConnectEdgesInFace)> {
  static const MethodInfo* get() {
    static auto* face = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face")->byval_arg;
    static auto* a = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "WingedEdge")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "WingedEdge")->byval_arg;
    static auto* vertices = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Vertex")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::ConnectElements*), "ConnectEdgesInFace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{face, a, b, vertices});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::ConnectElements::ConnectEdgesInFace
// Il2CppName: ConnectEdgesInFace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>* (*)(::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*)>(&UnityEngine::ProBuilder::MeshOperations::ConnectElements::ConnectEdgesInFace)> {
  static const MethodInfo* get() {
    static auto* face = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face")->byval_arg;
    static auto* edges = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "WingedEdge")})->byval_arg;
    static auto* vertices = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Vertex")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::ConnectElements*), "ConnectEdgesInFace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{face, edges, vertices});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::ConnectElements::InsertVertices
// Il2CppName: InsertVertices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*, ByRef<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>)>(&UnityEngine::ProBuilder::MeshOperations::ConnectElements::InsertVertices)> {
  static const MethodInfo* get() {
    static auto* face = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face")->byval_arg;
    static auto* edges = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "WingedEdge")})->byval_arg;
    static auto* vertices = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Vertex")})->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.MeshOperations", "ConnectFaceRebuildData")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::ConnectElements*), "InsertVertices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{face, edges, vertices, data});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::ConnectElements::ConnectIndexesPerFace
// Il2CppName: ConnectIndexesPerFace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>* (*)(::UnityEngine::ProBuilder::Face*, int, int, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*, ::System::Collections::Generic::Dictionary_2<int, int>*)>(&UnityEngine::ProBuilder::MeshOperations::ConnectElements::ConnectIndexesPerFace)> {
  static const MethodInfo* get() {
    static auto* face = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face")->byval_arg;
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* vertices = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Vertex")})->byval_arg;
    static auto* lookup = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32"), ::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::ConnectElements*), "ConnectIndexesPerFace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{face, a, b, vertices, lookup});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::ConnectElements::ConnectIndexesPerFace
// Il2CppName: ConnectIndexesPerFace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>* (*)(::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::List_1<int>*, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*, ::System::Collections::Generic::Dictionary_2<int, int>*, int)>(&UnityEngine::ProBuilder::MeshOperations::ConnectElements::ConnectIndexesPerFace)> {
  static const MethodInfo* get() {
    static auto* face = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face")->byval_arg;
    static auto* indexes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    static auto* vertices = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Vertex")})->byval_arg;
    static auto* lookup = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32"), ::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    static auto* sharedIndexOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::ConnectElements*), "ConnectIndexesPerFace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{face, indexes, vertices, lookup, sharedIndexOffset});
  }
};
