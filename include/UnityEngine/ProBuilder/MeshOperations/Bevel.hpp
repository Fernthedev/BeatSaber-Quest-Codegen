// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ProBuilder.Edge
#include "UnityEngine/ProBuilder/Edge.hpp"
// Including type: UnityEngine.ProBuilder.SimpleTuple`2
#include "UnityEngine/ProBuilder/SimpleTuple_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
  // Forward declaring type: Bevel
  class Bevel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::Bevel);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::Bevel*, "UnityEngine.ProBuilder.MeshOperations", "Bevel");
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.Bevel
  // [TokenAttribute] Offset: FFFFFFFF
  class Bevel : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::ProBuilder::MeshOperations::Bevel::$$c__DisplayClass0_0
    class $$c__DisplayClass0_0;
    // Nested type: ::UnityEngine::ProBuilder::MeshOperations::Bevel::$$c__DisplayClass0_1
    class $$c__DisplayClass0_1;
    // Nested type: ::UnityEngine::ProBuilder::MeshOperations::Bevel::$$c__DisplayClass0_2
    class $$c__DisplayClass0_2;
    // Nested type: ::UnityEngine::ProBuilder::MeshOperations::Bevel::$$c
    class $$c;
    // Get static field: static private readonly System.Int32[] k_BridgeIndexesTri
    static ::ArrayW<int> _get_k_BridgeIndexesTri();
    // Set static field: static private readonly System.Int32[] k_BridgeIndexesTri
    static void _set_k_BridgeIndexesTri(::ArrayW<int> value);
    // static private System.Void .cctor()
    // Offset: 0x1A2B4E0
    static void _cctor();
    // static public System.Collections.Generic.List`1<UnityEngine.ProBuilder.Face> BevelEdges(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Edge> edges, System.Single amount)
    // Offset: 0x1A28720
    static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* BevelEdges(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Edge>* edges, float amount);
    // static private System.Collections.Generic.List`1<UnityEngine.ProBuilder.FaceRebuildData> GetBridgeFaces(System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Vertex> vertices, UnityEngine.ProBuilder.WingedEdge left, UnityEngine.ProBuilder.WingedEdge right, System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnityEngine.ProBuilder.SimpleTuple`2<UnityEngine.ProBuilder.FaceRebuildData,System.Collections.Generic.List`1<System.Int32>>>> holes)
    // Offset: 0x1A2AD70
    static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::FaceRebuildData*>* GetBridgeFaces(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* vertices, ::UnityEngine::ProBuilder::WingedEdge* left, ::UnityEngine::ProBuilder::WingedEdge* right, ::System::Collections::Generic::Dictionary_2<int, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::System::Collections::Generic::List_1<int>*>>*>* holes);
    // static private System.Void SlideEdge(System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Vertex> vertices, UnityEngine.ProBuilder.WingedEdge we, System.Single amount)
    // Offset: 0x1A2A960
    static void SlideEdge(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* vertices, ::UnityEngine::ProBuilder::WingedEdge* we, float amount);
    // static private UnityEngine.ProBuilder.Edge GetLeadingEdge(UnityEngine.ProBuilder.WingedEdge wing, System.Int32 common)
    // Offset: 0x1A2B3E8
    static ::UnityEngine::ProBuilder::Edge GetLeadingEdge(::UnityEngine::ProBuilder::WingedEdge* wing, int common);
  }; // UnityEngine.ProBuilder.MeshOperations.Bevel
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::Bevel::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::ProBuilder::MeshOperations::Bevel::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::Bevel*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::Bevel::BevelEdges
// Il2CppName: BevelEdges
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Edge>*, float)>(&UnityEngine::ProBuilder::MeshOperations::Bevel::BevelEdges)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* edges = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Edge")})->byval_arg;
    static auto* amount = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::Bevel*), "BevelEdges", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, edges, amount});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::Bevel::GetBridgeFaces
// Il2CppName: GetBridgeFaces
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::FaceRebuildData*>* (*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*, ::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::WingedEdge*, ::System::Collections::Generic::Dictionary_2<int, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::System::Collections::Generic::List_1<int>*>>*>*)>(&UnityEngine::ProBuilder::MeshOperations::Bevel::GetBridgeFaces)> {
  static const MethodInfo* get() {
    static auto* vertices = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Vertex")})->byval_arg;
    static auto* left = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "WingedEdge")->byval_arg;
    static auto* right = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "WingedEdge")->byval_arg;
    static auto* holes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32"), ::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "SimpleTuple`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "FaceRebuildData"), ::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})})})})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::Bevel*), "GetBridgeFaces", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vertices, left, right, holes});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::Bevel::SlideEdge
// Il2CppName: SlideEdge
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*, ::UnityEngine::ProBuilder::WingedEdge*, float)>(&UnityEngine::ProBuilder::MeshOperations::Bevel::SlideEdge)> {
  static const MethodInfo* get() {
    static auto* vertices = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Vertex")})->byval_arg;
    static auto* we = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "WingedEdge")->byval_arg;
    static auto* amount = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::Bevel*), "SlideEdge", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vertices, we, amount});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::Bevel::GetLeadingEdge
// Il2CppName: GetLeadingEdge
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::Edge (*)(::UnityEngine::ProBuilder::WingedEdge*, int)>(&UnityEngine::ProBuilder::MeshOperations::Bevel::GetLeadingEdge)> {
  static const MethodInfo* get() {
    static auto* wing = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "WingedEdge")->byval_arg;
    static auto* common = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::Bevel*), "GetLeadingEdge", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{wing, common});
  }
};
