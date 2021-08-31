// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.IKSolverHeuristic
#include "RootMotion/FinalIK/IKSolverHeuristic.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.IKSolverCCD
  // [TokenAttribute] Offset: FFFFFFFF
  class IKSolverCCD : public RootMotion::FinalIK::IKSolverHeuristic {
    public:
    // public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.IterationDelegate OnPreIteration
    // Size: 0x8
    // Offset: 0x88
    RootMotion::FinalIK::IKSolver::IterationDelegate* OnPreIteration;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolver::IterationDelegate*) == 0x8);
    // Creating value type constructor for type: IKSolverCCD
    IKSolverCCD(RootMotion::FinalIK::IKSolver::IterationDelegate* OnPreIteration_ = {}) noexcept : OnPreIteration{OnPreIteration_} {}
    // Creating conversion operator: operator RootMotion::FinalIK::IKSolver::IterationDelegate*
    constexpr operator RootMotion::FinalIK::IKSolver::IterationDelegate*() const noexcept {
      return OnPreIteration;
    }
    // Get instance field: public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.IterationDelegate OnPreIteration
    RootMotion::FinalIK::IKSolver::IterationDelegate* _get_OnPreIteration();
    // Set instance field: public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.IterationDelegate OnPreIteration
    void _set_OnPreIteration(RootMotion::FinalIK::IKSolver::IterationDelegate* value);
    // public System.Void FadeOutBoneWeights()
    // Offset: 0x1CAB068
    void FadeOutBoneWeights();
    // protected System.Void Solve(UnityEngine.Vector3 targetPosition)
    // Offset: 0x1CABE78
    void Solve(UnityEngine::Vector3 targetPosition);
    // public System.Void .ctor()
    // Offset: 0x1CAC5DC
    // Implemented from: RootMotion.FinalIK.IKSolverHeuristic
    // Base method: System.Void IKSolverHeuristic::.ctor()
    // Base method: System.Void IKSolver::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKSolverCCD* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::IKSolverCCD::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKSolverCCD*, creationType>()));
    }
    // protected override System.Void OnInitiate()
    // Offset: 0x1CAB118
    // Implemented from: RootMotion.FinalIK.IKSolverHeuristic
    // Base method: System.Void IKSolverHeuristic::OnInitiate()
    void OnInitiate();
    // protected override System.Void OnUpdate()
    // Offset: 0x1CAB718
    // Implemented from: RootMotion.FinalIK.IKSolverHeuristic
    // Base method: System.Void IKSolverHeuristic::OnUpdate()
    void OnUpdate();
  }; // RootMotion.FinalIK.IKSolverCCD
  #pragma pack(pop)
  static check_size<sizeof(IKSolverCCD), 136 + sizeof(RootMotion::FinalIK::IKSolver::IterationDelegate*)> __RootMotion_FinalIK_IKSolverCCDSizeCheck;
  static_assert(sizeof(IKSolverCCD) == 0x90);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKSolverCCD*, "RootMotion.FinalIK", "IKSolverCCD");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverCCD::FadeOutBoneWeights
// Il2CppName: FadeOutBoneWeights
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverCCD::*)()>(&RootMotion::FinalIK::IKSolverCCD::FadeOutBoneWeights)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverCCD*), "FadeOutBoneWeights", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverCCD::Solve
// Il2CppName: Solve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverCCD::*)(UnityEngine::Vector3)>(&RootMotion::FinalIK::IKSolverCCD::Solve)> {
  static const MethodInfo* get() {
    static auto* targetPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverCCD*), "Solve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetPosition});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverCCD::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverCCD::OnInitiate
// Il2CppName: OnInitiate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverCCD::*)()>(&RootMotion::FinalIK::IKSolverCCD::OnInitiate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverCCD*), "OnInitiate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverCCD::OnUpdate
// Il2CppName: OnUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverCCD::*)()>(&RootMotion::FinalIK::IKSolverCCD::OnUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverCCD*), "OnUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
