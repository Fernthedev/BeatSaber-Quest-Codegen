// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
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
  // Forward declaring type: DelaunayTriangle
  class DelaunayTriangle;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode
  // [TokenAttribute] Offset: FFFFFFFF
  class AdvancingFrontNode : public ::Il2CppObject {
    public:
    // public UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode Next
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* Next;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*) == 0x8);
    // public UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode Prev
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* Prev;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*) == 0x8);
    // public System.Double Value
    // Size: 0x8
    // Offset: 0x20
    double Value;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint Point
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* Point;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*) == 0x8);
    // public UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle Triangle
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* Triangle;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*) == 0x8);
    // Creating value type constructor for type: AdvancingFrontNode
    AdvancingFrontNode(UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* Next_ = {}, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* Prev_ = {}, double Value_ = {}, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* Point_ = {}, UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* Triangle_ = {}) noexcept : Next{Next_}, Prev{Prev_}, Value{Value_}, Point{Point_}, Triangle{Triangle_} {}
    // Get instance field reference: public UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode Next
    UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*& dyn_Next();
    // Get instance field reference: public UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode Prev
    UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*& dyn_Prev();
    // Get instance field reference: public System.Double Value
    double& dyn_Value();
    // Get instance field reference: public UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint Point
    UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*& dyn_Point();
    // Get instance field reference: public UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle Triangle
    UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*& dyn_Triangle();
    // public System.Boolean get_HasNext()
    // Offset: 0x23C473C
    bool get_HasNext();
    // public System.Boolean get_HasPrev()
    // Offset: 0x23C474C
    bool get_HasPrev();
    // public System.Void .ctor(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint point)
    // Offset: 0x23C4700
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AdvancingFrontNode* New_ctor(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AdvancingFrontNode*, creationType>(point)));
    }
  }; // UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode
  #pragma pack(pop)
  static check_size<sizeof(AdvancingFrontNode), 48 + sizeof(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*)> __UnityEngine_ProBuilder_Poly2Tri_AdvancingFrontNodeSizeCheck;
  static_assert(sizeof(AdvancingFrontNode) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*, "UnityEngine.ProBuilder.Poly2Tri", "AdvancingFrontNode");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::get_HasNext
// Il2CppName: get_HasNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::*)()>(&UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::get_HasNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*), "get_HasNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::get_HasPrev
// Il2CppName: get_HasPrev
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::*)()>(&UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::get_HasPrev)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*), "get_HasPrev", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
