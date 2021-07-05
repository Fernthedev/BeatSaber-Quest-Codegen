// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder::MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
}
// Forward declaring namespace: UnityEngine::ProBuilder::Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Forward declaring type: TriangulationContext
  class TriangulationContext;
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
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: Vertex
  class Vertex;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.Triangulation
  class Triangulation : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::ProBuilder::MeshOperations::Triangulation::$$c__DisplayClass7_0
    class $$c__DisplayClass7_0;
    // Nested type: UnityEngine::ProBuilder::MeshOperations::Triangulation::$$c__DisplayClass8_0
    class $$c__DisplayClass8_0;
    // Creating value type constructor for type: Triangulation
    Triangulation() noexcept {}
    // Get static field: static private UnityEngine.ProBuilder.Poly2Tri.TriangulationContext s_TriangulationContext
    static UnityEngine::ProBuilder::Poly2Tri::TriangulationContext* _get_s_TriangulationContext();
    // Set static field: static private UnityEngine.ProBuilder.Poly2Tri.TriangulationContext s_TriangulationContext
    static void _set_s_TriangulationContext(UnityEngine::ProBuilder::Poly2Tri::TriangulationContext* value);
    // static private UnityEngine.ProBuilder.Poly2Tri.TriangulationContext get_triangulationContext()
    // Offset: 0x170F408
    static UnityEngine::ProBuilder::Poly2Tri::TriangulationContext* get_triangulationContext();
    // static public System.Boolean SortAndTriangulate(System.Collections.Generic.IList`1<UnityEngine.Vector2> points, out System.Collections.Generic.List`1<System.Int32> indexes, System.Boolean convex)
    // Offset: 0x170F490
    static bool SortAndTriangulate(System::Collections::Generic::IList_1<UnityEngine::Vector2>* points, System::Collections::Generic::List_1<int>*& indexes, bool convex);
    // static public System.Boolean TriangulateVertices(System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Vertex> vertices, out System.Collections.Generic.List`1<System.Int32> triangles, System.Boolean unordered, System.Boolean convex)
    // Offset: 0x1710104
    static bool TriangulateVertices(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Vertex*>* vertices, System::Collections::Generic::List_1<int>*& triangles, bool unordered, bool convex);
    // static public System.Boolean TriangulateVertices(UnityEngine.Vector3[] vertices, out System.Collections.Generic.List`1<System.Int32> triangles, UnityEngine.Vector3[][] holes)
    // Offset: 0x1710458
    static bool TriangulateVertices(::Array<UnityEngine::Vector3>* vertices, System::Collections::Generic::List_1<int>*& triangles, ::Array<::Array<UnityEngine::Vector3>*>* holes);
    // static public System.Boolean TriangulateVertices(UnityEngine.Vector3[] vertices, out System.Collections.Generic.List`1<System.Int32> triangles, System.Boolean unordered, System.Boolean convex)
    // Offset: 0x1710328
    static bool TriangulateVertices(::Array<UnityEngine::Vector3>* vertices, System::Collections::Generic::List_1<int>*& triangles, bool unordered, bool convex);
    // static public System.Boolean Triangulate(System.Collections.Generic.IList`1<UnityEngine.Vector2> points, out System.Collections.Generic.List`1<System.Int32> indexes, System.Boolean convex)
    // Offset: 0x170F75C
    static bool Triangulate(System::Collections::Generic::IList_1<UnityEngine::Vector2>* points, System::Collections::Generic::List_1<int>*& indexes, bool convex);
    // static public System.Boolean Triangulate(System.Collections.Generic.IList`1<UnityEngine.Vector2> points, System.Collections.Generic.IList`1<System.Collections.Generic.IList`1<UnityEngine.Vector2>> holes, out System.Collections.Generic.List`1<System.Int32> indexes)
    // Offset: 0x1710614
    static bool Triangulate(System::Collections::Generic::IList_1<UnityEngine::Vector2>* points, System::Collections::Generic::IList_1<System::Collections::Generic::IList_1<UnityEngine::Vector2>*>* holes, System::Collections::Generic::List_1<int>*& indexes);
  }; // UnityEngine.ProBuilder.MeshOperations.Triangulation
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::Triangulation*, "UnityEngine.ProBuilder.MeshOperations", "Triangulation");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::Triangulation::get_triangulationContext
// Il2CppName: get_triangulationContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::Poly2Tri::TriangulationContext* (*)()>(&UnityEngine::ProBuilder::MeshOperations::Triangulation::get_triangulationContext)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::Triangulation*), "get_triangulationContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::Triangulation::SortAndTriangulate
// Il2CppName: SortAndTriangulate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Collections::Generic::IList_1<UnityEngine::Vector2>*, System::Collections::Generic::List_1<int>*&, bool)>(&UnityEngine::ProBuilder::MeshOperations::Triangulation::SortAndTriangulate)> {
  const MethodInfo* get() {
    static auto* points = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")})->byval_arg;
    static auto* indexes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->this_arg;
    static auto* convex = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::Triangulation*), "SortAndTriangulate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{points, indexes, convex});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::Triangulation::TriangulateVertices
