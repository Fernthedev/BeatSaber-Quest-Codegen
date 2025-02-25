// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ProBuilder.Poly2Tri.TriangulationContext
#include "UnityEngine/ProBuilder/Poly2Tri/TriangulationContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder::Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Forward declaring type: AdvancingFront
  class AdvancingFront;
  // Forward declaring type: TriangulationPoint
  class TriangulationPoint;
  // Forward declaring type: DTSweepBasin
  class DTSweepBasin;
  // Forward declaring type: DTSweepEdgeEvent
  class DTSweepEdgeEvent;
  // Forward declaring type: DTSweepPointComparator
  class DTSweepPointComparator;
  // Forward declaring type: DelaunayTriangle
  class DelaunayTriangle;
  // Forward declaring type: AdvancingFrontNode
  class AdvancingFrontNode;
  // Forward declaring type: Triangulatable
  class Triangulatable;
  // Forward declaring type: TriangulationConstraint
  class TriangulationConstraint;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.Poly2Tri.DTSweepContext
  // [TokenAttribute] Offset: FFFFFFFF
  class DTSweepContext : public UnityEngine::ProBuilder::Poly2Tri::TriangulationContext {
    public:
    // Writing base type padding for base size: 0x3D to desired offset: 0x40
    char ___base_padding[0x3] = {};
    // private readonly System.Single ALPHA
    // Size: 0x4
    // Offset: 0x40
    float ALPHA;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: ALPHA and: Front
    char __padding0[0x4] = {};
    // public UnityEngine.ProBuilder.Poly2Tri.AdvancingFront Front
    // Size: 0x8
    // Offset: 0x48
    UnityEngine::ProBuilder::Poly2Tri::AdvancingFront* Front;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::Poly2Tri::AdvancingFront*) == 0x8);
    // private UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint <Head>k__BackingField
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* Head;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*) == 0x8);
    // private UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint <Tail>k__BackingField
    // Size: 0x8
    // Offset: 0x58
    UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* Tail;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*) == 0x8);
    // public UnityEngine.ProBuilder.Poly2Tri.DTSweepBasin Basin
    // Size: 0x8
    // Offset: 0x60
    UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin* Basin;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin*) == 0x8);
    // public UnityEngine.ProBuilder.Poly2Tri.DTSweepEdgeEvent EdgeEvent
    // Size: 0x8
    // Offset: 0x68
    UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent* EdgeEvent;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent*) == 0x8);
    // private UnityEngine.ProBuilder.Poly2Tri.DTSweepPointComparator _comparator
    // Size: 0x8
    // Offset: 0x70
    UnityEngine::ProBuilder::Poly2Tri::DTSweepPointComparator* comparator;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::Poly2Tri::DTSweepPointComparator*) == 0x8);
    // Creating value type constructor for type: DTSweepContext
    DTSweepContext(float ALPHA_ = {}, UnityEngine::ProBuilder::Poly2Tri::AdvancingFront* Front_ = {}, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* Head_ = {}, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* Tail_ = {}, UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin* Basin_ = {}, UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent* EdgeEvent_ = {}, UnityEngine::ProBuilder::Poly2Tri::DTSweepPointComparator* comparator_ = {}) noexcept : ALPHA{ALPHA_}, Front{Front_}, Head{Head_}, Tail{Tail_}, Basin{Basin_}, EdgeEvent{EdgeEvent_}, comparator{comparator_} {}
    // Get instance field reference: private readonly System.Single ALPHA
    float& dyn_ALPHA();
    // Get instance field reference: public UnityEngine.ProBuilder.Poly2Tri.AdvancingFront Front
    UnityEngine::ProBuilder::Poly2Tri::AdvancingFront*& dyn_Front();
    // Get instance field reference: private UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint <Head>k__BackingField
    UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*& dyn_$Head$k__BackingField();
    // Get instance field reference: private UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint <Tail>k__BackingField
    UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*& dyn_$Tail$k__BackingField();
    // Get instance field reference: public UnityEngine.ProBuilder.Poly2Tri.DTSweepBasin Basin
    UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin*& dyn_Basin();
    // Get instance field reference: public UnityEngine.ProBuilder.Poly2Tri.DTSweepEdgeEvent EdgeEvent
    UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent*& dyn_EdgeEvent();
    // Get instance field reference: private UnityEngine.ProBuilder.Poly2Tri.DTSweepPointComparator _comparator
    UnityEngine::ProBuilder::Poly2Tri::DTSweepPointComparator*& dyn__comparator();
    // public UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint get_Head()
    // Offset: 0x23C8B88
    UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* get_Head();
    // public System.Void set_Head(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint value)
    // Offset: 0x23C8B90
    void set_Head(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* value);
    // public UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint get_Tail()
    // Offset: 0x23C8B98
    UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* get_Tail();
    // public System.Void set_Tail(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint value)
    // Offset: 0x23C8BA0
    void set_Tail(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* value);
    // public System.Void RemoveFromList(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle triangle)
    // Offset: 0x23C5AC8
    void RemoveFromList(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* triangle);
    // public System.Void MeshClean(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle triangle)
    // Offset: 0x23C613C
    void MeshClean(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* triangle);
    // private System.Void MeshCleanReq(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle triangle)
    // Offset: 0x23C8D18
    void MeshCleanReq(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* triangle);
    // public System.Void AddNode(UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode node)
    // Offset: 0x23C62B0
    void AddNode(UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);
    // public System.Void RemoveNode(UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode node)
    // Offset: 0x23C8584
    void RemoveNode(UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);
    // public UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode LocateNode(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint point)
    // Offset: 0x23C6140
    UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* LocateNode(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point);
    // public System.Void CreateAdvancingFront()
    // Offset: 0x23C47B4
    void CreateAdvancingFront();
    // public System.Void MapTriangleToNodes(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle t)
    // Offset: 0x23C59F0
    void MapTriangleToNodes(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t);
    // public System.Void FinalizeTriangulation()
    // Offset: 0x23C5D88
    void FinalizeTriangulation();
    // public override System.Boolean get_IsDebugEnabled()
    // Offset: 0x23C8D10
    // Implemented from: UnityEngine.ProBuilder.Poly2Tri.TriangulationContext
    // Base method: System.Boolean TriangulationContext::get_IsDebugEnabled()
    bool get_IsDebugEnabled();
    // public System.Void .ctor()
    // Offset: 0x23C8BA8
    // Implemented from: UnityEngine.ProBuilder.Poly2Tri.TriangulationContext
    // Base method: System.Void TriangulationContext::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DTSweepContext* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::Poly2Tri::DTSweepContext::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DTSweepContext*, creationType>()));
    }
    // public override System.Void Clear()
    // Offset: 0x23C8E48
    // Implemented from: UnityEngine.ProBuilder.Poly2Tri.TriangulationContext
    // Base method: System.Void TriangulationContext::Clear()
    void Clear();
    // public override System.Void PrepareTriangulation(UnityEngine.ProBuilder.Poly2Tri.Triangulatable t)
    // Offset: 0x23C8F1C
    // Implemented from: UnityEngine.ProBuilder.Poly2Tri.TriangulationContext
    // Base method: System.Void TriangulationContext::PrepareTriangulation(UnityEngine.ProBuilder.Poly2Tri.Triangulatable t)
    void PrepareTriangulation(UnityEngine::ProBuilder::Poly2Tri::Triangulatable* t);
    // public override UnityEngine.ProBuilder.Poly2Tri.TriangulationConstraint NewConstraint(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint a, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint b)
    // Offset: 0x23C92A8
    // Implemented from: UnityEngine.ProBuilder.Poly2Tri.TriangulationContext
    // Base method: UnityEngine.ProBuilder.Poly2Tri.TriangulationConstraint TriangulationContext::NewConstraint(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint a, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint b)
    UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint* NewConstraint(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* b);
  }; // UnityEngine.ProBuilder.Poly2Tri.DTSweepContext
  #pragma pack(pop)
  static check_size<sizeof(DTSweepContext), 112 + sizeof(UnityEngine::ProBuilder::Poly2Tri::DTSweepPointComparator*)> __UnityEngine_ProBuilder_Poly2Tri_DTSweepContextSizeCheck;
  static_assert(sizeof(DTSweepContext) == 0x78);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, "UnityEngine.ProBuilder.Poly2Tri", "DTSweepContext");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DTSweepContext::get_Head
