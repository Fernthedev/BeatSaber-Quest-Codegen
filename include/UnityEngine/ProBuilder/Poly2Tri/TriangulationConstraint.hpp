// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
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
  // Forward declaring type: TriangulationConstraint
  class TriangulationConstraint;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint*, "UnityEngine.ProBuilder.Poly2Tri", "TriangulationConstraint");
// Type namespace: UnityEngine.ProBuilder.Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.Poly2Tri.TriangulationConstraint
  // [TokenAttribute] Offset: FFFFFFFF
  class TriangulationConstraint : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint P
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* P;
    // Field size check
    static_assert(sizeof(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*) == 0x8);
    // public UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint Q
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* Q;
    // Field size check
    static_assert(sizeof(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint P
    [[deprecated("Use field access instead!")]] ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*& dyn_P();
    // Get instance field reference: public UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint Q
    [[deprecated("Use field access instead!")]] ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*& dyn_Q();
    // public System.Void .ctor()
    // Offset: 0x2ABD9B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TriangulationConstraint* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TriangulationConstraint*, creationType>()));
    }
  }; // UnityEngine.ProBuilder.Poly2Tri.TriangulationConstraint
  #pragma pack(pop)
  static check_size<sizeof(TriangulationConstraint), 24 + sizeof(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)> __UnityEngine_ProBuilder_Poly2Tri_TriangulationConstraintSizeCheck;
  static_assert(sizeof(TriangulationConstraint) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