// Il2CppName: TriangulateVertices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Vertex*>*, System::Collections::Generic::List_1<int>*&, bool, bool)>(&UnityEngine::ProBuilder::MeshOperations::Triangulation::TriangulateVertices)> {
  const MethodInfo* get() {
    static auto* vertices = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Vertex")})->byval_arg;
    static auto* triangles = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->this_arg;
    static auto* unordered = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* convex = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::Triangulation*), "TriangulateVertices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vertices, triangles, unordered, convex});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::Triangulation::TriangulateVertices
// Il2CppName: TriangulateVertices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Array<UnityEngine::Vector3>*, System::Collections::Generic::List_1<int>*&, ::Array<::Array<UnityEngine::Vector3>*>*)>(&UnityEngine::ProBuilder::MeshOperations::Triangulation::TriangulateVertices)> {
  const MethodInfo* get() {
    static auto* vertices = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    static auto* triangles = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->this_arg;
    static auto* holes = &il2cpp_functions::array_class_get(il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::Triangulation*), "TriangulateVertices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vertices, triangles, holes});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::Triangulation::TriangulateVertices
// Il2CppName: TriangulateVertices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Array<UnityEngine::Vector3>*, System::Collections::Generic::List_1<int>*&, bool, bool)>(&UnityEngine::ProBuilder::MeshOperations::Triangulation::TriangulateVertices)> {
  const MethodInfo* get() {
    static auto* vertices = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    static auto* triangles = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->this_arg;
    static auto* unordered = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* convex = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::Triangulation*), "TriangulateVertices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vertices, triangles, unordered, convex});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::Triangulation::Triangulate
// Il2CppName: Triangulate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Collections::Generic::IList_1<UnityEngine::Vector2>*, System::Collections::Generic::List_1<int>*&, bool)>(&UnityEngine::ProBuilder::MeshOperations::Triangulation::Triangulate)> {
  const MethodInfo* get() {
    static auto* points = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")})->byval_arg;
    static auto* indexes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->this_arg;
    static auto* convex = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::Triangulation*), "Triangulate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{points, indexes, convex});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::Triangulation::Triangulate
// Il2CppName: Triangulate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Collections::Generic::IList_1<UnityEngine::Vector2>*, System::Collections::Generic::IList_1<System::Collections::Generic::IList_1<UnityEngine::Vector2>*>*, System::Collections::Generic::List_1<int>*&)>(&UnityEngine::ProBuilder::MeshOperations::Triangulation::Triangulate)> {
  const MethodInfo* get() {
    static auto* points = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")})->byval_arg;
    static auto* holes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")})})->byval_arg;
    static auto* indexes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::Triangulation*), "Triangulate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{points, holes, indexes});
  }
};