// Il2CppName: get_Head
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* (UnityEngine::ProBuilder::Poly2Tri::DTSweepContext::*)()>(&UnityEngine::ProBuilder::Poly2Tri::DTSweepContext::get_Head)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*), "get_Head", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DTSweepContext::set_Head
// Il2CppName: set_Head
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::DTSweepContext::*)(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&UnityEngine::ProBuilder::Poly2Tri::DTSweepContext::set_Head)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "TriangulationPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*), "set_Head", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DTSweepContext::get_Tail
// Il2CppName: get_Tail
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* (UnityEngine::ProBuilder::Poly2Tri::DTSweepContext::*)()>(&UnityEngine::ProBuilder::Poly2Tri::DTSweepContext::get_Tail)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*), "get_Tail", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DTSweepContext::set_Tail
// Il2CppName: set_Tail
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::DTSweepContext::*)(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&UnityEngine::ProBuilder::Poly2Tri::DTSweepContext::set_Tail)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "TriangulationPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*), "set_Tail", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DTSweepContext::RemoveFromList
// Il2CppName: RemoveFromList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::DTSweepContext::*)(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*)>(&UnityEngine::ProBuilder::Poly2Tri::DTSweepContext::RemoveFromList)> {
  static const MethodInfo* get() {
    static auto* triangle = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "DelaunayTriangle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*), "RemoveFromList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{triangle});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DTSweepContext::MeshClean
