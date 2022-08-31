// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.ProBuilder.Edge
#include "UnityEngine/ProBuilder/Edge.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
  // Forward declaring type: Face
  class Face;
  // Forward declaring type: Vertex
  class Vertex;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: VertexPositioning
  class VertexPositioning;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ProBuilder::VertexPositioning);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::VertexPositioning*, "UnityEngine.ProBuilder", "VertexPositioning");
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.VertexPositioning
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class VertexPositioning : public ::Il2CppObject {
    public:
    // Get static field: static private System.Collections.Generic.List`1<System.Int32> s_CoincidentVertices
    static ::System::Collections::Generic::List_1<int>* _get_s_CoincidentVertices();
    // Set static field: static private System.Collections.Generic.List`1<System.Int32> s_CoincidentVertices
    static void _set_s_CoincidentVertices(::System::Collections::Generic::List_1<int>* value);
    // static private System.Void .cctor()
    // Offset: 0x29A589C
    static void _cctor();
    // static public UnityEngine.Vector3[] VerticesInWorldSpace(UnityEngine.ProBuilder.ProBuilderMesh mesh)
    // Offset: 0x29A4538
    static ::ArrayW<::UnityEngine::Vector3> VerticesInWorldSpace(::UnityEngine::ProBuilder::ProBuilderMesh* mesh);
    // static public System.Void TranslateVerticesInWorldSpace(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Int32[] indexes, UnityEngine.Vector3 offset)
    // Offset: 0x29A46B8
    static void TranslateVerticesInWorldSpace(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::ArrayW<int> indexes, ::UnityEngine::Vector3 offset);
    // static System.Void TranslateVerticesInWorldSpace(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Int32[] indexes, UnityEngine.Vector3 offset, System.Single snapValue, System.Boolean snapAxisOnly)
    // Offset: 0x29A47CC
    static void TranslateVerticesInWorldSpace(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::ArrayW<int> indexes, ::UnityEngine::Vector3 offset, float snapValue, bool snapAxisOnly);
    // static public System.Void TranslateVertices(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<System.Int32> indexes, UnityEngine.Vector3 offset)
    // Offset: 0x29A4DB4
    static void TranslateVertices(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<int>* indexes, ::UnityEngine::Vector3 offset);
    // static public System.Void TranslateVertices(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Edge> edges, UnityEngine.Vector3 offset)
    // Offset: 0x29A50A8
    static void TranslateVertices(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges, ::UnityEngine::Vector3 offset);
    // static public System.Void TranslateVertices(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Face> faces, UnityEngine.Vector3 offset)
    // Offset: 0x29A51D4
    static void TranslateVertices(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces, ::UnityEngine::Vector3 offset);
    // static private System.Void TranslateVerticesInternal(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<System.Int32> indices, UnityEngine.Vector3 offset)
    // Offset: 0x29A4EE0
    static void TranslateVerticesInternal(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<int>* indices, ::UnityEngine::Vector3 offset);
    // static public System.Void SetSharedVertexPosition(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Int32 sharedVertexHandle, UnityEngine.Vector3 position)
    // Offset: 0x29A5300
    static void SetSharedVertexPosition(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, int sharedVertexHandle, ::UnityEngine::Vector3 position);
    // static System.Void SetSharedVertexValues(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Int32 sharedVertexHandle, UnityEngine.ProBuilder.Vertex vertex)
    // Offset: 0x29A55FC
    static void SetSharedVertexValues(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, int sharedVertexHandle, ::UnityEngine::ProBuilder::Vertex* vertex);
  }; // UnityEngine.ProBuilder.VertexPositioning
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::VertexPositioning::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::ProBuilder::VertexPositioning::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::VertexPositioning*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::VertexPositioning::VerticesInWorldSpace
// Il2CppName: VerticesInWorldSpace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Vector3> (*)(::UnityEngine::ProBuilder::ProBuilderMesh*)>(&UnityEngine::ProBuilder::VertexPositioning::VerticesInWorldSpace)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::VertexPositioning*), "VerticesInWorldSpace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::VertexPositioning::TranslateVerticesInWorldSpace
// Il2CppName: TranslateVerticesInWorldSpace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::ArrayW<int>, ::UnityEngine::Vector3)>(&UnityEngine::ProBuilder::VertexPositioning::TranslateVerticesInWorldSpace)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* indexes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::VertexPositioning*), "TranslateVerticesInWorldSpace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, indexes, offset});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::VertexPositioning::TranslateVerticesInWorldSpace
// Il2CppName: TranslateVerticesInWorldSpace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::ArrayW<int>, ::UnityEngine::Vector3, float, bool)>(&UnityEngine::ProBuilder::VertexPositioning::TranslateVerticesInWorldSpace)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* indexes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* snapValue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* snapAxisOnly = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::VertexPositioning*), "TranslateVerticesInWorldSpace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, indexes, offset, snapValue, snapAxisOnly});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::VertexPositioning::TranslateVertices
// Il2CppName: TranslateVertices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<int>*, ::UnityEngine::Vector3)>(&UnityEngine::ProBuilder::VertexPositioning::TranslateVertices)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* indexes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::VertexPositioning*), "TranslateVertices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, indexes, offset});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::VertexPositioning::TranslateVertices
// Il2CppName: TranslateVertices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*, ::UnityEngine::Vector3)>(&UnityEngine::ProBuilder::VertexPositioning::TranslateVertices)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* edges = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Edge")})->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::VertexPositioning*), "TranslateVertices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, edges, offset});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::VertexPositioning::TranslateVertices
// Il2CppName: TranslateVertices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*, ::UnityEngine::Vector3)>(&UnityEngine::ProBuilder::VertexPositioning::TranslateVertices)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* faces = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face")})->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::VertexPositioning*), "TranslateVertices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, faces, offset});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::VertexPositioning::TranslateVerticesInternal
// Il2CppName: TranslateVerticesInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<int>*, ::UnityEngine::Vector3)>(&UnityEngine::ProBuilder::VertexPositioning::TranslateVerticesInternal)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* indices = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::VertexPositioning*), "TranslateVerticesInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, indices, offset});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::VertexPositioning::SetSharedVertexPosition
// Il2CppName: SetSharedVertexPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, int, ::UnityEngine::Vector3)>(&UnityEngine::ProBuilder::VertexPositioning::SetSharedVertexPosition)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* sharedVertexHandle = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::VertexPositioning*), "SetSharedVertexPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, sharedVertexHandle, position});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::VertexPositioning::SetSharedVertexValues
// Il2CppName: SetSharedVertexValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, int, ::UnityEngine::ProBuilder::Vertex*)>(&UnityEngine::ProBuilder::VertexPositioning::SetSharedVertexValues)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* sharedVertexHandle = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* vertex = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Vertex")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::VertexPositioning*), "SetSharedVertexValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, sharedVertexHandle, vertex});
  }
};
