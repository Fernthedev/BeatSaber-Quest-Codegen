// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKSolverLimb
  class IKSolverLimb;
  // Forward declaring type: IKSolverFABRIK
  class IKSolverFABRIK;
  // Forward declaring type: IKSolverLookAt
  class IKSolverLookAt;
  // Forward declaring type: IKSolverAim
  class IKSolverAim;
  // Forward declaring type: Constraints
  class Constraints;
  // Forward declaring type: IKSolver
  class IKSolver;
}
// Forward declaring namespace: RootMotion
namespace RootMotion {
  // Forward declaring type: BipedReferences
  class BipedReferences;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.BipedIKSolvers
  class BipedIKSolvers : public ::Il2CppObject {
    public:
    // public RootMotion.FinalIK.IKSolverLimb leftFoot
    // Size: 0x8
    // Offset: 0x10
    RootMotion::FinalIK::IKSolverLimb* leftFoot;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolverLimb*) == 0x8);
    // public RootMotion.FinalIK.IKSolverLimb rightFoot
    // Size: 0x8
    // Offset: 0x18
    RootMotion::FinalIK::IKSolverLimb* rightFoot;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolverLimb*) == 0x8);
    // public RootMotion.FinalIK.IKSolverLimb leftHand
    // Size: 0x8
    // Offset: 0x20
    RootMotion::FinalIK::IKSolverLimb* leftHand;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolverLimb*) == 0x8);
    // public RootMotion.FinalIK.IKSolverLimb rightHand
    // Size: 0x8
    // Offset: 0x28
    RootMotion::FinalIK::IKSolverLimb* rightHand;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolverLimb*) == 0x8);
    // public RootMotion.FinalIK.IKSolverFABRIK spine
    // Size: 0x8
    // Offset: 0x30
    RootMotion::FinalIK::IKSolverFABRIK* spine;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolverFABRIK*) == 0x8);
    // public RootMotion.FinalIK.IKSolverLookAt lookAt
    // Size: 0x8
    // Offset: 0x38
    RootMotion::FinalIK::IKSolverLookAt* lookAt;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolverLookAt*) == 0x8);
    // public RootMotion.FinalIK.IKSolverAim aim
    // Size: 0x8
    // Offset: 0x40
    RootMotion::FinalIK::IKSolverAim* aim;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolverAim*) == 0x8);
    // public RootMotion.FinalIK.Constraints pelvis
    // Size: 0x8
    // Offset: 0x48
    RootMotion::FinalIK::Constraints* pelvis;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::Constraints*) == 0x8);
    // private RootMotion.FinalIK.IKSolverLimb[] _limbs
    // Size: 0x8
    // Offset: 0x50
    ::Array<RootMotion::FinalIK::IKSolverLimb*>* limbs;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::FinalIK::IKSolverLimb*>*) == 0x8);
    // private RootMotion.FinalIK.IKSolver[] _ikSolvers
    // Size: 0x8
    // Offset: 0x58
    ::Array<RootMotion::FinalIK::IKSolver*>* ikSolvers;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::FinalIK::IKSolver*>*) == 0x8);
    // Creating value type constructor for type: BipedIKSolvers
    BipedIKSolvers(RootMotion::FinalIK::IKSolverLimb* leftFoot_ = {}, RootMotion::FinalIK::IKSolverLimb* rightFoot_ = {}, RootMotion::FinalIK::IKSolverLimb* leftHand_ = {}, RootMotion::FinalIK::IKSolverLimb* rightHand_ = {}, RootMotion::FinalIK::IKSolverFABRIK* spine_ = {}, RootMotion::FinalIK::IKSolverLookAt* lookAt_ = {}, RootMotion::FinalIK::IKSolverAim* aim_ = {}, RootMotion::FinalIK::Constraints* pelvis_ = {}, ::Array<RootMotion::FinalIK::IKSolverLimb*>* limbs_ = {}, ::Array<RootMotion::FinalIK::IKSolver*>* ikSolvers_ = {}) noexcept : leftFoot{leftFoot_}, rightFoot{rightFoot_}, leftHand{leftHand_}, rightHand{rightHand_}, spine{spine_}, lookAt{lookAt_}, aim{aim_}, pelvis{pelvis_}, limbs{limbs_}, ikSolvers{ikSolvers_} {}
    // public RootMotion.FinalIK.IKSolverLimb[] get_limbs()
    // Offset: 0x1CAF64C
    ::Array<RootMotion::FinalIK::IKSolverLimb*>* get_limbs();
    // public RootMotion.FinalIK.IKSolver[] get_ikSolvers()
    // Offset: 0x1CB0264
    ::Array<RootMotion::FinalIK::IKSolver*>* get_ikSolvers();
    // public System.Void AssignReferences(RootMotion.BipedReferences references)
    // Offset: 0x1CAFA08
    void AssignReferences(RootMotion::BipedReferences* references);
    // public System.Void .ctor()
    // Offset: 0x1CB011C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BipedIKSolvers* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::BipedIKSolvers::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BipedIKSolvers*, creationType>()));
    }
  }; // RootMotion.FinalIK.BipedIKSolvers
  #pragma pack(pop)
  static check_size<sizeof(BipedIKSolvers), 88 + sizeof(::Array<RootMotion::FinalIK::IKSolver*>*)> __RootMotion_FinalIK_BipedIKSolversSizeCheck;
  static_assert(sizeof(BipedIKSolvers) == 0x60);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::BipedIKSolvers*, "RootMotion.FinalIK", "BipedIKSolvers");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::BipedIKSolvers::get_limbs
// Il2CppName: get_limbs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<RootMotion::FinalIK::IKSolverLimb*>* (RootMotion::FinalIK::BipedIKSolvers::*)()>(&RootMotion::FinalIK::BipedIKSolvers::get_limbs)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::BipedIKSolvers*), "get_limbs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::BipedIKSolvers::get_ikSolvers
// Il2CppName: get_ikSolvers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<RootMotion::FinalIK::IKSolver*>* (RootMotion::FinalIK::BipedIKSolvers::*)()>(&RootMotion::FinalIK::BipedIKSolvers::get_ikSolvers)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::BipedIKSolvers*), "get_ikSolvers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::BipedIKSolvers::AssignReferences
// Il2CppName: AssignReferences
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::BipedIKSolvers::*)(RootMotion::BipedReferences*)>(&RootMotion::FinalIK::BipedIKSolvers::AssignReferences)> {
  const MethodInfo* get() {
    static auto* references = &::il2cpp_utils::GetClassFromName("RootMotion", "BipedReferences")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::BipedIKSolvers*), "AssignReferences", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{references});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::BipedIKSolvers::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
