// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.IKSolver
#include "RootMotion/FinalIK/IKSolver.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.IKSolverHeuristic
  // [TokenAttribute] Offset: FFFFFFFF
  class IKSolverHeuristic : public RootMotion::FinalIK::IKSolver {
    public:
    // public UnityEngine.Transform target
    // Size: 0x8
    // Offset: 0x58
    UnityEngine::Transform* target;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public System.Single tolerance
    // Size: 0x4
    // Offset: 0x60
    float tolerance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 maxIterations
    // Size: 0x4
    // Offset: 0x64
    int maxIterations;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean useRotationLimits
    // Size: 0x1
    // Offset: 0x68
    bool useRotationLimits;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean XY
    // Size: 0x1
    // Offset: 0x69
    bool XY;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: XY and: bones
    char __padding4[0x6] = {};
    // public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Bone[] bones
    // Size: 0x8
    // Offset: 0x70
    ::Array<RootMotion::FinalIK::IKSolver::Bone*>* bones;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::FinalIK::IKSolver::Bone*>*) == 0x8);
    // protected UnityEngine.Vector3 lastLocalDirection
    // Size: 0xC
    // Offset: 0x78
    UnityEngine::Vector3 lastLocalDirection;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // protected System.Single chainLength
    // Size: 0x4
    // Offset: 0x84
    float chainLength;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: IKSolverHeuristic
    IKSolverHeuristic(UnityEngine::Transform* target_ = {}, float tolerance_ = {}, int maxIterations_ = {}, bool useRotationLimits_ = {}, bool XY_ = {}, ::Array<RootMotion::FinalIK::IKSolver::Bone*>* bones_ = {}, UnityEngine::Vector3 lastLocalDirection_ = {}, float chainLength_ = {}) noexcept : target{target_}, tolerance{tolerance_}, maxIterations{maxIterations_}, useRotationLimits{useRotationLimits_}, XY{XY_}, bones{bones_}, lastLocalDirection{lastLocalDirection_}, chainLength{chainLength_} {}
    // Get instance field reference: public UnityEngine.Transform target
    UnityEngine::Transform*& dyn_target();
    // Get instance field reference: public System.Single tolerance
    float& dyn_tolerance();
    // Get instance field reference: public System.Int32 maxIterations
    int& dyn_maxIterations();
    // Get instance field reference: public System.Boolean useRotationLimits
    bool& dyn_useRotationLimits();
    // Get instance field reference: public System.Boolean XY
    bool& dyn_XY();
    // Get instance field reference: public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Bone[] bones
    ::Array<RootMotion::FinalIK::IKSolver::Bone*>*& dyn_bones();
    // Get instance field reference: protected UnityEngine.Vector3 lastLocalDirection
    UnityEngine::Vector3& dyn_lastLocalDirection();
    // Get instance field reference: protected System.Single chainLength
    float& dyn_chainLength();
    // protected System.Int32 get_minBones()
    // Offset: 0x1CB5AF8
    int get_minBones();
    // protected System.Boolean get_boneLengthCanBeZero()
    // Offset: 0x1CB5B00
    bool get_boneLengthCanBeZero();
    // protected System.Boolean get_allowCommonParent()
    // Offset: 0x1CB5B08
    bool get_allowCommonParent();
    // protected UnityEngine.Vector3 get_localDirection()
    // Offset: 0x1CB5B18
    UnityEngine::Vector3 get_localDirection();
    // protected System.Single get_positionOffset()
    // Offset: 0x1CACA78
    float get_positionOffset();
    // public System.Boolean SetChain(UnityEngine.Transform[] hierarchy, UnityEngine.Transform root)
    // Offset: 0x1CB52B4
    bool SetChain(::Array<UnityEngine::Transform*>* hierarchy, UnityEngine::Transform* root);
    // public System.Void AddBone(UnityEngine.Transform bone)
    // Offset: 0x1CB5448
    void AddBone(UnityEngine::Transform* bone);
    // protected System.Void InitiateBones()
    // Offset: 0x1CABE5C
    void InitiateBones();
    // protected UnityEngine.Vector3 GetSingularityOffset()
    // Offset: 0x1CAC6D4
    UnityEngine::Vector3 GetSingularityOffset();
    // private System.Boolean SingularityDetected()
    // Offset: 0x1CB5C4C
    bool SingularityDetected();
    // public System.Void .ctor()
    // Offset: 0x1CAAE2C
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKSolverHeuristic* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::IKSolverHeuristic::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKSolverHeuristic*, creationType>()));
    }
    // public override System.Void StoreDefaultLocalState()
    // Offset: 0x1CB5584
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::StoreDefaultLocalState()
    void StoreDefaultLocalState();
    // public override System.Void FixTransforms()
    // Offset: 0x1CB55F0
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::FixTransforms()
    void FixTransforms();
    // public override System.Boolean IsValid(ref System.String message)
    // Offset: 0x1CB5670
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Boolean IKSolver::IsValid(ref System.String message)
    bool IsValid(ByRef<::Il2CppString*> message);
    // public override RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Point[] GetPoints()
    // Offset: 0x1CB59FC
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Point[] IKSolver::GetPoints()
    ::Array<RootMotion::FinalIK::IKSolver::Point*>* GetPoints();
    // public override RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Point GetPoint(UnityEngine.Transform transform)
    // Offset: 0x1CB5A04
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Point IKSolver::GetPoint(UnityEngine.Transform transform)
    RootMotion::FinalIK::IKSolver::Point* GetPoint(UnityEngine::Transform* transform);
    // protected override System.Void OnInitiate()
    // Offset: 0x1CB5B10
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::OnInitiate()
    void OnInitiate();
    // protected override System.Void OnUpdate()
    // Offset: 0x1CB5B14
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::OnUpdate()
    void OnUpdate();
  }; // RootMotion.FinalIK.IKSolverHeuristic
  #pragma pack(pop)
  static check_size<sizeof(IKSolverHeuristic), 132 + sizeof(float)> __RootMotion_FinalIK_IKSolverHeuristicSizeCheck;
  static_assert(sizeof(IKSolverHeuristic) == 0x88);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKSolverHeuristic*, "RootMotion.FinalIK", "IKSolverHeuristic");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverHeuristic::get_minBones