// Il2CppName: MeshClean
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::DTSweepContext::*)(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*)>(&UnityEngine::ProBuilder::Poly2Tri::DTSweepContext::MeshClean)> {
  static const MethodInfo* get() {
    static auto* triangle = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "DelaunayTriangle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*), "MeshClean", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{triangle});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DTSweepContext::MeshCleanReq
// Il2CppName: MeshCleanReq
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::DTSweepContext::*)(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*)>(&UnityEngine::ProBuilder::Poly2Tri::DTSweepContext::MeshCleanReq)> {
  static const MethodInfo* get() {
    static auto* triangle = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "DelaunayTriangle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*), "MeshCleanReq", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{triangle});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DTSweepContext::AddNode
// Il2CppName: AddNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::DTSweepContext::*)(UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*)>(&UnityEngine::ProBuilder::Poly2Tri::DTSweepContext::AddNode)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "AdvancingFrontNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*), "AddNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DTSweepContext::RemoveNode
// Il2CppName: RemoveNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::DTSweepContext::*)(UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*)>(&UnityEngine::ProBuilder::Poly2Tri::DTSweepContext::RemoveNode)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "AdvancingFrontNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*), "RemoveNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DTSweepContext::LocateNode
// Il2CppName: LocateNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* (UnityEngine::ProBuilder::Poly2Tri::DTSweepContext::*)(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&UnityEngine::ProBuilder::Poly2Tri::DTSweepContext::LocateNode)> {
  static const MethodInfo* get() {
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "TriangulationPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*), "LocateNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{point});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DTSweepContext::CreateAdvancingFront
// Il2CppName: CreateAdvancingFront
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::DTSweepContext::*)()>(&UnityEngine::ProBuilder::Poly2Tri::DTSweepContext::CreateAdvancingFront)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*), "CreateAdvancingFront", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DTSweepContext::MapTriangleToNodes
// Il2CppName: MapTriangleToNodes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::DTSweepContext::*)(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*)>(&UnityEngine::ProBuilder::Poly2Tri::DTSweepContext::MapTriangleToNodes)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "DelaunayTriangle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*), "MapTriangleToNodes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DTSweepContext::FinalizeTriangulation
// Il2CppName: FinalizeTriangulation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::DTSweepContext::*)()>(&UnityEngine::ProBuilder::Poly2Tri::DTSweepContext::FinalizeTriangulation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*), "FinalizeTriangulation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DTSweepContext::get_IsDebugEnabled
// Il2CppName: get_IsDebugEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::Poly2Tri::DTSweepContext::*)()>(&UnityEngine::ProBuilder::Poly2Tri::DTSweepContext::get_IsDebugEnabled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*), "get_IsDebugEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DTSweepContext::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DTSweepContext::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::DTSweepContext::*)()>(&UnityEngine::ProBuilder::Poly2Tri::DTSweepContext::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DTSweepContext::PrepareTriangulation
// Il2CppName: PrepareTriangulation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::DTSweepContext::*)(UnityEngine::ProBuilder::Poly2Tri::Triangulatable*)>(&UnityEngine::ProBuilder::Poly2Tri::DTSweepContext::PrepareTriangulation)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "Triangulatable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*), "PrepareTriangulation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DTSweepContext::NewConstraint
// Il2CppName: NewConstraint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint* (UnityEngine::ProBuilder::Poly2Tri::DTSweepContext::*)(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&UnityEngine::ProBuilder::Poly2Tri::DTSweepContext::NewConstraint)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "TriangulationPoint")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "TriangulationPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*), "NewConstraint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
