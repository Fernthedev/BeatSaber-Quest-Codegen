// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1
#include "UnityEngine/ProBuilder/Poly2Tri/FixedArray3_1.hpp"
// Including type: UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3
#include "UnityEngine/ProBuilder/Poly2Tri/FixedBitArray3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder::Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Forward declaring type: TriangulationPoint
  class TriangulationPoint;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle
  class DelaunayTriangle : public ::Il2CppObject {
    public:
    // public UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint> Points
    // Size: 0xFFFFFFFF
    // Offset: 0x10
    UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*> Points;
    // public UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle> Neighbors
    // Size: 0xFFFFFFFF
    // Offset: 0x28
    UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*> Neighbors;
    // public UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3 EdgeIsConstrained
    // Size: 0x3
    // Offset: 0x40
    UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3 EdgeIsConstrained;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3) == 0x3);
    // public UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3 EdgeIsDelaunay
    // Size: 0x3
    // Offset: 0x43
    UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3 EdgeIsDelaunay;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3) == 0x3);
    // [CompilerGeneratedAttribute] Offset: 0xE039EC
    // private System.Boolean <IsInterior>k__BackingField
    // Size: 0x1
    // Offset: 0x46
    bool IsInterior;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: DelaunayTriangle
    DelaunayTriangle(UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*> Points_ = {}, UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*> Neighbors_ = {}, UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3 EdgeIsConstrained_ = {}, UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3 EdgeIsDelaunay_ = {}, bool IsInterior_ = {}) noexcept : Points{Points_}, Neighbors{Neighbors_}, EdgeIsConstrained{EdgeIsConstrained_}, EdgeIsDelaunay{EdgeIsDelaunay_}, IsInterior{IsInterior_} {}
    // public System.Boolean get_IsInterior()
    // Offset: 0x239DB20
    bool get_IsInterior();
    // public System.Void set_IsInterior(System.Boolean value)
    // Offset: 0x239DB28
    void set_IsInterior(bool value);
    // public System.Void .ctor(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p1, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p2, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p3)
    // Offset: 0x239AAD8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DelaunayTriangle* New_ctor(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p1, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p2, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p3) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DelaunayTriangle*, creationType>(p1, p2, p3)));
    }
    // public System.Int32 IndexOf(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p)
    // Offset: 0x239CD44
    int IndexOf(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);
    // public System.Int32 IndexCCWFrom(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p)
    // Offset: 0x239DB34
    int IndexCCWFrom(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);
    // public System.Boolean Contains(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p)
    // Offset: 0x2399B20
    bool Contains(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);
    // private System.Void MarkNeighbor(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p1, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p2, UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle t)
    // Offset: 0x239DB6C
    void MarkNeighbor(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p1, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p2, UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t);
    // public System.Void MarkNeighbor(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle t)
    // Offset: 0x239AB84
    void MarkNeighbor(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t);
    // public UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint OppositePoint(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle t, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p)
    // Offset: 0x2399BFC
    UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* OppositePoint(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);
    // public UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle NeighborCWFrom(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint point)
    // Offset: 0x239A3F4
    UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* NeighborCWFrom(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point);
    // public UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle NeighborCCWFrom(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint point)
    // Offset: 0x239A2C8
    UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* NeighborCCWFrom(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point);
    // public UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle NeighborAcrossFrom(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint point)
    // Offset: 0x2399B80
    UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* NeighborAcrossFrom(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point);
    // public UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint PointCCWFrom(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint point)
    // Offset: 0x239A238
    UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* PointCCWFrom(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point);
    // public UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint PointCWFrom(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint point)
    // Offset: 0x239A364
    UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* PointCWFrom(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point);
    // private System.Void RotateCW()
    // Offset: 0x239DC34
    void RotateCW();
    // public System.Void Legalize(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint oPoint, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint nPoint)
    // Offset: 0x239CF8C
    void Legalize(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* oPoint, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* nPoint);
    // public System.Void MarkConstrainedEdge(System.Int32 index)
    // Offset: 0x239BD94
    void MarkConstrainedEdge(int index);
    // public System.Void MarkConstrainedEdge(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint q)
    // Offset: 0x239BDA0
    void MarkConstrainedEdge(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* q);
    // public System.Int32 EdgeIndex(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p1, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p2)
    // Offset: 0x239BCA4
    int EdgeIndex(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p1, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p2);
    // public System.Boolean GetConstrainedEdgeCCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p)
    // Offset: 0x239CEB4
    bool GetConstrainedEdgeCCW(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);
    // public System.Boolean GetConstrainedEdgeCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p)
    // Offset: 0x239A7FC
    bool GetConstrainedEdgeCW(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);
    // public System.Void SetConstrainedEdgeCCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p, System.Boolean ce)
    // Offset: 0x239D0CC
    void SetConstrainedEdgeCCW(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p, bool ce);
    // public System.Void SetConstrainedEdgeCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p, System.Boolean ce)
    // Offset: 0x239D11C
    void SetConstrainedEdgeCW(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p, bool ce);
    // public System.Boolean GetDelaunayEdgeCCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p)
    // Offset: 0x239CEFC
    bool GetDelaunayEdgeCCW(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);
    // public System.Boolean GetDelaunayEdgeCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p)
    // Offset: 0x239CF44
    bool GetDelaunayEdgeCW(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);
    // public System.Void SetDelaunayEdgeCCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p, System.Boolean ce)
    // Offset: 0x239D02C
    void SetDelaunayEdgeCCW(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p, bool ce);
    // public System.Void SetDelaunayEdgeCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p, System.Boolean ce)
    // Offset: 0x239D07C
    void SetDelaunayEdgeCW(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p, bool ce);
    // public override System.String ToString()
    // Offset: 0x239DCFC
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*, "UnityEngine.ProBuilder.Poly2Tri", "DelaunayTriangle");
// Writing includes for template specializations
#include "UnityEngine/ProBuilder/Poly2Tri/TriangulationPoint.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::get_IsInterior
// Il2CppName: get_IsInterior
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)()>(&UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::get_IsInterior)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*), "get_IsInterior", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::set_IsInterior
// Il2CppName: set_IsInterior
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(bool)>(&UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::set_IsInterior)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*), "set_IsInterior", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::IndexOf
// Il2CppName: IndexOf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::IndexOf)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*), "IndexOf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::IndexCCWFrom
// Il2CppName: IndexCCWFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::IndexCCWFrom)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*), "IndexCCWFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::Contains)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::MarkNeighbor
// Il2CppName: MarkNeighbor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*)>(&UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::MarkNeighbor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*), "MarkNeighbor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::MarkNeighbor
// Il2CppName: MarkNeighbor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*)>(&UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::MarkNeighbor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*), "MarkNeighbor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::OppositePoint
// Il2CppName: OppositePoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* (UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::OppositePoint)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*), "OppositePoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::NeighborCWFrom
// Il2CppName: NeighborCWFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* (UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::NeighborCWFrom)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*), "NeighborCWFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::NeighborCCWFrom
// Il2CppName: NeighborCCWFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* (UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::NeighborCCWFrom)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*), "NeighborCCWFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::NeighborAcrossFrom
// Il2CppName: NeighborAcrossFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* (UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::NeighborAcrossFrom)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*), "NeighborAcrossFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::PointCCWFrom
// Il2CppName: PointCCWFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* (UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::PointCCWFrom)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*), "PointCCWFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::PointCWFrom
// Il2CppName: PointCWFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* (UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::PointCWFrom)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*), "PointCWFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::RotateCW
// Il2CppName: RotateCW
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)()>(&UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::RotateCW)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*), "RotateCW", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::Legalize
// Il2CppName: Legalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::Legalize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*), "Legalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::MarkConstrainedEdge
// Il2CppName: MarkConstrainedEdge
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(int)>(&UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::MarkConstrainedEdge)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*), "MarkConstrainedEdge", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::MarkConstrainedEdge
// Il2CppName: MarkConstrainedEdge
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::MarkConstrainedEdge)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*), "MarkConstrainedEdge", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::EdgeIndex
// Il2CppName: EdgeIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::EdgeIndex)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*), "EdgeIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::GetConstrainedEdgeCCW
// Il2CppName: GetConstrainedEdgeCCW
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::GetConstrainedEdgeCCW)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*), "GetConstrainedEdgeCCW", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::GetConstrainedEdgeCW
// Il2CppName: GetConstrainedEdgeCW
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::GetConstrainedEdgeCW)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*), "GetConstrainedEdgeCW", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::SetConstrainedEdgeCCW
// Il2CppName: SetConstrainedEdgeCCW
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, bool)>(&UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::SetConstrainedEdgeCCW)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*), "SetConstrainedEdgeCCW", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::SetConstrainedEdgeCW
// Il2CppName: SetConstrainedEdgeCW
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, bool)>(&UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::SetConstrainedEdgeCW)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*), "SetConstrainedEdgeCW", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::GetDelaunayEdgeCCW
// Il2CppName: GetDelaunayEdgeCCW
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::GetDelaunayEdgeCCW)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*), "GetDelaunayEdgeCCW", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::GetDelaunayEdgeCW
// Il2CppName: GetDelaunayEdgeCW
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::GetDelaunayEdgeCW)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*), "GetDelaunayEdgeCW", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::SetDelaunayEdgeCCW
// Il2CppName: SetDelaunayEdgeCCW
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, bool)>(&UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::SetDelaunayEdgeCCW)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*), "SetDelaunayEdgeCCW", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::SetDelaunayEdgeCW
// Il2CppName: SetDelaunayEdgeCW
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, bool)>(&UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::SetDelaunayEdgeCW)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*), "SetDelaunayEdgeCW", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)()>(&UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::ToString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