// Il2CppName: get_minBones
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (RootMotion::FinalIK::IKSolverHeuristic::*)()>(&RootMotion::FinalIK::IKSolverHeuristic::get_minBones)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverHeuristic*), "get_minBones", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverHeuristic::get_boneLengthCanBeZero
// Il2CppName: get_boneLengthCanBeZero
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKSolverHeuristic::*)()>(&RootMotion::FinalIK::IKSolverHeuristic::get_boneLengthCanBeZero)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverHeuristic*), "get_boneLengthCanBeZero", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverHeuristic::get_allowCommonParent
// Il2CppName: get_allowCommonParent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKSolverHeuristic::*)()>(&RootMotion::FinalIK::IKSolverHeuristic::get_allowCommonParent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverHeuristic*), "get_allowCommonParent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverHeuristic::get_localDirection
// Il2CppName: get_localDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (RootMotion::FinalIK::IKSolverHeuristic::*)()>(&RootMotion::FinalIK::IKSolverHeuristic::get_localDirection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverHeuristic*), "get_localDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverHeuristic::get_positionOffset
// Il2CppName: get_positionOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (RootMotion::FinalIK::IKSolverHeuristic::*)()>(&RootMotion::FinalIK::IKSolverHeuristic::get_positionOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverHeuristic*), "get_positionOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverHeuristic::SetChain
// Il2CppName: SetChain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKSolverHeuristic::*)(::Array<UnityEngine::Transform*>*, UnityEngine::Transform*)>(&RootMotion::FinalIK::IKSolverHeuristic::SetChain)> {
  static const MethodInfo* get() {
    static auto* hierarchy = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Transform"), 1)->byval_arg;
    static auto* root = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverHeuristic*), "SetChain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hierarchy, root});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverHeuristic::AddBone
// Il2CppName: AddBone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverHeuristic::*)(UnityEngine::Transform*)>(&RootMotion::FinalIK::IKSolverHeuristic::AddBone)> {
  static const MethodInfo* get() {
    static auto* bone = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverHeuristic*), "AddBone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bone});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverHeuristic::InitiateBones
// Il2CppName: InitiateBones
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverHeuristic::*)()>(&RootMotion::FinalIK::IKSolverHeuristic::InitiateBones)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverHeuristic*), "InitiateBones", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverHeuristic::GetSingularityOffset
// Il2CppName: GetSingularityOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (RootMotion::FinalIK::IKSolverHeuristic::*)()>(&RootMotion::FinalIK::IKSolverHeuristic::GetSingularityOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverHeuristic*), "GetSingularityOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverHeuristic::SingularityDetected
// Il2CppName: SingularityDetected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKSolverHeuristic::*)()>(&RootMotion::FinalIK::IKSolverHeuristic::SingularityDetected)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverHeuristic*), "SingularityDetected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverHeuristic::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverHeuristic::StoreDefaultLocalState
// Il2CppName: StoreDefaultLocalState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverHeuristic::*)()>(&RootMotion::FinalIK::IKSolverHeuristic::StoreDefaultLocalState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverHeuristic*), "StoreDefaultLocalState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverHeuristic::FixTransforms
// Il2CppName: FixTransforms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverHeuristic::*)()>(&RootMotion::FinalIK::IKSolverHeuristic::FixTransforms)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverHeuristic*), "FixTransforms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverHeuristic::IsValid
// Il2CppName: IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKSolverHeuristic::*)(ByRef<::Il2CppString*>)>(&RootMotion::FinalIK::IKSolverHeuristic::IsValid)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverHeuristic*), "IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverHeuristic::GetPoints
// Il2CppName: GetPoints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<RootMotion::FinalIK::IKSolver::Point*>* (RootMotion::FinalIK::IKSolverHeuristic::*)()>(&RootMotion::FinalIK::IKSolverHeuristic::GetPoints)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverHeuristic*), "GetPoints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverHeuristic::GetPoint
// Il2CppName: GetPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<RootMotion::FinalIK::IKSolver::Point* (RootMotion::FinalIK::IKSolverHeuristic::*)(UnityEngine::Transform*)>(&RootMotion::FinalIK::IKSolverHeuristic::GetPoint)> {
  static const MethodInfo* get() {
    static auto* transform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverHeuristic*), "GetPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transform});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverHeuristic::OnInitiate
// Il2CppName: OnInitiate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverHeuristic::*)()>(&RootMotion::FinalIK::IKSolverHeuristic::OnInitiate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverHeuristic*), "OnInitiate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverHeuristic::OnUpdate
// Il2CppName: OnUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverHeuristic::*)()>(&RootMotion::FinalIK::IKSolverHeuristic::OnUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverHeuristic*), "OnUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
