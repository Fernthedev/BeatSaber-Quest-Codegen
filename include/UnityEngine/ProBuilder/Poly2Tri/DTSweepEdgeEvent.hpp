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
  // Forward declaring type: DTSweepConstraint
  class DTSweepConstraint;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.Poly2Tri.DTSweepEdgeEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class DTSweepEdgeEvent : public ::Il2CppObject {
    public:
    // public UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint ConstrainedEdge
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* ConstrainedEdge;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*) == 0x8);
    // public System.Boolean Right
    // Size: 0x1
    // Offset: 0x18
    bool Right;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: DTSweepEdgeEvent
    DTSweepEdgeEvent(UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* ConstrainedEdge_ = {}, bool Right_ = {}) noexcept : ConstrainedEdge{ConstrainedEdge_}, Right{Right_} {}
    // Get instance field reference: public UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint ConstrainedEdge
    UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*& dyn_ConstrainedEdge();
    // Get instance field reference: public System.Boolean Right
    bool& dyn_Right();
    // public System.Void .ctor()
    // Offset: 0x23C8C68
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DTSweepEdgeEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DTSweepEdgeEvent*, creationType>()));
    }
  }; // UnityEngine.ProBuilder.Poly2Tri.DTSweepEdgeEvent
  #pragma pack(pop)
  static check_size<sizeof(DTSweepEdgeEvent), 24 + sizeof(bool)> __UnityEngine_ProBuilder_Poly2Tri_DTSweepEdgeEventSizeCheck;
  static_assert(sizeof(DTSweepEdgeEvent) == 0x19);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent*, "UnityEngine.ProBuilder.Poly2Tri", "DTSweepEdgeEvent");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
